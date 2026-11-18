
void FUN_034450f0(long param_1,undefined8 param_2,uint param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  char cVar10;
  uint *puVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  short sVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  long *plVar19;
  char *pcVar20;
  uint *puVar21;
  void *pvVar22;
  void *pvVar23;
  long lVar24;
  long lVar25;
  undefined2 uVar26;
  undefined8 *puVar27;
  uint local_700 [2];
  long *local_6f8;
  undefined8 local_a0;
  undefined1 *local_98;
  undefined1 local_90 [48];
  
  if (*(long *)(param_1 + 0x2f18) == 0) goto LAB_03445d20;
  *(undefined4 *)(param_1 + 8) = 0;
  local_98 = local_90;
  *(undefined4 *)(param_1 + 0xfb8) = 0;
  *(undefined4 *)(param_1 + 0x1f68) = 0;
  *(undefined4 *)(param_1 + 0x2f38) = 0;
  local_a0 = 0x500000000;
  FUN_01ce0148(local_700);
  FUN_0264d170(local_700,5,param_2);
  FUN_01b1c5e0(*(undefined8 *)(param_1 + 0x2f18),param_2,param_3 & 1);
  iVar5 = **(int **)(param_1 + 0x2f18);
  if (iVar5 != 0) {
    puVar27 = *(undefined8 **)(*(int **)(param_1 + 0x2f18) + 2);
    puVar2 = puVar27 + iVar5;
    puVar6 = (undefined8 *)PTR_DAT_04bc0530;
    plVar19 = (long *)PTR_PTR_04bc0538;
    pcVar20 = PTR_DAT_04bc0528;
LAB_034451dc:
    puVar21 = (uint *)*puVar27;
    if (*puVar21 != 0) {
      cVar10 = *pcVar20;
      do {
        if (cVar10 != '\0') {
          uVar8 = (ulong)*(uint *)((long)puVar6 + 0x14);
          if ((int)*(uint *)((long)puVar6 + 0x14) < 0) {
            if (uVar8 == 0xffffffff) {
              uVar7 = *puVar21;
              if (uVar7 != 0) goto LAB_0344522c;
              goto LAB_03445450;
            }
          }
          else if ((((ushort *)(uVar8 + (long)puVar21) != (ushort *)0x0) &&
                   (uVar3 = *(ushort *)(uVar8 + (long)puVar21), 1 < uVar3)) && (uVar3 != 200)) {
            uVar7 = *puVar21;
            if (uVar7 == 0) goto LAB_034454f4;
            uVar8 = (ulong)*(uint *)((long)puVar6 + 0x1c);
            goto LAB_03445488;
          }
LAB_034452a4:
          uVar7 = *puVar21;
          if (uVar7 != 0) {
            uVar12 = (ulong)*(uint *)((long)puVar6 + 0x1c);
            goto LAB_034452b0;
          }
          break;
        }
        cVar10 = '\x01';
        *pcVar20 = '\x01';
        *puVar6 = 0xffffffffffffffff;
        puVar6[1] = 0xffffffffffffffff;
        puVar6[2] = 0xffffffffffffffff;
        puVar6[3] = 0xffffffffffffffff;
        uVar7 = *puVar21;
        if (uVar7 == 0) {
LAB_03445450:
          uVar8 = 0xffffffff;
          goto LAB_034452a4;
        }
LAB_0344522c:
        puVar11 = (uint *)(ulong)uVar7;
        uVar8 = 0xffffffff;
        if (puVar21 == puVar11) goto LAB_034452a4;
        lVar24 = 0xc;
        if (*(char *)((long)puVar21 + (10 - (long)puVar11)) != '\0') {
          lVar24 = 0x1c;
        }
        lVar24 = (long)puVar21 + (lVar24 - (long)puVar11);
        if (lVar24 == 0) goto LAB_03445450;
        uVar8 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar11));
        *(undefined4 *)((long)puVar6 + 0x14) = 0xfffffffe;
        if (uVar8 == 0) {
LAB_034452a0:
          uVar8 = 0xfffffffe;
          goto LAB_034452a4;
        }
        piVar13 = (int *)(lVar24 + 4);
        while (piVar13[-1] != 0x54706054) {
          piVar13 = piVar13 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) goto LAB_034452a0;
        }
        iVar5 = 0;
        if (*piVar13 != -1) {
          iVar5 = *piVar13;
        }
        *(int *)((long)puVar6 + 0x14) = iVar5;
      } while (*puVar21 != 0);
    }
    goto LAB_03445330;
  }
