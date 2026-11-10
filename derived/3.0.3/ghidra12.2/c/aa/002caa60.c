
void FUN_002caa60(long *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  
  param_1[2] = 0;
  plVar8 = param_1 + 1;
  *plVar8 = 0;
  FUN_002236b0(plVar8);
  param_1[5] = 0;
  plVar9 = param_1 + 4;
  *plVar9 = 0;
  FUN_002236b0(plVar9);
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  puVar1 = PTR_DAT_04bce268 + 0x10;
  param_1[9] = 0;
  *param_1 = (long)puVar1;
  uVar4 = FUN_0021f454();
  lVar5 = FUN_00285d10(0x2c00,uVar4);
  if (lVar5 == 0) {
    param_1[9] = 0;
    plVar7 = (long *)param_1[2];
  }
  else {
    lVar6 = 0;
    do {
      *(undefined4 *)(lVar5 + lVar6) = 0;
      lVar6 = lVar6 + 4;
    } while (lVar6 != 0x2c00);
    lVar6 = 0;
    lVar11 = 0x40;
    param_1[9] = lVar5;
    param_1[7] = lVar5;
    *(undefined4 *)(param_1 + 8) = 0x40;
    do {
      iVar3 = *(int *)((long)param_1 + 0x34);
      puVar2 = (undefined8 *)(param_1[7] + lVar6);
      *puVar2 = 0;
      puVar2[1] = 0;
      FUN_002236bc(plVar9,plVar9,(long)puVar2 + (long)iVar3);
      lVar11 = lVar11 + -1;
      lVar6 = lVar6 + 0xb0;
    } while (lVar11 != 0);
    plVar7 = (long *)param_1[2];
  }
  while (plVar7 != plVar8) {
    iVar3 = *(int *)((long)param_1 + 0x34);
    plVar10 = (long *)plVar7[1];
    *plVar7 = 0;
    plVar7[1] = 0;
    FUN_002236e0(plVar9,plVar9,(long)iVar3 + (long)plVar7);
    plVar7 = plVar10;
  }
  FUN_002236b0(plVar8);
  return;
}

