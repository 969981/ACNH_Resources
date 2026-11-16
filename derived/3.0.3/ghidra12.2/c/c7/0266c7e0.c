
long FUN_0266c7e0(uint param_1)

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
    if (param_1 < 8) {
      lVar1 = lVar2 + 0x119228 + (ulong)param_1 * 0xfa08;
      if (7 < param_1) {
        lVar1 = lVar2 + 0x119228;
      }
      return lVar1;
    }
  }
  return 0;
}

