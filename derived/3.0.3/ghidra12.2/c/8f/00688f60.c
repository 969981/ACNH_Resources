
void FUN_00688f60(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  
  *param_1 = &PTR_LAB_048f28a8;
  puVar1 = PTR_DAT_048607b8;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x84)) && (param_1[0xf] != 0)) {
    FUN_00421f90(puVar1,param_1[0xf],0x50,*(uint *)((long)param_1 + 0x84) & 0x3fffffff);
  }
  iVar2 = *(int *)(param_1 + 0xe);
  *(undefined4 *)((long)param_1 + 0x84) = 0x80000000;
  param_1[0xf] = 0;
  if (0 < iVar2) {
    plVar3 = (long *)(param_1[0xd] + (long)iVar2 * 0x10);
    do {
      plVar4 = plVar3 + -2;
      *(undefined4 *)(plVar3 + -1) = 0;
      if ((-1 < (int)*(uint *)((long)plVar3 + -4)) && (*plVar4 != 0)) {
        FUN_00421f90(puVar1,*plVar4,2,*(uint *)((long)plVar3 + -4) & 0x3fffffff);
      }
      *plVar4 = 0;
      iVar2 = iVar2 + -1;
      *(undefined4 *)((long)plVar3 + -4) = 0x80000000;
      plVar3 = plVar4;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    FUN_00421f90(puVar1,param_1[0xd],0x10,*(uint *)((long)param_1 + 0x74) & 0x3fffffff);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0x80000000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 100)) && (param_1[0xb] != 0)) {
    FUN_00421f90(puVar1,param_1[0xb],4,*(uint *)((long)param_1 + 100) & 0x3fffffff);
  }
  *(undefined4 *)((long)param_1 + 100) = 0x80000000;
  iVar2 = *(int *)(param_1 + 10);
  param_1[0xb] = 0;
  if (0 < iVar2) {
    plVar3 = (long *)(param_1[9] + (long)iVar2 * 8);
    do {
      plVar3 = plVar3 + -1;
      if (*plVar3 != 0) {
        FUN_004435c0();
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    FUN_00421f90(puVar1,param_1[9],8,*(uint *)((long)param_1 + 0x54) & 0x3fffffff);
  }
  iVar2 = *(int *)(param_1 + 8);
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  param_1[9] = 0;
  if (0 < iVar2) {
    plVar3 = (long *)(param_1[7] + (long)iVar2 * 8);
    do {
      plVar3 = plVar3 + -1;
      if (*plVar3 != 0) {
        FUN_004435c0();
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    FUN_00421f90(puVar1,param_1[7],8,*(uint *)((long)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  if (param_1[6] != 0) {
    FUN_004435c0();
  }
  iVar2 = *(int *)(param_1 + 5);
  if (0 < iVar2) {
    plVar3 = (long *)(param_1[4] + (long)iVar2 * 8);
    do {
      plVar3 = plVar3 + -1;
      if (*plVar3 != 0) {
        FUN_004435c0();
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    FUN_00421f90(puVar1,param_1[4],8,*(uint *)((long)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  if (param_1[3] != 0) {
    FUN_004435c0();
  }
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

