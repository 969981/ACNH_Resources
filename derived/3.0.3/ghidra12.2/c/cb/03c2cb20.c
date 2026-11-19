
void FUN_03c2cb20(long param_1,undefined4 param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  undefined *local_80;
  undefined8 *puStack_78;
  
  if (*(long *)PTR_DAT_04bb2720 == 0) {
    iVar14 = -1;
  }
  else {
    iVar14 = *(int *)(*(long *)PTR_DAT_04bb2720 + 0x338);
  }
  puVar2 = (uint *)(*(long *)(param_1 + 0x338) + 0xd0);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar6) {
      *puVar2 = *puVar2 & 0xfffffffb;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  puStack_78 = &DAT_0407ebb1;
  local_80 = puVar3;
  lVar8 = FUN_038c6d48(param_2,&local_80,*(undefined8 *)(param_1 + 0x338),8,1,0);
  if (lVar8 != 0) {
LAB_03c2d1fc:
    puVar2 = (uint *)(*(long *)(param_1 + 0x338) + 0xd0);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar6) {
        *puVar2 = *puVar2 & 0xfffffffb | 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    return;
  }
  lVar8 = param_1 + 0x1608;
  uVar10 = 0;
  puVar4 = PTR_DAT_04bb44e0 + 0x10;
  plVar16 = (long *)(param_1 + 0x1610);
  lVar13 = 0;
LAB_03c2cc18:
  while( true ) {
    lVar11 = *plVar16;
    lVar12 = lVar8 + uVar10 * 0x18;
    if (99 < (uint)uVar10) {
      lVar12 = lVar8;
    }
    if (lVar11 != lVar12) break;
    while ((int)uVar10 != 99) {
      uVar1 = (int)uVar10 + 1;
      uVar10 = (ulong)uVar1;
      lVar12 = lVar8 + uVar10 * 0x18;
      if (99 < uVar1) {
        lVar12 = lVar8;
      }
      lVar11 = *(long *)(lVar12 + 8);
      if (lVar11 != lVar12) goto LAB_03c2cc54;
    }
    if (lVar13 == 0) {
      uVar9 = nn::os::LockMutex((MutexType *)(param_1 + 0x2400));
      if (*(long *)(param_1 + 0x1f68) != 0) {
        **(undefined1 **)(*(long *)(param_1 + 0x1f68) + 8) = 0;
      }
      if (*(long *)(param_1 + 0x1f70) != 0) {
        **(undefined1 **)(*(long *)(param_1 + 0x1f70) + 8) = 0;
      }
      if (*(long *)(param_1 + 0x1f78) != 0) {
        **(undefined1 **)(*(long *)(param_1 + 0x1f78) + 8) = 0;
      }
      if (*(long *)(param_1 + 0x1f80) != 0) {
        **(undefined1 **)(*(long *)(param_1 + 0x1f80) + 8) = 0;
      }
      if (*(long *)(param_1 + 0x1f68) != 0) {
        uVar9 = FUN_03c2de50(uVar9,*(long *)(param_1 + 0x1f68),&DAT_040ec263);
        if (((DAT_05aed580 & 1) == 0) &&
           (uVar9 = __cxa_guard_acquire(&DAT_05aed580), (int)uVar9 != 0)) {
          DAT_05aed570 = *(long **)(param_1 + 0x330);
          DAT_05aed578 = *(long **)(param_1 + 0x338);
          uVar9 = __cxa_guard_release(&DAT_05aed580);
        }
        plVar16 = DAT_05aed570;
        if (DAT_05aed570 != (long *)0x0) {
          uVar9 = *(undefined8 *)(param_1 + 0x1f68);
          (**(code **)(DAT_05aed570[4] + 0x18))(DAT_05aed570 + 4);
          lVar15 = plVar16[5];
          lVar12 = (**(code **)(*DAT_05aed570 + 0x70))();
          lVar11 = (**(code **)(*DAT_05aed570 + 0x78))();
          uVar10 = (**(code **)(*DAT_05aed570 + 0x70))();
          uVar9 = FUN_03c2de50((double)((float)(ulong)(lVar12 - lVar11) * 0.0009765625 *
                                       0.0009765625),
                               (double)((float)uVar10 * 0.0009765625 * 0.0009765625),uVar10,uVar9,
                               "Heap(%s): %4.1f / %4.1f\n",lVar15);
        }
        plVar16 = DAT_05aed578;
        if (DAT_05aed578 != (long *)0x0) {
          uVar9 = *(undefined8 *)(param_1 + 0x1f68);
          (**(code **)(DAT_05aed578[4] + 0x18))(DAT_05aed578 + 4);
          lVar15 = plVar16[5];
          lVar12 = (**(code **)(*DAT_05aed578 + 0x70))();
          lVar11 = (**(code **)(*DAT_05aed578 + 0x78))();
          uVar10 = (**(code **)(*DAT_05aed578 + 0x70))();
          uVar9 = FUN_03c2de50((double)((float)(ulong)(lVar12 - lVar11) * 0.0009765625 *
                                       0.0009765625),
                               (double)((float)uVar10 * 0.0009765625 * 0.0009765625),uVar10,uVar9,
                               "Heap(%s): %4.1f / %4.1f\n",lVar15);
        }
      }
      if (*(long *)(param_1 + 0x1f70) != 0) {
        FUN_03c2de50(uVar9,*(long *)(param_1 + 0x1f70),&DAT_04079cf6);
        uVar9 = FUN_03c2e260(param_1,*(undefined8 *)(param_1 + 0x1f70),0);
      }
      if (*(long *)(param_1 + 0x1f78) != 0) {
        FUN_03c2de50(uVar9,*(long *)(param_1 + 0x1f78),&DAT_040cc8f1);
        uVar9 = FUN_03c2e260(param_1,*(undefined8 *)(param_1 + 0x1f78),1);
      }
      if (*(long *)(param_1 + 0x1f80) != 0) {
        FUN_03c2de50(uVar9,*(long *)(param_1 + 0x1f80),&DAT_040f7196);
        FUN_03c2e260(param_1,*(undefined8 *)(param_1 + 0x1f80),2);
      }
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x2400));
      plVar17 = *(long **)(param_1 + 0x330);
      plVar16 = *(long **)(param_1 + 0x338);
      if (plVar17 != (long *)0x0) {
        if (((*PTR_DAT_04bb44d8 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb44d8), iVar7 != 0)) {
          *(undefined **)PTR_DAT_04bb44d0 = PTR_DAT_04bb44e0 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb44d8);
        }
        uVar10 = (**(code **)(*plVar17 + 0x10))(plVar17,PTR_DAT_04bb44d0);
        if ((uVar10 & 1) != 0) {
          if ((*(uint *)(plVar17 + 0x1a) & 1) == 0) {
            plVar18 = (long *)0x0;
          }
          else {
            plVar18 = plVar17 + 0x12;
            nn::os::LockMutex((MutexType *)(plVar17 + 0x16));
          }
          if ((long *)plVar17[0x1c] != plVar17 + 0x1b) {
            lVar11 = (long)*(int *)((long)plVar17 + 0xec);
            lVar12 = plVar17[0x1c] - lVar11;
            do {
              lVar12 = *(long *)(lVar12 + lVar11 + 8) - lVar11;
            } while (lVar12 != (long)(plVar17 + 0x1b) - lVar11);
          }
          if (plVar18 != (long *)0x0) {
            nn::os::UnlockMutex((MutexType *)(plVar18 + 4));
          }
          if ((*(uint *)(plVar17 + 0x1a) & 1) == 0) {
            plVar18 = (long *)0x0;
          }
          else {
            plVar18 = plVar17 + 0x12;
            nn::os::LockMutex((MutexType *)(plVar17 + 0x16));
          }
          if ((long *)plVar17[0x1f] != plVar17 + 0x1e) {
            lVar11 = (long)*(int *)((long)plVar17 + 0x104);
            lVar12 = plVar17[0x1f] - lVar11;
            do {
              lVar12 = *(long *)(lVar12 + lVar11 + 8) - lVar11;
            } while (lVar12 != (long)(plVar17 + 0x1e) - lVar11);
          }
          if (plVar18 != (long *)0x0) {
            nn::os::UnlockMutex((MutexType *)(plVar18 + 4));
          }
        }
      }
      if (plVar16 != (long *)0x0) {
        if (((*PTR_DAT_04bb44d8 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb44d8), iVar7 != 0)) {
          *(undefined **)PTR_DAT_04bb44d0 = puVar4;
          __cxa_guard_release(PTR_DAT_04bb44d8);
        }
        uVar10 = (**(code **)(*plVar16 + 0x10))(plVar16,PTR_DAT_04bb44d0);
        if ((uVar10 & 1) != 0) {
          if ((*(uint *)(plVar16 + 0x1a) & 1) == 0) {
            plVar17 = (long *)0x0;
          }
          else {
            plVar17 = plVar16 + 0x12;
            nn::os::LockMutex((MutexType *)(plVar16 + 0x16));
          }
          if ((long *)plVar16[0x1c] != plVar16 + 0x1b) {
            lVar11 = (long)*(int *)((long)plVar16 + 0xec);
            lVar12 = plVar16[0x1c] - lVar11;
            do {
              lVar12 = *(long *)(lVar12 + lVar11 + 8) - lVar11;
            } while (lVar12 != (long)(plVar16 + 0x1b) - lVar11);
          }
          if (plVar17 != (long *)0x0) {
            nn::os::UnlockMutex((MutexType *)(plVar17 + 4));
          }
          if ((*(uint *)(plVar16 + 0x1a) & 1) == 0) {
            plVar17 = (long *)0x0;
          }
          else {
            plVar17 = plVar16 + 0x12;
            nn::os::LockMutex((MutexType *)(plVar16 + 0x16));
          }
          if ((long *)plVar16[0x1f] != plVar16 + 0x1e) {
            lVar11 = (long)*(int *)((long)plVar16 + 0x104);
            lVar12 = plVar16[0x1f] - lVar11;
            do {
              lVar12 = *(long *)(lVar12 + lVar11 + 8) - lVar11;
            } while (lVar12 != (long)(plVar16 + 0x1e) - lVar11);
          }
          if (plVar17 != (long *)0x0) {
            nn::os::UnlockMutex((MutexType *)(plVar17 + 4));
          }
        }
      }
    }
    (**(code **)(**(long **)(lVar13 + 0x1b0) + 0x20))();
    puStack_78 = &DAT_0407ebb1;
    local_80 = puVar3;
    lVar12 = FUN_038c6d48(param_2,&local_80,*(undefined8 *)(param_1 + 0x338),8,1,0);
    lVar13 = 0;
    uVar10 = 0;
    plVar16 = (long *)(param_1 + 0x1610);
    if (lVar12 != 0) goto LAB_03c2d1fc;
  }
