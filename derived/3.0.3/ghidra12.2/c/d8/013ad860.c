
void FUN_013ad860(long param_1)

{
  *(undefined4 *)(param_1 + 0x43c) = 0;
  *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(param_1 + 0x3f4);
  *(undefined4 *)(param_1 + 0x40c) = *(undefined4 *)(param_1 + 0x3f4);
  *(float *)(param_1 + 0x3fc) = *(float *)(param_1 + 0x3f0);
  *(undefined4 *)(param_1 + 0x404) = *(undefined4 *)(param_1 + 0x3f8);
  *(undefined4 *)(param_1 + 0x410) = *(undefined4 *)(param_1 + 0x3f8);
  *(float *)(param_1 + 0x408) = *(float *)(param_1 + 0x3f0) + 5.0;
  *(byte *)(param_1 + 0x300) = *(byte *)(param_1 + 0x300) & 0xdf;
  return;
}

