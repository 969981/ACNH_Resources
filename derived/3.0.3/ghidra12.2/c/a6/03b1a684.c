
undefined8 * FUN_03b1a684(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00367b14(0x130,0x10);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_003986b0(puVar1,0,*(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48),param_1,param_2,param_3)
    ;
    *puVar1 = &DAT_04b75cf8;
  }
  return puVar1;
}

