
void FUN_003bfe68(long param_1,int param_2)

{
  if (param_2 == 0x7f) {
    *(undefined4 *)(param_1 + 0xc) = 0x477fff00;
    return;
  }
  if (param_2 == 0x7e) {
    *(undefined4 *)(param_1 + 0xc) = 0x41c00000;
    return;
  }
  if (param_2 < 0x32) {
    *(float *)(param_1 + 0xc) = ((float)(int)(param_2 << 1 | 1) * 0.0078125) / 5.0;
    return;
  }
  *(float *)(param_1 + 0xc) = (60.0 / (float)(0x7e - param_2)) / 5.0;
  return;
}