LAB_0344595c:
  uVar7 = *(uint *)(param_1 + 0x1f68);
  if (uVar7 == 0) {
    if (local_700[0] == 0) goto LAB_03445d20;
    plVar19 = local_6f8;
    do {
      lVar24 = *plVar19;
      pvVar22 = (void *)FUN_01b1ebb0(*(undefined2 *)(lVar24 + 2));
      uVar7 = *(uint *)(param_1 + 0x2f38);
      if ((int)(uVar7 + 1) < (int)*(uint *)(param_1 + 0x2f28)) {
        lVar25 = *(long *)(param_1 + 0x2f30);
        if (*(uint *)(param_1 + 0x2f28) <= uVar7) {
          uVar7 = 0;
        }
        uVar26 = *(undefined2 *)(lVar24 + 2);
        lVar24 = lVar25 + (long)(int)uVar7 * 0x30;
        pvVar23 = *(void **)(lVar24 + 8);
        if (pvVar23 != pvVar22) {
          lVar9 = 0;
          do {
            if (*(char *)((long)pvVar22 + lVar9) == '\0') goto LAB_03445cb0;
            if (*(char *)((long)pvVar22 + lVar9 + 1) == '\0') {
              lVar9 = lVar9 + 1;
              goto LAB_03445cb0;
            }
            if (*(char *)((long)pvVar22 + lVar9 + 2) == '\0') {
              lVar9 = lVar9 + 2;
              goto LAB_03445cb0;
            }
            lVar9 = lVar9 + 3;
          } while (lVar9 != 0x80001);
          lVar9 = 0;
LAB_03445cb0:
          iVar5 = (int)lVar9;
          if (*(int *)(lVar24 + 0x10) <= (int)lVar9) {
            iVar5 = *(int *)(lVar24 + 0x10) + -1;
          }
          memcpy(pvVar23,pvVar22,(long)iVar5);
          *(undefined1 *)((long)pvVar23 + (long)iVar5) = 0;
        }
        *(undefined2 *)(lVar25 + (long)(int)uVar7 * 0x30 + 0x28) = uVar26;
        *(int *)(param_1 + 0x2f38) = *(int *)(param_1 + 0x2f38) + 1;
        if (*(int *)(param_1 + 0x1f68) < *(int *)(param_1 + 0x1f6c)) {
          *(long *)(*(long *)(param_1 + 0x1f70) + (long)*(int *)(param_1 + 0x1f68) * 8) = lVar24;
          *(int *)(param_1 + 0x1f68) = *(int *)(param_1 + 0x1f68) + 1;
        }
      }
      plVar19 = plVar19 + 1;
    } while (plVar19 != local_6f8 + (int)local_700[0]);
    uVar7 = *(uint *)(param_1 + 0x1f68);
    if (uVar7 == 0) goto LAB_03445d20;
  }
  if (1 < (int)uVar7) {
    uVar8 = (ulong)uVar7;
    do {
      uVar7 = *(uint *)(param_1 + 0x2f40);
      *(undefined4 *)(param_1 + 0x2f40) = *(undefined4 *)(param_1 + 0x2f44);
      uVar7 = uVar7 ^ uVar7 << 0xb;
      *(undefined4 *)(param_1 + 0x2f44) = *(undefined4 *)(param_1 + 0x2f48);
      uVar16 = *(uint *)(param_1 + 0x2f4c);
      *(uint *)(param_1 + 0x2f48) = uVar16;
      lVar24 = *(long *)(param_1 + 0x1f70);
      uVar7 = uVar7 >> 8 ^ uVar16 >> 0x13 ^ uVar7 ^ uVar16;
      *(uint *)(param_1 + 0x2f4c) = uVar7;
      lVar25 = (uVar8 - 1 & 0xffffffff) * 8;
      uVar14 = *(undefined8 *)(lVar24 + lVar25);
      uVar12 = uVar8 * uVar7 >> 0x1d & 0x7fffffff8;
      *(undefined8 *)(lVar24 + lVar25) = *(undefined8 *)(lVar24 + uVar12);
      *(undefined8 *)(*(long *)(param_1 + 0x1f70) + uVar12) = uVar14;
      bVar1 = 2 < uVar8;
      uVar8 = uVar8 - 1;
    } while (bVar1);
    uVar7 = *(uint *)(param_1 + 0x1f68);
  }
  while (uVar7 != 0) {
    uVar16 = uVar7 - 1;
    if (0 < (int)uVar7) {
      *(uint *)(param_1 + 0x1f68) = uVar16;
      lVar24 = *(long *)(*(long *)(param_1 + 0x1f70) + (ulong)uVar16 * 8);
      uVar7 = uVar16;
      if ((lVar24 != 0) && (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc))) {
        *(long *)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) = lVar24;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        uVar7 = *(uint *)(param_1 + 0x1f68);
      }
    }
  }
  if (1 < (int)(uint)local_a0) {
    uVar16 = 0;
    uVar7 = (uint)local_a0 - 1;
    do {
      if ((int)uVar7 <= (int)uVar16) break;
      lVar24 = *(long *)(local_98 + (ulong)uVar16 * 8);
      uVar8 = (ulong)uVar16;
      if ((uVar7 - uVar16 & 1) == 0) {
        uVar12 = uVar8;
        lVar25 = lVar24;
      }
      else {
        uVar12 = uVar8 + 1;
        lVar25 = *(long *)(local_98 + uVar12 * 8);
        if (((lVar24 != 0) && (lVar25 != 0)) &&
           (*(ushort *)(lVar25 + 0x28) < *(ushort *)(lVar24 + 0x28))) {
          *(long *)(local_98 + uVar12 * 8) = lVar24;
          *(long *)(local_98 + uVar8 * 8) = lVar25;
          lVar25 = lVar24;
        }
      }
      uVar18 = (ulong)uVar7;
      uVar7 = uVar16;
      if (~uVar8 + uVar18 != 0) {
        plVar19 = (long *)(local_98 + uVar12 * 8 + 8);
        do {
          lVar24 = *plVar19;
          uVar17 = (uint)uVar12;
          if (((lVar25 == 0) || (lVar24 == 0)) ||
             (*(ushort *)(lVar25 + 0x28) <= *(ushort *)(lVar24 + 0x28))) {
            lVar9 = plVar19[1];
            if (lVar24 != 0) goto LAB_03445b30;
LAB_03445ae0:
            lVar24 = lVar9;
          }
          else {
            plVar19[-1] = lVar24;
            *plVar19 = lVar25;
            lVar9 = plVar19[1];
            lVar24 = lVar25;
            uVar7 = uVar17;
            if (lVar25 == 0) goto LAB_03445ae0;
LAB_03445b30:
            if (lVar9 == 0) goto LAB_03445ae0;
            if (*(ushort *)(lVar24 + 0x28) <= *(ushort *)(lVar9 + 0x28)) goto LAB_03445ae0;
            uVar7 = uVar17 + 1;
            *plVar19 = lVar9;
            plVar19[1] = lVar24;
          }
          uVar12 = uVar12 + 2;
          plVar19 = plVar19 + 2;
          lVar25 = lVar24;
        } while (uVar18 != uVar12);
      }
      if ((int)uVar7 <= (int)uVar16) break;
      uVar12 = (ulong)uVar7;
      lVar24 = *(long *)(local_98 + (ulong)uVar7 * 8);
      uVar16 = uVar7;
      do {
        lVar25 = *(long *)(local_98 + uVar12 * 8 + -8);
        if (((lVar24 != 0) && (lVar25 != 0)) &&
           (*(ushort *)(lVar24 + 0x28) < *(ushort *)(lVar25 + 0x28))) {
          uVar16 = (uint)uVar12;
          *(long *)(local_98 + uVar12 * 8 + -8) = lVar24;
          *(long *)(local_98 + uVar12 * 8) = lVar25;
          lVar25 = lVar24;
        }
        uVar12 = uVar12 - 1;
        lVar24 = lVar25;
      } while ((long)uVar8 < (long)uVar12);
    } while (uVar16 != uVar7);
  }
  while ((uint)local_a0 != 0) {
    uVar7 = (uint)local_a0 - 1;
    if (0 < (int)(uint)local_a0) {
      local_a0._0_4_ = uVar7;
      if ((*(long *)(local_98 + (ulong)uVar7 * 8) != 0) &&
         (*(int *)(param_1 + 8) < *(int *)(param_1 + 0xc))) {
        *(long *)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8) =
             *(long *)(local_98 + (ulong)uVar7 * 8);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      }
    }
  }
