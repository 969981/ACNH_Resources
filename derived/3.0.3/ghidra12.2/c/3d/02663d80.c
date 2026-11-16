
long FUN_02663d80(uint param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
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
    if (param_1 < 10) {
      lVar1 = lVar2 + 0x1962d8 + (ulong)param_1 * 0x10d8;
      if (9 < param_1) {
        lVar1 = lVar2 + 0x1962d8;
      }
      return lVar1;
    }
  }
  return 0;
}

