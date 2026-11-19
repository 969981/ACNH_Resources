
void FUN_03a60ed0(long *param_1,long param_2,uint param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  byte *pbVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  
  if ((int)param_3 < 9) {
    if (1 < (int)param_3) {
      plVar13 = *(long **)(param_2 + 8);
      if ((long *)param_1[1] != plVar13) {
        lVar17 = *param_1;
        lVar16 = (long)-param_4;
        plVar15 = (long *)param_1[1];
LAB_03a60f50:
        plVar14 = (long *)*plVar15;
        plVar12 = (long *)plVar15[1];
        lVar9 = *(long *)((long)plVar15 + lVar16 + 0x10);
        lVar18 = *(long *)((long)plVar14 + lVar16 + 0x10);
        plVar7 = (long *)(lVar18 + 8);
        (**(code **)(*plVar7 + 0x18))(plVar7);
        (**(code **)(*plVar7 + 0x18))(plVar7);
        plVar7 = (long *)(lVar9 + 8);
        pbVar11 = *(byte **)(lVar18 + 0x10);
        (**(code **)(*plVar7 + 0x18))(plVar7);
        pbVar4 = *(byte **)(lVar9 + 0x10);
        if (pbVar11 != pbVar4) {
          pbVar11 = *(byte **)(lVar18 + 0x10);
          lVar9 = 0x7ffff;
          while( true ) {
            bVar3 = *pbVar11;
            if (bVar3 != *pbVar4) break;
            if ((bVar3 == 0) ||
               (bVar2 = lVar9 == 0, pbVar4 = pbVar4 + 1, pbVar11 = pbVar11 + 1, lVar9 = lVar9 + -1,
               bVar2)) goto LAB_03a60f44;
          }
          if (*pbVar4 <= bVar3) goto LAB_03a60fd8;
        }
        goto LAB_03a60f44;
      }
    }
  }
  else {
    uVar8 = param_3 >> 1;
    uVar1 = uVar8 - 1 & 3;
    plVar13 = param_1;
    if (2 < uVar8 - 2) {
      uVar5 = uVar8 - 1 & 0xfffffffc;
      do {
        uVar5 = uVar5 - 4;
        plVar13 = *(long **)(*(long *)(*(long *)(plVar13[1] + 8) + 8) + 8);
      } while (uVar5 != 0);
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
      plVar13 = (long *)plVar13[1];
    }
    plVar15 = (long *)*param_1;
    iVar10 = param_3 - uVar8;
    plVar12 = (long *)plVar13[1];
    FUN_03a60ed0(param_1,plVar13,uVar8,param_4);
    plVar14 = (long *)plVar15[1];
    lVar16 = *plVar12;
    FUN_03a60ed0(plVar12,param_2,iVar10,param_4);
    plVar13 = *(long **)(lVar16 + 8);
    do {
      if (uVar8 == 0) {
LAB_03a61200:
        plVar12 = (long *)plVar13[1];
        plVar7 = plVar12;
        if (*plVar13 != 0) {
          *(long **)(*plVar13 + 8) = plVar12;
          plVar7 = (long *)plVar13[1];
        }
        if (plVar7 != (long *)0x0) {
          *plVar7 = *plVar13;
        }
        *plVar13 = 0;
        plVar13[1] = 0;
        puVar6 = (undefined8 *)plVar15[1];
        plVar15[1] = (long)plVar13;
        *plVar13 = (long)plVar15;
        plVar13[1] = (long)puVar6;
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = plVar13;
        }
        iVar10 = iVar10 + -1;
        plVar15 = plVar13;
      }
      else {
        if (iVar10 != 0) {
          lVar17 = *(long *)((long)plVar14 + (long)-param_4 + 0x10);
          lVar16 = *(long *)((long)plVar13 + (long)-param_4 + 0x10);
          plVar12 = (long *)(lVar17 + 8);
          (**(code **)(*plVar12 + 0x18))(plVar12);
          (**(code **)(*plVar12 + 0x18))(plVar12);
          plVar12 = (long *)(lVar16 + 8);
          pbVar11 = *(byte **)(lVar17 + 0x10);
          (**(code **)(*plVar12 + 0x18))(plVar12);
          pbVar4 = *(byte **)(lVar16 + 0x10);
          if (pbVar11 != pbVar4) {
            pbVar11 = *(byte **)(lVar17 + 0x10);
            lVar16 = 0x7ffff;
            while( true ) {
              bVar3 = *pbVar11;
              if (bVar3 != *pbVar4) break;
              if ((bVar3 == 0) ||
                 (bVar2 = lVar16 == 0, pbVar4 = pbVar4 + 1, pbVar11 = pbVar11 + 1,
                 lVar16 = lVar16 + -1, bVar2)) goto LAB_03a611b0;
            }
            if (*pbVar4 <= bVar3) goto LAB_03a61200;
          }
        }
LAB_03a611b0:
        plVar7 = (long *)plVar14[1];
        plVar12 = plVar7;
        if (*plVar14 != 0) {
          *(long **)(*plVar14 + 8) = plVar7;
          plVar12 = (long *)plVar14[1];
        }
        if (plVar12 != (long *)0x0) {
          *plVar12 = *plVar14;
        }
        *plVar14 = 0;
        plVar14[1] = 0;
        puVar6 = (undefined8 *)plVar15[1];
        plVar15[1] = (long)plVar14;
        *plVar14 = (long)plVar15;
        plVar14[1] = (long)puVar6;
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = plVar14;
        }
        uVar8 = uVar8 - 1;
        plVar12 = plVar13;
        plVar15 = plVar14;
        plVar14 = plVar7;
      }
      plVar13 = plVar12;
    } while ((0 < (int)uVar8) || (0 < iVar10));
  }
  return;
