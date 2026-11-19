
void FUN_03ca1050(long param_1,undefined8 param_2,int *param_3)

{
  MutexType *pMVar1;
  long lVar2;
  
  lVar2 = FUN_03b181f0();
  if (lVar2 != 0) {
    param_2 = *(undefined8 *)(lVar2 + 0xe8);
  }
  pMVar1 = (MutexType *)(*(long *)(DAT_05af83f0 + 0x400) + 0xb8);
  nn::os::LockMutex(pMVar1);
  FUN_03b139b0(param_1,param_2);
  nn::os::UnlockMutex(pMVar1);
  FUN_03b14080(param_1,param_2);
  FUN_03b145f0(param_1,param_2);
  lVar2 = FUN_0037e610(param_1,"EffectLinkOn");
  if (lVar2 != 0) {
    *param_3 = *param_3 + 1;
  }
  for (lVar2 = *(long *)(param_1 + 0x28); lVar2 != param_1 + 0x20; lVar2 = *(long *)(lVar2 + 8)) {
    FUN_03ca1050(lVar2 + -8,param_2,param_3);
  }
  return;
}