LAB_03445d20:
  *(undefined1 *)(param_1 + 0x2f20) = 0;
  return;
  while( true ) {
    lVar25 = (long)puVar21 - (ulong)uVar7;
    lVar24 = 0;
    if (lVar25 == 0) goto LAB_034454f8;
    lVar9 = 0xc;
    if (*(char *)(lVar25 + 10) != '\0') {
      lVar9 = 0x1c;
    }
    if (lVar9 + lVar25 == 0) break;
    uVar8 = (ulong)*(ushort *)(lVar25 + 8);
    *(undefined4 *)((long)puVar6 + 0x1c) = 0xfffffffe;
    lVar24 = 0;
    if (uVar8 == 0) goto LAB_034454f8;
    puVar11 = (uint *)(lVar9 + lVar25 + 4);
    while (puVar11[-1] != 0xaac49213) {
      puVar11 = puVar11 + 2;
      uVar8 = uVar8 - 1;
      if (uVar8 == 0) {
        lVar24 = 0;
        goto LAB_034454f8;
      }
    }
    uVar8 = 0;
    if (*puVar11 != 0xffffffff) {
      uVar8 = (ulong)*puVar11;
    }
    *(int *)((long)puVar6 + 0x1c) = (int)uVar8;
    uVar7 = *puVar21;
    if (uVar7 == 0) break;
LAB_03445488:
    if (-1 < (int)uVar8) {
      lVar24 = uVar8 + (long)puVar21;
      goto LAB_034454f8;
    }
    if (uVar8 != 0xffffffff) break;
  }
