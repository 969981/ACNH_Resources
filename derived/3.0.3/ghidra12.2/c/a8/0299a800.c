
void FUN_0299a800(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  undefined8 *puVar14;
  float fVar15;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x28));
  lVar9 = FUN_02999570(param_1,param_3,param_4,2);
  if (lVar9 != 0) {
    lVar11 = *(long *)(param_1 + 0x160);
    iVar7 = *(int *)(lVar9 + 0xc);
    if (lVar11 != param_1 + 0x158) {
      do {
        lVar9 = *(long *)(lVar11 + -8);
        if ((*(char *)(lVar9 + 8) == '\x01') && (*(int *)(lVar9 + 0xc) == iVar7)) {
          lVar11 = *(long *)(lVar9 + 0x28);
          if (lVar11 != lVar9 + 0x20) {
            do {
              lVar13 = *(long *)(lVar11 + -8);
              if (0 < *(int *)(lVar13 + 0xc)) {
                uVar2 = *(undefined4 *)(lVar13 + 0x1c);
                fVar15 = *(float *)(lVar13 + 0x54);
                piVar1 = (int *)(param_2 + 8) + (ulong)*(uint *)(lVar13 + 0x18) * 0x798;
                if (4 < *(uint *)(lVar13 + 0x18)) {
                  piVar1 = (int *)(param_2 + 8);
                }
                if (*piVar1 < piVar1[1]) {
                  puVar14 = *(undefined8 **)(piVar1 + 4);
                  if (puVar14 != (undefined8 *)0x0) {
                    *(undefined8 *)(piVar1 + 4) = *puVar14;
                  }
                  *(undefined4 *)puVar14 = uVar2;
                  uVar3 = *(undefined8 *)(lVar13 + 0x58);
                  *(undefined8 *)((long)puVar14 + 0xc) = *(undefined8 *)(lVar13 + 0x60);
                  *(undefined8 *)((long)puVar14 + 4) = uVar3;
                  uVar3 = *(undefined8 *)(lVar13 + 0x68);
                  uVar5 = *(undefined8 *)(lVar13 + 0x70);
                  uVar4 = *(undefined8 *)(lVar13 + 0x78);
                  uVar6 = *(undefined8 *)(lVar13 + 0x80);
                  *(bool *)((long)puVar14 + 0x34) = 500.0 < fVar15;
                  *(undefined8 *)((long)puVar14 + 0x2c) = uVar6;
                  *(undefined8 *)((long)puVar14 + 0x24) = uVar4;
                  *(undefined8 *)((long)puVar14 + 0x1c) = uVar5;
                  *(undefined8 *)((long)puVar14 + 0x14) = uVar3;
                  if (*piVar1 < piVar1[1]) {
                    *(undefined8 **)(*(long *)(piVar1 + 2) + (long)*piVar1 * 8) = puVar14;
                    *piVar1 = *piVar1 + 1;
                  }
                }
              }
              lVar11 = *(long *)(lVar11 + 8);
            } while (lVar11 + -8 != lVar9 + 0x18);
          }
          break;
        }
        lVar11 = *(long *)(lVar11 + 8);
      } while (lVar11 + -8 != param_1 + 0x150);
    }
    iVar8 = *(int *)(param_1 + 0x198);
    if (iVar8 != 0) {
      lVar9 = *(long *)(param_1 + 0x1a0);
      iVar12 = 0;
      do {
        if (*(int *)(lVar9 + (long)iVar12 * 0x50 + 0xc) == iVar7) {
          lVar13 = lVar9 + (long)iVar12 * 0x50;
          lVar11 = *(long *)(lVar13 + 0x28);
          if (lVar11 != lVar13 + 0x20) {
            do {
              lVar10 = *(long *)(lVar11 + -8);
              if (0 < *(int *)(lVar10 + 0xc)) {
                uVar2 = *(undefined4 *)(lVar10 + 0x1c);
                fVar15 = *(float *)(lVar10 + 0x54);
                piVar1 = (int *)(param_2 + 8) + (ulong)*(uint *)(lVar10 + 0x18) * 0x798;
                if (4 < *(uint *)(lVar10 + 0x18)) {
                  piVar1 = (int *)(param_2 + 8);
                }
                if (*piVar1 < piVar1[1]) {
                  puVar14 = *(undefined8 **)(piVar1 + 4);
                  if (puVar14 != (undefined8 *)0x0) {
                    *(undefined8 *)(piVar1 + 4) = *puVar14;
                  }
                  *(undefined4 *)puVar14 = uVar2;
                  uVar3 = *(undefined8 *)(lVar10 + 0x58);
                  *(undefined8 *)((long)puVar14 + 0xc) = *(undefined8 *)(lVar10 + 0x60);
                  *(undefined8 *)((long)puVar14 + 4) = uVar3;
                  uVar3 = *(undefined8 *)(lVar10 + 0x68);
                  uVar5 = *(undefined8 *)(lVar10 + 0x70);
                  uVar4 = *(undefined8 *)(lVar10 + 0x78);
                  uVar6 = *(undefined8 *)(lVar10 + 0x80);
                  *(bool *)((long)puVar14 + 0x34) = 500.0 < fVar15;
                  *(undefined8 *)((long)puVar14 + 0x2c) = uVar6;
                  *(undefined8 *)((long)puVar14 + 0x24) = uVar4;
                  *(undefined8 *)((long)puVar14 + 0x1c) = uVar5;
                  *(undefined8 *)((long)puVar14 + 0x14) = uVar3;
                  if (*piVar1 < piVar1[1]) {
                    *(undefined8 **)(*(long *)(piVar1 + 2) + (long)*piVar1 * 8) = puVar14;
                    *piVar1 = *piVar1 + 1;
                  }
                }
              }
              lVar11 = *(long *)(lVar11 + 8);
            } while (lVar11 + -8 != lVar13 + 0x18);
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar8 != iVar12);
    }
    iVar8 = *(int *)(param_1 + 0x1a8);
    if (iVar8 != 0) {
      lVar9 = *(long *)(param_1 + 0x1b0);
      iVar12 = 0;
      do {
        if (*(int *)(lVar9 + (long)iVar12 * 0x50 + 0xc) == iVar7) {
          lVar13 = lVar9 + (long)iVar12 * 0x50;
          lVar11 = *(long *)(lVar13 + 0x28);
          if (lVar11 != lVar13 + 0x20) {
            do {
              lVar10 = *(long *)(lVar11 + -8);
              if (0 < *(int *)(lVar10 + 0xc)) {
                uVar2 = *(undefined4 *)(lVar10 + 0x1c);
                fVar15 = *(float *)(lVar10 + 0x54);
                piVar1 = (int *)(param_2 + 8) + (ulong)*(uint *)(lVar10 + 0x18) * 0x798;
                if (4 < *(uint *)(lVar10 + 0x18)) {
                  piVar1 = (int *)(param_2 + 8);
                }
                if (*piVar1 < piVar1[1]) {
                  puVar14 = *(undefined8 **)(piVar1 + 4);
                  if (puVar14 != (undefined8 *)0x0) {
                    *(undefined8 *)(piVar1 + 4) = *puVar14;
                  }
                  *(undefined4 *)puVar14 = uVar2;
                  uVar3 = *(undefined8 *)(lVar10 + 0x58);
                  *(undefined8 *)((long)puVar14 + 0xc) = *(undefined8 *)(lVar10 + 0x60);
                  *(undefined8 *)((long)puVar14 + 4) = uVar3;
                  uVar3 = *(undefined8 *)(lVar10 + 0x68);
                  uVar5 = *(undefined8 *)(lVar10 + 0x70);
                  uVar4 = *(undefined8 *)(lVar10 + 0x78);
                  uVar6 = *(undefined8 *)(lVar10 + 0x80);
                  *(bool *)((long)puVar14 + 0x34) = 500.0 < fVar15;
                  *(undefined8 *)((long)puVar14 + 0x2c) = uVar6;
                  *(undefined8 *)((long)puVar14 + 0x24) = uVar4;
                  *(undefined8 *)((long)puVar14 + 0x1c) = uVar5;
                  *(undefined8 *)((long)puVar14 + 0x14) = uVar3;
                  if (*piVar1 < piVar1[1]) {
                    *(undefined8 **)(*(long *)(piVar1 + 2) + (long)*piVar1 * 8) = puVar14;
                    *piVar1 = *piVar1 + 1;
                  }
                }
              }
              lVar11 = *(long *)(lVar11 + 8);
            } while (lVar11 + -8 != lVar13 + 0x18);
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar8 != iVar12);
    }
  }
  lVar9 = FUN_02999570(param_1,param_3,param_4,4);
  if ((lVar9 != 0) && (lVar11 = *(long *)(param_1 + 0x160), lVar11 != param_1 + 0x158)) {
    do {
      lVar13 = *(long *)(lVar11 + -8);
      if ((*(char *)(lVar13 + 8) == '\x02') && (*(int *)(lVar13 + 0xc) == *(int *)(lVar9 + 0xc))) {
        lVar9 = *(long *)(lVar13 + 0x28);
        if (lVar9 != lVar13 + 0x20) {
          do {
            lVar11 = *(long *)(lVar9 + -8);
            if (0 < *(int *)(lVar11 + 0xc)) {
              uVar2 = *(undefined4 *)(lVar11 + 0x1c);
              fVar15 = *(float *)(lVar11 + 0x54);
              piVar1 = (int *)(param_2 + 8) + (ulong)*(uint *)(lVar11 + 0x18) * 0x798;
              if (4 < *(uint *)(lVar11 + 0x18)) {
                piVar1 = (int *)(param_2 + 8);
              }
              if (*piVar1 < piVar1[1]) {
                puVar14 = *(undefined8 **)(piVar1 + 4);
                if (puVar14 != (undefined8 *)0x0) {
                  *(undefined8 *)(piVar1 + 4) = *puVar14;
                }
                *(undefined4 *)puVar14 = uVar2;
                uVar3 = *(undefined8 *)(lVar11 + 0x58);
                *(undefined8 *)((long)puVar14 + 0xc) = *(undefined8 *)(lVar11 + 0x60);
                *(undefined8 *)((long)puVar14 + 4) = uVar3;
                uVar3 = *(undefined8 *)(lVar11 + 0x68);
                uVar5 = *(undefined8 *)(lVar11 + 0x70);
                uVar4 = *(undefined8 *)(lVar11 + 0x78);
                uVar6 = *(undefined8 *)(lVar11 + 0x80);
                *(bool *)((long)puVar14 + 0x34) = 500.0 < fVar15;
                *(undefined8 *)((long)puVar14 + 0x2c) = uVar6;
                *(undefined8 *)((long)puVar14 + 0x24) = uVar4;
                *(undefined8 *)((long)puVar14 + 0x1c) = uVar5;
                *(undefined8 *)((long)puVar14 + 0x14) = uVar3;
                if (*piVar1 < piVar1[1]) {
                  *(undefined8 **)(*(long *)(piVar1 + 2) + (long)*piVar1 * 8) = puVar14;
                  *piVar1 = *piVar1 + 1;
                }
              }
            }
            lVar9 = *(long *)(lVar9 + 8);
          } while (lVar9 + -8 != lVar13 + 0x18);
        }
        break;
      }
      lVar11 = *(long *)(lVar11 + 8);
    } while (lVar11 + -8 != param_1 + 0x150);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
  return;
}

