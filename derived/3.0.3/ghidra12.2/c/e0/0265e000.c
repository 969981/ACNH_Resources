
long FUN_0265e000(uint param_1,uint param_2,uint param_3)

{
  long lVar1;
  undefined8 *puVar2;
  
  if ((param_3 & 1) == 0) {
    if (9 < param_1) {
      return 0;
    }
    if (0x9f < param_2) {
      return 0;
    }
    if (DAT_05574040 != 0) {
      puVar2 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar1 = (**(code **)(*(long *)*puVar2 + 0x38))();
        if (lVar1 == 0) {
          return 0;
        }
        lVar1 = lVar1 + 0x70;
      }
      else {
        if (puVar2 == (undefined8 *)0x0) {
          return 0;
        }
        if ((long *)puVar2[0x26] == (long *)0x0) {
          return 0;
        }
        lVar1 = (**(code **)(*(long *)puVar2[0x26] + 0x38))();
        if (lVar1 == 0) {
          return 0;
        }
      }
      return lVar1 + (ulong)param_1 * 0x10798 + (ulong)param_2 * 0xa8 + 0x39f8;
    }
  }
  else {
    if (9 < param_1) {
      return 0;
    }
    if (7 < param_2) {
      return 0;
    }
    if (DAT_05574040 != 0) {
      puVar2 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar1 = (**(code **)(*(long *)*puVar2 + 0x38))();
        if (lVar1 == 0) {
          return 0;
        }
        lVar1 = lVar1 + 0x70;
      }
      else {
        if (puVar2 == (undefined8 *)0x0) {
          return 0;
        }
        if ((long *)puVar2[0x26] == (long *)0x0) {
          return 0;
        }
        lVar1 = (**(code **)(*(long *)puVar2[0x26] + 0x38))();
        if (lVar1 == 0) {
          return 0;
        }
      }
      return lVar1 + (ulong)param_1 * 0x10798 + (ulong)param_2 * 0x700 + 0x1c0;
    }
  }
  return 0;
}

