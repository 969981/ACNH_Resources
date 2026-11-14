
void FUN_016c2bf8(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  void *__s;
  long local_48;
  long lStack_40;
  undefined8 local_38;
  
  iVar2 = FUN_0252d29c();
  if (DAT_05574040 == 0) {
    return;
  }
  puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar3 = (**(code **)(*(long *)*puVar6 + 0x38))();
    if (lVar3 == 0) {
      return;
    }
    lVar3 = lVar3 + (long)iVar2 * 0xcb0;
    lVar1 = lVar3 + 0x211c90;
    lVar3 = *(long *)(lVar3 + 0x211cb8);
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar6[0x26] == (long *)0x0) {
      return;
    }
    lVar3 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
    if (lVar3 == 0) {
      return;
    }
    lVar3 = lVar3 + (long)iVar2 * 0xcb0;
    lVar1 = lVar3 + 0x211c20;
    lVar3 = *(long *)(lVar3 + 0x211c48);
  }
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar3 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar3 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar3 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar1 + 0x28) == 0) goto LAB_016c2cf0;
      plVar5 = *(long **)(*(long *)(lVar1 + 0x28) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_48 = *(long *)(lVar1 + 8);
      lStack_40 = *(long *)(lVar1 + 0x10);
      local_38 = 0x1594;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
  }
LAB_016c2cf0:
  __s = (void *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8));
  if ((*(byte *)((long)__s + 0x1590) & 1) != 0) {
    if ((*(long *)(lVar1 + 0x28) != 0) &&
       (plVar5 = *(long **)(*(long *)(lVar1 + 0x28) + 0x20), plVar5 != (long *)0x0)) {
      local_38 = 0x1594;
      local_48 = *(long *)(lVar1 + 8);
      lStack_40 = *(long *)(lVar1 + 0x10);
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
      __s = (void *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8));
    }
    memset(__s,0,0x1594);
    *(undefined2 *)((long)__s + 2) = 0xffff;
    FUN_028f8bb0((long)__s + 4);
    *(undefined4 *)((long)__s + 0x1560) = 0;
    *(undefined8 *)((long)__s + 0x1568) = 0;
    *(undefined1 *)((long)__s + 0x1564) = 0;
    *(undefined8 *)((long)__s + 0x1570) = 0;
    *(undefined8 *)((long)__s + 0x1578) = 0;
    *(undefined8 *)((long)__s + 0x157e) = 0;
    *(undefined4 *)((long)__s + 0x1586) = 0x101;
    *(undefined1 *)((long)__s + 0x158a) = 0;
    *(undefined4 *)((long)__s + 0x158c) = 0;
    *(undefined1 *)((long)__s + 0x1590) = 0;
  }
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

