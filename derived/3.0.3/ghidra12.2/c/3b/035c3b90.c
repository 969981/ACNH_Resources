
void FUN_035c3b90(long *param_1,long param_2,uint param_3)

{
  MutexType *pMVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long local_c8;
  long *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  long *plStack_98;
  long *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  pMVar1 = (MutexType *)(param_1 + 0x12e);
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  uVar8 = param_1[0xcb] & 7;
  lVar6 = param_1[2];
  lVar3 = param_1[3];
  param_1[0xcf] = 0;
  param_1[uVar8 * 0x17 + 10] = param_2;
  param_1[uVar8 * 0x17 + 0xb] = lVar6;
  lVar6 = param_1[4];
  *(uint *)(param_1 + uVar8 * 0x17 + 0xe) = param_3;
  param_1[uVar8 * 0x17 + 0xc] = lVar3;
  param_1[uVar8 * 0x17 + 0xd] = lVar6;
  *(undefined4 *)((long)param_1 + uVar8 * 0xb8 + 0xfc) = 1;
  FUN_035c7610(&local_c8,pMVar1,param_2,param_3 & 0xff);
  if (local_c8 == 0) {
    nn::os::LockMutex(pMVar1);
    FUN_035c7980(&local_b8,pMVar1,param_2,param_3 & 0xff);
    lVar3 = local_b0;
    lVar6 = CONCAT44(uStack_b4,local_b8);
    nn::os::UnlockMutex(pMVar1);
    plVar7 = (long *)param_1[uVar8 * 0x17 + 0x1e];
    param_1[uVar8 * 0x17 + 0x1d] = lVar6;
    param_1[uVar8 * 0x17 + 0x1e] = lVar3;
    if (plVar7 == (long *)0x0) goto joined_r0x035c3d20;
    plVar2 = plVar7 + 1;
    do {
      lVar6 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  else {
    if (local_c0 != (long *)0x0) {
      plVar7 = local_c0 + 1;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *plVar7 = *plVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    param_1[uVar8 * 0x17 + 0x1d] = local_c8;
    plVar7 = (long *)param_1[uVar8 * 0x17 + 0x1e];
    param_1[uVar8 * 0x17 + 0x1e] = (long)local_c0;
    if (plVar7 == (long *)0x0) goto joined_r0x035c3d20;
    plVar2 = plVar7 + 1;
    do {
      lVar6 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (lVar6 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__shared_weak_count::__release_weak();
  }
joined_r0x035c3d20:
  if (local_c0 != (long *)0x0) {
    plVar7 = local_c0 + 1;
    do {
      lVar6 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*local_c0 + 0x10))(local_c0);
      std::__shared_weak_count::__release_weak();
    }
  }
  uVar8 = param_1[0xcb];
  param_1[0xcb] = uVar8 + 1;
  if (*(char *)((long)param_1 + 0x3f) != '\0') {
    local_b8 = 0;
    plVar7 = param_1 + (uVar8 & 7) * 0x17 + 10;
    local_a8 = *plVar7;
    local_90 = (long *)0x0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_b0 = 0x1000002;
    local_a0 = 0;
    plStack_98 = plVar7;
    FUN_035c6a10(param_1 + 0xd0,&local_b8);
    local_b8 = 1;
    local_a0 = param_1[6];
    local_90 = param_1 + (ulong)((int)uVar8 - 1U & 7) * 0x17 + 10;
    local_b0 = (ulong)*(ushort *)((long)param_1 + 0x2a) << 0x10;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_a8 = *plVar7;
    local_b0 = CONCAT71(local_b0._1_7_,*(undefined1 *)((long)param_1 + 0x3f));
    local_b0 = CONCAT44((int)param_1[7],(undefined4)local_b0);
    local_b0._0_2_ =
         CONCAT11(*(char *)(*param_1 + 0xd2) == '\x03' || *(char *)(*param_1 + 0xd5) != '\0',
                  *(undefined1 *)((long)param_1 + 0x3f));
    uStack_88 = 0;
    plStack_98 = plVar7;
    FUN_035c6a10(param_1 + 0xd0,&local_b8);
  }
  if (param_3 == 3) {
    param_1[1] = param_2;
  }
  FUN_035bf810(param_1);
  return;
}

