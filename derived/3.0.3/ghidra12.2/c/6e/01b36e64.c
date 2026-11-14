
uint FUN_01b36e64(undefined8 param_1)

{
  uint uVar1;
  
  FUN_01b37020();
  FUN_01b37320(param_1);
  uVar1 = FUN_01b379d0(param_1);
  if ((uVar1 & 1) != 0) {
    FUN_01b37b30(param_1);
  }
  return uVar1 & 1;
}

