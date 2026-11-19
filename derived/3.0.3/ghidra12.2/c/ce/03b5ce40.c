
void FUN_03b5ce40(long param_1,long *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  MutexType *pMVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  
  puVar1 = (uint *)(param_1 + 0x40190);
  *(undefined4 *)(param_1 + 0x401d0) = 0x10;
  puVar6 = PTR_DAT_04bb2698;
  lVar16 = *(long *)PTR_DAT_04bb2698;
  if (lVar16 == 0) {
    pvVar9 = malloc(0x100);
    if (pvVar9 != (void *)0x0) goto LAB_03b5cec8;
LAB_03b5cee4:
    uVar14 = (ulong)*(uint *)(param_1 + 0x401b8);
    if (0 < (int)*(uint *)(param_1 + 0x401b8)) goto LAB_03b5cef0;
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar8 = (long *)(lVar16 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) goto LAB_03b5cee4;
    }
    pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x100,8);
    if (pvVar9 == (void *)0x0) goto LAB_03b5cee4;
LAB_03b5cec8:
    uVar14 = 0x20;
    *(void **)(param_1 + 0x401c0) = pvVar9;
    *(undefined4 *)(param_1 + 0x401b8) = 0x20;
LAB_03b5cef0:
    uVar11 = uVar14 & 3;
    if (uVar14 - 1 < 3) {
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      do {
        lVar16 = uVar13 * 8;
        uVar13 = uVar13 + 4;
        *(undefined8 *)(*(long *)(param_1 + 0x401c0) + lVar16) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x401c0) + lVar16 + 8) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x401c0) + lVar16 + 0x10) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x401c0) + lVar16 + 0x18) = 0;
      } while ((uVar14 & 0xfffffffc) != uVar13);
    }
    if (uVar11 != 0) {
      lVar16 = uVar13 << 3;
      do {
        uVar11 = uVar11 - 1;
        *(undefined8 *)(*(long *)(param_1 + 0x401c0) + lVar16) = 0;
        lVar16 = lVar16 + 8;
      } while (uVar11 != 0);
    }
  }
  *(undefined4 *)(param_1 + 0x401f8) = 0x10;
  lVar16 = *(long *)puVar6;
  if (lVar16 == 0) {
    pvVar9 = malloc(0x100);
    if (pvVar9 != (void *)0x0) goto LAB_03b5cfc4;
LAB_03b5cfe0:
    uVar14 = (ulong)*(uint *)(param_1 + 0x401e0);
    if (0 < (int)*(uint *)(param_1 + 0x401e0)) goto LAB_03b5cfec;
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar8 = (long *)(lVar16 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) goto LAB_03b5cfe0;
    }
    pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x100,8);
    if (pvVar9 == (void *)0x0) goto LAB_03b5cfe0;
LAB_03b5cfc4:
    uVar14 = 0x20;
    *(void **)(param_1 + 0x401e8) = pvVar9;
    *(undefined4 *)(param_1 + 0x401e0) = 0x20;
LAB_03b5cfec:
    uVar11 = uVar14 & 3;
    if (uVar14 - 1 < 3) {
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      do {
        lVar16 = uVar13 * 8;
        uVar13 = uVar13 + 4;
        *(undefined8 *)(*(long *)(param_1 + 0x401e8) + lVar16) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x401e8) + lVar16 + 8) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x401e8) + lVar16 + 0x10) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x401e8) + lVar16 + 0x18) = 0;
      } while ((uVar14 & 0xfffffffc) != uVar13);
    }
    if (uVar11 != 0) {
      lVar16 = uVar13 << 3;
      do {
        uVar11 = uVar11 - 1;
        *(undefined8 *)(*(long *)(param_1 + 0x401e8) + lVar16) = 0;
        lVar16 = lVar16 + 8;
      } while (uVar11 != 0);
    }
  }
  *(undefined4 *)(param_1 + 0x40220) = 0x10;
  lVar16 = *(long *)puVar6;
  if (lVar16 == 0) {
    pvVar9 = malloc(0x100);
    if (pvVar9 != (void *)0x0) goto LAB_03b5d0c4;
LAB_03b5d0e0:
    uVar14 = (ulong)*(uint *)(param_1 + 0x40208);
    if (0 < (int)*(uint *)(param_1 + 0x40208)) goto LAB_03b5d0ec;
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar8 = (long *)(lVar16 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) goto LAB_03b5d0e0;
    }
    pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x100,8);
    if (pvVar9 == (void *)0x0) goto LAB_03b5d0e0;
