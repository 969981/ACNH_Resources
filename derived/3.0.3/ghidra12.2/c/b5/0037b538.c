
long FUN_0037b538(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_2 + 200) + 0x38);
  if (((lVar1 == 0) || (*(long *)(param_1 + 0x38) == 0)) ||
     (*(int *)(*(long *)(param_1 + 0x38) + 4) == 0)) {
    return 0;
  }
  return (ulong)*(uint *)(param_1 + 0x34) + lVar1 + 0x90;
}

