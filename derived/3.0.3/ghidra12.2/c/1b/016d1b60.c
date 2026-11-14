
uint FUN_016d1b60(void)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (DAT_05574040 == 0) {
    return 0xffffffff;
  }
  puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar4 = (**(code **)(*(long *)*puVar5 + 0x38))();
    if (lVar4 == 0) {
      return 0xffffffff;
    }
    lVar4 = lVar4 + 0x70;
  }
  else {
    if (puVar5 == (undefined8 *)0x0) {
      return 0xffffffff;
    }
    if ((long *)puVar5[0x26] == (long *)0x0) {
      return 0xffffffff;
    }
    lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
    if (lVar4 == 0) {
      return 0xffffffff;
    }
  }
  if ((*(long **)(lVar4 + 0x2181c8) == (long *)0x0) ||
     (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x2181c8), puVar5 == (undefined8 *)0x0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = (**(code **)*puVar5)();
    uVar3 = uVar3 ^ 1;
  }
  bVar2 = *(byte *)(*(long *)(lVar4 + 0x2181b0) + *(long *)(lVar4 + 0x2181a8) + 0x179d0);
  uVar1 = 0xff;
  if (bVar2 < 8) {
    uVar1 = (uint)bVar2;
  }
  if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x2181c8) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x2181c8) + 8), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  if (7 < bVar2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

