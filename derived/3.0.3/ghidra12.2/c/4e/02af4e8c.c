
uint FUN_02af4e8c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x174) == 2) {
    return 1;
  }
  local_14 = 0;
  uVar2 = FUN_02b673a0(&local_14,*(undefined4 *)(param_1 + 0x280));
  uVar1 = 0;
  if ((uVar2 & 1) != 0) {
    uVar1 = FUN_02b5a0b0(local_14);
  }
  return uVar1 & 1;
}

