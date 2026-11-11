
void FUN_00511d80(undefined8 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  param_1[5] = 0;
  param_1[6] = 0x8000000000000000;
  param_1[7] = 0;
  *param_1 = &PTR_LAB_048c7960;
  param_1[1] = 0xffffffff;
  param_1[8] = 0x8000000000000000;
  param_1[9] = 0;
  FUN_0054e190(param_1 + 10);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0x8000000000000000;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x8000000000000000;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x20),true,0);
  *(undefined1 *)((long)param_1 + 0x121) = 0;
  *(undefined1 *)(param_1 + 0x24) = *param_2;
  uVar1 = FUN_00438810(0x28);
  FUN_0053d780();
  param_1[9] = uVar1;
  return;
}

