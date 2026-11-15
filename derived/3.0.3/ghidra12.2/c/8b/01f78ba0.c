
bool FUN_01f78ba0(undefined8 param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  ulong uVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined *local_78;
  undefined *puStack_70;
  int local_68;
  int iStack_64;
  undefined *local_60;
  int local_58;
  int iStack_54;
  
  iVar2 = *(int *)(param_2 + 0x10);
  iVar4 = *(int *)(param_2 + 0x14);
  iVar3 = *(int *)(param_2 + 0x20);
  iVar5 = *(int *)(param_2 + 0x24);
  local_78 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_70 = PTR_DAT_04bb2010 + 0x10;
  fVar13 = (float)iVar3 * 5.0 + 5.0;
  fVar14 = (float)iVar5 * 5.0 + 5.0;
  local_58 = (int)((float)(int)((float)iVar2 * 5.0) / 5.0) - (uint)((float)iVar2 * 5.0 < 0.0);
  iVar6 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
  iStack_54 = -3;
  if (0.0 <= (float)iVar4 * 5.0) {
    iStack_54 = -2;
  }
  iStack_54 = iStack_54 + (int)((float)(int)((float)iVar4 * 5.0) / 5.0);
  iVar9 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
  local_68 = local_58;
  if (iVar6 <= local_58) {
    local_68 = iVar6;
  }
  if (local_58 <= iVar6) {
    local_58 = iVar6;
  }
  iStack_64 = iStack_54;
  if (iVar9 <= iStack_54) {
    iStack_64 = iVar9;
  }
  if (iStack_54 <= iVar9) {
    iStack_54 = iVar9;
  }
  local_60 = puStack_70;
  uVar8 = FUN_00978f80(&local_78);
  if ((uVar8 & 1) == 0) {
    bVar7 = false;
  }
  else {
    lVar10 = *(long *)PTR_DAT_04bc22f8;
    fVar14 = (float)*(int *)(lVar10 + 0x14) * 5.0;
    fVar13 = (float)*(int *)(lVar10 + 0x10) * 5.0;
    fVar16 = (float)*(int *)(lVar10 + 0x24) * 5.0 + 5.0;
    fVar15 = (float)*(int *)(lVar10 + 0x20) * 5.0 + 5.0;
    iVar9 = (int)((float)(int)fVar13 / 5.0);
    iVar6 = iVar9 + 2;
    if (fVar13 < 0.0) {
      iVar6 = iVar9 + 1;
    }
    iVar11 = (int)((float)(int)fVar14 / 5.0);
    iVar9 = iVar11 + 2;
    if (fVar14 < 0.0) {
      iVar9 = iVar11 + 1;
    }
    iVar11 = -3;
    if (0.0 <= fVar15) {
      iVar11 = -2;
    }
    iVar11 = iVar11 + (int)((float)(int)fVar15 / 5.0);
    iVar12 = -3;
    if (0.0 <= fVar16) {
      iVar12 = -2;
    }
    iVar12 = iVar12 + (int)((float)(int)fVar16 / 5.0);
    iVar1 = iVar6;
    if (iVar11 <= iVar6) {
      iVar1 = iVar11;
    }
    if (iVar6 <= iVar11) {
      iVar6 = iVar11;
    }
    iVar11 = iVar9;
    if (iVar12 <= iVar9) {
      iVar11 = iVar12;
    }
    if (iVar9 <= iVar12) {
      iVar9 = iVar12;
    }
    bVar7 = ((iVar1 <= iVar2 && iVar3 <= iVar6) && iVar11 <= iVar4) && iVar5 == iVar9 ||
            (((iVar1 <= iVar2 && iVar3 <= iVar6) && iVar11 <= iVar4) && iVar5 - iVar9 < 0) !=
            (((iVar1 <= iVar2 && iVar3 <= iVar6) && iVar11 <= iVar4) && SBORROW4(iVar5,iVar9));
  }
  return bVar7;
}

