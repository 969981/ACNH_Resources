
void FUN_0031ea50(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  if (*(long **)(param_1 + 0x198) != (long *)(param_1 + 400)) {
    plVar2 = *(long **)(param_1 + 0x198);
    do {
      iVar4 = (int)plVar2[-5];
      plVar1 = (long *)plVar2[1];
      plVar6 = plVar2 + -5;
      if (iVar4 == 0) {
        lVar5 = *plVar1;
        *(long **)(*plVar2 + 8) = plVar1;
        *plVar1 = *plVar2;
        *(long **)(lVar5 + 8) = plVar2;
        *plVar2 = lVar5;
        plVar6 = (long *)(param_1 + 0x188);
        do {
          plVar3 = (long *)*plVar6;
          if (plVar3 == (long *)(param_1 + 0x180)) goto LAB_0031ea78;
          plVar6 = plVar3 + 1;
        } while (plVar3[-2] != plVar2[-4]);
        plVar3[-2] = 0;
        *(long *)(param_1 + 0x1b8) = *(long *)(param_1 + 0x1b8) - plVar3[-1];
        plVar2 = (long *)plVar3[1];
        lVar5 = *plVar2;
        *(long **)(*plVar3 + 8) = plVar2;
        *plVar2 = *plVar3;
        *(long **)(lVar5 + 8) = plVar3;
        *plVar3 = lVar5;
        *(long **)(param_1 + 0x1d0) = plVar3 + -3;
        iVar4 = *(int *)(param_1 + 0x1b0);
        plVar6 = (long *)(param_1 + 0x1b0);
      }
      *(int *)plVar6 = iVar4 + -1;
LAB_0031ea78:
      plVar2 = plVar1;
    } while (plVar1 != (long *)(param_1 + 400));
  }
  return;
}

