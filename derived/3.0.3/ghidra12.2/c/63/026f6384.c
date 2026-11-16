
void FUN_026f6384(long param_1)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  
  lVar1 = *(long *)(param_1 + 0x308);
  piVar3 = *(int **)(param_1 + 0x310);
  if (lVar1 != 0 && piVar3 != (int *)0x0) {
    if (1 < *piVar3) {
      lVar1 = FUN_038567d0(piVar3,1);
      iVar2 = *(int *)(lVar1 + 0xc);
      if (iVar2 < 1) {
        FUN_038e2e80(piVar3 + 0x16);
        iVar2 = 0;
      }
      *(int *)(lVar1 + 0xc) = iVar2 + 1;
      lVar1 = *(long *)(param_1 + 0x308);
    }
    FUN_038569c0(lVar1);
    lVar1 = *(long *)(param_1 + 0x308);
    piVar3 = *(int **)(param_1 + 0x310);
  }
  *(byte *)(param_1 + 0x453) = *(byte *)(param_1 + 0x453) | 4;
  if ((lVar1 == 0) || (piVar3 == (int *)0x0)) {
    return;
  }
  FUN_038568c0(piVar3);
  FUN_03856a80(*(undefined8 *)(param_1 + 0x308));
  return;
}

