/* --------------------------------------------------------------------------------
 #
 #	4DPlugin.h
 #	source generated by 4D Plugin Wizard
 #	Project : tesseract
 #	author : miyako
 #	12/05/20
 #
 # --------------------------------------------------------------------------------*/


#include "leptonica/allheaders.h"
#include "tesseract/baseapi.h"

// --- OCR
void OCR_Set_language_folder(sLONG_PTR *pResult, PackagePtr pParams);
void OCR_Get_timeout(sLONG_PTR *pResult, PackagePtr pParams);
void OCR_SET_TIMEOUT(sLONG_PTR *pResult, PackagePtr pParams);
void OCR_Read_image_text(sLONG_PTR *pResult, PackagePtr pParams);
void OCR_Get_language_folder(sLONG_PTR *pResult, PackagePtr pParams);
