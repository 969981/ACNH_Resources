
void FUN_002a84ec(long *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x80))();
  if ((uVar1 & 1) == 0) {
    FUN_002a8280(param_1);
    return;
  }
  return;
}

