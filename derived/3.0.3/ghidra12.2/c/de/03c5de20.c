
void FUN_03c5de20(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x198) != param_1 + 400) {
    lVar2 = (long)*(int *)(param_1 + 0x1a4);
    lVar1 = *(long *)(param_1 + 0x198) - lVar2;
    do {
      FUN_03ea7e00(lVar1);
      lVar1 = *(long *)(lVar1 + lVar2 + 8) - lVar2;
    } while (lVar1 != (param_1 + 400) - lVar2);
  }
  if (*(long *)(param_1 + 0x40) != param_1 + 0x38) {
    lVar2 = (long)*(int *)(param_1 + 0x4c);
    lVar1 = *(long *)(param_1 + 0x40) - lVar2;
    do {
      FUN_03c5de20(lVar1);
      lVar1 = *(long *)(lVar1 + lVar2 + 8) - lVar2;
    } while (lVar1 != (param_1 + 0x38) - lVar2);
  }
  return;
}

