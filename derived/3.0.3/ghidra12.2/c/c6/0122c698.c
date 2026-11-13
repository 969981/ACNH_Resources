
void FUN_0122c698(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (DAT_05574040 == 0) {
LAB_0122c700:
    lVar3 = 0;
  }
  else {
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar2 = (**(code **)(*(long *)*puVar6 + 0x38))();
      lVar3 = 0;
      if (lVar2 != 0) {
        lVar3 = lVar2 + 0x70;
      }
    }
    else {
      if (puVar6 == (undefined8 *)0x0) goto LAB_0122c700;
      lVar3 = 0;
      if ((long *)puVar6[0x26] != (long *)0x0) {
        lVar3 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      }
    }
  }
  plVar1 = (long *)(lVar3 + 0x1c24c8);
  lVar2 = *(long *)(lVar3 + 0x1c24e8);
  if (lVar2 == 0) {
    lVar3 = *(long *)(lVar3 + 0x1c24d0) + *plVar1;
    *(undefined8 *)(lVar3 + 0x914) = 0;
    *(undefined8 *)(lVar3 + 0x91c) = 0;
    *(undefined8 *)(lVar3 + 0x904) = 0;
    *(undefined8 *)(lVar3 + 0x90c) = 0;
    return;
  }
  if (*(undefined8 **)(lVar2 + 0x10) == (undefined8 *)0x0) {
    uVar4 = 0;
    plVar5 = *(long **)(lVar2 + 0x20);
  }
  else {
    uVar4 = (**(code **)**(undefined8 **)(lVar2 + 0x10))();
    uVar4 = uVar4 & 0xffffffff;
    if (*(long *)(lVar3 + 0x1c24e8) == 0) goto LAB_0122c760;
    plVar5 = *(long **)(*(long *)(lVar3 + 0x1c24e8) + 0x20);
  }
  if (plVar5 != (long *)0x0) {
    local_38 = *plVar1;
    local_30 = *(undefined8 *)(lVar3 + 0x1c24d0);
    uStack_28 = 0x928;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_38);
  }
LAB_0122c760:
  lVar2 = *(long *)(lVar3 + 0x1c24d0) + *plVar1;
  *(undefined8 *)(lVar2 + 0x914) = 0;
  *(undefined8 *)(lVar2 + 0x91c) = 0;
  *(undefined8 *)(lVar2 + 0x904) = 0;
  *(undefined8 *)(lVar2 + 0x90c) = 0;
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar3 + 0x1c24e8) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar3 + 0x1c24e8) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