LAB_03c2cc54:
  if (lVar13 == 0) {
    lVar13 = *(long *)(lVar11 + 0x10);
    plVar16 = (long *)(lVar11 + 8);
    goto LAB_03c2cc18;
  }
  lVar12 = *(long *)(lVar11 + 0x10);
  if (*(int *)(lVar13 + 0x1a8) == iVar14) {
    if (*(int *)(lVar12 + 0x1a8) != iVar14) {
      plVar16 = (long *)(lVar11 + 8);
      lVar13 = lVar12;
      goto LAB_03c2cc18;
    }
LAB_03c2cc88:
    if (*(int *)(lVar12 + 0x1a0) < *(int *)(lVar13 + 0x1a0)) {
      plVar16 = (long *)(lVar11 + 8);
      lVar13 = lVar12;
      goto LAB_03c2cc18;
    }
    if (*(int *)(lVar12 + 0x1a0) != *(int *)(lVar13 + 0x1a0)) goto LAB_03c2cf64;
    if (*(int *)(lVar12 + 0x1a4) < *(int *)(lVar13 + 0x1a4)) {
      plVar16 = (long *)(lVar11 + 8);
      lVar13 = lVar12;
      goto LAB_03c2cc18;
    }
    if (*(int *)(lVar12 + 0x1a4) == *(int *)(lVar13 + 0x1a4)) {
      if (*(uint *)(*(long *)(lVar12 + 0x48) + 0x10) <= *(uint *)(*(long *)(lVar13 + 0x48) + 0x10))
      {
        lVar12 = lVar13;
      }
      lVar13 = lVar12;
    }
  }
  else if (*(int *)(lVar12 + 0x1a8) != iVar14) goto LAB_03c2cc88;
LAB_03c2cf64:
  plVar16 = (long *)(lVar11 + 8);
  goto LAB_03c2cc18;
}

