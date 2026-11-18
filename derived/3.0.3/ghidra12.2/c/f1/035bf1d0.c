
void FUN_035bf1d0(long *param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  uint *puVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  undefined4 uVar20;
  long local_70;
  long lStack_68;
  long local_60;
  long lStack_58;
  
  pMVar1 = (MutexType *)(param_1 + 0xd0);
LAB_035bf20c:
  do {
    nn::os::LockMutex(pMVar1);
    do {
      if (param_1[0xdd] == 0) {
        lVar12 = param_1[0xd9];
        if ((param_1[0xd7] == -1) || ((char)lVar12 != '\0')) {
          nn::os::UnlockMutex(pMVar1);
          if ((char)lVar12 == '\0') {
            *(undefined1 *)((long)param_1 + 0x29) = 0;
            param_1[0xca] = 1;
            param_1[0xcb] = 9;
            param_1[0xcd] = 0;
            param_1[0xcf] = 0;
            param_1[3] = 0;
            param_1[300] = -1;
            param_1[0x12d] = -1;
            param_1[1] = 0;
            param_1[2] = 0;
            FUN_035bf5f0(param_1);
            plVar18 = (long *)param_1[0xc3];
            param_1[0xc2] = 0;
            param_1[0xc3] = 0;
            if (plVar18 != (long *)0x0) {
              plVar2 = plVar18 + 1;
              do {
                lVar12 = *plVar2;
                cVar6 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar8) {
                  *plVar2 = lVar12 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar12 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
                std::__shared_weak_count::__release_weak();
              }
            }
            plVar18 = (long *)param_1[9];
            param_1[8] = 0;
            param_1[9] = 0;
            if (plVar18 != (long *)0x0) {
              plVar2 = plVar18 + 1;
              do {
                lVar12 = *plVar2;
                cVar6 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar8) {
                  *plVar2 = lVar12 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar12 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
                std::__shared_weak_count::__release_weak();
              }
            }
            pMVar1 = (MutexType *)(param_1 + 0x12e);
            FUN_035c8210(pMVar1);
            nn::os::LockMutex(pMVar1);
            FUN_035c7980(&local_60,pMVar1,0,0xf);
            lVar13 = lStack_58;
            lVar12 = local_60;
            nn::os::UnlockMutex(pMVar1);
            param_1[0xc2] = lVar12;
            plVar18 = (long *)param_1[0xc3];
            param_1[0xc3] = lVar13;
            if (plVar18 != (long *)0x0) {
              plVar2 = plVar18 + 1;
              do {
                lVar12 = *plVar2;
                cVar6 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar8) {
                  *plVar2 = lVar12 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar12 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
                std::__shared_weak_count::__release_weak();
              }
            }
            nn::os::LockMutex(pMVar1);
            FUN_035c7980(&local_60,pMVar1,0,0x10);
            nn::os::UnlockMutex(pMVar1);
            plVar18 = (long *)param_1[9];
            param_1[8] = local_60;
            param_1[9] = lStack_58;
            if (plVar18 != (long *)0x0) {
              plVar2 = plVar18 + 1;
              do {
                lVar12 = *plVar2;
                cVar6 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar8) {
                  *plVar2 = lVar12 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (lVar12 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
                std::__shared_weak_count::__release_weak();
              }
            }
            lVar12 = 0;
            param_1[0xc4] = 0;
            do {
              uVar4 = *(undefined2 *)((long)param_1 + 0x3c);
              plVar18 = (long *)param_1[lVar12 * 0x17 + 0x1e];
              param_1[lVar12 * 0x17 + 10] = 0;
              param_1[lVar12 * 0x17 + 0xb] = 0;
              *(undefined2 *)((long)param_1 + lVar12 * 0xb8 + 0x76) = uVar4;
              param_1[lVar12 * 0x17 + 0xc] = 0;
              param_1[lVar12 * 0x17 + 0xd] = 0;
              *(undefined8 *)((long)param_1 + lVar12 * 0xb8 + 0x6e) = 0;
              param_1[lVar12 * 0x17 + 0x1d] = 0;
              param_1[lVar12 * 0x17 + 0x1e] = 0;
              if (plVar18 != (long *)0x0) {
                plVar2 = plVar18 + 1;
                do {
                  lVar13 = *plVar2;
                  cVar6 = '\x01';
                  bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar8) {
                    *plVar2 = lVar13 + -1;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                } while (cVar6 != '\0');
                if (lVar13 == 0) {
                  (**(code **)(*plVar18 + 0x10))(plVar18);
                  std::__shared_weak_count::__release_weak();
                }
              }
              param_1[lVar12 * 0x17 + 0x19] = 0;
              param_1[lVar12 * 0x17 + 0x12] = 0;
              if ((void *)param_1[lVar12 * 0x17 + 0x1b] != (void *)0x0) {
                memset((void *)param_1[lVar12 * 0x17 + 0x1b],0,0x5a00);
              }
              uVar20 = 0;
              puVar3 = (undefined4 *)((long)param_1 + lVar12 * 0xb8 + 0xfc);
              *puVar3 = 0;
              *(undefined4 *)(param_1 + lVar12 * 0x17 + 0x20) = 0;
              *(undefined4 *)((long)param_1 + lVar12 * 0xb8 + 0x104) = 0;
              lVar13 = *param_1;
              if (2 < *(byte *)(lVar13 + 0xd2)) {
                if (*(char *)(lVar13 + 0x200) < '\0') {
                  uVar20 = 3;
                }
                else {
                  uVar20 = 1;
                  if ((*(byte *)(lVar13 + 0xec3) & 4) == 0) {
                    uVar20 = 2;
                  }
                }
              }
              *(undefined4 *)(param_1 + lVar12 * 0x17 + 0x1f) = uVar20;
              puVar14 = (undefined8 *)param_1[lVar12 * 0x17 + 0x1c];
              uVar4 = *(undefined2 *)((long)param_1 + 0x3c);
              uVar16 = 0xb40;
              do {
                uVar17 = uVar16 & 0xfffffffffffffffe;
                uVar16 = uVar16 - 0xf;
                puVar14[1] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
                *puVar14 = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
                puVar14[3] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
                puVar14[2] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
                puVar14[0x1d] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
                puVar14[0x1c] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
                puVar14[5] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
                puVar14[4] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
                puVar14[7] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
                puVar14[6] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
                puVar14[9] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
                puVar14[8] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
                puVar14[0xb] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
                puVar14[10] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
                puVar14[0xd] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
                puVar14[0xc] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
                puVar14[0xf] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
                puVar14[0xe] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
                puVar14[0x11] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
                puVar14[0x10] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
                puVar14[0x13] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
                puVar14[0x12] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
                puVar14[0x15] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
                puVar14[0x14] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
                puVar14[0x17] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
                puVar14[0x16] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
                puVar14[0x19] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
                puVar14[0x18] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
                puVar14[0x1b] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
                puVar14[0x1a] = CONCAT26(uVar4,CONCAT24(uVar4,CONCAT22(uVar4,uVar4)));
                puVar14 = puVar14 + 0x1e;
              } while (uVar17 != 0xe);
              lVar12 = lVar12 + 1;
              *puVar3 = 1;
            } while (lVar12 != 8);
            param_1[4] = -1;
            if (*(char *)((long)param_1 + 0x3f) == '\0') {
              uVar5 = *(ushort *)((long)param_1 + 0x3c);
              uVar11 = 0;
              if ((short)uVar5 < 0) {
                uVar11 = 0xff000000;
              }
              uVar11 = uVar11 | (uVar5 & 0x1f) << 3 | (uVar5 >> 5 & 0x1f) << 0xb |
                                (uVar5 >> 10 & 0x1f) << 0x13;
            }
            else {
              uVar11 = *(uint *)(param_1 + 7);
            }
            lVar12 = 0x5a00;
            puVar15 = (uint *)(param_1[0xc2] + 0x54);
            do {
              puVar15[-5] = uVar11;
              puVar15[-4] = uVar11;
              lVar12 = lVar12 + -6;
              puVar15[-3] = uVar11;
              puVar15[-2] = uVar11;
              puVar15[-1] = uVar11;
              *puVar15 = uVar11;
              puVar15 = puVar15 + 6;
            } while (lVar12 != 0);
            lVar12 = 0x5a00;
            puVar15 = (uint *)(param_1[8] + 0x54);
            do {
              puVar15[-5] = uVar11;
              puVar15[-4] = uVar11;
              lVar12 = lVar12 + -6;
              puVar15[-3] = uVar11;
              puVar15[-2] = uVar11;
              puVar15[-1] = uVar11;
              *puVar15 = uVar11;
              puVar15 = puVar15 + 6;
            } while (lVar12 != 0);
            cVar6 = *(char *)((long)param_1 + 0x3f);
            *(char *)((long)param_1 + 0x3f) = cVar6;
            if (cVar6 != '\0') {
              bVar8 = (*(char *)(*param_1 + 0xd2) == '\x03' || *(char *)(*param_1 + 0xd5) != '\0')
                      && *(char *)((long)param_1 + 0x2a) != '\0';
              if (param_1[0xcb] == param_1[0xca]) {
                pMVar1 = (MutexType *)(param_1 + 0x12e);
                lVar12 = 0;
                do {
                  lVar13 = param_1[lVar12 * 0x17 + 10];
                  nn::os::LockMutex(pMVar1);
                  FUN_035c7980(&local_70,pMVar1,lVar13,lVar12 + 7);
                  lVar19 = lStack_68;
                  lVar13 = local_70;
                  nn::os::UnlockMutex(pMVar1);
                  param_1[lVar12 * 0x17 + 0x1d] = lVar13;
                  plVar18 = (long *)param_1[lVar12 * 0x17 + 0x1e];
                  param_1[lVar12 * 0x17 + 0x1e] = lVar19;
                  if (plVar18 != (long *)0x0) {
                    plVar2 = plVar18 + 1;
                    do {
                      lVar13 = *plVar2;
                      cVar6 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                      if (bVar7) {
                        *plVar2 = lVar13 + -1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (lVar13 == 0) {
                      (**(code **)(*plVar18 + 0x10))(plVar18);
                      std::__shared_weak_count::__release_weak();
                    }
                  }
                  lVar13 = param_1[lVar12 * 0x17 + 0x1d];
                  FUN_035bd500(*(undefined2 *)((long)param_1 + 0x3c),lVar13 + 0x40,lVar13 + 0x21c40,
                               bVar8);
                  lVar13 = lVar12 + 1;
                  *(undefined4 *)(param_1 + lVar12 * 0x17 + 0x20) = 1;
                  *(undefined4 *)((long)param_1 + lVar12 * 0xb8 + 0x104) = 1;
                  lVar12 = lVar13;
                } while (lVar13 != 8);
              }
              else {
                pMVar1 = (MutexType *)(param_1 + 0x12e);
                lVar13 = param_1[(ulong)((int)param_1[0xcb] - 1U & 7) * 0x17 + 0x1c];
                lVar12 = 0;
                do {
                  lVar19 = param_1[lVar12 * 0x17 + 10];
                  nn::os::LockMutex(pMVar1);
                  FUN_035c7980(&local_70,pMVar1,lVar19,lVar12 + 7);
                  lVar9 = lStack_68;
                  lVar19 = local_70;
                  nn::os::UnlockMutex(pMVar1);
                  param_1[lVar12 * 0x17 + 0x1d] = lVar19;
                  plVar18 = (long *)param_1[lVar12 * 0x17 + 0x1e];
                  param_1[lVar12 * 0x17 + 0x1e] = lVar9;
                  if (plVar18 != (long *)0x0) {
                    plVar2 = plVar18 + 1;
                    do {
                      lVar19 = *plVar2;
                      cVar6 = '\x01';
                      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                      if (bVar7) {
                        *plVar2 = lVar19 + -1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (lVar19 == 0) {
                      (**(code **)(*plVar18 + 0x10))(plVar18);
                      std::__shared_weak_count::__release_weak();
                    }
                  }
                  lVar19 = param_1[lVar12 * 0x17 + 0x1d];
                  FUN_035bd700(lVar19 + 0x40,lVar19 + 0x21c40,lVar13,bVar8);
                  lVar19 = lVar12 + 1;
                  *(undefined4 *)((long)param_1 + lVar12 * 0xb8 + 0x104) = 1;
                  *(undefined4 *)(param_1 + lVar12 * 0x17 + 0x20) = 1;
                  lVar12 = lVar19;
                } while (lVar19 != 8);
              }
            }
            return;
          }
          goto LAB_035bf20c;
        }
      }
      else if ((char)param_1[0xd9] != '\0') break;
      iVar10 = nn::os::TimedWaitConditionVariable(param_1 + 0xd6,pMVar1,1000000000);
    } while (iVar10 == 1);
    nn::os::UnlockMutex(pMVar1);
  } while( true );
}

