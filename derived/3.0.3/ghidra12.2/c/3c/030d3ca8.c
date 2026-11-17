
void FUN_030d3ca8(long param_1,long param_2)

{
  if ((((*(int *)(param_2 + 0xc) != 0) && (*(int *)(param_2 + 0xc) != 0)) &&
      (*(int *)(param_2 + 0xc) == 0x1b)) && ((*(byte *)(param_2 + 8) & 1) == 0)) {
    *(int *)(*(long *)(param_1 + 8) + 0xe0c) = *(int *)(*(long *)(param_1 + 8) + 0xe0c) + 1;
  }
  return;
}

