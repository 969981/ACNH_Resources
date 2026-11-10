
void FUN_003650e4(long param_1,undefined4 param_2)

{
  if (*(long *)(param_1 + 200) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 200) + 0x30) = param_2;
  }
  if (*(long *)(param_1 + 0xd0) != 0) {
    *(undefined4 *)(*(long *)(param_1 + 0xd0) + 0x30) = param_2;
  }
  return;
}

