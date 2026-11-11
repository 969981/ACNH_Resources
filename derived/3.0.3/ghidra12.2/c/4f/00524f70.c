
void FUN_00524f70(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  
  *param_1 = &PTR_LAB_048d59f0;
  puVar1 = PTR_DAT_048607b8;
  iVar2 = *(int *)(param_1 + 6);
  if (0 < iVar2) {
    plVar3 = (long *)(param_1[5] + (long)iVar2 * 8);
    do {
      plVar3 = plVar3 + -1;
      if (*plVar3 != 0) {
        FUN_004435c0();
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    FUN_00421f90(puVar1,param_1[5],8,*(uint *)((long)param_1 + 0x34) & 0x3fffffff);
  }
  iVar2 = *(int *)(param_1 + 4);
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  param_1[5] = 0;
  if (0 < iVar2) {
    plVar3 = (long *)(param_1[3] + (long)iVar2 * 8);
    do {
      plVar3 = plVar3 + -1;
      if (*plVar3 != 0) {
        FUN_004435c0();
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    FUN_00421f90(puVar1,param_1[3],8,*(uint *)((long)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

