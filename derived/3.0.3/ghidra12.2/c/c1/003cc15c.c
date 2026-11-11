
undefined4 FUN_003cc15c(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 200);
  if (*(undefined8 **)(param_1 + 0xd0) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0xd0);
  }
  *puVar1 = param_2;
  *(undefined8 **)(param_1 + 0xd0) = param_2;
  *param_2 = 0;
  return *(undefined4 *)(param_1 + 0xdc);
}

