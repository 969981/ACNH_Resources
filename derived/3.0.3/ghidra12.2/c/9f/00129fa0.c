
int FUN_00129fa0(uint param_1,undefined8 param_2,uint *param_3,undefined4 *param_4,int *param_5,
                uint param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_b8 [3];
  uint local_ac;
  uint local_a8;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_74;
  ushort local_70;
  ushort local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_48;
  ushort local_44;
  
  *param_3 = 0;
  *param_4 = 0;
  param_3[1] = 0;
  param_4[1] = 0;
  param_3[2] = 0;
  param_4[2] = 0;
  param_3[3] = 0;
  param_4[3] = 0;
  param_3[4] = 0;
  param_4[4] = 0;
  param_3[5] = 0;
  param_4[5] = 0;
  param_3[6] = 0;
  param_4[6] = 0;
  param_3[7] = 0;
  param_4[7] = 0;
  param_3[8] = 0;
  param_4[8] = 0;
  param_3[9] = 0;
  param_4[9] = 0;
  param_3[10] = 0;
  param_4[10] = 0;
  param_3[0xb] = 0;
  param_4[0xb] = 0;
  *param_5 = 0;
  iVar2 = FUN_0010db60(param_2,0x10,0);
  if (iVar2 != 0) {
    return -0x4358;
  }
  iVar2 = FUN_0010db20(local_b8,4,param_2);
  if (iVar2 == 0) {
    return -0x4258;
  }
  uVar1 = (local_b8[0] & 0xff00ff00) >> 8 | (local_b8[0] & 0xff00ff) << 8;
  uVar1 = (uVar1 >> 0x10 | uVar1 << 0x10) + 0x1c;
  *param_3 = uVar1;
  *param_4 = 0;
  if (0x78 < uVar1) {
    return -0x6f58;
  }
  iVar2 = FUN_0010db60(param_2,0,0);
  if (iVar2 != 0) {
    return -0x4358;
  }
  iVar2 = FUN_0010db20(local_b8,uVar1,param_2);
  if (iVar2 == 0) {
    return -0x4258;
  }
  uVar1 = (local_ac & 0xff00ff00) >> 8 | (local_ac & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  *param_5 = uVar1 + *param_3;
  uVar3 = (local_60 & 0xff00ff00) >> 8 | (local_60 & 0xff00ff) << 8;
  if ((int)(uVar3 >> 0x10 | uVar3 << 0x10) < 1) {
    uVar5 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = (local_88 & 0xff00ff00) >> 8 | (local_88 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar5 = (local_84 & 0xff00ff00) >> 8 | (local_84 & 0xff00ff) << 8;
    uVar4 = uVar5 >> 0x10 | uVar5 << 0x10;
    if ((uVar4 == 0) &&
       (uVar5 = (local_80 & 0xff00ff00) >> 8 | (local_80 & 0xff00ff) << 8,
       uVar4 = uVar5 >> 0x10 | uVar5 << 0x10, uVar4 == 0)) {
      uVar5 = (local_74 & 0xff00ff00) >> 8 | (local_74 & 0xff00ff) << 8;
      uVar4 = uVar5 >> 0x10 | uVar5 << 0x10;
    }
    uVar5 = uVar4 - uVar3;
    if (uVar4 < uVar3 || uVar5 == 0) {
      return -0x6f58;
    }
  }
  param_3[1] = uVar5;
  param_4[1] = uVar3;
  uVar3 = (local_5c & 0xff00ff00) >> 8 | (local_5c & 0xff00ff) << 8;
  if ((int)(uVar3 >> 0x10 | uVar3 << 0x10) < 1) {
    param_3[2] = 0;
    param_4[2] = 0;
    if ((param_6 & 1) == 0) goto LAB_0012a1c8;
LAB_0012a17c:
    uVar3 = (local_58 & 0xff00ff00) >> 8 | (local_58 & 0xff00ff) << 8;
    if ((int)(uVar3 >> 0x10 | uVar3 << 0x10) < 1) {
      uVar3 = 0;
      uVar5 = 0;
    }
    else {
      uVar3 = (local_80 & 0xff00ff00) >> 8 | (local_80 & 0xff00ff) << 8;
      uVar5 = uVar3 >> 0x10 | uVar3 << 0x10;
      if (uVar5 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (local_74 & 0xff00ff00) >> 8 | (local_74 & 0xff00ff) << 8;
        uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
        if (uVar3 <= uVar5) {
          return -0x6f58;
        }
        uVar3 = (4 - uVar5) + uVar3;
      }
    }
  }
  else {
    uVar3 = (local_84 & 0xff00ff00) >> 8 | (local_84 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    if (uVar3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (local_80 & 0xff00ff00) >> 8 | (local_80 & 0xff00ff) << 8;
      uVar4 = uVar5 >> 0x10 | uVar5 << 0x10;
      if (uVar4 == 0) {
        uVar5 = (local_74 & 0xff00ff00) >> 8 | (local_74 & 0xff00ff) << 8;
        uVar4 = uVar5 >> 0x10 | uVar5 << 0x10;
      }
      uVar5 = uVar4 - uVar3;
      if (uVar4 < uVar3 || uVar5 == 0) {
        return -0x6f58;
      }
    }
    param_3[2] = uVar5;
    param_4[2] = uVar3;
    if ((param_6 & 1) != 0) goto LAB_0012a17c;
LAB_0012a1c8:
    uVar5 = 0;
    uVar3 = 0x4020;
  }
  param_3[3] = uVar3;
  param_4[3] = uVar5;
  if (((short)(local_70 >> 8 | local_70 << 8) < 1) || ((short)(local_6c >> 8 | local_6c << 8) < 1))
  {
    uVar5 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = (local_74 & 0xff00ff00) >> 8 | (local_74 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar5 = (local_98 & 0xff00ff00) >> 8 | (local_98 & 0xff00ff) << 8;
    uVar4 = uVar5 >> 0x10 | uVar5 << 0x10;
    uVar5 = uVar4 - uVar3;
    if (uVar4 < uVar3 || uVar5 == 0) {
      return -0x6f58;
    }
  }
  param_3[4] = uVar5;
  param_4[4] = uVar3;
  if ((param_6 >> 1 & 1) == 0) {
    uVar5 = 0;
    uVar3 = 0x4020;
  }
  else {
    uVar3 = (local_68 & 0xff00ff00) >> 8 | (local_68 & 0xff00ff) << 8;
    uVar5 = 0;
    if ((uVar3 >> 0x10 == 0 && (uVar3 & 0xffff) == 0) ||
       (uVar3 = (local_98 & 0xff00ff00) >> 8 | (local_98 & 0xff00ff) << 8,
       uVar5 = uVar3 >> 0x10 | uVar3 << 0x10, uVar5 == 0)) {
      uVar3 = 0;
    }
    else {
      if ((((param_1 | 1) != 0x50001) ||
          ((uVar3 = (local_54 & 0xff00ff00) >> 8 | (local_54 & 0xff00ff) << 8,
           uVar3 = uVar3 >> 0x10 | uVar3 << 0x10, uVar3 == 0 &&
           (uVar3 = (local_7c & 0xff00ff00) >> 8 | (local_7c & 0xff00ff) << 8,
           uVar3 = uVar3 >> 0x10 | uVar3 << 0x10, uVar3 == 0)))) &&
         (uVar3 = (local_8c & 0xff00ff00) >> 8 | (local_8c & 0xff00ff) << 8,
         uVar3 = uVar3 >> 0x10 | uVar3 << 0x10, uVar3 == 0)) {
        uVar3 = (local_94 & 0xff00ff00) >> 8 | (local_94 & 0xff00ff) << 8;
        uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
      }
      if (uVar3 <= uVar5) {
        return -0x6f58;
      }
      uVar3 = (4 - uVar5) + uVar3;
    }
  }
  param_3[5] = uVar3;
  param_4[5] = uVar5;
  if ((param_1 | 1) == 0x50001) {
    uVar3 = (local_50 & 0xff00ff00) >> 8 | (local_50 & 0xff00ff) << 8;
    if ((int)(uVar3 >> 0x10 | uVar3 << 0x10) < 1) {
      uVar5 = 0;
      uVar3 = 0;
    }
    else {
      uVar3 = (local_54 & 0xff00ff00) >> 8 | (local_54 & 0xff00ff) << 8;
      uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
      if (uVar3 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (local_7c & 0xff00ff00) >> 8 | (local_7c & 0xff00ff) << 8;
        uVar4 = uVar5 >> 0x10 | uVar5 << 0x10;
        uVar5 = uVar4 - uVar3;
        if (uVar4 < uVar3 || uVar5 == 0) {
          return -0x6f58;
        }
      }
    }
    param_3[6] = uVar5;
    param_4[6] = uVar3;
    uVar3 = (local_68 & 0xff00ff00) >> 8 | (local_68 & 0xff00ff) << 8;
    uVar5 = 0;
    if ((uVar3 >> 0x10 == 0 && (uVar3 & 0xffff) == 0) ||
       (uVar3 = (local_7c & 0xff00ff00) >> 8 | (local_7c & 0xff00ff) << 8,
       uVar5 = uVar3 >> 0x10 | uVar3 << 0x10, uVar5 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = (local_8c & 0xff00ff00) >> 8 | (local_8c & 0xff00ff) << 8;
      uVar4 = uVar3 >> 0x10 | uVar3 << 0x10;
      if (uVar4 == 0) {
        uVar3 = (local_94 & 0xff00ff00) >> 8 | (local_94 & 0xff00ff) << 8;
        uVar4 = uVar3 >> 0x10 | uVar3 << 0x10;
      }
      uVar3 = uVar4 - uVar5;
      if (uVar4 < uVar5 || uVar3 == 0) {
        return -0x6f58;
      }
    }
    param_3[7] = uVar3;
    param_4[7] = uVar5;
    if (param_1 != 0x50001) goto LAB_0012a3c4;
LAB_0012a384:
    if ((short)(local_44 >> 8 | local_44 << 8) < 1) goto LAB_0012a3c4;
    uVar3 = (local_48 & 0xff00ff00) >> 8 | (local_48 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    if (uVar3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (local_8c & 0xff00ff00) >> 8 | (local_8c & 0xff00ff) << 8;
      uVar4 = uVar5 >> 0x10 | uVar5 << 0x10;
      if (uVar4 == 0) {
        uVar5 = (local_94 & 0xff00ff00) >> 8 | (local_94 & 0xff00ff) << 8;
        uVar4 = uVar5 >> 0x10 | uVar5 << 0x10;
      }
      uVar5 = uVar4 - uVar3;
      if (uVar4 < uVar3 || uVar5 == 0) {
        return -0x6f58;
      }
    }
  }
  else {
    param_3[6] = 0;
    param_3[7] = 0;
    param_4[6] = 0;
    param_4[7] = 0;
    if (param_1 == 0x50001) goto LAB_0012a384;
LAB_0012a3c4:
    uVar5 = 0;
    uVar3 = 0;
  }
  param_3[8] = uVar5;
  param_4[8] = uVar3;
  uVar3 = (local_64 & 0xff00ff00) >> 8 | (local_64 & 0xff00ff) << 8;
  if (uVar3 >> 0x10 == 0 && (uVar3 & 0xffff) == 0) {
    param_3[9] = 0;
    param_4[9] = 0;
    if ((param_6 >> 2 & 1) == 0) goto LAB_0012a464;
LAB_0012a410:
    uVar3 = (local_68 & 0xff00ff00) >> 8 | (local_68 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    if (uVar3 == 0) {
      param_3[10] = 0;
      param_4[10] = 0;
    }
    else {
      uVar5 = (local_94 & 0xff00ff00) >> 8 | (local_94 & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      if (uVar5 == 0) {
        param_3[10] = 0;
        param_4[10] = 0;
      }
      else {
        uVar4 = (local_90 & 0xff00ff00) >> 8 | (local_90 & 0xff00ff) << 8;
        uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
        if (uVar4 <= uVar5) {
          return -0x6f58;
        }
        param_3[10] = (4 - uVar5) + uVar4;
        param_4[10] = uVar5;
      }
      if (uVar3 != 0) {
LAB_0012a47c:
        uVar5 = (local_a8 & 0xff00ff00) >> 8 | (local_a8 & 0xff00ff) << 8;
        uVar3 = (local_90 & 0xff00ff00) >> 8 | (local_90 & 0xff00ff) << 8;
        uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
        uVar1 = uVar1 + (uVar5 >> 0x10 | uVar5 << 0x10) + 0x18;
        uVar5 = uVar1 - uVar3;
        if (uVar1 < uVar3 || uVar5 == 0) {
          return -0x6f58;
        }
        goto LAB_0012a4b8;
      }
    }
  }
  else {
    uVar3 = (local_8c & 0xff00ff00) >> 8 | (local_8c & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    if (uVar3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (local_94 & 0xff00ff00) >> 8 | (local_94 & 0xff00ff) << 8;
      uVar4 = uVar5 >> 0x10 | uVar5 << 0x10;
      uVar5 = uVar4 - uVar3;
      if (uVar4 < uVar3 || uVar5 == 0) {
        return -0x6f58;
      }
    }
    param_3[9] = uVar5;
    param_4[9] = uVar3;
    if ((param_6 >> 2 & 1) != 0) goto LAB_0012a410;
LAB_0012a464:
    param_3[10] = 0xa020;
    param_4[10] = 0;
    uVar5 = (local_68 & 0xff00ff00) >> 8 | (local_68 & 0xff00ff) << 8;
    uVar3 = 0;
    if (uVar5 >> 0x10 != 0 || (uVar5 & 0xffff) != 0) goto LAB_0012a47c;
  }
  uVar5 = 0;
LAB_0012a4b8:
  param_3[0xb] = uVar5;
  param_4[0xb] = uVar3;
  return param_3[0xb] +
         param_3[10] +
         param_3[9] +
         param_3[8] +
         param_3[7] +
         param_3[6] + param_3[5] + param_3[4] + param_3[3] + param_3[2] + param_3[1] + *param_3;
}

