
undefined8 * FUN_0332d3fc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = &PTR_LAB_04b1f078;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    param_2[1] = *(undefined8 *)(param_1 + 8);
    param_2[2] = uVar1;
  }
  return param_2;
}

