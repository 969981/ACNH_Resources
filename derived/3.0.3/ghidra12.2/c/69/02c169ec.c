
void FUN_02c169ec(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined *local_b8;
  undefined1 *puStack_b0;
  undefined *local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined1 local_94 [63];
  undefined1 local_55;
  
  FUN_02bf0fa4();
  local_a8 = (undefined *)CONCAT44(local_a8._4_4_,1);
  FUN_03d59360(param_1,&local_a8);
  puVar6 = PTR_DAT_04bb2bc0;
  local_98 = 0x40;
  local_55 = 0;
  local_94[0] = 0;
  lVar1 = **(long **)(param_1 + 0x3f8) + 0x38;
  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
  local_a8 = puVar2;
  local_a0 = local_94;
  FUN_038d1270(&local_a8,"/L_Undo_%02d",0);
  (**(code **)(local_a8 + 0x18))(&local_a8);
  puVar4 = PTR_DAT_04bb2020;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  puStack_b0 = local_a0;
  local_b8 = puVar3;
  lVar7 = FUN_02bb2688(lVar1,&local_b8);
  *(long *)(param_1 + 0x5b0) = lVar7;
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 0x218);
    plVar9 = *(long **)(*(long *)(param_1 + 0x210) + 0x48);
    *(long **)(lVar7 + 0x18) = plVar9;
    plVar5 = (long *)(*(int *)((long)plVar9 + 0x14) + lVar7);
    lVar7 = *plVar9;
    *plVar9 = (long)plVar5;
    *plVar5 = lVar7;
    plVar5[1] = (long)plVar9;
    if (lVar7 != 0) {
      *(long **)(lVar7 + 8) = plVar5;
    }
    *(int *)(plVar9 + 2) = (int)plVar9[2] + 1;
  }
  local_98 = 0x40;
  local_55 = 0;
  local_94[0] = 0;
  local_a8 = puVar2;
  local_a0 = local_94;
  FUN_038d1270(&local_a8,"/L_Erase_%02d",0);
  (**(code **)(local_a8 + 0x18))(&local_a8);
  puStack_b0 = local_a0;
  local_b8 = puVar3;
  lVar7 = FUN_02bb2688(lVar1,&local_b8);
  *(long *)(param_1 + 0x5b8) = lVar7;
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 0x218);
    plVar9 = *(long **)(*(long *)(param_1 + 0x210) + 0x48);
    *(long **)(lVar7 + 0x18) = plVar9;
    plVar5 = (long *)(*(int *)((long)plVar9 + 0x14) + lVar7);
    lVar7 = *plVar9;
    *plVar9 = (long)plVar5;
    *plVar5 = lVar7;
    plVar5[1] = (long)plVar9;
    if (lVar7 != 0) {
      *(long **)(lVar7 + 8) = plVar5;
    }
    *(int *)(plVar9 + 2) = (int)plVar9[2] + 1;
  }
  local_a8 = puVar6 + 0x10;
  local_55 = 0;
  local_98 = 0x40;
  local_a0 = local_94;
  local_94[0] = 0;
  FUN_038d1270(&local_a8,"/L_PenSizeBtn_%02d",0);
  (**(code **)(local_a8 + 0x18))(&local_a8);
  puVar2 = puVar4 + 0x10;
  puStack_b0 = local_a0;
  local_b8 = puVar2;
  lVar7 = FUN_02bb2688(lVar1,&local_b8);
  *(long *)(param_1 + 0x5c0) = lVar7;
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 0x218);
    plVar9 = *(long **)(*(long *)(param_1 + 0x210) + 0x48);
    *(long **)(lVar7 + 0x18) = plVar9;
    plVar5 = (long *)(*(int *)((long)plVar9 + 0x14) + lVar7);
    lVar7 = *plVar9;
    *plVar9 = (long)plVar5;
    *plVar5 = lVar7;
    plVar5[1] = (long)plVar9;
    if (lVar7 != 0) {
      *(long **)(lVar7 + 8) = plVar5;
    }
    *(int *)(plVar9 + 2) = (int)plVar9[2] + 1;
  }
  FUN_038d1270(&local_a8,"/L_PenSizeBtn_%02d",1);
  (**(code **)(local_a8 + 0x18))(&local_a8);
  puStack_b0 = local_a0;
  local_b8 = puVar2;
  lVar7 = FUN_02bb2688(lVar1,&local_b8);
  *(long *)(param_1 + 0x5c8) = lVar7;
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 0x218);
    plVar9 = *(long **)(*(long *)(param_1 + 0x210) + 0x48);
    *(long **)(lVar7 + 0x18) = plVar9;
    plVar5 = (long *)(*(int *)((long)plVar9 + 0x14) + lVar7);
    lVar7 = *plVar9;
    *plVar9 = (long)plVar5;
    *plVar5 = lVar7;
    plVar5[1] = (long)plVar9;
    if (lVar7 != 0) {
      *(long **)(lVar7 + 8) = plVar5;
    }
    *(int *)(plVar9 + 2) = (int)plVar9[2] + 1;
  }
  FUN_038d1270(&local_a8,"/L_PenSizeBtn_%02d",2);
  (**(code **)(local_a8 + 0x18))(&local_a8);
  puVar4 = puVar4 + 0x10;
  puStack_b0 = local_a0;
  local_b8 = puVar4;
  lVar7 = FUN_02bb2688(lVar1,&local_b8);
  *(long *)(param_1 + 0x5d0) = lVar7;
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 0x218);
    plVar9 = *(long **)(*(long *)(param_1 + 0x210) + 0x48);
    *(long **)(lVar7 + 0x18) = plVar9;
    plVar5 = (long *)(*(int *)((long)plVar9 + 0x14) + lVar7);
    lVar7 = *plVar9;
    *plVar9 = (long)plVar5;
    *plVar5 = lVar7;
    plVar5[1] = (long)plVar9;
    if (lVar7 != 0) {
      *(long **)(lVar7 + 8) = plVar5;
    }
    *(int *)(plVar9 + 2) = (int)plVar9[2] + 1;
  }
  local_a0 = "/L_MsgCard_00";
  local_a8 = puVar4;
  uVar8 = FUN_02bb2508(lVar1,&local_a8);
  *(undefined8 *)(param_1 + 0x5d8) = uVar8;
  local_a0 = "/L_ToolBar_00";
  local_a8 = puVar4;
  uVar8 = FUN_02bb2508(lVar1,&local_a8);
  *(undefined8 *)(param_1 + 0x5e0) = uVar8;
  local_a0 = "/L_Mouse_00";
  local_a8 = puVar4;
  uVar8 = FUN_02bb2508(lVar1,&local_a8);
  *(undefined8 *)(param_1 + 0x5e8) = uVar8;
  return;
}

