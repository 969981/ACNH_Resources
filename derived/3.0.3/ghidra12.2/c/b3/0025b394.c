
void FUN_0025b394(undefined8 param_1,long *param_2,void *param_3,uint *param_4,uint param_5,
                 long param_6)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  undefined4 local_64;
  ErrorResultVariant aEStack_60 [12];
  undefined4 local_54;
  
  if (((param_3 == (void *)0x0) || (param_4 == (uint *)0x0)) || (param_6 == 0)) {
    local_64 = 0x10c07;
  }
  else {
    lVar5 = FUN_0025b4e8(param_2,param_6);
    if (lVar5 != 0) {
      bVar1 = *(byte *)(lVar5 + 9);
      nn::os::LockMutex((MutexType *)(param_2 + 100));
      lVar5 = param_2[0x68];
      uVar3 = (**(code **)(*param_2 + 0xa8))(param_2);
      uVar4 = (**(code **)(*param_2 + 0x1e0))(param_2,lVar5,uVar3,param_6);
      uVar6 = (uint)bVar1;
      uVar2 = uVar4 - uVar6;
      if (uVar4 < uVar6 || uVar2 == 0) {
        *param_4 = 0;
        local_64 = 0x2c09;
      }
      else if (param_5 < uVar2) {
        *param_4 = 0;
        local_64 = 0x10c07;
      }
      else {
        memcpy(param_3,(void *)(param_2[0x68] + (ulong)uVar6),(ulong)uVar2);
        *param_4 = uVar2;
        local_64 = 0;
      }
      local_54 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_60,(Result *)&local_54);
      FUN_002296c4(param_1,&local_64);
      nn::os::UnlockMutex((MutexType *)(param_2 + 100));
      return;
    }
    local_64 = 0x2c09;
  }
  local_54 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_60,(Result *)&local_54);
  FUN_002296c4(param_1,&local_64);
  return;
}

