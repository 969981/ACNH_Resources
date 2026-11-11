
void FUN_003c046c(undefined4 param_1,long param_2)

{
  if (*(long *)(param_2 + 0x10) != 0) {
    *(undefined4 *)(*(long *)(param_2 + 0x10) + 0x14) = param_1;
  }
  return;
}

