
void FUN_005a4a10(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = &PTR_LAB_048d6468;
  puVar1 = PTR_DAT_048607b8;
  *(undefined4 *)(param_1 + 0x26) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x134)) && (param_1[0x25] != 0)) {
    FUN_00421f90(puVar1,param_1[0x25],0x100,*(uint *)((long)param_1 + 0x134) & 0x3fffffff);
  }
  param_1[0x25] = 0;
  *(undefined4 *)((long)param_1 + 0x134) = 0x80000000;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x124)) && (param_1[0x23] != 0)) {
    FUN_00421f90(puVar1,param_1[0x23],0x80,*(uint *)((long)param_1 + 0x124) & 0x3fffffff);
  }
  param_1[0x23] = 0;
  *(undefined4 *)((long)param_1 + 0x124) = 0x80000000;
  FUN_00641070(param_1);
  return;
}

