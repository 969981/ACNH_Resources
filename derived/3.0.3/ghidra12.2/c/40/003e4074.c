
undefined8 FUN_003e4074(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0xf0) == '\0') {
    return 0;
  }
  uVar1 = FUN_003d7124(param_1 + 0x300,param_2 & 1);
  return uVar1;
}

