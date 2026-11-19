
void FUN_03964bb8(undefined8 *param_1)

{
  MutexType *pMVar1;
  long lVar2;
  short sVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_04b68290;
  puVar5 = PTR_DAT_04bbd510;
  if (param_1[0xc3] != 0) {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510);
  }
  if (param_1[0xc4] != 0) {
    FUN_039499cc(*(undefined8 *)puVar5);
  }
  if ((long *)param_1[0xc2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xc2] + 8))();
    param_1[0xc2] = 0;
  }
  param_1[0x9b] = PTR_DAT_04bbd508 + 0x10;
  FUN_038fd0e0(param_1 + 0xa6);
  lVar6 = DAT_05ae78f0;
  if (*(short *)((long)param_1 + 0x46a) != -1) {
    pMVar1 = (MutexType *)(DAT_05ae78f0 + 0x580);
    nn::os::LockMutex(pMVar1);
    uVar4 = (int)*(short *)((long)param_1 + 0x46a) - (uint)*(ushort *)(lVar6 + 0x5c0);
    if (*(uint *)(lVar6 + 0x5a0) <= uVar4) {
      uVar4 = 0;
    }
    lVar2 = *(long *)(lVar6 + 0x5a8) + (long)(int)uVar4 * 0x80;
    sVar3 = *(short *)(lVar2 + 0x76) + -1;
    *(short *)(lVar2 + 0x76) = sVar3;
    if (sVar3 == 0) {
      *(short *)(lVar6 + 0x5c4) = *(short *)(lVar6 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex(pMVar1);
    *(undefined2 *)((long)param_1 + 0x46a) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x7c);
  return;
}

