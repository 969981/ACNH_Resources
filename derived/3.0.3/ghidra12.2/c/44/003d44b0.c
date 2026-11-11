
long FUN_003d44b0(long param_1)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x10);
  if (uVar2 != 0) {
    piVar3 = (int *)(param_1 + 0x18);
    do {
      if ((short)piVar3[-1] == 0x7001) {
        lVar1 = 0;
        if (*piVar3 != 0) {
          lVar1 = param_1 + *piVar3;
        }
        return lVar1;
      }
      uVar2 = uVar2 - 1;
      piVar3 = piVar3 + 3;
    } while (uVar2 != 0);
  }
  return 0;
}

