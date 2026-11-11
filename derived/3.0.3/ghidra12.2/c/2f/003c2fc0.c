
void FUN_003c2fc0(long param_1,byte param_2,undefined2 param_3)

{
  *(byte *)(param_1 + 0x70) = param_2;
  if ((param_2 & 1) != 0) {
    *(undefined2 *)(param_1 + 0x7c) = param_3;
  }
  return;
}

