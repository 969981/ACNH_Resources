
int FUN_006fb278(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  int *piVar5;
  float fVar6;
  
  if (*(int *)(param_1 + 0x24c) != -1) {
    return *(int *)(param_1 + 0x24c);
  }
  if ((0xeb < *(uint *)(param_1 + 0x15c)) ||
     (piVar5 = (int *)(&DAT_04c969c8)[*(uint *)(param_1 + 0x15c)], piVar5 == (int *)0x0)) {
    *(undefined4 *)(param_1 + 0x24c) = 0;
    return 0;
  }
  iVar2 = *(int *)(&DAT_0414e744 + (long)*piVar5 * 4);
  uVar1 = *(uint *)(param_1 + 0x234);
  *(int *)(param_1 + 0x24c) = iVar2;
  if (((uVar1 == 0) ||
      (plVar4 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                          ((ulong)(uVar1 >> 0x11) & 0x7ff8)), plVar4 == (long *)0x0)) ||
     (*(uint *)(plVar4 + 0x46) != uVar1)) {
    if (iVar2 != 0x7ffffffe) goto LAB_006fb364;
    if ((*(uint *)(param_1 + 0x248) >> 1 & 1) == 0) {
      iVar3 = 0;
      if (*(int *)(&DAT_0414eaf4 + (long)*piVar5 * 4) != 0x7fffffff) {
        iVar3 = *(int *)(&DAT_0414eaf4 + (long)*piVar5 * 4);
      }
    }
    else {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = (**(code **)(*plVar4 + 0x30))();
    if (iVar2 != 0x7ffffffe) goto LAB_006fb364;
    iVar3 = iVar3 + 1;
  }
  *(int *)(param_1 + 0x24c) = iVar3;
LAB_006fb364:
  if (*(long *)(param_1 + 0x60) == 0) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = (float)NEON_fminnm((float)*(int *)(*(long *)(param_1 + 0x60) + 0x11e8) / 1000.0,
                               0x3dcccccd);
  }
  *(float *)(param_1 + 0x250) = (0.1 - fVar6) + (float)*(int *)(param_1 + 0x24c);
  return *(int *)(param_1 + 0x24c);
}

