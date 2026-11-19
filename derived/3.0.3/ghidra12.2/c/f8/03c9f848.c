
void FUN_03c9f848(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_03c9f890(param_1 + 0x100);
  if (((uVar1 & 1) == 0) && (*(long *)(param_1 + 0x128) != 0)) {
    FUN_03c9f890(param_1 + 0x128,param_2);
    return;
  }
  return;
}

