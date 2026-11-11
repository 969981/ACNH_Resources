
void FUN_003984cc(float param_1,long param_2)

{
  if (*(float *)(param_2 + 0x150) != param_1) {
    *(float *)(param_2 + 0x150) = param_1;
    *(byte *)(param_2 + 0x158) = *(byte *)(param_2 + 0x158) | 1;
  }
  return;
}

