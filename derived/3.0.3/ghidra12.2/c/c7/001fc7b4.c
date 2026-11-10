
uint FUN_001fc7b4(undefined8 param_1)

{
  uint uVar1;
  
  uVar1 = FUN_001fc7f0();
  if ((uVar1 & 1) == 0) {
    FUN_001fc600(param_1);
  }
  return uVar1 & 1;
}

