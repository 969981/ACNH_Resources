
void FUN_00673380(undefined8 *param_1)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  
  *param_1 = &PTR_LAB_048eb3c8;
  puVar2 = PTR_DAT_048607b8;
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    FUN_00421f90(puVar2,param_1[9],0x40,*(uint *)((long)param_1 + 0x54) & 0x3fffffff);
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
        FUN_00421f90(puVar2,*plVar4,2,*(uint *)((long)plVar1 + -4) & 0x3fffffff);
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
  if (param_1[6] != 0) {
    FUN_004435c0();
  }
  FUN_0043be10(param_1 + 5);
  FUN_0043be10(param_1 + 4);
  if (param_1[3] != 0) {
    FUN_004435c0();
  }
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