LAB_03b5d0c4:
    uVar14 = 0x20;
    *(void **)(param_1 + 0x40210) = pvVar9;
    *(undefined4 *)(param_1 + 0x40208) = 0x20;
LAB_03b5d0ec:
    uVar11 = uVar14 & 3;
    if (uVar14 - 1 < 3) {
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      do {
        lVar16 = uVar13 * 8;
        uVar13 = uVar13 + 4;
        *(undefined8 *)(*(long *)(param_1 + 0x40210) + lVar16) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x40210) + lVar16 + 8) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x40210) + lVar16 + 0x10) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x40210) + lVar16 + 0x18) = 0;
      } while ((uVar14 & 0xfffffffc) != uVar13);
    }
    if (uVar11 != 0) {
      lVar16 = uVar13 << 3;
      do {
        uVar11 = uVar11 - 1;
        *(undefined8 *)(*(long *)(param_1 + 0x40210) + lVar16) = 0;
        lVar16 = lVar16 + 8;
      } while (uVar11 != 0);
    }
  }
  *(undefined4 *)(param_1 + 0x40248) = 0x10;
  lVar16 = *(long *)puVar6;
  if (lVar16 == 0) {
    pvVar9 = malloc(0x100);
    if (pvVar9 != (void *)0x0) goto LAB_03b5d1c4;
LAB_03b5d1e0:
    uVar14 = (ulong)*(uint *)(param_1 + 0x40230);
    if (0 < (int)*(uint *)(param_1 + 0x40230)) goto LAB_03b5d1ec;
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar8 = (long *)(lVar16 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) goto LAB_03b5d1e0;
    }
    pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x100,8);
    if (pvVar9 == (void *)0x0) goto LAB_03b5d1e0;
LAB_03b5d1c4:
    uVar14 = 0x20;
    *(void **)(param_1 + 0x40238) = pvVar9;
    *(undefined4 *)(param_1 + 0x40230) = 0x20;
LAB_03b5d1ec:
    uVar11 = uVar14 & 3;
    if (uVar14 - 1 < 3) {
      uVar13 = 0;
    }
    else {
      uVar13 = 0;
      do {
        lVar16 = uVar13 * 8;
        uVar13 = uVar13 + 4;
        *(undefined8 *)(*(long *)(param_1 + 0x40238) + lVar16) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x40238) + lVar16 + 8) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x40238) + lVar16 + 0x10) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x40238) + lVar16 + 0x18) = 0;
      } while ((uVar14 & 0xfffffffc) != uVar13);
    }
    if (uVar11 != 0) {
      lVar16 = uVar13 << 3;
      do {
        uVar11 = uVar11 - 1;
        *(undefined8 *)(*(long *)(param_1 + 0x40238) + lVar16) = 0;
        lVar16 = lVar16 + 8;
      } while (uVar11 != 0);
    }
  }
  *(undefined4 *)(param_1 + 0x401a8) = 0x10;
  lVar16 = *(long *)puVar6;
  if (lVar16 == 0) {
    pvVar9 = malloc(0x100);
    if (pvVar9 != (void *)0x0) goto LAB_03b5d2c4;
LAB_03b5d2e0:
    uVar14 = (ulong)*puVar1;
    if ((int)*puVar1 < 1) goto LAB_03b5d368;
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar8 = (long *)(lVar16 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) goto LAB_03b5d2e0;
    }
    pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x100,8);
    if (pvVar9 == (void *)0x0) goto LAB_03b5d2e0;
