
undefined8 FUN_02658d10(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (DAT_05574040 != 0) {
    puVar3 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar2 = (**(code **)(*(long *)*puVar3 + 0x38))();
      if (lVar2 == 0) {
        return 0;
      }
      lVar2 = lVar2 + 0x70;
    }
    else {
      if (puVar3 == (undefined8 *)0x0) {
        return 0;
      }
      if ((long *)puVar3[0x26] == (long *)0x0) {
        return 0;
      }
      lVar2 = (**(code **)(*(long *)puVar3[0x26] + 0x38))();
      if (lVar2 == 0) {
        return 0;
      }
    }
    if ((*(long **)(FUN_002051f0 + lVar2) == (long *)0x0) ||
       (puVar3 = (undefined8 *)**(long **)(FUN_002051f0 + lVar2), puVar3 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar3)();
      uVar1 = uVar1 ^ 1;
    }
    lVar4 = *(long *)(*(long *)(FUN_002051d8 + lVar2) + *(long *)(lVar2 + 0x2051d0));
    if ((((uVar1 & 1) == 0) && (*(long *)(FUN_002051f0 + lVar2) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(FUN_002051f0 + lVar2) + 8), puVar3 != (undefined8 *)0x0)
       ) {
      (**(code **)*puVar3)();
    }
    if (lVar4 != 0) {
      return 1;
    }
  }
  return 0;
}

