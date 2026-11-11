
void FUN_004c9c60(long *param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  if (iVar2 == 0) {
    return;
  }
  if (0 < iVar2) {
    lVar1 = *param_1 + (long)iVar2 * 0x10;
    do {
      lVar1 = lVar1 + -0x10;
      FUN_0043be10(lVar1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_0043d590(param_1 + 2);
  return;
}