LAB_034454f4:
  lVar24 = 0;
LAB_034454f8:
  lVar25 = *plVar19;
  if (lVar24 != 0) {
    lVar25 = lVar24;
  }
  uVar8 = FUN_034442c0(lVar25);
  plVar19 = (long *)PTR_PTR_04bc0538;
  puVar6 = (undefined8 *)PTR_DAT_04bc0530;
  pcVar20 = PTR_DAT_04bc0528;
  if ((uVar8 & 1) != 0) {
    if (0 < (int)local_700[0]) {
      uVar8 = 0;
      cVar10 = *PTR_DAT_04bc0528;
      do {
        sVar4 = *(short *)(local_6f8[uVar8] + 2);
        sVar15 = 0;
        if (*puVar21 != 0) {
          do {
            if (cVar10 != '\0') {
              uVar7 = *(uint *)((long)puVar6 + 0x14);
              if ((int)uVar7 < 0) {
                if (uVar7 == 0xffffffff) {
                  uVar7 = *puVar21;
                  if (uVar7 != 0) goto LAB_034455a0;
                  sVar15 = 0;
                }
                else {
LAB_03445608:
                  sVar15 = 0;
                }
              }
              else {
                sVar15 = 0;
                if ((short *)((ulong)uVar7 + (long)puVar21) != (short *)0x0) {
                  sVar15 = *(short *)((ulong)uVar7 + (long)puVar21);
                }
              }
              goto LAB_03445610;
            }
            cVar10 = '\x01';
            *pcVar20 = 1;
            *puVar6 = 0xffffffffffffffff;
            *(undefined8 *)((long)puVar6 + 8) = 0xffffffffffffffff;
            *(undefined8 *)((long)puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)((long)puVar6 + 0x18) = 0xffffffffffffffff;
            uVar7 = *puVar21;
            sVar15 = 0;
            if (uVar7 == 0) goto LAB_03445610;
LAB_034455a0:
            puVar11 = (uint *)(ulong)uVar7;
            if (puVar21 == puVar11) goto LAB_03445608;
            lVar24 = 0xc;
            if (*(char *)((long)puVar21 + (10 - (long)puVar11)) != '\0') {
              lVar24 = 0x1c;
            }
            lVar24 = (long)puVar21 + (lVar24 - (long)puVar11);
            if (lVar24 == 0) goto LAB_03445608;
            uVar12 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar11));
            *(undefined4 *)((long)puVar6 + 0x14) = 0xfffffffe;
            sVar15 = 0;
            if (uVar12 == 0) goto LAB_03445610;
            piVar13 = (int *)(lVar24 + 4);
            while (piVar13[-1] != 0x54706054) {
              piVar13 = piVar13 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) {
                sVar15 = 0;
                goto LAB_03445610;
              }
            }
            iVar5 = 0;
            if (*piVar13 != -1) {
              iVar5 = *piVar13;
            }
            *(int *)((long)puVar6 + 0x14) = iVar5;
          } while (*puVar21 != 0);
          sVar15 = 0;
        }
