
void FUN_00476620(undefined8 *param_1,undefined8 param_2)

{
  FUN_00421d30();
  *param_1 = &PTR_LAB_048651d8;
  nn::os::InitializeMutex((MutexType *)(param_1 + 1),true,0);
  param_1[9] = 0xffffffffffffffff;
  param_1[10] = 0xffffffffffffffff;
  param_1[0xb] = 0xffffffffffffffff;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = param_2;
  param_1[6] = 0;
  return;
}

