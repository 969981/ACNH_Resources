
void FUN_01e28ff8(long param_1)

{
  ulong uVar1;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 0x41c) - 1U < 2) {
    uVar1 = FUN_01e339e8(param_1);
    if ((uVar1 & 1) == 0) {
      FUN_01e346b0(param_1);
      return;
    }
    local_4 = 2;
    FUN_01e33da0(param_1,&local_4);
  }
  else if (*(int *)(param_1 + 0x41c) == 0) {
    FUN_01e30a70(param_1,0);
    return;
  }
  return;
}

