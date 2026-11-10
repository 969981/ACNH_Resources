
void FUN_00223acc(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00223730(param_1 + 0x170,*(int *)(param_1 + 0x184) + param_2);
  if ((uVar1 & 1) == 0) {
    return;
  }
  FUN_00223704(param_1 + 0x170,*(int *)(param_1 + 0x184) + param_2);
  return;
}

