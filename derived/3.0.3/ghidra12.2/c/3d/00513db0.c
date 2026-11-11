
void FUN_00513db0(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_LAB_048d51b8;
  FUN_004435c0(param_1[3]);
  iVar2 = *(int *)(param_1 + 5);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      if (*(long *)(param_1[4] + lVar3 * 8) != 0) {
        FUN_004435c0();
        iVar2 = *(int *)(param_1 + 5);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  iVar2 = *(int *)(param_1 + 9);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      if (*(long *)(param_1[8] + lVar3 * 8) != 0) {
        FUN_004435c0();
        iVar2 = *(int *)(param_1 + 9);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  if (0 < *(int *)(param_1 + 0xe)) {
    lVar3 = 0;
    do {
      FUN_004435c0(*(undefined8 *)(param_1[0xd] + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0xe));
  }
  iVar2 = *(int *)(param_1 + 7);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      if (*(long *)(param_1[6] + lVar3 * 8) != 0) {
        FUN_004435c0();
        iVar2 = *(int *)(param_1 + 7);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar3 = 0;
    lVar4 = 8;
    do {
      FUN_004435c0(*(undefined8 *)(param_1[0xf] + lVar4));
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x10;
    } while (lVar3 < *(int *)(param_1 + 0x10));
  }
  if (0 < *(int *)(param_1 + 0x12)) {
    lVar3 = 0;
    lVar4 = 8;
    do {
      FUN_004435c0(*(undefined8 *)(param_1[0x11] + lVar4));
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x10;
    } while (lVar3 < *(int *)(param_1 + 0x12));
  }
  FUN_00514050(param_1 + 0x13);
  puVar1 = PTR_DAT_048607b8;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x94)) && (param_1[0x11] != 0)) {
    FUN_00421f90(puVar1,param_1[0x11],0x10,*(uint *)((long)param_1 + 0x94) & 0x3fffffff);
  }
  param_1[0x11] = 0;
  *(undefined4 *)((long)param_1 + 0x94) = 0x80000000;
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
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x4c)) && (param_1[8] != 0)) {
    FUN_00421f90(puVar1,param_1[8],8,*(uint *)((long)param_1 + 0x4c) & 0x3fffffff);
  }
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0x80000000;
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    FUN_00421f90(puVar1,param_1[6],8,*(uint *)((long)param_1 + 0x3c) & 0x3fffffff);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    FUN_00421f90(puVar1,param_1[4],8,*(uint *)((long)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

