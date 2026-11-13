
void FUN_013b711c(long param_1,int param_2)

{
  ulong uVar1;
  char local_28 [4];
  undefined1 auStack_24 [4];
  
  local_28[0] = '\0';
  FUN_013b7618(param_1,auStack_24,local_28);
  if (local_28[0] != '\0') {
    uVar1 = FUN_013b77f4(param_1);
    if ((uVar1 & 1) == 0) {
      return;
    }
    FUN_013b795c(param_1);
  }
  if (*(int *)(param_1 + 0x280) == param_2) {
    return;
  }
  FUN_03ebb160(param_1 + 0x278,param_2);
  return;
}

