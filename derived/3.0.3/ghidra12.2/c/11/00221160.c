
void FUN_00221160(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04bcb8c0;
  lVar2 = *(long *)PTR_DAT_04bcb8c0;
  nn::os::LockMutex((MutexType *)(lVar2 + 0x60));
  if (*(int *)(param_1 + 8) - 1U < 2) {
    FUN_00223570(*(undefined8 *)puVar1,param_1);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  nn::os::UnlockMutex((MutexType *)(lVar2 + 0x60));
  return;
}

