
undefined8 FUN_038c0344(long *param_1,void *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = param_1[0x16];
  nn::os::LockMutex((MutexType *)(lVar2 + 0x20));
  if ((int)param_1[0x69] == 0) {
    *(undefined4 *)(param_1 + 0x1a) = 0;
    memcpy(param_1 + 0x1c,param_2,0xb8);
    lVar3 = param_1[0x16];
    nn::os::LockMutex((MutexType *)(lVar3 + 0x20));
    if ((int)param_1[0x1a] == 1) {
      FUN_038beec0(param_1[0x16],param_1[0x1b]);
      param_1[0x1b] = 0;
    }
    uVar1 = FUN_038beb3c(param_1[0x16],param_1 + 0x1c,param_1 + 0x34);
    nn::os::UnlockMutex((MutexType *)(lVar3 + 0x20));
    if ((uVar1 & 1) != 0) {
      param_1[0x1b] = 0;
      *(undefined1 *)((long)param_1 + 0x344) = 0;
      *(undefined4 *)(param_1 + 0x66) = *(undefined4 *)((long)param_1 + 0x334);
      *(undefined4 *)(param_1 + 0x69) = 2;
      *(undefined4 *)(param_1 + 0x68) = 0x3f800000;
      (**(code **)(*param_1 + 0x78))(param_1);
      (**(code **)(*param_1 + 0x80))(param_1);
      uVar4 = 1;
      goto LAB_038c0424;
    }
  }
  uVar4 = 0;
LAB_038c0424:
  nn::os::UnlockMutex((MutexType *)(lVar2 + 0x20));
  return uVar4;
}

