
void FUN_002b82fc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
    FUN_00285e00(lVar1);
    FUN_00285dc0(lVar1);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  FUN_0022b830(param_1 + 0x88);
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x58));
  return;
}

