
void FUN_03602cd4(undefined8 *param_1)

{
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x18b));
  nn::os::FinalizeLightEvent((LightEventType *)(param_1 + 0x187));
  param_1[0x13a] = PTR_DAT_04bdf380 + 0x10;
  FUN_04002c24(param_1 + 0x13a);
  *param_1 = &PTR_LAB_04bb1578;
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03602d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[8] + 0x18))((long *)param_1[8],param_1[9]);
  return;
}

