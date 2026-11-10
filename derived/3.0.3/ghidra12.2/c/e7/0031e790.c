
undefined8 FUN_0031e790(long param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  uVar2 = *(uint *)(param_1 + 0x1b4);
  if ((int)uVar2 <= *(int *)(param_1 + 0x1b0)) {
    FUN_0032c410("GpuBuffer management domain is lacking. \n");
    return 0;
  }
  lVar3 = *(long *)(param_1 + 0x1d0);
  if (lVar3 == 0) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x1c0) + 1U != uVar2) {
      iVar1 = *(int *)(param_1 + 0x1c0) + 1;
    }
    lVar3 = *(long *)(param_1 + 0x1a8);
    *(int *)(param_1 + 0x1c0) = iVar1;
    if (*(long *)(lVar3 + (long)iVar1 * 0x38 + 8) == 0) {
      lVar3 = lVar3 + (long)iVar1 * 0x38;
      *(long *)(param_1 + 0x1d0) = lVar3;
    }
    else {
      if (0 < (int)uVar2) {
        uVar5 = 0;
        do {
          if (*(long *)(lVar3 + 8) == 0) {
            *(long *)(param_1 + 0x1d0) = lVar3;
            *(int *)(param_1 + 0x1c0) = (int)uVar5;
            goto LAB_0031e848;
          }
          uVar5 = uVar5 + 1;
          lVar3 = lVar3 + 0x38;
        } while (uVar2 != uVar5);
      }
      lVar3 = 0;
    }
  }
LAB_0031e848:
  plVar6 = *(long **)(param_1 + 0x188);
  lVar7 = *(long *)(param_1 + 0x170);
  do {
    if (plVar6 == (long *)(param_1 + 0x180)) {
      uVar5 = param_3 + -1 + lVar7 & -param_3;
      if ((long)((*(long *)(param_1 + 0x170) + *(long *)(param_1 + 0x178)) - uVar5) < param_2) {
        FUN_0032c600(*(long *)(param_1 + 0x1e8) + 0x8c,0,0x1000);
        FUN_0032c410("GpuBuffer allocation failed. Allocated size : %d Bytes.\n",param_2);
        FUN_0032c410("Current GpuBuffer allocation : %d/%d.\n",*(undefined8 *)(param_1 + 0x1b8),
                     *(undefined8 *)(param_1 + 0x178));
        return 0;
      }
      plVar6 = (long *)(lVar3 + 0x18);
      lVar7 = *plVar6;
      *(ulong *)(lVar3 + 8) = uVar5;
      *(long *)(lVar3 + 0x10) = param_2;
      *plVar6 = *(long *)(param_1 + 0x180);
      *(long **)(lVar7 + 8) = (long *)(param_1 + 0x180);
      *(long **)(*(long *)(param_1 + 0x180) + 8) = plVar6;
      *(long *)(param_1 + 0x180) = lVar7;
LAB_0031e944:
      *(undefined8 *)(param_1 + 0x1d0) = 0;
      *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + 1;
      *(long *)(param_1 + 0x1b8) = *(long *)(param_1 + 0x1b8) + *(long *)(lVar3 + 0x10);
      return *(undefined8 *)(lVar3 + 8);
    }
    uVar5 = param_3 + -1 + lVar7 & -param_3;
    if (param_2 <= (long)(plVar6[-2] - uVar5)) {
      plVar4 = (long *)(lVar3 + 0x18);
      lVar7 = *plVar4;
      *(ulong *)(lVar3 + 8) = uVar5;
      *(long *)(lVar3 + 0x10) = param_2;
      *plVar4 = *plVar6;
      *(long **)(lVar7 + 8) = plVar6;
      *(long **)(*plVar6 + 8) = plVar4;
      *plVar6 = lVar7;
      goto LAB_0031e944;
    }
    lVar7 = plVar6[-2] + plVar6[-1];
    plVar6 = (long *)plVar6[1];
  } while( true );
}

