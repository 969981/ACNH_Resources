
long FUN_003baf0c(long param_1,uint param_2)

{
  return *(long *)(param_1 + 0x48) + (ulong)(param_2 & 0xffffff) * 0x88;
}

