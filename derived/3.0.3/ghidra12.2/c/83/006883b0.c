
void FUN_006883b0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  
  *param_1 = &PTR_LAB_048f23e0;
  FUN_0043be10(param_1 + 0x11);
  puVar1 = PTR_DAT_048607b8;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x84)) && (param_1[0xf] != 0)) {
    FUN_00421f90(puVar1,param_1[0xf],4,*(uint *)((long)param_1 + 0x84) & 0x3fffffff);
  }
  iVar3 = *(int *)(param_1 + 0xe);
  *(undefined4 *)((long)param_1 + 0x84) = 0x80000000;
  param_1[0xf] = 0;
  if (0 < iVar3) {
    lVar2 = param_1[0xd] + (long)iVar3 * 0x10 + -8;
    do {
      FUN_0043be10(lVar2);
      iVar3 = iVar3 + -1;
      lVar2 = lVar2 + -0x10;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    FUN_00421f90(puVar1,param_1[0xd],0x10,*(uint *)((long)param_1 + 0x74) & 0x3fffffff);
  }
  iVar3 = *(int *)(param_1 + 0xc);
  *(undefined4 *)((long)param_1 + 0x74) = 0x80000000;
  param_1[0xd] = 0;
  if (0 < iVar3) {
    plVar4 = (long *)(param_1[0xb] + (long)iVar3 * 8);
    do {
      plVar4 = plVar4 + -1;
      if (*plVar4 != 0) {
        FUN_004435c0();
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 100)) && (param_1[0xb] != 0)) {
    FUN_00421f90(puVar1,param_1[0xb],8,*(uint *)((long)param_1 + 100) & 0x3fffffff);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((long)param_1 + 100) = 0x80000000;
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    FUN_00421f90(puVar1,param_1[9],0x40,*(uint *)((long)param_1 + 0x54) & 0x3fffffff);
  }
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  if (param_1[8] != 0) {
    FUN_004435c0();
  }
  FUN_0043be10(param_1 + 5);
  FUN_006870f0(param_1);
  return;
}

