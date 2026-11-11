
void FUN_004bf5c0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_LAB_048685a8;
  param_1[3] = &PTR_LAB_04868668;
  if (*(int *)(param_1 + 0xe) != 0) {
    plVar4 = (long *)param_1[0xd];
    lVar5 = (long)*(int *)(param_1 + 0xe) << 3;
    do {
      lVar2 = *plVar4;
      if (lVar2 != 0) {
        FUN_004c1e10(lVar2);
        FUN_00438870(lVar2,200);
      }
      plVar4 = plVar4 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  FUN_004bcab0(param_1 + 0x13);
  FUN_0043d280(param_1 + 0x11);
  puVar1 = PTR_DAT_048607b8;
  iVar3 = *(int *)(param_1 + 0x10);
  if (0 < iVar3) {
    lVar5 = param_1[0xf] + (long)iVar3 * 0x10;
    do {
      lVar5 = lVar5 + -0x10;
      FUN_0043be10(lVar5);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x84)) && (param_1[0xf] != 0)) {
    FUN_00421f90(puVar1,param_1[0xf],0x10,*(uint *)((long)param_1 + 0x84) & 0x3fffffff);
  }
  param_1[0xf] = 0;
  *(undefined4 *)((long)param_1 + 0x84) = 0x80000000;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    FUN_00421f90(puVar1,param_1[0xd],8,*(uint *)((long)param_1 + 0x74) & 0x3fffffff);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0x80000000;
  FUN_0043d280(param_1 + 0xb);
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    FUN_00421f90(puVar1,param_1[9],0x10,*(uint *)((long)param_1 + 0x54) & 0x3fffffff);
  }
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  FUN_0043d280(param_1 + 7);
  iVar3 = *(int *)(param_1 + 6);
  if (0 < iVar3) {
    lVar5 = param_1[5] + (long)iVar3 * 0x10;
    do {
      lVar5 = lVar5 + -0x10;
      FUN_0043be10(lVar5);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    FUN_00421f90(puVar1,param_1[5],0x10,*(uint *)((long)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  FUN_0046b6c0(param_1);
  return;
}

