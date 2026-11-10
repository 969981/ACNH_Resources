
void FUN_0025b5ec(undefined8 param_1,long *param_2,void *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined4 local_50;
  ErrorResultVariant aEStack_4c [12];
  undefined4 local_34;
  
  if (param_3 != (void *)0x0) {
    uVar1 = (**(code **)(*param_2 + 0xa0))();
    if (param_4 <= uVar1) {
      nn::os::LockMutex((MutexType *)(param_2 + 100));
      (**(code **)(*param_2 + 0xb0))(param_2,param_2[0x68]);
      lVar4 = param_2[0x68];
      uVar3 = (**(code **)(*param_2 + 0x98))(param_2);
      memcpy((void *)(lVar4 + (uVar3 & 0xffffffff)),param_3,(ulong)param_4);
      lVar4 = param_2[0x68];
      iVar2 = (**(code **)(*param_2 + 0x98))(param_2);
      (**(code **)(*param_2 + 0x90))(param_1,param_2,lVar4,iVar2 + param_4);
      nn::os::UnlockMutex((MutexType *)(param_2 + 100));
      return;
    }
  }
  local_34 = 0;
  local_50 = 0x10c07;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_34);
  FUN_002296c4(param_1,&local_50);
  return;
}

