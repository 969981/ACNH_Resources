
bool FUN_00284080(long param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((param_2 == 0) || (uVar1 = *(uint *)(param_1 + 0x5f4), uVar1 == 0)) {
    return false;
  }
  if (**(int **)(param_1 + 0x10) == param_2) {
    return true;
  }
  uVar2 = 1;
  do {
    uVar3 = uVar2;
    if (uVar1 == uVar3) break;
    uVar2 = uVar3 + 1;
  } while ((*(int **)(param_1 + 0x10))[uVar3] != param_2);
  return uVar3 < uVar1;
}

