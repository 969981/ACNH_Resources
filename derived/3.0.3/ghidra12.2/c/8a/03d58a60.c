
void FUN_03d58a60(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x1d0) != param_1 + 0x1c8) {
    lVar2 = (long)*(int *)(param_1 + 0x1dc);
    lVar1 = *(long *)(param_1 + 0x1d0) - lVar2;
    do {
      FUN_03c5d850(lVar1);
      lVar1 = *(long *)(lVar1 + lVar2 + 8) - lVar2;
    } while (lVar1 != (param_1 + 0x1c8) - lVar2);
  }
  if (*(long *)(param_1 + 0x1e8) != param_1 + 0x1e0) {
    lVar2 = (long)*(int *)(param_1 + 500);
    lVar1 = *(long *)(param_1 + 0x1e8) - lVar2;
    do {
      lVar1 = *(long *)(lVar1 + lVar2 + 8) - lVar2;
    } while (lVar1 != (param_1 + 0x1e0) - lVar2);
  }
  return;
}

