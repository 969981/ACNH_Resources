
void FUN_003c04d4(long param_1,byte param_2)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    *(byte *)(*(long *)(param_1 + 0x10) + 0x10) = param_2 & 1;
  }
  return;
}

