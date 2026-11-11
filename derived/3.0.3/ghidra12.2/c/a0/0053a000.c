
void FUN_0053a000(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  *param_1 = &PTR_LAB_048c85e0;
  if (0 < *(int *)(param_1 + 5)) {
    lVar2 = 0;
    do {
      FUN_004435c0(*(undefined8 *)(param_1[4] + lVar2 * 8));
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 5));
  }
  if (0 < *(int *)(param_1 + 0xb)) {
    lVar2 = 0;
    do {
      FUN_004435c0(*(undefined8 *)(param_1[10] + lVar2 * 8));
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0xb));
  }
  if (0 < *(int *)(param_1 + 0xf)) {
    lVar2 = 0;
    do {
      FUN_004435c0(*(undefined8 *)(param_1[0xe] + lVar2 * 8));
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0xf));
  }
  if (0 < *(int *)(param_1 + 0xd)) {
    lVar2 = 0;
    do {
      FUN_004435c0(*(undefined8 *)(param_1[0xc] + lVar2 * 8));
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0xd));
  }
  if (0 < *(int *)(param_1 + 0x11)) {
    lVar2 = 0;
    do {
      FUN_004435c0(*(undefined8 *)(param_1[0x10] + lVar2 * 8));
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x11));
  }
  if (0 < *(int *)(param_1 + 7)) {
    lVar2 = 0;
    do {
      FUN_004435c0(*(undefined8 *)(param_1[6] + lVar2 * 8));
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 7));
  }
  if (0 < *(int *)(param_1 + 9)) {
    lVar2 = 0;
    do {
      FUN_004435c0(*(undefined8 *)(param_1[8] + lVar2 * 8));
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 9));
  }
  puVar1 = PTR_DAT_048607b8;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    FUN_00421f90(puVar1,param_1[0x10],8,*(uint *)((long)param_1 + 0x8c) & 0x3fffffff);
  }
  param_1[0x10] = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x7c)) && (param_1[0xe] != 0)) {
    FUN_00421f90(puVar1,param_1[0xe],8,*(uint *)((long)param_1 + 0x7c) & 0x3fffffff);
  }
  param_1[0xe] = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x6c)) && (param_1[0xc] != 0)) {
    FUN_00421f90(puVar1,param_1[0xc],8,*(uint *)((long)param_1 + 0x6c) & 0x3fffffff);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x5c)) && (param_1[10] != 0)) {
    FUN_00421f90(puVar1,param_1[10],8,*(uint *)((long)param_1 + 0x5c) & 0x3fffffff);
  }
  param_1[10] = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x80000000;
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x4c)) && (param_1[8] != 0)) {
    FUN_00421f90(puVar1,param_1[8],8,*(uint *)((long)param_1 + 0x4c) & 0x3fffffff);
  }
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0x80000000;
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    FUN_00421f90(puVar1,param_1[6],8,*(uint *)((long)param_1 + 0x3c) & 0x3fffffff);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    FUN_00421f90(puVar1,param_1[4],8,*(uint *)((long)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  FUN_0043be10(param_1 + 3);
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

