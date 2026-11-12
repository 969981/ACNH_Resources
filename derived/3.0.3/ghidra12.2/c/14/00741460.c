
void FUN_00741460(long param_1)

{
  MutexType *pMVar1;
  MutexType *pMVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  long *plVar22;
  uint uVar23;
  undefined8 local_d0;
  undefined **local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined2 local_b0;
  undefined1 local_ae;
  undefined8 local_a8;
  undefined8 local_a0;
  long lStack_98;
  long local_90;
  undefined8 uStack_88;
  long local_80;
  undefined *local_78;
  char *local_70;
  
  pMVar1 = (MutexType *)(param_1 + 0x1a0);
  *(int *)(param_1 + 0x5ec) = *(int *)(param_1 + 0x5ec) + 1;
  nn::os::LockMutex(pMVar1);
  puVar4 = PTR_DAT_04bb5070;
  puVar3 = PTR_DAT_04bb2020;
  if (*(long *)(param_1 + 0x168) != param_1 + 0x168) {
    lVar15 = (long)*(int *)(param_1 + 0x17c);
    pMVar2 = (MutexType *)(param_1 + 0x548);
    lVar21 = *(long *)(param_1 + 0x168) - lVar15;
    plVar22 = (long *)(lVar21 + lVar15);
    do {
      plVar22 = (long *)*plVar22;
      if ((*(byte *)(lVar21 + 0x225) & 1) == 0) {
        nn::os::LockMutex(pMVar1);
        plVar18 = (long *)(lVar21 + *(int *)(param_1 + 0x17c));
        if (*plVar18 != 0) {
          *(long *)(*plVar18 + 8) = plVar18[1];
        }
        if ((long *)plVar18[1] != (long *)0x0) {
          *(long *)plVar18[1] = *plVar18;
        }
        *plVar18 = 0;
        plVar18[1] = 0;
        *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + -1;
        nn::os::UnlockMutex(pMVar1);
        puVar13 = (uint *)(lVar21 + 0x248);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar13,0x10);
          if (bVar7) {
            *puVar13 = *puVar13 & 0xfffffeff;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        FUN_006fb3d0(lVar21);
        nn::os::LockMutex(pMVar2);
        puVar13 = *(uint **)(param_1 + 0x1c0);
        uVar20 = *(uint *)(lVar21 + 0x230) >> 0x14;
        uVar5 = uVar20;
        if (*puVar13 <= uVar20) {
          uVar5 = 0;
        }
        *(undefined8 *)(*(long *)(puVar13 + 2) + (ulong)uVar5 * 8) = 0;
        if (uVar20 < puVar13[4]) {
          puVar13[4] = uVar20;
        }
        plVar16 = *(long **)(puVar13 + 2);
        plVar18 = *(long **)(puVar13 + 6);
        if ((plVar18 != plVar16) && (plVar18 == plVar16 + (ulong)uVar20 + 1)) {
          do {
            plVar18 = plVar18 + -1;
            if (*plVar18 != 0) break;
            *(long **)(puVar13 + 6) = plVar18;
          } while (plVar18 != plVar16);
        }
        nn::os::UnlockMutex(pMVar2);
        lVar14 = *(long *)(param_1 + 0x470);
        lVar12 = *(long *)(lVar14 + 0x20);
        puVar8 = puVar3;
        puVar9 = puVar4;
joined_r0x00741760:
        if (lVar12 != 0) {
          local_78 = puVar8 + 0x10;
          local_b8 = puVar9 + 0x10;
          local_b0 = 0;
          local_a8 = 0;
          local_d0 = 0;
          local_ae = 2;
          local_a0 = *(undefined8 *)(lVar14 + 8);
          uStack_88 = 0;
          local_70 = "ActorDelete";
          local_c8 = &local_b8;
          uStack_c0 = 0;
          lStack_98 = param_1 + 0x4b8;
          local_90 = lVar21;
          local_80 = param_1 + 0x4f8;
          FUN_03f45184(lVar12,&local_d0);
        }
      }
      else if ((*(uint *)(lVar21 + 0x248) >> 1 & 1) != 0) {
        nn::os::LockMutex(pMVar1);
        plVar18 = (long *)(lVar21 + *(int *)(param_1 + 0x17c));
        if (*plVar18 != 0) {
          *(long *)(*plVar18 + 8) = plVar18[1];
        }
        if ((long *)plVar18[1] != (long *)0x0) {
          *(long *)plVar18[1] = *plVar18;
        }
        *plVar18 = 0;
        plVar18[1] = 0;
        puVar13 = (uint *)(lVar21 + 0x248);
        *(int *)(param_1 + 0x178) = *(int *)(param_1 + 0x178) + -1;
        nn::os::UnlockMutex(pMVar1);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar13,0x10);
          if (bVar7) {
            *puVar13 = *puVar13 & 0xfffffeff;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        nn::os::LockMutex(pMVar2);
        uVar20 = *(uint *)(lVar21 + 0x230) >> 0x14;
        puVar13 = *(uint **)(param_1 + 0x1c0);
        uVar5 = uVar20;
        if (*puVar13 <= uVar20) {
          uVar5 = 0;
        }
        *(undefined8 *)(*(long *)(puVar13 + 2) + (ulong)uVar5 * 8) = 0;
        if (uVar20 < puVar13[4]) {
          puVar13[4] = uVar20;
        }
        plVar16 = *(long **)(puVar13 + 2);
        plVar18 = *(long **)(puVar13 + 6);
        if ((plVar18 != plVar16) && (plVar18 == plVar16 + (ulong)uVar20 + 1)) {
          do {
            plVar18 = plVar18 + -1;
            if (*plVar18 != 0) break;
            *(long **)(puVar13 + 6) = plVar18;
          } while (plVar18 != plVar16);
        }
        nn::os::UnlockMutex(pMVar2);
        lVar14 = *(long *)(param_1 + 0x470);
        lVar12 = *(long *)(lVar14 + 0x20);
        puVar8 = PTR_DAT_04bb2020;
        puVar9 = PTR_DAT_04bb5070;
        goto joined_r0x00741760;
      }
      lVar21 = (long)plVar22 - lVar15;
    } while (lVar21 != (param_1 + 0x168) - lVar15);
  }
  nn::os::UnlockMutex(pMVar1);
  pMVar1 = (MutexType *)(param_1 + 0x148);
  plVar22 = (long *)(param_1 + 0x110);
  nn::os::LockMutex(pMVar1);
  if (*(long **)(param_1 + 0x110) != plVar22) {
    lVar15 = (long)*(int *)(param_1 + 0x124);
    lVar21 = (long)*(long **)(param_1 + 0x110) - lVar15;
    plVar18 = (long *)(lVar21 + lVar15);
    puVar3 = PTR_DAT_04bb5070 + 0x10;
    puVar4 = PTR_DAT_04bb2020 + 0x10;
    do {
      plVar18 = (long *)*plVar18;
      if ((*(uint *)(lVar21 + 0x248) >> 0x10 & 1) != 0) {
        FUN_006fb3d0(lVar21);
      }
      puVar13 = (uint *)(lVar21 + 0x248);
      uVar5 = *puVar13;
      if (((*puVar13 >> 1 & 1) == 0) || ((*puVar13 >> 2 & 1) == 0)) {
        uVar20 = 0;
LAB_0074185c:
        uVar10 = *puVar13 >> 3 & 1;
        if (((uVar5 >> 9 & 1) != 0) || (uVar20 != 0)) goto LAB_007418f0;
        uVar20 = 0;
        if (uVar10 == 0) goto LAB_00741944;
LAB_00741954:
        FUN_006faf20(lVar21);
      }
      else {
        if (*(long *)(lVar21 + 0xb0) != lVar21 + 0xa8) {
          lVar14 = (long)*(int *)(lVar21 + 0xbc);
          uVar20 = 1;
          plVar16 = (long *)(*(long *)(lVar21 + 0xb0) - lVar14);
          do {
            uVar10 = (**(code **)(*plVar16 + 200))(plVar16);
            uVar20 = uVar20 & uVar10;
            plVar16 = (long *)(*(long *)((long)plVar16 + lVar14 + 8) - lVar14);
          } while (plVar16 != (long *)((lVar21 + 0xa8) - lVar14));
          goto LAB_0074185c;
        }
        uVar20 = 1;
        uVar10 = *puVar13 >> 3 & 1;
LAB_007418f0:
        nn::os::LockMutex(pMVar1);
        plVar16 = (long *)(lVar21 + *(int *)(param_1 + 0x124));
        if (*plVar16 != 0) {
          *(long *)(*plVar16 + 8) = plVar16[1];
        }
        if ((long *)plVar16[1] != (long *)0x0) {
          *(long *)plVar16[1] = *plVar16;
        }
        *plVar16 = 0;
        plVar16[1] = 0;
        *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + -1;
        nn::os::UnlockMutex(pMVar1);
        if (uVar10 != 0) goto LAB_00741954;
LAB_00741944:
        if (uVar20 != 0) goto LAB_00741954;
      }
      if ((uVar5 >> 9 & 1) != 0) {
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar13,0x10);
          if (bVar7) {
            *puVar13 = *puVar13 & 0xfffffdff;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar13,0x10);
          if (bVar7) {
            *puVar13 = *puVar13 & 0xfffffeff | 0x100;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (*(int *)(lVar21 + 0x238) != 0) {
          *(int *)(lVar21 + 0x234) = *(int *)(lVar21 + 0x238);
          *(undefined4 *)(lVar21 + 0x238) = 0;
          *(undefined4 *)(lVar21 + 0x24c) = 0xffffffff;
        }
        nn::os::LockMutex((MutexType *)(param_1 + 0xf0));
        plVar16 = (long *)(lVar21 + *(int *)(param_1 + 0xcc));
        lVar14 = *(long *)(param_1 + 0xb8);
        *(long **)(param_1 + 0xb8) = plVar16;
        *plVar16 = lVar14;
        plVar16[1] = param_1 + 0xb8;
        if (lVar14 != 0) {
          *(long **)(lVar14 + 8) = plVar16;
        }
        *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
        nn::os::UnlockMutex((MutexType *)(param_1 + 0xf0));
      }
      if (uVar20 != 0) {
        nn::os::LockMutex((MutexType *)(param_1 + 0x548));
        puVar13 = *(uint **)(param_1 + 0x1c0);
        uVar20 = *(uint *)(lVar21 + 0x230) >> 0x14;
        uVar5 = uVar20;
        if (*puVar13 <= uVar20) {
          uVar5 = 0;
        }
        *(undefined8 *)(*(long *)(puVar13 + 2) + (ulong)uVar5 * 8) = 0;
        if (uVar20 < puVar13[4]) {
          puVar13[4] = uVar20;
        }
        plVar17 = *(long **)(puVar13 + 2);
        plVar16 = *(long **)(puVar13 + 6);
        if ((plVar16 != plVar17) && (plVar16 == plVar17 + (ulong)uVar20 + 1)) {
          do {
            plVar16 = plVar16 + -1;
            if (*plVar16 != 0) break;
            *(long **)(puVar13 + 6) = plVar16;
          } while (plVar16 != plVar17);
        }
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x548));
        lVar14 = *(long *)(*(long *)(param_1 + 0x470) + 0x20);
        if (lVar14 != 0) {
          local_b0 = 0;
          local_a8 = 0;
          local_d0 = 0;
          local_ae = 2;
          local_a0 = *(undefined8 *)(*(long *)(param_1 + 0x470) + 8);
          uStack_88 = 0;
          local_c8 = &local_b8;
          local_70 = "ActorDelete";
          uStack_c0 = 0;
          local_b8 = puVar3;
          lStack_98 = param_1 + 0x4b8;
          local_90 = lVar21;
          local_80 = param_1 + 0x4f8;
          local_78 = puVar4;
          FUN_03f45184(lVar14,&local_d0);
        }
      }
      lVar21 = (long)plVar18 - lVar15;
    } while (lVar21 != (long)plVar22 - lVar15);
  }
  nn::os::UnlockMutex(pMVar1);
  pMVar2 = (MutexType *)(param_1 + 0xf0);
  nn::os::LockMutex(pMVar2);
  if (*(long *)(param_1 + 0xc0) != param_1 + 0xb8) {
    lVar15 = (long)*(int *)(param_1 + 0xcc);
    plVar18 = (long *)(*(long *)(param_1 + 0xc0) - lVar15);
    lVar21 = (long)plVar18 + lVar15;
    do {
      lVar21 = *(long *)(lVar21 + 8);
      puVar13 = (uint *)(plVar18 + 0x49);
      uVar5 = *(uint *)(plVar18 + 0x49);
      uVar20 = *(uint *)(plVar18 + 0x49);
      uVar10 = *(uint *)(plVar18 + 0x49);
      if ((uVar5 >> 4 & 1) == 0) {
        if ((*puVar13 >> 4 & 1) == 0) {
          if ((long *)plVar18[0x16] != plVar18 + 0x15) {
            lVar14 = (long)*(int *)((long)plVar18 + 0xbc);
            uVar23 = 1;
            plVar16 = (long *)(plVar18[0x16] - lVar14);
            do {
              uVar11 = (**(code **)(*plVar16 + 0xc0))(plVar16);
              uVar23 = uVar23 & uVar11;
              plVar16 = (long *)(*(long *)((long)plVar16 + lVar14 + 8) - lVar14);
            } while (plVar16 != (long *)((long)(plVar18 + 0x15) - lVar14));
            if ((uVar23 == 0) && ((uVar10 & 0x100) == 0 || (uVar20 & 0x400) == 0))
            goto LAB_00741d0c;
          }
        }
LAB_00741bec:
        nn::os::LockMutex(pMVar2);
        plVar16 = (long *)((long)plVar18 + (long)*(int *)(param_1 + 0xcc));
        if (*plVar16 != 0) {
          *(long *)(*plVar16 + 8) = plVar16[1];
        }
        if ((long *)plVar16[1] != (long *)0x0) {
          *(long *)plVar16[1] = *plVar16;
        }
        *plVar16 = 0;
        plVar16[1] = 0;
        *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + -1;
        nn::os::UnlockMutex(pMVar2);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar13,0x10);
          if (bVar7) {
            *puVar13 = *puVar13 & 0xfffffeff;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((uVar5 >> 4 & 1) == 0) {
          (**(code **)(*plVar18 + 0x30))(plVar18);
        }
        nn::os::LockMutex(pMVar1);
        if (*(long **)(param_1 + 0x118) != plVar22) {
          lVar12 = (long)*(int *)(param_1 + 0x124);
          lVar14 = (long)*(long **)(param_1 + 0x118) - lVar12;
          do {
            if (*(float *)(plVar18 + 0x4a) <= *(float *)(lVar14 + 0x250)) {
              nn::os::LockMutex(pMVar1);
              lVar12 = (long)*(int *)(param_1 + 0x124);
              plVar16 = (long *)(lVar14 + lVar12);
              goto LAB_00741cd4;
            }
            lVar14 = *(long *)(lVar14 + lVar12 + 8) - lVar12;
          } while (lVar14 != (long)plVar22 - lVar12);
        }
        nn::os::LockMutex(pMVar1);
        lVar12 = (long)*(int *)(param_1 + 0x124);
        plVar16 = plVar22;
LAB_00741cd4:
        lVar14 = *plVar16;
        plVar18 = (long *)(lVar12 + (long)plVar18);
        *plVar16 = (long)plVar18;
        *plVar18 = lVar14;
        plVar18[1] = (long)plVar16;
        if (lVar14 != 0) {
          *(long **)(lVar14 + 8) = plVar18;
        }
        *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
        nn::os::UnlockMutex(pMVar1);
        nn::os::UnlockMutex(pMVar1);
      }
      else if (((uVar20 >> 10 & 1) != 0) && ((uVar10 >> 8 & 1) != 0)) goto LAB_00741bec;
LAB_00741d0c:
      if ((uVar20 >> 10 & 1) != 0) {
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar13,0x10);
          if (bVar7) {
            *puVar13 = *puVar13 & 0xfffffbff;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      plVar18 = (long *)(lVar21 - lVar15);
    } while (plVar18 != (long *)((param_1 + 0xb8) - lVar15));
  }
  nn::os::UnlockMutex(pMVar2);
  *(undefined4 *)(param_1 + 0x278) = 0;
  nn::os::LockMutex(pMVar1);
  if (*(long **)(param_1 + 0x118) != plVar22) {
    lVar15 = (long)*(int *)(param_1 + 0x124);
    lVar21 = (long)*(long **)(param_1 + 0x118) - lVar15;
    do {
      if ((*(uint *)(lVar21 + 0x248) >> 4 & 1) == 0) {
        lVar14 = lVar21 + 0xa8;
        if (*(long *)(lVar21 + 0xb0) != lVar14) {
          lVar12 = (long)*(int *)(lVar21 + 0xbc);
          plVar18 = (long *)(*(long *)(lVar21 + 0xb0) - lVar12);
          do {
            (**(code **)(*plVar18 + 0x58))(plVar18);
            plVar18 = (long *)(*(long *)((long)plVar18 + lVar12 + 8) - lVar12);
          } while (plVar18 != (long *)(lVar14 - lVar12));
          if (*(long *)(lVar21 + 0xb0) != lVar14) {
            lVar19 = (long)*(int *)(lVar21 + 0xbc);
            lVar12 = *(long *)(lVar21 + 0xb0) - lVar19;
            do {
              if (((*(uint *)(lVar12 + 0x178) ^ 0xffffffff) & 6) == 0) {
                (**(code **)(*(long *)(lVar12 + 0x58) + 0x18))();
              }
              lVar12 = *(long *)(lVar12 + lVar19 + 8) - lVar19;
            } while (lVar14 - lVar19 != lVar12);
          }
        }
        FUN_006fa6b0(lVar21);
        if (*(long *)(lVar21 + 0xb0) != lVar14) {
          lVar12 = (long)*(int *)(lVar21 + 0xbc);
          plVar18 = (long *)(*(long *)(lVar21 + 0xb0) - lVar12);
          do {
            (**(code **)(*plVar18 + 0x60))(plVar18);
            plVar18 = (long *)(*(long *)((long)plVar18 + lVar12 + 8) - lVar12);
          } while (plVar18 != (long *)(lVar14 - lVar12));
        }
        puVar13 = (uint *)(lVar21 + 0x248);
        uVar5 = *puVar13;
        if ((uVar5 >> 3 & 1) != 0) {
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar13,0x10);
            if (bVar7) {
              *puVar13 = *puVar13 & 0xfffffff7;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar13,0x10);
          if (bVar7) {
            *puVar13 = *puVar13 & 0xffffffef | 0x10;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if ((uVar5 >> 3 & 1) == 0) {
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(puVar13,0x10);
            if (bVar7) {
              *puVar13 = *puVar13 & 0xffffff7f | 0x80;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
        }
      }
      if (*(int *)(param_1 + 0x278) < *(int *)(param_1 + 0x27c)) {
        *(long *)(*(long *)(param_1 + 0x280) + (long)*(int *)(param_1 + 0x278) * 8) = lVar21;
        *(int *)(param_1 + 0x278) = *(int *)(param_1 + 0x278) + 1;
      }
      lVar21 = *(long *)(lVar21 + lVar15 + 8) - lVar15;
    } while (lVar21 != (long)plVar22 - lVar15);
  }
  nn::os::UnlockMutex(pMVar1);
  *(undefined4 *)(param_1 + 0x348) = 0;
  DataMemoryBarrier(2,3);
  nn::os::ClearLightEvent((LightEventType *)(param_1 + 0x370));
  *(undefined4 *)(param_1 + 0x390) = 0;
  DataMemoryBarrier(2,3);
  nn::os::ClearLightEvent((LightEventType *)(param_1 + 0x3b8));
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  DataMemoryBarrier(2,3);
  nn::os::ClearLightEvent((LightEventType *)(param_1 + 0x400));
  *(undefined4 *)(param_1 + 0x420) = 0;
  DataMemoryBarrier(2,3);
  nn::os::ClearLightEvent((LightEventType *)(param_1 + 0x448));
  *(undefined4 *)(param_1 + 0x298) = 0;
  DataMemoryBarrier(2,3);
  nn::os::ClearLightEvent((LightEventType *)(param_1 + 0x2c0));
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  DataMemoryBarrier(2,3);
  nn::os::ClearLightEvent((LightEventType *)(param_1 + 0x308));
  *(undefined4 *)(param_1 + 0x288) = 0;
  DataMemoryBarrier(2,3);
  *(undefined4 *)(param_1 + 0x270) = 0xffffffff;
  lVar21 = param_1 + 0x210;
  *(undefined8 *)(param_1 + 0x268) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x274) = 0;
  lVar15 = *(long *)(*(long *)(param_1 + 600) + 0x20);
  if (lVar15 != 0) {
    local_b8 = PTR_DAT_04bb5070 + 0x10;
    local_b0 = 0;
    local_78 = PTR_DAT_04bb2020 + 0x10;
    local_a8 = 0;
    local_d0 = 0;
    local_ae = 1;
    local_a0 = *(undefined8 *)(*(long *)(param_1 + 600) + 8);
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    local_70 = "ActorMultiCalc";
    local_c8 = &local_b8;
    uStack_c0 = 0;
    lStack_98 = lVar21;
    FUN_03f45184(lVar15,&local_d0);
  }
  lVar15 = param_1 + 0x230;
  lVar14 = *(long *)(*(long *)(param_1 + 0x260) + 0x20);
  if (lVar14 != 0) {
    local_b8 = PTR_DAT_04bb5070 + 0x10;
    local_b0 = 0;
    local_78 = PTR_DAT_04bb2020 + 0x10;
    local_a8 = 0;
    local_d0 = 0;
    local_ae = 1;
    local_a0 = *(undefined8 *)(*(long *)(param_1 + 0x260) + 8);
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    local_70 = "ActorMultiCalc";
    local_c8 = &local_b8;
    uStack_c0 = 0;
    lStack_98 = lVar15;
    FUN_03f45184(lVar14,&local_d0);
  }
  FUN_007410b0(param_1);
  *(undefined4 *)(param_1 + 0x288) = 1;
  DataMemoryBarrier(2,3);
  nn::os::LockMutex(pMVar1);
  if (*(long **)(param_1 + 0x118) != plVar22) {
    lVar12 = (long)*(int *)(param_1 + 0x124);
    lVar14 = (long)*(long **)(param_1 + 0x118) - lVar12;
    do {
      FUN_006faa20(lVar14,*(undefined4 *)(param_1 + 0x288));
      lVar14 = *(long *)(lVar14 + lVar12 + 8) - lVar12;
    } while (lVar14 != (long)plVar22 - lVar12);
  }
  nn::os::UnlockMutex(pMVar1);
  *(undefined4 *)(param_1 + 0x288) = 2;
  DataMemoryBarrier(2,3);
  *(undefined4 *)(param_1 + 0x270) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x268) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x274) = 0;
  lVar14 = *(long *)(*(long *)(param_1 + 600) + 0x20);
  if (lVar14 != 0) {
    local_b8 = PTR_DAT_04bb5070 + 0x10;
    local_b0 = 0;
    local_78 = PTR_DAT_04bb2020 + 0x10;
    local_a8 = 0;
    local_d0 = 0;
    local_ae = 1;
    local_a0 = *(undefined8 *)(*(long *)(param_1 + 600) + 8);
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    local_70 = "ActorMultiCalc";
    local_c8 = &local_b8;
    uStack_c0 = 0;
    lStack_98 = lVar21;
    FUN_03f45184(lVar14,&local_d0);
  }
  lVar14 = *(long *)(*(long *)(param_1 + 0x260) + 0x20);
  if (lVar14 != 0) {
    local_b8 = PTR_DAT_04bb5070 + 0x10;
    local_b0 = 0;
    local_78 = PTR_DAT_04bb2020 + 0x10;
    local_a8 = 0;
    local_d0 = 0;
    local_ae = 1;
    local_a0 = *(undefined8 *)(*(long *)(param_1 + 0x260) + 8);
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    local_70 = "ActorMultiCalc";
    local_c8 = &local_b8;
    uStack_c0 = 0;
    lStack_98 = lVar15;
    FUN_03f45184(lVar14,&local_d0);
  }
  FUN_007410b0(param_1);
  *(undefined4 *)(param_1 + 0x288) = 3;
  DataMemoryBarrier(2,3);
  *(undefined4 *)(param_1 + 0x270) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x268) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x274) = 0;
  lVar14 = *(long *)(*(long *)(param_1 + 600) + 0x20);
  if (lVar14 != 0) {
    local_b8 = PTR_DAT_04bb5070 + 0x10;
    local_b0 = 0;
    local_78 = PTR_DAT_04bb2020 + 0x10;
    local_a8 = 0;
    local_d0 = 0;
    local_ae = 1;
    local_a0 = *(undefined8 *)(*(long *)(param_1 + 600) + 8);
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    local_70 = "ActorMultiCalc";
    local_c8 = &local_b8;
    uStack_c0 = 0;
    lStack_98 = lVar21;
    FUN_03f45184(lVar14,&local_d0);
  }
  lVar21 = *(long *)(*(long *)(param_1 + 0x260) + 0x20);
  if (lVar21 != 0) {
    local_b0 = 0;
    local_b8 = PTR_DAT_04bb5070 + 0x10;
    local_78 = PTR_DAT_04bb2020 + 0x10;
    local_a8 = 0;
    local_d0 = 0;
    local_ae = 1;
    local_a0 = *(undefined8 *)(*(long *)(param_1 + 0x260) + 8);
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    local_70 = "ActorMultiCalc";
    local_c8 = &local_b8;
    uStack_c0 = 0;
    lStack_98 = lVar15;
    FUN_03f45184(lVar21,&local_d0);
  }
  FUN_007410b0(param_1);
  *(undefined4 *)(param_1 + 0x288) = 0xffffffff;
  return;
}

