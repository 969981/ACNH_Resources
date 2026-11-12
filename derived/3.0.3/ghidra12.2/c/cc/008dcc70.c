
bool FUN_008dcc70(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  long *plVar7;
  ulong uVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined *local_d0;
  char *local_c8;
  undefined *local_c0;
  char *local_b8;
  int local_b0;
  undefined8 local_ac [7];
  undefined1 local_6d;
  long *local_68;
  char local_60;
  char local_5e;
  undefined4 local_54;
  
  puVar5 = PTR_DAT_04bb3238;
  iVar2 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
  if (iVar2 != -0x6efba09b) goto LAB_008dd064;
  local_54 = *(undefined4 *)PTR_DAT_04bb3238;
  local_c0 = (undefined *)CONCAT44(local_c0._4_4_,*(undefined4 *)(param_1 + 0x230));
  FUN_0071cb58(&local_68,PTR_DAT_04bb32f8,&local_c0,0);
  plVar7 = local_68;
  if (local_68 != (long *)0x0) {
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar8 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb3278);
    if ((uVar8 & 1) == 0) {
      local_5e = '\0';
    }
  }
  puVar4 = PTR_DAT_04bb2020;
  if (((local_68 != (long *)0x0) && (local_60 != '\0')) && (local_5e != '\0')) {
    local_c0 = PTR_DAT_04bb2020 + 0x10;
    local_b8 = "Npc:tkkB";
    local_54 = FUN_008fa0e0(local_68,&local_c0,0,*(undefined4 *)puVar5,
                            *(undefined4 *)(param_1 + 0x230));
  }
  if (*(int *)(param_1 + 0x37e68) != 0) {
    *(int *)(param_1 + 0x37e64) = *(int *)**(undefined8 **)(param_1 + 0x37e70);
    if (0 < *(int *)(param_1 + 0x37e68)) {
      puVar10 = (undefined8 *)**(undefined8 **)(param_1 + 0x37e70);
      *puVar10 = *(undefined8 *)(param_1 + 0x37e78);
      *(undefined8 **)(param_1 + 0x37e78) = puVar10;
      uVar3 = *(int *)(param_1 + 0x37e68) - 1;
      if (0 < *(int *)(param_1 + 0x37e68)) {
        if (uVar3 == 0) {
          iVar9 = 0;
        }
        else {
          memmove(*(void **)(param_1 + 0x37e70),(void *)((long)*(void **)(param_1 + 0x37e70) + 8),
                  (ulong)uVar3 << 3);
          iVar9 = *(int *)(param_1 + 0x37e68) + -1;
        }
        *(int *)(param_1 + 0x37e68) = iVar9;
      }
    }
  }
  uVar3 = *(int *)(param_1 + 0x37e64) + 1;
  if (uVar3 < 9) {
    local_b8 = (char *)local_ac;
    local_6d = 0;
    puVar10 = (undefined8 *)(&PTR_s_Invalid_04923c90)[uVar3];
    local_b0 = 0x40;
    if (local_b8 != (char *)puVar10) goto LAB_008dce50;
  }
  else {
    puVar10 = &DAT_0407ebb1;
LAB_008dce50:
    local_6d = 0;
    local_b0 = 0x40;
    local_c0 = PTR_DAT_04bb2030 + 0x10;
    local_b8 = (char *)local_ac;
    lVar11 = 0;
    do {
      if (*(char *)((long)puVar10 + lVar11) == '\0') {
LAB_008dce88:
        iVar9 = (int)lVar11;
joined_r0x008dce8c:
        if (0x3f < iVar9) {
          iVar9 = 0x3f;
        }
        goto LAB_008dce94;
      }
      if (*(char *)((long)puVar10 + lVar11 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_008dce88;
      }
      if (*(char *)((long)puVar10 + lVar11 + 2) == '\0') {
        iVar9 = (int)lVar11 + 2;
        goto joined_r0x008dce8c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    iVar9 = 0;
LAB_008dce94:
    memcpy(local_b8,puVar10,(long)iVar9);
    *(undefined1 *)((long)local_ac + (long)iVar9) = 0;
  }
  local_d0 = puVar4 + 0x10;
  local_c0 = PTR_DAT_04bb2bc0 + 0x10;
  local_c8 = "";
  FUN_008c3200(param_1,&local_c0,&local_d0,&local_54,0,0,0);
  *(undefined4 *)(param_1 + 0x30950) = *(undefined4 *)(param_1 + 0x30954);
  *(undefined4 *)(param_1 + 0x308a0) = *(undefined4 *)(param_1 + 0x30920);
  *(undefined4 *)(param_1 + 0x3089c) = *(undefined4 *)(param_1 + 0x3091c);
  *(undefined8 *)(param_1 + 0x30890) = *(undefined8 *)(param_1 + 0x30910);
  *(undefined4 *)(param_1 + 0x308b8) = *(undefined4 *)(param_1 + 0x30938);
  *(undefined4 *)(param_1 + 0x308b4) = *(undefined4 *)(param_1 + 0x30934);
  *(undefined4 *)(param_1 + 0x30898) = *(undefined4 *)(param_1 + 0x30918);
  *(undefined4 *)(param_1 + 0x308c0) = *(undefined4 *)(param_1 + 0x30940);
  *(undefined4 *)(param_1 + 0x308bc) = *(undefined4 *)(param_1 + 0x3093c);
  *(undefined8 *)(param_1 + 0x308a4) = *(undefined8 *)(param_1 + 0x30924);
  *(undefined8 *)(param_1 + 0x308ac) = *(undefined8 *)(param_1 + 0x3092c);
  *(undefined8 *)(param_1 + 0x308c4) = *(undefined8 *)(param_1 + 0x30944);
  puVar5 = PTR_DAT_04bb39b0;
  *(undefined4 *)(param_1 + 0x308cc) = *(undefined4 *)(param_1 + 0x3094c);
  if ((*(int *)(*(long *)puVar5 + 0x15c) == 0) ||
     (uVar8 = (ulong)*(byte *)(*(long *)puVar5 + 0x158), 7 < uVar8)) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)PTR_DAT_04bb4718 + uVar8 * 0xc + 0xd88;
  }
  FUN_008c5e58(param_1,lVar11);
  pcVar6 = local_b8;
  if (*(int *)(param_1 + 0x30950) == *(int *)(param_1 + 0x30954)) {
    *(undefined1 *)(param_1 + 0x37fad) = 0;
  }
  (**(code **)(local_c0 + 0x18))(&local_c0);
  lVar11 = 0;
  do {
    if (*(char *)((long)local_b8 + lVar11) == '\0') goto LAB_008dcff0;
    if (*(char *)((long)local_b8 + lVar11 + 1) == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_008dcff0;
    }
    if (*(char *)((long)local_b8 + lVar11 + 2) == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_008dcff0;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_008dcff0:
  uVar3 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
  uVar1 = 3;
  if ((int)(local_b0 - uVar3) < 4) {
    uVar1 = local_b0 + ~uVar3;
  }
  if (0 < (int)uVar1) {
    memcpy((void *)((long)pcVar6 + (ulong)uVar3),&DAT_040e917f,(ulong)uVar1);
    *(undefined1 *)((long)pcVar6 + (ulong)uVar1 + (ulong)uVar3) = 0;
  }
  local_d0 = puVar4 + 0x10;
  local_c8 = "KKFesDemoLiveCut";
  FUN_008c3200(param_1,&local_c0,&local_d0,&local_54,0,0,0);
LAB_008dd064:
  return iVar2 == -0x6efba09b;
}

