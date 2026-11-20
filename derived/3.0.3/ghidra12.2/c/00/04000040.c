
void FUN_04000040(long param_1)

{
  int *piVar1;
  MutexType *pMVar2;
  long *plVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  int extraout_w13;
  int extraout_w13_00;
  int *piVar18;
  long *plVar19;
  int *piVar20;
  int local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  ulong uStack_68;
  
  piVar1 = (int *)(param_1 + 0x3bc);
  if (*piVar1 < 1) {
    return;
  }
  pMVar2 = (MutexType *)(param_1 + 0x340);
  nn::os::LockMutex(pMVar2);
  if (0 < *piVar1) {
    plVar3 = (long *)(param_1 + 0x378);
    do {
      if ((*(ulong *)(param_1 + 0x10) == 0) ||
         (lVar10 = *(long *)(param_1 + 0x88), *(long *)(param_1 + 0x90) == lVar10)) {
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = *piVar1 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        lVar10 = *(long *)(param_1 + 0x3a0);
        if (lVar10 != 0) {
          lVar13 = *(long *)(param_1 + 0x398);
          uVar14 = *(ulong *)(param_1 + 0x3a8);
          plVar17 = (long *)(param_1 + 0x398);
          plVar19 = (long *)(param_1 + 0x3a0);
          goto LAB_0400021c;
        }
      }
      else {
        piVar18 = (int *)(*(long *)(param_1 + 0x390) + *(long *)(param_1 + 0x398) * 0xc);
        uVar14 = *(long *)(param_1 + 0x398) + 1;
        iVar9 = *piVar18;
        iVar12 = piVar18[1];
        iVar5 = piVar18[2];
        uVar15 = 0;
        if (*(ulong *)(param_1 + 0x3a8) < uVar14) {
          uVar15 = ~*(ulong *)(param_1 + 0x3a8);
        }
        *(ulong *)(param_1 + 0x398) = uVar15 + uVar14;
        *(long *)(param_1 + 0x3a0) = *(long *)(param_1 + 0x3a0) + -1;
        uVar14 = (ulong)(uint)(iVar9 - *(int *)(*(long *)(param_1 + 0x70) + lVar10 * 0x20));
        if (uVar14 < *(ulong *)(param_1 + 0x10)) {
          uVar14 = lVar10 + uVar14;
          uVar15 = 0;
          if (*(ulong *)(param_1 + 0x58) <= uVar14) {
            uVar15 = *(ulong *)(param_1 + 0x58);
          }
          piVar18 = (int *)(*(long *)(param_1 + 0x70) + (uVar14 - uVar15) * 0x20);
          if (iVar12 != *(int *)(param_1 + 0xd0)) goto LAB_04000244;
          piVar20 = piVar18 + 5;
          iVar12 = *piVar20;
          if (iVar12 == 1) {
            if (piVar18[6] != iVar5) {
              FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
            }
          }
          else {
            if (iVar12 == 0) {
LAB_04000244:
              do {
                cVar7 = '\x01';
                bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar8) {
                  *piVar1 = *piVar1 + -1;
                  cVar7 = ExclusiveMonitorsStatus();
                }
              } while (cVar7 != '\0');
              if (*plVar3 != 0) {
                *(long *)(param_1 + 0x378) = *plVar3 + -1;
                uVar14 = *(long *)(param_1 + 0x370) + 1;
                uVar15 = 0;
                if (*(ulong *)(param_1 + 0x380) < uVar14) {
                  uVar15 = ~*(ulong *)(param_1 + 0x380);
                }
                *(ulong *)(param_1 + 0x370) = uVar15 + uVar14;
              }
              nn::os::UnlockMutex(pMVar2);
              iVar9 = *piVar18;
              if (*(int *)(param_1 + 0x3b8) == 0) {
                lVar10 = *(long *)(param_1 + 0x88);
                if (*(long *)(param_1 + 0x90) == lVar10) {
                  return;
                }
                lVar13 = *(long *)(param_1 + 0x70);
                uVar15 = (ulong)(uint)(iVar9 - *(int *)(lVar13 + lVar10 * 0x20));
                uVar16 = *(ulong *)(param_1 + 0x58);
                uVar14 = (uVar16 - lVar10) + *(long *)(param_1 + 0x90);
                uVar11 = 0;
                if (uVar16 <= uVar14) {
                  uVar11 = uVar16;
                }
                if (uVar14 - uVar11 <= uVar15) {
                  return;
                }
                uVar15 = lVar10 + uVar15;
                uVar14 = 0;
                if (uVar16 <= uVar15) {
                  uVar14 = uVar16;
                }
                lVar10 = uVar15 - uVar14;
                iVar12 = extraout_w13;
                if (*(int *)(lVar13 + lVar10 * 0x20) != iVar9) {
                  FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
                  iVar12 = extraout_w13_00;
                }
                lVar13 = lVar13 + lVar10 * 0x20;
                if (*(int *)(lVar13 + 0x14) == 1) {
                  return;
                }
                uVar6 = *(uint *)(lVar13 + 0x10);
                if (uVar6 == 0) {
                  iVar12 = 0x1505;
                }
                else {
                  if (uVar6 == 1) {
                    uVar14 = 0;
                    iVar9 = 0x2b5a5;
                  }
                  else {
                    uVar14 = 0;
                    iVar12 = 0x1505;
                    do {
                      pbVar4 = (byte *)(*(long *)(lVar13 + 8) + uVar14);
                      uVar14 = uVar14 + 2;
                      iVar12 = (iVar12 * 0x21 + (uint)*pbVar4) * 0x21 + (uint)pbVar4[1];
                    } while (((ulong)uVar6 & 0xfffffffe) != uVar14);
                    iVar9 = iVar12 * 0x21;
                  }
                  if ((uVar6 & 1) != 0) {
                    iVar12 = iVar9 + (uint)*(byte *)(*(long *)(lVar13 + 8) + uVar14);
                  }
                }
                *(int *)(lVar13 + 0x18) = iVar12;
                *(int *)(lVar13 + 0x14) = 1;
                return;
              }
              FUN_04000040(param_1);
              lVar10 = *(long *)(param_1 + 0x88);
              uVar11 = *(ulong *)(param_1 + 0x58);
              uVar14 = (uVar11 - lVar10) + *(long *)(param_1 + 0x90);
              uVar15 = 0;
              if (uVar11 <= uVar14) {
                uVar15 = uVar11;
              }
              if (uVar14 == uVar15) {
                return;
              }
              if (*(long *)(param_1 + 0x10) == 0) {
                return;
              }
              lVar13 = *(long *)(param_1 + 0x70);
              uVar16 = (ulong)(uint)(iVar9 - *(int *)(lVar13 + lVar10 * 0x20));
              if (uVar14 - uVar15 <= uVar16) {
                return;
              }
              uVar16 = lVar10 + uVar16;
              uVar14 = 0;
              if (uVar11 <= uVar16) {
                uVar14 = uVar11;
              }
              lVar10 = uVar16 - uVar14;
              if (*(int *)(lVar13 + lVar10 * 0x20) != iVar9) {
                FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
              }
              lVar13 = lVar13 + lVar10 * 0x20;
              if (*(int *)(lVar13 + 0x14) != 0) {
                return;
              }
              nn::os::LockMutex(pMVar2);
              if (*(long *)(param_1 + 0x378) == *(long *)(param_1 + 0x380)) {
                nn::os::UnlockMutex(pMVar2);
                FUN_03fffef0(param_1,iVar9,&local_78);
                return;
              }
              uStack_74 = *(undefined4 *)(param_1 + 0xd0);
              local_70 = *(undefined8 *)(lVar13 + 8);
              uStack_68 = (ulong)*(uint *)(lVar13 + 0x10);
              *(int *)(lVar13 + 0x14) = 2;
              local_78 = iVar9;
              iVar9 = FUN_04000500(param_1 + 0x360,&local_78);
              if (iVar9 != 0) {
                FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
              }
              nn::os::SignalConditionVariable((ConditionVariableType *)(param_1 + 0x3b0));
              nn::os::UnlockMutex(pMVar2);
              return;
            }
            if (*piVar18 != iVar9) {
              FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
              iVar12 = *piVar20;
            }
            if (iVar12 != 2) {
              FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
            }
            piVar18[6] = iVar5;
            *piVar20 = 1;
          }
        }
        do {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = *piVar1 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        lVar10 = *plVar3;
        if (lVar10 != 0) {
          lVar13 = *(long *)(param_1 + 0x370);
          uVar14 = *(ulong *)(param_1 + 0x380);
          plVar17 = (long *)(param_1 + 0x370);
          plVar19 = plVar3;
LAB_0400021c:
          *plVar19 = lVar10 + -1;
          uVar15 = 0;
          if (uVar14 < lVar13 + 1U) {
            uVar15 = ~uVar14;
          }
          *plVar17 = uVar15 + lVar13 + 1U;
        }
      }
    } while (0 < *piVar1);
  }
  nn::os::UnlockMutex(pMVar2);
  return;
}

