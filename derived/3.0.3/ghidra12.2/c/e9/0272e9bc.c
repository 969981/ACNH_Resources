
void FUN_0272e9bc(long *param_1)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  piVar1 = (int *)param_1[1];
  if (piVar4 != (int *)0x0 && piVar1 != (int *)0x0) {
    if (1 < *piVar1) {
      lVar2 = FUN_038567d0(piVar1,1);
      iVar3 = *(int *)(lVar2 + 0xc);
      if (iVar3 < 1) {
        FUN_038e2e80(piVar1 + 0x16);
        iVar3 = 0;
      }
      *(int *)(lVar2 + 0xc) = iVar3 + 1;
      piVar4 = (int *)*param_1;
    }
    if (1 < *piVar4) {
      lVar2 = FUN_038567d0(piVar4,1);
      iVar3 = *(int *)(lVar2 + 0xc);
      if (iVar3 < 1) {
        FUN_038e2e80(piVar4 + 0x16);
        iVar3 = 0;
      }
      *(int *)(lVar2 + 0xc) = iVar3 + 1;
    }
  }
  return;
}

