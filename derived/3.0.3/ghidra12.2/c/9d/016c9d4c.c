
long FUN_016c9d4c(int param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_05574040 == 0) {
LAB_016c9dc8:
    lVar1 = 0;
  }
  else {
    puVar2 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar1 = (**(code **)(*(long *)*puVar2 + 0x38))();
      if (lVar1 == 0) {
        return 0;
      }
      lVar1 = lVar1 + 0x70;
    }
    else {
      if (puVar2 == (undefined8 *)0x0) goto LAB_016c9dc8;
      if ((long *)puVar2[0x26] == (long *)0x0) {
        return 0;
      }
      lVar1 = (**(code **)(*(long *)puVar2[0x26] + 0x38))();
      if (lVar1 == 0) {
        return 0;
      }
    }
    lVar1 = lVar1 + (long)param_1 * 0x18b8 + 0x271cd8;
  }
  return lVar1;
}

