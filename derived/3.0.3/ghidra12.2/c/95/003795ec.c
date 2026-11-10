
long FUN_003795ec(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 200) + 0x38);
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + (ulong)*(uint *)(param_1 + 0x34);
  }
  return lVar1;
}

