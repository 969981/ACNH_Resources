
undefined4 FUN_01e3792c(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x48) < 1) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x44) + -1;
  iVar1 = 0;
  if (*(int *)(param_1 + 0x40) <= iVar2) {
    iVar1 = *(int *)(param_1 + 0x40);
  }
  puVar3 = (undefined4 *)(*(long *)(param_1 + 0x38) + (long)(iVar2 - iVar1) * 0x14);
  if (*(char *)(puVar3 + 4) == '\0') {
    return *puVar3;
  }
  return 0;
}

