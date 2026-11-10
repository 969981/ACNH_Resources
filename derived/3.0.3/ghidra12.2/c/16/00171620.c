
bool FUN_00171620(long param_1)

{
  bool bVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 0x9ab) >> 1 & 1) != 0) {
    return false;
  }
  if ((((*(long *)(param_1 + 0x150) == 0) && (*(long *)(param_1 + 0x108) == 0)) &&
      (*(long *)(param_1 + 0x120) == 0)) &&
     ((iVar2 = FUN_001734d8(param_1 + 0x38), iVar2 != 0 || (*(int *)(param_1 + 0x94c) < 1)))) {
    if (*(long *)(param_1 + 0x138) == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = *(ulong *)(param_1 + 0x8e8) < (ulong)*(uint *)(param_1 + 0x96c);
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

