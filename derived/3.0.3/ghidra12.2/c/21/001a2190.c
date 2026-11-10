
undefined8 FUN_001a2190(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_04bcbd28 == '\0') &&
     (uVar1 = nn::os::TryLockMutex((MutexType *)(param_1 + 0x18)), (uVar1 & 1) == 0)) {
    return 0;
  }
  uVar2 = FUN_00188a54();
  *(undefined8 *)(param_1 + 0x58) = uVar2;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  return 1;
}

