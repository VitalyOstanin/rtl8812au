/******************************************************************************
*
* Copyright(c) 2007 - 2011 Realtek Corporation. All rights reserved.
*
* This program is free software; you can redistribute it and/or modify it
* under the terms of version 2 of the GNU General Public License as
* published by the Free Software Foundation.
*
* This program is distributed in the hope that it will be useful, but WITHOUT
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
* more details.
*
******************************************************************************/

#ifndef __INC_MP_FW_HW_IMG_8821A_H
#define __INC_MP_FW_HW_IMG_8821A_H


/******************************************************************************
*                           FW_AP.TXT
******************************************************************************/

void
ODM_ReadFirmware_MP_8821A_FW_AP(
     PDM_ODM_T    pDM_Odm,
     u1Byte       *pFirmware,
     u4Byte       *pFirmwareSize
);

/******************************************************************************
*                           FW_BT.TXT
******************************************************************************/

void
ODM_ReadFirmware_MP_8821A_FW_BT(
     PDM_ODM_T    pDM_Odm,
     u1Byte       *pFirmware,
     u4Byte       *pFirmwareSize
);

/******************************************************************************
*                           FW_NIC.TXT
******************************************************************************/

void
ODM_ReadFirmware_MP_8821A_FW_NIC(
     PDM_ODM_T    pDM_Odm,
     u1Byte       *pFirmware,
     u4Byte       *pFirmwareSize
);

/******************************************************************************
*                           FW_WoWLAN.TXT
******************************************************************************/

void
ODM_ReadFirmware_MP_8821A_FW_WoWLAN(
     PDM_ODM_T    pDM_Odm,
     u1Byte       *pFirmware,
     u4Byte       *pFirmwareSize
);

#endif
