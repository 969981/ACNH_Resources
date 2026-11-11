
void FUN_00522d00(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = &PTR_LAB_048d4d70;
  puVar1 = PTR_DAT_048607b8;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xd4)) && (param_1[0x19] != 0)) {
    FUN_00421f90(puVar1,param_1[0x19],4,*(uint *)((long)param_1 + 0xd4) & 0x3fffffff);
  }
  param_1[0x19] = 0;
  *(undefined4 *)((long)param_1 + 0xd4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc4)) && (param_1[0x17] != 0)) {
    FUN_00421f90(puVar1,param_1[0x17],4,*(uint *)((long)param_1 + 0xc4) & 0x3fffffff);
  }
  param_1[0x17] = 0;
  *(undefined4 *)((long)param_1 + 0xc4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xb4)) && (param_1[0x15] != 0)) {
    FUN_00421f90(puVar1,param_1[0x15],4,*(uint *)((long)param_1 + 0xb4) & 0x3fffffff);
  }
  param_1[0x15] = 0;
  *(undefined4 *)((long)param_1 + 0xb4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xa4)) && (param_1[0x13] != 0)) {
    FUN_00421f90(puVar1,param_1[0x13],2,*(uint *)((long)param_1 + 0xa4) & 0x3fffffff);
  }
  param_1[0x13] = 0;
  *(undefined4 *)((long)param_1 + 0xa4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x94)) && (param_1[0x11] != 0)) {
    FUN_00421f90(puVar1,param_1[0x11],1,*(uint *)((long)param_1 + 0x94) & 0x3fffffff);
  }
  param_1[0x11] = 0;
  *(undefined4 *)((long)param_1 + 0x94) = 0x80000000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x84)) && (param_1[0xf] != 0)) {
    FUN_00421f90(puVar1,param_1[0xf],2,*(uint *)((long)param_1 + 0x84) & 0x3fffffff);
  }
  param_1[0xf] = 0;
  *(undefined4 *)((long)param_1 + 0x84) = 0x80000000;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x74)) && (param_1[0xd] != 0)) {
    FUN_00421f90(puVar1,param_1[0xd],2,*(uint *)((long)param_1 + 0x74) & 0x3fffffff);
  }
  param_1[0xd] = 0;
  *(undefined4 *)((long)param_1 + 0x74) = 0x80000000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 100)) && (param_1[0xb] != 0)) {
    FUN_00421f90(puVar1,param_1[0xb],2,*(uint *)((long)param_1 + 100) & 0x3fffffff);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((long)param_1 + 100) = 0x80000000;
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x54)) && (param_1[9] != 0)) {
    FUN_00421f90(puVar1,param_1[9],6,*(uint *)((long)param_1 + 0x54) & 0x3fffffff);
  }
  param_1[9] = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0x80000000;
  FUN_00522f30(param_1);
  return;
}