LAB_03445610:
        if (sVar15 == sVar4) {
          if (-1 < (int)uVar8) goto LAB_034451d0;
          break;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 != local_700[0]);
    }
    if (*puVar21 != 0) {
      cVar10 = *pcVar20;
      do {
        if (cVar10 != '\0') {
          uVar7 = *(uint *)((long)puVar6 + 0x1c);
          if ((int)uVar7 < 0) {
            if (uVar7 == 0xffffffff) goto LAB_03445728;
LAB_034457a8:
            pvVar22 = (void *)0x0;
          }
          else {
            pvVar22 = (void *)((ulong)uVar7 + (long)puVar21);
          }
LAB_034457b4:
          pvVar23 = (void *)*plVar19;
          if (pvVar22 != (void *)0x0) {
            pvVar23 = pvVar22;
          }
          uVar7 = *puVar21;
          if (uVar7 == 0) goto LAB_0344584c;
          uVar8 = (ulong)*(uint *)((long)puVar6 + 0x14);
          goto LAB_034457cc;
        }
        cVar10 = '\x01';
        *pcVar20 = 1;
        *puVar6 = 0xffffffffffffffff;
        *(undefined8 *)((long)puVar6 + 8) = 0xffffffffffffffff;
        *(undefined8 *)((long)puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)((long)puVar6 + 0x18) = 0xffffffffffffffff;
LAB_03445728:
        puVar11 = (uint *)(ulong)*puVar21;
        pvVar22 = (void *)0x0;
        if ((*puVar21 == 0) || (puVar21 == puVar11)) goto LAB_034457b4;
        lVar24 = 0xc;
        if (*(char *)((long)puVar21 + (10 - (long)puVar11)) != '\0') {
          lVar24 = 0x1c;
        }
        lVar24 = (long)puVar21 + (lVar24 - (long)puVar11);
        if (lVar24 == 0) goto LAB_034457a8;
        uVar8 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar11));
        *(undefined4 *)((long)puVar6 + 0x1c) = 0xfffffffe;
        pvVar22 = (void *)0x0;
        if (uVar8 == 0) goto LAB_034457b4;
        piVar13 = (int *)(lVar24 + 4);
        while (piVar13[-1] != -0x553b6ded) {
          piVar13 = piVar13 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            pvVar22 = (void *)0x0;
            goto LAB_034457b4;
          }
        }
        iVar5 = 0;
        if (*piVar13 != -1) {
          iVar5 = *piVar13;
        }
        *(int *)((long)puVar6 + 0x1c) = iVar5;
      } while (*puVar21 != 0);
    }
    pvVar23 = (void *)*plVar19;
LAB_0344584c:
    uVar26 = 0;
LAB_03445850:
    uVar7 = *(uint *)(param_1 + 0x2f38);
    if ((int)(uVar7 + 1) < (int)*(uint *)(param_1 + 0x2f28)) {
      lVar24 = *(long *)(param_1 + 0x2f30);
      if (*(uint *)(param_1 + 0x2f28) <= uVar7) {
        uVar7 = 0;
      }
      lVar25 = lVar24 + (long)(int)uVar7 * 0x30;
      pvVar22 = *(void **)(lVar25 + 8);
      if (pvVar22 != pvVar23) {
        lVar9 = 0;
        do {
          if (*(char *)((long)pvVar23 + lVar9) == '\0') goto LAB_034458c0;
          if (*(char *)((long)pvVar23 + lVar9 + 1) == '\0') {
            lVar9 = lVar9 + 1;
            goto LAB_034458c0;
          }
          if (*(char *)((long)pvVar23 + lVar9 + 2) == '\0') {
            lVar9 = lVar9 + 2;
            goto LAB_034458c0;
          }
          lVar9 = lVar9 + 3;
        } while (lVar9 != 0x80001);
        lVar9 = 0;
LAB_034458c0:
        iVar5 = (int)lVar9;
        if (*(int *)(lVar25 + 0x10) <= (int)lVar9) {
          iVar5 = *(int *)(lVar25 + 0x10) + -1;
        }
        memcpy(pvVar22,pvVar23,(long)iVar5);
        *(undefined1 *)((long)pvVar22 + (long)iVar5) = 0;
        puVar6 = (undefined8 *)PTR_DAT_04bc0530;
        plVar19 = (long *)PTR_PTR_04bc0538;
        pcVar20 = PTR_DAT_04bc0528;
      }
      *(undefined2 *)(lVar24 + (long)(int)uVar7 * 0x30 + 0x28) = uVar26;
      *(int *)(param_1 + 0x2f38) = *(int *)(param_1 + 0x2f38) + 1;
      if (*(int *)(param_1 + 0x1f68) < *(int *)(param_1 + 0x1f6c)) {
        *(long *)(*(long *)(param_1 + 0x1f70) + (long)*(int *)(param_1 + 0x1f68) * 8) = lVar25;
        *(int *)(param_1 + 0x1f68) = *(int *)(param_1 + 0x1f68) + 1;
      }
    }
  }
  goto LAB_034451d0;
