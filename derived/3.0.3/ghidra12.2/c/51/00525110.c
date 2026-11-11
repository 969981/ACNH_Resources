
void FUN_00525110(undefined8 *param_1)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  undefined4 *puVar5;
  
  *param_1 = &PTR_LAB_048d69a0;
  puVar2 = PTR_DAT_048607b8;
  iVar3 = *(int *)(param_1 + 10);
  if (0 < iVar3) {
    plVar1 = (long *)(param_1[9] + (long)iVar3 * 0x10);
    do {
      plVar4 = plVar1 + -2;
      *(undefined4 *)(plVar1 + -1) = 0;
      if ((-1 < (int)*(uint *)((long)plVar1 + -4)) && (*plVar4 != 0)) {
        FUN_00421f90(puVar2,*plVar4,4,*(uint *)((long)plVar1 + -4) & 0x3fffffff);
      }
      *plVar4 = 0;
      iVar3 = iVar3 + -1;
      *(undefined4 *)((long)plVar1 + -4) = 0x80000000;
      plVar1 = plVar4;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    FUN_00421f90(puVar2,param_1[9],0x10,*(uint *)((long)param_1 + 0x54) & 0x3fffffff);
  }
  iVar3 = *(int *)(param_1 + 8);
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  param_1[9] = 0;
  if (0 < iVar3) {
    plVar1 = (long *)(param_1[7] + (long)iVar3 * 0x10);
    do {
      plVar4 = plVar1 + -2;
      *(undefined4 *)(plVar1 + -1) = 0;
      if ((-1 < (int)*(uint *)((long)plVar1 + -4)) && (*plVar4 != 0)) {
        FUN_00421f90(puVar2,*plVar4,4,*(uint *)((long)plVar1 + -4) & 0x3fffffff);
      }
      *plVar4 = 0;
      iVar3 = iVar3 + -1;
      *(undefined4 *)((long)plVar1 + -4) = 0x80000000;
      plVar1 = plVar4;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    FUN_00421f90(puVar2,param_1[7],0x10,*(uint *)((long)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    FUN_00421f90(puVar2,param_1[5],4,*(uint *)((long)param_1 + 0x34) & 0x3fffffff);
  }
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  iVar3 = *(int *)(param_1 + 4);
  param_1[5] = 0;
  if (0 < iVar3) {
    puVar5 = (undefined4 *)(param_1[3] + (long)iVar3 * 0x38 + -0x18);
    do {
      puVar5[4] = 0;
      if ((-1 < (int)puVar5[5]) && (*(long *)(puVar5 + 2) != 0)) {
        FUN_00421f90(puVar2,*(long *)(puVar5 + 2),4,puVar5[5] & 0x3fffffff);
      }
      *(undefined8 *)(puVar5 + 2) = 0;
      puVar5[5] = 0x80000000;
      *puVar5 = 0;
      if ((-1 < (int)puVar5[1]) && (*(long *)(puVar5 + -2) != 0)) {
        FUN_00421f90(puVar2,*(long *)(puVar5 + -2),4,puVar5[1] & 0x3fffffff);
      }
      *(undefined8 *)(puVar5 + -2) = 0;
      puVar5[1] = 0x80000000;
      puVar5[-4] = 0;
      if ((-1 < (int)puVar5[-3]) && (*(long *)(puVar5 + -6) != 0)) {
        FUN_00421f90(puVar2,*(long *)(puVar5 + -6),4,puVar5[-3] & 0x3fffffff);
      }
      *(undefined8 *)(puVar5 + -6) = 0;
      iVar3 = iVar3 + -1;
      puVar5[-3] = 0x80000000;
      puVar5 = puVar5 + -0xe;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    FUN_00421f90(puVar2,param_1[3],0x38,*(uint *)((long)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

