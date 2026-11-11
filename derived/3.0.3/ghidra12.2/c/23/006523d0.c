
void FUN_006523d0(undefined8 *param_1)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_LAB_048e2948;
  puVar2 = PTR_DAT_048607b8;
  iVar3 = *(int *)(param_1 + 0xc);
  if (0 < iVar3) {
    plVar1 = (long *)(param_1[0xb] + (long)iVar3 * 0x10);
    do {
      plVar5 = plVar1 + -2;
      *(undefined4 *)(plVar1 + -1) = 0;
      if ((-1 < (int)*(uint *)((long)plVar1 + -4)) && (*plVar5 != 0)) {
        FUN_00421f90(puVar2,*plVar5,2,*(uint *)((long)plVar1 + -4) & 0x3fffffff);
      }
      *plVar5 = 0;
      iVar3 = iVar3 + -1;
      *(undefined4 *)((long)plVar1 + -4) = 0x80000000;
      plVar1 = plVar5;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 100)) && (param_1[0xb] != 0)) {
    FUN_00421f90(puVar2,param_1[0xb],0x10,*(uint *)((long)param_1 + 100) & 0x3fffffff);
  }
  iVar3 = *(int *)(param_1 + 10);
  *(undefined4 *)((long)param_1 + 100) = 0x80000000;
  param_1[0xb] = 0;
  if (0 < iVar3) {
    lVar4 = param_1[9] + (long)iVar3 * 8;
    do {
      lVar4 = lVar4 + -8;
      FUN_0043be10(lVar4);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    FUN_00421f90(puVar2,param_1[9],8,*(uint *)((long)param_1 + 0x54) & 0x3fffffff);
  }
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    FUN_00421f90(puVar2,param_1[7],2,*(uint *)((long)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    FUN_00421f90(puVar2,param_1[5],0x40,*(uint *)((long)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    FUN_00421f90(puVar2,param_1[3],0x40,*(uint *)((long)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

