
void FUN_002c9a30(long *param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  param_1[2] = 0;
  plVar9 = param_1 + 1;
  *plVar9 = 0;
  FUN_002236b0(plVar9);
  param_1[5] = 0;
  plVar10 = param_1 + 4;
  *plVar10 = 0;
  FUN_002236b0(plVar10);
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  puVar1 = PTR_DAT_04bce250 + 0x10;
  param_1[9] = 0;
  *param_1 = (long)puVar1;
  uVar5 = FUN_0021f454();
  lVar6 = FUN_00285d10(0x3200,uVar5);
  if (lVar6 == 0) {
    param_1[9] = 0;
    plVar8 = (long *)param_1[2];
  }
  else {
    lVar7 = 0;
    do {
      puVar2 = (undefined4 *)(lVar6 + lVar7);
      lVar7 = lVar7 + 5;
      *puVar2 = 0;
      *(undefined1 *)(puVar2 + 1) = 0;
    } while (lVar7 != 0x3200);
    lVar7 = 0;
    lVar12 = 0x40;
    param_1[9] = lVar6;
    param_1[7] = lVar6;
    *(undefined4 *)(param_1 + 8) = 0x40;
    do {
      iVar4 = *(int *)((long)param_1 + 0x34);
      puVar3 = (undefined8 *)(param_1[7] + lVar7);
      *puVar3 = 0;
      puVar3[1] = 0;
      FUN_002236bc(plVar10,plVar10,(long)puVar3 + (long)iVar4);
      lVar12 = lVar12 + -1;
      lVar7 = lVar7 + 200;
    } while (lVar12 != 0);
    plVar8 = (long *)param_1[2];
  }
  while (plVar8 != plVar9) {
    iVar4 = *(int *)((long)param_1 + 0x34);
    plVar11 = (long *)plVar8[1];
    *plVar8 = 0;
    plVar8[1] = 0;
    FUN_002236e0(plVar10,plVar10,(long)iVar4 + (long)plVar8);
    plVar8 = plVar11;
  }
  FUN_002236b0(plVar9);
  return;
}

