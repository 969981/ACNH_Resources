
long FUN_0037b56c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(*(long *)(param_2 + 200) + 0x38);
  if (((lVar1 == 0) || (lVar2 = *(long *)(param_1 + 0x38), lVar2 == 0)) ||
     (*(int *)(lVar2 + 8) == 0)) {
    return 0;
  }
  return lVar1 + (ulong)*(uint *)(lVar2 + 0xc);
}

