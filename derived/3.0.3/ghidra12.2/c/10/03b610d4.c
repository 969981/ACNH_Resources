
void FUN_03b610d4(long param_1,int param_2)

{
  long lVar1;
  
  if (DAT_05aebc00 == '\0') {
    if ((*(long *)(DAT_05aebb78 + 0x68) != 0) && (param_2 - 1U < 5)) {
      param_2 = param_2 + 0x7a;
    }
    if ((*(long **)(param_1 + 0x48) != (long *)0x0) &&
       (lVar1 = **(long **)(param_1 + 0x48), lVar1 != 0)) {
      FUN_003cfb70(lVar1,param_2);
      return;
    }
  }
  else if (((*(char *)(param_1 + 0x58) != '\0') && (*(int *)(param_1 + 0x5c) != 0)) &&
          (*(long *)(param_1 + 0x128) != 0)) {
    FUN_03b63090(*(long *)(param_1 + 0x128),1);
    return;
  }
  return;
}

