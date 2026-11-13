
void FUN_014a86e0(long *param_1,long param_2,uint param_3)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  if ((int)param_3 < 9) {
    if (1 < (int)param_3) {
      plVar3 = *(long **)(param_2 + 8);
      if ((long *)param_1[1] != plVar3) {
        lVar12 = *param_1;
        plVar11 = (long *)param_1[1];
        do {
          plVar10 = (long *)plVar11[1];
          plVar9 = (long *)*plVar11;
          if ((int)plVar9[-1] < (int)plVar11[-1]) {
            plVar5 = plVar9;
            do {
              plVar5 = (long *)*plVar5;
              plVar2 = (long *)lVar12;
              if (plVar5 == (long *)lVar12) break;
              plVar2 = plVar5;
            } while (*(int *)(plVar5 + -1) < (int)plVar11[-1]);
            plVar5 = plVar10;
            if (plVar9 != (long *)0x0) {
              plVar9[1] = (long)plVar10;
              plVar5 = (long *)plVar11[1];
            }
            if (plVar5 != (long *)0x0) {
              *plVar5 = *plVar11;
            }
            *plVar11 = 0;
            plVar11[1] = 0;
            puVar6 = *(undefined8 **)((long)plVar2 + 8);
            *(long **)((long)plVar2 + 8) = plVar11;
            *plVar11 = (long)plVar2;
            plVar11[1] = (long)puVar6;
            if (puVar6 != (undefined8 *)0x0) {
              *puVar6 = plVar11;
            }
          }
          plVar11 = plVar10;
        } while (plVar10 != plVar3);
      }
    }
  }
  else {
    uVar7 = param_3 >> 1;
    uVar1 = uVar7 - 1 & 3;
    plVar3 = param_1;
    if (2 < uVar7 - 2) {
      uVar4 = uVar7 - 1 & 0xfffffffc;
      do {
        uVar4 = uVar4 - 4;
        plVar3 = *(long **)(*(long *)(*(long *)(plVar3[1] + 8) + 8) + 8);
      } while (uVar4 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      plVar3 = (long *)plVar3[1];
    }
    plVar11 = (long *)*param_1;
    iVar8 = param_3 - uVar7;
    plVar9 = (long *)plVar3[1];
    FUN_014a86e0(param_1,plVar3,uVar7);
    plVar10 = (long *)plVar11[1];
    lVar12 = *plVar9;
    FUN_014a86e0(plVar9,param_2,iVar8);
    plVar3 = *(long **)(lVar12 + 8);
    do {
      if ((uVar7 == 0) || ((iVar8 != 0 && ((int)plVar10[-1] < (int)plVar3[-1])))) {
        plVar9 = (long *)plVar3[1];
        plVar5 = plVar9;
        if (*plVar3 != 0) {
          *(long **)(*plVar3 + 8) = plVar9;
          plVar5 = (long *)plVar3[1];
        }
        if (plVar5 != (long *)0x0) {
          *plVar5 = *plVar3;
        }
        *plVar3 = 0;
        plVar3[1] = 0;
        puVar6 = (undefined8 *)plVar11[1];
        plVar11[1] = (long)plVar3;
        *plVar3 = (long)plVar11;
        plVar3[1] = (long)puVar6;
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = plVar3;
        }
        iVar8 = iVar8 + -1;
        plVar11 = plVar3;
      }
      else {
        plVar5 = (long *)plVar10[1];
        plVar9 = plVar5;
        if (*plVar10 != 0) {
          *(long **)(*plVar10 + 8) = plVar5;
          plVar9 = (long *)plVar10[1];
        }
        if (plVar9 != (long *)0x0) {
          *plVar9 = *plVar10;
        }
        *plVar10 = 0;
        plVar10[1] = 0;
        puVar6 = (undefined8 *)plVar11[1];
        plVar11[1] = (long)plVar10;
        *plVar10 = (long)plVar11;
        plVar10[1] = (long)puVar6;
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = plVar10;
        }
        uVar7 = uVar7 - 1;
        plVar9 = plVar3;
        plVar11 = plVar10;
        plVar10 = plVar5;
      }
      plVar3 = plVar9;
    } while ((0 < (int)uVar7) || (0 < iVar8));
  }
  return;
}

