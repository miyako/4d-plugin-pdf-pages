/* --------------------------------------------------------------------------------
 #
 #	4DPlugin.cpp
 #	source generated by 4D Plugin Wizard
 #	Project : PDF Page
 #	author : miyako
 #	2017/10/18
 #
 # --------------------------------------------------------------------------------*/


#include "4DPluginAPI.h"
#include "4DPlugin.h"

void PluginMain(PA_long32 selector, PA_PluginParameters params)
{
	try
	{
		PA_long32 pProcNum = selector;
		sLONG_PTR *pResult = (sLONG_PTR *)params->fResult;
		PackagePtr pParams = (PackagePtr)params->fParameters;

		CommandDispatcher(pProcNum, pResult, pParams); 
	}
	catch(...)
	{

	}
}

void CommandDispatcher (PA_long32 pProcNum, sLONG_PTR *pResult, PackagePtr pParams)
{
	switch(pProcNum)
	{
// --- Page

		case 1 :
			PDF_SET_ROTATION(pResult, pParams);
			break;

		case 2 :
			PDF_REMOVE_PAGE(pResult, pParams);
			break;

		case 3 :
			PDF_EXCHANGE_PAGE(pResult, pParams);
			break;

		case 4 :
			PDF_INSERT_PAGE(pResult, pParams);
			break;

		case 5 :
			PDF_GET_PAGE_ANNOTATION(pResult, pParams);
			break;

		case 6 :
			PDF_GET_TEXT(pResult, pParams);
			break;

		case 7 :
			PDF_GET_IMAGES(pResult, pParams);
			break;

		case 8 :
			PDF_GET_DATA(pResult, pParams);
			break;

	}
}

// ------------------------------------- Page -------------------------------------


void PDF_SET_ROTATION(sLONG_PTR *pResult, PackagePtr pParams)
{
	C_TEXT Param1_path;
	ARRAY_REAL Param2_rotation;

	Param1_path.fromParamAtIndex(pParams, 1);
	Param2_rotation.fromParamAtIndex(pParams, 2);

	// --- write the code of PDF_SET_ROTATION here...

}

void PDF_REMOVE_PAGE(sLONG_PTR *pResult, PackagePtr pParams)
{
	C_TEXT Param1_path;
	C_LONGINT Param2;

	Param1_path.fromParamAtIndex(pParams, 1);
	Param2.fromParamAtIndex(pParams, 2);

	// --- write the code of PDF_REMOVE_PAGE here...

}

void PDF_EXCHANGE_PAGE(sLONG_PTR *pResult, PackagePtr pParams)
{
	C_TEXT Param1_path;
	C_LONGINT Param2;
	C_LONGINT Param3;

	Param1_path.fromParamAtIndex(pParams, 1);
	Param2.fromParamAtIndex(pParams, 2);
	Param3.fromParamAtIndex(pParams, 3);

	// --- write the code of PDF_EXCHANGE_PAGE here...

}

void PDF_INSERT_PAGE(sLONG_PTR *pResult, PackagePtr pParams)
{
	C_TEXT Param1_path;
	C_LONGINT Param2_page;

	Param1_path.fromParamAtIndex(pParams, 1);
	Param2_page.fromParamAtIndex(pParams, 2);

	// --- write the code of PDF_INSERT_PAGE here...

}

void PDF_GET_PAGE_ANNOTATION(sLONG_PTR *pResult, PackagePtr pParams)
{
	C_TEXT Param1_path;
	C_LONGINT Param2;
	ARRAY_TEXT Param3;
	ARRAY_TEXT Param4;
	ARRAY_TEXT Param5;
	ARRAY_TEXT Param6;

	Param1_path.fromParamAtIndex(pParams, 1);
	Param2.fromParamAtIndex(pParams, 2);

	// --- write the code of PDF_GET_PAGE_ANNOTATION here...

	Param3.toParamAtIndex(pParams, 3);
	Param4.toParamAtIndex(pParams, 4);
	Param5.toParamAtIndex(pParams, 5);
	Param6.toParamAtIndex(pParams, 6);
}

void PDF_GET_TEXT(sLONG_PTR *pResult, PackagePtr pParams)
{
	C_TEXT Param1_path;
	ARRAY_TEXT Param2_text;

	Param1_path.fromParamAtIndex(pParams, 1);

	// --- write the code of PDF_GET_TEXT here...

	Param2_text.toParamAtIndex(pParams, 2);
}

void PDF_GET_IMAGES(sLONG_PTR *pResult, PackagePtr pParams)
{
	C_TEXT Param1_path;

	Param1_path.fromParamAtIndex(pParams, 1);

	// --- write the code of PDF_GET_IMAGES here...

	Param2_images.toParamAtIndex(pParams, 2);
}

void PDF_GET_DATA(sLONG_PTR *pResult, PackagePtr pParams)
{
	C_TEXT Param1_path;

	Param1_path.fromParamAtIndex(pParams, 1);

	// --- write the code of PDF_GET_DATA here...

	Param2_data.toParamAtIndex(pParams, 2);
}

