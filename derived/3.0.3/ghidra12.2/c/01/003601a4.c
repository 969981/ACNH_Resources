
long FUN_003601a4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 == 0) {
    return 0;
  }
  return lVar1 + (ulong)*(uint *)(lVar1 + 8);
}

