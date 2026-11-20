
bool FUN_03ea95cc(long *param_1,long *param_2,long *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint *puVar8;
  short *psVar9;
  long lVar10;
  long local_30;
  long lStack_28;
  
  puVar8 = (uint *)param_1[1];
  if (((puVar8 != (uint *)0x0) && ((char)*puVar8 == -0x3f)) && (-1 < (int)param_4)) {
    uVar4 = *puVar8 >> 8;
    psVar9 = (short *)*param_1;
    sVar3 = *psVar9;
    if (sVar3 == 0x5942) {
      uVar4 = uVar4 & 0xff00 | *puVar8 >> 0x18 | (uVar4 & 0xff) << 0x10;
    }
    if (param_4 < uVar4) {
      uVar4 = *(uint *)(psVar9 + 2);
      bVar7 = sVar3 == 0x5942;
      uVar1 = puVar8[(ulong)param_4 * 2 + 2];
      uVar5 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      if (bVar7) {
        uVar4 = uVar5 >> 0x10 | uVar5 << 0x10;
      }
      uVar5 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
      if (!bVar7) {
        uVar5 = uVar1;
      }
      if (uVar4 != 0) {
        uVar2 = puVar8[(ulong)param_4 * 2 + 1];
        uVar1 = uVar2 & 0xffffff;
        if (sVar3 == 0x5942) {
          uVar1 = uVar2 & 0xff00 | (uVar2 & 0xff) << 0x10 | uVar2 >> 0x10 & 0xff;
        }
        uVar1 = *(uint *)((long)psVar9 + (ulong)uVar1 * 4 + (long)(int)uVar4 + 4);
        uVar6 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        if (bVar7) {
          uVar1 = uVar6 >> 0x10 | uVar6 << 0x10;
        }
        *param_3 = (long)psVar9 + (ulong)uVar1 + (long)(int)uVar4;
        if ((uVar2 >> 0x18) - 0xc0 < 2) {
          lVar10 = *param_1;
          *param_2 = lVar10;
          param_2[1] = lVar10 + (ulong)uVar5;
          return true;
        }
        if (uVar2 >> 0x18 == 0xff) {
          *param_2 = *param_1;
          param_2[1] = 0;
          return true;
        }
        return true;
      }
    }
  }
  *param_3 = 0;
  FUN_03ea9348(&local_30,param_1,param_4);
  *param_2 = local_30;
  param_2[1] = lStack_28;
  return local_30 != 0;
}

