
undefined4 FUN_007402e0(long param_1,undefined8 *param_2,undefined4 param_3,ulong param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  undefined4 *puVar9;
  undefined1 *__src;
  long lVar10;
  long *plVar11;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_184;
  undefined8 local_17c;
  undefined *local_170;
  undefined1 *puStack_168;
  int local_160;
  undefined1 auStack_15c [127];
  undefined1 local_dd;
  ulong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined **local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long lStack_90;
  long local_88;
  undefined8 uStack_80;
  long local_78;
  undefined *local_70;
  char *local_68;
  
  if ((0xeb < *(uint *)((long)param_2 + 4)) || (*(int *)(param_1 + 0x5e8) - 3U < 2)) {
    return *(undefined4 *)PTR_DAT_04bb3238;
  }
  if ((&DAT_04c969c8)[*(uint *)((long)param_2 + 4)] == 0) {
    return *(undefined4 *)PTR_DAT_04bb3238;
  }
  local_1a0 = *param_2;
  uStack_198 = param_2[1];
  local_188 = *(undefined4 *)(param_2 + 3);
  local_184 = *(undefined8 *)((long)param_2 + 0x1c);
  local_17c = *(undefined8 *)((long)param_2 + 0x24);
  local_160 = 0x80;
  local_dd = 0;
  local_190 = param_2[2];
  local_170 = PTR_DAT_04bb2e90 + 0x10;
  plVar11 = param_2 + 6;
  puStack_168 = auStack_15c;
  (**(code **)(*plVar11 + 0x18))(plVar11);
  __src = (undefined1 *)param_2[7];
  if (auStack_15c != __src) {
    (**(code **)(param_2[6] + 0x18))(plVar11);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[7] + lVar6) == '\0') goto LAB_0074042c;
      lVar5 = param_2[7] + lVar6;
      if (*(char *)(lVar5 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0074042c;
      }
      if (*(char *)(lVar5 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0074042c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0074042c:
    iVar1 = (int)lVar6;
    if (local_160 <= (int)lVar6) {
      iVar1 = local_160 + -1;
    }
    memcpy(auStack_15c,__src,(long)iVar1);
    auStack_15c[iVar1] = 0;
  }
  puVar4 = PTR_DAT_04bb3840;
  local_d8 = param_2[0x19];
  uStack_d0 = param_2[0x1a];
  local_170 = PTR_DAT_04bb2d88 + 0x10;
  if ((int)local_d8 == 7) {
    piVar7 = (int *)(&DAT_04c969c8)[local_1a0._4_4_];
    uVar8 = (ulong)(uint)piVar7[6];
  }
  else {
    piVar7 = (int *)(&DAT_04c969c8)[local_1a0._4_4_];
    uVar8 = local_d8;
  }
  uVar2 = 0;
  if ((uint)uVar8 != 7) {
    uVar2 = (uint)uVar8;
  }
  uVar3 = uVar2;
  if (uVar2 == 6) {
    uVar3 = 0xffffffff;
  }
  local_1a0._0_4_ = param_3;
  if ((int)uVar3 < 0) {
LAB_00740518:
    puVar9 = (undefined4 *)PTR_DAT_04bb3238;
    if ((((uVar2 != 0) || ((param_4 & 1) != 0)) || (*(long *)(param_1 + 0x200) == 0)) ||
       (lVar6 = *(long *)(*(long *)(param_1 + 0x200) + 0x20), lVar6 == 0)) goto LAB_007406b0;
    plVar11 = (long *)(puVar4 + (long)*(int *)(&DAT_04c969c8)[local_1a0._4_4_] * 0x10);
    (**(code **)(*plVar11 + 0x18))(plVar11);
    local_a8 = plVar11[1];
    local_b0 = PTR_DAT_04bb2020 + 0x10;
    lVar6 = FUN_038c6d48(0,&local_b0,lVar6,8,1,0);
    if (lVar6 == 0) {
      puVar9 = (undefined4 *)PTR_DAT_04bb3238;
      goto LAB_007406b0;
    }
  }
  else {
    plVar11 = (long *)(param_1 + 0x1d8) + uVar3;
    if (5 < uVar3) {
      plVar11 = (long *)(param_1 + 0x1d8);
    }
    if ((*plVar11 == 0) || (lVar6 = *(long *)(*plVar11 + 0x20), lVar6 == 0)) goto LAB_00740518;
    plVar11 = (long *)(PTR_DAT_04bb3840 + (long)*piVar7 * 0x10);
    (**(code **)(*plVar11 + 0x18))(plVar11);
    local_a8 = plVar11[1];
    local_b0 = PTR_DAT_04bb2020 + 0x10;
    lVar6 = FUN_038c6d48(0,&local_b0,lVar6,8,1,0);
    if (lVar6 == 0) goto LAB_00740518;
  }
  puVar4 = PTR_DAT_04bb3350;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  lVar10 = *(long *)(lVar5 + 0xa8);
  *(long *)(lVar5 + 0xa8) = lVar6;
  lVar5 = (**(code **)((&DAT_04c969c8)[local_1a0._4_4_] + 8))(&local_1a0,lVar6);
  nn::os::LockMutex((MutexType *)(param_1 + 0x548));
  *(uint *)(lVar5 + 0x230) =
       *(uint *)(*(long *)(param_1 + 0x1c0) + 0x24) |
       *(int *)(*(long *)(param_1 + 0x1c0) + 0x10) << 0x14;
  FUN_00763500(*(undefined8 *)(param_1 + 0x1c0),lVar5);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x548));
  FUN_006f98d0(lVar5,&local_1a0,lVar6);
  if (lVar10 != 1) {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    *(long *)(lVar6 + 0xa8) = lVar10;
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x470) + 0x20);
  puVar9 = (undefined4 *)(lVar5 + 0x230);
  if (lVar6 != 0) {
    local_b0 = PTR_DAT_04bb5070 + 0x10;
    local_70 = PTR_DAT_04bb2020 + 0x10;
    lStack_90 = param_1 + 0x498;
    local_a0 = 0;
    local_c8 = 0;
    local_a8 = CONCAT53((int5)((ulong)local_a8 >> 0x18),0x20000);
    local_78 = param_1 + 0x4d8;
    local_98 = *(undefined8 *)(*(long *)(param_1 + 0x470) + 8);
    uStack_80 = 0;
    local_68 = "ActorLoad";
    local_c0 = &local_b0;
    uStack_b8 = 0;
    local_88 = lVar5;
    FUN_03f45184(lVar6,&local_c8);
  }
LAB_007406b0:
  return *puVar9;
}

