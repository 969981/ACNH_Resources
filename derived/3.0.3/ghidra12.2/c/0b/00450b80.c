
void FUN_00450b80(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  
  *param_1 = &PTR_LAB_04861938;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x18));
  FUN_0043d280(param_1 + 0x16);
  puVar1 = PTR_DAT_048607b8;
  iVar2 = *(int *)(param_1 + 0x15);
  if (0 < iVar2) {
    plVar3 = (long *)(param_1[0x14] + (long)iVar2 * 0x18 + -0x10);
    do {
      *(undefined4 *)(plVar3 + 1) = 0;
      if ((-1 < (int)*(uint *)((long)plVar3 + 0xc)) && (*plVar3 != 0)) {
        FUN_00421f90(puVar1,*plVar3,8,*(uint *)((long)plVar3 + 0xc) & 0x3fffffff);
      }
      *plVar3 = 0;
      iVar2 = iVar2 + -1;
      *(undefined4 *)((long)plVar3 + 0xc) = 0x80000000;
      plVar3 = plVar3 + -3;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xac)) && (param_1[0x14] != 0)) {
    FUN_00421f90(puVar1,param_1[0x14],0x18,*(uint *)((long)param_1 + 0xac) & 0x3fffffff);
  }
  param_1[0x14] = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 0x80000000;
  FUN_004516b0(param_1 + 0x10);
  FUN_00451010(param_1 + 0xb);
  FUN_0043d280(param_1 + 9);
  iVar2 = *(int *)(param_1 + 8);
  if (0 < iVar2) {
    plVar3 = (long *)(param_1[7] + (long)iVar2 * 0x18 + -0x10);
    do {
      *(undefined4 *)(plVar3 + 1) = 0;
      if ((-1 < (int)*(uint *)((long)plVar3 + 0xc)) && (*plVar3 != 0)) {
        FUN_00421f90(puVar1,*plVar3,0x10,*(uint *)((long)plVar3 + 0xc) & 0x3fffffff);
      }
      *plVar3 = 0;
      iVar2 = iVar2 + -1;
      *(undefined4 *)((long)plVar3 + 0xc) = 0x80000000;
      plVar3 = plVar3 + -3;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    FUN_00421f90(puVar1,param_1[7],0x18,*(uint *)((long)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  FUN_0043d280(param_1 + 5);
  iVar2 = *(int *)(param_1 + 4);
  if (0 < iVar2) {
    plVar3 = (long *)(param_1[3] + (long)iVar2 * 0x18 + -0x10);
    do {
      *(undefined4 *)(plVar3 + 1) = 0;
      if ((-1 < (int)*(uint *)((long)plVar3 + 0xc)) && (*plVar3 != 0)) {
        FUN_00421f90(puVar1,*plVar3,0x10,*(uint *)((long)plVar3 + 0xc) & 0x3fffffff);
      }
      *plVar3 = 0;
      iVar2 = iVar2 + -1;
      *(undefined4 *)((long)plVar3 + 0xc) = 0x80000000;
      plVar3 = plVar3 + -3;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    FUN_00421f90(puVar1,param_1[3],0x18,*(uint *)((long)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

