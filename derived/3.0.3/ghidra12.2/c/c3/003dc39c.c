
void FUN_003dc39c(long *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x18))();
  if ((uVar1 & 1) == 0) {
    return;
  }
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  nn::fs::CloseFile(param_1[1]);
  return;
}

