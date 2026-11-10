
void FUN_00361360(long param_1)

{
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & 0xfffffff0;
  return;
}

