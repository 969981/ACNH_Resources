
void FUN_00686e70(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  
  *param_1 = &PTR_LAB_048f2500;
  puVar1 = PTR_DAT_048607b8;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xd4)) && (param_1[0x19] != 0)) {
    FUN_00421f90(puVar1,param_1[0x19],8,*(uint *)((long)param_1 + 0xd4) & 0x3fffffff);
  }
  param_1[0x19] = 0;
  *(undefined4 *)((long)param_1 + 0xd4) = 0x80000000;
  if (param_1[0x12] != 0) {
    FUN_004435c0();
  }
  iVar2 = *(int *)(param_1 + 0x11);
  if (0 < iVar2) {
    plVar3 = (long *)(param_1[0x10] + (long)iVar2 * 8);
    do {
      plVar3 = plVar3 + -1;
      if (*plVar3 != 0) {
        FUN_004435c0();
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    FUN_00421f90(puVar1,param_1[0x10],8,*(uint *)((long)param_1 + 0x8c) & 0x3fffffff);
  }
  iVar2 = *(int *)(param_1 + 7);
  *(undefined4 *)((long)param_1 + 0x8c) = 0x80000000;
  param_1[0x10] = 0;
  if (0 < iVar2) {
    plVar3 = (long *)(param_1[6] + (long)iVar2 * 0x10);
    do {
      plVar3 = plVar3 + -2;
      if (*plVar3 != 0) {
        FUN_004435c0();
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    FUN_00421f90(puVar1,param_1[6],0x10,*(uint *)((long)param_1 + 0x3c) & 0x3fffffff);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  FUN_0043be10(param_1 + 5);
  FUN_006870f0(param_1);
  return;
}