LAB_034457cc:
  if (-1 < (int)uVar8) {
    if ((undefined2 *)(uVar8 + (long)puVar21) != (undefined2 *)0x0) {
      uVar26 = *(undefined2 *)(uVar8 + (long)puVar21);
      goto LAB_03445850;
    }
    goto LAB_0344584c;
  }
  if ((uVar8 != 0xffffffff) || (lVar24 = (long)puVar21 - (ulong)uVar7, lVar24 == 0))
  goto LAB_0344584c;
  lVar25 = 0xc;
  if (*(char *)(lVar24 + 10) != '\0') {
    lVar25 = 0x1c;
  }
  if (lVar25 + lVar24 == 0) goto LAB_0344584c;
  uVar8 = (ulong)*(ushort *)(lVar24 + 8);
  *(undefined4 *)((long)puVar6 + 0x14) = 0xfffffffe;
  if (uVar8 == 0) goto LAB_0344584c;
  puVar11 = (uint *)(lVar25 + lVar24 + 4);
  while (puVar11[-1] != 0x54706054) {
    puVar11 = puVar11 + 2;
    uVar8 = uVar8 - 1;
    if (uVar8 == 0) goto LAB_0344584c;
  }
  uVar8 = 0;
  if (*puVar11 != 0xffffffff) {
    uVar8 = (ulong)*puVar11;
  }
  *(int *)((long)puVar6 + 0x14) = (int)uVar8;
  uVar7 = *puVar21;
  if (uVar7 == 0) goto LAB_0344584c;
  goto LAB_034457cc;
LAB_034452b0:
  do {
    if (-1 < (int)uVar12) {
      pvVar22 = (void *)(uVar12 + (long)puVar21);
LAB_03445640:
      pvVar23 = (void *)*plVar19;
      if (pvVar22 != (void *)0x0) {
        pvVar23 = pvVar22;
      }
      uVar7 = *puVar21;
      goto joined_r0x03445650;
    }
    if (uVar12 != 0xffffffff) {
LAB_03445458:
      pvVar22 = (void *)0x0;
      goto LAB_03445640;
    }
    lVar24 = (long)puVar21 - (ulong)uVar7;
    pvVar22 = (void *)0x0;
    if (lVar24 == 0) goto LAB_03445640;
    lVar25 = 0xc;
    if (*(char *)(lVar24 + 10) != '\0') {
      lVar25 = 0x1c;
    }
    if (lVar25 + lVar24 == 0) goto LAB_03445458;
    uVar12 = (ulong)*(ushort *)(lVar24 + 8);
    *(undefined4 *)((long)puVar6 + 0x1c) = 0xfffffffe;
    pvVar22 = (void *)0x0;
    if (uVar12 == 0) goto LAB_03445640;
    puVar11 = (uint *)(lVar25 + lVar24 + 4);
    while (puVar11[-1] != 0xaac49213) {
      puVar11 = puVar11 + 2;
      uVar12 = uVar12 - 1;
      if (uVar12 == 0) {
        pvVar22 = (void *)0x0;
        goto LAB_03445640;
      }
    }
    uVar12 = 0;
    if (*puVar11 != 0xffffffff) {
      uVar12 = (ulong)*puVar11;
    }
    *(int *)((long)puVar6 + 0x1c) = (int)uVar12;
    uVar7 = *puVar21;
  } while (uVar7 != 0);
