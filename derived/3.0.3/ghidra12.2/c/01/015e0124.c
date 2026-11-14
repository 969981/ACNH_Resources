
void FUN_015e0124(undefined8 *param_1)

{
  MutexType *pMVar1;
  long lVar2;
  short sVar3;
  uint uVar4;
  long lVar5;
  
  *param_1 = &PTR_LAB_049afa48;
  if ((*(byte *)(param_1 + 0x97) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x97) = *(byte *)(param_1 + 0x97) & 0xf8 | 4;
    if (param_1[0x9b] == 0) {
      if (param_1[0x98] != 0) goto LAB_015e0184;
    }
    else {
      FUN_03f45838(param_1 + 0x99);
      if (param_1[0x98] == 0) {
        *(undefined4 *)((long)param_1 + 0x4bc) = 0xe;
      }
      else {
LAB_015e0184:
        if (DAT_05b05848 != 0) {
          FUN_03f350f4(DAT_05b05848,param_1 + 0x96);
        }
      }
    }
  }
  FUN_03f457c4(param_1 + 0x99);
  lVar5 = DAT_05ae78f0;
  if (*(short *)((long)param_1 + 0x44a) != -1) {
    pMVar1 = (MutexType *)(DAT_05ae78f0 + 0x580);
    nn::os::LockMutex(pMVar1);
    uVar4 = (int)*(short *)((long)param_1 + 0x44a) - (uint)*(ushort *)(lVar5 + 0x5c0);
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
    *(undefined2 *)((long)param_1 + 0x44a) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x78);
  param_1[0x5e] = PTR_DAT_04bd11b8 + 0x10;
  FUN_0390d560(param_1 + 0x5e);
  if ((*(byte *)(param_1 + 0x56) >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x56) = *(byte *)(param_1 + 0x56) & 0xf8 | 4;
    if (param_1[0x5a] == 0) {
      if (param_1[0x57] == 0) goto LAB_015e0294;
    }
    else {
      FUN_03f45838(param_1 + 0x58);
      if (param_1[0x57] == 0) {
        *(undefined4 *)((long)param_1 + 0x2b4) = 0xe;
        goto LAB_015e0294;
      }
    }
    if (DAT_05b05848 != 0) {
      FUN_03f350f4(DAT_05b05848,param_1 + 0x55);
    }
  }
LAB_015e0294:
  FUN_03f457c4(param_1 + 0x58);
  FUN_01629448(param_1);
  return;
}

