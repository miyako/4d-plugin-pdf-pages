# 4d-plugin-pdf-pages
A small subset of [PDFKit](https://developer.apple.com/documentation/pdfkit?language=objc) to manipulate pages of a PDF document via the [PDFPage](https://developer.apple.com/documentation/pdfkit/pdfpage?language=objc) class.

## Platform

| carbon | cocoa | win32 | win64 |
|:------:|:-----:|:---------:|:---------:|
|<img src="https://cloud.githubusercontent.com/assets/1725068/22371562/1b091f0a-e4db-11e6-8458-8653954a7cce.png" width="24" height="24" />|<img src="https://cloud.githubusercontent.com/assets/1725068/22371562/1b091f0a-e4db-11e6-8458-8653954a7cce.png" width="24" height="24" />|||

### Version

<img src="https://cloud.githubusercontent.com/assets/1725068/18940649/21945000-8645-11e6-86ed-4a0f800e5a73.png" width="32" height="32" /> <img src="https://cloud.githubusercontent.com/assets/1725068/18940648/2192ddba-8645-11e6-864d-6d5692d55717.png" width="32" height="32" />

### Compatibility Note

This plugin shared the same command name and constants as [pdf-kit](https://github.com/miyako/4d-plugin-pdf-kit), but the signature and data types are incompatible; therefore you can not use both together. First, comment out the old code, replace the plugin, then uncomment the code to complete the transition.
