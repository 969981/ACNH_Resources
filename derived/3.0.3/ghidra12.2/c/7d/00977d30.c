
undefined1 FUN_00977d30(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined *local_68;
  int local_60;
  int iStack_5c;
  undefined8 local_58;
  undefined8 local_38;
  
  puVar5 = PTR_DAT_04bb27c8;
  local_38 = 0;
  local_58 = 0;
  fVar11 = (float)*(int *)(param_1 + 0xc) * 10.0;
  fVar10 = (float)*(int *)(param_1 + 8) * 10.0;
  fVar13 = fVar10 + 2.5;
  fVar12 = fVar11 + 2.5;
  fVar10 = fVar10 + 10.0 + -2.5;
  fVar11 = fVar11 + 10.0 + -2.5;
  iVar3 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
  iVar8 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
  iVar4 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
  iVar2 = iVar3;
  if (iVar4 <= iVar3) {
    iVar2 = iVar4;
  }
  if (iVar3 <= iVar4) {
    iVar3 = iVar4;
  }
  iVar9 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
  iVar4 = iVar8;
  if (iVar8 <= iVar9) {
    iVar4 = iVar9;
  }
  if (iVar9 <= iVar8) {
    iVar8 = iVar9;
  }
  if (iVar4 + 1 != iVar8) {
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    iVar9 = iVar2;
    while (((lVar7 = *(long *)puVar5, lVar7 != 0 && (*(long *)(lVar7 + 0xa8) != 0)) &&
           (local_68 = puVar1, local_60 = iVar9, iStack_5c = iVar8,
           uVar6 = FUN_009493f8(lVar7 + 0x28,&local_68,(long)&local_38 + 4,&local_38,
                                (long)&local_58 + 4,&local_58), (uVar6 & 1) != 0))) {
      if (local_38._4_4_ == 0x2e) {
        return 1;
      }
      if ((int)local_38 == 0x2e) {
        return 1;
      }
      if (local_58._4_4_ == 0x2e) {
        return 1;
      }
      if ((int)local_58 == 0x2e) {
        return 1;
      }
      if (iVar9 < iVar3) {
        iVar9 = iVar9 + 1;
      }
      else {
        iVar8 = iVar8 + 1;
        iVar9 = iVar2;
      }
      if ((iVar2 == iVar9) && (iVar4 + 1 == iVar8)) {
        return 0;
      }
    }
  }
  return 0;
}

