# 4d-plugin-pdf-pages
A small subset of [PDFKit](https://developer.apple.com/documentation/pdfkit?language=objc) to manipulate pages of a PDF document via the [PDFPage](https://developer.apple.com/documentation/pdfkit/pdfpage?language=objc) class.

## Platform

| carbon | cocoa | win32 | win64 |
|:------:|:-----:|:---------:|:---------:|
|<img src="https://cloud.githubusercontent.com/assets/1725068/22371562/1b091f0a-e4db-11e6-8458-8653954a7cce.png" width="24" height="24" />|<img src="https://cloud.githubusercontent.com/assets/1725068/22371562/1b091f0a-e4db-11e6-8458-8653954a7cce.png" width="24" height="24" />|||

### Version

<img src="https://cloud.githubusercontent.com/assets/1725068/18940649/21945000-8645-11e6-86ed-4a0f800e5a73.png" width="32" height="32" /> <img src="https://cloud.githubusercontent.com/assets/1725068/18940648/2192ddba-8645-11e6-864d-6d5692d55717.png" width="32" height="32" />

### Compatibility Note

This plugin shares some command names and constants as [pdf-kit](https://github.com/miyako/4d-plugin-pdf-kit), but the signature and data types are incompatible; therefore you can not use both together. First, comment out the old code, replace the plugin, then uncomment the code to complete the transition.

---

## Syntax

```
PDF GET IMAGES (path;images)
```

Parameter|Type|Description
------------|------------|----
path|TEXT|
images|ARRAY PICTURE|

```
PDF GET TEXT (path;text)
```

Parameter|Type|Description
------------|------------|----
path|TEXT|
text|ARRAY TEXT|

```
PDF GET DATA (path;data)
```

Parameter|Type|Description
------------|------------|----
path|TEXT|
data|ARRAY BLOB|

```
PDF SET ROTATION (path;rotation)
```

Parameter|Type|Description
------------|------------|----
path|TEXT|
rotation|ARRAY REAL|

If ``rotation`` is ``0``, ``90``, ``180`` or ``270``, PDFKit is used. Otherwise, CoreGraphics is used. To force CG for multiples of 90, pass a negative value or a value exeeding 360.

```
PDF REMOVE PAGE (path;page)
```

Parameter|Type|Description
------------|------------|----
path|TEXT|
page|LONGINT|


```
PDF EXCHANGE PAGES (path;page1;page2)
```

Parameter|Type|Description
------------|------------|----
path|TEXT|
page1|LONGINT|
page2|LONGINT|


