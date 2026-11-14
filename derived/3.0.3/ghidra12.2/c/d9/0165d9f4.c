
void FUN_0165d9f4(undefined8 *param_1)

{
  MutexType *pMVar1;
  long lVar2;
  short sVar3;
  uint uVar4;
  long lVar5;
  
  *param_1 = &PTR_LAB_049b9b38;
  param_1[0x52] = &PTR_LAB_049b9c48;
  FUN_038fd0e0(param_1 + 0x137);
  if ((*(byte *)(param_1 + 0x126) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x126) = *(byte *)(param_1 + 0x126) & 0xf8 | 4;
    if (param_1[0x12a] == 0) {
      if (param_1[0x127] == 0) goto LAB_0165da80;
    }
    else {
      FUN_03f45838(param_1 + 0x128);
      if (param_1[0x127] == 0) {
        *(undefined4 *)((long)param_1 + 0x934) = 0xe;
        goto LAB_0165da80;
      }
    }
    if (DAT_05b05848 != 0) {
      FUN_03f350f4(DAT_05b05848,param_1 + 0x125);
    }
  }
LAB_0165da80:
  FUN_03f457c4(param_1 + 0x128);
  FUN_0166ad60(param_1 + 0xa0);
  FUN_0390e230(param_1 + 0xe0);
  FUN_0390e230(param_1 + 0xa4);
  lVar5 = DAT_05ae78f0;
  if (*(short *)((long)param_1 + 0x4fa) != -1) {
    pMVar1 = (MutexType *)(DAT_05ae78f0 + 0x580);
    nn::os::LockMutex(pMVar1);
    uVar4 = (int)*(short *)((long)param_1 + 0x4fa) - (uint)*(ushort *)(lVar5 + 0x5c0);
    if (*(uint *)(lVar5 + 0x5a0) <= uVar4) {
      uVar4 = 0;
    }
    lVar2 = *(long *)(lVar5 + 0x5a8) + (long)(int)uVar4 * 0x80;
    sVar3 = *(short *)(lVar2 + 0x76) + -1;
    *(short *)(lVar2 + 0x76) = sVar3;
    if (sVar3 == 0) {
      *(short *)(lVar5 + 0x5c4) = *(short *)(lVar5 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex(pMVar1);
    *(undefined2 *)((long)param_1 + 0x4fa) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x8e);
  param_1[0x71] = PTR_DAT_04bd11b8 + 0x10;
  FUN_0390d560(param_1 + 0x71);
  FUN_039e9280(param_1 + 0x52);
  FUN_01629448(param_1);
  return;
}

