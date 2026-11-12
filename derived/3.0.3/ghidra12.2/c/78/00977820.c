
bool FUN_00977820(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined *local_60;
  int local_58;
  int iStack_54;
  
  fVar12 = (float)*(int *)(param_1 + 0xc) * 10.0;
  fVar11 = (float)*(int *)(param_1 + 8) * 10.0;
  fVar14 = fVar11 + 2.5;
  fVar13 = fVar12 + 2.5;
  fVar11 = fVar11 + 10.0 + -2.5;
  fVar12 = fVar12 + 10.0 + -2.5;
  iVar4 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
  iVar8 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
  iVar5 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
  iVar2 = iVar4;
  if (iVar5 <= iVar4) {
    iVar2 = iVar5;
  }
  if (iVar4 <= iVar5) {
    iVar4 = iVar5;
  }
  iVar9 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
  iVar5 = iVar8;
  if (iVar8 <= iVar9) {
    iVar5 = iVar9;
  }
  if (iVar9 <= iVar8) {
    iVar8 = iVar9;
  }
  if (iVar5 + 1 == iVar8) {
    bVar6 = false;
  }
  else {
    iVar9 = 0;
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    iVar10 = iVar2;
    do {
      local_60 = puVar1;
      local_58 = iVar10;
      iStack_54 = iVar8;
      uVar7 = FUN_009766a0(&local_60);
      iVar3 = iVar2;
      if (iVar10 < iVar4) {
        iVar3 = iVar10 + 1;
      }
      iVar9 = iVar9 + (uVar7 & 1);
      if (iVar4 <= iVar10) {
        iVar8 = iVar8 + 1;
      }
      iVar10 = iVar3;
    } while ((iVar2 != iVar3) || (iVar5 + 1 != iVar8));
    bVar6 = iVar9 == 2;
  }
  return bVar6;
}

