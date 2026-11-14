
undefined8 FUN_0159a190(long param_1,long *param_2)

{
  long *plVar1;
  MutexType *pMVar2;
  int *piVar3;
  undefined2 *puVar4;
  MutexType *pMVar5;
  ushort uVar6;
  undefined2 uVar7;
  char cVar8;
  undefined *puVar9;
  bool bVar10;
  long *plVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined8 local_c8;
  undefined **local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined8 local_a0;
  undefined8 local_98;
  long lStack_90;
  long local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined *local_70;
  char *local_68;
  short local_44 [2];
  
  lVar13 = *param_2;
  if (lVar13 == 0) {
    return 0;
  }
  plVar1 = (long *)(param_1 + 0xd3e50);
  puVar4 = (undefined2 *)(lVar13 + 0x4018);
  if (*(uint *)(lVar13 + 0x4040) - 1 < 3) {
    pMVar5 = (MutexType *)(lVar13 + 0x4088);
    nn::os::LockMutex(pMVar5);
    if ((*(ushort *)(lVar13 + 0x4050) >> 5 & 1) == 0) {
      *(undefined4 *)(lVar13 + 0x4054) = 3;
      nn::os::UnlockMutex(pMVar5);
      uVar6 = *(ushort *)(lVar13 + 0x4050);
      FUN_007ef010(local_44,puVar4);
      lVar16 = *(long *)(lVar13 + 0x4020);
      if ((uVar6 >> 7 & 1) == 0) {
        lVar14 = *(long *)(lVar13 + 0x4058);
        nn::os::LockMutex((MutexType *)(lVar14 + 0x38));
        if (*(int *)(lVar14 + 0x10) < 1) {
          plVar11 = (long *)0x0;
        }
        else {
          plVar11 = *(long **)(lVar14 + 8);
          if (*plVar11 != 0) {
            *(long *)(*plVar11 + 8) = plVar11[1];
          }
          if ((long *)plVar11[1] != (long *)0x0) {
            *(long *)plVar11[1] = *plVar11;
          }
          *plVar11 = 0;
          plVar11[1] = 0;
          *(int *)(lVar14 + 0x10) = *(int *)(lVar14 + 0x10) + -1;
        }
        lVar15 = 0;
        if (plVar11 != (long *)0x0) {
          lVar15 = (long)plVar11 - (long)*(int *)(lVar14 + 0x14);
        }
        nn::os::UnlockMutex((MutexType *)(lVar14 + 0x38));
        if (lVar15 == 0) goto LAB_0159a8ec;
        *(undefined4 *)(lVar13 + 0x4054) = 4;
        *(long *)(lVar15 + 0x3c8) = lVar16;
        *(short *)(lVar15 + 0x3c4) = local_44[0];
        if ((*(byte *)(lVar13 + 0x4050) & 1) != 0) {
          piVar3 = (int *)(lVar15 + 0x3c0);
          do {
            cVar8 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar10) {
              *piVar3 = *piVar3 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
      }
      else {
        plVar11 = *(long **)(lVar13 + 0x4060);
        pMVar2 = (MutexType *)(plVar11 + 7);
        nn::os::LockMutex(pMVar2);
        if ((long *)*plVar11 != plVar11) {
          lVar14 = (long)*(int *)((long)plVar11 + 0x14);
          lVar15 = *plVar11 - lVar14;
LAB_0159a3c0:
          if ((*(short *)(lVar15 + 0x3c4) != local_44[0]) || (*(long *)(lVar15 + 0x3c8) != lVar16))
          goto LAB_0159a3b0;
          nn::os::UnlockMutex(pMVar2);
          piVar3 = (int *)(lVar15 + 0x3c0);
          *(undefined4 *)(lVar13 + 0x4054) = 4;
          if ((*(ushort *)(lVar13 + 0x4050) & 1) == 0) {
            iVar12 = *piVar3;
          }
          else {
            do {
              iVar12 = *piVar3;
              cVar8 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar10) {
                *piVar3 = iVar12 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
          }
          if (iVar12 < 1) {
            bVar10 = true;
LAB_0159a8dc:
            FUN_015a2270(lVar15,lVar13,bVar10);
            goto joined_r0x0159a8e8;
          }
          bVar10 = (*(ushort *)(lVar15 + 0x4b0) & 1) == 0;
          if ((*(int *)(lVar13 + 0x4040) == 2) || ((*(ushort *)(lVar15 + 0x4b0) & 1) == 0))
          goto LAB_0159a8dc;
          goto LAB_0159a704;
        }
LAB_0159a494:
        nn::os::UnlockMutex(pMVar2);
        lVar15 = *(long *)(lVar13 + 0x4058);
        nn::os::LockMutex((MutexType *)(lVar15 + 0x38));
        if (*(int *)(lVar15 + 0x10) < 1) {
          plVar11 = (long *)0x0;
        }
        else {
          plVar11 = *(long **)(lVar15 + 8);
          if (*plVar11 != 0) {
            *(long *)(*plVar11 + 8) = plVar11[1];
          }
          if ((long *)plVar11[1] != (long *)0x0) {
            *(long *)plVar11[1] = *plVar11;
          }
          *plVar11 = 0;
          plVar11[1] = 0;
          *(int *)(lVar15 + 0x10) = *(int *)(lVar15 + 0x10) + -1;
        }
        iVar12 = *(int *)(lVar15 + 0x14);
        nn::os::UnlockMutex((MutexType *)(lVar15 + 0x38));
        if ((plVar11 == (long *)0x0) || (lVar15 = (long)plVar11 - (long)iVar12, lVar15 == 0)) {
          if ((*(ushort *)(lVar13 + 0x4050) >> 3 & 1) == 0) {
            lVar15 = FUN_015a26c0(*(undefined8 *)(lVar13 + 0x4060),
                                  *(ushort *)(lVar13 + 0x4050) >> 2 & 1);
          }
          else {
            lVar15 = FUN_015a25b0(*(undefined8 *)(lVar13 + 0x4060));
          }
          if (lVar15 == 0) goto LAB_0159a8ec;
        }
        *(undefined4 *)(lVar13 + 0x4054) = 4;
        *(long *)(lVar15 + 0x3c8) = lVar16;
        *(short *)(lVar15 + 0x3c4) = local_44[0];
        if ((*(byte *)(lVar13 + 0x4050) & 1) != 0) {
          piVar3 = (int *)(lVar15 + 0x3c0);
          do {
            cVar8 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar10) {
              *piVar3 = *piVar3 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
      }
      FUN_015a2270(lVar15,lVar13,1);
      plVar17 = *(long **)(lVar13 + 0x4060);
      nn::os::LockMutex((MutexType *)(plVar17 + 7));
      plVar11 = (long *)(*(int *)((long)plVar17 + 0x14) + lVar15);
      lVar16 = *plVar17;
      *plVar17 = (long)plVar11;
      *plVar11 = lVar16;
      plVar11[1] = (long)plVar17;
      if (lVar16 != 0) {
        *(long **)(lVar16 + 8) = plVar11;
      }
      *(int *)(plVar17 + 2) = (int)plVar17[2] + 1;
      nn::os::UnlockMutex((MutexType *)(plVar17 + 7));
joined_r0x0159a8e8:
      if (lVar15 == 0) {
LAB_0159a8ec:
        lVar16 = *(long *)(*(long *)(param_1 + 0x270) + 0x20);
        if (lVar16 == 0) {
          return 1;
        }
        local_a8 = 0;
        local_b0 = PTR_DAT_04bb5070 + 0x10;
        local_70 = PTR_DAT_04bb2020 + 0x10;
        local_a0 = 0;
        local_c8 = 0;
        local_a6 = 1;
        lStack_90 = param_1 + 0x278;
        local_98 = *(undefined8 *)(*(long *)(param_1 + 0x270) + 8);
        uStack_80 = 0;
        local_78 = 0;
        local_68 = "Convert(WaitForReserveMyDesignData)";
        local_c0 = &local_b0;
        uStack_b8 = 0;
        local_88 = lVar13;
        FUN_03f45184(lVar16,&local_c8);
        return 1;
      }
LAB_0159a704:
      nn::os::LockMutex(pMVar5);
      if ((*(ushort *)(lVar13 + 0x4050) >> 5 & 1) == 0) {
LAB_0159a714:
        *(long *)(lVar13 + 0x4048) = lVar15;
        *(undefined4 *)(lVar13 + 0x4054) = 5;
        goto LAB_0159a894;
      }
      piVar3 = (int *)(lVar15 + 0x3c0);
      do {
        iVar12 = *piVar3;
        cVar8 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar10) {
          *piVar3 = iVar12 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
LAB_0159a740:
      puVar9 = PTR_DAT_04bb3170;
      if (iVar12 < 2) {
        *(undefined8 *)(lVar15 + 0x3c8) = 0;
        *(undefined2 *)(lVar15 + 0x3c4) = *(undefined2 *)puVar9;
        *(ushort *)(lVar15 + 0x4b0) = *(ushort *)(lVar15 + 0x4b0) & 0xfffe;
        *(undefined8 **)(lVar15 + 0x3a8) = &DAT_0407ebb1;
        *(undefined4 *)(lVar15 + 0x3c0) = 0;
        lVar16 = *(long *)(lVar13 + 0x4060);
        nn::os::LockMutex((MutexType *)(lVar16 + 0x38));
        plVar11 = (long *)(*(int *)(lVar16 + 0x14) + lVar15);
        if (*plVar11 != 0) {
          *(long *)(*plVar11 + 8) = plVar11[1];
        }
        if ((long *)plVar11[1] != (long *)0x0) {
          *(long *)plVar11[1] = *plVar11;
        }
        *plVar11 = 0;
        plVar11[1] = 0;
        *(int *)(lVar16 + 0x10) = *(int *)(lVar16 + 0x10) + -1;
        nn::os::UnlockMutex((MutexType *)(lVar16 + 0x38));
        plVar17 = *(long **)(lVar13 + 0x4058);
        nn::os::LockMutex((MutexType *)(plVar17 + 7));
        plVar11 = (long *)(*(int *)((long)plVar17 + 0x14) + lVar15);
        lVar16 = *plVar17;
        *plVar17 = (long)plVar11;
        *plVar11 = lVar16;
        plVar11[1] = (long)plVar17;
        if (lVar16 != 0) {
          *(long **)(lVar16 + 8) = plVar11;
        }
        *(int *)(plVar17 + 2) = (int)plVar17[2] + 1;
        nn::os::UnlockMutex((MutexType *)(plVar17 + 7));
      }
    }
  }
  else {
    if ((*(uint *)(lVar13 + 0x4040) & 0xfffffffe) != 4) {
      return 0;
    }
    pMVar5 = (MutexType *)(lVar13 + 0x4088);
    nn::os::LockMutex(pMVar5);
    if ((*(ushort *)(lVar13 + 0x4050) >> 5 & 1) == 0) {
      *(undefined4 *)(lVar13 + 0x4054) = 3;
      nn::os::UnlockMutex(pMVar5);
      FUN_007ef010(local_44,puVar4);
      plVar11 = *(long **)(lVar13 + 0x4060);
      pMVar2 = (MutexType *)(plVar11 + 7);
      lVar16 = *(long *)(lVar13 + 0x4020);
      nn::os::LockMutex(pMVar2);
      if ((long *)*plVar11 != plVar11) {
        lVar14 = (long)*(int *)((long)plVar11 + 0x14);
        lVar15 = *plVar11 - lVar14;
LAB_0159a300:
        if ((*(short *)(lVar15 + 0x3c4) != local_44[0]) || (*(long *)(lVar15 + 0x3c8) != lVar16))
        goto LAB_0159a2f0;
        nn::os::UnlockMutex(pMVar2);
        piVar3 = (int *)(lVar15 + 0x3c0);
        *(undefined4 *)(lVar13 + 0x4054) = 4;
        if ((*(ushort *)(lVar13 + 0x4050) & 1) == 0) {
          iVar12 = *piVar3;
        }
        else {
          do {
            iVar12 = *piVar3;
            cVar8 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar10) {
              *piVar3 = iVar12 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
        }
        if (iVar12 < 1) {
          bVar10 = true;
LAB_0159a8c4:
          FUN_015a27e0(lVar15,lVar13,bVar10);
          goto joined_r0x0159a8d0;
        }
        bVar10 = (*(ushort *)(lVar15 + 0x4b0) & 1) == 0;
        if ((*(int *)(lVar13 + 0x4040) == 5) || ((*(ushort *)(lVar15 + 0x4b0) & 1) == 0))
        goto LAB_0159a8c4;
        goto LAB_0159a644;
      }
LAB_0159a438:
      nn::os::UnlockMutex(pMVar2);
      lVar15 = *(long *)(lVar13 + 0x4058);
      nn::os::LockMutex((MutexType *)(lVar15 + 0x38));
      if (*(int *)(lVar15 + 0x10) < 1) {
        plVar11 = (long *)0x0;
      }
      else {
        plVar11 = *(long **)(lVar15 + 8);
        if (*plVar11 != 0) {
          *(long *)(*plVar11 + 8) = plVar11[1];
        }
        if ((long *)plVar11[1] != (long *)0x0) {
          *(long *)plVar11[1] = *plVar11;
        }
        *plVar11 = 0;
        plVar11[1] = 0;
        *(int *)(lVar15 + 0x10) = *(int *)(lVar15 + 0x10) + -1;
      }
      iVar12 = *(int *)(lVar15 + 0x14);
      nn::os::UnlockMutex((MutexType *)(lVar15 + 0x38));
      if ((plVar11 == (long *)0x0) || (lVar15 = (long)plVar11 - (long)iVar12, lVar15 == 0)) {
        if ((*(ushort *)(lVar13 + 0x4050) >> 4 & 1) == 0) {
          lVar15 = FUN_015a26c0(*(undefined8 *)(lVar13 + 0x4060),
                                *(ushort *)(lVar13 + 0x4050) >> 2 & 1);
        }
        else {
          lVar15 = FUN_015a25b0(*(undefined8 *)(lVar13 + 0x4060));
        }
        if (lVar15 == 0) goto LAB_0159a8ec;
      }
      *(undefined4 *)(lVar13 + 0x4054) = 4;
      *(long *)(lVar15 + 0x3c8) = lVar16;
      *(short *)(lVar15 + 0x3c4) = local_44[0];
      if ((*(byte *)(lVar13 + 0x4050) & 1) != 0) {
        piVar3 = (int *)(lVar15 + 0x3c0);
        do {
          cVar8 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar10) {
            *piVar3 = *piVar3 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      FUN_015a27e0(lVar15,lVar13,1);
      plVar17 = *(long **)(lVar13 + 0x4060);
      nn::os::LockMutex((MutexType *)(plVar17 + 7));
      plVar11 = (long *)(*(int *)((long)plVar17 + 0x14) + lVar15);
      lVar16 = *plVar17;
      *plVar17 = (long)plVar11;
      *plVar11 = lVar16;
      plVar11[1] = (long)plVar17;
      if (lVar16 != 0) {
        *(long **)(lVar16 + 8) = plVar11;
      }
      *(int *)(plVar17 + 2) = (int)plVar17[2] + 1;
      nn::os::UnlockMutex((MutexType *)(plVar17 + 7));
joined_r0x0159a8d0:
      if (lVar15 == 0) goto LAB_0159a8ec;
LAB_0159a644:
      nn::os::LockMutex(pMVar5);
      if ((*(ushort *)(lVar13 + 0x4050) >> 5 & 1) == 0) goto LAB_0159a714;
      piVar3 = (int *)(lVar15 + 0x3c0);
      do {
        iVar12 = *piVar3;
        cVar8 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar10) {
          *piVar3 = iVar12 + -1;
          cVar8 = ExclusiveMonitorsStatus();
        }
      } while (cVar8 != '\0');
      goto LAB_0159a740;
    }
  }
  memset((void *)(lVar13 + 0x10),0,0x4008);
  *(undefined8 **)(lVar13 + 0x4030) = &DAT_0407ebb1;
  uVar7 = *(undefined2 *)PTR_DAT_04bb3170;
  *(undefined8 *)(lVar13 + 0x4038) = 0;
  *(undefined8 *)(lVar13 + 0x4040) = 0x100000000;
  *(undefined8 *)(lVar13 + 0x4020) = 0;
  *(undefined8 *)(lVar13 + 0x4048) = 0;
  *(undefined2 *)(lVar13 + 0x4050) = 0;
  *puVar4 = uVar7;
  *(undefined4 *)(lVar13 + 0x4054) = 0;
  *(undefined8 *)(lVar13 + 0x4058) = 0;
  *(undefined8 *)(lVar13 + 0x4060) = 0;
  nn::os::LockMutex((MutexType *)(param_1 + 0xd3e88));
  plVar11 = (long *)(*(int *)(param_1 + 0xd3e64) + lVar13);
  lVar16 = *plVar1;
  *plVar1 = (long)plVar11;
  *plVar11 = lVar16;
  plVar11[1] = (long)plVar1;
  if (lVar16 != 0) {
    *(long **)(lVar16 + 8) = plVar11;
  }
  *(int *)(param_1 + 0xd3e60) = *(int *)(param_1 + 0xd3e60) + 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xd3e88));
LAB_0159a894:
  nn::os::UnlockMutex((MutexType *)(lVar13 + 0x4088));
  return 1;
LAB_0159a2f0:
  lVar15 = *(long *)(lVar15 + lVar14) - lVar14;
  if (lVar15 == (long)plVar11 - lVar14) goto LAB_0159a438;
  goto LAB_0159a300;
LAB_0159a3b0:
  lVar15 = *(long *)(lVar15 + lVar14) - lVar14;
  if (lVar15 == (long)plVar11 - lVar14) goto LAB_0159a494;
  goto LAB_0159a3c0;
}

