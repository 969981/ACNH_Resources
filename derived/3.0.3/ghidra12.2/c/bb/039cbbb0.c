
void FUN_039cbbb0(long param_1,uint param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  undefined8 *puVar21;
  uint uVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined8 *puVar25;
  long lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  
  if (*(char *)(param_1 + 8) < '\0') {
    nn::os::LockMutex((MutexType *)(param_1 + 0x138));
    iVar5 = *(int *)(param_1 + 0x234);
    if (iVar5 == 0) {
      if (1 < *(int *)(param_1 + 0x168)) {
        lVar15 = *(long *)(param_1 + 0x160);
        do {
          lVar15 = *(long *)(lVar15 + 8);
        } while (lVar15 != param_1 + 0x158);
      }
    }
    else if (iVar5 == 2) {
      if (1 < *(int *)(param_1 + 0x168)) {
        puVar13 = (undefined8 *)(param_1 + 0x158);
        puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x160) + 8);
        if (puVar11 != puVar13) {
          lVar15 = -(long)*(int *)(param_1 + 0x16c);
          do {
            puVar12 = (undefined8 *)*puVar11;
            iVar5 = *(int *)((long)puVar12 + lVar15 + 0x30);
            uVar19 = (ulong)iVar5;
            if (iVar5 == 0) {
              fVar28 = 3.4028235e+38;
            }
            else {
              puVar21 = *(undefined8 **)((long)puVar12 + lVar15 + 0x38);
              puVar23 = puVar21;
              fVar28 = 3.4028235e+38;
              for (uVar16 = uVar19 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
                fVar27 = *(float *)(*(long *)(*(long *)*puVar23 + 0x48) + 0x50);
                if (fVar27 <= fVar28) {
                  fVar27 = fVar28;
                }
                puVar23 = puVar23 + 1;
                fVar28 = fVar27;
              }
              if (2 < (uVar19 - 1 & 0x1fffffffffffffff)) {
                do {
                  fVar27 = *(float *)(*(long *)(*(long *)*puVar23 + 0x48) + 0x50);
                  if (fVar27 <= fVar28) {
                    fVar27 = fVar28;
                  }
                  fVar28 = *(float *)(*(long *)(*(long *)puVar23[1] + 0x48) + 0x50);
                  puVar25 = puVar23 + 2;
                  puVar9 = puVar23 + 3;
                  puVar23 = puVar23 + 4;
                  if (fVar28 <= fVar27) {
                    fVar28 = fVar27;
                  }
                  fVar27 = *(float *)(*(long *)(*(long *)*puVar25 + 0x48) + 0x50);
                  if (fVar27 <= fVar28) {
                    fVar27 = fVar28;
                  }
                  fVar28 = *(float *)(*(long *)(*(long *)*puVar9 + 0x48) + 0x50);
                  if (fVar28 <= fVar27) {
                    fVar28 = fVar27;
                  }
                } while (puVar23 != puVar21 + uVar19);
              }
            }
            fVar27 = 3.4028235e+38;
            puVar23 = *(undefined8 **)((long)puVar11 + lVar15 + 0x38);
            iVar5 = *(int *)((long)puVar11 + lVar15 + 0x30);
            uVar19 = (ulong)iVar5;
            if (iVar5 != 0) {
              puVar21 = puVar23;
              for (uVar16 = uVar19 & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
                fVar29 = *(float *)(*(long *)(*(long *)*puVar21 + 0x48) + 0x50);
                if (fVar29 <= fVar27) {
                  fVar29 = fVar27;
                }
                fVar27 = fVar29;
                puVar21 = puVar21 + 1;
              }
              if (2 < (uVar19 - 1 & 0x1fffffffffffffff)) {
                do {
                  fVar29 = *(float *)(*(long *)(*(long *)*puVar21 + 0x48) + 0x50);
                  if (fVar29 <= fVar27) {
                    fVar29 = fVar27;
                  }
                  fVar27 = *(float *)(*(long *)(*(long *)puVar21[1] + 0x48) + 0x50);
                  puVar25 = puVar21 + 2;
                  puVar9 = puVar21 + 3;
                  puVar21 = puVar21 + 4;
                  if (fVar27 <= fVar29) {
                    fVar27 = fVar29;
                  }
                  fVar29 = *(float *)(*(long *)(*(long *)*puVar25 + 0x48) + 0x50);
                  if (fVar29 <= fVar27) {
                    fVar29 = fVar27;
                  }
                  fVar27 = *(float *)(*(long *)(*(long *)*puVar9 + 0x48) + 0x50);
                  if (fVar27 <= fVar29) {
                    fVar27 = fVar29;
                  }
                } while (puVar21 != puVar23 + uVar19);
              }
            }
            puVar21 = (undefined8 *)puVar11[1];
            if (fVar28 < fVar27) {
              puVar25 = puVar12;
              do {
                puVar25 = (undefined8 *)*puVar25;
                if (puVar25 == puVar13) {
                  puVar25 = puVar13;
                  break;
                }
                iVar6 = *(int *)((long)puVar25 + lVar15 + 0x30);
                uVar16 = (ulong)iVar6;
                if (iVar6 == 0) {
                  fVar28 = 3.4028235e+38;
                }
                else {
                  puVar10 = *(undefined8 **)((long)puVar25 + lVar15 + 0x38);
                  puVar9 = puVar10;
                  fVar28 = 3.4028235e+38;
                  for (uVar3 = uVar16 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
                    fVar27 = *(float *)(*(long *)(*(long *)*puVar9 + 0x48) + 0x50);
                    if (fVar27 <= fVar28) {
                      fVar27 = fVar28;
                    }
                    puVar9 = puVar9 + 1;
                    fVar28 = fVar27;
                  }
                  if (2 < (uVar16 - 1 & 0x1fffffffffffffff)) {
                    do {
                      fVar27 = *(float *)(*(long *)(*(long *)*puVar9 + 0x48) + 0x50);
                      if (fVar27 <= fVar28) {
                        fVar27 = fVar28;
                      }
                      fVar28 = *(float *)(*(long *)(*(long *)puVar9[1] + 0x48) + 0x50);
                      puVar1 = puVar9 + 2;
                      puVar4 = puVar9 + 3;
                      puVar9 = puVar9 + 4;
                      if (fVar28 <= fVar27) {
                        fVar28 = fVar27;
                      }
                      fVar27 = *(float *)(*(long *)(*(long *)*puVar1 + 0x48) + 0x50);
                      if (fVar27 <= fVar28) {
                        fVar27 = fVar28;
                      }
                      fVar28 = *(float *)(*(long *)(*(long *)*puVar4 + 0x48) + 0x50);
                      if (fVar28 <= fVar27) {
                        fVar28 = fVar27;
                      }
                    } while (puVar9 != puVar10 + uVar16);
                  }
                }
                fVar27 = 3.4028235e+38;
                if (iVar5 != 0) {
                  fVar27 = 3.4028235e+38;
                  puVar9 = puVar23;
                  if ((uVar19 & 3) != 0) {
                    puVar10 = puVar23;
                    uVar16 = uVar19 & 3;
                    fVar29 = fVar27;
                    do {
                      puVar9 = puVar10 + 1;
                      fVar27 = *(float *)(*(long *)(*(long *)*puVar10 + 0x48) + 0x50);
                      if (fVar27 <= fVar29) {
                        fVar27 = fVar29;
                      }
                      uVar16 = uVar16 - 1;
                      puVar10 = puVar9;
                      fVar29 = fVar27;
                    } while (uVar16 != 0);
                  }
                  if (2 < (uVar19 - 1 & 0x1fffffffffffffff)) {
                    do {
                      fVar29 = *(float *)(*(long *)(*(long *)*puVar9 + 0x48) + 0x50);
                      if (fVar29 <= fVar27) {
                        fVar29 = fVar27;
                      }
                      fVar27 = *(float *)(*(long *)(*(long *)puVar9[1] + 0x48) + 0x50);
                      puVar10 = puVar9 + 2;
                      puVar1 = puVar9 + 3;
                      puVar9 = puVar9 + 4;
                      if (fVar27 <= fVar29) {
                        fVar27 = fVar29;
                      }
                      fVar29 = *(float *)(*(long *)(*(long *)*puVar10 + 0x48) + 0x50);
                      if (fVar29 <= fVar27) {
                        fVar29 = fVar27;
                      }
                      fVar27 = *(float *)(*(long *)(*(long *)*puVar1 + 0x48) + 0x50);
                      if (fVar27 <= fVar29) {
                        fVar27 = fVar29;
                      }
                    } while (puVar9 != puVar23 + uVar19);
                  }
                }
              } while (fVar28 < fVar27);
              puVar23 = puVar21;
              if (puVar12 != (undefined8 *)0x0) {
                puVar12[1] = puVar21;
                puVar23 = (undefined8 *)puVar11[1];
              }
              if (puVar23 != (undefined8 *)0x0) {
                *puVar23 = *puVar11;
              }
              *puVar11 = 0;
              puVar11[1] = 0;
              puVar12 = (undefined8 *)puVar25[1];
              puVar25[1] = puVar11;
              *puVar11 = puVar25;
              puVar11[1] = puVar12;
              if (puVar12 != (undefined8 *)0x0) {
                *puVar12 = puVar11;
              }
            }
            puVar11 = puVar21;
          } while (puVar21 != puVar13);
        }
      }
    }
    else if ((iVar5 == 1) && (1 < *(int *)(param_1 + 0x168))) {
      puVar13 = (undefined8 *)(param_1 + 0x158);
      puVar11 = *(undefined8 **)(*(long *)(param_1 + 0x160) + 8);
      if (puVar11 != puVar13) {
        lVar15 = -(long)*(int *)(param_1 + 0x16c);
        do {
          puVar12 = (undefined8 *)puVar11[1];
          puVar23 = (undefined8 *)*puVar11;
          iVar5 = *(int *)((long)puVar11 + lVar15 + 0x2a0);
          if (0 < *(int *)((long)puVar23 + lVar15 + 0x2a0) - iVar5) {
            puVar21 = puVar23;
            do {
              puVar21 = (undefined8 *)*puVar21;
              puVar25 = puVar13;
              if (puVar21 == puVar13) break;
              puVar25 = puVar21;
            } while (0 < *(int *)((long)puVar21 + lVar15 + 0x2a0) - iVar5);
            puVar21 = puVar12;
            if (puVar23 != (undefined8 *)0x0) {
              puVar23[1] = puVar12;
              puVar21 = (undefined8 *)puVar11[1];
            }
            if (puVar21 != (undefined8 *)0x0) {
              *puVar21 = *puVar11;
            }
            *puVar11 = 0;
            puVar11[1] = 0;
            puVar23 = (undefined8 *)puVar25[1];
            puVar25[1] = puVar11;
            *puVar11 = puVar25;
            puVar11[1] = puVar23;
            if (puVar23 != (undefined8 *)0x0) {
              *puVar23 = puVar11;
            }
          }
          puVar11 = puVar12;
        } while (puVar12 != puVar13);
      }
    }
    if (*(int *)(param_1 + 0x1b0) != 0) {
      lVar15 = (long)*(int *)(param_1 + 0x1b0) << 3;
      puVar13 = *(undefined8 **)(param_1 + 0x1b8);
      do {
        (**(code **)(*(long *)*puVar13 + 8))();
        lVar15 = lVar15 + -8;
        puVar13 = puVar13 + 1;
      } while (lVar15 != 0);
    }
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    if (*(long *)(param_1 + 0x160) != param_1 + 0x158) {
      lVar26 = (long)*(int *)(param_1 + 0x16c);
      lVar15 = *(long *)(param_1 + 0x160) - lVar26;
      do {
        if (*(int *)(param_1 + 0x234) == 2) {
          if (*(long *)(lVar15 + 0x70) != 0) {
            uVar14 = 0;
            if (*(int *)(lVar15 + 0x30) != 0) {
              puVar13 = *(undefined8 **)(lVar15 + 0x38);
              uVar16 = (long)*(int *)(lVar15 + 0x30) - 1U & 0x1fffffffffffffff;
              uVar19 = uVar16 + 1;
              if (uVar16 < 3) {
                uVar14 = 0;
              }
              else {
                uVar14 = 0;
                uVar16 = uVar19 & 0x3ffffffffffffffc;
                do {
                  if (uVar14 <= *(uint *)(*(long *)*puVar13 + 0xa0)) {
                    uVar14 = *(uint *)(*(long *)*puVar13 + 0xa0);
                  }
                  if (uVar14 <= *(uint *)(*(long *)puVar13[1] + 0xa0)) {
                    uVar14 = *(uint *)(*(long *)puVar13[1] + 0xa0);
                  }
                  puVar11 = puVar13 + 2;
                  puVar12 = puVar13 + 3;
                  puVar13 = puVar13 + 4;
                  if (uVar14 <= *(uint *)(*(long *)*puVar11 + 0xa0)) {
                    uVar14 = *(uint *)(*(long *)*puVar11 + 0xa0);
                  }
                  if (uVar14 <= *(uint *)(*(long *)*puVar12 + 0xa0)) {
                    uVar14 = *(uint *)(*(long *)*puVar12 + 0xa0);
                  }
                  uVar16 = uVar16 - 4;
                } while (uVar16 != 0);
              }
              for (uVar19 = uVar19 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
                if (uVar14 <= *(uint *)(*(long *)*puVar13 + 0xa0)) {
                  uVar14 = *(uint *)(*(long *)*puVar13 + 0xa0);
                }
                puVar13 = puVar13 + 1;
              }
            }
            if (uVar14 == *(uint *)(*(long *)(lVar15 + 0x70) + 0x5768)) goto LAB_039cc124;
          }
        }
        else {
LAB_039cc124:
          FUN_039cc3a0(param_1,lVar15);
        }
        lVar15 = *(long *)(lVar15 + lVar26 + 8) - lVar26;
      } while (lVar15 != (param_1 + 0x158) - lVar26);
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffff7f;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x138));
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0xb8));
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar13 = *(undefined8 **)(param_1 + 0x28);
    lVar15 = (long)*(int *)(param_1 + 0x20) << 3;
    do {
      uVar8 = *puVar13;
      if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
        *(undefined8 *)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x10) * 8) = uVar8;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      }
      FUN_03a03fd0(uVar8,1,0);
      puVar13 = puVar13 + 1;
      lVar15 = lVar15 + -8;
    } while (lVar15 != 0);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xb8));
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar17 = *(long **)(param_1 + 0x18);
    lVar15 = (long)*(int *)(param_1 + 0x10) << 3;
    do {
      lVar24 = *plVar17;
      puVar2 = (uint *)(lVar24 + 0x5598);
      lVar26 = *(long *)(lVar24 + 0x4ee8);
      uVar14 = *puVar2 | 0x38;
      *puVar2 = uVar14;
      *(uint *)(lVar24 + 0x559c) = param_2;
      uVar7 = 0;
      if (lVar26 != 0) {
        if ((*(ushort *)(lVar26 + 0x10) & 0x108) == 0 &&
            (*(int *)(lVar26 + 0x20) != 1 && *(int *)(lVar26 + 0x20) != 2)) {
          uVar7 = 0;
        }
        else {
          uVar14 = uVar14 & 0xffffffcf;
          uVar7 = (*(uint *)(lVar24 + 0x55a4) >> 0x12 ^ 0xffffffff) & 1;
        }
      }
      plVar17 = plVar17 + 1;
      uVar18 = 0;
      if ((uVar14 & 8) != 0 && (param_2 & 1) != 0) {
        uVar18 = 8;
      }
      uVar20 = 0;
      if ((uVar14 & 0x10) != 0 && (param_2 & 2) != 0) {
        uVar20 = 0x10;
      }
      uVar22 = 0;
      if ((uVar14 & 0x20) != 0 && (param_2 & 4) != 0) {
        uVar22 = 0x20;
      }
      lVar15 = lVar15 + -8;
      *puVar2 = uVar20 | uVar14 & 0xffffffc7 | uVar18 | uVar22;
      *(uint *)(lVar24 + 0x2e80) = *(uint *)(lVar24 + 0x2e80) & 0xfffffffe | uVar7;
    } while (lVar15 != 0);
  }
  return;
}

