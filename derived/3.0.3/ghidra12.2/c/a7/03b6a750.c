
long * FUN_03b6a750(long param_1,long *param_2,long param_3)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  int iVar8;
  short sVar9;
  ushort uVar10;
  undefined2 uVar11;
  char cVar12;
  bool bVar13;
  uint uVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined1 uVar19;
  uint uVar20;
  undefined4 uVar21;
  long *plVar22;
  short *psVar23;
  int *piVar24;
  uint uVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  uint uVar30;
  ulong uVar31;
  uint uVar32;
  byte *pbVar33;
  uint uVar34;
  long *plVar35;
  MutexType *pMVar36;
  void *__dest;
  long lVar37;
  void *__src;
  long lVar38;
  undefined1 *puVar39;
  long lVar40;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  if ((char *)param_2[1] == "") {
    return (long *)0x0;
  }
  if (param_3 == 0) {
    return (long *)0x0;
  }
  if (*(char *)param_2[1] == '\0') {
    return (long *)0x0;
  }
  piVar24 = (int *)(param_1 + 0x18);
  if (*piVar24 < 1) {
    return (long *)0x0;
  }
  piVar1 = (int *)(param_1 + 0x50);
  if (*piVar1 < (int)(uint)*(ushort *)(param_3 + 0x30)) {
    return (long *)0x0;
  }
  piVar2 = (int *)(param_1 + 0x80);
  if (*(int *)(param_1 + 0x7c) - *piVar2 <
      (int)((uint)*(ushort *)(param_3 + 0x40) * (uint)*(ushort *)(param_3 + 0x30))) {
    return (long *)0x0;
  }
  if ((*(char *)(param_1 + 8) != '\0') || (*(long *)(param_1 + 0x10) != 0)) {
    puVar3 = (uint *)(param_1 + 0x38);
    do {
      while( true ) {
        uVar30 = *puVar3;
        if (uVar30 == 0xffff) goto LAB_03b6a82c;
        if (*puVar3 == uVar30) break;
        ClearExclusiveLocal();
      }
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar13) {
        *puVar3 = (uint)*(ushort *)(*(long *)(param_1 + 0x30) + (ulong)uVar30 * 2);
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (((uVar30 ^ 0xffffffff) & 0xffff) != 0) {
      do {
        cVar12 = '\x01';
        bVar13 = (bool)ExclusiveMonitorPass(piVar24,0x10);
        if (bVar13) {
          *piVar24 = *piVar24 + -1;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      plVar35 = (long *)(*(long *)(param_1 + 0x10) + ((ulong)uVar30 & 0xffff) * 0xd0);
      *(short *)((long)plVar35 + 0xba) = (short)uVar30;
      sVar9 = *(short *)(param_3 + 0x30);
      goto joined_r0x03b6aad0;
    }
  }
LAB_03b6a82c:
  plVar35 = (long *)0x0;
  sVar9 = *(short *)(param_3 + 0x30);
joined_r0x03b6aad0:
  if (sVar9 != 0) {
    uVar30 = 0;
    puVar3 = (uint *)(param_1 + 0x70);
    puVar4 = (uint *)(param_1 + 0xa8);
    do {
      uVar10 = *(ushort *)(param_3 + 0x40);
      uVar31 = (ulong)*(uint *)(param_3 + 0x38);
      uVar32 = *(uint *)(param_3 + 0x3c);
      if ((*(char *)(param_1 + 0x40) != '\0') ||
         (plVar22 = (long *)0x0, *(long *)(param_1 + 0x48) != 0)) {
        do {
          while( true ) {
            uVar25 = *puVar3;
            uVar26 = (ulong)uVar25;
            if (uVar25 == 0xffff) goto LAB_03b6aa40;
            if (*puVar3 == uVar25) break;
            ClearExclusiveLocal();
          }
          cVar12 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar13) {
            *puVar3 = (uint)*(ushort *)(*(long *)(param_1 + 0x68) + uVar26 * 2);
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if (((uVar25 ^ 0xffffffff) & 0xffff) == 0) {
LAB_03b6aa40:
          plVar22 = (long *)0x0;
        }
        else {
          do {
            cVar12 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar13) {
              *piVar1 = *piVar1 + -1;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          lVar27 = *(long *)(param_1 + 0x48);
          uVar28 = uVar26 & 0xffff;
          plVar22 = (long *)(lVar27 + uVar28 * 0xe0);
          *(short *)(plVar22 + 0x1b) = (short)uVar25;
          if ((char)plVar22[0x16] == '\0') {
            lVar37 = *(long *)(param_1 + 0xf8);
            lVar38 = lVar27 + uVar28 * 0xe0;
            *(undefined1 *)(plVar22 + 0x16) = 1;
            *(ulong *)(lVar38 + 0x20) = uVar31;
            *(undefined1 *)(lVar38 + 0xb1) = 0;
            *(undefined8 *)(lVar38 + 0xb4) = 0;
            lVar37 = lVar37 + (uVar26 & 0xffff) * 0x8000;
            *(undefined8 *)(lVar38 + 0xbc) = 0;
            lVar40 = lVar37 + uVar31;
            *(undefined4 *)(lVar38 + 0xc4) = 0;
            *(undefined4 *)(lVar38 + 0x74) = 0x28;
            *(undefined4 *)(lVar38 + 0x8c) = 0x38;
            *(undefined4 *)(lVar38 + 0xa4) = 0x38;
            *(undefined4 *)(lVar38 + 0x28) = 0;
            *(undefined2 *)(lVar38 + 0xac) = 0;
            *plVar22 = lVar37;
            plVar22[1] = lVar40;
            lVar40 = lVar40 + uVar31;
            plVar22[2] = lVar40;
            plVar22[3] = lVar40 + uVar31;
          }
          if (uVar10 != 0) {
            lVar27 = lVar27 + uVar28 * 0xe0;
            uVar25 = 0;
            plVar5 = (long *)(lVar27 + 0x60);
            lVar37 = *(long *)(param_1 + 0xf0) + *(long *)(param_1 + 0xe8) * uVar28;
LAB_03b6a984:
            do {
              uVar34 = *puVar4;
              if (uVar34 == 0xffff) {
LAB_03b6a9b8:
                puVar39 = (undefined1 *)0x0;
              }
              else {
                if (*puVar4 != uVar34) {
                  ClearExclusiveLocal();
                  goto LAB_03b6a984;
                }
                cVar12 = '\x01';
                bVar13 = (bool)ExclusiveMonitorPass(puVar4,0x10);
                if (bVar13) {
                  *puVar4 = (uint)*(ushort *)(*(long *)(param_1 + 0xa0) + (ulong)uVar34 * 2);
                  cVar12 = ExclusiveMonitorsStatus();
                }
                if (cVar12 != '\0') goto LAB_03b6a984;
                if ((uVar34 & 0xffff) == 0xffff) goto LAB_03b6a9b8;
                do {
                  cVar12 = '\x01';
                  bVar13 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar13) {
                    *piVar2 = *piVar2 + 1;
                    cVar12 = ExclusiveMonitorsStatus();
                  }
                } while (cVar12 != '\0');
                puVar39 = (undefined1 *)
                          (*(long *)(param_1 + 0x88) + (ulong)(uVar34 & 0xffff) * 0x48);
              }
              *puVar39 = (char)uVar25;
              *(long *)(puVar39 + 8) = lVar37;
              *(ulong *)(puVar39 + 0x10) = (ulong)uVar32;
              puVar39[0x20] = 0;
              puVar39[0x21] = 0;
              plVar7 = (long *)(puVar39 + *(int *)(lVar27 + 0x74));
              lVar40 = *plVar5;
              *plVar5 = (long)plVar7;
              *plVar7 = lVar40;
              plVar7[1] = (long)plVar5;
              if (lVar40 != 0) {
                *(long **)(lVar40 + 8) = plVar7;
              }
              uVar25 = uVar25 + 1;
              lVar37 = lVar37 + (ulong)uVar32;
              *(int *)(lVar27 + 0x70) = *(int *)(lVar27 + 0x70) + 1;
              *(int *)(lVar27 + 0x28) = *(int *)(lVar27 + 0x28) + 1;
            } while (uVar25 != uVar10);
          }
        }
      }
      plVar22 = (long *)((long)*(int *)((long)plVar35 + 0x14) + (long)plVar22);
      lVar27 = *plVar35;
      *plVar35 = (long)plVar22;
      *plVar22 = lVar27;
      plVar22[1] = (long)plVar35;
      if (lVar27 != 0) {
        *(long **)(lVar27 + 8) = plVar22;
      }
      uVar30 = uVar30 + 1;
      *(int *)(plVar35 + 2) = (int)plVar35[2] + 1;
    } while (uVar30 < *(ushort *)(param_3 + 0x30));
  }
  uVar10 = *(ushort *)(param_1 + 0x108);
  *(ushort *)(param_1 + 0x108) = uVar10 + 1;
  (**(code **)(*param_2 + 0x18))(param_2);
  pbVar33 = (byte *)param_2[1];
  uVar30 = (uint)*pbVar33;
  if (*pbVar33 == 0) {
    uVar31 = 0;
  }
  else {
    uVar32 = 0xffffffff;
    do {
      pbVar33 = pbVar33 + 1;
      uVar32 = crc32b(uVar32,uVar30,0x4c11db7);
      uVar30 = (uint)*pbVar33;
    } while (uVar30 != 0);
    uVar31 = (ulong)~uVar32;
  }
  __dest = (void *)plVar35[4];
  uVar31 = uVar31 | (ulong)uVar10 << 0x30 | (ulong)*(ushort *)((long)plVar35 + 0xba) << 0x20;
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar27 = 0;
    do {
      if (*(char *)(param_2[1] + lVar27) == '\0') goto LAB_03b6abac;
      lVar37 = param_2[1] + lVar27;
      if (*(char *)(lVar37 + 1) == '\0') {
        lVar27 = lVar27 + 1;
        goto LAB_03b6abac;
      }
      if (*(char *)(lVar37 + 2) == '\0') {
        lVar27 = lVar27 + 2;
        goto LAB_03b6abac;
      }
      lVar27 = lVar27 + 3;
    } while (lVar27 != 0x80001);
    lVar27 = 0;
LAB_03b6abac:
    iVar8 = (int)lVar27;
    if ((int)plVar35[5] <= (int)lVar27) {
      iVar8 = (int)plVar35[5] + -1;
    }
    memcpy(__dest,__src,(long)iVar8);
    *(undefined1 *)((long)__dest + (long)iVar8) = 0;
  }
  uVar30 = *(uint *)(plVar35 + 2);
  plVar35[0x16] = uVar31;
  *(undefined1 *)(plVar35 + 0x17) = 0;
  if (0 < (int)uVar30) {
    uVar32 = 0;
    uVar34 = 1;
    uVar25 = 1;
    do {
      if (uVar32 < uVar30) {
        plVar22 = plVar35;
        if (6 < uVar32) {
          uVar30 = uVar25 & 0xfffffff8;
          do {
            uVar30 = uVar30 - 8;
            plVar22 = *(long **)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(plVar22
                                                  [1] + 8) + 8) + 8) + 8) + 8) + 8) + 8);
          } while (uVar30 != 0);
        }
        if ((uVar32 + 1 & 7) != 0) {
          uVar30 = uVar34 & 7;
          do {
            plVar22 = (long *)plVar22[1];
            uVar30 = uVar30 - 1;
          } while (uVar30 != 0);
        }
      }
      else {
        plVar22 = (long *)0x0;
      }
      lVar37 = plVar35[0x16];
      lVar27 = 0;
      if (plVar22 != (long *)0x0) {
        lVar27 = (long)plVar22 - (long)*(int *)((long)plVar35 + 0x14);
      }
      uVar11 = *(undefined2 *)(lVar27 + 0xd8);
      puVar6 = (undefined8 *)(lVar27 + 0x78);
      *(undefined2 *)(lVar27 + 0x30) = 0xffff;
      *(undefined8 *)(lVar27 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(lVar27 + 0x40) = 0;
      *(undefined4 *)(lVar27 + 0x48) = 0;
      *(undefined2 *)(lVar27 + 0x4c) = 0;
      *(undefined4 *)(lVar27 + 0x50) = 0;
      *(undefined8 *)(lVar27 + 0x58) = 0;
      *(undefined4 *)(lVar27 + 0xa8) = 0;
      *(undefined2 *)(lVar27 + 0xac) = 0;
      puVar15 = *(undefined8 **)(lVar27 + 0x80);
      while (puVar15 != puVar6) {
        puVar18 = (undefined8 *)puVar15[1];
        *puVar15 = 0;
        puVar15[1] = 0;
        puVar15 = puVar18;
      }
      *(undefined8 **)(lVar27 + 0x78) = puVar6;
      *(undefined8 **)(lVar27 + 0x80) = puVar6;
      puVar6 = (undefined8 *)(lVar27 + 0x90);
      *(undefined4 *)(lVar27 + 0x88) = 0;
      puVar15 = *(undefined8 **)(lVar27 + 0x98);
      while (puVar15 != puVar6) {
        puVar18 = (undefined8 *)puVar15[1];
        *puVar15 = 0;
        puVar15[1] = 0;
        puVar15 = puVar18;
      }
      *(undefined4 *)(lVar27 + 0xa0) = 0;
      *(undefined8 **)(lVar27 + 0x90) = puVar6;
      *(undefined8 **)(lVar27 + 0x98) = puVar6;
      if (*(long *)(lVar27 + 0x68) != lVar27 + 0x60) {
        lVar38 = (long)*(int *)(lVar27 + 0x74);
        lVar40 = *(long *)(lVar27 + 0x68) - lVar38;
        do {
          *(undefined8 *)(lVar40 + 0x18) = 0;
          lVar29 = *(long *)(lVar27 + 0x90);
          plVar22 = (long *)(lVar40 + *(int *)(lVar27 + 0xa4));
          *(long **)(lVar27 + 0x90) = plVar22;
          *plVar22 = lVar29;
          plVar22[1] = (long)puVar6;
          if (lVar29 != 0) {
            *(long **)(lVar29 + 8) = plVar22;
          }
          *(int *)(lVar27 + 0xa0) = *(int *)(lVar27 + 0xa0) + 1;
          lVar40 = *(long *)(lVar40 + lVar38 + 8) - lVar38;
        } while (lVar40 != (lVar27 + 0x60) - lVar38);
      }
      *(undefined2 *)(lVar27 + 0x30) = uVar11;
      uVar30 = uVar32 & 3;
      uVar17 = uVar32 & 0xfffffffc;
      *(long *)(lVar27 + 0x38) = lVar37;
      uVar20 = (uint)*(byte *)(param_3 + 8);
      uVar14 = uVar32 - 1;
      if (*(byte *)(param_3 + 8) != 0) {
        if (*(int **)(param_3 + 0x10) == (int *)0x0) {
          uVar20 = 0;
        }
        else {
          uVar20 = 0;
          if ((**(int **)(param_3 + 0x10) == 0x56415742) && (uVar32 < *(ushort *)(param_3 + 0x30)))
          {
            lVar37 = *(long *)(param_3 + 0x18);
            if (uVar32 != 0) {
              if (2 < uVar14) {
                uVar20 = uVar17;
                do {
                  uVar20 = uVar20 - 4;
                  lVar37 = lVar37 + (ulong)*(ushort *)(lVar37 + 0x38) * 0xc;
                  lVar37 = lVar37 + (ulong)*(ushort *)(lVar37 + 0x78) * 0xc;
                  lVar37 = lVar37 + 0x40 + (ulong)*(ushort *)(lVar37 + 0xb8) * 0xc;
                  lVar37 = lVar37 + (ulong)*(ushort *)(lVar37 + 0xb8) * 0xc + 0xc0;
                } while (uVar20 != 0);
              }
              if ((uVar32 & 3) != 0) {
                uVar20 = uVar30;
                do {
                  uVar20 = uVar20 - 1;
                  lVar37 = lVar37 + (ulong)*(ushort *)(lVar37 + 0x38) * 0xc + 0x40;
                } while (uVar20 != 0);
              }
            }
            uVar20 = *(uint *)(lVar37 + 8);
          }
        }
      }
      *(uint *)(lVar27 + 0x50) = uVar20;
      *(short *)(lVar27 + 0x4c) = (short)uVar32;
      uVar20 = (uint)*(byte *)(param_3 + 8);
      if (*(byte *)(param_3 + 8) != 0) {
        if (*(int **)(param_3 + 0x10) == (int *)0x0) {
          uVar20 = 0;
        }
        else {
          uVar20 = 0;
          if ((**(int **)(param_3 + 0x10) == 0x56415742) && (uVar32 < *(ushort *)(param_3 + 0x30)))
          {
            psVar23 = *(short **)(param_3 + 0x18);
            if (uVar32 != 0) {
              if (2 < uVar14) {
                uVar20 = uVar17;
                do {
                  uVar20 = uVar20 - 4;
                  uVar26 = (ulong)(ushort)psVar23[(ulong)(ushort)psVar23[0x1c] * 6 + 0x3c];
                  uVar31 = (ulong)(ushort)psVar23[0x1c];
                  psVar23 = psVar23 + uVar31 * 6 +
                                      uVar26 * 6 +
                                      (ulong)(ushort)psVar23[uVar31 * 6 + uVar26 * 6 + 0x5c] * 6 +
                                      (ulong)(ushort)psVar23[uVar31 * 6 +
                                                             uVar26 * 6 +
                                                             (ulong)(ushort)psVar23[uVar31 * 6 +
                                                                                    uVar26 * 6 +
                                                                                    0x5c] * 6 + 0x7c
                                                            ] * 6 + 0x80;
                } while (uVar20 != 0);
              }
              if ((uVar32 & 3) != 0) {
                uVar20 = uVar30;
                do {
                  uVar20 = uVar20 - 1;
                  psVar23 = psVar23 + (ulong)(ushort)psVar23[0x1c] * 6 + 0x20;
                } while (uVar20 != 0);
              }
            }
            uVar20 = 6;
            if (*psVar23 != 1) {
              uVar20 = 2;
            }
          }
        }
      }
      *(uint *)(lVar27 + 0x48) = uVar20;
      if ((*(char *)(param_3 + 8) == '\0') || (*(int **)(param_3 + 0x10) == (int *)0x0)) {
        uVar31 = 0;
      }
      else {
        uVar31 = 0;
        if ((**(int **)(param_3 + 0x10) == 0x56415742) && (uVar32 < *(ushort *)(param_3 + 0x30))) {
          lVar37 = *(long *)(param_3 + 0x18);
          if (uVar32 != 0) {
            if (2 < uVar14) {
              uVar20 = uVar17;
              do {
                uVar20 = uVar20 - 4;
                lVar37 = lVar37 + (ulong)*(ushort *)(lVar37 + 0x38) * 0xc;
                lVar37 = lVar37 + (ulong)*(ushort *)(lVar37 + 0x78) * 0xc;
                lVar37 = lVar37 + 0x40 + (ulong)*(ushort *)(lVar37 + 0xb8) * 0xc;
                lVar37 = lVar37 + (ulong)*(ushort *)(lVar37 + 0xb8) * 0xc + 0xc0;
              } while (uVar20 != 0);
            }
            if ((uVar32 & 3) != 0) {
              uVar20 = uVar30;
              do {
                uVar20 = uVar20 - 1;
                lVar37 = lVar37 + (ulong)*(ushort *)(lVar37 + 0x38) * 0xc + 0x40;
              } while (uVar20 != 0);
            }
          }
          uVar31 = (ulong)*(uint *)(lVar37 + 0x30);
        }
      }
      *(ulong *)(lVar27 + 0x40) = uVar31;
      *(ulong *)(lVar27 + 0x58) = (ulong)*(uint *)(param_3 + 0x38);
      uVar20 = (uint)*(byte *)(param_3 + 8);
      if (*(byte *)(param_3 + 8) != 0) {
        if (*(int **)(param_3 + 0x10) == (int *)0x0) {
          uVar20 = 0;
        }
        else {
          uVar20 = 0;
          if ((**(int **)(param_3 + 0x10) == 0x56415742) && (uVar32 < *(ushort *)(param_3 + 0x30)))
          {
            psVar23 = *(short **)(param_3 + 0x18);
            if (uVar32 != 0) {
              if (2 < uVar14) {
                uVar20 = uVar17;
                do {
                  uVar20 = uVar20 - 4;
                  uVar26 = (ulong)(ushort)psVar23[(ulong)(ushort)psVar23[0x1c] * 6 + 0x3c];
                  uVar31 = (ulong)(ushort)psVar23[0x1c];
                  psVar23 = psVar23 + uVar31 * 6 +
                                      uVar26 * 6 +
                                      (ulong)(ushort)psVar23[uVar31 * 6 + uVar26 * 6 + 0x5c] * 6 +
                                      (ulong)(ushort)psVar23[uVar31 * 6 +
                                                             uVar26 * 6 +
                                                             (ulong)(ushort)psVar23[uVar31 * 6 +
                                                                                    uVar26 * 6 +
                                                                                    0x5c] * 6 + 0x7c
                                                            ] * 6 + 0x80;
                } while (uVar20 != 0);
              }
              if ((uVar32 & 3) != 0) {
                uVar20 = uVar30;
                do {
                  uVar20 = uVar20 - 1;
                  psVar23 = psVar23 + (ulong)(ushort)psVar23[0x1c] * 6 + 0x20;
                } while (uVar20 != 0);
              }
            }
            uVar20 = 6;
            if (*psVar23 != 1) {
              uVar20 = 2;
            }
          }
        }
      }
      *(uint *)(lVar27 + 0xc4) = uVar20;
      uVar19 = 1;
      if ((*(char *)(param_3 + 0x42) != '\0') && (*(char *)(param_3 + 8) != '\0')) {
        piVar24 = *(int **)(param_3 + 0x10);
        if ((piVar24 == (int *)0x0) ||
           ((*piVar24 != 0x56415742 || ((*(ushort *)(piVar24 + 3) & 1) == 0)))) {
          uVar19 = 1;
        }
        else {
          if (uVar32 < *(ushort *)(param_3 + 0x30)) {
            lVar37 = *(long *)(param_3 + 0x18);
            if (uVar32 != 0) {
              if (2 < uVar14) {
                uVar20 = uVar17;
                do {
                  uVar20 = uVar20 - 4;
                  lVar37 = lVar37 + (ulong)*(ushort *)(lVar37 + 0x38) * 0xc;
                  lVar37 = lVar37 + (ulong)*(ushort *)(lVar37 + 0x78) * 0xc;
                  lVar37 = lVar37 + 0x40 + (ulong)*(ushort *)(lVar37 + 0xb8) * 0xc;
                  lVar37 = lVar37 + (ulong)*(ushort *)(lVar37 + 0xb8) * 0xc + 0xc0;
                } while (uVar20 != 0);
              }
              if ((uVar32 & 3) != 0) {
                do {
                  uVar30 = uVar30 - 1;
                  lVar37 = lVar37 + (ulong)*(ushort *)(lVar37 + 0x38) * 0xc + 0x40;
                } while (uVar30 != 0);
              }
            }
            uVar21 = *(undefined4 *)(lVar37 + 0xc);
          }
          else {
            uVar21 = 0;
          }
          *(undefined4 *)(lVar27 + 0xc0) = uVar21;
          *(undefined4 *)(lVar27 + 0xb4) = uVar21;
          if ((*(char *)(param_3 + 8) == '\0') ||
             (piVar24 = *(int **)(param_3 + 0x10), piVar24 == (int *)0x0)) {
            lVar37 = 0;
          }
          else {
            lVar37 = 0;
            if ((*piVar24 == 0x56415742) && (uVar32 < *(ushort *)(param_3 + 0x30))) {
              lVar37 = *(long *)(param_3 + 0x18);
              if (uVar32 != 0) {
                if (2 < uVar14) {
                  do {
                    uVar17 = uVar17 - 4;
                    lVar37 = lVar37 + (ulong)*(ushort *)(lVar37 + 0x38) * 0xc;
                    lVar37 = lVar37 + (ulong)*(ushort *)(lVar37 + 0x78) * 0xc;
                    lVar37 = lVar37 + 0x40 + (ulong)*(ushort *)(lVar37 + 0xb8) * 0xc;
                    lVar37 = lVar37 + (ulong)*(ushort *)(lVar37 + 0xb8) * 0xc + 0xc0;
                  } while (uVar17 != 0);
                }
                for (uVar30 = uVar32 & 3; uVar30 != 0; uVar30 = uVar30 - 1) {
                  lVar37 = lVar37 + (ulong)*(ushort *)(lVar37 + 0x38) * 0xc + 0x40;
                }
              }
              lVar37 = (ulong)*(uint *)(lVar37 + 0x34) + (long)piVar24;
            }
          }
          uVar19 = 0;
          *(long *)(lVar27 + 0xb8) = lVar37;
        }
      }
      uVar32 = uVar32 + 1;
      *(undefined1 *)(lVar27 + 0xb2) = uVar19;
      uVar25 = uVar25 + 1;
      uVar34 = (uVar34 & 7) + 1;
      uVar30 = *(uint *)(plVar35 + 2);
    } while ((int)uVar32 < (int)uVar30);
    uVar31 = plVar35[0x16];
  }
  puVar16 = PTR_DAT_04bd1e70;
  uVar11 = *(undefined2 *)((long)plVar35 + 0xba);
  lVar27 = *(long *)(*(long *)PTR_DAT_04bd1e70 + 0x188);
  piVar24 = (int *)(lVar27 + 0x40);
  if (*piVar24 != 0) {
    puVar3 = (uint *)(lVar27 + 0x38);
    do {
      while( true ) {
        uVar30 = *puVar3;
        if (*puVar3 == uVar30) break;
        ClearExclusiveLocal();
      }
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar13) {
        *puVar3 = (uint)*(ushort *)(*(long *)(lVar27 + 0x30) + (ulong)uVar30 * 2);
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    piVar1 = (int *)(lVar27 + 0x10);
    do {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar13) {
        *piVar1 = *piVar1 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    puVar6 = (undefined8 *)(*(long *)(lVar27 + 0x18) + ((ulong)uVar30 & 0xffff) * 0x40);
    do {
      cVar12 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(piVar24,0x10);
      if (bVar13) {
        *piVar24 = *piVar24 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    *(undefined2 *)(puVar6 + 2) = uVar11;
    *puVar6 = &PTR_LAB_04b77320;
    puVar6[1] = uVar31;
    lVar27 = *(long *)(*(long *)puVar16 + 400);
    pMVar36 = *(MutexType **)(lVar27 + 0x40278);
    nn::os::LockMutex(pMVar36);
    piVar24 = *(int **)(lVar27 + 0x40258);
    if (*piVar24 < piVar24[1]) {
      *(undefined8 **)(*(long *)(piVar24 + 2) + (long)*piVar24 * 8) = puVar6;
      *piVar24 = *piVar24 + 1;
    }
    nn::os::UnlockMutex(pMVar36);
  }
  return plVar35;
}

