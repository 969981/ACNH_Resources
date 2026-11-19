
void FUN_03c2f4c0(long *param_1,long param_2,uint param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  
  if ((int)param_3 < 9) {
    if (1 < (int)param_3) {
      plVar9 = *(long **)(param_2 + 8);
      if ((long *)param_1[1] != plVar9) {
        lVar13 = *param_1;
        plVar12 = (long *)param_1[1];
        do {
          plVar11 = (long *)*plVar12;
          plVar10 = (long *)plVar12[1];
          iVar2 = (*(code *)*param_4)(plVar11 + -1,plVar12 + -1);
          if (0 < iVar2) {
            do {
              plVar11 = (long *)*plVar11;
              if (plVar11 == (long *)lVar13) {
                lVar4 = *plVar12;
                plVar11 = (long *)lVar13;
                goto joined_r0x03c2f5c8;
              }
              iVar2 = (*(code *)*param_4)(plVar11 + -1,plVar12 + -1);
            } while (0 < iVar2);
            lVar4 = *plVar12;
joined_r0x03c2f5c8:
            if (lVar4 != 0) {
              *(long *)(lVar4 + 8) = plVar12[1];
            }
            if ((long *)plVar12[1] != (long *)0x0) {
              *(long *)plVar12[1] = *plVar12;
            }
            *plVar12 = 0;
            plVar12[1] = 0;
            puVar7 = *(undefined8 **)((long)plVar11 + 8);
            *(long **)((long)plVar11 + 8) = plVar12;
            *plVar12 = (long)plVar11;
            plVar12[1] = (long)puVar7;
            if (puVar7 != (undefined8 *)0x0) {
              *puVar7 = plVar12;
            }
          }
          plVar12 = plVar10;
        } while (plVar10 != plVar9);
      }
    }
  }
  else {
    uVar8 = param_3 >> 1;
    uVar1 = uVar8 - 1 & 3;
    plVar9 = param_1;
    if (2 < uVar8 - 2) {
      uVar5 = uVar8 - 1 & 0xfffffffc;
      do {
        uVar5 = uVar5 - 4;
        plVar9 = *(long **)(*(long *)(*(long *)(plVar9[1] + 8) + 8) + 8);
      } while (uVar5 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      plVar9 = (long *)plVar9[1];
    }
    plVar12 = (long *)*param_1;
    iVar2 = param_3 - uVar8;
    plVar10 = (long *)plVar9[1];
    FUN_03c2f4c0(param_1,plVar9,uVar8,param_4);
    plVar11 = (long *)plVar12[1];
    lVar13 = *plVar10;
    FUN_03c2f4c0(plVar10,param_2,iVar2,param_4);
    plVar9 = *(long **)(lVar13 + 8);
    do {
      if ((uVar8 == 0) ||
         ((iVar2 != 0 && (iVar3 = (*(code *)*param_4)(plVar11 + -1,plVar9 + -1), 0 < iVar3)))) {
        plVar10 = (long *)plVar9[1];
        plVar6 = plVar10;
        if (*plVar9 != 0) {
          *(long **)(*plVar9 + 8) = plVar10;
          plVar6 = (long *)plVar9[1];
        }
        if (plVar6 != (long *)0x0) {
          *plVar6 = *plVar9;
        }
        *plVar9 = 0;
        plVar9[1] = 0;
        puVar7 = (undefined8 *)plVar12[1];
        plVar12[1] = (long)plVar9;
        *plVar9 = (long)plVar12;
        plVar9[1] = (long)puVar7;
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = plVar9;
        }
        iVar2 = iVar2 + -1;
        plVar12 = plVar9;
      }
      else {
        plVar6 = (long *)plVar11[1];
        plVar10 = plVar6;
        if (*plVar11 != 0) {
          *(long **)(*plVar11 + 8) = plVar6;
          plVar10 = (long *)plVar11[1];
        }
        if (plVar10 != (long *)0x0) {
          *plVar10 = *plVar11;
        }
        *plVar11 = 0;
        plVar11[1] = 0;
        puVar7 = (undefined8 *)plVar12[1];
        plVar12[1] = (long)plVar11;
        *plVar11 = (long)plVar12;
        plVar11[1] = (long)puVar7;
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = plVar11;
        }
        uVar8 = uVar8 - 1;
        plVar10 = plVar9;
        plVar12 = plVar11;
        plVar11 = plVar6;
      }
      plVar9 = plVar10;
    } while ((0 < (int)uVar8) || (0 < iVar2));
  }
  return;
}

