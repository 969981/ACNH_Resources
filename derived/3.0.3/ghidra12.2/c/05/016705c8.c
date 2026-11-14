
void FUN_016705c8(undefined8 *param_1)

{
  long lVar1;
  short sVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_049bacb8;
  if ((*(byte *)(param_1 + 0x122) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x122) = *(byte *)(param_1 + 0x122) & 0xf8 | 4;
    if (param_1[0x126] == 0) {
      if (param_1[0x123] == 0) goto LAB_01670640;
    }
    else {
      FUN_03f45838(param_1 + 0x124);
      if (param_1[0x123] == 0) {
        *(undefined4 *)((long)param_1 + 0x914) = 0xe;
        goto LAB_01670640;
      }
    }
    if (DAT_05b05848 != 0) {
      FUN_03f350f4(DAT_05b05848,param_1 + 0x121);
    }
  }
LAB_01670640:
  FUN_03f457c4(param_1 + 0x124);
  FUN_0161b2d0(param_1 + 0xeb);
  FUN_038fd0e0(param_1 + 0xdb);
  FUN_038fd0e0(param_1 + 199);
  puVar4 = PTR_DAT_04bc1010;
  if (*(short *)((long)param_1 + 0x5da) != -1) {
    lVar5 = *(long *)PTR_DAT_04bc1010;
    nn::os::LockMutex((MutexType *)(lVar5 + 0x580));
    uVar3 = (int)*(short *)((long)param_1 + 0x5da) - (uint)*(ushort *)(lVar5 + 0x5c0);
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
    *(undefined2 *)((long)param_1 + 0x5da) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0xaa);
  FUN_038fd0e0(param_1 + 0x96);
  if (*(short *)((long)param_1 + 0x41a) != -1) {
    lVar5 = *(long *)puVar4;
    nn::os::LockMutex((MutexType *)(lVar5 + 0x580));
    uVar3 = (int)*(short *)((long)param_1 + 0x41a) - (uint)*(ushort *)(lVar5 + 0x5c0);
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
    *(undefined2 *)((long)param_1 + 0x41a) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x72);
  FUN_038fd0e0(param_1 + 0x5e);
  FUN_01629448(param_1);
  return;
}

