
bool FUN_002cb110(long param_1,long *param_2)

{
  if (*(int *)(param_1 + 0x9c) == -1) {
    return *(uint *)(param_1 + 0xa4) < *(uint *)(param_1 + 0xa8);
  }
  return *(long *)(param_1 + 0xb0) < *param_2 - *(long *)(param_1 + 0x88);
}

