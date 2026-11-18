
void FUN_032af3e0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = param_1[1];
  while (lVar1 = lVar3, lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + 0x18);
    if ((*(byte *)(lVar1 + 0x1c8) & 1) != 0) {
      FUN_032af3e0(lVar1,param_2,param_3);
    }
  }
  FUN_032aea4c(param_1,param_3);
  plVar2 = param_1;
  do {
    if ((*(byte *)(plVar2 + 0x39) >> 4 & 1) != 0) {
      if ((*(byte *)(plVar2 + 0x39) >> 2 & 1) == 0) {
        return;
      }
      FUN_032ae69c(param_1,param_2);
      return;
    }
    plVar2 = (long *)*plVar2;
  } while (plVar2 != (long *)0x0);
  return;
}

