
undefined1 * FUN_01367460(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (DAT_05574040 == 0) {
    lVar2 = 0;
  }
  else {
    puVar3 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar1 = (**(code **)(*(long *)*puVar3 + 0x38))();
      lVar2 = 0;
      if (lVar1 != 0) {
        lVar2 = lVar1 + 0x70;
      }
    }
    else if (puVar3 == (undefined8 *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
      if ((long *)puVar3[0x26] != (long *)0x0) {
        lVar2 = (**(code **)(*(long *)puVar3[0x26] + 0x38))();
      }
    }
  }
  return &LAB_00116c50 + lVar2;
}

