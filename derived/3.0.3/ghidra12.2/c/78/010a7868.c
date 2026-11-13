
void FUN_010a7868(long param_1,long param_2)

{
  if (((*(int *)(param_2 + 0xc) != 0) && (*(int *)(param_2 + 0xc) == 0x1b)) &&
     ((*(byte *)(param_2 + 8) & 1) == 0)) {
    **(int **)(param_1 + 8) = **(int **)(param_1 + 8) + 1;
  }
  return;
}

