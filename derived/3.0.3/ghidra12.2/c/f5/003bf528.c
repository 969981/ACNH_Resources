
void FUN_003bf528(long param_1,int param_2)

{
  param_2 = *(int *)(param_1 + 0x140) + param_2;
  if (*(int *)(param_1 + 0x144) <= param_2) {
    param_2 = *(int *)(param_1 + 0x144);
  }
  *(int *)(param_1 + 0x140) = param_2;
  return;
}

