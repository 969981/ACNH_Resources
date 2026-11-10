
void FUN_00332e5c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x10))();
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  return;
}

