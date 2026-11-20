
void FUN_03ed0890(uint param_1,long param_2,long param_3,long param_4,uint *param_5,
                 undefined4 param_6,uint param_7,long param_8)

{
  short sVar1;
  undefined2 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  
  if ((*(ushort *)(param_4 + 0x7a) >> 8 & 1) != 0) {
    *param_5 = *param_5 | 8;
  }
  uVar2 = (undefined2)param_6;
  if (*(char *)(param_8 + 0x12) == '\0') {
    uVar7 = *param_5;
    param_5[3] = 0x3f800000;
    param_5[4] = 0;
    param_5[1] = 0;
    param_5[2] = 0xbf800000;
    param_5[5] = param_1;
    param_5[6] = 0xbf800000;
    param_5[7] = 0xbf800000;
    *(undefined2 *)(param_5 + 0xc) = uVar2;
  }
  else {
    lVar8 = 0;
    lVar10 = 0;
    lVar9 = 0;
    do {
      lVar4 = *(long *)(param_2 + 0x10);
      sVar1 = *(short *)(*(long *)(lVar4 + 8) +
                        (long)*(int *)(param_8 + (lVar8 + (ulong)*(byte *)(param_8 + 0x13)) * 4 +
                                      0x14));
      if ((uint)(int)sVar1 < *(uint *)(lVar4 + 0x38)) {
        lVar4 = *(long *)(*(long *)(lVar4 + 0x40) + (long)(int)sVar1 * 8);
      }
      else {
        lVar4 = 0;
      }
      lVar5 = *(long *)(*(long *)(param_3 + 8) + 0x140);
      if ((*(char *)(lVar5 + 0x1d08) == '\0') ||
         (uVar3 = FUN_03ed06a0(lVar4,lVar5 + 0x1cf8), (uVar3 & 1) != 0)) {
        if (*(short *)(lVar4 + 8) == 0x13) {
          lVar9 = lVar4;
        }
        else if (*(short *)(lVar4 + 8) == 0xc) {
          lVar10 = lVar4;
        }
      }
      lVar8 = lVar8 + 1;
    } while ((uint)lVar8 < (uint)*(byte *)(param_8 + 0x12));
    if (lVar10 != 0) {
      FUN_03ed7320(param_1,lVar10,param_3,param_4,param_5,param_6,param_7 & 1,param_2,lVar9);
      return;
    }
    if (lVar9 != 0) {
      fVar11 = (float)FUN_03ed7a30(0,param_1,param_1,lVar9,param_3,param_4,param_2,param_5);
      uVar6 = 2;
      if ((param_7 & 1) == 0) {
        uVar6 = 0;
      }
      param_5[5] = param_1;
      param_5[8] = 0;
      param_5[1] = (uint)fVar11;
      param_5[9] = (uint)fVar11;
      *(undefined2 *)(param_5 + 0xc) = uVar2;
      param_5[3] = 0x3f800000;
      param_5[4] = 0;
      uVar6 = *param_5 & 0xffffff89 | uVar6;
      param_5[6] = 0xbf800000;
      param_5[7] = 0xbf800000;
      param_5[10] = 0xbf800000;
      param_5[0xb] = 0xbf800000;
      param_5[2] = (uint)(fVar11 + -1.0);
      goto LAB_03ed0aec;
    }
    uVar7 = *param_5;
    param_5[3] = 0x3f800000;
    param_5[4] = 0;
    param_5[1] = 0;
    param_5[2] = 0xbf800000;
    param_5[5] = param_1;
    *(undefined2 *)(param_5 + 0xc) = uVar2;
    param_5[6] = 0xbf800000;
    param_5[7] = 0xbf800000;
  }
  param_5[0xb] = 0xbf800000;
  param_5[9] = 0;
  param_5[10] = 0xbf800000;
  uVar6 = 2;
  if ((param_7 & 1) == 0) {
    uVar6 = 0;
  }
  param_5[8] = 0;
  uVar6 = uVar7 & 0xffffff89 | uVar6;
LAB_03ed0aec:
  *param_5 = uVar6 | 0x10;
  return;
}

