
void FUN_004bc890(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = &PTR_FUN_048682c8;
  FUN_00454810(param_1 + 0x19);
  FUN_0043d280(param_1 + 0x16);
  puVar1 = PTR_DAT_048607b8;
  *(undefined4 *)(param_1 + 0x15) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xac)) && (param_1[0x14] != 0)) {
    FUN_00421f90(puVar1,param_1[0x14],0x10,*(uint *)((long)param_1 + 0xac) & 0x3fffffff);
  }
  param_1[0x14] = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 0x80000000;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x9c)) && (param_1[0x12] != 0)) {
    FUN_00421f90(puVar1,param_1[0x12],1,*(uint *)((long)param_1 + 0x9c) & 0x3fffffff);
  }
  param_1[0x12] = 0;
  *(undefined4 *)((long)param_1 + 0x9c) = 0x80000000;
  *param_1 = &PTR_LAB_048679e0;
  FUN_004acce0(param_1 + 0xe);
  *param_1 = &PTR_LAB_04867b98;
  FUN_0043f070(param_1 + 0xb);
  FUN_0043f070(param_1 + 8);
  FUN_0043f070(param_1 + 5);
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    FUN_00421f90(puVar1,param_1[3],0x18,*(uint *)((long)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  FUN_004866e0(param_1);
  return;
}

