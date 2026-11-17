
void FUN_030b3de0(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  if (param_2 != 0) {
    lVar10 = param_1[2];
    plVar1 = (long *)(param_2 + 0xafca0);
    if ((int)lVar10 != 0) {
      iVar6 = 0;
      do {
        lVar8 = *param_1;
        iVar2 = 0;
        if ((int)param_1[1] <= iVar6 + *(int *)((long)param_1 + 0xc)) {
          iVar2 = (int)param_1[1];
        }
        iVar2 = iVar6 + (*(int *)((long)param_1 + 0xc) - iVar2);
        lVar9 = *(long *)(lVar8 + (long)iVar2 * 8);
        if (lVar9 != 0) {
          *(undefined1 *)(lVar9 + 0x18) = 0;
          lVar9 = (long)iVar2 * 8;
          *(undefined4 *)(*(long *)(lVar8 + lVar9) + 0x1c) = 0;
          lVar8 = *(long *)(lVar8 + lVar9);
          if (*(char *)(lVar8 + 0x17) == '\0') {
            plVar3 = (long *)(*(int *)(param_2 + 0xafccc) + lVar8);
            if (*plVar3 != 0) {
              *(long *)(*plVar3 + 8) = plVar3[1];
            }
            if ((long *)plVar3[1] != (long *)0x0) {
              *(long *)plVar3[1] = *plVar3;
            }
            *plVar3 = 0;
            plVar3[1] = 0;
            plVar3 = (long *)(*(int *)(param_2 + 0xafcb4) + lVar8);
            *(int *)(param_2 + 0xafcc8) = *(int *)(param_2 + 0xafcc8) + -1;
            lVar8 = *plVar1;
            *plVar1 = (long)plVar3;
            *plVar3 = lVar8;
            plVar3[1] = (long)plVar1;
            if (lVar8 != 0) {
              *(long **)(lVar8 + 8) = plVar3;
            }
            *(int *)(param_2 + 0xafcb0) = *(int *)(param_2 + 0xafcb0) + 1;
          }
        }
        iVar6 = iVar6 + 1;
      } while ((int)lVar10 != iVar6);
    }
    *(undefined8 *)(param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 0xafcd8) = 0;
    if (*(long *)(param_2 + 0xafcc0) == param_2 + 0xafcb8) {
      iVar6 = 0;
      uVar7 = 0;
    }
    else {
      lVar8 = (long)*(int *)(param_2 + 0xafccc);
      iVar6 = 0;
      lVar10 = *(long *)(param_2 + 0xafcc0) - lVar8;
      do {
        if (*(char *)(lVar10 + 0x15) != '\0') {
          iVar2 = *(int *)(param_2 + 0x18);
          iVar4 = *(int *)(param_2 + 0x10);
          if (iVar2 < iVar4) {
            *(int *)(param_2 + 0x18) = iVar2 + 1;
            iVar2 = *(int *)(param_2 + 0x14) + iVar2;
            iVar6 = 0;
            if (iVar4 <= iVar2) {
              iVar6 = iVar4;
            }
            *(long *)(*(long *)(param_2 + 8) + (long)(iVar2 - iVar6) * 8) = lVar10;
            iVar6 = *(int *)(param_2 + 0xafcd8);
          }
        }
        iVar6 = iVar6 + 1;
        *(int *)(param_2 + 0xafcd8) = iVar6;
        lVar10 = *(long *)(lVar10 + lVar8 + 8) - lVar8;
      } while (lVar10 != (param_2 + 0xafcb8) - lVar8);
      uVar7 = *(undefined4 *)(param_2 + 0x18);
    }
    *(undefined4 *)(param_2 + 0xafcd0) = uVar7;
    *(int *)(param_2 + 0xafcd4) = iVar6;
    piVar5 = (int *)param_1[0x15f93];
    if (piVar5 != (int *)0x0) {
      if (*piVar5 == 2) {
        iVar6 = 3;
      }
      else {
        if (*piVar5 != 5) goto LAB_030b3f98;
        iVar6 = 6;
      }
      *piVar5 = iVar6;
    }
  }
LAB_030b3f98:
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  return;
}

