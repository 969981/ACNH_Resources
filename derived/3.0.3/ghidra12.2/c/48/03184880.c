
void FUN_03184880(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
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
  puVar5 = PTR_DAT_04bb2bc0;
  puVar3 = PTR_DAT_04bb2020;
  local_a0 = local_94;
  uVar9 = 0;
  local_98 = 0x40;
  local_55 = 0;
  local_94[0] = 0;
  local_a8 = PTR_DAT_04bb2bc0 + 0x10;
  lVar1 = **(long **)(param_1 + 0x3f8) + 0x38;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  do {
    FUN_038d1270(&local_a8,"/L_Btn_%02d",uVar9 & 0xffffffff);
    (**(code **)(local_a8 + 0x18))(&local_a8);
    puStack_b0 = local_a0;
    local_b8 = puVar2;
    lVar6 = FUN_02bb2688(lVar1,&local_b8);
    *(long *)(param_1 + 0x590 + uVar9 * 8) = lVar6;
    if (lVar6 != 0) {
      lVar6 = *(long *)(lVar6 + 0x218);
      plVar8 = *(long **)(*(long *)(param_1 + 0x210) + 0x48);
      *(long **)(lVar6 + 0x18) = plVar8;
      plVar4 = (long *)(*(int *)((long)plVar8 + 0x14) + lVar6);
      lVar6 = *plVar8;
      *plVar8 = (long)plVar4;
      *plVar4 = lVar6;
      plVar4[1] = (long)plVar8;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 8) = plVar4;
      }
      *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 != 0x14);
  local_55 = 0;
  uVar9 = 0;
  local_98 = 0x40;
  local_a0 = local_94;
  local_a8 = puVar5 + 0x10;
  local_94[0] = 0;
  do {
    FUN_038d1270(&local_a8,"/L_BtnBag_%02d",uVar9 & 0xffffffff);
    (**(code **)(local_a8 + 0x18))(&local_a8);
    puStack_b0 = local_a0;
    local_b8 = puVar3 + 0x10;
    lVar6 = FUN_02bb2688(lVar1,&local_b8);
    *(long *)(param_1 + 0x630 + uVar9 * 8) = lVar6;
    if (lVar6 != 0) {
      lVar6 = *(long *)(lVar6 + 0x218);
      plVar8 = *(long **)(*(long *)(param_1 + 0x210) + 0x48);
      *(long **)(lVar6 + 0x18) = plVar8;
      plVar4 = (long *)(*(int *)((long)plVar8 + 0x14) + lVar6);
      lVar6 = *plVar8;
      *plVar8 = (long)plVar4;
      *plVar4 = lVar6;
      plVar4[1] = (long)plVar8;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 8) = plVar4;
      }
      *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 != 0x14);
  local_55 = 0;
  local_98 = 0x40;
  local_94[0] = 0;
  local_a8 = puVar5 + 0x10;
  local_a0 = local_94;
  FUN_038d1270(&local_a8,"/L_ChgClothBtn_%02d",0);
  (**(code **)(local_a8 + 0x18))(&local_a8);
  puStack_b0 = local_a0;
  local_b8 = puVar3 + 0x10;
  lVar6 = FUN_02bb2688(lVar1,&local_b8);
  *(long *)(param_1 + 0x6d0) = lVar6;
  if (lVar6 != 0) {
    lVar6 = *(long *)(lVar6 + 0x218);
    plVar8 = *(long **)(*(long *)(param_1 + 0x210) + 0x48);
    *(long **)(lVar6 + 0x18) = plVar8;
    plVar4 = (long *)(*(int *)((long)plVar8 + 0x14) + lVar6);
    lVar6 = *plVar8;
    *plVar8 = (long)plVar4;
    *plVar4 = lVar6;
    plVar4[1] = (long)plVar8;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar4;
    }
    *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
  }
  local_98 = 0x40;
  local_55 = 0;
  local_94[0] = 0;
  local_a8 = puVar5 + 0x10;
  local_a0 = local_94;
  FUN_038d1270(&local_a8,"/L_TextBtn_%02d",0);
  (**(code **)(local_a8 + 0x18))(&local_a8);
  puStack_b0 = local_a0;
  local_b8 = puVar3 + 0x10;
  lVar6 = FUN_02bb2688(lVar1,&local_b8);
  *(long *)(param_1 + 0x6d8) = lVar6;
  if (lVar6 != 0) {
    lVar6 = *(long *)(lVar6 + 0x218);
    plVar8 = *(long **)(*(long *)(param_1 + 0x210) + 0x48);
    *(long **)(lVar6 + 0x18) = plVar8;
    plVar4 = (long *)(*(int *)((long)plVar8 + 0x14) + lVar6);
    lVar6 = *plVar8;
    *plVar8 = (long)plVar4;
    *plVar4 = lVar6;
    plVar4[1] = (long)plVar8;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar4;
    }
    *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
  }
  local_a8 = puVar5 + 0x10;
  local_55 = 0;
  local_98 = 0x40;
  local_a0 = local_94;
  local_94[0] = 0;
  FUN_038d1270(&local_a8,"/L_BellBtn_%02d",0);
  (**(code **)(local_a8 + 0x18))(&local_a8);
  puVar3 = puVar3 + 0x10;
  puStack_b0 = local_a0;
  local_b8 = puVar3;
  lVar6 = FUN_02bb2688(lVar1,&local_b8);
  *(long *)(param_1 + 0x6e0) = lVar6;
  if (lVar6 != 0) {
    lVar6 = *(long *)(lVar6 + 0x218);
    plVar8 = *(long **)(*(long *)(param_1 + 0x210) + 0x48);
    *(long **)(lVar6 + 0x18) = plVar8;
    plVar4 = (long *)(*(int *)((long)plVar8 + 0x14) + lVar6);
    lVar6 = *plVar8;
    *plVar8 = (long)plVar4;
    *plVar4 = lVar6;
    plVar4[1] = (long)plVar8;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar4;
    }
    *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
  }
  local_a0 = "/L_DragBtn_00";
  local_a8 = puVar3;
  uVar7 = FUN_031866b4(lVar1,&local_a8);
  *(undefined8 *)(param_1 + 0x6e8) = uVar7;
  local_a0 = "/L_ExchangeBtn_00";
  local_a8 = puVar3;
  uVar7 = FUN_031866b4(lVar1,&local_a8);
  *(undefined8 *)(param_1 + 0x6f0) = uVar7;
  local_a0 = "/L_BG_00";
  local_a8 = puVar3;
  uVar7 = FUN_02bb2508(lVar1,&local_a8);
  *(undefined8 *)(param_1 + 0x6f8) = uVar7;
  local_a0 = "/L_PokiBtn_00";
  local_a8 = puVar3;
  uVar7 = FUN_02bb2508(lVar1,&local_a8);
  *(undefined8 *)(param_1 + 0x700) = uVar7;
  return;
}

