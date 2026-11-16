
void FUN_027a1814(byte *param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  byte local_64 [4];
  undefined *local_60;
  char *local_58;
  undefined8 uStack_50;
  byte local_48 [4];
  undefined4 local_44;
  
  local_64[0] = *param_1;
  if (7 < local_64[0]) {
    local_64[0] = 0xff;
  }
  lVar2 = FUN_02583354(DAT_055021a0,local_64,1);
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
      if (*(long *)(lVar2 + 0x18358) == 0) goto LAB_027a18dc;
      plVar4 = *(long **)(*(long *)(lVar2 + 0x18358) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_60 = *(undefined **)(lVar2 + 0x18338);
      local_58 = *(char **)(lVar2 + 0x18340);
      uStack_50 = 0x62ac;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_60);
    }
  }
LAB_027a18dc:
  lVar6 = *(long *)(lVar2 + 0x18340) + *(long *)(lVar2 + 0x18338);
  FUN_0285dc20(lVar6 + 0x5498,param_2,9999999);
  FUN_0285dc20(lVar6 + 0x54a0,param_2,999999999);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0x18358) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0x18358) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  local_48[0] = *param_1;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_58 = "GetMiles";
  if (7 < local_48[0]) {
    local_48[0] = 0xff;
  }
  local_60 = puVar1;
  local_44 = FUN_02582fe0(local_48);
  FUN_021294b0(&local_60,param_2 / 100,&local_44);
  FUN_01b67280(lVar2,2,param_2);
  local_58 = "GotBonusToday";
  local_60 = puVar1;
  FUN_0274ca70(param_1,&local_60,param_2);
  return;
}

