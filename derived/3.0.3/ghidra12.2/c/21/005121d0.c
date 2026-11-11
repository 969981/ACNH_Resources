
void FUN_005121d0(undefined8 param_1,int param_2,undefined1 *param_3,uint *param_4,long *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined1 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  
  *param_4 = 0;
  iVar4 = (int)param_5[1];
  if (0 < iVar4) {
    uVar1 = 0;
    lVar15 = 0;
    uVar14 = 0;
    do {
      lVar12 = *(long *)(*param_5 + lVar15 * 8);
      if (*(char *)(lVar12 + 0x130) != '\0') {
        if (0 < *(int *)(lVar12 + 0x90)) {
          lVar9 = 0;
          plVar13 = (long *)(*(long *)(lVar12 + 0x88) + 8);
          do {
            if ((int)plVar13[-1] == *(int *)(lVar12 + 0x134)) {
              if (*plVar13 != 0) {
                lVar9 = *(long *)(*plVar13 + 0x18);
                goto LAB_0051227c;
              }
              break;
            }
            lVar9 = lVar9 + 1;
            plVar13 = plVar13 + 2;
          } while (lVar9 < *(int *)(lVar12 + 0x90));
        }
        lVar9 = 0;
LAB_0051227c:
        lVar8 = *(long *)(lVar12 + 0x18);
        lVar11 = *(long *)(*(long *)(lVar8 + 0x60) + (long)*(int *)(lVar12 + 0x134) * 8);
        iVar4 = *(int *)(lVar11 + 0x28);
        if (iVar4 < 1) {
          uVar3 = 0;
          iVar5 = 0;
        }
        else {
          lVar10 = 0;
          iVar5 = 0;
          uVar3 = 0;
          uVar1 = uVar3;
          if (lVar9 == 0) {
            while( true ) {
              plVar13 = *(long **)(*(long *)(lVar8 + 0x50) +
                                  (long)*(int *)(*(long *)(lVar11 + 0x20) + lVar10 * 4) * 8);
              uVar3 = (**(code **)(*plVar13 + 0x50))(plVar13,lVar12);
              if (uVar3 <= uVar1) {
                uVar3 = uVar1;
              }
              iVar4 = (**(code **)(*plVar13 + 0x40))(plVar13,param_1,lVar12);
              lVar10 = lVar10 + 1;
              iVar5 = iVar4 + iVar5;
              if (*(int *)(lVar11 + 0x28) <= lVar10) break;
              lVar8 = *(long *)(lVar12 + 0x18);
              uVar1 = uVar3;
            }
          }
          else {
            do {
              if (0 < *(int *)(*(long *)(lVar9 + 0x18) + lVar10 * 4)) {
                plVar13 = *(long **)(*(long *)(*(long *)(lVar12 + 0x18) + 0x50) +
                                    (long)*(int *)(*(long *)(lVar11 + 0x20) + lVar10 * 4) * 8);
                uVar1 = (**(code **)(*plVar13 + 0x50))(plVar13,lVar12);
                if (uVar1 <= uVar3) {
                  uVar1 = uVar3;
                }
                iVar2 = (**(code **)(*plVar13 + 0x40))(plVar13,param_1,lVar12);
                iVar4 = *(int *)(lVar11 + 0x28);
                iVar5 = iVar2 + iVar5;
                uVar3 = uVar1;
              }
              lVar10 = lVar10 + 1;
            } while (lVar10 < iVar4);
          }
        }
        uVar3 = iVar5 + uVar3;
        plVar13 = (long *)(lVar11 + 0x30);
        if (lVar9 != 0) {
          plVar13 = (long *)(lVar9 + 0x28);
        }
        iVar4 = (int)plVar13[1];
        if (0 < iVar4) {
          lVar8 = 0;
          lVar9 = 0;
          do {
            plVar6 = *(long **)(*(long *)(lVar12 + 0x20) + (long)*(int *)(*plVar13 + lVar8) * 8);
            if (plVar6 != (long *)0x0) {
              iVar5 = (**(code **)(*plVar6 + 0x20))();
              iVar4 = (int)plVar13[1];
              uVar3 = iVar5 + uVar3;
            }
            lVar9 = lVar9 + 1;
            lVar8 = lVar8 + 0x10;
          } while (lVar9 < iVar4);
        }
        uVar1 = *param_4 + uVar3;
        *param_4 = uVar1;
        iVar4 = (int)param_5[1];
        if (uVar3 <= uVar14) {
          uVar3 = uVar14;
        }
        uVar14 = uVar3;
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < iVar4);
    if (uVar14 * param_2 < uVar1) {
      *param_4 = uVar14 * param_2;
      uVar7 = 1;
      goto LAB_0051242c;
    }
  }
  uVar7 = 0;
LAB_0051242c:
  *param_3 = uVar7;
  return;
}

