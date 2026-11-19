
void FUN_03985774(undefined8 *param_1)

{
  MutexType *pMVar1;
  long lVar2;
  short sVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  lVar7 = param_1[0xd];
  *param_1 = &PTR_FUN_04b68ad0;
  lVar5 = DAT_05ae78f0;
  if (lVar7 != 0) {
    if (*(short *)(lVar7 + 0xda) != -1) {
      pMVar1 = (MutexType *)(DAT_05ae78f0 + 0x580);
      nn::os::LockMutex(pMVar1);
      uVar4 = (int)*(short *)(lVar7 + 0xda) - (uint)*(ushort *)(lVar5 + 0x5c0);
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
      *(undefined2 *)(lVar7 + 0xda) = 0xffff;
    }
    FUN_038fd0e0(lVar7 + 0x50);
  }
  puVar6 = DAT_05ae90e8;
  if ((DAT_05ae90f0 != (long *)0x0) && (DAT_05ae90e8 != (undefined8 *)0x0)) {
    DAT_05ae90e8 = (undefined8 *)0x0;
    (**(code **)*puVar6)();
    if (DAT_05ae90f0 != (long *)0x0) {
      (**(code **)(*DAT_05ae90f0 + 8))();
    }
    DAT_05ae90f0 = (long *)0x0;
  }
  param_1[0xe] = &PTR_LAB_048fc348;
  FUN_038f4940(param_1 + 0xe);
  return;
}

