
long FUN_0037e5d0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xa8);
  if (lVar2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    return lVar2 + 0xc;
  }
  lVar1 = 0;
  if (*(short *)(lVar2 + 8) != 1) {
    lVar1 = lVar2 + 0x18;
  }
  return lVar1;
}

