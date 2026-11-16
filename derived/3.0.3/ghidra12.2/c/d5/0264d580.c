
long FUN_0264d580(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (DAT_05574040 == 0) {
    return 0;
  }
  puVar3 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar1 = (**(code **)(*(long *)*puVar3 + 0x38))();
    lVar2 = 0;
    if (lVar1 != 0) {
      lVar2 = lVar1 + 0x70;
    }
  }
  else {
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    lVar2 = 0;
    if ((long *)puVar3[0x26] != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0264d5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar2 = (**(code **)(*(long *)puVar3[0x26] + 0x38))();
      return lVar2;
    }
  }
  return lVar2;
}

