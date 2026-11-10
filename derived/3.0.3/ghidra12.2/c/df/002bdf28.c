
void FUN_002bdf28(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x238) = param_2;
  *(uint *)(param_1 + 0x638) = *(uint *)(param_1 + 0x638) | 0x200;
  return;
}

