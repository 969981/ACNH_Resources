
void FUN_0279f0c8(byte *param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  byte local_4c [4];
  undefined *local_48;
  char *local_40;
  undefined8 uStack_38;
  
  if (1 < param_2) {
    return;
  }
  local_4c[0] = *param_1;
  if (7 < local_4c[0]) {
    local_4c[0] = 0xff;
  }
  lVar1 = FUN_02583354(DAT_055021a0,local_4c,1);
  if (lVar1 == 0) {
    return;
  }
  lVar5 = *(long *)(lVar1 + 0x18358);
  if (lVar5 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 0;
      plVar3 = *(long **)(lVar5 + 0x20);
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      uVar2 = uVar2 & 0xffffffff;
      if (*(long *)(lVar1 + 0x18358) == 0) goto LAB_0279f190;
      plVar3 = *(long **)(*(long *)(lVar1 + 0x18358) + 0x20);
    }
    if (plVar3 != (long *)0x0) {
      local_48 = *(undefined **)(lVar1 + 0x18338);
      local_40 = *(char **)(lVar1 + 0x18340);
      uStack_38 = 0x62ac;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
    }
  }
LAB_0279f190:
  local_48 = PTR_DAT_04bb2020 + 0x10;
  local_40 = "ChangeSymbol";
  FUN_0279e300(*(long *)(lVar1 + 0x18340) + *(long *)(lVar1 + 0x18338),param_1,&local_48,param_2);
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar1 + 0x18358) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar1 + 0x18358) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}

