
bool FUN_022ee050(long param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x3c) != '\0') {
    return *(int *)(param_1 + 8) == 1;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    return iVar1 != 0 && (iVar1 == 5 || iVar1 == 0xf);
  }
  return false;
}

