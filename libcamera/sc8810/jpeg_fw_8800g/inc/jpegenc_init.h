/******************************************************************************
 ** File Name:      JpegEnc_init.h                                            *
 ** Author:         Xiaowei Luo                                               *
 ** DATE:           12/14/2006                                                *
 ** Copyright:      2006 Spreatrum, Incoporated. All Rights Reserved.         *
 ** Description:    This file defines the operation interfaces of macroblock  *
 **                 operation of mp4 deccoder.                                *
 *****************************************************************************/
/******************************************************************************
 **                   Edit    History                                         *
 **---------------------------------------------------------------------------* 
 ** DATE          NAME            DESCRIPTION                                 * 
 ** 12/14/2006    Xiaowei Luo     Create.                                     *
 *****************************************************************************/
#ifndef _JPEGENC_INIT_H_
#define _JPEGENC_INIT_H_
/*----------------------------------------------------------------------------*
**                        Dependencies                                        *
**---------------------------------------------------------------------------*/
#include "jpegcodec_def.h"
/**---------------------------------------------------------------------------*
**                        Compiler Flag                                       *
**---------------------------------------------------------------------------*/
#ifdef   __cplusplus
    extern   "C" 
    {
#endif

PUBLIC JPEG_RET_E JpegEnc_InitParam(JPEG_ENC_INPUT_PARA_T *input_para_ptr);
PUBLIC void JpegEnc_VspTopRegCfg(void);
PUBLIC void JpegEnc_VspSubModuleCfg(void);
PUBLIC void JpegEnc_QTableCfg(void);

/**---------------------------------------------------------------------------*
**                         Compiler Flag                                      *
**---------------------------------------------------------------------------*/
#ifdef   __cplusplus
    }
#endif
/**---------------------------------------------------------------------------*/
// End 
#endif //_JPEGENC_INIT_H_
