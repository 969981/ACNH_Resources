
void FUN_027a19d8(undefined4 *param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *local_58;
  char *local_50;
  undefined8 uStack_48;
  
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return;
  }
  lVar2 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*param_1);
  if (lVar2 == 0) {
    return;
  }
  lVar6 = *(long *)(lVar2 + 0x18358);
  if (lVar6 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
      plVar4 = *(long **)(lVar6 + 0x20);
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
      uVar3 = uVar3 & 0xffffffff;
      if (*(long *)(lVar2 + 0x18358) == 0) goto LAB_027a1a8c;
      plVar4 = *(long **)(*(long *)(lVar2 + 0x18358) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_58 = *(undefined **)(lVar2 + 0x18338);
      local_50 = *(char **)(lVar2 + 0x18340);
      uStack_48 = 0x62ac;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
    }
  }
LAB_027a1a8c:
  lVar6 = *(long *)(lVar2 + 0x18340) + *(long *)(lVar2 + 0x18338);
  FUN_0285dc20(lVar6 + 0x5498,param_2,9999999);
  FUN_0285dc20(lVar6 + 0x54a0,param_2,999999999);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0x18358) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0x18358) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_50 = "GetMiles";
  local_58 = puVar1;
  FUN_021294b0(&local_58,param_2 / 100,param_1);
  FUN_01b67280(lVar2,2,param_2);
  local_50 = "GotBonusToday";
  local_58 = puVar1;
  FUN_0274dc60(param_1,&local_58,param_2);
  return;
}

