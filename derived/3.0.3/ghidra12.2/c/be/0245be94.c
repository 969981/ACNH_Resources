
byte FUN_0245be94(float *param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  byte bVar11;
  byte bVar12;
  float fVar13;
  float fVar14;
  undefined *local_b8;
  undefined *puStack_b0;
  int local_a8;
  int iStack_a4;
  undefined *local_a0;
  int local_98;
  int iStack_94;
  float local_8c;
  float fStack_88;
  float local_84;
  undefined8 local_80;
  undefined8 uStack_78;
  
  fStack_88 = param_1[1];
  iVar8 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
  fVar14 = (float)iVar8 * 5.0 + 2.5;
  iVar1 = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
  local_80 = 0x3f80000000000000;
  uStack_78 = 0x77;
  fVar13 = (float)iVar1 * 5.0 + 2.5;
  local_8c = fVar14;
  local_84 = fVar13;
  iVar6 = FUN_016ed290(&local_8c,0,0,0);
  puVar4 = PTR_DAT_04bbc1a0;
  puVar3 = PTR_DAT_04bb27c8;
  puVar2 = PTR_DAT_04bb2010;
  if (iVar6 != 0) {
    return 0;
  }
  iVar6 = iVar1 + -1;
  local_b8 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_b0 = PTR_DAT_04bb2010 + 0x10;
  local_a8 = iVar8;
  iStack_a4 = iVar6;
  local_a0 = puStack_b0;
  local_98 = iVar8;
  iStack_94 = iVar1;
  if ((*(long *)PTR_DAT_04bb27c8 != 0) &&
     (lVar9 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar9 != 0)) {
    uVar10 = FUN_009721a0(lVar9,&local_b8,0);
    bVar5 = false;
    if ((uVar10 & 1) != 0) goto LAB_0245bfec;
  }
  local_84 = (float)iVar6 * 5.0 + 2.5;
  local_8c = fVar14;
  iVar6 = FUN_016ed290(&local_8c,0,0,0);
  bVar5 = iVar6 == 0;
  if ((iVar6 == 0) && ((param_2 & 1) != 0)) {
    uVar7 = FUN_0245be94(&local_8c,0);
    bVar5 = (uVar7 & 10) == 0;
  }
LAB_0245bfec:
  local_b8 = puVar4 + 0x10;
  puStack_b0 = puVar2 + 0x10;
  iVar6 = iVar8 + -1;
  local_a8 = iVar6;
  iStack_a4 = iVar1;
  local_a0 = puStack_b0;
  local_98 = iVar8;
  iStack_94 = iVar1;
  bVar11 = bVar5;
  if (((*(long *)puVar3 == 0) || (lVar9 = *(long *)(*(long *)puVar3 + 0xa8), lVar9 == 0)) ||
     (uVar10 = FUN_009721a0(lVar9,&local_b8,0), (uVar10 & 1) == 0)) {
    local_8c = (float)iVar6 * 5.0 + 2.5;
    local_84 = fVar13;
    iVar6 = FUN_016ed290(&local_8c,0,0,0);
    if (iVar6 == 0) {
      if ((param_2 & 1) == 0) {
        bVar11 = bVar5 | 2;
      }
      else {
        uVar7 = FUN_0245be94(&local_8c,0);
        bVar11 = bVar5 | 2;
        if ((uVar7 & 5) != 0) {
          bVar11 = bVar5;
        }
      }
    }
  }
  local_b8 = puVar4 + 0x10;
  puStack_b0 = puVar2 + 0x10;
  iVar6 = iVar1 + 1;
  local_a8 = iVar8;
  iStack_a4 = iVar1;
  local_a0 = puStack_b0;
  local_98 = iVar8;
  iStack_94 = iVar6;
  bVar12 = bVar11;
  if (((*(long *)puVar3 == 0) || (lVar9 = *(long *)(*(long *)puVar3 + 0xa8), lVar9 == 0)) ||
     (uVar10 = FUN_009721a0(lVar9,&local_b8,0), (uVar10 & 1) == 0)) {
    local_84 = (float)iVar6 * 5.0 + 2.5;
    local_8c = fVar14;
    iVar6 = FUN_016ed290(&local_8c,0,0,0);
    if (iVar6 == 0) {
      if ((param_2 & 1) == 0) {
        bVar12 = bVar11 | 4;
      }
      else {
        uVar7 = FUN_0245be94(&local_8c,0);
        bVar12 = bVar11 | 4;
        if ((uVar7 & 10) != 0) {
          bVar12 = bVar11;
        }
      }
    }
  }
  local_b8 = puVar4 + 0x10;
  puStack_b0 = puVar2 + 0x10;
  iVar6 = iVar8 + 1;
  local_a8 = iVar8;
  iStack_a4 = iVar1;
  local_a0 = puStack_b0;
  local_98 = iVar6;
  iStack_94 = iVar1;
  bVar11 = bVar12;
  if (((*(long *)puVar3 == 0) || (lVar9 = *(long *)(*(long *)puVar3 + 0xa8), lVar9 == 0)) ||
     (uVar10 = FUN_009721a0(lVar9,&local_b8,0), (uVar10 & 1) == 0)) {
    local_8c = (float)iVar6 * 5.0 + 2.5;
    local_84 = fVar13;
    iVar8 = FUN_016ed290(&local_8c,0,0,0);
    if (iVar8 == 0) {
      if ((param_2 & 1) == 0) {
        bVar11 = bVar12 | 8;
      }
      else {
        uVar7 = FUN_0245be94(&local_8c,0);
        bVar11 = bVar12 | 8;
        if ((uVar7 & 5) != 0) {
          bVar11 = bVar12;
        }
      }
    }
  }
  return bVar11;
}

