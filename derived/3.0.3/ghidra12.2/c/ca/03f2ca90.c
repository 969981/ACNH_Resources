
void FUN_03f2ca90(long *param_1,long param_2,uint param_3,int param_4,undefined8 *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  
  if ((int)param_3 < 9) {
    if (1 < (int)param_3) {
      plVar10 = *(long **)(param_2 + 8);
      if ((long *)param_1[1] != plVar10) {
        lVar9 = *param_1;
        lVar14 = (long)-param_4;
        plVar13 = (long *)param_1[1];
        do {
          plVar12 = (long *)*plVar13;
          plVar11 = (long *)plVar13[1];
          iVar2 = (*(code *)*param_5)((long)plVar12 + lVar14,(long)plVar13 + lVar14);
          if (0 < iVar2) {
            do {
              plVar12 = (long *)*plVar12;
              if (plVar12 == (long *)lVar9) {
                lVar4 = *plVar13;
                plVar12 = (long *)lVar9;
                goto joined_r0x03f2cba8;
              }
              iVar2 = (*(code *)*param_5)((long)plVar12 + lVar14,(long)plVar13 + lVar14);
            } while (0 < iVar2);
            lVar4 = *plVar13;
joined_r0x03f2cba8:
            if (lVar4 != 0) {
              *(long *)(lVar4 + 8) = plVar13[1];
            }
            if ((long *)plVar13[1] != (long *)0x0) {
              *(long *)plVar13[1] = *plVar13;
            }
            *plVar13 = 0;
            plVar13[1] = 0;
            puVar7 = *(undefined8 **)((long)plVar12 + 8);
            *(long **)((long)plVar12 + 8) = plVar13;
            *plVar13 = (long)plVar12;
            plVar13[1] = (long)puVar7;
            if (puVar7 != (undefined8 *)0x0) {
              *puVar7 = plVar13;
            }
          }
          plVar13 = plVar11;
        } while (plVar11 != plVar10);
      }
    }
  }
  else {
    uVar8 = param_3 >> 1;
    uVar1 = uVar8 - 1 & 3;
    plVar10 = param_1;
    if (2 < uVar8 - 2) {
      uVar5 = uVar8 - 1 & 0xfffffffc;
      do {
        uVar5 = uVar5 - 4;
        plVar10 = *(long **)(*(long *)(*(long *)(plVar10[1] + 8) + 8) + 8);
      } while (uVar5 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      plVar10 = (long *)plVar10[1];
    }
    plVar13 = (long *)*param_1;
    iVar2 = param_3 - uVar8;
    plVar11 = (long *)plVar10[1];
    FUN_03f2ca90(param_1,plVar10,uVar8,param_4,param_5);
    plVar12 = (long *)plVar13[1];
    lVar14 = *plVar11;
    FUN_03f2ca90(plVar11,param_2,iVar2,param_4,param_5);
    plVar10 = *(long **)(lVar14 + 8);
    do {
      if ((uVar8 == 0) ||
         ((iVar2 != 0 &&
          (iVar3 = (*(code *)*param_5)((long)plVar12 + (long)-param_4,(long)plVar10 + (long)-param_4
                                      ), 0 < iVar3)))) {
        plVar11 = (long *)plVar10[1];
        plVar6 = plVar11;
        if (*plVar10 != 0) {
          *(long **)(*plVar10 + 8) = plVar11;
          plVar6 = (long *)plVar10[1];
        }
        if (plVar6 != (long *)0x0) {
          *plVar6 = *plVar10;
        }
        *plVar10 = 0;
        plVar10[1] = 0;
        puVar7 = (undefined8 *)plVar13[1];
        plVar13[1] = (long)plVar10;
        *plVar10 = (long)plVar13;
        plVar10[1] = (long)puVar7;
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = plVar10;
        }
        iVar2 = iVar2 + -1;
        plVar13 = plVar10;
      }
      else {
        plVar6 = (long *)plVar12[1];
        plVar11 = plVar6;
        if (*plVar12 != 0) {
          *(long **)(*plVar12 + 8) = plVar6;
          plVar11 = (long *)plVar12[1];
        }
        if (plVar11 != (long *)0x0) {
          *plVar11 = *plVar12;
        }
        *plVar12 = 0;
        plVar12[1] = 0;
        puVar7 = (undefined8 *)plVar13[1];
        plVar13[1] = (long)plVar12;
        *plVar12 = (long)plVar13;
        plVar12[1] = (long)puVar7;
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = plVar12;
        }
        uVar8 = uVar8 - 1;
        plVar11 = plVar10;
        plVar13 = plVar12;
        plVar12 = plVar6;
      }
      plVar10 = plVar11;
    } while ((0 < (int)uVar8) || (0 < iVar2));
  }
  return;
}