LAB_03b5d2c4:
    uVar14 = 0x20;
    *(void **)(param_1 + 0x40198) = pvVar9;
    *puVar1 = 0x20;
  }
  uVar11 = uVar14 & 3;
  if (uVar14 - 1 < 3) {
    uVar13 = 0;
  }
  else {
    uVar13 = 0;
    do {
      lVar16 = uVar13 * 8;
      uVar13 = uVar13 + 4;
      *(undefined8 *)(*(long *)(param_1 + 0x40198) + lVar16) = 0;
      *(undefined8 *)(*(long *)(param_1 + 0x40198) + lVar16 + 8) = 0;
      *(undefined8 *)(*(long *)(param_1 + 0x40198) + lVar16 + 0x10) = 0;
      *(undefined8 *)(*(long *)(param_1 + 0x40198) + lVar16 + 0x18) = 0;
    } while ((uVar14 & 0xfffffffc) != uVar13);
  }
  if (uVar11 != 0) {
    lVar16 = uVar13 << 3;
    do {
      uVar11 = uVar11 - 1;
      *(undefined8 *)(*(long *)(param_1 + 0x40198) + lVar16) = 0;
      lVar16 = lVar16 + 8;
    } while (uVar11 != 0);
  }
LAB_03b5d368:
  lVar16 = 0;
  puVar2 = (uint *)(param_1 + 0x401a0);
  do {
    lVar7 = param_1 + lVar16 * 0x4018;
    *(undefined4 *)(lVar7 + 0x4018) = 4;
    if ((int)(*(uint *)(param_1 + 0x401a0) - *(int *)(param_1 + 0x401a4)) < (int)*puVar1) {
      uVar15 = *(uint *)(param_1 + 0x401a0);
      do {
        while (uVar3 = *puVar2, uVar15 == uVar3) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar15 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            DataMemoryBarrier(2,3);
            *(long *)(*(long *)(param_1 + 0x40198) + (ulong)(*puVar1 - 1 & uVar15) * 8) = lVar7 + 8;
            goto LAB_03b5d398;
          }
        }
        uVar15 = uVar3;
      } while ((int)(uVar3 - *(int *)(param_1 + 0x401a4)) < (int)*puVar1);
    }
