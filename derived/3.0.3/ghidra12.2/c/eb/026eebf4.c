
long FUN_026eebf4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if ((*(byte *)(param_1 + 0x453) & 1) == 0) {
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
                    /* WARNING: Could not recover jumptable at 0x026eec40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar2 = (**(code **)(*(long *)puVar3[0x26] + 0x38))();
      return lVar2;
    }
  }
  return lVar2;
}

