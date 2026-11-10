
undefined8 * FUN_001887dc(long param_1,long param_2)

{
  undefined8 *puVar1;
  
  if (*(code **)(param_1 + 0x20) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001887e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar1 = (undefined8 *)(**(code **)(param_1 + 0x20))(param_2);
    return puVar1;
  }
  if (DAT_04c57ea0 == (code *)0x0) {
    puVar1 = malloc((param_2 + 7U & 0xfffffffffffffff8) + 0x10);
    *puVar1 = DAT_04c57ea8;
    return puVar1 + 2;
  }
  puVar1 = (undefined8 *)(*DAT_04c57ea0)();
  *puVar1 = DAT_04c57ea8;
  return puVar1 + 2;
}

