
undefined8 FUN_00976780(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined *local_d0;
  int local_c8;
  int iStack_c4;
  undefined *local_c0;
  int local_b8;
  int iStack_b4;
  undefined *local_b0;
  int local_a8;
  int iStack_a4;
  undefined *local_a0;
  int local_98;
  int iStack_94;
  undefined **local_90;
  int local_88;
  int iStack_84;
  
  local_90 = &PTR_FUN_048f9730;
  fVar9 = (float)*(int *)(param_1 + 8) * 0.5;
  uVar6 = 0;
  if (fVar9 != (float)(int)fVar9) {
    uVar6 = (uint)(fVar9 < 0.0);
  }
  local_88 = (int)fVar9 - uVar6;
  fVar9 = (float)*(int *)(param_1 + 0xc) * 0.5;
  uVar6 = 0;
  if (fVar9 != (float)(int)fVar9) {
    uVar6 = (uint)(fVar9 < 0.0);
  }
  iStack_84 = (int)fVar9 - uVar6;
  uVar5 = FUN_01318220(&local_90);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  fVar14 = (float)*(int *)(param_1 + 8) * 5.0 + 2.5;
  fVar9 = (float)*(int *)(param_1 + 0xc) * 5.0 + 2.5;
  if ((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0xa8) == 0)) {
    fVar10 = -500.0;
  }
  else {
    fVar10 = (float)FUN_00963acc(*(long *)(DAT_04cfae30 + 0xa8),param_1);
  }
  puVar4 = PTR_DAT_04bb2010;
  local_90 = &PTR_FUN_048f9730;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  iVar2 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
  fVar11 = (float)iVar2 * 0.5;
  iStack_94 = (int)((float)(int)(fVar9 + -3.75) / 5.0) - (uint)(fVar9 + -3.75 < 0.0);
  uVar6 = 0;
  if (fVar11 != (float)(int)fVar11) {
    uVar6 = (uint)(fVar11 < 0.0);
  }
  fVar12 = (float)iStack_94 * 0.5;
  uVar7 = 0;
  if (fVar12 != (float)(int)fVar12) {
    uVar7 = (uint)(fVar12 < 0.0);
  }
  iStack_84 = (int)fVar12 - uVar7;
  local_a0 = puVar1;
  local_98 = iVar2;
  local_88 = (int)fVar11 - uVar6;
  uVar5 = FUN_01318220(&local_90);
  if ((uVar5 & 1) != 0) {
    if ((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0xa8) == 0)) {
      if (fVar10 < -500.0) goto LAB_00976950;
    }
    else {
      fVar12 = (float)FUN_00963acc(*(long *)(DAT_04cfae30 + 0xa8),&local_a0);
      if (fVar10 < fVar12) {
LAB_00976950:
        if (param_2 == (undefined4 *)0x0) {
          return 1;
        }
        *param_2 = 2;
        return 1;
      }
    }
  }
  local_90 = &PTR_FUN_048f9730;
  local_a8 = (int)((float)(int)(fVar14 + -3.75) / 5.0) - (uint)(fVar14 + -3.75 < 0.0);
  fVar12 = (float)local_a8 * 0.5;
  iVar3 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
  uVar7 = 0;
  if (fVar12 != (float)(int)fVar12) {
    uVar7 = (uint)(fVar12 < 0.0);
  }
  local_88 = (int)fVar12 - uVar7;
  fVar12 = (float)iVar3 * 0.5;
  uVar7 = 0;
  if (fVar12 != (float)(int)fVar12) {
    uVar7 = (uint)(fVar12 < 0.0);
  }
  local_b0 = puVar1;
  iStack_a4 = iVar3;
  iStack_84 = (int)fVar12 - uVar7;
  uVar5 = FUN_01318220(&local_90);
  if ((uVar5 & 1) == 0) {
LAB_00976a58:
    local_90 = &PTR_FUN_048f9730;
    local_b8 = (int)((float)(int)(fVar14 + 3.75) / 5.0) - (uint)(fVar14 + 3.75 < 0.0);
    fVar14 = (float)local_b8 * 0.5;
    uVar8 = 0;
    if (fVar14 != (float)(int)fVar14) {
      uVar8 = (uint)(fVar14 < 0.0);
    }
    local_88 = (int)fVar14 - uVar8;
    local_c0 = puVar4 + 0x10;
    iStack_b4 = iVar3;
    iStack_84 = (int)fVar12 - uVar7;
    uVar5 = FUN_01318220(&local_90);
    if ((uVar5 & 1) != 0) {
      if ((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0xa8) == 0)) {
        if (fVar10 < -500.0) goto LAB_00976ae8;
      }
      else {
        fVar14 = (float)FUN_00963acc(*(long *)(DAT_04cfae30 + 0xa8),&local_c0);
        if (fVar10 < fVar14) {
LAB_00976ae8:
          if (param_2 == (undefined4 *)0x0) {
            return 1;
          }
          *param_2 = 1;
          return 1;
        }
      }
    }
    local_90 = &PTR_FUN_048f9730;
    iStack_c4 = (int)((float)(int)(fVar9 + 3.75) / 5.0) - (uint)(fVar9 + 3.75 < 0.0);
    fVar9 = (float)iStack_c4 * 0.5;
    uVar7 = 0;
    if (fVar9 != (float)(int)fVar9) {
      uVar7 = (uint)(fVar9 < 0.0);
    }
    iStack_84 = (int)fVar9 - uVar7;
    local_d0 = puVar4 + 0x10;
    local_c8 = iVar2;
    local_88 = (int)fVar11 - uVar6;
    uVar5 = FUN_01318220(&local_90);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    if ((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0xa8) == 0)) {
      if (-500.0 <= fVar10) {
        return 0;
      }
    }
    else {
      fVar9 = (float)FUN_00963acc(*(long *)(DAT_04cfae30 + 0xa8),&local_d0);
      if (fVar9 <= fVar10) {
        return 0;
      }
    }
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
    }
  }
  else {
    if ((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0xa8) == 0)) {
      if (-500.0 <= fVar10) goto LAB_00976a58;
    }
    else {
      fVar13 = (float)FUN_00963acc(*(long *)(DAT_04cfae30 + 0xa8),&local_b0);
      if (fVar13 <= fVar10) goto LAB_00976a58;
    }
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 3;
    }
  }
  return 1;
}

