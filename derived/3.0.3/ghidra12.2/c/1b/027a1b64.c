
void FUN_027a1b64(byte *param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  byte local_4c [4];
  undefined *local_48;
  char *local_40;
  undefined8 uStack_38;
  
  local_4c[0] = *param_1;
  if (7 < local_4c[0]) {
    local_4c[0] = 0xff;
  }
  lVar2 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_4c,1);
  if (lVar2 == 0) {
    return;
  }
  plVar1 = (long *)(lVar2 + 0x18338);
  lVar6 = *(long *)(lVar2 + 0x18358);
  if (lVar6 == 0) {
    FUN_0285dd6c(*(long *)(lVar2 + 0x18340) + *plVar1 + 0x5498,param_2);
    goto LAB_027a1c60;
  }
  if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
    uVar3 = 0;
    plVar4 = *(long **)(lVar6 + 0x20);
joined_r0x027a1ca4:
    if (plVar4 != (long *)0x0) {
      local_48 = (undefined *)*plVar1;
      local_40 = *(char **)(lVar2 + 0x18340);
      uStack_38 = 0x62ac;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
    }
  }
  else {
    uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
    uVar3 = uVar3 & 0xffffffff;
    if (*(long *)(lVar2 + 0x18358) != 0) {
      plVar4 = *(long **)(*(long *)(lVar2 + 0x18358) + 0x20);
      goto joined_r0x027a1ca4;
    }
  }
  FUN_0285dd6c(*(long *)(lVar2 + 0x18340) + *plVar1 + 0x5498,param_2);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0x18358) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0x18358) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
LAB_027a1c60:
  local_48 = PTR_DAT_04bb2020 + 0x10;
  local_40 = "PayPoint";
  FUN_0279b044(param_1,&local_48,param_2);
  return;
}

