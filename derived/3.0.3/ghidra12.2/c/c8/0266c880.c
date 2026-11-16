
long FUN_0266c880(uint param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  lVar2 = *(long *)PTR_DAT_04bb46b0;
  if (lVar2 != 0) {
    puVar3 = *(undefined8 **)(lVar2 + 0x10);
    if ((*(byte *)(lVar2 + 0x453) & 1) == 0) {
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
      lVar2 = lVar1 + 0x1df8 + (ulong)param_2 * 0x2488;
      if (5 < param_2) {
        lVar2 = lVar1 + 0x1df8;
      }
      return lVar2;
    }
  }
  return 0;
}

