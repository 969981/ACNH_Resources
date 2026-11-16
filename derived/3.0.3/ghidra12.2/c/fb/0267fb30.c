
void FUN_0267fb30(byte *param_1,undefined4 param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
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
  lVar2 = FUN_02583354(DAT_055021a0,local_14,1);
  if (lVar2 == 0) {
    return;
  }
  lVar6 = lVar2 + 0x194b0;
  if (*(long *)(lVar2 + 0x194b8) == 0) {
    lVar6 = *(long *)(DAT_05574040 + 0x20);
  }
  plVar1 = (long *)(lVar6 + 0x8620);
  lVar2 = *(long *)(lVar6 + 0x8640);
  if (lVar2 == 0) {
    FUN_0285dd6c(*(long *)(lVar6 + 0x8628) + *plVar1,param_2);
    return;
  }
  if (*(undefined8 **)(lVar2 + 0x10) == (undefined8 *)0x0) {
    uVar3 = 0;
    plVar4 = *(long **)(lVar2 + 0x20);
  }
  else {
    uVar3 = (**(code **)**(undefined8 **)(lVar2 + 0x10))();
    uVar3 = uVar3 & 0xffffffff;
    if (*(long *)(lVar6 + 0x8640) == 0) goto LAB_0267fbf4;
    plVar4 = *(long **)(*(long *)(lVar6 + 0x8640) + 0x20);
  }
  if (plVar4 != (long *)0x0) {
    local_48 = *plVar1;
    local_40 = *(undefined8 *)(lVar6 + 0x8628);
    uStack_38 = 8;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
  }
LAB_0267fbf4:
  FUN_0285dd6c(*(long *)(lVar6 + 0x8628) + *plVar1,param_2);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar6 + 0x8640) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x8640) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

