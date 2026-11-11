
void FUN_003c16d0(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x208) != param_2) {
    *(int *)(param_1 + 0x208) = param_2;
    *(ushort *)(param_1 + 0x1e8) = *(ushort *)(param_1 + 0x1e8) | 8;
  }
  return;
}

