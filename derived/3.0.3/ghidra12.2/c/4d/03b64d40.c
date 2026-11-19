
void FUN_03b64d40(long param_1,float *param_2,float *param_3,float *param_4,undefined2 param_5,
                 undefined4 *param_6)

{
  uint *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  float fVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  long *plVar11;
  long lVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  MutexType *pMVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  
  lVar17 = *(long *)(param_1 + 0x10);
  fVar18 = *param_3;
  bVar10 = true;
  if ((*(float *)(param_1 + 8) != fVar18 || lVar17 != 0) &&
     (bVar10 = false, !NAN(*param_2) && !NAN(fVar18))) {
    bVar10 = *param_2 == fVar18;
  }
  if (bVar10) {
    if (*(long *)(param_4 + 4) != 0) {
      plVar11 = *(long **)(param_1 + 0x10);
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x10))();
        *(long *)(param_1 + 0x10) = 0;
      }
      lVar17 = *(long *)(param_4 + 4);
      if (lVar17 != 0) {
        lVar12 = *(long *)(*(long *)PTR_DAT_04bd1e70 + 400);
        pMVar16 = *(MutexType **)(lVar12 + 0x40280);
        nn::os::LockMutex(pMVar16);
        piVar13 = *(int **)(lVar12 + 0x40260);
        if (*piVar13 < piVar13[1]) {
          *(long *)(*(long *)(piVar13 + 2) + (long)*piVar13 * 8) = lVar17;
          *piVar13 = *piVar13 + 1;
        }
        nn::os::UnlockMutex(pMVar16);
        return;
      }
    }
  }
  else {
    plVar11 = *(long **)(param_1 + 0x10);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x10))();
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    puVar7 = PTR_DAT_04bd1e70;
    if (lVar17 == 0) {
      fVar18 = *param_2;
    }
    else {
      fVar18 = *(float *)(param_1 + 0xc);
    }
    lVar17 = *(long *)(*(long *)PTR_DAT_04bd1e70 + 0x198);
    if ((lVar17 != 0) && (*(char *)(lVar17 + 8) != '\0')) {
      *(int *)(lVar17 + 0xc) = *(int *)(lVar17 + 0xc) + 1;
      puVar1 = (uint *)(lVar17 + 0x40);
      do {
        while( true ) {
          uVar4 = *puVar1;
          if (uVar4 == 0xffff) goto LAB_03b64f54;
          if (*puVar1 == uVar4) break;
          ClearExclusiveLocal();
        }
        cVar6 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar10) {
          *puVar1 = (uint)*(ushort *)(*(long *)(lVar17 + 0x38) + (ulong)uVar4 * 2);
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if ((uVar4 & 0xffff) != 0xffff) {
        piVar13 = (int *)(lVar17 + 0x18);
        do {
          cVar6 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar10) {
            *piVar13 = *piVar13 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          puVar9 = PTR_DAT_04bd2030;
          puVar8 = PTR_DAT_04bd1f28;
        } while (cVar6 != '\0');
        if (*(long *)(lVar17 + 0x20) != 0) {
          fVar19 = *param_4;
          plVar11 = (long *)(*(long *)(lVar17 + 0x20) + (ulong)(uVar4 & 0xffff) * 0x50);
          fVar5 = param_4[1];
          *(undefined1 *)((long)plVar11 + 0x1c) = 0;
          *(float *)(plVar11 + 4) = fVar18;
          *(float *)(plVar11 + 2) = fVar5;
          *(undefined4 *)((long)plVar11 + 0x14) = 0;
          *plVar11 = (long)(puVar8 + 0x10);
          plVar11[1] = (long)(puVar9 + 0x10);
          *(float *)(plVar11 + 3) = 1.0 / fVar19;
          *(float *)((long)plVar11 + 0x24) = *param_3 - fVar18;
          lVar17 = *(long *)(*(long *)puVar7 + 0x188);
          piVar13 = (int *)(lVar17 + 0x40);
          if (*piVar13 != 0) {
            puVar1 = (uint *)(lVar17 + 0x38);
            do {
              while( true ) {
                uVar4 = *puVar1;
                if (*puVar1 == uVar4) break;
                ClearExclusiveLocal();
              }
              cVar6 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar10) {
                *puVar1 = (uint)*(ushort *)(*(long *)(lVar17 + 0x30) + (ulong)uVar4 * 2);
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            piVar2 = (int *)(lVar17 + 0x10);
            do {
              cVar6 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar10) {
                *piVar2 = *piVar2 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            puVar3 = (undefined8 *)(*(long *)(lVar17 + 0x18) + ((ulong)uVar4 & 0xffff) * 0x40);
            do {
              cVar6 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(piVar13,0x10);
              if (bVar10) {
                *piVar13 = *piVar13 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            *(undefined2 *)(puVar3 + 1) = param_5;
            *puVar3 = &PTR_LAB_04b77980;
            *(int *)((long)puVar3 + 0xc) =
                 (int)((ulong)((long)plVar11 - *(long *)(*(long *)(*(long *)puVar7 + 0x198) + 0x20))
                      >> 4) * -0x33333333;
            *(undefined4 *)(puVar3 + 2) = *param_6;
            *(long **)(param_1 + 0x10) = plVar11;
            lVar17 = *(long *)(*(long *)puVar7 + 0x188);
            uVar14 = 2;
            if (param_4[2] != 1.4013e-45) {
              uVar14 = 3;
            }
            piVar13 = (int *)(lVar17 + 0x40);
            if (*piVar13 != 0) {
              puVar1 = (uint *)(lVar17 + 0x38);
              do {
                while( true ) {
                  uVar4 = *puVar1;
                  if (*puVar1 == uVar4) break;
                  ClearExclusiveLocal();
                }
                cVar6 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar10) {
                  *puVar1 = (uint)*(ushort *)(*(long *)(lVar17 + 0x30) + (ulong)uVar4 * 2);
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              piVar2 = (int *)(lVar17 + 0x10);
              do {
                cVar6 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar10) {
                  *piVar2 = *piVar2 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              plVar11 = (long *)(*(long *)(lVar17 + 0x18) + ((ulong)uVar4 & 0xffff) * 0x40);
              do {
                cVar6 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(piVar13,0x10);
                if (bVar10) {
                  *piVar13 = *piVar13 + -1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              *plVar11 = (long)(PTR_DAT_04bd2008 + 0x10);
              lVar17 = *(long *)(param_4 + 4);
              *plVar11 = (long)(PTR_DAT_04bd1f78 + 0x10);
              if (lVar17 == 0) {
                uVar15 = 0xffffffff;
              }
              else {
                uVar15 = (undefined4)
                         ((ulong)(lVar17 - *(long *)(*(long *)(*(long *)puVar7 + 0x188) + 0x18)) >>
                         6);
              }
              *(undefined4 *)(plVar11 + 1) = uVar15;
              *(int *)((long)plVar11 + 0xc) =
                   (int)((ulong)((long)puVar3 - *(long *)(*(long *)(*(long *)puVar7 + 0x188) + 0x18)
                                ) >> 6);
              *(undefined4 *)(plVar11 + 2) = uVar14;
              lVar17 = *(long *)(*(long *)puVar7 + 400);
              pMVar16 = *(MutexType **)(lVar17 + 0x40280);
              nn::os::LockMutex(pMVar16);
              piVar13 = *(int **)(lVar17 + 0x40260);
              if (*piVar13 < piVar13[1]) {
                *(long **)(*(long *)(piVar13 + 2) + (long)*piVar13 * 8) = plVar11;
                *piVar13 = *piVar13 + 1;
              }
              nn::os::UnlockMutex(pMVar16);
            }
            *(float *)(param_1 + 8) = *param_3;
            return;
          }
        }
      }
    }
LAB_03b64f54:
    fVar18 = *param_3;
    if (fVar18 != *(float *)(param_1 + 8)) {
      lVar17 = *(long *)(*(long *)puVar7 + 0x188);
      piVar13 = (int *)(lVar17 + 0x40);
      if (*piVar13 != 0) {
        puVar1 = (uint *)(lVar17 + 0x38);
        do {
          while( true ) {
            uVar4 = *puVar1;
            if (*puVar1 == uVar4) break;
            ClearExclusiveLocal();
          }
          cVar6 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar10) {
            *puVar1 = (uint)*(ushort *)(*(long *)(lVar17 + 0x30) + (ulong)uVar4 * 2);
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        piVar2 = (int *)(lVar17 + 0x10);
        do {
          cVar6 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar10) {
            *piVar2 = *piVar2 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        plVar11 = (long *)(*(long *)(lVar17 + 0x18) + ((ulong)uVar4 & 0xffff) * 0x40);
        do {
          cVar6 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar13,0x10);
          if (bVar10) {
            *piVar13 = *piVar13 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        *plVar11 = (long)(PTR_DAT_04bd2008 + 0x10);
        fVar18 = *param_3;
        *plVar11 = (long)&PTR_LAB_04b779c0;
        *(undefined2 *)((long)plVar11 + 0xc) = param_5;
        *(float *)(plVar11 + 1) = fVar18;
        *(undefined4 *)(plVar11 + 2) = *param_6;
        lVar17 = *(long *)(*(long *)puVar7 + 400);
        pMVar16 = *(MutexType **)(lVar17 + 0x40280);
        nn::os::LockMutex(pMVar16);
        piVar13 = *(int **)(lVar17 + 0x40260);
        if (*piVar13 < piVar13[1]) {
          *(long **)(*(long *)(piVar13 + 2) + (long)*piVar13 * 8) = plVar11;
          *piVar13 = *piVar13 + 1;
        }
        nn::os::UnlockMutex(pMVar16);
      }
      fVar18 = *param_3;
    }
    *(float *)(param_1 + 8) = fVar18;
    plVar11 = *(long **)(param_1 + 0x10);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x10))();
      *(long *)(param_1 + 0x10) = 0;
    }
  }
  return;
}

