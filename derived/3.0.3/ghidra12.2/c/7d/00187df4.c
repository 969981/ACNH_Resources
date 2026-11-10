
undefined8 * FUN_00187df4(long param_1)

{
  undefined8 *puVar1;
  
  if (DAT_04c57ea0 == (code *)0x0) {
    puVar1 = malloc((param_1 + 7U & 0xfffffffffffffff8) + 0x10);
    *puVar1 = DAT_04c57ea8;
    return puVar1 + 2;
  }
  puVar1 = (undefined8 *)(*DAT_04c57ea0)();
  *puVar1 = DAT_04c57ea8;
  return puVar1 + 2;
}

