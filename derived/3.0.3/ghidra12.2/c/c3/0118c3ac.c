
void FUN_0118c3ac(long param_1,long param_2)

{
  int iVar1;
  
  if (((**(int **)(param_1 + 8) == 0x7e3d1e46) &&
      (iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 8),
      *(int *)(param_2 + 0x18) <= iVar1 && iVar1 <= *(int *)(param_2 + 0x28))) &&
     (iVar1 = *(int *)(*(long *)(param_1 + 0x10) + 0xc),
     *(int *)(param_2 + 0x1c) <= iVar1 && iVar1 <= *(int *)(param_2 + 0x2c))) {
    **(int **)(param_1 + 8) = *(int *)(param_2 + 4);
  }
  return;
}

