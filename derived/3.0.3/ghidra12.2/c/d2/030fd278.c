
void FUN_030fd278(long param_1,long param_2)

{
  if ((((*(int *)(param_2 + 0xc) != 0) && (*(int *)(param_2 + 0xc) != 0)) &&
      (*(int *)(param_2 + 0xc) == 0x1a)) && ((*(byte *)(param_2 + 8) & 1) == 0)) {
    *(int *)(*(long *)(param_1 + 8) + 0x1bc8) = *(int *)(*(long *)(param_1 + 8) + 0x1bc8) + 1;
  }
  return;
}

