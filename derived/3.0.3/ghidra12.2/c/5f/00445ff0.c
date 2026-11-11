
undefined8 * FUN_00445ff0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00438810(0x30);
  puVar1[4] = param_2;
  puVar1[5] = 0;
  *puVar1 = &PTR_LAB_04861340;
  puVar1[1] = 0xffffffff;
  puVar1[2] = 1;
  puVar1[3] = param_1;
  FUN_004437e0(puVar1,0);
  return puVar1;
}

