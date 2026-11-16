
void FUN_02646774(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 == 0) {
    return;
  }
  lVar4 = *(long *)(lVar5 + 0x28);
  if (lVar4 == 0) {
    *(undefined8 *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8) + 0xb540) = *param_2;
    return;
  }
  if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) {
    uVar1 = 0;
    plVar2 = *(long **)(lVar4 + 0x20);
  }
  else {
    uVar1 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
    uVar1 = uVar1 & 0xffffffff;
    if (*(long *)(lVar5 + 0x28) == 0) goto LAB_026467e4;
    plVar2 = *(long **)(*(long *)(lVar5 + 0x28) + 0x20);
  }
  if (plVar2 != (long *)0x0) {
    local_48 = *(undefined8 *)(lVar5 + 8);
    uStack_40 = *(undefined8 *)(lVar5 + 0x10);
    local_38 = 0xb548;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_48);
  }
LAB_026467e4:
  *(undefined8 *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8) + 0xb540) = *param_2;
  if ((((uVar1 & 1) != 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
     (puVar3 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 0x18), puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)();
  }
  return;
}

