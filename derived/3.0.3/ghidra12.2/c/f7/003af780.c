
long FUN_003af780(long param_1,int param_2,int param_3)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x48) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 0x48) + (long)param_2 * 8), lVar1 == 0)) {
    return 0;
  }
  return lVar1 + (long)param_3 * 0x48;
}

