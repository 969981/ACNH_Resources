
void FUN_03883770(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 10));
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  uVar1 = (int)param_1[5] + 1U & 1;
  uVar2 = -uVar1;
  if (-2 < (int)param_1[5]) {
    uVar2 = uVar1;
  }
  *(uint *)(param_1 + 5) = uVar2;
  (**(code **)(*param_1 + 0x28))(param_1);
  lVar3 = DAT_05ae6a60;
  *(undefined8 *)(*(long *)(*(long *)(DAT_05ae6a60 + 0x90) + 0xc0) + 0x4e8) =
       *(undefined8 *)(*(long *)(param_1[2] + (long)(int)param_1[5] * 8) + 0x2a8);
  bVar4 = (**(code **)(**(long **)(lVar3 + 0x68) + 0xa0))();
  *(byte *)(param_1 + 0x10a) = bVar4 & 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 10));
  return;
}