LAB_03b5d398:
    lVar16 = lVar16 + 1;
  } while (lVar16 != 0x10);
  pMVar10 = (MutexType *)(param_1 + 0x40290);
  nn::os::LockMutex(pMVar10);
  uVar15 = *(uint *)(param_1 + 0x401a4);
  iVar12 = -uVar15;
  do {
    if ((int)(iVar12 + *puVar2) < 1) {
      lVar16 = 0;
      break;
    }
    uVar14 = (ulong)(*puVar1 - 1 & uVar15);
    lVar16 = *(long *)(*(long *)(param_1 + 0x40198) + uVar14 * 8);
    if (lVar16 == 0) break;
    *(undefined8 *)(*(long *)(param_1 + 0x40198) + uVar14 * 8) = 0;
    uVar15 = uVar15 + 1;
    DataMemoryBarrier(2,3);
    iVar12 = iVar12 + -1;
    *(uint *)(param_1 + 0x401a4) = uVar15;
  } while (lVar16 == -1);
  nn::os::UnlockMutex(pMVar10);
  *(long *)(param_1 + 0x40250) = lVar16;
  nn::os::LockMutex(pMVar10);
  uVar15 = *(uint *)(param_1 + 0x401a4);
  iVar12 = -uVar15;
  do {
    if ((int)(iVar12 + *puVar2) < 1) {
      lVar16 = 0;
      break;
    }
    uVar14 = (ulong)(*puVar1 - 1 & uVar15);
    lVar16 = *(long *)(*(long *)(param_1 + 0x40198) + uVar14 * 8);
    if (lVar16 == 0) break;
    *(undefined8 *)(*(long *)(param_1 + 0x40198) + uVar14 * 8) = 0;
    uVar15 = uVar15 + 1;
    DataMemoryBarrier(2,3);
    iVar12 = iVar12 + -1;
    *(uint *)(param_1 + 0x401a4) = uVar15;
  } while (lVar16 == -1);
  nn::os::UnlockMutex(pMVar10);
  *(long *)(param_1 + 0x40258) = lVar16;
  nn::os::LockMutex(pMVar10);
  uVar15 = *(uint *)(param_1 + 0x401a4);
  iVar12 = -uVar15;
  do {
    if ((int)(iVar12 + *puVar2) < 1) {
      lVar16 = 0;
      break;
    }
    uVar14 = (ulong)(*puVar1 - 1 & uVar15);
    lVar16 = *(long *)(*(long *)(param_1 + 0x40198) + uVar14 * 8);
    if (lVar16 == 0) break;
    *(undefined8 *)(*(long *)(param_1 + 0x40198) + uVar14 * 8) = 0;
    uVar15 = uVar15 + 1;
    DataMemoryBarrier(2,3);
    iVar12 = iVar12 + -1;
    *(uint *)(param_1 + 0x401a4) = uVar15;
  } while (lVar16 == -1);
  nn::os::UnlockMutex(pMVar10);
  *(long *)(param_1 + 0x40260) = lVar16;
  nn::os::LockMutex(pMVar10);
  uVar15 = *(uint *)(param_1 + 0x401a4);
  iVar12 = -uVar15;
  do {
    if ((int)(iVar12 + *puVar2) < 1) {
      lVar16 = 0;
      break;
    }
    uVar14 = (ulong)(*puVar1 - 1 & uVar15);
    lVar16 = *(long *)(*(long *)(param_1 + 0x40198) + uVar14 * 8);
    if (lVar16 == 0) break;
    *(undefined8 *)(*(long *)(param_1 + 0x40198) + uVar14 * 8) = 0;
    uVar15 = uVar15 + 1;
    DataMemoryBarrier(2,3);
    iVar12 = iVar12 + -1;
    *(uint *)(param_1 + 0x401a4) = uVar15;
  } while (lVar16 == -1);
  nn::os::UnlockMutex(pMVar10);
  *(long *)(param_1 + 0x40268) = lVar16;
  lVar16 = *(long *)puVar6;
  if (lVar16 == 0) {
    pMVar10 = malloc(0x20);
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar8 = (long *)(lVar16 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
    }
    pMVar10 = (MutexType *)(**(code **)(*plVar8 + 0x30))(plVar8,0x20,8);
  }
  *(undefined2 *)pMVar10 = 0;
  *(undefined8 *)(pMVar10 + 4) = 0;
  *(undefined8 *)(pMVar10 + 0x10) = 0;
  *(undefined4 *)(pMVar10 + 0x18) = 0;
  nn::os::InitializeMutex(pMVar10,false,0);
  *(MutexType **)(param_1 + 0x40270) = pMVar10;
  lVar16 = *(long *)puVar6;
  if (lVar16 == 0) {
    pMVar10 = malloc(0x20);
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar8 = (long *)(lVar16 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
    }
    pMVar10 = (MutexType *)(**(code **)(*plVar8 + 0x30))(plVar8,0x20,8);
  }
  *(undefined2 *)pMVar10 = 0;
  *(undefined8 *)(pMVar10 + 4) = 0;
  *(undefined8 *)(pMVar10 + 0x10) = 0;
  *(undefined4 *)(pMVar10 + 0x18) = 0;
  nn::os::InitializeMutex(pMVar10,false,0);
  *(MutexType **)(param_1 + 0x40278) = pMVar10;
  lVar16 = *(long *)puVar6;
  if (lVar16 == 0) {
    pMVar10 = malloc(0x20);
  }
  else {
    plVar8 = param_2;
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar8 = (long *)(lVar16 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
    }
    pMVar10 = (MutexType *)(**(code **)(*plVar8 + 0x30))(plVar8,0x20,8);
  }
  *(undefined2 *)pMVar10 = 0;
  *(undefined8 *)(pMVar10 + 4) = 0;
  *(undefined8 *)(pMVar10 + 0x10) = 0;
  *(undefined4 *)(pMVar10 + 0x18) = 0;
  nn::os::InitializeMutex(pMVar10,false,0);
  *(MutexType **)(param_1 + 0x40280) = pMVar10;
  lVar16 = *(long *)puVar6;
  if (lVar16 == 0) {
    pMVar10 = malloc(0x20);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar16 + 8);
      if (lVar7 != 0) {
        param_2 = (long *)(lVar7 + 0xa8);
      }
      param_2 = (long *)*param_2;
    }
    pMVar10 = (MutexType *)(**(code **)(*param_2 + 0x30))(param_2,0x20,8);
  }
  *(undefined2 *)pMVar10 = 0;
  *(undefined8 *)(pMVar10 + 4) = 0;
  *(undefined8 *)(pMVar10 + 0x10) = 0;
  *(undefined4 *)(pMVar10 + 0x18) = 0;
  nn::os::InitializeMutex(pMVar10,false,0);
  *(MutexType **)(param_1 + 0x40288) = pMVar10;
  return;
}

