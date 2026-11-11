
undefined8 FUN_003e1660(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0xf0) == '\0') {
    return 0;
  }
  FUN_003ca198();
  FUN_003ca5c4();
  uVar1 = FUN_003d3718(param_1 + 0x240,param_2 & 1);
  FUN_003ca198();
  FUN_003ca5cc();
  return uVar1;
}