LAB_03a60fd8:
  plVar14 = (long *)*plVar14;
  if (plVar14 != (long *)lVar17) {
    lVar9 = *(long *)((long)plVar15 + lVar16 + 0x10);
    lVar18 = *(long *)((long)plVar14 + lVar16 + 0x10);
    plVar7 = (long *)(lVar18 + 8);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    plVar7 = (long *)(lVar9 + 8);
    pbVar11 = *(byte **)(lVar18 + 0x10);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    pbVar4 = *(byte **)(lVar9 + 0x10);
    if (pbVar11 == pbVar4) goto LAB_03a61070;
    pbVar11 = *(byte **)(lVar18 + 0x10);
    lVar9 = 0x7ffff;
    while( true ) {
      bVar3 = *pbVar11;
      if (bVar3 != *pbVar4) break;
      if ((bVar3 == 0) ||
         (bVar2 = lVar9 == 0, pbVar4 = pbVar4 + 1, pbVar11 = pbVar11 + 1, lVar9 = lVar9 + -1, bVar2)
         ) goto LAB_03a61070;
    }
    if (bVar3 < *pbVar4) goto LAB_03a61070;
    goto LAB_03a60fd8;
  }
  plVar14 = (long *)lVar17;
LAB_03a61070:
  if (*plVar15 != 0) {
    *(long *)(*plVar15 + 8) = plVar15[1];
  }
  if ((long *)plVar15[1] != (long *)0x0) {
    *(long *)plVar15[1] = *plVar15;
  }
  *plVar15 = 0;
  plVar15[1] = 0;
  puVar6 = *(undefined8 **)((long)plVar14 + 8);
  *(long **)((long)plVar14 + 8) = plVar15;
  *plVar15 = (long)plVar14;
  plVar15[1] = (long)puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = plVar15;
  }
LAB_03a60f44:
  plVar15 = plVar12;
  if (plVar12 == plVar13) {
    return;
  }
  goto LAB_03a60f50;
}

