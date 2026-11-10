
void FUN_00242ae4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(uint *)(param_1 + 0x260) = *(uint *)(param_1 + 0x260) | 0x20;
  return;
}

