
void FUN_01559054(undefined8 *param_1)

{
  MutexType *pMVar1;
  long lVar2;
  short sVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  
  *param_1 = &PTR_LAB_049a89e8;
  lVar5 = DAT_05ae78f0;
  if (*(short *)((long)param_1 + 0x372) != -1) {
    pMVar1 = (MutexType *)(DAT_05ae78f0 + 0x580);
    nn::os::LockMutex(pMVar1);
    uVar4 = (int)*(short *)((long)param_1 + 0x372) - (uint)*(ushort *)(lVar5 + 0x5c0);
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
    *(undefined2 *)((long)param_1 + 0x372) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x5d);
  FUN_01629448(param_1);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar6 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar6 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01559130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x38))(plVar6,param_1);
  return;
}

