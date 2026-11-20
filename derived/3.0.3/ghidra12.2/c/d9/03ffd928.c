
void FUN_03ffd928(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04bb14b8;
  if (param_1[0xb1] != 0) {
    param_1[0xb2] = 0;
    (**(code **)(*(long *)param_1[0xaf] + 0x18))();
    param_1[0xb1] = 0;
    param_1[0xb3] = 0;
  }
  param_1[0xae] = 0;
  param_1[0xad] = 0;
  if (param_1[0xaa] != 0) {
    param_1[0xab] = 0;
    (**(code **)(*(long *)param_1[0xa8] + 0x18))();
    param_1[0xaa] = 0;
    param_1[0xac] = 0;
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xa3));
  (**(code **)(**(long **)PTR_DAT_04bdf328 + 0x18))(*(long **)PTR_DAT_04bdf328,param_1[0x9d]);
  param_1[0x3d] = PTR_DAT_04bdf380 + 0x10;
  FUN_04002c24(param_1 + 0x3d);
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  if (param_1[0x38] != 0) {
    param_1[0x39] = 0;
    (**(code **)(*(long *)param_1[0x36] + 0x18))();
    param_1[0x38] = 0;
    param_1[0x3a] = 0;
  }
  if (*(char *)(param_1 + 0x33) == '\0') {
    return;
  }
  nn::os::DestroySystemEvent((SystemEventType *)(param_1 + 0x2e));
  return;
}

