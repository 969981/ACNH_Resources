
void FUN_020f0c4c(byte *param_1)

{
  void *__s;
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (DAT_05574040 == 0) {
    return;
  }
  puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar1 = (**(code **)(*(long *)*puVar4 + 0x38))();
    if (lVar1 == 0) {
      return;
    }
    lVar1 = lVar1 + 0x70;
  }
  else {
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar4[0x26] == (long *)0x0) {
      return;
    }
    lVar1 = (**(code **)(*(long *)puVar4[0x26] + 0x38))();
    if (lVar1 == 0) {
      return;
    }
  }
  lVar5 = *(long *)(lVar1 + 0xd0);
  if (lVar5 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 0;
      plVar3 = *(long **)(lVar5 + 0x20);
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      uVar2 = uVar2 & 0xffffffff;
      if (*(long *)(lVar1 + 0xd0) == 0) goto LAB_020f0d28;
      plVar3 = *(long **)(*(long *)(lVar1 + 0xd0) + 0x20);
    }
    if (plVar3 != (long *)0x0) {
      local_48 = *(undefined8 *)(lVar1 + 0xb0);
      uStack_40 = *(undefined8 *)(lVar1 + 0xb8);
      local_38 = 0x1e3388;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
    }
  }
LAB_020f0d28:
  if ((ulong)*param_1 < 10) {
    __s = (void *)(*(long *)(lVar1 + 0xb8) + *(long *)(lVar1 + 0xb0) + (ulong)*param_1 * 0x13230 +
                  0x10bf30);
    memset(__s,0,0x13230);
    FUN_0268abb0(__s);
  }
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar1 + 0xd0) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar1 + 0xd0) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}

