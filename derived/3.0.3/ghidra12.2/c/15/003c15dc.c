
void FUN_003c15dc(float param_1,long param_2)

{
  if (*(float *)(param_2 + 0x1fc) != param_1) {
    *(float *)(param_2 + 0x1fc) = param_1;
    *(ushort *)(param_2 + 0x1e8) = *(ushort *)(param_2 + 0x1e8) | 0x10;
  }
  return;
}

