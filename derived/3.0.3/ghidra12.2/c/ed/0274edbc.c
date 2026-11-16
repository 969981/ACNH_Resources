
void FUN_0274edbc(undefined4 *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (*(long *)PTR_DAT_04bb46b0 == 0) {
    return;
  }
  lVar2 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,*param_1);
  if (lVar2 == 0) {
    return;
  }
  plVar1 = (long *)(lVar2 + 0x18300);
  lVar6 = *(long *)(lVar2 + 0x18320);
  if (lVar6 == 0) {
    FUN_0274ea40(*(long *)(lVar2 + 0x18308) + *plVar1);
    return;
  }
  if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
    uVar3 = 0;
    plVar4 = *(long **)(lVar6 + 0x20);
  }
  else {
    uVar3 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
    uVar3 = uVar3 & 0xffffffff;
    if (*(long *)(lVar2 + 0x18320) == 0) goto LAB_0274ee48;
    plVar4 = *(long **)(*(long *)(lVar2 + 0x18320) + 0x20);
  }
  if (plVar4 != (long *)0x0) {
    local_38 = *plVar1;
    local_30 = *(undefined8 *)(lVar2 + 0x18308);
    uStack_28 = 0x1000;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
  }
LAB_0274ee48:
  FUN_0274ea40(*(long *)(lVar2 + 0x18308) + *plVar1);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0x18320) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0x18320) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

