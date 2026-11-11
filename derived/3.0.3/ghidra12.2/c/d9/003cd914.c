
undefined8 FUN_003cd914(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_04c64492 != '\0') {
    uVar1 = FUN_03b38a74();
    uVar1 = FUN_003b5660(uVar1,param_1,param_2);
    return uVar1;
  }
  if (DAT_04c64493 == '\0') {
    DAT_04c64493 = 1;
    return 0;
  }
  return 0;
}

