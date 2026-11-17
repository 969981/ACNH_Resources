
void FUN_03152cc0(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x58) != param_1 + 0x50) {
    lVar2 = (long)*(int *)(param_1 + 100);
    lVar1 = *(long *)(param_1 + 0x58) - lVar2;
    do {
      FUN_03152cc0(lVar1,param_2 & 1);
      lVar1 = *(long *)(lVar1 + lVar2 + 8) - lVar2;
    } while (lVar1 != (param_1 + 0x50) - lVar2);
  }
  FUN_03152bc0(param_1,param_2 & 1);
  return;
}

