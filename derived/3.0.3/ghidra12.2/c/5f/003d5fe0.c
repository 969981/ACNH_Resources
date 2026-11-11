
void FUN_003d5fe0(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  iVar1 = *(int *)(param_1 + 0x468);
  if (0 < iVar1) {
    lVar2 = 0;
    plVar3 = (long *)(param_1 + 0x480);
    do {
      if (*plVar3 != 0) {
        FUN_003dd6b0(*(undefined8 *)(param_1 + 0x100));
        *plVar3 = 0;
        iVar1 = *(int *)(param_1 + 0x468);
      }
      lVar2 = lVar2 + 1;
      plVar3 = plVar3 + 0x210;
    } while (lVar2 < iVar1);
  }
  return;
}

