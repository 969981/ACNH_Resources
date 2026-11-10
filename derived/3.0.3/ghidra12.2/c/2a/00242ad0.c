
void FUN_00242ad0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(uint *)(param_1 + 0x260) = *(uint *)(param_1 + 0x260) | 0x10;
  return;
}

