
void FUN_002860b8(long param_1,long *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(long **)(param_1 + 8) = param_2;
  *param_2 = param_1;
  param_2[1] = (long)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
  }
  return;
}

