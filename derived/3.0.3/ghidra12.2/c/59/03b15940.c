
undefined8 * FUN_03b15940(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00367b14(0xf0,0x10);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00382afc(puVar1,param_1);
    *puVar1 = &DAT_04b75fc8;
  }
  return puVar1;
}

