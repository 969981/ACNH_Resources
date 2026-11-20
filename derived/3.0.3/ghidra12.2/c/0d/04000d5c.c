
void FUN_04000d5c(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_04bb1630;
  if (param_1[0x4b] != 0) {
    param_1[0x4c] = 0;
    (**(code **)(*(long *)param_1[0x49] + 0x18))();
    param_1[0x4b] = 0;
    param_1[0x4d] = 0;
  }
  if (param_1[0x46] != 0) {
    param_1[0x47] = 0;
    (**(code **)(*(long *)param_1[0x44] + 0x18))();
    param_1[0x46] = 0;
    param_1[0x48] = 0;
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x19));
  if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
    (**(code **)(*(long *)param_1[0xd] + 0x18))((long *)param_1[0xd],param_1[0xe]);
  }
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x04000e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[8] + 0x18))((long *)param_1[8],param_1[9]);
  return;
}

