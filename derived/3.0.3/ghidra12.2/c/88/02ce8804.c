
int FUN_02ce8804(long param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(**(code **)(*(long *)(param_1 + 0x3a9b0) + 0x18))();
  iVar1 = *piVar2;
  if (*(int *)(param_1 + 0x753c0) != -1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

