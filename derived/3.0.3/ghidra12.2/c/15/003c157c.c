
void FUN_003c157c(float param_1,long param_2)

{
  if (*(float *)(param_2 + 0x1f0) != param_1) {
    *(float *)(param_2 + 0x1f0) = param_1;
    *(ushort *)(param_2 + 0x1e8) = *(ushort *)(param_2 + 0x1e8) | 4;
  }
  return;
}

