
void FUN_0067b510(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = &PTR_LAB_048e8db0;
  puVar1 = PTR_DAT_048607b8;
  *(undefined4 *)(param_1 + 0x12) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x94)) && (param_1[0x11] != 0)) {
    FUN_00421f90(puVar1,param_1[0x11],4,*(uint *)((long)param_1 + 0x94) & 0x3fffffff);
  }
  param_1[0x11] = 0;
  *(undefined4 *)((long)param_1 + 0x94) = 0x80000000;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x5c)) && (param_1[10] != 0)) {
    FUN_00421f90(puVar1,param_1[10],2,*(uint *)((long)param_1 + 0x5c) & 0x3fffffff);
  }
  param_1[10] = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x80000000;
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x4c)) && (param_1[8] != 0)) {
    FUN_00421f90(puVar1,param_1[8],1,*(uint *)((long)param_1 + 0x4c) & 0x3fffffff);
  }
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0x80000000;
  FUN_006728a0(param_1);
  return;
}

