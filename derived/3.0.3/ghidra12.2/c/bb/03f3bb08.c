
void FUN_03f3bb08(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  
  nn::os::LockMutex((MutexType *)&DAT_05b058c0);
  if ((*(byte *)(param_2 + 8) & 1) != 0) {
    plVar2 = (long *)(param_1 + 0x10);
    lVar1 = FUN_03f3be90(plVar2,*plVar2,param_2 + 0x2b0);
    *plVar2 = lVar1;
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x18) = 1;
    }
    *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xfe;
  }
  nn::os::UnlockMutex((MutexType *)&DAT_05b058c0);
  return;
}

