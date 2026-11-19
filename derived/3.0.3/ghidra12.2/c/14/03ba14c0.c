
void FUN_03ba14c0(long param_1,long *param_2,uint param_3,byte param_4,int param_5,int param_6,
                 int param_7)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  size_t __n;
  size_t sVar12;
  int iVar13;
  
  *(int *)(param_1 + 0x1c0) = param_5;
  *(int *)(param_1 + 0x1c4) = param_6;
  *(int *)(param_1 + 0x1c8) = param_5 / 200;
  lVar5 = nn::audio::GetRequiredBufferSizeForAuxSendReturnBuffer
                    ((AudioRendererParameter *)(DAT_05aebb88 + 0x50),param_7,param_6);
  iVar13 = (int)(lVar5 * 3);
  iVar9 = 0xfff;
  if (iVar13 < 0) {
    iVar9 = -0xfff;
  }
  uVar1 = iVar9 + iVar13;
  uVar2 = uVar1 & 0xfff;
  if (-1 < (int)-uVar1) {
    uVar2 = -(-uVar1 & 0xfff);
  }
  sVar12 = (size_t)(int)(uVar1 - uVar2);
  *(size_t *)(param_1 + 0x110) = sVar12;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    pvVar8 = malloc(sVar12);
  }
  else {
    plVar7 = param_2;
    if (param_2 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar7 = (long *)(lVar11 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      pvVar8 = (void *)0x0;
      if (plVar7 == (long *)0x0) goto LAB_03ba15d8;
    }
    pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,sVar12,0x1000);
  }
LAB_03ba15d8:
  puVar4 = PTR_DAT_04bd1e70;
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(void **)(param_1 + 0x108) = pvVar8;
  *(void **)(param_1 + 0x30) = pvVar8;
  *(long *)(param_1 + 0x38) = lVar5 * 3;
  lVar5 = *(long *)puVar4;
  *(int *)(param_1 + 0x40) = param_6;
  *(int *)(param_1 + 0x44) = param_7;
  *(int *)(param_1 + 0x48) = param_5;
  lVar5 = nn::audio::GetRequiredBufferSizeForAuxSendReturnBuffer
                    ((AudioRendererParameter *)(lVar5 + 0x50),param_7,param_6);
  *(byte *)(param_1 + 0x1bc) = param_4 & 1;
  lVar11 = *(long *)(param_1 + 0x30);
  uVar10 = (ulong)(lVar5 * 3) / 3;
  *(long *)(param_1 + 0x78) = lVar11;
  *(ulong *)(param_1 + 0x80) = uVar10 + lVar11;
  *(ulong *)(param_1 + 0x88) = lVar11 + uVar10 * 2;
  *(ulong *)(param_1 + 0x90) = uVar10;
  puVar4 = PTR_DAT_04bb2698;
  if ((param_4 & 1) == 0) goto LAB_03ba1988;
  uVar1 = *(int *)(param_1 + 0x200) * *(int *)(param_1 + 0x1c8);
  lVar5 = *(long *)PTR_DAT_04bb2698;
  sVar12 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  __n = (size_t)(int)uVar1;
  if ((int)uVar1 < 0) {
    sVar12 = 0xffffffffffffffff;
  }
  if (lVar5 == 0) {
    pvVar8 = malloc(sVar12);
LAB_03ba16c8:
    *(void **)(param_1 + 0x1d0) = pvVar8;
    memset(pvVar8,0,__n);
    lVar5 = *(long *)puVar4;
    if (lVar5 == 0) goto LAB_03ba1748;
    plVar7 = param_2;
    if (param_2 != (long *)0x0) {
LAB_03ba1730:
      pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,sVar12,0x40);
      goto LAB_03ba1750;
    }
