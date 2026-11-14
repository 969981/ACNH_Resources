
undefined8 FUN_018c39b0(long param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulong local_84;
  float local_7c [2];
  float local_74;
  
  fVar13 = (float)*(int *)(param_3 + 0xc) * 10.0 + 5.0;
  fVar10 = (float)*(int *)(param_3 + 0xc) * 10.0;
  fVar14 = (float)*(int *)(param_3 + 8) * 10.0 + 5.0;
  fVar8 = (float)*(int *)(param_3 + 8) * 10.0;
  fVar12 = fVar8 + 2.5;
  fVar11 = fVar10 + 2.5;
  fVar8 = fVar8 + 10.0 + -2.5;
  fVar10 = fVar10 + 10.0 + -2.5;
  iVar1 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
  iVar6 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
  iVar2 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
  iVar3 = iVar1;
  if (iVar2 <= iVar1) {
    iVar3 = iVar2;
  }
  if (iVar1 <= iVar2) {
    iVar1 = iVar2;
  }
  iVar7 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
  iVar2 = iVar6;
  if (iVar6 <= iVar7) {
    iVar2 = iVar7;
  }
  if (iVar7 <= iVar6) {
    iVar6 = iVar7;
  }
  local_7c[0] = fVar14;
  local_74 = fVar13;
  if (iVar2 + 1 != iVar6) {
    iVar7 = iVar3;
    do {
      local_84 = (local_84 >> 8 & 0xffffff) << 8;
      uVar4 = FUN_01a1bea0(0x7f7fffff,iVar7,iVar6,&local_84);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      if (iVar7 < iVar1) {
        iVar7 = iVar7 + 1;
      }
      else {
        iVar6 = iVar6 + 1;
        iVar7 = iVar3;
      }
    } while ((iVar3 != iVar7) || (iVar2 + 1 != iVar6));
  }
  if (DAT_052ae7b0 != 0) {
    iVar6 = (int)((float)(int)fVar14 / 10.0) - (uint)(fVar14 < 0.0);
    if (iVar6 < DAT_052ae7c8) {
      return 0;
    }
    if (DAT_052ae7d8 < iVar6) {
      return 0;
    }
    iVar3 = (int)((float)(int)fVar13 / 10.0) - (uint)(fVar13 < 0.0);
    if (iVar3 < DAT_052ae7cc) {
      return 0;
    }
    if (DAT_052ae7dc < iVar3) {
      return 0;
    }
    lVar5 = (long)(int)((iVar6 - DAT_052ae7c8) + DAT_052ae7a8 * (iVar3 - DAT_052ae7cc));
    if (DAT_052ae7ac <= (uint)(iVar3 - DAT_052ae7cc) || DAT_052ae7a8 <= (uint)(iVar6 - DAT_052ae7c8)
       ) {
      lVar5 = 0;
    }
    if (*(char *)(DAT_052ae7b0 + lVar5 * 8 + 4) == '\0') {
      local_84 = 0x200000002;
      uVar4 = FUN_0189fe80(param_3,&local_84,param_2,1);
      if ((uVar4 & 1) == 0) {
        uVar9 = FUN_015cb8d4(local_7c,0);
        *(undefined4 *)(param_1 + 0x18) = 0;
        *(float *)(param_1 + 8) = local_7c[0];
        *(undefined4 *)(param_1 + 0xc) = uVar9;
        *(float *)(param_1 + 0x10) = local_74;
        return 1;
      }
    }
  }
  return 0;
}

