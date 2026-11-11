
void FUN_0046fd50(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = &PTR_LAB_04864c80;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 10));
  puVar1 = PTR_DAT_048607b8;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    FUN_00421f90(puVar1,param_1[5],4,*(uint *)((long)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  FUN_00470a90(param_1 + 3,puVar1);
  FUN_00470430(param_1 + 3);
  FUN_00442660(param_1);
  return;
}

