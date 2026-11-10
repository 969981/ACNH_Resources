
void FUN_00262af0(undefined8 param_1,long param_2,long param_3,byte param_4,long param_5)

{
  MutexType *pMVar1;
  long lVar2;
  undefined4 local_50;
  ErrorResultVariant aEStack_4c [12];
  undefined4 local_34;
  
  if (((param_3 == 0) || (param_5 == 0)) || (3 < param_4)) {
    local_50 = 0x10c07;
  }
  else {
    pMVar1 = (MutexType *)(param_2 + 0x8d78);
    nn::os::LockMutex(pMVar1);
    for (lVar2 = *(long *)(param_2 + 0x438); lVar2 != param_2 + 0x430; lVar2 = *(long *)(lVar2 + 8))
    {
      if (*(long *)(lVar2 + 0x440) == param_3) {
        nn::os::UnlockMutex(pMVar1);
        FUN_00227af0(&local_50,param_5,lVar2 + 0x10 + (ulong)param_4 * 0x70 + 0x120);
        local_50 = 0;
        *(undefined1 *)(param_5 + 0x70) = *(undefined1 *)(lVar2 + 0x10 + (ulong)param_4 + 0x400);
        goto LAB_00262b38;
      }
    }
    nn::os::UnlockMutex(pMVar1);
    local_50 = 0x2c09;
  }
LAB_00262b38:
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_34);
  FUN_002296c4(param_1,&local_50);
  return;
}

