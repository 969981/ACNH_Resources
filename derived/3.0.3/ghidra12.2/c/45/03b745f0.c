
undefined8 FUN_03b745f0(long param_1,float *param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  float *pfVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  float fVar12;
  
  if (param_2 == (float *)0x0) {
    return 0;
  }
  plVar1 = (long *)(param_1 + 0x60);
  lVar4 = (long)*(int *)(param_1 + 0x74);
  if (*(long **)(param_1 + 0x68) != plVar1) {
    pfVar8 = (float *)((long)*(long **)(param_1 + 0x68) - lVar4);
    do {
      if (*pfVar8 == *param_2) {
        return 0;
      }
      pfVar8 = (float *)(*(long *)((long)pfVar8 + lVar4 + 8) - lVar4);
    } while (pfVar8 != (float *)((long)plVar1 - lVar4));
  }
  lVar7 = *plVar1;
  plVar5 = (long *)(lVar4 + (long)param_2);
  *plVar1 = (long)plVar5;
  *plVar5 = lVar7;
  plVar5[1] = (long)plVar1;
  if (lVar7 != 0) {
    *(long **)(lVar7 + 8) = plVar5;
  }
  iVar2 = *(int *)(param_1 + 0x70);
  *(int *)(param_1 + 0x70) = iVar2 + 1;
  if ((0 < iVar2) && (plVar5 = *(long **)(*(long *)(param_1 + 0x68) + 8), plVar5 != plVar1)) {
    lVar4 = -(long)*(int *)(param_1 + 0x74);
    do {
      plVar6 = (long *)plVar5[1];
      if ((float *)((long)plVar5 + lVar4) != (float *)0x0) {
        plVar10 = (long *)*plVar5;
        if (((float *)((long)plVar10 + lVar4) != (float *)0x0) &&
           (fVar12 = *(float *)((long)plVar5 + lVar4), fVar12 < *(float *)((long)plVar10 + lVar4)))
        {
          plVar9 = plVar10;
          do {
            plVar9 = (long *)*plVar9;
            plVar3 = plVar1;
            if ((plVar9 == plVar1) ||
               (plVar3 = plVar9, (float *)((long)plVar9 + lVar4) == (float *)0x0)) break;
          } while (fVar12 < *(float *)((long)plVar9 + lVar4));
          plVar9 = plVar6;
          if (plVar10 != (long *)0x0) {
            plVar10[1] = (long)plVar6;
            plVar9 = (long *)plVar5[1];
          }
          if (plVar9 != (long *)0x0) {
            *plVar9 = *plVar5;
          }
          *plVar5 = 0;
          plVar5[1] = 0;
          puVar11 = (undefined8 *)plVar3[1];
          plVar3[1] = (long)plVar5;
          *plVar5 = (long)plVar3;
          plVar5[1] = (long)puVar11;
          if (puVar11 != (undefined8 *)0x0) {
            *puVar11 = plVar5;
          }
        }
      }
      plVar5 = plVar6;
    } while (plVar6 != plVar1);
  }
  return 1;
}

