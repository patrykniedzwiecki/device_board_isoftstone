/*
 * isp_default_tbl.h for all v4l2 subdev manage
 *
 * Copyright (c) 2017 by Allwinnertech Co., Ltd.  http://www.allwinnertech.com
 *
 * Authors:  Zhao Wei <zhaowei@allwinnertech.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _ISP_DEFAULT_TBL_H_
#define _ISP_DEFAULT_TBL_H_

#if defined CONFIG_ARCH_SUN8IW16P1
#include "isp520/isp520_reg_cfg.h"
#elif defined CONFIG_ARCH_SUN8IW19P1
#include "isp521/isp521_reg_cfg.h"
#elif defined CONFIG_ARCH_SUN50IW10
#include "isp522/isp522_reg_cfg.h"
#else
#include "isp500/isp500_reg_cfg.h"
#endif

unsigned int isp_default_reg[ISP_LOAD_REG_SIZE>>2] = {
#if !defined CONFIG_ARCH_SUN8IW16P1 && !defined CONFIG_ARCH_SUN8IW19P1 && !defined CONFIG_ARCH_SUN50IW10
	0x00000101, 0x00000001, 0x00004111, 0x00000087,
	0x03c00010, 0x00000000, 0x28000000, 0x04000000,
	0x0dc11000, 0x0dc11400, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x80000000, 0x00000004, 0x00000000, 0x0136003c,
	0x00000106, 0x00005040, 0x00000000, 0x00000000,
	0x00000000, 0x000f0013, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x01e00280, 0x01e00280,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x0f000200, 0x01390010,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x04000804, 0x00000000, 0x00000000, 0x00000000,
	0x00021010, 0x00000000, 0x00000000, 0x00000000,
	0x00400010, 0x01000100, 0x00200020, 0x00000100,
	0x00200020, 0x00200020, 0x04000400, 0x04000400,
	0x00200020, 0x00200020, 0x00ff00ff, 0x000000ff,
	0x000f0013, 0x00000000, 0x00000000, 0x00000000,
	0x00080008, 0x00000000, 0x00000000, 0x00000000,
	0x40070f01, 0xfcff0080, 0x1f173c2d, 0x001845c8,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x01000100, 0x01000100, 0x00000fff, 0x00000010,
	0x30000000, 0x00000080, 0x0003875c, 0x00400010,
	0x02000200, 0x04000400, 0x00000000, 0x00000484,
	0x00000808, 0x00420077, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x02040107, 0x07680064, 0x01c206d6, 0x068701c2,
	0x000007b7, 0x02010010, 0x00000008, 0x00000000,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00000000, 0x00000000, 0x00000000,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x02108421, 0x02108421,
	0x02108421, 0x02108421, 0x02108421, 0x02108421,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00000000, 0x00000000,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
#else
	0x00000173, 0x00530000, 0xfff00000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x1f01ba90, 0x1f01ba90, 0x1f018000, 0x00000000,
	0x00001451, 0x00000000, 0x8000010a, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x001f0010, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00004224, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x01ce01cd, 0x0000ffff, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000cc0,
	0x00000000, 0x00200020, 0x00200020, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x000000a0, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x04380780, 0x04380780, 0x00000000, 0x00200020,
	0x00200020, 0x00000000, 0x00000000, 0x00000000,
	0x0f000200, 0x01390010, 0x003c0c00, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x04000804, 0x00000000, 0x00000000, 0x00000000,
	0x0136003c, 0x00000106, 0x00005040, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00b4c8dc, 0x1c181410, 0x00203040, 0x8360410a,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x1f1f1fff, 0x00020000, 0x00ff00ff, 0x001900ff,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00200020, 0x00200020, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x04000400, 0x04000400, 0x00000000, 0x00000000,
	0x01000100, 0x01000100, 0x00000fff, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x30000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x40070f01, 0xfcff0080, 0x1f173c2d, 0x001845c8,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000080, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00800080, 0x00800080, 0x041f0404, 0x00000000,
	0x00000140, 0x1f1f0018, 0x00400040, 0x00400040,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000010, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000484, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x208100a0, 0x42cc00ab, 0x008700f0, 0x01e50111,
	0xffdffbff, 0x00000100, 0x00000100, 0x00000100,
	0x00005100, 0xf2d33b98, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x02040107, 0x07680064, 0x01c206d6, 0x068701c2,
	0x000007b7, 0x02000040, 0x00000200, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x000f0013, 0x00000000, 0x00000000, 0x00000000,
	0x01080000, 0x008600f0, 0x00000000, 0x39ccf1ac,
	0x00029391, 0x107ca5bd, 0x37e52759, 0x002d0035,
	0x00c5027b, 0x004d009d, 0x00710088, 0x2fb00511,
	0x2cc00414, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x000000f0,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00ff00ff, 0x000000ff, 0x000f0013, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00080008, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000008, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00000008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00000008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00000008, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x01000100,
	0x01000100, 0x01000100, 0x01000100, 0x01000100,
	0x01000100, 0x01000100, 0x01000100, 0x01000100,
	0x01000100, 0x01000100, 0x01000100, 0x01000100,
	0x01000100, 0x01000100, 0x01000100, 0x01000100,
	0x01000100, 0x01000100, 0x01000100, 0x01000100,
	0x01000100, 0x01000100, 0x01000100, 0x01000100,
	0x01000100, 0x01000100, 0x01000100, 0x01000100,
	0x01000100, 0x01000100, 0x01000100, 0x01000100,
	0x01000100, 0x01000100, 0x01000100, 0x01000100,
	0x01000100, 0x01000100, 0x01000100, 0x01000100,
	0x01000100, 0x01000100, 0x01000100, 0x01000100,
	0x01000100, 0x01000100, 0x01000100, 0x01000100,
	0x01000100, 0x01000100, 0x01000100, 0x01000100,
	0x01000100, 0x01000100, 0x01000100, 0x01000100,
	0x01000100, 0x01000100, 0x01000100, 0x01000100,
	0x01000100, 0x01000100, 0x01000100, 0x01000100,
	0x01000100, 0x01000100, 0x01000100, 0x01000100,
	0x01000100, 0x01000100, 0x01000100, 0x01000100,
	0x01000100, 0x80808080, 0x80808080, 0x80808080,
	0x80808080, 0x80808080, 0x80808080, 0x80808080,
	0x80808080, 0x80808080, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00000008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00000008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00000008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00080008, 0x00080008, 0x00080008,
	0x00080008, 0x00000008, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
	0x00000000, 0x00000000, 0x00000000, 0x00000000,
#endif
};

#endif /*_ISP_DEFAULT_TBL_H_*/