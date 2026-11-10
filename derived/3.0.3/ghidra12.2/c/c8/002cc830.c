
void FUN_002cc830(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  
  puVar2 = PTR_DAT_04bce998;
  plVar5 = (long *)param_1[1];
  param_1[7] = 0;
  param_1[8] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  if (plVar5 == (long *)0x0) goto LAB_002cc924;
  if (plVar5[2] == 0) {
LAB_002cc8c0:
    if (plVar5[2] != 0) {
      lVar7 = *plVar5;
      plVar3 = (long *)plVar5[1];
      plVar5[2] = 0;
      lVar4 = *plVar3;
      *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar7 + 8);
      **(long **)(lVar7 + 8) = lVar4;
      while (plVar3 != plVar5) {
        plVar8 = (long *)plVar3[1];
        (**(code **)plVar3[2])();
        FUN_00187e4c(plVar3);
        plVar3 = plVar8;
      }
    }
    FUN_00285dc0(plVar5);
  }
  else {
    lVar7 = *plVar5;
    plVar3 = (long *)plVar5[1];
    plVar5[2] = 0;
    lVar4 = *plVar3;
    *(undefined8 *)(lVar4 + 8) = *(undefined8 *)(lVar7 + 8);
    **(long **)(lVar7 + 8) = lVar4;
    if (plVar3 == plVar5) goto LAB_002cc8c0;
    do {
      plVar8 = (long *)plVar3[1];
      (**(code **)plVar3[2])();
      FUN_00187e4c(plVar3);
      plVar3 = plVar8;
    } while (plVar8 != plVar5);
    plVar5 = (long *)param_1[1];
    if (plVar5 != (long *)0x0) goto LAB_002cc8c0;
  }
  param_1[1] = 0;
LAB_002cc924:
  puVar6 = (undefined8 *)param_1[2];
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
    FUN_00285dc0(puVar6);
    param_1[2] = 0;
  }
  puVar6 = (undefined8 *)param_1[3];
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
    FUN_00285dc0(puVar6);
    param_1[3] = 0;
  }
  puVar6 = (undefined8 *)param_1[4];
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
    FUN_00285dc0(puVar6);
    param_1[4] = 0;
  }
  lVar7 = param_1[10];
  if (lVar7 != 0) {
    *(undefined **)(lVar7 + 0x10) = PTR_DAT_04bc0ec8 + 0x10;
    FUN_0018b1a0();
    FUN_00285dc0(lVar7);
    param_1[10] = 0;
  }
  puVar6 = (undefined8 *)param_1[9];
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
    FUN_00285dc0(puVar6);
    param_1[9] = 0;
  }
  plVar5 = param_1 + 0x13;
  if ((long *)param_1[0x14] != plVar5) {
    plVar3 = (long *)param_1[0x14];
    do {
      iVar1 = *(int *)((long)param_1 + 0xc4);
      plVar8 = (long *)plVar3[1];
      *plVar3 = 0;
      plVar3[1] = 0;
      FUN_002236e0(param_1 + 0x16,param_1 + 0x16,(long)iVar1 + (long)plVar3);
      plVar3 = plVar8;
    } while (plVar8 != plVar5);
  }
  FUN_002236b0(plVar5);
  FUN_0021f584(param_1 + 0xb);
  FUN_001abfe8(param_1 + 5);
  return;
}

