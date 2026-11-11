
void FUN_004775f0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  
  lVar2 = param_1[0x12];
  *param_1 = &PTR_LAB_04865308;
  if (lVar2 != 0) {
    FUN_00477070(lVar2);
    FUN_00438870(lVar2,0x70);
  }
  puVar1 = PTR_DAT_048607b8;
  *(undefined4 *)(param_1 + 0x36) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1b4)) && (param_1[0x35] != 0)) {
    FUN_00421f90(puVar1,param_1[0x35],0x10,*(uint *)((long)param_1 + 0x1b4) & 0x3fffffff);
  }
  param_1[0x35] = 0;
  *(undefined4 *)((long)param_1 + 0x1b4) = 0x80000000;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x31));
  FUN_0043d280(param_1 + 0x2f);
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x174)) && (param_1[0x2d] != 0)) {
    FUN_00421f90(puVar1,param_1[0x2d],0x10,*(uint *)((long)param_1 + 0x174) & 0x3fffffff);
  }
  param_1[0x2d] = 0;
  *(undefined4 *)((long)param_1 + 0x174) = 0x80000000;
  FUN_0043d280(param_1 + 0x2b);
  iVar3 = *(int *)(param_1 + 0x2a);
  if (0 < iVar3) {
    plVar4 = (long *)(param_1[0x29] + (long)iVar3 * 0x18 + -0x10);
    do {
      *(undefined4 *)(plVar4 + 1) = 0;
      if ((-1 < (int)*(uint *)((long)plVar4 + 0xc)) && (*plVar4 != 0)) {
        FUN_00421f90(puVar1,*plVar4,8,*(uint *)((long)plVar4 + 0xc) & 0x3fffffff);
      }
      *plVar4 = 0;
      iVar3 = iVar3 + -1;
      *(undefined4 *)((long)plVar4 + 0xc) = 0x80000000;
      plVar4 = plVar4 + -3;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x154)) && (param_1[0x29] != 0)) {
    FUN_00421f90(puVar1,param_1[0x29],0x18,*(uint *)((long)param_1 + 0x154) & 0x3fffffff);
  }
  param_1[0x29] = 0;
  *(undefined4 *)((long)param_1 + 0x154) = 0x80000000;
  FUN_0043d280(param_1 + 0x27);
  iVar3 = *(int *)(param_1 + 0x26);
  if (0 < iVar3) {
    lVar2 = param_1[0x25] + (long)iVar3 * 0x18;
    do {
      lVar2 = lVar2 + -0x18;
      FUN_0043be10(lVar2);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x26) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x134)) && (param_1[0x25] != 0)) {
    FUN_00421f90(puVar1,param_1[0x25],0x18,*(uint *)((long)param_1 + 0x134) & 0x3fffffff);
  }
  param_1[0x25] = 0;
  *(undefined4 *)((long)param_1 + 0x134) = 0x80000000;
  FUN_0043d280(param_1 + 0x23);
  *(undefined4 *)(param_1 + 0x22) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x114)) && (param_1[0x21] != 0)) {
    FUN_00421f90(puVar1,param_1[0x21],0x10,*(uint *)((long)param_1 + 0x114) & 0x3fffffff);
  }
  param_1[0x21] = 0;
  *(undefined4 *)((long)param_1 + 0x114) = 0x80000000;
  FUN_0043d280(param_1 + 0x1f);
  iVar3 = *(int *)(param_1 + 0x1e);
  if (0 < iVar3) {
    lVar2 = param_1[0x1d] + (long)iVar3 * 0x10;
    do {
      lVar2 = lVar2 + -0x10;
      FUN_0043be10(lVar2);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xf4)) && (param_1[0x1d] != 0)) {
    FUN_00421f90(puVar1,param_1[0x1d],0x10,*(uint *)((long)param_1 + 0xf4) & 0x3fffffff);
  }
  param_1[0x1d] = 0;
  *(undefined4 *)((long)param_1 + 0xf4) = 0x80000000;
  FUN_0043d280(param_1 + 0x1b);
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xd4)) && (param_1[0x19] != 0)) {
    FUN_00421f90(puVar1,param_1[0x19],0x10,*(uint *)((long)param_1 + 0xd4) & 0x3fffffff);
  }
  param_1[0x19] = 0;
  *(undefined4 *)((long)param_1 + 0xd4) = 0x80000000;
  FUN_0043d280(param_1 + 0x17);
  *(undefined4 *)(param_1 + 0x16) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xb4)) && (param_1[0x15] != 0)) {
    FUN_00421f90(puVar1,param_1[0x15],0x10,*(uint *)((long)param_1 + 0xb4) & 0x3fffffff);
  }
  param_1[0x15] = 0;
  *(undefined4 *)((long)param_1 + 0xb4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xa4)) && (param_1[0x13] != 0)) {
    FUN_00421f90(puVar1,param_1[0x13],8,*(uint *)((long)param_1 + 0xa4) & 0x3fffffff);
  }
  param_1[0x13] = 0;
  *(undefined4 *)((long)param_1 + 0xa4) = 0x80000000;
  FUN_0047db80(param_1 + 3);
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

