
void FUN_004848b0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  
  *param_1 = &PTR_LAB_0485b4f8;
  FUN_0043d280(param_1 + 7);
  puVar1 = PTR_DAT_048607b8;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    FUN_00421f90(puVar1,param_1[5],0x10,*(uint *)((long)param_1 + 0x34) & 0x3fffffff);
  }
  iVar3 = *(int *)(param_1 + 4);
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  param_1[5] = 0;
  if (0 < iVar3) {
    lVar2 = param_1[3] + (long)iVar3 * 0x10 + -8;
    do {
      FUN_0043be10(lVar2);
      iVar3 = iVar3 + -1;
      lVar2 = lVar2 + -0x10;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    FUN_00421f90(puVar1,param_1[3],0x10,*(uint *)((long)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

