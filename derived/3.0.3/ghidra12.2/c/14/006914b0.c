
void thunk_FUN_00691840(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  LightEventType *pLVar6;
  EventType *pEVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 ****ppppuVar11;
  undefined8 ***pppuVar12;
  TimerEventType *pTStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 ****ppppuStack_110;
  undefined8 ****ppppuStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 ****ppppuStack_c0;
  undefined8 ****ppppuStack_b8;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined *puStack_a0;
  undefined **ppuStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  uStack_b0 = 0;
  plStack_a8 = (long *)0x0;
  ppppuStack_c0 = &ppppuStack_c0;
  ppppuStack_b8 = &ppppuStack_c0;
  uStack_b0 = nn::os::GetCurrentThread();
  plStack_a8 = (long *)0x0;
  nn::os::SdkMutexType::Lock();
  puVar1 = PTR_LOOP_04c3fbb0;
  ppppuStack_c0[1] = (undefined8 ***)&PTR_LOOP_04c3fbb0;
  PTR_LOOP_04c3fbb0 = (undefined *)ppppuStack_c0;
  ppppuStack_c0 = (undefined8 ****)puVar1;
  *(undefined8 ******)(puVar1 + 8) = &ppppuStack_c0;
  nn::os::SdkMutexType::Unlock();
  uVar5 = nn::os::GetCurrentThread();
  FUN_00691648(param_1,uVar5);
  pLVar6 = (LightEventType *)FUN_00691640(param_1);
  nn::os::ClearLightEvent(pLVar6);
  pEVar7 = (EventType *)FUN_00691634(param_1);
  nn::os::ClearEvent(pEVar7);
  pLVar6 = (LightEventType *)FUN_00691638(param_1);
  nn::os::SignalLightEvent(pLVar6);
  ppppuStack_110 = &ppppuStack_110;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  ppppuStack_108 = ppppuStack_110;
  nn::os::InitializeTimerEvent((TimerEventType *)&uStack_100,0);
  FUN_00693164(&DAT_04c812e0,&ppppuStack_110);
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_128 = 0;
  FUN_006922ac(&uStack_128);
  uStack_138 = 0;
  uStack_130 = 0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  nn::os::InitializeTimerEvent(&uStack_168,0);
  puVar1 = PTR_WaitAny_04bbd7a0;
  while( true ) {
    uStack_170 = FUN_00691634(param_1);
    puStack_90 = (undefined *)0x0;
    puStack_a0 = puVar1;
    ppuStack_98 = (undefined **)0x0;
    uStack_78 = 0;
    uStack_70 = 0;
    puStack_88 = (undefined *)0x0;
    uStack_80 = 0;
    pTStack_180 = (TimerEventType *)&uStack_100;
    puStack_178 = &uStack_168;
    nn::os::InitializeMultiWait((MultiWaitType *)&ppuStack_98);
    FUN_00692020(&puStack_a0,&ppuStack_98,0,&uStack_170,&puStack_178,&pTStack_180);
    nn::os::FinalizeMultiWait((MultiWaitType *)&ppuStack_98);
    pEVar7 = (EventType *)FUN_00691634(param_1);
    uVar8 = nn::os::TryWaitEvent(pEVar7);
    if ((uVar8 & 1) != 0) break;
    uVar8 = nn::os::TryWaitTimerEvent((TimerEventType *)&uStack_168);
    if ((uVar8 & 1) != 0) {
      nn::os::ClearTimerEvent((TimerEventType *)&uStack_168);
      FUN_00692344(&uStack_128);
      FUN_00692388();
    }
    uVar8 = nn::os::TryWaitTimerEvent((TimerEventType *)&uStack_100);
    if ((uVar8 & 1) != 0) {
      nn::os::ClearTimerEvent((TimerEventType *)&uStack_100);
      nn::os::SdkMutexType::Lock();
      plVar9 = (long *)FUN_00692f90(&DAT_04c812e0);
      if (plVar9 == (long *)0x0) {
        nn::os::SdkMutexType::Unlock();
      }
      else {
        plStack_a8 = plVar9;
        nn::os::SdkMutexType::Unlock();
        if ((DAT_04c812c8 & 1) == 0) {
          uVar5 = FUN_00691658(param_1);
          uVar10 = FUN_00691660(param_1);
          FUN_00692bcc(plVar9,uVar5,uVar10);
          puStack_a0 = (undefined *)0x0;
          uVar5 = (**(code **)*plVar9)(plVar9);
          if ((*PTR_DAT_04bdf3c0 & 1) == 0) {
            iVar4 = __cxa_guard_acquire(PTR_DAT_04bdf3c0);
            puVar2 = PTR_DAT_04bdf3d0;
            if (iVar4 != 0) {
              *(undefined **)PTR_DAT_04bdf3d0 = PTR_PTR_04bdf3d8;
              *(undefined8 *)(puVar2 + 8) = 0;
              *(undefined8 *)(puVar2 + 0x10) = 0;
              *(undefined8 *)(puVar2 + 0x18) = 0;
              __cxa_guard_release(PTR_DAT_04bdf3c0);
            }
          }
          ppuStack_98 = &puStack_a0;
          puStack_90 = PTR_PTR_04bdf3d8;
          puStack_88 = PTR_PTR_04bdf3c8;
          uStack_80 = 0;
          uStack_78 = 0;
          uStack_70 = 0;
          uVar8 = FUN_00692170(uVar5,&ppuStack_98,0);
          if (((uVar8 & 1) != 0) && (puStack_a0 + (long)plVar9 != (undefined *)0x0)) {
            FUN_00692638(puStack_a0 + (long)plVar9,&uStack_128);
          }
          if (DAT_04c812d0 != (code *)0x0) {
            (*DAT_04c812d0)(plVar9);
          }
          FUN_00692c40(plVar9);
          if (DAT_04c812d8 != (code *)0x0) {
            (*DAT_04c812d8)(plVar9);
          }
          uVar3 = FUN_00692d08(plVar9);
          if ((uVar3 & 0x3fffff) == 0x40db) {
            DAT_04c812c8 = 1;
          }
        }
        else {
          (**(code **)(*plVar9 + 0x20))(plVar9,0x40db);
        }
        nn::os::SdkMutexType::Lock();
        plStack_a8 = (long *)0x0;
        uVar3 = FUN_00692d08(plVar9);
        if ((uVar3 & 0x3fffff) == 0x52db) {
          FUN_00692f38(&DAT_04c812e0,plVar9);
        }
        else {
          (**(code **)(*plVar9 + 8))(plVar9);
          FUN_00691770(plVar9);
        }
        nn::os::SdkMutexType::Unlock();
        uVar5 = FUN_00691674();
        nn::os::StartOneShotTimerEvent(&uStack_168,uVar5);
      }
    }
  }
  pLVar6 = (LightEventType *)FUN_00691638(param_1);
  nn::os::ClearLightEvent(pLVar6);
  pLVar6 = (LightEventType *)FUN_00691640(param_1);
  nn::os::SignalLightEvent(pLVar6);
  nn::os::FinalizeTimerEvent((TimerEventType *)&uStack_168);
  thunk_FUN_00692350(&uStack_128);
  FUN_006931d0(&DAT_04c812e0,&ppppuStack_110);
  nn::os::FinalizeTimerEvent((TimerEventType *)&uStack_100);
  nn::os::SdkMutexType::Lock();
  if ((undefined **)PTR_LOOP_04c3fbb8 != &PTR_LOOP_04c3fbb0) {
    ppppuVar11 = (undefined8 ****)PTR_LOOP_04c3fbb8;
    do {
      if ((undefined8 *****)ppppuVar11 == &ppppuStack_c0) {
        pppuVar12 = *ppppuStack_b8;
        ppppuStack_c0[1] = ppppuStack_b8;
        *ppppuStack_b8 = ppppuStack_c0;
        pppuVar12[1] = &ppppuStack_c0;
        ppppuStack_c0 = (undefined8 ****)pppuVar12;
        if ((undefined **)PTR_LOOP_04c3fbb8 == &PTR_LOOP_04c3fbb0) goto LAB_00691cb0;
        goto LAB_00691d0c;
      }
      ppppuVar11 = (undefined8 ****)ppppuVar11[1];
    } while (ppppuVar11 != (undefined8 ****)&PTR_LOOP_04c3fbb0);
    if ((undefined **)PTR_LOOP_04c3fbb8 != &PTR_LOOP_04c3fbb0) goto LAB_00691d0c;
  }
LAB_00691cb0:
  plVar9 = (long *)FUN_00692f90(&DAT_04c812e0);
  if (plVar9 != (long *)0x0) {
    do {
      (**(code **)(*plVar9 + 0x20))(plVar9,0x16db);
      (**(code **)(*plVar9 + 8))(plVar9);
      FUN_00691770(plVar9);
      plVar9 = (long *)FUN_00692f90(&DAT_04c812e0);
    } while (plVar9 != (long *)0x0);
  }
LAB_00691d0c:
  nn::os::SdkMutexType::Unlock();
  return;
}

