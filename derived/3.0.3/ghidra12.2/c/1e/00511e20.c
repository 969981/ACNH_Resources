
void FUN_00511e20(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  *param_1 = &PTR_LAB_048c7960;
  FUN_005120d0(param_1 + 0x1a,param_1);
  if (0 < *(int *)(param_1 + 4)) {
    lVar2 = 0;
    do {
      lVar3 = lVar2 * 8;
      FUN_004468f0(*(long *)(param_1[3] + lVar3) + 0x98,param_1);
      FUN_004468f0(*(long *)(param_1[3] + lVar3) + 0xa0,param_1);
      FUN_004468f0(*(long *)(param_1[3] + lVar3) + 0x100,param_1);
      FUN_004468f0(*(long *)(param_1[3] + lVar3) + 0xd0,param_1);
      FUN_004468f0(*(long *)(param_1[3] + lVar3) + 0x110,param_1);
      FUN_004468f0(*(long *)(param_1[3] + lVar3) + 200,param_1);
      FUN_004468f0(*(long *)(param_1[3] + lVar3) + 0x120,param_1);
      FUN_004435c0(*(undefined8 *)(param_1[3] + lVar3));
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 4));
  }
  if (0 < *(int *)(param_1 + 6)) {
    lVar2 = 0;
    do {
      FUN_004435c0(*(undefined8 *)(param_1[5] + lVar2 * 8));
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 6));
  }
  if (0 < *(int *)(param_1 + 8)) {
    lVar2 = 0;
    do {
      FUN_004435c0(*(undefined8 *)(param_1[7] + lVar2 * 8));
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 8));
  }
  if (param_1[9] != 0) {
    FUN_004435c0();
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x20));
  puVar1 = PTR_DAT_048607b8;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xfc)) && (param_1[0x1e] != 0)) {
    FUN_00421f90(puVar1,param_1[0x1e],1,*(uint *)((long)param_1 + 0xfc) & 0x3fffffff);
  }
  param_1[0x1e] = 0;
  *(undefined4 *)((long)param_1 + 0xfc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xec)) && (param_1[0x1c] != 0)) {
    FUN_00421f90(puVar1,param_1[0x1c],8,*(uint *)((long)param_1 + 0xec) & 0x3fffffff);
  }
  param_1[0x1c] = 0;
  *(undefined4 *)((long)param_1 + 0xec) = 0x80000000;
  FUN_00446a70(param_1 + 0x1a);
  FUN_00446a70(param_1 + 0x19);
  FUN_00446a70(param_1 + 0x18);
  FUN_00446a70(param_1 + 0x17);
  FUN_00446a70(param_1 + 0x16);
  FUN_00446a70(param_1 + 0x15);
  FUN_00446a70(param_1 + 0x14);
  FUN_0054e1b0(param_1 + 10);
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    FUN_00421f90(puVar1,param_1[7],8,*(uint *)((long)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    FUN_00421f90(puVar1,param_1[5],8,*(uint *)((long)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    FUN_00421f90(puVar1,param_1[3],8,*(uint *)((long)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

