
void FUN_0054ff80(undefined8 *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  
  *param_1 = &PTR_LAB_048df748;
  puVar2 = PTR_DAT_048607b8;
  iVar4 = *(int *)(param_1 + 9);
  if (0 < iVar4) {
    plVar1 = (long *)(param_1[8] + (long)iVar4 * 0x10);
    do {
      plVar5 = plVar1 + -2;
      *(undefined4 *)(plVar1 + -1) = 0;
      if ((-1 < (int)*(uint *)((long)plVar1 + -4)) && (*plVar5 != 0)) {
        FUN_00421f90(puVar2,*plVar5,4,*(uint *)((long)plVar1 + -4) & 0x3fffffff);
      }
      *plVar5 = 0;
      iVar4 = iVar4 + -1;
      *(undefined4 *)((long)plVar1 + -4) = 0x80000000;
      plVar1 = plVar5;
    } while (iVar4 != 0);
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x4c)) && (param_1[8] != 0)) {
    FUN_00421f90(puVar2,param_1[8],0x10,*(uint *)((long)param_1 + 0x4c) & 0x3fffffff);
  }
  iVar4 = *(int *)(param_1 + 7);
  *(undefined4 *)((long)param_1 + 0x4c) = 0x80000000;
  param_1[8] = 0;
  if (0 < iVar4) {
    lVar3 = param_1[6] + (long)iVar4 * 0x28;
    do {
      lVar3 = lVar3 + -0x28;
      FUN_00537690(lVar3);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    FUN_00421f90(puVar2,param_1[6],0x28,*(uint *)((long)param_1 + 0x3c) & 0x3fffffff);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    FUN_00421f90(puVar2,param_1[4],4,*(uint *)((long)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  FUN_0043be10(param_1 + 3);
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

