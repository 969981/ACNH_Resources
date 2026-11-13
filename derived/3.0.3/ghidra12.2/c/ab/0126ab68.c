
void FUN_0126ab68(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  long *plVar13;
  
  param_1[0x46] = 0;
  param_1[0x1f] = param_1 + 0x2c;
  puVar9 = param_1 + 0x12;
  *puVar9 = param_1 + 0x1f;
  *param_1 = &PTR_LAB_04989738;
  param_1[1] = 0;
  puVar11 = param_1 + 5;
  *puVar11 = puVar9;
  param_1[0x2c] = param_1 + 0x39;
  param_1[0x39] = param_1 + 0x46;
  param_1[2] = 0;
  param_1[3] = puVar11;
  param_1[4] = puVar11;
  puVar5 = PTR_DAT_04bbbd90;
  if (param_1 + 0x53 == (undefined8 *)0x0) {
    return;
  }
  param_1[2] = param_1 + 0x53;
  param_1[3] = puVar9;
  puVar6 = PTR_DAT_04bbbd98;
  *(undefined4 *)((long)param_1 + 0xc) = 6;
  puVar3 = PTR_DAT_04bb2018;
  puVar1 = PTR_DAT_04bb2018 + 0x10;
  param_1[5] = puVar5 + 0x10;
  param_1[6] = puVar1;
  puVar8 = PTR_DAT_04bbc5d8;
  param_1[10] = 0;
  param_1[0xb] = puVar1;
  param_1[8] = puVar8 + 0x10;
  param_1[9] = puVar1;
  uVar4 = *(undefined4 *)(puVar6 + 0xc);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(puVar6 + 8);
  *(undefined4 *)((long)param_1 + 0x3c) = uVar4;
  puVar7 = PTR_DAT_04bbc1a0;
  puVar1 = PTR_DAT_04bb2010;
  param_1[0x53] = puVar11;
  param_1[0xc] = 0;
  param_1[0xd] = puVar7 + 0x10;
  param_1[0xe] = puVar1 + 0x10;
  param_1[0xf] = 0;
  param_1[0x10] = puVar1 + 0x10;
  param_1[0x11] = 0;
  iVar10 = *(int *)((long)param_1 + 0xc);
  iVar12 = *(int *)(param_1 + 1) + 1;
  *(int *)(param_1 + 1) = iVar12;
  if (iVar12 < iVar10) {
    plVar13 = (long *)param_1[3];
    if (plVar13 != (long *)0x0) {
      param_1[3] = *plVar13;
    }
    *plVar13 = (long)(puVar5 + 0x10);
    uVar4 = *(undefined4 *)(puVar6 + 0xc);
    *(undefined4 *)(plVar13 + 2) = *(undefined4 *)(puVar6 + 8);
    *(undefined4 *)((long)plVar13 + 0x14) = uVar4;
    puVar2 = puVar3 + 0x10;
    plVar13[1] = (long)puVar2;
    plVar13[3] = (long)(puVar8 + 0x10);
    plVar13[4] = (long)puVar2;
    plVar13[5] = 0;
    plVar13[6] = (long)puVar2;
    plVar13[7] = 0;
    plVar13[8] = (long)(puVar7 + 0x10);
    plVar13[9] = (long)(puVar1 + 0x10);
    plVar13[10] = 0;
    plVar13[0xb] = (long)(puVar1 + 0x10);
    plVar13[0xc] = 0;
    iVar12 = *(int *)(param_1 + 1);
    iVar10 = *(int *)((long)param_1 + 0xc);
    if (iVar12 < iVar10) {
      *(long **)(param_1[2] + (long)iVar12 * 8) = plVar13;
      iVar10 = *(int *)((long)param_1 + 0xc);
      iVar12 = *(int *)(param_1 + 1) + 1;
      *(int *)(param_1 + 1) = iVar12;
    }
  }
  if (iVar12 < iVar10) {
    plVar13 = (long *)param_1[3];
    if (plVar13 != (long *)0x0) {
      param_1[3] = *plVar13;
    }
    *plVar13 = (long)(puVar5 + 0x10);
    uVar4 = *(undefined4 *)(puVar6 + 0xc);
    *(undefined4 *)(plVar13 + 2) = *(undefined4 *)(puVar6 + 8);
    *(undefined4 *)((long)plVar13 + 0x14) = uVar4;
    puVar2 = puVar3 + 0x10;
    plVar13[1] = (long)puVar2;
    plVar13[3] = (long)(puVar8 + 0x10);
    plVar13[4] = (long)puVar2;
    plVar13[5] = 0;
    plVar13[6] = (long)puVar2;
    plVar13[7] = 0;
    plVar13[8] = (long)(puVar7 + 0x10);
    plVar13[9] = (long)(puVar1 + 0x10);
    plVar13[10] = 0;
    plVar13[0xb] = (long)(puVar1 + 0x10);
    plVar13[0xc] = 0;
    iVar12 = *(int *)(param_1 + 1);
    iVar10 = *(int *)((long)param_1 + 0xc);
    if (iVar10 <= iVar12) {
      if (iVar12 < iVar10) goto LAB_0126ad50;
      goto LAB_0126acb8;
    }
    *(long **)(param_1[2] + (long)iVar12 * 8) = plVar13;
    iVar10 = *(int *)((long)param_1 + 0xc);
    iVar12 = *(int *)(param_1 + 1) + 1;
    *(int *)(param_1 + 1) = iVar12;
    if (iVar10 <= iVar12) goto LAB_0126acb8;
LAB_0126ad50:
    plVar13 = (long *)param_1[3];
    if (plVar13 != (long *)0x0) {
      param_1[3] = *plVar13;
    }
    *plVar13 = (long)(puVar5 + 0x10);
    uVar4 = *(undefined4 *)(puVar6 + 0xc);
    *(undefined4 *)(plVar13 + 2) = *(undefined4 *)(puVar6 + 8);
    *(undefined4 *)((long)plVar13 + 0x14) = uVar4;
    puVar2 = puVar3 + 0x10;
    plVar13[1] = (long)puVar2;
    plVar13[3] = (long)(puVar8 + 0x10);
    plVar13[4] = (long)puVar2;
    plVar13[5] = 0;
    plVar13[6] = (long)puVar2;
    plVar13[7] = 0;
    plVar13[8] = (long)(puVar7 + 0x10);
    plVar13[9] = (long)(puVar1 + 0x10);
    plVar13[10] = 0;
    plVar13[0xb] = (long)(puVar1 + 0x10);
    plVar13[0xc] = 0;
    iVar12 = *(int *)(param_1 + 1);
    iVar10 = *(int *)((long)param_1 + 0xc);
    if (iVar12 < iVar10) {
      *(long **)(param_1[2] + (long)iVar12 * 8) = plVar13;
      iVar10 = *(int *)((long)param_1 + 0xc);
      iVar12 = *(int *)(param_1 + 1) + 1;
      *(int *)(param_1 + 1) = iVar12;
      if (iVar10 <= iVar12) goto LAB_0126acc0;
      goto LAB_0126add4;
    }
    if (iVar12 < iVar10) goto LAB_0126add4;
  }
  else {
    if (iVar12 < iVar10) goto LAB_0126ad50;
LAB_0126acb8:
    if (iVar12 < iVar10) {
LAB_0126add4:
      plVar13 = (long *)param_1[3];
      if (plVar13 != (long *)0x0) {
        param_1[3] = *plVar13;
      }
      *plVar13 = (long)(puVar5 + 0x10);
      uVar4 = *(undefined4 *)(puVar6 + 0xc);
      *(undefined4 *)(plVar13 + 2) = *(undefined4 *)(puVar6 + 8);
      *(undefined4 *)((long)plVar13 + 0x14) = uVar4;
      puVar2 = puVar3 + 0x10;
      plVar13[1] = (long)puVar2;
      plVar13[3] = (long)(puVar8 + 0x10);
      plVar13[4] = (long)puVar2;
      plVar13[5] = 0;
      plVar13[6] = (long)puVar2;
      plVar13[7] = 0;
      plVar13[8] = (long)(puVar7 + 0x10);
      plVar13[9] = (long)(puVar1 + 0x10);
      plVar13[10] = 0;
      plVar13[0xb] = (long)(puVar1 + 0x10);
      plVar13[0xc] = 0;
      iVar12 = *(int *)(param_1 + 1);
      if (iVar12 < *(int *)((long)param_1 + 0xc)) {
        *(long **)(param_1[2] + (long)iVar12 * 8) = plVar13;
        iVar12 = *(int *)(param_1 + 1);
        *(int *)(param_1 + 1) = iVar12 + 1;
        if (*(int *)((long)param_1 + 0xc) <= iVar12 + 1) {
          return;
        }
      }
      else if (*(int *)((long)param_1 + 0xc) <= iVar12) {
        return;
      }
      goto LAB_0126ae58;
    }
  }
LAB_0126acc0:
  if (iVar10 <= iVar12) {
    return;
  }
LAB_0126ae58:
  plVar13 = (long *)param_1[3];
  if (plVar13 != (long *)0x0) {
    param_1[3] = *plVar13;
  }
  *plVar13 = (long)(puVar5 + 0x10);
  uVar4 = *(undefined4 *)(puVar6 + 0xc);
  *(undefined4 *)(plVar13 + 2) = *(undefined4 *)(puVar6 + 8);
  *(undefined4 *)((long)plVar13 + 0x14) = uVar4;
  puVar3 = puVar3 + 0x10;
  plVar13[1] = (long)puVar3;
  plVar13[3] = (long)(puVar8 + 0x10);
  plVar13[4] = (long)puVar3;
  plVar13[5] = 0;
  plVar13[6] = (long)puVar3;
  plVar13[7] = 0;
  plVar13[8] = (long)(puVar7 + 0x10);
  plVar13[9] = (long)(puVar1 + 0x10);
  plVar13[10] = 0;
  plVar13[0xb] = (long)(puVar1 + 0x10);
  plVar13[0xc] = 0;
  if (*(int *)(param_1 + 1) < *(int *)((long)param_1 + 0xc)) {
    *(long **)(param_1[2] + (long)*(int *)(param_1 + 1) * 8) = plVar13;
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    return;
  }
  return;
}

