
void FUN_00651920(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  
  *param_1 = &PTR_LAB_048e51a8;
  puVar1 = PTR_DAT_048607b8;
  iVar3 = *(int *)(param_1 + 0x11);
  if (0 < iVar3) {
    lVar2 = param_1[0x10] + (long)iVar3 * 0x10;
    do {
      lVar2 = lVar2 + -0x10;
      FUN_0043be10(lVar2);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    FUN_00421f90(puVar1,param_1[0x10],0x10,*(uint *)((long)param_1 + 0x8c) & 0x3fffffff);
  }
  iVar3 = *(int *)(param_1 + 0xf);
  *(undefined4 *)((long)param_1 + 0x8c) = 0x80000000;
  param_1[0x10] = 0;
  if (0 < iVar3) {
    plVar4 = (long *)(param_1[0xe] + (long)iVar3 * 0x10);
    do {
      plVar4 = plVar4 + -2;
      if (*plVar4 != 0) {
        FUN_004435c0();
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x7c)) && (param_1[0xe] != 0)) {
    FUN_00421f90(puVar1,param_1[0xe],0x10,*(uint *)((long)param_1 + 0x7c) & 0x3fffffff);
  }
  iVar3 = *(int *)(param_1 + 0xd);
  *(undefined4 *)((long)param_1 + 0x7c) = 0x80000000;
  param_1[0xe] = 0;
  if (0 < iVar3) {
    lVar2 = param_1[0xc] + (long)iVar3 * 8;
    do {
      lVar2 = lVar2 + -8;
      FUN_0043be10(lVar2);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x6c)) && (param_1[0xc] != 0)) {
    FUN_00421f90(puVar1,param_1[0xc],8,*(uint *)((long)param_1 + 0x6c) & 0x3fffffff);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x5c)) && (param_1[10] != 0)) {
    FUN_00421f90(puVar1,param_1[10],4,*(uint *)((long)param_1 + 0x5c) & 0x3fffffff);
  }
  param_1[10] = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x80000000;
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x4c)) && (param_1[8] != 0)) {
    FUN_00421f90(puVar1,param_1[8],0x30,*(uint *)((long)param_1 + 0x4c) & 0x3fffffff);
  }
  iVar3 = *(int *)(param_1 + 7);
  *(undefined4 *)((long)param_1 + 0x4c) = 0x80000000;
  param_1[8] = 0;
  if (0 < iVar3) {
    lVar2 = param_1[6] + (long)iVar3 * 0x10;
    do {
      lVar2 = lVar2 + -0x10;
      FUN_0043be10(lVar2);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    FUN_00421f90(puVar1,param_1[6],0x10,*(uint *)((long)param_1 + 0x3c) & 0x3fffffff);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    FUN_00421f90(puVar1,param_1[4],2,*(uint *)((long)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  FUN_0043be10(param_1 + 3);
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

