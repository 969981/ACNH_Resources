
int FUN_002e9db0(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  
  lVar2 = *(long *)(param_1 + 0x2c8);
  if (lVar2 == 0 || *(long *)PTR_DAT_04bcb8b8 == 0) {
    return 0;
  }
  piVar4 = (int *)(lVar2 + 0x10);
  if (*piVar4 != param_2) {
    if (*(int *)(lVar2 + 0x658) == param_2) {
      piVar3 = (int *)(lVar2 + 0x660);
      piVar4 = *(int **)(lVar2 + 0x668);
      if (piVar4 == piVar3) {
        return 0;
      }
      goto LAB_002e9e20;
    }
    if (*(int *)(lVar2 + 0xca0) != param_2) {
      if (*(int *)(lVar2 + 0x12e8) != param_2) {
        return 0;
      }
      piVar3 = (int *)(lVar2 + 0x12f0);
      piVar4 = *(int **)(lVar2 + 0x12f8);
      if (piVar4 == piVar3) {
        return 0;
      }
      goto LAB_002e9e20;
    }
    piVar4 = (int *)(lVar2 + 0xca0);
  }
  piVar3 = piVar4 + 2;
  piVar4 = *(int **)(piVar4 + 4);
  if (piVar4 == piVar3) {
    return 0;
  }
LAB_002e9e20:
  iVar1 = 0;
  do {
    if (((*(long *)(piVar4 + 4) != 0) && (*(long *)(piVar4 + 4) == *(long *)(piVar4 + 6))) &&
       (0 < *(short *)((long)piVar4 + 0x22))) {
      iVar1 = iVar1 + 1;
    }
    piVar4 = *(int **)(piVar4 + 2);
  } while (piVar4 != piVar3);
  return iVar1;
}

