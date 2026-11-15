
void FUN_021266d8(long param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  undefined *local_b0;
  undefined *puStack_a8;
  int local_a0;
  int iStack_9c;
  undefined *local_98;
  int local_90;
  int iStack_8c;
  undefined *local_88;
  float local_80;
  float fStack_7c;
  float local_78;
  undefined4 local_74;
  uint local_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (**(char **)(param_1 + 8) != '\0') {
    return;
  }
  uVar9 = *param_2;
  if (uVar9 == 0) {
    return;
  }
  uVar1 = *(uint *)(*(long *)(param_1 + 0x10) + 0x28);
  if (uVar1 != 0 && uVar9 == uVar1) {
    return;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + ((ulong)(uVar9 >> 0x11) & 0x7ff8));
  if (((plVar8 == (long *)0x0) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar9 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_021267d0;
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_021267d0:
    uVar9 = 0;
  }
  if (plVar8 == (long *)0x0) {
    return;
  }
  lVar7 = plVar8[0x2a];
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
  puVar3 = PTR_DAT_04bbc1a0;
  puVar2 = PTR_DAT_04bb2010;
  uVar1 = 0;
  if ((int)lVar7 == 1) {
    uVar1 = uVar9;
  }
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (uVar1 == 0) {
    return;
  }
  local_58 = 0;
  local_68 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_60 = PTR_DAT_04bb2010 + 0x10;
  puVar10 = (undefined8 *)plVar8[0x77];
  local_48 = 0;
  local_50 = puStack_60;
  if (((*PTR_DAT_04bb6728 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb6728), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb6720 = PTR_DAT_04bb4100 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6728);
  }
  if ((puVar10 != (undefined8 *)0x0) &&
     (uVar6 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bb6720), (uVar6 & 1) != 0)) {
    local_88 = PTR_DAT_04bbbc20 + 0x10;
    lVar7 = plVar8[0xd];
    local_80 = *(float *)(lVar7 + 0x278);
    fStack_7c = *(float *)(lVar7 + 0x27c);
    local_74 = *(undefined4 *)(lVar7 + 0x2b4);
    local_78 = *(float *)(lVar7 + 0x280);
    if (*(int *)(puVar10[1] + 0x750) == 0) {
      local_70 = 0;
    }
    else {
      local_70 = (uint)(*(int *)(puVar10[1] + 0x750) != 2);
    }
    if ((*(char *)(*(long *)(param_1 + 0x10) + 0x2c) != '\0') && (*(int *)(puVar10 + 0xef6) == 0x38)
       ) {
      local_b0 = puVar3 + 0x10;
      puStack_a8 = puVar2 + 0x10;
      fVar11 = local_78 + -2.5;
      local_a0 = (int)((float)(int)(local_80 + -2.5) / 5.0) - (uint)(local_80 + -2.5 < 0.0);
      fVar12 = (float)(int)fVar11 / 5.0;
      iStack_9c = (int)fVar12 - (uint)(fVar11 < 0.0);
      local_90 = local_a0 + 1;
      iStack_8c = iStack_9c + 1;
      local_98 = puStack_a8;
      local_80 = (float)FUN_014eda28(&local_b0,puVar10 + 0x15e7,lVar7 + 0x278);
      fStack_7c = fVar11;
      local_78 = fVar12;
    }
    FUN_01ec68b0(puVar10,&local_68,&local_88);
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if ((int)local_58 < *(int *)(lVar7 + 0x10)) {
    iVar4 = *(int *)(lVar7 + 0x20);
  }
  else {
    iVar4 = *(int *)(lVar7 + 0x20);
    if ((((int)local_48 <= iVar4) && (*(int *)(lVar7 + 0x14) <= local_58._4_4_)) &&
       (local_48._4_4_ <= *(int *)(lVar7 + 0x24))) goto LAB_02126a00;
  }
  if (iVar4 < (int)local_58) {
    return;
  }
  if ((int)local_48 < *(int *)(lVar7 + 0x10)) {
    return;
  }
  if (*(int *)(lVar7 + 0x24) < local_58._4_4_) {
    return;
  }
  if (local_48._4_4_ < *(int *)(lVar7 + 0x14)) {
    return;
  }
LAB_02126a00:
  **(undefined1 **)(param_1 + 8) = 1;
  return;
}

