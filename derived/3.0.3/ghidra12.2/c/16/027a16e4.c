
void FUN_027a16e4(byte *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  byte local_50 [4];
  byte local_4c [4];
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_4c[0] = *param_1;
  if (7 < local_4c[0]) {
    local_4c[0] = 0xff;
  }
  lVar2 = FUN_02583354(DAT_055021a0,local_4c,1);
  if (lVar2 == 0) {
    return;
  }
  plVar1 = (long *)(lVar2 + 0x18338);
  local_50[0] = *param_1;
  if (7 < local_50[0]) {
    local_50[0] = 0xff;
  }
  FUN_02582fe0(local_50);
  lVar6 = *(long *)(lVar2 + 0x18358);
  if (lVar6 == 0) {
    FUN_02793830(*(long *)(lVar2 + 0x18340) + *plVar1,param_1);
    return;
  }
  if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
    uVar3 = 0;
    plVar4 = *(long **)(lVar6 + 0x20);
  }
  else {
    uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
    uVar3 = uVar3 & 0xffffffff;
    if (*(long *)(lVar2 + 0x18358) == 0) goto LAB_027a17a4;
    plVar4 = *(long **)(*(long *)(lVar2 + 0x18358) + 0x20);
  }
  if (plVar4 != (long *)0x0) {
    local_48 = *plVar1;
    local_40 = *(undefined8 *)(lVar2 + 0x18340);
    uStack_38 = 0x62ac;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
  }
LAB_027a17a4:
  FUN_02793830(*(long *)(lVar2 + 0x18340) + *plVar1,param_1);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0x18358) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0x18358) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

