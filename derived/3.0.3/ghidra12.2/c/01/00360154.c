
long FUN_00360154(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return 0;
  }
  return lVar1 + (ulong)*(uint *)(lVar1 + 0x10);
}

