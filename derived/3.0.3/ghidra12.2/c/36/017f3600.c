
uint FUN_017f3600(void)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  uVar3 = FUN_017e4f94();
  if (DAT_05574040 != 0) {
    puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar5 + 0x38))();
      if (lVar4 == 0) {
        return 0;
      }
      lVar4 = lVar4 + 0x70;
    }
    else {
      if (puVar5 == (undefined8 *)0x0) {
        return 0;
      }
      if ((long *)puVar5[0x26] == (long *)0x0) {
        return 0;
      }
      lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
      if (lVar4 == 0) {
        return 0;
      }
    }
    if (uVar3 < 10) {
      lVar1 = lVar4 + 0x1962d8 + (ulong)uVar3 * 0x10d8;
      if (9 < uVar3) {
        lVar1 = lVar4 + 0x1962d8;
      }
      if ((*(long **)(lVar1 + 0x28) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar1 + 0x28), puVar5 == (undefined8 *)0x0)) {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)*puVar5)();
        uVar3 = uVar3 ^ 1;
      }
      uVar2 = *(uint *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8));
      if (2 < uVar2) {
        uVar2 = 0;
      }
      if ((uVar3 & 1) != 0) {
        return uVar2;
      }
      if (*(long *)(lVar1 + 0x28) == 0) {
        return uVar2;
      }
      puVar5 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8);
      if (puVar5 == (undefined8 *)0x0) {
        return uVar2;
      }
      (**(code **)*puVar5)();
      return uVar2;
    }
  }
  return 0;
}

