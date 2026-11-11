
void FUN_003cb7b0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  while (lVar1 = lVar2, lVar1 != param_1 + 8) {
    lVar2 = *(long *)(lVar1 + 8);
    if (*(int *)(lVar1 + -0x10) == 0) {
      FUN_003c0ca0(lVar1 + -0x288);
    }
  }
  return;
}

