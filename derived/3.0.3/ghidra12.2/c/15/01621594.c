
void FUN_01621594(undefined8 *param_1)

{
  long lVar1;
  short sVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  
  *param_1 = &PTR_LAB_049b4270;
  puVar4 = PTR_DAT_04bc1010;
  if (*(short *)((long)param_1 + 0x55a) != -1) {
    lVar5 = *(long *)PTR_DAT_04bc1010;
    nn::os::LockMutex((MutexType *)(lVar5 + 0x580));
    uVar3 = (int)*(short *)((long)param_1 + 0x55a) - (uint)*(ushort *)(lVar5 + 0x5c0);
    if (*(uint *)(lVar5 + 0x5a0) <= uVar3) {
      uVar3 = 0;
    }
    lVar1 = *(long *)(lVar5 + 0x5a8) + (long)(int)uVar3 * 0x80;
    sVar2 = *(short *)(lVar1 + 0x76) + -1;
    *(short *)(lVar1 + 0x76) = sVar2;
    if (sVar2 == 0) {
      *(short *)(lVar5 + 0x5c4) = *(short *)(lVar5 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar5 + 0x580));
    *(undefined2 *)((long)param_1 + 0x55a) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x9a);
  FUN_038fd0e0(param_1 + 0x86);
  if ((*(byte *)(param_1 + 0x75) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xf8 | 4;
    if (param_1[0x79] == 0) {
      if (param_1[0x76] == 0) goto LAB_01621694;
    }
    else {
      FUN_03f45838(param_1 + 0x77);
      if (param_1[0x76] == 0) {
        *(undefined4 *)((long)param_1 + 0x3ac) = 0xe;
        goto LAB_01621694;
      }
    }
    if (DAT_05b05848 != 0) {
      FUN_03f350f4(DAT_05b05848,param_1 + 0x74);
    }
  }
LAB_01621694:
  FUN_03f457c4(param_1 + 0x77);
  if (*(short *)((long)param_1 + 0x38a) != -1) {
    lVar5 = *(long *)puVar4;
    nn::os::LockMutex((MutexType *)(lVar5 + 0x580));
    uVar3 = (int)*(short *)((long)param_1 + 0x38a) - (uint)*(ushort *)(lVar5 + 0x5c0);
    if (*(uint *)(lVar5 + 0x5a0) <= uVar3) {
      uVar3 = 0;
    }
    lVar1 = *(long *)(lVar5 + 0x5a8) + (long)(int)uVar3 * 0x80;
    sVar2 = *(short *)(lVar1 + 0x76) + -1;
    *(short *)(lVar1 + 0x76) = sVar2;
    if (sVar2 == 0) {
      *(short *)(lVar5 + 0x5c4) = *(short *)(lVar5 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar5 + 0x580));
    *(undefined2 *)((long)param_1 + 0x38a) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x60);
  FUN_01629448(param_1);
  return;
}

