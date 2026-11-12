
undefined8 FUN_00a77ab0(undefined8 param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  
  lVar2 = FUN_00a77090();
  if ((lVar2 != 0) && (-1 < (int)DAT_04c47dc0)) {
    uVar3 = 0;
    piVar4 = (int *)PTR_DAT_04bb6258;
    do {
      piVar1 = piVar4;
      if (999 < uVar3) {
        piVar1 = (int *)PTR_DAT_04bb6258;
      }
      if (*piVar1 == param_2) {
        if (*(long *)(piVar1 + 2) == -1) {
          return 0;
        }
        *(long *)(lVar2 + 0x10) = *(long *)(piVar1 + 2);
        return 1;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 4;
    } while ((ulong)DAT_04c47dc0 + 1 != uVar3);
  }
  return 0;
}

