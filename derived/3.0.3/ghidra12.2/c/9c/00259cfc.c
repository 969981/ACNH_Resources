
void FUN_00259cfc(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_40 [4];
  undefined4 local_28;
  undefined1 local_24;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x88));
  uVar1 = FUN_00227404(param_1 + 0x60);
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_002aaa54(param_1);
    local_28 = 0x1000100;
    local_24 = 0;
    local_40[0] = 0x24000000;
    lVar3 = FUN_002a9fb0(uVar2,local_40,param_1 + 0x60,*(undefined2 *)((long)param_2 + 0xc),
                         &local_28);
    if (lVar3 != 0) {
      FUN_002a9f34(local_40,uVar2,*param_2);
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x88));
  return;
}

