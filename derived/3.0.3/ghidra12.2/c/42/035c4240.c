
void FUN_035c4240(long *param_1,ulong param_2,long *param_3)

{
  MutexType *pMVar1;
  MutexType *pMVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  byte bVar9;
  char cVar10;
  undefined8 uVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  long lVar21;
  ulong *puVar22;
  ulong uVar23;
  long *plVar24;
  long *plVar25;
  long lVar26;
  long *plVar27;
  ulong uVar28;
  long *plVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  ulong *puVar33;
  long local_100;
  long *local_f8;
  undefined4 local_f0;
  long local_e8;
  long *local_e0;
  undefined8 local_d8;
  long *local_d0;
  undefined8 local_c8;
  ulong local_c0;
  long local_b8;
  ulong *local_b0;
  long local_a8;
  long local_a0;
  long *local_98;
  long local_90;
  long *local_88;
  long local_80;
  long *local_78;
  long *local_70;
  
  lVar15 = *param_1;
  bVar12 = *(char *)(lVar15 + 0xd2) == '\x03';
  bVar13 = *(char *)(lVar15 + 0xd5) != '\0';
  lVar20 = 0x720;
  if (-1 < *(char *)(lVar15 + 0x200)) {
    lVar20 = 0x71c;
  }
  if (param_2 - lVar20 <= param_2) {
    param_2 = param_2 - lVar20;
  }
  if ((long *)((long)param_3 - lVar20) <= param_3) {
    param_3 = (long *)((long)param_3 - lVar20);
  }
  if ((((bVar12 || bVar13) && *(char *)((long)param_1 + 0x29) == '\0') &&
      (uVar28 = param_1[4], uVar28 < param_2)) &&
     ((int)param_1[(ulong)((int)param_1[0xcb] - 1U & 7) * 0x17 + 0xe] != 4)) {
    FUN_035c34e0(param_1,1,uVar28);
    FUN_035c3b90(param_1,uVar28,4);
  }
  if (*(char *)((long)param_1 + 0x3f) != '\0') {
    pMVar1 = (MutexType *)(param_1 + 0x12e);
    FUN_035c7610(&local_e8,pMVar1,param_3,6);
    if (local_e8 == 0) {
      pMVar2 = (MutexType *)(param_1 + 0xd0);
LAB_035c4348:
      nn::os::LockMutex(pMVar2);
LAB_035c4374:
      if (param_1[0xdd] == 0) {
        lVar20 = param_1[0xd9];
        if ((param_1[0xd7] != -1) && ((char)lVar20 == '\0')) goto LAB_035c435c;
        nn::os::UnlockMutex(pMVar2);
        if ((char)lVar20 == '\0') {
          nn::os::LockMutex(pMVar1);
          FUN_035c7980(&local_d8,pMVar1,param_3,6);
          nn::os::UnlockMutex(pMVar1);
          plVar27 = local_e0;
          local_e8 = local_d8;
          local_e0 = local_d0;
          if (plVar27 != (long *)0x0) {
            plVar16 = plVar27 + 1;
            do {
              lVar20 = *plVar16;
              cVar10 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar12) {
                *plVar16 = lVar20 + -1;
                cVar10 = ExclusiveMonitorsStatus();
              }
            } while (cVar10 != '\0');
            if (lVar20 == 0) {
              (**(code **)(*plVar27 + 0x10))(plVar27);
              std::__shared_weak_count::__release_weak();
            }
          }
          plVar16 = (long *)param_1[0xcb];
          plVar27 = plVar16;
          if (plVar16 == (long *)param_1[0xca]) {
            plVar29 = (long *)0x0;
          }
          else {
            do {
              plVar27 = (long *)((long)plVar27 + -1);
              plVar29 = param_1 + ((ulong)plVar27 & 7) * 0x17 + 10;
              plVar16 = (long *)*plVar29;
            } while (param_3 < plVar16 && (long *)param_1[0xca] != plVar27);
          }
          local_d0 = param_3;
          if (param_3 <= plVar16) {
            local_d0 = plVar16;
          }
          local_100 = 0;
          local_f8 = (long *)0x0;
          local_c8 = param_1[6];
          local_d8 = CONCAT62(CONCAT42((int)param_1[7],*(undefined2 *)((long)param_1 + 0x2a)),
                              CONCAT11(*(char *)(*param_1 + 0xd2) == '\x03' ||
                                       *(char *)(*param_1 + 0xd5) != '\0',
                                       *(undefined1 *)((long)param_1 + 0x3f)));
          local_f0 = 0x1000002;
          FUN_035bdac8(&local_100,&local_d8,plVar29);
          lVar20 = local_e8 + 0x40;
          if (*(int *)((long)plVar29 + 0xb4) == 1) {
            if ((int)plVar29[0x16] != 1) {
              FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
            }
            lVar15 = plVar29[0x13];
            if (*(int *)((long)plVar29 + 0xb4) != 1) {
              FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
            }
            FUN_035b94c0(lVar20,lVar15 + 0x40,plVar29[0x13] + 0x21c40,plVar29[0x12],&local_100);
          }
          else {
            if ((int)plVar29[0x16] != 1) {
              FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
            }
            FUN_035b8c20(lVar20,plVar29[0x13] + 0x40,plVar29[0x13] + 0x21c40,plVar29[0x12],
                         &local_100);
            *(undefined4 *)((long)plVar29 + 0xb4) = 1;
          }
          goto LAB_035c4678;
        }
        goto LAB_035c4348;
      }
      if ((char)param_1[0xd9] == '\0') goto LAB_035c435c;
      goto LAB_035c4340;
    }
LAB_035c4678:
    if ((int)param_1[0xc4] < 1) {
      plVar27 = (long *)0x0;
LAB_035c46f8:
      FUN_035c80c0(&local_100,pMVar1,param_2,6);
      plVar29 = local_e0;
      lVar15 = local_e8;
      plVar16 = local_f8;
      lVar20 = local_100;
      if (local_e0 != (long *)0x0) {
        plVar24 = local_e0 + 1;
        do {
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar12) {
            *plVar24 = *plVar24 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      if (local_f8 != (long *)0x0) {
        plVar24 = local_f8 + 1;
        do {
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar12) {
            *plVar24 = *plVar24 + 1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
      }
      plVar24 = param_1 + 0xc2;
      FUN_035c80c0(&local_d8,pMVar1,param_2,0xf);
      plVar4 = local_d0;
      lVar30 = local_d8;
      uVar28 = param_1[0xcb];
      if (uVar28 == param_1[0xca]) {
        puVar33 = (ulong *)0x0;
      }
      else {
        do {
          uVar28 = uVar28 - 1;
          puVar33 = (ulong *)(param_1 + (uVar28 & 7) * 0x17 + 10);
        } while (param_2 < *puVar33 && param_1[0xca] != uVar28);
      }
      uVar6 = *(undefined1 *)((long)param_1 + 0x3f);
      pMVar1 = (MutexType *)(param_1 + 0xd0);
      uVar7 = *(undefined1 *)((long)param_1 + 0x2a);
      lVar26 = param_1[6];
      lVar31 = param_1[7];
      uVar8 = *(undefined1 *)((long)param_1 + 0x2b);
      bVar12 = *(char *)(*param_1 + 0xd2) == '\x03' || *(char *)(*param_1 + 0xd5) != '\0';
      nn::os::LockMutex(pMVar1);
      do {
        lVar17 = param_1[0xdd];
        if (lVar17 != param_1[0xde]) {
          lVar21 = param_1[0xd8];
          plVar25 = param_1 + 0xda;
          param_1[0xd8] = lVar21 + 1;
          if (lVar17 == 0) goto LAB_035c4ac8;
          lVar17 = lVar17 * 0x70;
          lVar32 = -param_1[0xdc];
          puVar22 = (ulong *)(param_1[0xdc] + 0x18);
          goto LAB_035c4880;
        }
        nn::os::WaitConditionVariable((ConditionVariableType *)(param_1 + 0xd6),pMVar1);
      } while ((char)param_1[0xd9] == '\0');
      goto LAB_035c4d4c;
    }
    FUN_035c7610(&local_d8,pMVar1,param_2,0xf);
    *(int *)(param_1 + 0xc4) = (int)param_1[0xc4] + -1;
    plVar27 = local_d0;
    if (local_d8 == 0) goto LAB_035c46f8;
    if (local_d0 != (long *)0x0) {
      plVar16 = local_d0 + 1;
      do {
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar12) {
          *plVar16 = *plVar16 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    plVar29 = (long *)param_1[0xc3];
    param_1[0xc2] = local_d8;
    param_1[0xc3] = (long)local_d0;
    if (plVar29 != (long *)0x0) {
      plVar16 = plVar29 + 1;
      do {
        lVar20 = *plVar16;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar12) {
          *plVar16 = lVar20 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      goto LAB_035c4e20;
    }
    goto LAB_035c4e3c;
  }
  uVar28 = param_1[0xcb];
  do {
    uVar28 = uVar28 - 1;
  } while (param_2 < (ulong)param_1[(uVar28 & 7) * 0x17 + 10] && param_1[0xca] != uVar28);
  lVar15 = param_1[(uVar28 & 7) * 0x17 + 0x1c];
  FUN_035c80c0(&local_d8,param_1 + 0x12e,param_2,0xf);
  lVar20 = local_d8;
  FUN_035bd220(local_d8 + 0x40,lVar15,*(char *)((long)param_1 + 0x2a) != '\0' && (bVar12 || bVar13))
  ;
  if (local_d0 != (long *)0x0) {
    plVar27 = local_d0 + 1;
    do {
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar12) {
        *plVar27 = *plVar27 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  plVar27 = (long *)param_1[0xc3];
  param_1[0xc2] = lVar20;
  param_1[0xc3] = (long)local_d0;
  if (plVar27 != (long *)0x0) {
    plVar16 = plVar27 + 1;
    do {
      lVar20 = *plVar16;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar12) {
        *plVar16 = lVar20 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_d0 != (long *)0x0) {
    plVar27 = local_d0 + 1;
    do {
      lVar20 = *plVar27;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar12) {
        *plVar27 = lVar20 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
      plVar16 = local_d0;
    } while (cVar10 != '\0');
    goto LAB_035c4e90;
  }
  goto LAB_035c4eac;
LAB_035c435c:
  iVar14 = nn::os::TimedWaitConditionVariable(param_1 + 0xd6,pMVar2,1000000000);
  if (iVar14 != 1) goto LAB_035c4340;
  goto LAB_035c4374;
LAB_035c4340:
  nn::os::UnlockMutex(pMVar2);
  goto LAB_035c4348;
LAB_035c4880:
  uVar28 = *puVar22;
  if (((uVar28 < param_2) || ((uVar28 <= param_2 && ((byte)puVar22[-2] < 2)))) ||
     ((uVar28 <= param_2 && ((byte)puVar22[-2] < 3)))) goto LAB_035c4870;
  local_c8._0_3_ = (uint3)bVar12 << 8;
  local_c8 = CONCAT44((int)lVar31,CONCAT13(uVar8,(int3)local_c8));
  uVar5 = local_c8;
  local_a8 = 0;
  local_d0 = (long *)CONCAT44(local_d0._4_4_,2);
  local_c8 = CONCAT71(local_c8._1_7_,uVar6);
  uVar11 = local_c8;
  local_c8._3_5_ = SUB85(uVar5,3);
  local_c8._0_3_ = CONCAT12(uVar7,(short)uVar11);
  local_a0 = lVar20;
  local_98 = plVar16;
  if (plVar16 != (long *)0x0) {
    plVar3 = plVar16 + 1;
    do {
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar12) {
        *plVar3 = *plVar3 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  local_90 = lVar15;
  local_88 = plVar29;
  if (plVar29 != (long *)0x0) {
    plVar3 = plVar29 + 1;
    do {
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar12) {
        *plVar3 = *plVar3 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  local_80 = lVar30;
  local_78 = plVar4;
  if (plVar4 != (long *)0x0) {
    plVar3 = plVar4 + 1;
    do {
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar12) {
        *plVar3 = *plVar3 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  uVar28 = param_1[0xdd];
  lVar31 = param_1[0xdc];
  local_d8 = lVar21;
  local_c0 = param_2;
  local_b8 = lVar26;
  local_b0 = puVar33;
  local_70 = plVar24;
  if (uVar28 == param_1[0xde]) {
    uVar18 = uVar28 + (uVar28 >> 1);
    if (uVar18 <= uVar28 + 1) {
      uVar18 = uVar28 + 1;
    }
    if (uVar18 < 5) {
      uVar18 = 4;
    }
    iVar14 = FUN_035c5b00(plVar25,uVar18);
    if (iVar14 == 0) {
      uVar28 = param_1[0xdd];
      goto LAB_035c4998;
    }
LAB_035c49f4:
    if (plVar4 != (long *)0x0) {
      plVar24 = plVar4 + 1;
      do {
        lVar20 = *plVar24;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar12) {
          *plVar24 = lVar20 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_88 != (long *)0x0) {
      plVar24 = local_88 + 1;
      do {
        lVar20 = *plVar24;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar12) {
          *plVar24 = lVar20 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*local_88 + 0x10))(local_88);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_98 != (long *)0x0) {
      plVar24 = local_98 + 1;
      do {
        lVar20 = *plVar24;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar12) {
          *plVar24 = lVar20 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*local_98 + 0x10))(local_98);
        std::__shared_weak_count::__release_weak();
      }
    }
    FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
  }
  else {
LAB_035c4998:
    lVar31 = -lVar31 - lVar32 >> 4;
    uVar18 = lVar31 * 0x6db6db6db6db6db7;
    if (uVar28 == uVar18) {
      uVar28 = param_1[0xde];
      if (uVar28 <= uVar18) {
        uVar28 = uVar28 + (uVar28 >> 1);
        if (uVar28 <= uVar18 + 1) {
          uVar28 = uVar18 + 1;
        }
        if (uVar28 < 5) {
          uVar28 = 4;
        }
        iVar14 = FUN_035c5b00(plVar25,uVar28);
        if (iVar14 != 0) goto LAB_035c49f4;
        uVar18 = param_1[0xdd];
      }
      plVar25 = (long *)(param_1[0xdc] + uVar18 * 0x70);
      *plVar25 = lVar21;
      *(undefined4 *)(plVar25 + 1) = 2;
      plVar25[2] = local_c8;
      plVar25[3] = local_c0;
      plVar25[4] = lVar26;
      plVar25[5] = (long)local_b0;
      plVar25[6] = local_a8;
      plVar25[7] = lVar20;
      plVar25[8] = (long)plVar16;
      local_a0 = 0;
      local_98 = (long *)0x0;
      plVar25[9] = lVar15;
      plVar25[10] = (long)plVar29;
      local_90 = 0;
      local_88 = (long *)0x0;
      plVar25[0xb] = lVar30;
      plVar25[0xc] = (long)plVar4;
      local_80 = 0;
      local_78 = (long *)0x0;
      plVar25[0xd] = (long)plVar24;
      param_1[0xdd] = param_1[0xdd] + 1;
    }
    else {
      uVar18 = uVar18 + 1;
      puVar19 = (undefined8 *)(param_1[0xdc] + uVar28 * 0x70);
      *puVar19 = puVar19[-0xe];
      *(undefined4 *)(puVar19 + 1) = *(undefined4 *)(puVar19 + -0xd);
      puVar19[2] = puVar19[-0xc];
      puVar19[3] = puVar19[-0xb];
      puVar19[4] = puVar19[-10];
      puVar19[5] = puVar19[-9];
      puVar19[6] = puVar19[-8];
      puVar19[7] = puVar19[-7];
      uVar5 = puVar19[-6];
      puVar19[-7] = 0;
      puVar19[-6] = 0;
      puVar19[8] = uVar5;
      puVar19[9] = puVar19[-5];
      uVar5 = puVar19[-4];
      puVar19[-5] = 0;
      puVar19[-4] = 0;
      puVar19[10] = uVar5;
      puVar19[0xb] = puVar19[-3];
      uVar5 = puVar19[-2];
      puVar19[-3] = 0;
      puVar19[-2] = 0;
      puVar19[0xc] = uVar5;
      puVar19[0xd] = puVar19[-1];
      uVar28 = param_1[0xdd];
      if (uVar18 < uVar28) {
        lVar20 = -1;
        do {
          puVar19 = (undefined8 *)(param_1[0xdc] + (uVar28 + lVar20) * 0x70);
          *puVar19 = puVar19[-0xe];
          FUN_035c66f0(puVar19 + 1,puVar19 + -0xd);
          uVar28 = param_1[0xdd];
          uVar18 = uVar18 + 1;
          lVar20 = lVar20 + -1;
        } while (uVar18 < uVar28);
      }
      plVar24 = (long *)(param_1[0xdc] + lVar31 * 0x10);
      *plVar24 = lVar21;
      FUN_035c66f0(plVar24 + 1,&local_d0);
      param_1[0xdd] = param_1[0xdd] + 1;
      if (local_78 != (long *)0x0) {
        plVar24 = local_78 + 1;
        do {
          lVar20 = *plVar24;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar12) {
            *plVar24 = lVar20 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*local_78 + 0x10))(local_78);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    if (local_88 != (long *)0x0) {
      plVar24 = local_88 + 1;
      do {
        lVar20 = *plVar24;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar12) {
          *plVar24 = lVar20 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*local_88 + 0x10))(local_88);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_98 != (long *)0x0) {
      plVar24 = local_98 + 1;
      do {
        lVar20 = *plVar24;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar12) {
          *plVar24 = lVar20 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*local_98 + 0x10))(local_98);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  plVar24 = (long *)param_1[0xc3];
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  if (plVar24 != (long *)0x0) {
    plVar25 = plVar24 + 1;
    do {
      lVar20 = *plVar25;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar12) {
        *plVar25 = lVar20 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    goto LAB_035c4d20;
  }
  goto LAB_035c4d3c;
LAB_035c4870:
  lVar32 = lVar32 + -0x70;
  lVar17 = lVar17 + -0x70;
  puVar22 = puVar22 + 0xe;
  if (lVar17 == 0) goto LAB_035c4ac8;
  goto LAB_035c4880;
LAB_035c500c:
  uVar23 = *(ulong *)(lVar31 + lVar30 + 0x18);
  if (((uVar23 < param_2) ||
      (bVar9 = *(byte *)(lVar31 + lVar30 + 8), uVar23 <= param_2 && bVar9 < 3)) ||
     ((uVar23 <= param_2 && (bVar9 < 4)))) goto LAB_035c5000;
  local_d0 = (long *)CONCAT44(local_d0._4_4_,3);
  local_78 = plVar29;
  local_c8 = 0x1000002;
  local_b8 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = (long *)0x0;
  local_90 = 0;
  local_88 = (long *)0x0;
  local_80 = lVar20;
  lVar26 = lVar31;
  if (plVar29 != (long *)0x0) {
    plVar4 = plVar29 + 1;
    do {
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar12) {
        *plVar4 = *plVar4 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    lVar26 = param_1[0xdc];
    uVar18 = param_1[0xdd];
    uVar28 = param_1[0xde];
  }
  local_d8 = lVar15;
  local_c0 = param_2;
  local_b0 = puVar33;
  local_70 = plVar16;
  if (uVar18 == uVar28) {
    uVar18 = uVar28 + (uVar28 >> 1);
    if (uVar18 <= uVar28 + 1) {
      uVar18 = uVar28 + 1;
    }
    if (uVar18 < 5) {
      uVar18 = 4;
    }
    iVar14 = FUN_035c5b00(plVar24,uVar18);
    if (iVar14 == 0) {
      uVar18 = param_1[0xdd];
      goto LAB_035c50e8;
    }
LAB_035c5140:
    FUN_035c5a20(&local_d0);
    FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
  }
  else {
LAB_035c50e8:
    lVar30 = (lVar31 - lVar26) + lVar30 >> 4;
    uVar28 = lVar30 * 0x6db6db6db6db6db7;
    if (uVar18 == uVar28) {
      uVar18 = param_1[0xde];
      if (uVar18 <= uVar28) {
        uVar18 = uVar18 + (uVar18 >> 1);
        if (uVar18 <= uVar28 + 1) {
          uVar18 = uVar28 + 1;
        }
        if (uVar18 < 5) {
          uVar18 = 4;
        }
        iVar14 = FUN_035c5b00(plVar24,uVar18);
        if (iVar14 != 0) goto LAB_035c5140;
        uVar28 = param_1[0xdd];
      }
      plVar24 = (long *)(param_1[0xdc] + uVar28 * 0x70);
      *plVar24 = lVar15;
      *(undefined4 *)(plVar24 + 1) = 3;
      plVar24[2] = local_c8;
      plVar24[3] = local_c0;
      plVar24[4] = 0;
      plVar24[5] = (long)local_b0;
      plVar24[8] = 0;
      plVar24[6] = local_a8;
      plVar24[7] = 0;
      local_a0 = 0;
      local_98 = (long *)0x0;
      plVar24[9] = 0;
      plVar24[10] = 0;
      local_90 = 0;
      local_88 = (long *)0x0;
      plVar24[0xb] = lVar20;
      plVar24[0xc] = (long)plVar29;
      local_80 = 0;
      local_78 = (long *)0x0;
      plVar24[0xd] = (long)plVar16;
      param_1[0xdd] = param_1[0xdd] + 1;
    }
    else {
      uVar28 = uVar28 + 1;
      puVar19 = (undefined8 *)(param_1[0xdc] + uVar18 * 0x70);
      *puVar19 = puVar19[-0xe];
      *(undefined4 *)(puVar19 + 1) = *(undefined4 *)(puVar19 + -0xd);
      puVar19[2] = puVar19[-0xc];
      puVar19[3] = puVar19[-0xb];
      puVar19[4] = puVar19[-10];
      puVar19[5] = puVar19[-9];
      puVar19[6] = puVar19[-8];
      puVar19[7] = puVar19[-7];
      uVar5 = puVar19[-6];
      puVar19[-7] = 0;
      puVar19[-6] = 0;
      puVar19[8] = uVar5;
      puVar19[9] = puVar19[-5];
      uVar5 = puVar19[-4];
      puVar19[-5] = 0;
      puVar19[-4] = 0;
      puVar19[10] = uVar5;
      puVar19[0xb] = puVar19[-3];
      uVar5 = puVar19[-2];
      puVar19[-3] = 0;
      puVar19[-2] = 0;
      puVar19[0xc] = uVar5;
      puVar19[0xd] = puVar19[-1];
      uVar18 = param_1[0xdd];
      if (uVar28 < uVar18) {
        lVar20 = -1;
        do {
          puVar19 = (undefined8 *)(param_1[0xdc] + (uVar18 + lVar20) * 0x70);
          *puVar19 = puVar19[-0xe];
          FUN_035c66f0(puVar19 + 1,puVar19 + -0xd);
          uVar18 = param_1[0xdd];
          uVar28 = uVar28 + 1;
          lVar20 = lVar20 + -1;
        } while (uVar28 < uVar18);
      }
      plVar16 = (long *)(param_1[0xdc] + lVar30 * 0x10);
      *plVar16 = lVar15;
      FUN_035c66f0(plVar16 + 1,&local_d0);
      param_1[0xdd] = param_1[0xdd] + 1;
      if (local_78 != (long *)0x0) {
        plVar16 = local_78 + 1;
        do {
          lVar20 = *plVar16;
          cVar10 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar12) {
            *plVar16 = lVar20 + -1;
            cVar10 = ExclusiveMonitorsStatus();
          }
        } while (cVar10 != '\0');
        if (lVar20 == 0) {
          (**(code **)(*local_78 + 0x10))(local_78);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    if (local_88 != (long *)0x0) {
      plVar16 = local_88 + 1;
      do {
        lVar20 = *plVar16;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar12) {
          *plVar16 = lVar20 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*local_88 + 0x10))(local_88);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_98 != (long *)0x0) {
      plVar16 = local_98 + 1;
      do {
        lVar20 = *plVar16;
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar12) {
          *plVar16 = lVar20 + -1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*local_98 + 0x10))(local_98);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  plVar16 = (long *)param_1[9];
  param_1[8] = 0;
  param_1[9] = 0;
  if (plVar16 != (long *)0x0) {
    plVar24 = plVar16 + 1;
    do {
      lVar20 = *plVar24;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar12) {
        *plVar24 = lVar20 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    goto LAB_035c52a0;
  }
  goto LAB_035c52c0;
LAB_035c5000:
  lVar30 = lVar30 + 0x70;
  if (uVar18 * 0x70 == lVar30) goto LAB_035c5164;
  goto LAB_035c500c;
LAB_035c5164:
  if (plVar29 != (long *)0x0) {
    plVar4 = plVar29 + 1;
    do {
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar12) {
        *plVar4 = *plVar4 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    uVar18 = param_1[0xdd];
    uVar28 = param_1[0xde];
  }
  if (uVar18 < uVar28) {
LAB_035c51e0:
    lVar30 = param_1[0xdc];
    plVar24 = (long *)(lVar30 + uVar18 * 0x70);
    *(undefined4 *)(plVar24 + 1) = 3;
    *plVar24 = lVar15;
    plVar24[0xc] = (long)plVar29;
    plVar24[4] = 0;
    plVar24[5] = (long)puVar33;
    plVar24[6] = 0;
    plVar24[7] = 0;
    plVar24[8] = 0;
    plVar24[9] = 0;
    plVar24[10] = 0;
    plVar24[0xb] = lVar20;
    plVar24[2] = 0x1000002;
    plVar24[3] = param_2;
    if (plVar29 != (long *)0x0) {
      plVar24 = plVar29 + 1;
      do {
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar12) {
          *plVar24 = *plVar24 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    *(long **)(lVar30 + uVar18 * 0x70 + 0x68) = plVar16;
    param_1[0xdd] = param_1[0xdd] + 1;
  }
  else {
    uVar28 = uVar28 + (uVar28 >> 1);
    if (uVar28 <= uVar18 + 1) {
      uVar28 = uVar18 + 1;
    }
    if (uVar28 < 5) {
      uVar28 = 4;
    }
    iVar14 = FUN_035c5b00(plVar24,uVar28);
    if (iVar14 == 0) {
      uVar18 = param_1[0xdd];
      goto LAB_035c51e0;
    }
    FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
  }
  if (plVar29 != (long *)0x0) {
    plVar16 = plVar29 + 1;
    do {
      lVar20 = *plVar16;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar12) {
        *plVar16 = lVar20 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plVar29 + 0x10))(plVar29);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar16 = (long *)param_1[9];
  param_1[8] = 0;
  param_1[9] = 0;
  if (plVar16 != (long *)0x0) {
    plVar24 = plVar16 + 1;
    do {
      lVar20 = *plVar24;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar12) {
        *plVar24 = lVar20 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
LAB_035c52a0:
    if (lVar20 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_035c52c0:
  param_1[0x12d] = lVar15;
  nn::os::BroadcastConditionVariable((ConditionVariableType *)(param_1 + 0xd5));
  goto LAB_035c52cc;
LAB_035c4ac8:
  if (plVar16 != (long *)0x0) {
    plVar3 = plVar16 + 1;
    do {
      cVar10 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar13) {
        *plVar3 = *plVar3 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  if (plVar29 != (long *)0x0) {
    plVar3 = plVar29 + 1;
    do {
      cVar10 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar13) {
        *plVar3 = *plVar3 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  if (plVar4 != (long *)0x0) {
    plVar3 = plVar4 + 1;
    do {
      cVar10 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar13) {
        *plVar3 = *plVar3 + 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  uVar18 = param_1[0xdd];
  uVar28 = param_1[0xde];
  if (uVar18 < uVar28) {
LAB_035c4b74:
    lVar17 = param_1[0xdc];
    plVar25 = (long *)(lVar17 + uVar18 * 0x70);
    *plVar25 = lVar21;
    *(bool *)((long)plVar25 + 0x11) = bVar12;
    *(undefined1 *)((long)plVar25 + 0x13) = uVar8;
    *(int *)((long)plVar25 + 0x14) = (int)lVar31;
    plVar25[5] = (long)puVar33;
    plVar25[6] = 0;
    *(undefined4 *)(plVar25 + 1) = 2;
    *(undefined1 *)(plVar25 + 2) = uVar6;
    *(undefined1 *)((long)plVar25 + 0x12) = uVar7;
    plVar25[3] = param_2;
    plVar25[4] = lVar26;
    plVar25[7] = lVar20;
    plVar25[8] = (long)plVar16;
    if (plVar16 != (long *)0x0) {
      plVar25 = plVar16 + 1;
      do {
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar12) {
          *plVar25 = *plVar25 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    lVar20 = lVar17 + uVar18 * 0x70;
    *(long *)(lVar20 + 0x48) = lVar15;
    *(long **)(lVar20 + 0x50) = plVar29;
    if (plVar29 != (long *)0x0) {
      plVar25 = plVar29 + 1;
      do {
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar12) {
          *plVar25 = *plVar25 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    lVar20 = lVar17 + uVar18 * 0x70;
    *(long *)(lVar20 + 0x58) = lVar30;
    *(long **)(lVar20 + 0x60) = plVar4;
    if (plVar4 != (long *)0x0) {
      plVar25 = plVar4 + 1;
      do {
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar12) {
          *plVar25 = *plVar25 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    *(long **)(lVar17 + uVar18 * 0x70 + 0x68) = plVar24;
    param_1[0xdd] = param_1[0xdd] + 1;
  }
  else {
    uVar28 = uVar28 + (uVar28 >> 1);
    if (uVar28 <= uVar18 + 1) {
      uVar28 = uVar18 + 1;
    }
    if (uVar28 < 5) {
      uVar28 = 4;
    }
    iVar14 = FUN_035c5b00(plVar25,uVar28);
    if (iVar14 == 0) {
      uVar18 = param_1[0xdd];
      goto LAB_035c4b74;
    }
    FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
  }
  if (plVar4 != (long *)0x0) {
    plVar24 = plVar4 + 1;
    do {
      lVar20 = *plVar24;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar12) {
        *plVar24 = lVar20 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar29 != (long *)0x0) {
    plVar24 = plVar29 + 1;
    do {
      lVar20 = *plVar24;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar12) {
        *plVar24 = lVar20 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plVar29 + 0x10))(plVar29);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar16 != (long *)0x0) {
    plVar24 = plVar16 + 1;
    do {
      lVar20 = *plVar24;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar12) {
        *plVar24 = lVar20 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar24 = (long *)param_1[0xc3];
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  if (plVar24 != (long *)0x0) {
    plVar25 = plVar24 + 1;
    do {
      lVar20 = *plVar25;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar12) {
        *plVar25 = lVar20 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
LAB_035c4d20:
    if (lVar20 == 0) {
      (**(code **)(*plVar24 + 0x10))(plVar24);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_035c4d3c:
  param_1[300] = lVar21;
  nn::os::BroadcastConditionVariable((ConditionVariableType *)(param_1 + 0xd5));
LAB_035c4d4c:
  nn::os::UnlockMutex(pMVar1);
  if (plVar4 != (long *)0x0) {
    plVar24 = plVar4 + 1;
    do {
      lVar20 = *plVar24;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar12) {
        *plVar24 = lVar20 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar29 != (long *)0x0) {
    plVar24 = plVar29 + 1;
    do {
      lVar20 = *plVar24;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar12) {
        *plVar24 = lVar20 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plVar29 + 0x10))(plVar29);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (plVar16 != (long *)0x0) {
    plVar29 = plVar16 + 1;
    do {
      lVar20 = *plVar29;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar12) {
        *plVar29 = lVar20 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_f8 != (long *)0x0) {
    plVar16 = local_f8 + 1;
    do {
      lVar20 = *plVar16;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar12) {
        *plVar16 = lVar20 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
      plVar29 = local_f8;
    } while (cVar10 != '\0');
LAB_035c4e20:
    if (lVar20 == 0) {
      (**(code **)(*plVar29 + 0x10))(plVar29);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_035c4e3c:
  if (plVar27 != (long *)0x0) {
    plVar16 = plVar27 + 1;
    do {
      lVar20 = *plVar16;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar12) {
        *plVar16 = lVar20 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_e0 != (long *)0x0) {
    plVar27 = local_e0 + 1;
    do {
      lVar20 = *plVar27;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar12) {
        *plVar27 = lVar20 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
      plVar16 = local_e0;
    } while (cVar10 != '\0');
LAB_035c4e90:
    if (lVar20 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      std::__shared_weak_count::__release_weak();
    }
  }
LAB_035c4eac:
  if (*(int *)((long)param_1 + 0x624) < 1) {
    plVar27 = (long *)0x0;
LAB_035c4f28:
    uVar28 = param_1[0xcb];
    if (uVar28 == param_1[0xca]) {
      puVar33 = (ulong *)0x0;
    }
    else {
      do {
        uVar28 = uVar28 - 1;
        puVar33 = (ulong *)(param_1 + (uVar28 & 7) * 0x17 + 10);
      } while (param_2 < *puVar33 && param_1[0xca] != uVar28);
    }
    plVar16 = param_1 + 8;
    FUN_035c80c0(&local_d8,param_1 + 0x12e,param_2,0x10);
    plVar29 = local_d0;
    lVar20 = local_d8;
    pMVar1 = (MutexType *)(param_1 + 0xd0);
    nn::os::LockMutex(pMVar1);
    do {
      uVar18 = param_1[0xdd];
      uVar28 = param_1[0xde];
      if (uVar18 != uVar28) {
        lVar15 = param_1[0xd8];
        plVar24 = param_1 + 0xda;
        param_1[0xd8] = lVar15 + 1;
        if (uVar18 == 0) goto LAB_035c5164;
        lVar31 = param_1[0xdc];
        lVar30 = 0;
        goto LAB_035c500c;
      }
      nn::os::WaitConditionVariable((ConditionVariableType *)(param_1 + 0xd6),pMVar1);
    } while ((char)param_1[0xd9] == '\0');
LAB_035c52cc:
    nn::os::UnlockMutex(pMVar1);
    if (plVar29 == (long *)0x0) goto LAB_035c530c;
    plVar16 = plVar29 + 1;
    do {
      lVar20 = *plVar16;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar12) {
        *plVar16 = lVar20 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  else {
    FUN_035c7610(&local_d8,param_1 + 0x12e,param_2,0x10);
    *(int *)((long)param_1 + 0x624) = *(int *)((long)param_1 + 0x624) + -1;
    plVar27 = local_d0;
    if (local_d8 == 0) goto LAB_035c4f28;
    if (local_d0 != (long *)0x0) {
      plVar16 = local_d0 + 1;
      do {
        cVar10 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar12) {
          *plVar16 = *plVar16 + 1;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
    }
    plVar29 = (long *)param_1[9];
    param_1[8] = local_d8;
    param_1[9] = (long)local_d0;
    if (plVar29 == (long *)0x0) goto LAB_035c530c;
    plVar16 = plVar29 + 1;
    do {
      lVar20 = *plVar16;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar12) {
        *plVar16 = lVar20 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  if (lVar20 == 0) {
    (**(code **)(*plVar29 + 0x10))(plVar29);
    std::__shared_weak_count::__release_weak();
  }
LAB_035c530c:
  if (plVar27 != (long *)0x0) {
    plVar16 = plVar27 + 1;
    do {
      lVar20 = *plVar16;
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar12) {
        *plVar16 = lVar20 + -1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*plVar27 + 0x10))(plVar27);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}

