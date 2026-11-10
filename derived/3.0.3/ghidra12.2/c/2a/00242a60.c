
void FUN_00242a60(long param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x256) = param_2;
  *(undefined2 *)(param_1 + 600) = param_2;
  *(uint *)(param_1 + 0x260) = *(uint *)(param_1 + 0x260) | 1;
  return;
}