LAB_03ba1704:
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar7 = (long *)(lVar5 + 8);
    if (lVar11 != 0) {
      plVar7 = (long *)(lVar11 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_03ba1730;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    memset((void *)0x0,0,__n);
    lVar5 = *(long *)puVar4;
    if (lVar5 != 0) goto LAB_03ba178c;
LAB_03ba17d0:
    pvVar8 = malloc(sVar12);
LAB_03ba17d8:
    *(void **)(param_1 + 0x1e0) = pvVar8;
    memset(pvVar8,0,__n);
    lVar5 = *(long *)puVar4;
    if (lVar5 == 0) goto LAB_03ba1858;
    plVar7 = param_2;
    if (param_2 != (long *)0x0) {
LAB_03ba1840:
      pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,sVar12,0x40);
      goto LAB_03ba1860;
    }
LAB_03ba1814:
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar7 = (long *)(lVar5 + 8);
    if (lVar11 != 0) {
      plVar7 = (long *)(lVar11 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_03ba1840;
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    memset((void *)0x0,0,__n);
    lVar5 = *(long *)puVar4;
    if (lVar5 != 0) goto LAB_03ba189c;
LAB_03ba18e0:
    pvVar8 = malloc(sVar12);
LAB_03ba18e8:
    *(void **)(param_1 + 0x1f0) = pvVar8;
    memset(pvVar8,0,__n);
    lVar5 = *(long *)puVar4;
    if (lVar5 == 0) goto LAB_03ba1968;
    if (param_2 == (long *)0x0) {
LAB_03ba1920:
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar3 = (undefined8 *)(lVar5 + 8);
      if (lVar11 != 0) {
        puVar3 = (undefined8 *)(lVar11 + 0xa8);
      }
      param_2 = (long *)*puVar3;
      if (param_2 != (long *)0x0) goto LAB_03ba194c;
      pvVar8 = (void *)0x0;
    }
    else {
LAB_03ba194c:
      pvVar8 = (void *)(**(code **)(*param_2 + 0x30))(param_2,sVar12,0x40);
    }
  }
  else {
    plVar7 = param_2;
    if (param_2 != (long *)0x0) {
LAB_03ba16a4:
      pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,sVar12,0x40);
      goto LAB_03ba16c8;
    }
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar7 = (long *)(lVar5 + 8);
    if (lVar11 != 0) {
      plVar7 = (long *)(lVar11 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_03ba16a4;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    memset((void *)0x0,0,__n);
    lVar5 = *(long *)puVar4;
    if (lVar5 != 0) goto LAB_03ba1704;
LAB_03ba1748:
    pvVar8 = malloc(sVar12);
LAB_03ba1750:
    *(void **)(param_1 + 0x1d8) = pvVar8;
    memset(pvVar8,0,__n);
    lVar5 = *(long *)puVar4;
    if (lVar5 == 0) goto LAB_03ba17d0;
    plVar7 = param_2;
    if (param_2 != (long *)0x0) {
LAB_03ba17b8:
      pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,sVar12,0x40);
      goto LAB_03ba17d8;
    }
LAB_03ba178c:
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar7 = (long *)(lVar5 + 8);
    if (lVar11 != 0) {
      plVar7 = (long *)(lVar11 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_03ba17b8;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    memset((void *)0x0,0,__n);
    lVar5 = *(long *)puVar4;
    if (lVar5 != 0) goto LAB_03ba1814;
LAB_03ba1858:
    pvVar8 = malloc(sVar12);
LAB_03ba1860:
    *(void **)(param_1 + 0x1e8) = pvVar8;
    memset(pvVar8,0,__n);
    lVar5 = *(long *)puVar4;
    if (lVar5 == 0) goto LAB_03ba18e0;
    plVar7 = param_2;
    if (param_2 != (long *)0x0) {
LAB_03ba18c8:
      pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,sVar12,0x40);
      goto LAB_03ba18e8;
    }
LAB_03ba189c:
    lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar7 = (long *)(lVar5 + 8);
    if (lVar11 != 0) {
      plVar7 = (long *)(lVar11 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 != (long *)0x0) goto LAB_03ba18c8;
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    memset((void *)0x0,0,__n);
    lVar5 = *(long *)puVar4;
    if (lVar5 != 0) goto LAB_03ba1920;
LAB_03ba1968:
    pvVar8 = malloc(sVar12);
  }
  *(void **)(param_1 + 0x1f8) = pvVar8;
  memset(pvVar8,0,__n);
LAB_03ba1988:
  if ((param_3 & 1) == 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x110);
  lVar11 = *(long *)(DAT_05aebb78 + 0x78);
  nn::os::LockMutex((MutexType *)(lVar11 + 0x58));
  param_1 = param_1 + *(int *)(lVar11 + 0x1c);
  plVar7 = (long *)(lVar11 + 8);
  lVar5 = *plVar7;
  *plVar7 = param_1 + 0x118;
  *(long *)(param_1 + 0x118) = lVar5;
  *(long **)(param_1 + 0x120) = plVar7;
  if (lVar5 != 0) {
    *(long *)(lVar5 + 8) = param_1 + 0x118;
  }
  *(int *)(lVar11 + 0x18) = *(int *)(lVar11 + 0x18) + 1;
  nn::os::UnlockMutex((MutexType *)(lVar11 + 0x58));
  return;
}

