
void FUN_03fff7e0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_LAB_04bb14d8;
  param_1[1] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar2 = DAT_05b059a0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x19] = 0;
  param_1[2] = 0;
  param_1[3] = 1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[4] = uVar2;
  param_1[5] = 1;
  param_1[0xc] = uVar2;
  param_1[0xd] = 8;
  param_1[10] = 0;
  param_1[0xb] = 1;
  puVar1 = PTR_DAT_04bdf380 + 0x10;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x1b] = puVar1;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x68),true,0);
  uVar2 = DAT_05b059a0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x6c] = uVar2;
  param_1[0x71] = uVar2;
  nn::os::InitializeConditionVariable((ConditionVariableType *)(param_1 + 0x76));
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  return;
}

