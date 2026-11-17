
void FUN_030fd1b4(long param_1,long param_2)

{
  if ((((*(int *)(param_2 + 0xc) != 0) && (*(int *)(param_2 + 0xc) != 0)) &&
      (*(int *)(param_2 + 0xc) == 0x1b)) && ((*(byte *)(param_2 + 8) & 1) == 0)) {
    *(int *)(*(long *)(param_1 + 8) + 0x1bc4) = *(int *)(*(long *)(param_1 + 8) + 0x1bc4) + 1;
  }
  return;
}

