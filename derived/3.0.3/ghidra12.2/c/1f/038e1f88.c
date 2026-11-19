
void FUN_038e1f88(long *param_1,long *param_2,long *param_3,undefined4 param_4,undefined4 param_5,
                 long param_6,int param_7,uint param_8)

{
  MutexType *pMVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  ulong *puVar7;
  void *pvVar8;
  ThreadType *pTVar9;
  long lVar10;
  long *plVar11;
  size_t sVar12;
  long *plVar13;
  long lVar14;
  
  param_1[1] = 0;
  puVar4 = PTR_DAT_04bd0d40;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  if (*(long *)PTR_DAT_04bb2698 != 0) {
    lVar6 = FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1);
    param_1[1] = lVar6;
    if (lVar6 != 0) {
      if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = lVar6 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
      }
      plVar11 = (long *)(lVar6 + 0x70);
      lVar10 = *plVar11;
      plVar13 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)param_1);
      *plVar11 = (long)plVar13;
      *plVar13 = lVar10;
      plVar13[1] = (long)plVar11;
      if (lVar10 != 0) {
        *(long **)(lVar10 + 8) = plVar13;
      }
      *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + 1;
      if (lVar14 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar14 + 0x20));
      }
    }
  }
  param_1[4] = (long)(PTR_DAT_04bb2020 + 0x10);
  lVar6 = param_2[1];
  *param_1 = (long)&PTR_FUN_04b651f0;
  plVar13 = param_1 + 0x11;
  *plVar13 = 0;
  param_1[0xf] = 0;
  *(int *)(param_1 + 0x10) = param_7;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[5] = lVar6;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = param_5;
  param_1[0x18] = param_6;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 1;
  uVar5 = nn::os::GetSystemTick();
  *(undefined4 *)(param_1 + 0x20) = param_4;
  uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x13] = (long)param_1;
  uVar3 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)((long)param_1 + 0xd4) = uVar5;
  *(uint *)(param_1 + 0x1b) = uVar3;
  uVar5 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0xdc) = uVar5;
  *(uint *)(param_1 + 0x1c) = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 4;
  if (0 < (int)param_8) {
    sVar12 = (ulong)param_8 << 3;
    lVar6 = *(long *)PTR_DAT_04bb2698;
    if (lVar6 == 0) {
      puVar7 = malloc(sVar12);
    }
    else {
      plVar11 = param_3;
      if (param_3 == (long *)0x0) {
        lVar14 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar11 = (long *)(lVar6 + 8);
        if (lVar14 != 0) {
          plVar11 = (long *)(lVar14 + 0xa8);
        }
        plVar11 = (long *)*plVar11;
        if (plVar11 == (long *)0x0) {
          puVar7 = (ulong *)0x0;
          goto LAB_038e2180;
        }
      }
      puVar7 = (ulong *)(**(code **)(*plVar11 + 0x30))(plVar11,sVar12,8);
    }
LAB_038e2180:
    param_1[0xf] = (long)puVar7;
    nn::os::InitializeMessageQueue((MessageQueueType *)(param_1 + 6),puVar7,(ulong)param_8);
  }
  sVar12 = (size_t)param_7;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    pvVar8 = malloc(sVar12);
    param_1[0x1e] = (long)pvVar8;
LAB_038e220c:
    pTVar9 = malloc(0x1c0);
  }
  else {
    plVar11 = param_3;
    if (param_3 == (long *)0x0) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar4 = PTR_DAT_04bb2698;
      plVar11 = (long *)(lVar6 + 8);
      if (lVar14 != 0) {
        plVar11 = (long *)(lVar14 + 0xa8);
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 != (long *)0x0) goto LAB_038e21d0;
      param_1[0x1e] = 0;
      lVar6 = *(long *)puVar4;
      if (lVar6 == 0) goto LAB_038e220c;
LAB_038e222c:
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar2 = (undefined8 *)(lVar6 + 8);
      if (lVar14 != 0) {
        puVar2 = (undefined8 *)(lVar14 + 0xa8);
      }
      param_3 = (long *)*puVar2;
      if (param_3 == (long *)0x0) {
        pTVar9 = (ThreadType *)0x0;
        goto LAB_038e2268;
      }
    }
    else {
LAB_038e21d0:
      lVar6 = (**(code **)(*plVar11 + 0x30))(plVar11,sVar12,0x1000);
      puVar4 = PTR_DAT_04bb2698;
      param_1[0x1e] = lVar6;
      lVar6 = *(long *)puVar4;
      if (lVar6 == 0) goto LAB_038e220c;
      if (param_3 == (long *)0x0) goto LAB_038e222c;
    }
    pTVar9 = (ThreadType *)(**(code **)(*param_3 + 0x30))(param_3,0x1c0,8);
  }
LAB_038e2268:
  param_1[0x1d] = (long)pTVar9;
  nn::os::CreateThread(pTVar9,FUN_038e2374,param_1,(void *)param_1[0x1e],sVar12,(int)param_1[0x20]);
  pTVar9 = (ThreadType *)param_1[0x1d];
  (**(code **)(*param_2 + 0x18))(param_2);
  nn::os::SetThreadName(pTVar9,(char *)param_2[1]);
  lVar6 = DAT_05ae7790;
  if (DAT_05ae7790 == 0) {
    return;
  }
  pMVar1 = (MutexType *)(DAT_05ae7790 + 0x40);
  nn::os::LockMutex(pMVar1);
  lVar14 = param_1[0x14];
  if (lVar14 != 0) {
    param_1[0x14] = 0;
    if (param_1[0x11] != 0) {
      *(long *)(param_1[0x11] + 8) = param_1[0x12];
    }
    if ((long *)param_1[0x12] != (long *)0x0) {
      *(long *)param_1[0x12] = *plVar13;
    }
    *plVar13 = 0;
    param_1[0x12] = 0;
    *(int *)(lVar14 + 0x10) = *(int *)(lVar14 + 0x10) + -1;
  }
  param_1[0x14] = lVar6 + 8;
  lVar14 = *(long *)(lVar6 + 8);
  *(long **)(lVar6 + 8) = plVar13;
  param_1[0x11] = lVar14;
  param_1[0x12] = lVar6 + 8;
  if (lVar14 != 0) {
    *(long **)(lVar14 + 8) = plVar13;
  }
  *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 1;
  nn::os::UnlockMutex(pMVar1);
  return;
}

