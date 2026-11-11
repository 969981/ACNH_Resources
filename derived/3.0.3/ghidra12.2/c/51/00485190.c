
void FUN_00485190(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  
  *param_1 = &PTR_LAB_0485b4b0;
  puVar1 = PTR_DAT_048607b8;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x104)) && (param_1[0x1f] != 0)) {
    FUN_00421f90(puVar1,param_1[0x1f],4,*(uint *)((long)param_1 + 0x104) & 0x3fffffff);
  }
  iVar2 = *(int *)(param_1 + 0x1e);
  *(undefined4 *)((long)param_1 + 0x104) = 0x80000000;
  param_1[0x1f] = 0;
  if (0 < iVar2) {
    plVar3 = (long *)(param_1[0x1d] + (long)iVar2 * 0x30 + -8);
    do {
      if (*plVar3 != 0) {
        FUN_004435c0();
      }
      iVar2 = iVar2 + -1;
      plVar3 = plVar3 + -6;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xf4)) && (param_1[0x1d] != 0)) {
    FUN_00421f90(puVar1,param_1[0x1d],0x30,*(uint *)((long)param_1 + 0xf4) & 0x3fffffff);
  }
  param_1[0x1d] = 0;
  *(undefined4 *)((long)param_1 + 0xf4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xe4)) && (param_1[0x1b] != 0)) {
    FUN_00421f90(puVar1,param_1[0x1b],4,*(uint *)((long)param_1 + 0xe4) & 0x3fffffff);
  }
  param_1[0x1b] = 0;
  *(undefined4 *)((long)param_1 + 0xe4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xd4)) && (param_1[0x19] != 0)) {
    FUN_00421f90(puVar1,param_1[0x19],4,*(uint *)((long)param_1 + 0xd4) & 0x3fffffff);
  }
  param_1[0x19] = 0;
  *(undefined4 *)((long)param_1 + 0xd4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc4)) && (param_1[0x17] != 0)) {
    FUN_00421f90(puVar1,param_1[0x17],1,*(uint *)((long)param_1 + 0xc4) & 0x3fffffff);
  }
  param_1[0x17] = 0;
  *(undefined4 *)((long)param_1 + 0xc4) = 0x80000000;
  FUN_00484a10(param_1 + 0xe);
  FUN_004848b0(param_1 + 5);
  FUN_0043be10(param_1 + 3);
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

