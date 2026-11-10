
void FUN_00365060(long param_1,undefined4 param_2)

{
  if (*(long *)(param_1 + 200) != 0) {
    FUN_003521e4(*(long *)(param_1 + 200),param_2);
  }
  if (*(long *)(param_1 + 0xd0) == 0) {
    return;
  }
  FUN_003521e4(*(long *)(param_1 + 0xd0),param_2);
  return;
}

