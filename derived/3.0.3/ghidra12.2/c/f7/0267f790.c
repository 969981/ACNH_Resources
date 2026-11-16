
void FUN_0267f790(byte *param_1,undefined1 param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  byte local_14 [4];
  
  local_14[0] = *param_1;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  lVar3 = FUN_02583354(DAT_055021a0,local_14,1);
  if (lVar3 == 0) {
    return;
  }
  lVar6 = lVar3 + 0x194b0;
  if (*(long *)(lVar3 + 0x194b8) == 0) {
    lVar6 = *(long *)(DAT_05574040 + 0x20);
  }
  plVar1 = (long *)(lVar6 + 0x85b0);
  lVar3 = *(long *)(lVar6 + 0x85d0);
  if (lVar3 == 0) {
    *(undefined1 *)(*(long *)(lVar6 + 0x85b8) + *plVar1) = param_2;
    return;
  }
  if (*(undefined8 **)(lVar3 + 0x10) == (undefined8 *)0x0) {
    uVar2 = 1;
    plVar4 = *(long **)(lVar3 + 0x20);
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(lVar3 + 0x10))();
    uVar2 = uVar2 ^ 1;
    if (*(long *)(lVar6 + 0x85d0) == 0) goto LAB_0267f854;
    plVar4 = *(long **)(*(long *)(lVar6 + 0x85d0) + 0x20);
  }
  if (plVar4 != (long *)0x0) {
    local_48 = *plVar1;
    local_40 = *(undefined8 *)(lVar6 + 0x85b8);
    uStack_38 = 1;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
  }
LAB_0267f854:
  *(undefined1 *)(*(long *)(lVar6 + 0x85b8) + *plVar1) = param_2;
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar6 + 0x85d0) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x85d0) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

