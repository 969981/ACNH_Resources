
void FUN_0340e35c(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = *param_1;
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x18) == 0 && *(long *)(lVar3 + 0x10) == 0)) {
    lVar2 = *(long *)(lVar3 + 0x38);
    plVar1 = (long *)(*(int *)(lVar2 + 0x54) + lVar3);
    plVar4 = (long *)(lVar2 + 0x40);
    lVar3 = *plVar4;
    *plVar4 = (long)plVar1;
    *plVar1 = lVar3;
    plVar1[1] = (long)plVar4;
    if (lVar3 != 0) {
      *(long **)(lVar3 + 8) = plVar1;
    }
    *(int *)(lVar2 + 0x50) = *(int *)(lVar2 + 0x50) + 1;
  }
  return;
}

