
undefined4 FUN_0065f290(undefined4 param_1,long param_2,long param_3)

{
  float fVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_04c7e1e8 & 1) == 0) {
    FUN_0065dc00();
  }
  lVar2 = DAT_04c7e3f0;
  fVar1 = DAT_04102ec4;
  iVar5 = (int)((ulong)(param_3 - param_2) >> 2);
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    iVar6 = 0;
    uVar4 = 0;
    fVar8 = DAT_04102ec4;
    do {
      lVar3 = FUN_006621b0(param_1,*(undefined4 *)(param_2 + (long)iVar6 * 4));
      fVar7 = fVar1;
      if (lVar3 != 0) {
        fVar7 = *(float *)(lVar2 + (long)*(int *)(lVar3 + 4) * 0x20 + 0x1c);
      }
      if (fVar7 < fVar8) {
        uVar4 = *(undefined4 *)(param_2 + (long)iVar6 * 4);
        fVar8 = fVar7;
      }
      iVar6 = iVar6 + 1;
    } while (iVar5 != iVar6);
  }
  return uVar4;
}

