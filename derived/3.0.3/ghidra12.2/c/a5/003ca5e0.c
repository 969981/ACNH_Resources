
void FUN_003ca5e0(long param_1,int param_2)

{
  MutexType *pMVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  PerformanceInfo aPStack_88 [40];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x348));
  lVar4 = FUN_03b38a74();
  if (*(char *)(param_1 + 0x414) == '\0') {
    uVar6 = 0;
  }
  else {
    lVar5 = FUN_03b38a74();
    nn::os::LockMutex((MutexType *)(lVar5 + 0x960));
    uVar6 = nn::audio::SetPerformanceFrameBuffer
                      ((AudioRendererConfig *)(lVar4 + 0x18),
                       *(void **)(param_1 + (long)*(int *)(param_1 + 0x410) * 8 + 0x3f0),
                       *(ulong *)(param_1 + 0x408));
    lVar4 = FUN_03b38a74();
    nn::os::UnlockMutex((MutexType *)(lVar4 + 0x960));
    iVar2 = 0;
    if (*(int *)(param_1 + 0x410) < 2) {
      iVar2 = *(int *)(param_1 + 0x410) + 1;
    }
    *(int *)(param_1 + 0x410) = iVar2;
  }
  uVar7 = nn::os::GetSystemTick();
  pMVar1 = (MutexType *)(param_1 + 0x368);
  nn::os::LockMutex(pMVar1);
  lVar4 = *(long *)(param_1 + 0x390);
  while (lVar4 != param_1 + 0x388) {
    plVar8 = (long *)(lVar4 + -8);
    lVar4 = *(long *)(lVar4 + 8);
    (**(code **)(*plVar8 + 0x10))();
  }
  FUN_003cb1d8();
  if (param_2 == 0) {
    FUN_003cb7b0();
  }
  else {
    FUN_003cb760();
  }
  do {
    FUN_003c5c08();
    uVar9 = FUN_003cc190();
  } while ((uVar9 & 1) != 0);
  do {
    FUN_003c5b84();
    uVar9 = FUN_003cc190();
  } while ((uVar9 & 1) != 0);
  lVar5 = *(long *)(param_1 + 0x3a0);
  lVar4 = param_1 + 0x398;
  if (lVar5 != lVar4) {
    uVar3 = *(int *)(param_1 + 0x530) - *(int *)(param_1 + 0x528);
    uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
    if (param_2 == 0) {
      do {
        plVar8 = (long *)(lVar5 + -8);
        lVar5 = *(long *)(lVar5 + 8);
        (**(code **)(*plVar8 + 0x18))(plVar8,uVar3);
      } while (lVar5 != lVar4);
    }
    else {
      do {
        plVar8 = (long *)(lVar5 + -8);
        lVar5 = *(long *)(lVar5 + 8);
        (**(code **)(*plVar8 + 0x10))(plVar8,uVar3);
      } while (lVar5 != lVar4);
    }
  }
  FUN_003cc20c();
  if (param_2 == 0) {
    FUN_003cc6d0();
    FUN_003cb1d8();
    FUN_003cb890();
  }
  else {
    FUN_003cc640();
    FUN_003cb1d8();
    FUN_003cb810();
  }
  nn::os::UnlockMutex(pMVar1);
  FUN_03b38a74();
  FUN_003b6670();
  FUN_003b7f88();
  nn::os::LockMutex(pMVar1);
  lVar4 = *(long *)(param_1 + 0x390);
  while (lVar4 != param_1 + 0x388) {
    plVar8 = (long *)(lVar4 + -8);
    lVar4 = *(long *)(lVar4 + 8);
    (**(code **)(*plVar8 + 0x18))();
  }
  nn::os::UnlockMutex(pMVar1);
  if (*(long *)(param_1 + 0x3a8) != 0) {
    (**(code **)(param_1 + 0x3a8))(*(undefined8 *)(param_1 + 0x3b0));
  }
  FUN_03b38a74();
  FUN_003b54a8();
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x348));
  uVar10 = nn::os::GetSystemTick();
  if ((uVar6 != 0) && (*(char *)(param_1 + 0x414) != '\0')) {
    nn::audio::PerformanceInfo::PerformanceInfo(aPStack_88);
    uVar9 = nn::audio::PerformanceInfo::SetBuffer(aPStack_88,uVar6);
    while ((uVar9 & 1) != 0) {
      FUN_003ca880(param_1,aPStack_88,*(undefined8 *)(param_1 + 0x3e0),
                   *(undefined8 *)(param_1 + 1000),0);
      uVar9 = nn::audio::PerformanceInfo::MoveToNextFrame();
    }
    if (*(long *)(param_1 + 0x438) != 0) {
      FUN_003cc778(*(long *)(param_1 + 0x438),uVar6,*(undefined8 *)(param_1 + 0x408),uVar7);
    }
    nn::audio::PerformanceInfo::~PerformanceInfo(aPStack_88);
  }
  *(undefined8 *)(param_1 + 0x3e0) = uVar7;
  *(undefined8 *)(param_1 + 1000) = uVar10;
  return;
}

