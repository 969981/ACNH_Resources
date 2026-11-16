
void FUN_0273c5fc(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar1 = FUN_0266c580();
  if (lVar1 == 0) {
    return;
  }
  lVar5 = *(long *)(lVar1 + 0x28);
  if (lVar5 == 0) {
    FUN_0273c700(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x20,param_2,param_3);
    return;
  }
  if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
    uVar2 = 0;
    plVar3 = *(long **)(lVar5 + 0x20);
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
    uVar2 = uVar2 & 0xffffffff;
    if (*(long *)(lVar1 + 0x28) == 0) goto LAB_0273c678;
    plVar3 = *(long **)(*(long *)(lVar1 + 0x28) + 0x20);
  }
  if (plVar3 != (long *)0x0) {
    local_48 = *(undefined8 *)(lVar1 + 8);
    uStack_40 = *(undefined8 *)(lVar1 + 0x10);
    local_38 = 0x28a28;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
  }
LAB_0273c678:
  FUN_0273c700(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x20,param_2,param_3);
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}