LAB_03445330:
  pvVar23 = (void *)*plVar19;
LAB_03445334:
  uVar26 = 0;
LAB_03445338:
  uVar7 = *(uint *)(param_1 + 0x2f38);
  if ((int)(uVar7 + 1) < (int)*(uint *)(param_1 + 0x2f28)) {
    lVar25 = *(long *)(param_1 + 0x2f30);
    if (*(uint *)(param_1 + 0x2f28) <= uVar7) {
      uVar7 = 0;
    }
    lVar24 = lVar25 + (long)(int)uVar7 * 0x30;
    pvVar22 = *(void **)(lVar24 + 8);
    if (pvVar22 != pvVar23) {
      lVar9 = 0;
      do {
        if (*(char *)((long)pvVar23 + lVar9) == '\0') goto LAB_034453b4;
        if (*(char *)((long)pvVar23 + lVar9 + 1) == '\0') {
          lVar9 = lVar9 + 1;
          goto LAB_034453b4;
        }
        if (*(char *)((long)pvVar23 + lVar9 + 2) == '\0') {
          lVar9 = lVar9 + 2;
          goto LAB_034453b4;
        }
        lVar9 = lVar9 + 3;
      } while (lVar9 != 0x80001);
      lVar9 = 0;
LAB_034453b4:
      iVar5 = (int)lVar9;
      if (*(int *)(lVar24 + 0x10) <= (int)lVar9) {
        iVar5 = *(int *)(lVar24 + 0x10) + -1;
      }
      memcpy(pvVar22,pvVar23,(long)iVar5);
      *(undefined1 *)((long)pvVar22 + (long)iVar5) = 0;
      puVar6 = (undefined8 *)PTR_DAT_04bc0530;
      plVar19 = (long *)PTR_PTR_04bc0538;
      pcVar20 = PTR_DAT_04bc0528;
    }
    *(undefined2 *)(lVar25 + (long)(int)uVar7 * 0x30 + 0x28) = uVar26;
    *(int *)(param_1 + 0x2f38) = *(int *)(param_1 + 0x2f38) + 1;
  }
  else {
    lVar24 = 0;
  }
  if ((int)(uint)local_a0 < local_a0._4_4_) {
    *(long *)(local_98 + (long)(int)(uint)local_a0 * 8) = lVar24;
    local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 + 1);
  }
LAB_034451d0:
  puVar27 = puVar27 + 1;
  if (puVar27 == puVar2) goto LAB_0344595c;
  goto LAB_034451dc;
joined_r0x03445650:
  if (uVar7 == 0) goto LAB_03445334;
  if (-1 < (int)uVar8) {
    if ((undefined2 *)(uVar8 + (long)puVar21) != (undefined2 *)0x0) {
      uVar26 = *(undefined2 *)(uVar8 + (long)puVar21);
      goto LAB_03445338;
    }
    goto LAB_03445334;
  }
  if (((uVar8 != 0xffffffff) || (puVar11 = (uint *)(ulong)*puVar21, *puVar21 == 0)) ||
     (puVar21 == puVar11)) goto LAB_03445334;
  lVar24 = 0xc;
  if (*(char *)((long)puVar21 + (10 - (long)puVar11)) != '\0') {
    lVar24 = 0x1c;
  }
  lVar24 = (long)puVar21 + (lVar24 - (long)puVar11);
  if (lVar24 == 0) goto LAB_03445334;
  uVar8 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar11));
  *(undefined4 *)((long)puVar6 + 0x14) = 0xfffffffe;
  if (uVar8 == 0) goto LAB_03445334;
  puVar11 = (uint *)(lVar24 + 4);
  while (puVar11[-1] != 0x54706054) {
    puVar11 = puVar11 + 2;
    uVar8 = uVar8 - 1;
    if (uVar8 == 0) goto LAB_03445334;
  }
  uVar8 = 0;
  if (*puVar11 != 0xffffffff) {
    uVar8 = (ulong)*puVar11;
  }
  *(int *)((long)puVar6 + 0x14) = (int)uVar8;
  uVar7 = *puVar21;
  goto joined_r0x03445650;
}

