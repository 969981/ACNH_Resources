
void FUN_002aa954(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x38) != param_2) {
    *(int *)(param_1 + 0x38) = param_2;
  }
  return;
}

