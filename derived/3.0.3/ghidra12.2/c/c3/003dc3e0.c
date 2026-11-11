
void FUN_003dc3e0(long *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x18))();
  if ((uVar1 & 1) == 0) {
    return;
  }
  nn::fs::FlushFile(param_1[1]);
  return;
}

