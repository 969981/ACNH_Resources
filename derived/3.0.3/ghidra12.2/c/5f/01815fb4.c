
void FUN_01815fb4(long param_1)

{
  float local_1c [3];
  
  local_1c[1] = 0.0;
  local_1c[0] = (float)(int)((int)((float)(int)*(float *)(param_1 + 0x328) / 10.0) -
                            (uint)(*(float *)(param_1 + 0x328) < 0.0)) * 10.0 + 5.0;
  local_1c[2] = (float)(int)((int)((float)(int)*(float *)(param_1 + 0x330) / 10.0) -
                            (uint)(*(float *)(param_1 + 0x330) < 0.0)) * 10.0 + 5.0;
  FUN_01815e0c(param_1,*(undefined4 *)(param_1 + 0x280),local_1c);
  return;
}

