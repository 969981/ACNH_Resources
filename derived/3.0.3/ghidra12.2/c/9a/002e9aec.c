
int * FUN_002e9aec(long param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x2c8);
  if (lVar2 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)(lVar2 + 0x10);
    if (*piVar1 != param_2) {
      if (*(int *)(lVar2 + 0x658) == param_2) {
        return (int *)(lVar2 + 0x658);
      }
      if (*(int *)(lVar2 + 0xca0) == param_2) {
        return (int *)(lVar2 + 0xca0);
      }
      piVar1 = (int *)(lVar2 + 0x12e8);
      if (*(int *)(lVar2 + 0x12e8) != param_2) {
        piVar1 = (int *)0x0;
      }
      return piVar1;
    }
  }
  return piVar1;
}

