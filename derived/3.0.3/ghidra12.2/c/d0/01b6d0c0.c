
undefined4 FUN_01b6d0c0(long *param_1,int param_2,undefined8 param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ushort *puVar6;
  ulong uVar7;
  uint *puVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  long *plVar22;
  int *piVar23;
  uint *puVar24;
  int *piVar25;
  ulong uVar26;
  uint local_c9c;
  uint local_c98;
  uint uStack_c94;
  uint local_c90;
  uint local_c8c;
  undefined8 local_c88;
  long *local_c80;
  long *local_c78;
  long *local_c70;
  long local_c68 [2];
  long local_c58 [2];
  undefined1 auStack_c48 [2000];
  undefined8 local_478;
  long local_468 [129];
  
  puVar4 = PTR_DAT_04bc0648;
  local_c78 = local_c68;
  local_c88 = 0;
  local_c80 = (long *)0x0;
  for (lVar12 = 0; *(long *)((long)local_c68 + lVar12) = (long)local_c58 + lVar12, lVar12 != 0x7e0;
      lVar12 = lVar12 + 0x20) {
    *(undefined1 **)((long)local_c58 + lVar12) = auStack_c48 + lVar12;
  }
  local_478 = 0;
  if (local_468 != (long *)0x0) {
    local_c88 = 0x8000000000;
    local_c80 = local_468;
  }
  lVar12 = *param_1;
  uVar7 = 0;
  uVar26 = 0;
  puVar24 = (uint *)PTR_DAT_04bc0638;
  puVar21 = (uint *)PTR_DAT_04bc0630;
  puVar20 = (uint *)PTR_DAT_04bc0628;
  puVar19 = (uint *)PTR_DAT_04bc0620;
  puVar18 = (uint *)PTR_DAT_04bc0618;
  local_c70 = local_c78;
  do {
    plVar22 = local_c78;
    puVar6 = (ushort *)(lVar12 + 0x280 + (long)(int)uVar26 * 10);
    uVar1 = *puVar6;
    if (uVar1 != 0xffff) {
      lVar16 = *(long *)PTR_DAT_04bb49a0;
      puVar8 = (uint *)0x0;
      if (*(long *)(lVar16 + 0x230) != 0) {
        uVar15 = (uint)uVar1 - *(int *)(lVar16 + 0x220);
        if (((int)(uint)uVar1 < *(int *)(lVar16 + 0x220)) ||
           ((int)*(uint *)(lVar16 + 0x228) <= (int)uVar15)) {
          puVar8 = (uint *)0x0;
        }
        else {
          if (*(uint *)(lVar16 + 0x228) <= uVar15) {
            uVar15 = 0;
          }
          puVar8 = *(uint **)(*(long *)(lVar16 + 0x230) + (long)(int)uVar15 * 8);
        }
      }
      if ((int)(uint)local_c88 < local_c88._4_4_) {
        if (local_c78 != (long *)0x0) {
          local_c78 = (long *)*local_c78;
        }
        *plVar22 = 0;
        plVar22[1] = 0;
        if ((int)(uint)local_c88 < local_c88._4_4_) {
          local_c80[(int)(uint)local_c88] = (long)plVar22;
          local_c88 = CONCAT44(local_c88._4_4_,(uint)local_c88 + 1);
        }
      }
      else {
        plVar22 = (long *)0x0;
      }
      *(int *)plVar22 = (int)uVar7;
      *(ushort *)((long)plVar22 + 4) = *puVar6;
      if (puVar8 == (uint *)0x0) {
        plVar22[1] = -1;
      }
      else {
        uVar10 = 0;
        uVar15 = *puVar8;
        if ((uVar15 != 0) && (puVar8 != (uint *)(ulong)uVar15)) {
          puVar17 = (uint *)((long)puVar8 - (long)(ulong)uVar15);
          uVar10 = 0;
          if (*puVar17 != 0) {
            uVar15 = puVar17[1];
            if ((uVar15 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
              lVar16 = 0xc;
              if (*(char *)((long)puVar17 + 10) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar17 + lVar16 + (ulong)(ushort)puVar17[2] * 8;
              if (lVar16 != 0) {
                uVar10 = 0;
                if ((ulong)uVar15 != 0) {
                  uVar10 = (uint)((ulong)((long)puVar8 - lVar16) / (ulong)uVar15);
                }
                if (*puVar17 <= uVar10) {
                  uVar10 = 0xffffffff;
                }
                if ((uVar10 < *puVar18) &&
                   (uVar10 = (uint)*(ushort *)(*(long *)(puVar18 + 2) + (long)(int)uVar10 * 2),
                   uVar10 < 0x12)) goto LAB_01b6d328;
              }
            }
            uVar10 = 0;
          }
        }
LAB_01b6d328:
        uVar14 = 0;
        uVar15 = *puVar8;
        if ((uVar15 != 0) && (puVar8 != (uint *)(ulong)uVar15)) {
          puVar18 = (uint *)((long)puVar8 - (long)(ulong)uVar15);
          if ((*puVar18 == 0) ||
             ((uVar15 = puVar18[1], uVar15 == 0 || ((ulong)(ushort)puVar18[2] == 0)))) {
LAB_01b6d3a8:
            uVar14 = 0;
          }
          else {
            lVar16 = 0xc;
            if (*(char *)((long)puVar18 + 10) != '\0') {
              lVar16 = 0x1c;
            }
            lVar16 = (long)puVar18 + lVar16 + (ulong)(ushort)puVar18[2] * 8;
            uVar14 = 0;
            if (lVar16 != 0) {
              uVar14 = 0;
              if ((ulong)uVar15 != 0) {
                uVar14 = (uint)((ulong)((long)puVar8 - lVar16) / (ulong)uVar15);
              }
              if (*puVar18 <= uVar14) {
                uVar14 = 0xffffffff;
              }
              if ((*puVar19 <= uVar14) ||
                 (uVar1 = *(ushort *)(*(long *)(puVar19 + 2) + (long)(int)uVar14 * 2),
                 uVar14 = (uint)uVar1, 0x11 < uVar1)) goto LAB_01b6d3a8;
            }
          }
        }
        _local_c98 = CONCAT44(uVar14,uVar10);
        uVar10 = 0;
        uVar15 = *puVar8;
        if ((uVar15 != 0) && (puVar8 != (uint *)(ulong)uVar15)) {
          puVar19 = (uint *)((long)puVar8 - (long)(ulong)uVar15);
          uVar10 = 0;
          if (*puVar19 != 0) {
            uVar15 = puVar19[1];
            if ((uVar15 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
              lVar16 = 0xc;
              if (*(char *)((long)puVar19 + 10) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar19 + lVar16 + (ulong)(ushort)puVar19[2] * 8;
              if (lVar16 != 0) {
                uVar10 = 0;
                if ((ulong)uVar15 != 0) {
                  uVar10 = (uint)((ulong)((long)puVar8 - lVar16) / (ulong)uVar15);
                }
                if (*puVar19 <= uVar10) {
                  uVar10 = 0xffffffff;
                }
                if ((uVar10 < *puVar20) &&
                   (uVar10 = (uint)*(ushort *)(*(long *)(puVar20 + 2) + (long)(int)uVar10 * 2),
                   uVar10 < 0x12)) goto LAB_01b6d430;
              }
            }
            uVar10 = 0;
          }
        }
LAB_01b6d430:
        uVar14 = 0;
        uVar15 = *puVar8;
        if ((uVar15 != 0) && (puVar8 != (uint *)(ulong)uVar15)) {
          puVar20 = (uint *)((long)puVar8 - (long)(ulong)uVar15);
          if ((*puVar20 == 0) ||
             ((uVar15 = puVar20[1], uVar15 == 0 || ((ulong)(ushort)puVar20[2] == 0)))) {
LAB_01b6d4b0:
            uVar14 = 0;
          }
          else {
            lVar16 = 0xc;
            if (*(char *)((long)puVar20 + 10) != '\0') {
              lVar16 = 0x1c;
            }
            lVar16 = (long)puVar20 + lVar16 + (ulong)(ushort)puVar20[2] * 8;
            uVar14 = 0;
            if (lVar16 != 0) {
              uVar14 = 0;
              if ((ulong)uVar15 != 0) {
                uVar14 = (uint)((ulong)((long)puVar8 - lVar16) / (ulong)uVar15);
              }
              if (*puVar20 <= uVar14) {
                uVar14 = 0xffffffff;
              }
              if ((*puVar21 <= uVar14) ||
                 (uVar1 = *(ushort *)(*(long *)(puVar21 + 2) + (long)(int)uVar14 * 2),
                 uVar14 = (uint)uVar1, 0x11 < uVar1)) goto LAB_01b6d4b0;
            }
          }
        }
        _local_c90 = CONCAT44(uVar14,uVar10);
        if (*puVar8 == 0) {
LAB_01b6d598:
          uVar15 = 0;
        }
        else {
          cVar9 = *PTR_DAT_04bc0640;
          do {
            puVar3 = PTR_DAT_04bc0640;
            if (cVar9 == '\0') {
              cVar9 = '\x01';
              *(undefined8 *)puVar4 = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
              *puVar3 = 1;
              *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
            }
            else {
              uVar15 = *(uint *)(puVar4 + 0x28);
              if (-1 < (int)uVar15) {
                if ((byte *)((ulong)uVar15 + (long)puVar8) == (byte *)0x0) goto LAB_01b6d598;
                uVar15 = (uint)*(byte *)((ulong)uVar15 + (long)puVar8);
                goto LAB_01b6d59c;
              }
              if (uVar15 != 0xffffffff) goto LAB_01b6d598;
            }
            puVar21 = (uint *)(ulong)*puVar8;
            uVar15 = 0;
            if ((*puVar8 == 0) || (puVar8 == puVar21)) goto LAB_01b6d59c;
            lVar16 = 0xc;
            if (*(char *)((long)puVar8 + (10 - (long)puVar21)) != '\0') {
              lVar16 = 0x1c;
            }
            lVar16 = (long)puVar8 + (lVar16 - (long)puVar21);
            if (lVar16 == 0) goto LAB_01b6d598;
            uVar13 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar21));
            *(undefined4 *)(puVar4 + 0x28) = 0xfffffffe;
            uVar15 = 0;
            if (uVar13 == 0) goto LAB_01b6d59c;
            piVar23 = (int *)(lVar16 + 4);
            while (piVar23[-1] != 0x572a8fe9) {
              piVar23 = piVar23 + 2;
              uVar13 = uVar13 - 1;
              if (uVar13 == 0) {
                uVar15 = 0;
                goto LAB_01b6d59c;
              }
            }
            iVar11 = 0;
            if (*piVar23 != -1) {
              iVar11 = *piVar23;
            }
            *(int *)(puVar4 + 0x28) = iVar11;
          } while (*puVar8 != 0);
          uVar15 = 0;
        }
LAB_01b6d59c:
        *(uint *)(plVar22 + 1) = uVar15;
        local_c9c = 0;
        uVar15 = *puVar8;
        if ((uVar15 != 0) && (puVar8 != (uint *)(ulong)uVar15)) {
          puVar21 = (uint *)((long)puVar8 - (long)(ulong)uVar15);
          local_c9c = 0;
          if (*puVar21 != 0) {
            uVar15 = puVar21[1];
            if ((uVar15 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
              lVar16 = 0xc;
              if (*(char *)((long)puVar21 + 10) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar21 + lVar16 + (ulong)(ushort)puVar21[2] * 8;
              if (lVar16 != 0) {
                uVar10 = 0;
                if ((ulong)uVar15 != 0) {
                  uVar10 = (uint)((ulong)((long)puVar8 - lVar16) / (ulong)uVar15);
                }
                if (*puVar21 <= uVar10) {
                  uVar10 = 0xffffffff;
                }
                if ((uVar10 < *puVar24) &&
                   (local_c9c = (uint)*(ushort *)(*(long *)(puVar24 + 2) + (long)(int)uVar10 * 2),
                   local_c9c < 5)) goto LAB_01b6d1a0;
              }
            }
            local_c9c = 0;
          }
        }
LAB_01b6d1a0:
        uVar5 = FUN_01b6db30(&local_c9c,&local_c98,puVar6,uVar7,param_3);
        *(undefined4 *)((long)plVar22 + 0xc) = uVar5;
        puVar24 = (uint *)PTR_DAT_04bc0638;
        puVar21 = (uint *)PTR_DAT_04bc0630;
        puVar20 = (uint *)PTR_DAT_04bc0628;
        puVar19 = (uint *)PTR_DAT_04bc0620;
        puVar18 = (uint *)PTR_DAT_04bc0618;
      }
    }
    uVar7 = uVar26 + 1;
    uVar26 = uVar7 & 0xffffffff;
  } while ((int)uVar7 != 0x80);
  if ((uint)local_c88 == 0) {
    return 0xffffffff;
  }
  if (1 < (int)(uint)local_c88) {
    uVar10 = 0;
    uVar15 = (uint)local_c88 - 1;
    do {
      if ((int)uVar15 <= (int)uVar10) break;
      lVar12 = local_c80[uVar10];
      uVar7 = (ulong)uVar10;
      if ((uVar15 - uVar10 & 1) == 0) {
        lVar16 = lVar12;
        uVar26 = uVar7;
      }
      else {
        uVar26 = uVar7 + 1;
        lVar16 = local_c80[uVar26];
        if (*(int *)(lVar16 + 8) < *(int *)(lVar12 + 8)) {
          local_c80[uVar26] = lVar12;
          local_c80[uVar7] = lVar16;
          lVar16 = lVar12;
        }
      }
      uVar13 = (ulong)uVar15;
      uVar15 = uVar10;
      if (~uVar7 + uVar13 != 0) {
        plVar22 = local_c80 + uVar26 + 1;
        do {
          lVar12 = *plVar22;
          if (*(int *)(lVar12 + 8) < *(int *)(lVar16 + 8)) {
            plVar22[-1] = lVar12;
            *plVar22 = lVar16;
            uVar15 = (uint)uVar26;
          }
          else {
            lVar16 = lVar12;
          }
          lVar12 = plVar22[1];
          if (*(int *)(lVar12 + 8) < *(int *)(lVar16 + 8)) {
            uVar15 = (uint)uVar26 + 1;
            *plVar22 = lVar12;
            plVar22[1] = lVar16;
          }
          else {
            lVar16 = lVar12;
          }
          uVar26 = uVar26 + 2;
          plVar22 = plVar22 + 2;
        } while (uVar13 != uVar26);
      }
      if ((int)uVar15 <= (int)uVar10) break;
      lVar12 = local_c80[uVar15];
      uVar26 = (ulong)uVar15;
      uVar10 = uVar15;
      do {
        lVar16 = local_c80[uVar26 - 1];
        if (*(int *)(lVar12 + 8) < *(int *)(lVar16 + 8)) {
          uVar10 = (uint)uVar26;
          local_c80[uVar26 - 1] = lVar12;
          local_c80[uVar26] = lVar16;
        }
        else {
          lVar12 = lVar16;
        }
        uVar26 = uVar26 - 1;
      } while ((long)uVar7 < (long)uVar26);
    } while (uVar10 != uVar15);
  }
  uVar13 = local_c88 & 0xffffffff;
  uVar7 = 0;
  uVar26 = -(ulong)((uint)local_c88 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3;
  iVar11 = *(int *)(*local_c80 + 8);
  if (param_2 <= *(int *)(*local_c80 + 8)) {
    iVar11 = param_2;
  }
  do {
    if (iVar11 < *(int *)(local_c80[uVar7] + 8)) {
      uVar15 = (uint)uVar7;
      if (uVar15 <= (uint)local_c88) {
        if ((int)(uint)local_c88 <= (int)uVar15) {
          local_c88 = CONCAT44(local_c88._4_4_,uVar15);
          uVar13 = uVar7 & 0xffffffff;
          uVar10 = uVar15 - 1;
          if (!(uVar10 != 0 && 0 < (int)uVar15)) goto LAB_01b6d91c;
          goto LAB_01b6d828;
        }
        uVar26 = uVar7;
        plVar22 = local_c78;
        do {
          local_c78 = (long *)local_c80[uVar26];
          uVar26 = uVar26 + 1;
          *local_c78 = (long)plVar22;
          plVar22 = local_c78;
        } while ((long)uVar26 < (long)(int)(uint)local_c88);
        local_c88 = CONCAT44(local_c88._4_4_,uVar15);
        uVar13 = uVar7 & 0xffffffff;
      }
      break;
    }
    uVar7 = uVar7 + 1;
    uVar26 = uVar26 - 8;
  } while (uVar26 != 0);
  uVar10 = (int)uVar13 - 1;
  if (uVar10 != 0 && 0 < (int)uVar13) {
LAB_01b6d828:
    uVar15 = 0;
    do {
      if ((int)uVar10 <= (int)uVar15) break;
      lVar12 = local_c80[uVar15];
      uVar26 = (ulong)uVar15;
      uVar13 = (ulong)uVar10;
      uVar7 = uVar26;
      uVar10 = uVar15;
      do {
        lVar16 = local_c80[uVar7 + 1];
        iVar11 = (uint)*(ushort *)(lVar12 + 4) - (uint)*(ushort *)(lVar16 + 4);
        if (iVar11 == 0) {
          iVar11 = *(int *)(lVar12 + 0xc) - *(int *)(lVar16 + 0xc);
        }
        if (iVar11 < 1) {
          lVar12 = lVar16;
        }
        else {
          uVar10 = (uint)uVar7;
          local_c80[uVar7 + 1] = lVar12;
          local_c80[uVar7] = lVar16;
        }
        uVar7 = uVar7 + 1;
      } while (uVar13 != uVar7);
      if ((int)uVar10 <= (int)uVar15) break;
      lVar12 = local_c80[uVar10];
      uVar7 = (ulong)uVar10;
      uVar15 = uVar10;
      do {
        lVar16 = local_c80[uVar7 - 1];
        iVar11 = (uint)*(ushort *)(lVar12 + 4) - (uint)*(ushort *)(lVar16 + 4);
        if (iVar11 == 0) {
          iVar11 = *(int *)(lVar12 + 0xc) - *(int *)(lVar16 + 0xc);
        }
        if (iVar11 < 0) {
          uVar15 = (uint)uVar7;
          local_c80[uVar7 - 1] = lVar12;
          local_c80[uVar7] = lVar16;
        }
        else {
          lVar12 = lVar16;
        }
        uVar7 = uVar7 - 1;
      } while ((long)uVar26 < (long)uVar7);
    } while (uVar15 != uVar10);
    uVar13 = local_c88 & 0xffffffff;
  }
LAB_01b6d91c:
  if (0 < (int)uVar13) {
    uVar15 = 0;
    uVar10 = 0xffffffff;
    do {
      plVar22 = (long *)local_c80[(int)uVar15];
      if (uVar10 == *(ushort *)((long)plVar22 + 4)) {
        *plVar22 = (long)local_c78;
        uVar13 = local_c88 & 0xffffffff;
        local_c78 = plVar22;
        if ((-1 < (int)uVar15) && ((int)uVar15 < (int)(uint)local_c88)) {
          uVar14 = uVar15 + 1;
          uVar2 = (uint)local_c88 - uVar14;
          if (uVar2 != 0 && (int)uVar14 <= (int)(uint)local_c88) {
            memmove(local_c80 + uVar15,local_c80 + uVar14,
                    -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3);
          }
          uVar13 = (ulong)((uint)local_c88 - 1);
          local_c88 = CONCAT44(local_c88._4_4_,(uint)local_c88 - 1);
        }
      }
      else {
        uVar15 = uVar15 + 1;
        uVar10 = (uint)*(ushort *)((long)plVar22 + 4);
      }
      iVar11 = (int)uVar13;
    } while ((int)uVar15 < iVar11);
    if (1 < iVar11) {
      uVar10 = 0;
      uVar15 = iVar11 - 1;
      do {
        if ((int)uVar15 <= (int)uVar10) break;
        piVar23 = (int *)local_c80[uVar10];
        uVar7 = (ulong)uVar10;
        if ((uVar15 - uVar10 & 1) == 0) {
          piVar25 = piVar23;
          uVar26 = uVar7;
        }
        else {
          uVar26 = uVar7 + 1;
          piVar25 = (int *)local_c80[uVar26];
          if (*piVar25 < *piVar23) {
            local_c80[uVar26] = (long)piVar23;
            local_c80[uVar7] = (long)piVar25;
            piVar25 = piVar23;
          }
        }
        uVar13 = (ulong)uVar15;
        uVar15 = uVar10;
        if (~uVar7 + uVar13 != 0) {
          plVar22 = local_c80 + uVar26 + 1;
          do {
            piVar23 = (int *)*plVar22;
            if (*piVar23 < *piVar25) {
              plVar22[-1] = (long)piVar23;
              *plVar22 = (long)piVar25;
              uVar15 = (uint)uVar26;
            }
            else {
              piVar25 = piVar23;
            }
            piVar23 = (int *)plVar22[1];
            if (*piVar23 < *piVar25) {
              uVar15 = (uint)uVar26 + 1;
              *plVar22 = (long)piVar23;
              plVar22[1] = (long)piVar25;
            }
            else {
              piVar25 = piVar23;
            }
            uVar26 = uVar26 + 2;
            plVar22 = plVar22 + 2;
          } while (uVar13 != uVar26);
        }
        if ((int)uVar15 <= (int)uVar10) break;
        piVar23 = (int *)local_c80[uVar15];
        uVar26 = (ulong)uVar15;
        uVar10 = uVar15;
        do {
          piVar25 = (int *)local_c80[uVar26 - 1];
          if (*piVar23 < *piVar25) {
            uVar10 = (uint)uVar26;
            local_c80[uVar26 - 1] = (long)piVar23;
            local_c80[uVar26] = (long)piVar25;
          }
          else {
            piVar23 = piVar25;
          }
          uVar26 = uVar26 - 1;
        } while ((long)uVar7 < (long)uVar26);
      } while (uVar10 != uVar15);
    }
  }
  return *(undefined4 *)*local_c80;
}

