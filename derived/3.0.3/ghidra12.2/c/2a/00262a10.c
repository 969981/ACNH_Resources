
void FUN_00262a10(undefined8 param_1,long param_2,long param_3,void *param_4)

{
  MutexType *pMVar1;
  long lVar2;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  if ((param_3 == 0) || (param_4 == (void *)0x0)) {
    local_44 = 0x10c07;
  }
  else {
    pMVar1 = (MutexType *)(param_2 + 0x8d78);
    nn::os::LockMutex(pMVar1);
    for (lVar2 = *(long *)(param_2 + 0x438); lVar2 != param_2 + 0x430; lVar2 = *(long *)(lVar2 + 8))
    {
      if (*(long *)(lVar2 + 0x440) == param_3) {
        nn::os::UnlockMutex(pMVar1);
        memcpy(param_4,(void *)(lVar2 + 0x10),0x20);
        local_44 = 0;
        goto LAB_00262a94;
      }
    }
    nn::os::UnlockMutex(pMVar1);
    local_44 = 0x2c09;
  }
LAB_00262a94:
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
  FUN_002296c4(param_1,&local_44);
  return;
}

