
void FUN_00740afc(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  void *pvVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  undefined4 local_d0 [2];
  long **local_c8;
  long *local_c0;
  char *pcStack_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  char *local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  long *local_88;
  long *plStack_80;
  undefined *local_78;
  long *plStack_70;
  char *local_68;
  undefined1 *puStack_60;
  undefined4 local_58;
  
  *(undefined4 *)(param_1 + 0x5e8) = 1;
  puVar6 = PTR_DAT_04bb3350;
  puVar5 = PTR_DAT_04bb2698;
  lVar15 = *(long *)PTR_DAT_04bb2698;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  puVar2 = (undefined8 *)(lVar15 + 8);
  if (lVar8 != 0) {
    puVar2 = (undefined8 *)(lVar8 + 0xa8);
  }
  FUN_0071cfd0(param_1 + 0x1d0,*puVar2);
  if (*(long *)(param_1 + 0x1d8) == 0) {
    iVar14 = 0;
    lVar8 = *(long *)(param_1 + 0x1e0);
  }
  else {
    iVar14 = *(int *)(*(long *)(param_1 + 0x1d8) + 0x10);
    lVar8 = *(long *)(param_1 + 0x1e0);
  }
  if (lVar8 != 0) {
    iVar14 = *(int *)(lVar8 + 0x10) + iVar14;
  }
  if (*(long *)(param_1 + 0x1e8) != 0) {
    iVar14 = *(int *)(*(long *)(param_1 + 0x1e8) + 0x10) + iVar14;
  }
  if (*(long *)(param_1 + 0x1f0) != 0) {
    iVar14 = *(int *)(*(long *)(param_1 + 0x1f0) + 0x10) + iVar14;
  }
  if (*(long *)(param_1 + 0x1f8) != 0) {
    iVar14 = *(int *)(*(long *)(param_1 + 0x1f8) + 0x10) + iVar14;
  }
  if (*(long *)(param_1 + 0x200) != 0) {
    iVar14 = *(int *)(*(long *)(param_1 + 0x200) + 0x10) + iVar14;
  }
  lVar8 = *(long *)puVar5;
  *(int *)(param_1 + 0x1c8) = iVar14;
  if (lVar8 == 0) {
    pvVar9 = malloc(0x30);
  }
  else {
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    puVar2 = (undefined8 *)(lVar8 + 8);
    if (lVar15 != 0) {
      puVar2 = (undefined8 *)(lVar15 + 0xa8);
    }
    pvVar9 = (void *)(**(code **)(*(long *)*puVar2 + 0x30))((long *)*puVar2,0x30,8);
  }
  FUN_007633b0(pvVar9,iVar14,0);
  *(void **)(param_1 + 0x1c0) = pvVar9;
  iVar14 = *(int *)(param_1 + 0x1c8);
  if (0 < iVar14) {
    lVar8 = *(long *)puVar5;
    if (lVar8 == 0) {
      pvVar9 = malloc((long)iVar14 << 3);
    }
    else {
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
      plVar10 = (long *)(lVar8 + 8);
      if (lVar15 != 0) {
        plVar10 = (long *)(lVar15 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) goto LAB_00740ca4;
      pvVar9 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,(long)iVar14 << 3,8);
    }
    if (pvVar9 != (void *)0x0) {
      *(void **)(param_1 + 0x280) = pvVar9;
      *(undefined4 *)(param_1 + 0x278) = 0;
      *(int *)(param_1 + 0x27c) = iVar14;
    }
  }
LAB_00740ca4:
  lVar15 = *(long *)puVar5;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
  puVar4 = PTR_DAT_04bb2120;
  puVar1 = PTR_DAT_04bb2020;
  puVar2 = (undefined8 *)(lVar15 + 8);
  if (lVar8 != 0) {
    puVar2 = (undefined8 *)(lVar8 + 0xa8);
  }
  plVar10 = (long *)*puVar2;
  local_68 = "ActorCalcSub0";
  puStack_60 = (undefined1 *)0x0;
  local_58 = 1;
  lVar8 = *(long *)puVar5;
  local_90 = 1;
  pcStack_b8 = PTR_DAT_04bb2020 + 0x10;
  local_78 = PTR_DAT_04bb2120;
  local_b0 = PTR_DAT_04bb2120;
  local_a0 = "ActorCalcSub1";
  uStack_98 = 0;
  local_c0 = plVar10;
  puStack_a8 = pcStack_b8;
  local_88 = plVar10;
  plStack_80 = (long *)pcStack_b8;
  plStack_70 = (long *)pcStack_b8;
  if (lVar8 == 0) {
    plVar12 = malloc(0x28);
  }
  else {
    plVar11 = plVar10;
    if (plVar10 == (long *)0x0) {
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
      plVar11 = (long *)(lVar8 + 8);
      if (lVar15 != 0) {
        plVar11 = (long *)(lVar15 + 0xa8);
      }
      plVar11 = (long *)*plVar11;
      plVar12 = (long *)0x0;
      if (plVar11 == (long *)0x0) goto LAB_00740d64;
    }
    plVar12 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x28,8);
  }
LAB_00740d64:
  *(undefined4 *)(plVar12 + 2) = 0;
  puVar7 = PTR_DAT_04bb5140;
  plVar12[3] = 0;
  plVar12[4] = 0;
  *plVar12 = (long)(puVar7 + 0x10);
  plVar12[1] = 0;
  *(long **)(param_1 + 600) = plVar12;
  FUN_0082c840(plVar12,&local_88);
  lVar8 = *(long *)puVar5;
  if (lVar8 == 0) {
    plVar10 = malloc(0x28);
  }
  else {
    if (plVar10 == (long *)0x0) {
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
      puVar2 = (undefined8 *)(lVar8 + 8);
      if (lVar15 != 0) {
        puVar2 = (undefined8 *)(lVar15 + 0xa8);
      }
      plVar10 = (long *)*puVar2;
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)0x0;
        goto LAB_00740de4;
      }
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x28,8);
  }
