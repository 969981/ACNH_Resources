
void FUN_03612790(undefined8 *param_1)

{
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x4b8));
  nn::os::FinalizeConditionVariable((ConditionVariableType *)((long)param_1 + 0x25b4));
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x2594));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x4b1));
  param_1[0x3e0] = PTR_DAT_04bdf380 + 0x10;
  FUN_04002c24(param_1 + 0x3e0);
  if (param_1[0x2c5] != 0) {
    param_1[0x2c6] = 0;
    (**(code **)(*(long *)param_1[0x2c3] + 0x18))();
    param_1[0x2c5] = 0;
    param_1[0x2c7] = 0;
  }
  FUN_035be6b0(param_1 + 0x87);
  *param_1 = &PTR_LAB_04bb1578;
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03612850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[8] + 0x18))((long *)param_1[8],param_1[9]);
  return;
}

