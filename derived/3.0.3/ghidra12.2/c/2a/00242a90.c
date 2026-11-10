
void FUN_00242a90(long param_1,undefined2 param_2,undefined2 param_3)

{
  *(undefined2 *)(param_1 + 0x25a) = param_3;
  *(undefined2 *)(param_1 + 0x25c) = param_2;
  *(uint *)(param_1 + 0x260) = *(uint *)(param_1 + 0x260) | 2;
  return;
}

