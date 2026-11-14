
void FUN_017fd450(void)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar3 = FUN_01810f30();
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  lVar4 = FUN_026f480c();
  if (lVar4 == 0) {
    return;
  }
  plVar1 = (long *)(lVar4 + 0x103b0);
  lVar7 = *(long *)(lVar4 + 0x103d0);
  if (lVar7 == 0) {
    lVar4 = *(long *)(lVar4 + 0x103b8) + *plVar1;
    *(undefined2 *)(lVar4 + 0x1c) = 0;
    *(undefined4 *)(lVar4 + 0x18) = 0;
    return;
  }
  if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
    lVar7 = *(long *)(lVar4 + 0x103d0);
    uVar2 = uVar2 ^ 1;
    if (lVar7 == 0) goto LAB_017fd4f8;
  }
  plVar5 = *(long **)(lVar7 + 0x20);
  if (plVar5 != (long *)0x0) {
    local_38 = *plVar1;
    local_30 = *(undefined8 *)(lVar4 + 0x103b8);
    uStack_28 = 0x20;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_38);
  }
LAB_017fd4f8:
  lVar7 = *(long *)(lVar4 + 0x103b8) + *plVar1;
  *(undefined2 *)(lVar7 + 0x1c) = 0;
  *(undefined4 *)(lVar7 + 0x18) = 0;
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0x103d0) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar4 + 0x103d0) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

