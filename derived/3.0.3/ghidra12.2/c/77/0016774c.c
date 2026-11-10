
long FUN_0016774c(long param_1,long param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  return param_2 - ((ulong)(*(byte *)(param_1 + 0xd) >> 3) & 1);
}

