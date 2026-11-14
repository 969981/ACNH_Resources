
void FUN_01c06c60(long param_1,short *param_2)

{
  long *plVar1;
  short sVar2;
  short *psVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *plVar10;
  
  plVar1 = (long *)(param_1 + 0x248);
  plVar5 = *(long **)(param_1 + 0x250);
  while (plVar5 != plVar1) {
    plVar4 = (long *)plVar5[1];
    plVar8 = plVar4;
    if (*plVar5 != 0) {
      *(long **)(*plVar5 + 8) = plVar4;
      plVar8 = (long *)plVar5[1];
    }
    if (plVar8 != (long *)0x0) {
      *plVar8 = *plVar5;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    *(int *)(param_1 + 600) = *(int *)(param_1 + 600) + -1;
    plVar5[-3] = *(long *)(param_1 + 0x260);
    *(long **)(param_1 + 0x260) = plVar5 + -3;
    plVar5 = plVar4;
  }
  if ((-1 < *param_2) && (*(int *)(param_1 + 600) < *(int *)(param_1 + 0x270))) {
    psVar3 = *(short **)(param_1 + 0x260);
    if (psVar3 != (short *)0x0) {
      *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)psVar3;
    }
    psVar3[0x10] = 0;
    psVar3[0x11] = 0;
    psVar3[0x12] = 0;
    psVar3[0x13] = 0;
    psVar3[0] = 0;
    psVar3[1] = 0;
    psVar3[2] = 0;
    psVar3[3] = 0;
    plVar5 = (long *)(psVar3 + 0xc);
    *plVar5 = 0;
    psVar3[4] = 0;
    psVar3[5] = 0;
    psVar3[6] = 0;
    psVar3[7] = 0;
    psVar3[8] = 0;
    psVar3[9] = 0;
    psVar3[10] = 0;
    psVar3[0xb] = 0;
    lVar6 = *plVar1;
    *plVar1 = (long)plVar5;
    *(long **)(psVar3 + 0x10) = plVar1;
    *plVar5 = lVar6;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar5;
    }
    *(int *)(param_1 + 600) = *(int *)(param_1 + 600) + 1;
    sVar2 = *param_2;
    *(undefined1 **)(psVar3 + 4) = &LAB_01c07080;
    psVar3[8] = 0;
    psVar3[9] = 0;
    psVar3[10] = 0;
    psVar3[0xb] = 0;
    *psVar3 = sVar2;
  }
  if ((-1 < param_2[1]) && (*(int *)(param_1 + 600) < *(int *)(param_1 + 0x270))) {
    psVar3 = *(short **)(param_1 + 0x260);
    if (psVar3 != (short *)0x0) {
      *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)psVar3;
    }
    psVar3[0x10] = 0;
    psVar3[0x11] = 0;
    psVar3[0x12] = 0;
    psVar3[0x13] = 0;
    psVar3[0] = 0;
    psVar3[1] = 0;
    psVar3[2] = 0;
    psVar3[3] = 0;
    plVar5 = (long *)(psVar3 + 0xc);
    *plVar5 = 0;
    psVar3[4] = 0;
    psVar3[5] = 0;
    psVar3[6] = 0;
    psVar3[7] = 0;
    psVar3[8] = 0;
    psVar3[9] = 0;
    psVar3[10] = 0;
    psVar3[0xb] = 0;
    lVar6 = *plVar1;
    *plVar1 = (long)plVar5;
    *(long **)(psVar3 + 0x10) = plVar1;
    *plVar5 = lVar6;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar5;
    }
    *(int *)(param_1 + 600) = *(int *)(param_1 + 600) + 1;
    sVar2 = param_2[1];
    *(undefined1 **)(psVar3 + 4) = &LAB_01c071c4;
    psVar3[8] = 0;
    psVar3[9] = 0;
    psVar3[10] = 0;
    psVar3[0xb] = 0;
    *psVar3 = sVar2;
  }
  if (1 < *(int *)(param_1 + 600)) {
    plVar5 = *(long **)(*(long *)(param_1 + 0x250) + 8);
    while (plVar4 = plVar5, plVar4 != plVar1) {
      plVar5 = (long *)plVar4[1];
      plVar8 = (long *)*plVar4;
      if ((short)plVar4[-3] < (short)plVar8[-3]) {
        plVar7 = plVar8;
        do {
          plVar7 = (long *)*plVar7;
          plVar10 = plVar5;
          if (plVar7 == plVar1) {
            plVar7 = plVar1;
            if (plVar8 == (long *)0x0) goto LAB_01c06e18;
            goto LAB_01c06e10;
          }
        } while ((short)plVar4[-3] < (short)plVar7[-3]);
        if (plVar8 != (long *)0x0) {
LAB_01c06e10:
          plVar8[1] = (long)plVar5;
          plVar10 = (long *)plVar4[1];
        }
LAB_01c06e18:
        if (plVar10 != (long *)0x0) {
          *plVar10 = *plVar4;
        }
        *plVar4 = 0;
        plVar4[1] = 0;
        puVar9 = (undefined8 *)plVar7[1];
        plVar7[1] = (long)plVar4;
        *plVar4 = (long)plVar7;
        plVar4[1] = (long)puVar9;
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = plVar4;
        }
      }
    }
  }
  return;
}

