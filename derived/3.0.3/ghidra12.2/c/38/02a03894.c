
void FUN_02a03894(long param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x14);
  if (0 < iVar3) {
    iVar3 = iVar3 + -1;
  }
  if (0 < iVar4) {
    iVar4 = iVar4 + -1;
  }
  uVar1 = param_3 + (iVar4 >> 1);
  if (uVar1 < *(uint *)(param_1 + 0x30)) {
    iVar4 = *(int *)(param_1 + 0x2c) + uVar1;
    iVar2 = 0;
    if (*(int *)(param_1 + 0x28) <= iVar4) {
      iVar2 = *(int *)(param_1 + 0x28);
    }
    plVar5 = (long *)(*(long *)(param_1 + 0x20) + (long)(iVar4 - iVar2) * 0x30);
  }
  else {
    plVar5 = (long *)0x0;
  }
  uVar1 = (iVar3 >> 1) + param_2;
  if (uVar1 < *(uint *)(plVar5 + 5)) {
    iVar3 = *(int *)((long)plVar5 + 0x24) + uVar1;
    lVar6 = plVar5[3];
    iVar4 = 0;
    if ((int)plVar5[4] <= iVar3) {
      iVar4 = (int)plVar5[4];
    }
    if (lVar6 != 0) {
      plVar8 = (long *)plVar5[1];
      lVar7 = (long)(iVar3 - iVar4);
      if ((plVar8 != (long *)0x0) && (*plVar8 == *(long *)(lVar6 + lVar7 * 8))) {
        if (plVar8[2] == *plVar5) {
          plVar8 = (long *)0x0;
        }
        else {
          plVar9 = (long *)(plVar8[2] + -8);
          plVar8 = (long *)0x0;
          if (*(int *)(param_1 + 8) <= (int)*(short *)(*plVar9 + 8)) {
            plVar8 = plVar9;
          }
        }
        plVar5[1] = (long)plVar8;
      }
      plVar8 = (long *)plVar5[2];
      if ((plVar8 != (long *)0x0) && (*plVar8 == *(long *)(lVar6 + lVar7 * 8))) {
        if (plVar8[1] == *plVar5) {
          plVar8 = (long *)0x0;
        }
        else {
          plVar9 = (long *)(plVar8[1] + -8);
          plVar8 = (long *)0x0;
          if ((int)*(short *)(*plVar9 + 8) <= *(int *)(param_1 + 8) + *(int *)(param_1 + 0x10) + -1)
          {
            plVar8 = plVar9;
          }
        }
        plVar5[2] = (long)plVar8;
      }
      *(undefined8 *)(lVar6 + lVar7 * 8) = 0;
    }
  }
  return;
}

