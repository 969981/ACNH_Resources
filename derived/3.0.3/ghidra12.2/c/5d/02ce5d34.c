
int FUN_02ce5d34(long param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(**(code **)(*(long *)(param_1 + 0x3b8a8) + 0x18))();
  iVar1 = *piVar2;
  if (*(int *)(param_1 + 0x762b8) != -1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

