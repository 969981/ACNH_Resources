
void FUN_029f11e0(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  cVar1 = *(char *)(param_3 + 0x19);
  nn::os::LockMutex((MutexType *)(param_1 + 0x50));
  if (cVar1 != '\0') {
    *(undefined8 *)(param_1 + 0x70) = uVar2;
    *(byte *)(param_1 + 0x80) = *(byte *)(param_1 + 0x80) | 2;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x50));
  return;
}

