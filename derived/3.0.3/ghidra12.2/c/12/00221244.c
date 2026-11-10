
void FUN_00221244(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04bcb8c0;
  lVar3 = *(long *)PTR_DAT_04bcb8c0;
  nn::os::LockMutex((MutexType *)(lVar3 + 0x60));
  if (*(int *)(param_1 + 8) == 7) {
    uVar2 = 5;
    if ((param_2 & 1) == 0) {
      uVar2 = 2;
    }
    *(undefined4 *)(param_1 + 8) = uVar2;
    FUN_002282f0(param_1 + 0x10);
    FUN_002234f0(*(undefined8 *)puVar1,param_1,param_2 & 1);
  }
  nn::os::UnlockMutex((MutexType *)(lVar3 + 0x60));
  return;
}