LAB_00740de4:
  *(undefined4 *)(plVar10 + 2) = 0;
  *plVar10 = (long)(puVar7 + 0x10);
  plVar10[1] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(long **)(param_1 + 0x260) = plVar10;
  FUN_0082c840(plVar10,&local_c0);
  lVar15 = *(long *)puVar5;
  *(undefined4 *)(param_1 + 0x250) =
       *(undefined4 *)(**(long **)(*(long *)(param_1 + 600) + 0x18) + 200);
  uVar3 = *(undefined4 *)(**(long **)(*(long *)(param_1 + 0x260) + 0x18) + 200);
  *(long *)(param_1 + 0x218) = param_1;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(long *)(param_1 + 0x238) = param_1;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined4 *)(param_1 + 0x254) = uVar3;
  *(code **)(param_1 + 0x220) = FUN_00741084;
  *(code **)(param_1 + 0x240) = FUN_00741084;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
  local_c0 = (long *)(puVar1 + 0x10);
  puVar2 = (undefined8 *)(lVar15 + 8);
  if (lVar8 != 0) {
    puVar2 = (undefined8 *)(lVar8 + 0xa8);
  }
  plVar10 = (long *)*puVar2;
  local_78 = puVar4;
  lVar8 = *(long *)puVar5;
  pcStack_b8 = "ActorLoad2";
  local_d0[0] = 1;
  local_58 = 1;
  local_68 = "ActorLoad1";
  local_c8 = &local_c0;
  local_88 = plVar10;
  plStack_80 = local_c0;
  plStack_70 = local_c0;
  if (lVar8 == 0) {
    puStack_60 = (undefined1 *)local_d0;
    plVar12 = malloc(0x20);
  }
  else {
    plVar11 = plVar10;
    puStack_60 = (undefined1 *)local_d0;
    if (plVar10 == (long *)0x0) {
      puStack_60 = (undefined1 *)local_d0;
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
      plVar11 = (long *)(lVar8 + 8);
      if (lVar15 != 0) {
        plVar11 = (long *)(lVar15 + 0xa8);
      }
      plVar11 = (long *)*plVar11;
      plVar12 = (long *)0x0;
      if (plVar11 == (long *)0x0) goto LAB_00740efc;
    }
    plVar12 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x20,8);
  }
LAB_00740efc:
  puVar1 = PTR_DAT_04bdf1d8 + 0x10;
  plVar12[2] = 0;
  plVar12[3] = 0;
  *plVar12 = (long)puVar1;
  plVar12[1] = 0;
  *(long **)(param_1 + 0x518) = plVar12;
  lVar8 = *(long *)puVar5;
  if (lVar8 == 0) {
    plVar10 = malloc(0x28);
  }
  else {
    if (plVar10 == (long *)0x0) {
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
      puVar2 = (undefined8 *)(lVar8 + 8);
      if (lVar15 != 0) {
        puVar2 = (undefined8 *)(lVar15 + 0xa8);
      }
      plVar10 = (long *)*puVar2;
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)0x0;
        goto LAB_00740f70;
      }
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x28,8);
  }
LAB_00740f70:
  *(undefined4 *)(plVar10 + 2) = 0;
  *plVar10 = (long)(puVar7 + 0x10);
  plVar10[1] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  *(long **)(param_1 + 0x470) = plVar10;
  FUN_0082c840(plVar10,&local_88);
  lVar8 = *(long *)(param_1 + 0x470);
  *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(**(long **)(lVar8 + 0x18) + 200);
  uVar3 = *(undefined4 *)
           (*(long *)(*(long *)(lVar8 + 0x18) + (ulong)(1 < *(uint *)(lVar8 + 0x10)) * 8) + 200);
  *(undefined1 **)(param_1 + 0x488) = &LAB_0074109c;
  *(long *)(param_1 + 0x480) = param_1;
  *(undefined8 *)(param_1 + 0x490) = 0;
  *(long *)(param_1 + 0x4a0) = param_1;
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  *(long *)(param_1 + 0x4c0) = param_1;
  *(undefined1 **)(param_1 + 0x4c8) = &LAB_0074098c;
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  *(long *)(param_1 + 0x4e0) = param_1;
  *(undefined8 *)(param_1 + 0x4f0) = 0;
  *(long *)(param_1 + 0x500) = param_1;
  *(undefined8 *)(param_1 + 0x510) = 0;
  *(undefined1 **)(param_1 + 0x4a8) = &LAB_00740788;
  *(undefined4 *)(param_1 + 0x46c) = uVar3;
  *(undefined1 **)(param_1 + 0x4e8) = &LAB_007407b0;
  *(undefined1 **)(param_1 + 0x508) = &LAB_007409ac;
  lVar15 = *(long *)PTR_DAT_04bb3510;
  lVar13 = *(long *)(lVar15 + 0x1c8);
  lVar8 = param_1 + *(int *)(lVar15 + 0x1dc);
  *(long *)(lVar15 + 0x1c8) = lVar8 + 0x5f0;
  *(long *)(lVar8 + 0x5f0) = lVar13;
  *(long *)(lVar8 + 0x5f8) = lVar15 + 0x1c8;
  if (lVar13 != 0) {
    *(long *)(lVar13 + 8) = lVar8 + 0x5f0;
  }
  *(int *)(lVar15 + 0x1d8) = *(int *)(lVar15 + 0x1d8) + 1;
  *(undefined8 *)(param_1 + 0x658) = 0x800000008;
  return;
}

