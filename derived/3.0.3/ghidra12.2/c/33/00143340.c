
ulong FUN_00143340(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (DAT_04c57ae0 == (code *)0x0) {
    return 0;
  }
  lVar1 = (*DAT_04c57ae0)(param_1 + 7 + param_2);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = param_1 + 7 + lVar1 & -param_1;
    *(long *)(uVar2 - 8) = lVar1;
  }
  return uVar2;
}

