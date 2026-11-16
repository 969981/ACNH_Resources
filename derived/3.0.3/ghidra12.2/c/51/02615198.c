
void FUN_02615198(byte *param_1,int param_2,int param_3)

{
  bool bVar1;
  long *plVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  char *pcVar11;
  undefined *local_68;
  char *local_60;
  undefined8 uStack_58;
  byte local_34 [4];
  
  local_34[0] = *param_1;
  if (7 < local_34[0]) {
    return;
  }
  lVar5 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_34,1);
  puVar3 = PTR_DAT_04bb2020;
  if (lVar5 == 0) {
    return;
  }
  plVar2 = (long *)(lVar5 + 0x18300);
  lVar9 = *(long *)(lVar5 + 0x18320);
  if (lVar9 == 0) {
    uVar6 = 0;
    lVar9 = *(long *)(lVar5 + 0x18308) + *plVar2;
    if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) goto LAB_02615390;
  }
  else {
    if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
      uVar6 = 0;
      bVar1 = 1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476);
      plVar7 = *(long **)(lVar9 + 0x20);
joined_r0x02615380:
      if (plVar7 == (long *)0x0) goto LAB_02615384;
      local_68 = (undefined *)*plVar2;
      local_60 = *(char **)(lVar5 + 0x18308);
      uStack_58 = 0x1000;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
      lVar9 = *(long *)(lVar5 + 0x18308) + *plVar2;
    }
    else {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      uVar6 = uVar6 & 0xffffffff;
      bVar1 = 1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476);
      if (*(long *)(lVar5 + 0x18320) != 0) {
        plVar7 = *(long **)(*(long *)(lVar5 + 0x18320) + 0x20);
        goto joined_r0x02615380;
      }
LAB_02615384:
      lVar9 = *(long *)(lVar5 + 0x18308) + *plVar2;
    }
    if (!bVar1) {
LAB_02615390:
      local_68 = puVar3 + 0x10;
      local_60 = "ReserveTradeRemakeBonus";
      iVar4 = FUN_0274bbb0(lVar9,&local_68);
      if (iVar4 == 0) {
        if ((*(long *)(lVar5 + 0x18320) != 0) &&
           (plVar7 = *(long **)(*(long *)(lVar5 + 0x18320) + 0x20), plVar7 != (long *)0x0)) {
          local_68 = (undefined *)*plVar2;
          local_60 = *(char **)(lVar5 + 0x18308);
          uStack_58 = 0x1000;
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
        }
        local_68 = puVar3 + 0x10;
        local_60 = "ReserveTradeRemakeBonus";
        FUN_0274c120(*(long *)(lVar5 + 0x18308) + *plVar2,&local_68,param_2 != 0,param_1);
      }
      if ((*(long *)(lVar5 + 0x18320) != 0) &&
         (plVar7 = *(long **)(*(long *)(lVar5 + 0x18320) + 0x20), plVar7 != (long *)0x0)) {
        local_68 = (undefined *)*plVar2;
        local_60 = *(char **)(lVar5 + 0x18308);
        uStack_58 = 0x1000;
        (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
      }
      lVar9 = *plVar2;
      lVar10 = *(long *)(lVar5 + 0x18308);
      pcVar11 = "ReserveTotalTradeBonus";
      goto LAB_02615444;
    }
  }
  local_68 = puVar3 + 0x10;
  local_60 = "ReserveTradeRemakeBonusMultiPlay";
  iVar4 = FUN_0274bbb0(lVar9,&local_68);
  if (iVar4 == 0) {
    if ((*(long *)(lVar5 + 0x18320) != 0) &&
       (plVar7 = *(long **)(*(long *)(lVar5 + 0x18320) + 0x20), plVar7 != (long *)0x0)) {
      local_68 = (undefined *)*plVar2;
      local_60 = *(char **)(lVar5 + 0x18308);
      uStack_58 = 0x1000;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
    }
    local_68 = puVar3 + 0x10;
    local_60 = "ReserveTradeRemakeBonusMultiPlay";
    FUN_0274c120(*(long *)(lVar5 + 0x18308) + *plVar2,&local_68,param_2 != 0,param_1);
  }
  if ((*(long *)(lVar5 + 0x18320) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar5 + 0x18320) + 0x20), plVar7 != (long *)0x0)) {
    local_68 = (undefined *)*plVar2;
    local_60 = *(char **)(lVar5 + 0x18308);
    uStack_58 = 0x1000;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
  }
  lVar9 = *plVar2;
  lVar10 = *(long *)(lVar5 + 0x18308);
  pcVar11 = "ReserveTotalTradeBonusMultiPlay";
LAB_02615444:
  local_68 = puVar3 + 0x10;
  local_60 = pcVar11;
  iVar4 = FUN_0274bbb0(lVar10 + lVar9,&local_68);
  if (iVar4 == 0) {
    if ((*(long *)(lVar5 + 0x18320) != 0) &&
       (plVar7 = *(long **)(*(long *)(lVar5 + 0x18320) + 0x20), plVar7 != (long *)0x0)) {
      local_68 = (undefined *)*plVar2;
      local_60 = *(char **)(lVar5 + 0x18308);
      uStack_58 = 0x1000;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
    }
    local_68 = puVar3 + 0x10;
    local_60 = pcVar11;
    FUN_0274c120(*(long *)(lVar5 + 0x18308) + *plVar2,&local_68,param_3 != 0,param_1);
  }
  if ((*(long *)(lVar5 + 0x18320) != 0) &&
     (plVar7 = *(long **)(*(long *)(lVar5 + 0x18320) + 0x20), plVar7 != (long *)0x0)) {
    local_68 = (undefined *)*plVar2;
    local_60 = *(char **)(lVar5 + 0x18308);
    uStack_58 = 0x1000;
    (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
  }
  local_68 = puVar3 + 0x10;
  local_60 = "ReserveTradeBonusTicketNum";
  FUN_0274ccb0(*(long *)(lVar5 + 0x18308) + *plVar2,&local_68,param_3 + param_2,param_1);
  if (param_2 != 0) {
    if ((*(long *)(lVar5 + 0x18320) != 0) &&
       (plVar7 = *(long **)(*(long *)(lVar5 + 0x18320) + 0x20), plVar7 != (long *)0x0)) {
      local_68 = (undefined *)*plVar2;
      local_60 = *(char **)(lVar5 + 0x18308);
      uStack_58 = 0x1000;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
    }
    local_68 = puVar3 + 0x10;
    local_60 = "GetTradeRemakeBonusCount";
    FUN_0274ccb0(*(long *)(lVar5 + 0x18308) + *plVar2,&local_68,1,param_1);
  }
  if (param_3 != 0) {
    if ((*(long *)(lVar5 + 0x18320) != 0) &&
       (plVar7 = *(long **)(*(long *)(lVar5 + 0x18320) + 0x20), plVar7 != (long *)0x0)) {
      local_68 = (undefined *)*plVar2;
      local_60 = *(char **)(lVar5 + 0x18308);
      uStack_58 = 0x1000;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_68);
    }
    local_68 = puVar3 + 0x10;
    local_60 = "GetTotalTradeBonusCount";
    FUN_0274ccb0(*(long *)(lVar5 + 0x18308) + *plVar2,&local_68,1,param_1);
  }
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar5 + 0x18320) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar5 + 0x18320) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  return;
}

