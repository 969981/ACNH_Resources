
void FUN_0059c6c0(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = &PTR_LAB_048d5cb0;
  puVar1 = PTR_DAT_048607b8;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xdc)) && (param_1[0x1a] != 0)) {
    FUN_00421f90(puVar1,param_1[0x1a],0x100,*(uint *)((long)param_1 + 0xdc) & 0x3fffffff);
  }
  param_1[0x1a] = 0;
  *(undefined4 *)((long)param_1 + 0xdc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x19) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xcc)) && (param_1[0x18] != 0)) {
    FUN_00421f90(puVar1,param_1[0x18],0x100,*(uint *)((long)param_1 + 0xcc) & 0x3fffffff);
  }
  param_1[0x18] = 0;
  *(undefined4 *)((long)param_1 + 0xcc) = 0x80000000;
  FUN_006406c0(param_1);
  return;
}

