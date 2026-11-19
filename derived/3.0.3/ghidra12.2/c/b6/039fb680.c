
undefined1  [16] FUN_039fb680(long *param_1,long *param_2,undefined8 param_3)

{
  MutexType *pMVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  void *pvVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  
  puVar4 = PTR_DAT_04bd1770;
  nn::os::LockMutex((MutexType *)(*(long *)PTR_DAT_04bd1770 + 0x68));
  lVar8 = *(long *)puVar4;
  pMVar1 = (MutexType *)(lVar8 + 0x68);
  lVar11 = *param_1;
  nn::os::LockMutex(pMVar1);
  if (*(long *)(lVar8 + 0x20) != lVar8 + 0x18) {
    lVar6 = (long)*(int *)(lVar8 + 0x2c);
    pvVar9 = (void *)(*(long *)(lVar8 + 0x20) - lVar6);
    do {
      if (*(long *)((long)pvVar9 + 0x20) == lVar11) {
        nn::os::UnlockMutex(pMVar1);
        nn::os::UnlockMutex((MutexType *)(*(long *)puVar4 + 0x68));
        do {
          nn::os::LockMutex((MutexType *)((long)pvVar9 + 0x2e0));
          uVar2 = *(uint *)((long)pvVar9 + 0x2b4);
          nn::os::UnlockMutex((MutexType *)((long)pvVar9 + 0x2e0));
        } while ((uVar2 >> 5 & 1) == 0);
        uVar10 = 0;
        goto LAB_039fb890;
      }
      pvVar9 = (void *)(*(long *)((long)pvVar9 + lVar6 + 8) - lVar6);
    } while (pvVar9 != (void *)((lVar8 + 0x18) - lVar6));
  }
  nn::os::UnlockMutex(pMVar1);
  lVar8 = DAT_05ae7600;
  uVar10 = *(undefined8 *)(DAT_05ae92f0 + 0x58);
  if (DAT_05ae7600 == 0) {
    pvVar9 = malloc(0x308);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar8 + 8);
      if (lVar11 != 0) {
        plVar5 = (long *)(lVar11 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        pvVar9 = (void *)0x0;
        goto LAB_039fb7cc;
      }
    }
    pvVar9 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x308,8);
  }
LAB_039fb7cc:
  FUN_039fd400(pvVar9,param_1,param_2,uVar10);
  lVar11 = *(long *)puVar4;
  nn::os::LockMutex((MutexType *)(lVar11 + 0x68));
  iVar3 = *(int *)(lVar11 + 0x14);
  *(int *)(lVar11 + 0x14) = iVar3 + 1;
  *(int *)((long)pvVar9 + 0x300) = iVar3;
  plVar7 = (long *)(lVar11 + 0x18);
  lVar8 = *plVar7;
  plVar5 = (long *)((long)*(int *)(lVar11 + 0x2c) + (long)pvVar9);
  *plVar7 = (long)plVar5;
  *plVar5 = lVar8;
  plVar5[1] = (long)plVar7;
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar5;
  }
  plVar7 = (long *)(lVar11 + 0x30);
  lVar8 = *plVar7;
  *(int *)(lVar11 + 0x28) = *(int *)(lVar11 + 0x28) + 1;
  plVar5 = (long *)((long)*(int *)(lVar11 + 0x44) + (long)pvVar9);
  *plVar7 = (long)plVar5;
  *plVar5 = lVar8;
  plVar5[1] = (long)plVar7;
  if (lVar8 != 0) {
    *(long **)(lVar8 + 8) = plVar5;
  }
  *(int *)(lVar11 + 0x40) = *(int *)(lVar11 + 0x40) + 1;
  *(ushort *)(lVar11 + 10) = *(ushort *)(lVar11 + 10) | 1;
  nn::os::UnlockMutex((MutexType *)(lVar11 + 0x68));
  nn::os::UnlockMutex((MutexType *)(*(long *)puVar4 + 0x68));
  FUN_039fb8c0(pvVar9,param_2,param_3,uVar10);
  uVar10 = 1;
LAB_039fb890:
  auVar12._8_8_ = uVar10;
  auVar12._0_8_ = pvVar9;
  return auVar12;
}

