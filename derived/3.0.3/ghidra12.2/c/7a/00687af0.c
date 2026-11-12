
void FUN_00687af0(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  
  *param_1 = &PTR_LAB_048f2980;
  puVar1 = PTR_DAT_048607b8;
  iVar2 = *(int *)(param_1 + 0x1a);
  if (0 < iVar2) {
    plVar3 = (long *)(param_1[0x19] + (long)iVar2 * 8);
    do {
      plVar3 = plVar3 + -1;
      if (*plVar3 != 0) {
        FUN_004435c0();
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xd4)) && (param_1[0x19] != 0)) {
    FUN_00421f90(puVar1,param_1[0x19],8,*(uint *)((long)param_1 + 0xd4) & 0x3fffffff);
  }
  iVar2 = *(int *)(param_1 + 0x18);
  *(undefined4 *)((long)param_1 + 0xd4) = 0x80000000;
  param_1[0x19] = 0;
  if (0 < iVar2) {
    plVar3 = (long *)(param_1[0x17] + (long)iVar2 * 8);
    do {
      plVar3 = plVar3 + -1;
      if (*plVar3 != 0) {
        FUN_004435c0();
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc4)) && (param_1[0x17] != 0)) {
    FUN_00421f90(puVar1,param_1[0x17],8,*(uint *)((long)param_1 + 0xc4) & 0x3fffffff);
  }
  iVar2 = *(int *)(param_1 + 0x16);
  *(undefined4 *)((long)param_1 + 0xc4) = 0x80000000;
  param_1[0x17] = 0;
  if (0 < iVar2) {
    plVar3 = (long *)(param_1[0x15] + (long)iVar2 * 8);
    do {
      plVar3 = plVar3 + -1;
      if (*plVar3 != 0) {
        FUN_004435c0();
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x16) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xb4)) && (param_1[0x15] != 0)) {
    FUN_00421f90(puVar1,param_1[0x15],8,*(uint *)((long)param_1 + 0xb4) & 0x3fffffff);
  }
  iVar2 = *(int *)(param_1 + 0x14);
  *(undefined4 *)((long)param_1 + 0xb4) = 0x80000000;
  param_1[0x15] = 0;
  if (0 < iVar2) {
    plVar3 = (long *)(param_1[0x13] + (long)iVar2 * 8);
    do {
      plVar3 = plVar3 + -1;
      if (*plVar3 != 0) {
        FUN_004435c0();
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xa4)) && (param_1[0x13] != 0)) {
    FUN_00421f90(puVar1,param_1[0x13],8,*(uint *)((long)param_1 + 0xa4) & 0x3fffffff);
  }
  iVar2 = *(int *)(param_1 + 0x12);
  *(undefined4 *)((long)param_1 + 0xa4) = 0x80000000;
  param_1[0x13] = 0;
  if (0 < iVar2) {
    plVar3 = (long *)(param_1[0x11] + (long)iVar2 * 8);
    do {
      plVar3 = plVar3 + -1;
      if (*plVar3 != 0) {
        FUN_004435c0();
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x94)) && (param_1[0x11] != 0)) {
    FUN_00421f90(puVar1,param_1[0x11],8,*(uint *)((long)param_1 + 0x94) & 0x3fffffff);
  }
  iVar2 = *(int *)(param_1 + 0x10);
  *(undefined4 *)((long)param_1 + 0x94) = 0x80000000;
  param_1[0x11] = 0;
  if (0 < iVar2) {
    plVar3 = (long *)(param_1[0xf] + (long)iVar2 * 8);
    do {
      plVar3 = plVar3 + -1;
      if (*plVar3 != 0) {
        FUN_004435c0();
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x84)) && (param_1[0xf] != 0)) {
    FUN_00421f90(puVar1,param_1[0xf],8,*(uint *)((long)param_1 + 0x84) & 0x3fffffff);
  }
  iVar2 = *(int *)(param_1 + 0xe);
  *(undefined4 *)((long)param_1 + 0x84) = 0x80000000;
  param_1[0xf] = 0;
  if (0 < iVar2) {
    plVar3 = (long *)(param_1[0xd] + (long)iVar2 * 8);
    do {
      plVar3 = plVar3 + -1;
      if (*plVar3 != 0) {
        FUN_004435c0();
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    FUN_00421f90(puVar1,param_1[0xd],8,*(uint *)((long)param_1 + 0x74) & 0x3fffffff);
  }
  iVar2 = *(int *)(param_1 + 0xc);
  *(undefined4 *)((long)param_1 + 0x74) = 0x80000000;
  param_1[0xd] = 0;
  if (0 < iVar2) {
    plVar3 = (long *)(param_1[0xb] + (long)iVar2 * 8);
    do {
      plVar3 = plVar3 + -1;
      if (*plVar3 != 0) {
        FUN_004435c0();
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 100)) && (param_1[0xb] != 0)) {
    FUN_00421f90(puVar1,param_1[0xb],8,*(uint *)((long)param_1 + 100) & 0x3fffffff);
  }
  iVar2 = *(int *)(param_1 + 10);
  *(undefined4 *)((long)param_1 + 100) = 0x80000000;
  param_1[0xb] = 0;
  if (0 < iVar2) {
    plVar3 = (long *)(param_1[9] + (long)iVar2 * 8);
    do {
      plVar3 = plVar3 + -1;
      if (*plVar3 != 0) {
        FUN_004435c0();
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    FUN_00421f90(puVar1,param_1[9],8,*(uint *)((long)param_1 + 0x54) & 0x3fffffff);
  }
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  if (param_1[8] != 0) {
    FUN_004435c0();
  }
  FUN_00688130(param_1 + 5);
  FUN_0043be10(param_1 + 4);
  FUN_0043be10(param_1 + 3);
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

