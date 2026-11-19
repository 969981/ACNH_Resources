
void FUN_038fe020(long param_1)

{
  int *piVar1;
  MutexType *pMVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  short sVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  byte bVar12;
  ushort uVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  
  lVar10 = FUN_038fde10();
  if (lVar10 != 0) {
    lVar11 = *(long *)(lVar10 + 0x40);
    if (*(char *)(lVar11 + 0x110) == '\0') {
      return;
    }
    uVar4 = *(uint *)(*(long *)(lVar10 + 0x38) + 4);
    if (0 < (int)uVar4) {
      uVar17 = 0;
      do {
        lVar18 = *(long *)(*(long *)(lVar10 + 0x28) + uVar17 * 8);
        *(undefined8 *)(*(long *)(lVar18 + 0x88) + 0x40) = 0;
        lVar11 = DAT_05ae78f0;
        if (*(long *)(lVar18 + 0x90) != -1) {
          uVar9 = (int)*(long *)(lVar18 + 0x90) - (uint)*(ushort *)(DAT_05ae78f0 + 0x3da);
          if (*(uint *)(DAT_05ae78f0 + 0x368) <= uVar9) {
            uVar9 = 0;
          }
          piVar3 = (int *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar9 * 0x20);
          do {
            iVar5 = *piVar3;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar7) {
              *piVar3 = iVar5 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar5 == 1) {
            piVar1 = (int *)(lVar11 + 0x3e0);
            do {
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar7) {
                *piVar1 = *piVar1 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            nn::os::LockMutex((MutexType *)(lVar11 + 0x348));
            piVar1 = (int *)(lVar11 + 0x378) + (ulong)*(byte *)(lVar11 + 0x3d8) * 4;
            if (1 < *(byte *)(lVar11 + 0x3d8)) {
              piVar1 = (int *)(lVar11 + 0x378);
            }
            if (*piVar1 < piVar1[1]) {
              *(int **)(*(long *)(piVar1 + 2) + (long)*piVar1 * 8) = piVar3;
              *piVar1 = *piVar1 + 1;
            }
            nn::os::UnlockMutex((MutexType *)(lVar11 + 0x348));
          }
          uVar15 = *(undefined8 *)(DAT_05ae78f0 + 0x30);
          FUN_0034f7c4(*(undefined8 *)(lVar18 + 0x80),uVar15);
          FUN_0034f968(*(undefined8 *)(lVar18 + 0x88),uVar15);
        }
        uVar17 = uVar17 + 1;
        *(undefined8 *)(lVar18 + 0x90) = 0xffffffffffffffff;
      } while (uVar17 != uVar4);
      lVar11 = *(long *)(lVar10 + 0x40);
    }
    if (*(long *)(lVar10 + 0x48) == lVar11) {
      FUN_0034915c(lVar11,*(undefined8 *)(DAT_05ae78f0 + 0x30));
    }
    *(undefined8 *)(lVar10 + 0x48) = 0;
  }
  uVar17 = (ulong)*(ushort *)(param_1 + 0xdc);
  if (*(ushort *)(param_1 + 0xdc) != 0) {
    uVar16 = 0;
    do {
      lVar10 = *(long *)(param_1 + 0x28) + uVar16 * 0x78;
      uVar13 = *(ushort *)(lVar10 + 0x6c);
      if (uVar13 != 0) {
        uVar17 = 0;
        do {
          lVar11 = *(long *)(lVar10 + 0x38) + uVar17 * 0xa8;
          bVar12 = *(byte *)(lVar11 + 0x9c);
          if (bVar12 != 0) {
            uVar19 = 0;
            do {
              lVar18 = DAT_05ae78f0;
              lVar14 = *(long *)(*(long *)(lVar11 + 0x88) + uVar19 * 8);
              if (lVar14 != -1) {
                pMVar2 = (MutexType *)(DAT_05ae78f0 + 0x580);
                nn::os::LockMutex(pMVar2);
                uVar4 = (int)(short)lVar14 - (uint)*(ushort *)(lVar18 + 0x5c0);
                if (*(uint *)(lVar18 + 0x5a0) <= uVar4) {
                  uVar4 = 0;
                }
                lVar14 = *(long *)(lVar18 + 0x5a8) + (long)(int)uVar4 * 0x80;
                sVar8 = *(short *)(lVar14 + 0x76) + -1;
                *(short *)(lVar14 + 0x76) = sVar8;
                if (sVar8 == 0) {
                  *(short *)(lVar18 + 0x5c4) = *(short *)(lVar18 + 0x5c4) + -1;
                }
                nn::os::UnlockMutex(pMVar2);
                bVar12 = *(byte *)(lVar11 + 0x9c);
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 < bVar12);
            uVar13 = *(ushort *)(lVar10 + 0x6c);
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar13);
        uVar17 = (ulong)*(ushort *)(param_1 + 0xdc);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar17);
  }
  FUN_0039c510(param_1);
  FUN_0039c6d0(param_1,*(undefined8 *)(DAT_05ae78f0 + 0x30));
  return;
}

