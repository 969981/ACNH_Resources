
undefined8 *
FUN_032d29d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00367b30(0x68);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_00367b6c(puVar1);
    puVar1[0xc] = 0;
    *puVar1 = &DAT_04b1b7c0;
    puVar1[0xc] = *(undefined8 *)(param_1 + 0x60);
    FUN_032d2bc0(puVar1,param_2,param_3,param_4,param_5,param_6);
  }
  return puVar1;
}

