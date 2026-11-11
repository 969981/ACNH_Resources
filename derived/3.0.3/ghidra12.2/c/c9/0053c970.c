
void FUN_0053c970(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  *param_1 = &PTR_LAB_048d13b0;
  if (0 < *(int *)(param_1 + 0x12)) {
    lVar2 = 0;
    do {
      FUN_004435c0(*(undefined8 *)(param_1[0x11] + lVar2 * 8));
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x12));
  }
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar2 = 0;
    do {
      FUN_004435c0(*(undefined8 *)(param_1[0xf] + lVar2 * 8));
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x10));
  }
  if (0 < *(int *)(param_1 + 0x1b)) {
    lVar2 = 0;
    do {
      FUN_004435c0(*(undefined8 *)(param_1[0x1a] + lVar2 * 8));
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x1b));
  }
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar2 = 0;
    do {
      FUN_004435c0(*(undefined8 *)(param_1[0x1f] + lVar2 * 8));
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x20));
  }
  if (0 < *(int *)(param_1 + 0x14)) {
    lVar2 = 0;
    do {
      FUN_004435c0(*(undefined8 *)(param_1[0x13] + lVar2 * 8));
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x14));
  }
  FUN_0053cd60(param_1 + 0x36);
  puVar1 = PTR_DAT_048607b8;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x1a4)) && (param_1[0x33] != 0)) {
    FUN_00421f90(puVar1,param_1[0x33],8,*(uint *)((long)param_1 + 0x1a4) & 0x3fffffff);
  }
  param_1[0x33] = 0;
  *(undefined4 *)((long)param_1 + 0x1a4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x32) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x194)) && (param_1[0x31] != 0)) {
    FUN_00421f90(puVar1,param_1[0x31],1,*(uint *)((long)param_1 + 0x194) & 0x3fffffff);
  }
  param_1[0x31] = 0;
  *(undefined4 *)((long)param_1 + 0x194) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x17c)) && (param_1[0x2e] != 0)) {
    FUN_00421f90(puVar1,param_1[0x2e],1,*(uint *)((long)param_1 + 0x17c) & 0x3fffffff);
  }
  param_1[0x2e] = 0;
  *(undefined4 *)((long)param_1 + 0x17c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x16c)) && (param_1[0x2c] != 0)) {
    FUN_00421f90(puVar1,param_1[0x2c],2,*(uint *)((long)param_1 + 0x16c) & 0x3fffffff);
  }
  param_1[0x2c] = 0;
  *(undefined4 *)((long)param_1 + 0x16c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x104)) && (param_1[0x1f] != 0)) {
    FUN_00421f90(puVar1,param_1[0x1f],8,*(uint *)((long)param_1 + 0x104) & 0x3fffffff);
  }
  param_1[0x1f] = 0;
  *(undefined4 *)((long)param_1 + 0x104) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xf4)) && (param_1[0x1d] != 0)) {
    FUN_00421f90(puVar1,param_1[0x1d],4,*(uint *)((long)param_1 + 0xf4) & 0x3fffffff);
  }
  param_1[0x1d] = 0;
  *(undefined4 *)((long)param_1 + 0xf4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xdc)) && (param_1[0x1a] != 0)) {
    FUN_00421f90(puVar1,param_1[0x1a],8,*(uint *)((long)param_1 + 0xdc) & 0x3fffffff);
  }
  param_1[0x1a] = 0;
  *(undefined4 *)((long)param_1 + 0xdc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xcc)) && (param_1[0x18] != 0)) {
    FUN_00421f90(puVar1,param_1[0x18],0x40,*(uint *)((long)param_1 + 0xcc) & 0x3fffffff);
  }
  param_1[0x18] = 0;
  *(undefined4 *)((long)param_1 + 0xcc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xbc)) && (param_1[0x16] != 0)) {
    FUN_00421f90(puVar1,param_1[0x16],4,*(uint *)((long)param_1 + 0xbc) & 0x3fffffff);
  }
  param_1[0x16] = 0;
  *(undefined4 *)((long)param_1 + 0xbc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xa4)) && (param_1[0x13] != 0)) {
    FUN_00421f90(puVar1,param_1[0x13],8,*(uint *)((long)param_1 + 0xa4) & 0x3fffffff);
  }
  param_1[0x13] = 0;
  *(undefined4 *)((long)param_1 + 0xa4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x94)) && (param_1[0x11] != 0)) {
    FUN_00421f90(puVar1,param_1[0x11],8,*(uint *)((long)param_1 + 0x94) & 0x3fffffff);
  }
  param_1[0x11] = 0;
  *(undefined4 *)((long)param_1 + 0x94) = 0x80000000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x84)) && (param_1[0xf] != 0)) {
    FUN_00421f90(puVar1,param_1[0xf],8,*(uint *)((long)param_1 + 0x84) & 0x3fffffff);
  }
  param_1[0xf] = 0;
  *(undefined4 *)((long)param_1 + 0x84) = 0x80000000;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    FUN_00421f90(puVar1,param_1[0xd],4,*(uint *)((long)param_1 + 0x74) & 0x3fffffff);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0x80000000;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x5c)) && (param_1[10] != 0)) {
    FUN_00421f90(puVar1,param_1[10],2,*(uint *)((long)param_1 + 0x5c) & 0x3fffffff);
  }
  param_1[10] = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x80000000;
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x4c)) && (param_1[8] != 0)) {
    FUN_00421f90(puVar1,param_1[8],0x10,*(uint *)((long)param_1 + 0x4c) & 0x3fffffff);
  }
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0x80000000;
  FUN_0043be10(param_1 + 3);
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

