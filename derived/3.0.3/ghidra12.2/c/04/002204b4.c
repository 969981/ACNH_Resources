
undefined8 FUN_002204b4(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_002212e4(param_1 + 0xb8);
  if (((uVar1 & 1) != 0) && (uVar1 = FUN_0022131c(param_1 + 0xb8), (uVar1 & 1) != 0)) {
    return 0;
  }
  uVar1 = FUN_002212e4(param_1 + 0x20);
  if (((uVar1 & 1) == 0) || (uVar1 = FUN_0022131c(param_1 + 0x20), (uVar1 & 1) == 0)) {
    return 1;
  }
  return 0;
}

