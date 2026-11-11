
void FUN_004c98a0(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if (0 < iVar1) {
    lVar5 = 0;
    uVar4 = -(ulong)(iVar1 - 1U >> 0x1f) & 0xfffffff800000000 | (ulong)(iVar1 - 1U) << 3;
    plVar2 = *(long **)(param_1 + 0x30);
    do {
      plVar3 = plVar2 + 1;
      if (*plVar2 == param_2) {
        if ((int)lVar5 < 0) {
          return;
        }
        *(int *)(param_1 + 0x38) = iVar1 + -1;
        if ((iVar1 + -1) - (int)lVar5 < 1) {
          return;
        }
        lVar5 = 0;
        do {
          lVar5 = (lVar5 << 0x20) + 0x800000000 >> 0x20;
          plVar3[-1] = *plVar3;
          plVar3 = plVar3 + 1;
        } while (lVar5 < (long)uVar4);
        return;
      }
      lVar5 = lVar5 + 1;
      uVar4 = uVar4 - 8;
      plVar2 = plVar3;
    } while (lVar5 < iVar1);
  }
  return;
}

