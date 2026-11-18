
undefined8 * FUN_03344778(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = &PTR_LAB_04b1f828;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    param_2[1] = *(undefined8 *)(param_1 + 8);
    param_2[2] = uVar1;
  }
  return param_2;
}

