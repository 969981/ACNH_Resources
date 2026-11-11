
void FUN_0049ab40(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_048607b8;
  *(undefined4 *)(param_1 + 0x27) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x13c)) && (param_1[0x26] != 0)) {
    FUN_00421f90(puVar1,param_1[0x26],8,*(uint *)((long)param_1 + 0x13c) & 0x3fffffff);
  }
  param_1[0x26] = 0;
  *(undefined4 *)((long)param_1 + 0x13c) = 0x80000000;
  FUN_0043d280(param_1 + 0x23);
  *(undefined4 *)(param_1 + 0x22) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x114)) && (param_1[0x21] != 0)) {
    FUN_00421f90(puVar1,param_1[0x21],0xc,*(uint *)((long)param_1 + 0x114) & 0x3fffffff);
  }
  *(undefined4 *)((long)param_1 + 0x114) = 0x80000000;
  iVar2 = (int)param_1[0x1c];
  param_1[0x21] = 0;
  if (0 < iVar2) {
    plVar4 = (long *)(param_1[0x1b] + (long)iVar2 * 0x18 + -0x10);
    do {
      *(undefined4 *)(plVar4 + 1) = 0;
      if ((-1 < (int)*(uint *)((long)plVar4 + 0xc)) && (*plVar4 != 0)) {
        FUN_00421f90(puVar1,*plVar4,0x10,*(uint *)((long)plVar4 + 0xc) & 0x3fffffff);
      }
      *plVar4 = 0;
      iVar2 = iVar2 + -1;
      *(undefined4 *)((long)plVar4 + 0xc) = 0x80000000;
      plVar4 = plVar4 + -3;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xe4)) && (param_1[0x1b] != 0)) {
    FUN_00421f90(puVar1,param_1[0x1b],0x18,*(uint *)((long)param_1 + 0xe4) & 0x3fffffff);
  }
  iVar2 = (int)param_1[0x1a];
  *(undefined4 *)((long)param_1 + 0xe4) = 0x80000000;
  param_1[0x1b] = 0;
  if (0 < iVar2) {
    lVar3 = param_1[0x19] + (long)iVar2 * 8;
    do {
      lVar3 = lVar3 + -8;
      FUN_0043be10(lVar3);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xd4)) && (param_1[0x19] != 0)) {
    FUN_00421f90(puVar1,param_1[0x19],8,*(uint *)((long)param_1 + 0xd4) & 0x3fffffff);
  }
  param_1[0x19] = 0;
  *(undefined4 *)((long)param_1 + 0xd4) = 0x80000000;
  FUN_0043d280(param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xac)) && (param_1[0x14] != 0)) {
    FUN_00421f90(puVar1,param_1[0x14],8,*(uint *)((long)param_1 + 0xac) & 0x3fffffff);
  }
  iVar2 = (int)param_1[0x13];
  param_1[0x14] = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 0x80000000;
  if (0 < iVar2) {
    lVar3 = param_1[0x12] + (long)iVar2 * 8;
    do {
      lVar3 = lVar3 + -8;
      FUN_0043be10(lVar3);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x9c)) && (param_1[0x12] != 0)) {
    FUN_00421f90(puVar1,param_1[0x12],8,*(uint *)((long)param_1 + 0x9c) & 0x3fffffff);
  }
  param_1[0x12] = 0;
  *(undefined4 *)((long)param_1 + 0x9c) = 0x80000000;
  FUN_0043d280(param_1 + 0xf);
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    FUN_00421f90(puVar1,param_1[0xd],8,*(uint *)((long)param_1 + 0x74) & 0x3fffffff);
  }
  iVar2 = (int)param_1[0xc];
  param_1[0xd] = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0x80000000;
  if (0 < iVar2) {
    lVar3 = param_1[0xb] + (long)iVar2 * 8;
    do {
      lVar3 = lVar3 + -8;
      FUN_0043be10(lVar3);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 100)) && (param_1[0xb] != 0)) {
    FUN_00421f90(puVar1,param_1[0xb],8,*(uint *)((long)param_1 + 100) & 0x3fffffff);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((long)param_1 + 100) = 0x80000000;
  FUN_0043d280(param_1 + 8);
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    FUN_00421f90(puVar1,param_1[6],8,*(uint *)((long)param_1 + 0x3c) & 0x3fffffff);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    FUN_00421f90(puVar1,param_1[3],1,*(uint *)((long)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
    FUN_00421f90(puVar1,*param_1,8,*(uint *)((long)param_1 + 0xc) & 0x3fffffff);
  }
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0x80000000;
  return;
}

