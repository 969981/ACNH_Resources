
/* WARNING: Removing unreachable block (ram,0x01cab00c) */

void FUN_01caaefc(long *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined *local_40;
  char *pcStack_38;
  
  if (*param_1 == 0) {
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "NetTransportMgr";
    lVar3 = FUN_038c6d48(0x258000,&local_40,param_2,8,0xffffffff,0);
    *param_1 = lVar3;
  }
  lVar3 = (**(code **)(*param_2 + 0x30))(param_2,30000,8);
  param_1[1] = lVar3;
  uVar4 = (**(code **)(*param_2 + 0x30))(param_2,30000,8);
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    puVar5 = malloc(0x20);
  }
  else {
    puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x20,8);
  }
  *puVar5 = uVar4;
  puVar5[1] = 0;
  param_1[0xe] = (long)puVar5;
  puVar5[2] = 0;
  lVar3 = *(long *)PTR_DAT_04bcb7d8;
  *(undefined2 *)((long)puVar5 + 0x1a) = 0;
  local_40 = (undefined *)CONCAT44(local_40._4_4_,1);
  lVar9 = *(long *)(lVar3 + 8);
  lVar3 = *(long *)(lVar3 + 0x70);
  plVar8 = (long *)(lVar3 + 0x3b8);
  iVar2 = *(int *)(lVar3 + 0x3d0);
  if (iVar2 < *(int *)(lVar3 + 0x3d4)) {
    lVar7 = param_1[0x27];
    plVar6 = *(long **)(lVar3 + 0x3c0);
    if (plVar6 != (long *)0x0) {
      *(long *)(lVar3 + 0x3c0) = *plVar6;
    }
    plVar6[2] = 0;
    plVar6[3] = 0;
    puVar1 = PTR_DAT_04bcbbc8 + 0x10;
    plVar6[6] = (long)plVar8;
    *(int *)(plVar6 + 4) = (int)lVar7;
    *plVar6 = (long)puVar1;
    plVar6[1] = 0;
    *(int *)((long)plVar6 + 0x24) = iVar2;
    *(undefined4 *)(plVar6 + 5) = 0x400040;
    *(int *)(lVar3 + 0x3d0) = *(int *)(lVar3 + 0x3d0) + 1;
    lVar3 = FUN_028c13b8(plVar8,*plVar8);
    *plVar8 = lVar3;
    *(undefined8 *)(lVar3 + 0x18) = 1;
  }
  plVar6 = param_1 + 0x13;
  lVar3 = *plVar6;
  plVar8 = (long *)param_1[0x14];
  if ((plVar8 != (long *)0x0 || lVar3 != 0) && (lVar7 = param_1[0x16], lVar7 != 0)) {
    param_1[0x16] = 0;
    if (lVar3 != 0) {
      *(long **)(lVar3 + 8) = plVar8;
      plVar8 = (long *)param_1[0x14];
    }
    if (plVar8 != (long *)0x0) {
      *plVar8 = *plVar6;
    }
    *plVar6 = 0;
    param_1[0x14] = 0;
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  lVar3 = param_1[0x16];
  if (lVar3 != 0) {
    plVar8 = (long *)param_1[0x14];
    param_1[0x16] = 0;
    if (param_1[0x13] != 0) {
      *(long **)(param_1[0x13] + 8) = plVar8;
      plVar8 = (long *)param_1[0x14];
    }
    if (plVar8 != (long *)0x0) {
      *plVar8 = *plVar6;
    }
    *plVar6 = 0;
    param_1[0x14] = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  param_1[0x16] = lVar9 + 0x230;
  lVar3 = *(long *)(lVar9 + 0x230);
  *(long **)(lVar9 + 0x230) = plVar6;
  param_1[0x13] = lVar3;
  param_1[0x14] = lVar9 + 0x230;
  if (lVar3 != 0) {
    *(long **)(lVar3 + 8) = plVar6;
  }
  *(int *)(lVar9 + 0x240) = *(int *)(lVar9 + 0x240) + 1;
  plVar6 = param_1 + 0x1f;
  lVar3 = *plVar6;
  plVar8 = (long *)param_1[0x20];
  if ((plVar8 != (long *)0x0 || lVar3 != 0) && (lVar7 = param_1[0x22], lVar7 != 0)) {
    param_1[0x22] = 0;
    if (lVar3 != 0) {
      *(long **)(lVar3 + 8) = plVar8;
      plVar8 = (long *)param_1[0x20];
    }
    if (plVar8 != (long *)0x0) {
      *plVar8 = *plVar6;
    }
    *plVar6 = 0;
    param_1[0x20] = 0;
    *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
  }
  lVar3 = param_1[0x22];
  if (lVar3 != 0) {
    plVar8 = (long *)param_1[0x20];
    param_1[0x22] = 0;
    if (param_1[0x1f] != 0) {
      *(long **)(param_1[0x1f] + 8) = plVar8;
      plVar8 = (long *)param_1[0x20];
    }
    if (plVar8 != (long *)0x0) {
      *plVar8 = *plVar6;
    }
    *plVar6 = 0;
    param_1[0x20] = 0;
    *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + -1;
  }
  param_1[0x22] = lVar9 + 0x250;
  lVar3 = *(long *)(lVar9 + 0x250);
  *(long **)(lVar9 + 0x250) = plVar6;
  param_1[0x1f] = lVar3;
  param_1[0x20] = lVar9 + 0x250;
  if (lVar3 != 0) {
    *(long **)(lVar3 + 8) = plVar6;
  }
  *(int *)(lVar9 + 0x260) = *(int *)(lVar9 + 0x260) + 1;
  *(undefined8 *)((long)param_1 + 0x13c) = 0;
  *(undefined8 *)((long)param_1 + 0x144) = 0;
  return;
}

