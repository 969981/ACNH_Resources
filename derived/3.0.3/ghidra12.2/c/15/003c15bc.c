
void FUN_003c15bc(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1f8) != param_2) {
    *(int *)(param_1 + 0x1f8) = param_2;
    *(ushort *)(param_1 + 0x1e8) = *(ushort *)(param_1 + 0x1e8) | 8;
  }
  return;
}

