
void FUN_01e92b10(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int *piVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  int iVar8;
  undefined1 **ppuVar9;
  undefined1 **ppuVar10;
  undefined1 **ppuVar11;
  ulong uVar12;
  undefined1 **ppuVar13;
  undefined *puVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  long *plVar18;
  bool bVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  ulong uVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  long lVar27;
  ulong uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  ulong uVar32;
  int iVar33;
  ulong uVar34;
  undefined2 *puVar35;
  undefined8 *puVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined *local_108;
  undefined2 local_100;
  undefined1 local_fe;
  undefined1 local_fd;
  undefined4 local_fc;
  uint *local_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined1 *local_c8 [4];
  undefined1 *local_a8;
  undefined1 *puStack_a0;
  undefined1 *local_98;
  undefined1 *puStack_90;
  undefined1 *local_88;
  undefined1 *puStack_80;
  
  puVar14 = PTR_DAT_04bc0048;
  puVar5 = PTR_DAT_04bb43c0;
  if (*(char *)(param_1 + 0x132d0) != '\0') {
    return;
  }
  lVar27 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar27 == 0) {
    iVar29 = 0;
    iVar31 = 0;
    iVar24 = 0x10;
    iVar26 = 0x10;
  }
  else {
    iVar29 = *(int *)(lVar27 + 0xd88);
    iVar31 = *(int *)(lVar27 + 0xd8c);
    iVar26 = *(int *)(lVar27 + 0xd98);
    iVar24 = *(int *)(lVar27 + 0xd9c);
  }
  iVar30 = iVar29;
  if (iVar26 <= iVar29) {
    iVar30 = iVar26;
  }
  if (iVar29 <= iVar26) {
    iVar29 = iVar26;
  }
  iVar26 = iVar31;
  if (iVar24 <= iVar31) {
    iVar26 = iVar24;
  }
  if (iVar31 <= iVar24) {
    iVar31 = iVar24;
  }
  fVar37 = (float)iVar30 * 0.5;
  fVar39 = (float)iVar29 * 0.5;
  fVar38 = (float)iVar26 * 0.5;
  uVar25 = 0;
  if (fVar37 != (float)(int)fVar37) {
    uVar25 = (uint)(fVar37 < 0.0);
  }
  iVar29 = (int)fVar37 - uVar25;
  uVar25 = 0;
  if (fVar38 != (float)(int)fVar38) {
    uVar25 = (uint)(fVar38 < 0.0);
  }
  iVar26 = (int)fVar38 - uVar25;
  fVar37 = (float)iVar31 * 0.5;
  uVar25 = 0;
  if (fVar39 != (float)(int)fVar39) {
    uVar25 = (uint)(fVar39 < 0.0);
  }
  iVar31 = (int)fVar39 - uVar25;
  uVar25 = 0;
  if (fVar37 != (float)(int)fVar37) {
    uVar25 = (uint)(fVar37 < 0.0);
  }
  iVar30 = (int)fVar37 - uVar25;
  iVar24 = iVar29;
  if (iVar31 <= iVar29) {
    iVar24 = iVar31;
  }
  if (iVar29 <= iVar31) {
    iVar29 = iVar31;
  }
  uVar25 = iVar29 - iVar24;
  local_88 = &DAT_101010101010101;
  puStack_80 = &DAT_101010101010101;
  iVar29 = iVar26;
  if (iVar30 <= iVar26) {
    iVar29 = iVar30;
  }
  if (iVar26 <= iVar30) {
    iVar26 = iVar30;
  }
  uVar21 = uVar25 + 1;
  uVar17 = iVar26 - iVar29;
  local_98 = &DAT_101010101010101;
  puStack_90 = &DAT_101010101010101;
  local_a8 = &DAT_101010101010101;
  puStack_a0 = &DAT_101010101010101;
  local_c8[2] = &DAT_101010101010101;
  local_c8[3] = &DAT_101010101010101;
  local_c8[0] = &DAT_101010101010101;
  local_c8[1] = &DAT_101010101010101;
  if (*(int *)(param_1 + 0x12870) != 0) {
    puVar36 = *(undefined8 **)(param_1 + 0x12878);
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    puVar6 = puVar36 + *(int *)(param_1 + 0x12870);
    puVar2 = PTR_DAT_04bbc1a0 + 0x10;
    puVar3 = PTR_DAT_04bc0510 + 0x10;
    do {
      puVar35 = (undefined2 *)*puVar36;
      if ((*(int *)(puVar35 + 0xe) == 0) || (*(int *)(puVar35 + 0xe) == 1)) {
        local_d0 = 0;
        lVar27 = *(long *)puVar5;
        local_e0 = 0;
        local_100 = *puVar35;
        local_fe = *(undefined1 *)(puVar35 + 1);
        local_fd = *(undefined1 *)((long)puVar35 + 3);
        local_fc = *(undefined4 *)(puVar35 + 2);
        local_f8 = (uint *)0x0;
        local_108 = puVar3;
        local_f0 = puVar2;
        puStack_e8 = puVar1;
        local_d8 = puVar1;
        uVar16 = FUN_0277d6c4(&local_100);
        if (*(long *)puVar5 != 0) {
          lVar27 = *(long *)(lVar27 + 0x57e58);
          uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
          if ((uVar16 < *(uint *)(lVar27 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
            lVar27 = *(long *)PTR_DAT_04bc0428;
            uVar16 = FUN_0277d6c4(puVar35);
            uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
            if ((uVar16 < *(uint *)(lVar27 + 0x1d8)) &&
               (puVar22 = *(uint **)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar16 * 8),
               puVar22 != (uint *)0x0)) {
              local_f8 = puVar22;
            }
          }
        }
        FUN_01afb480(&local_108,&local_f0);
        if (local_f8 == (uint *)0x0) {
LAB_01e92e54:
          uVar20 = 0;
        }
        else {
          uVar16 = *local_f8;
          uVar20 = 0;
          if ((uVar16 != 0) && (local_f8 != (uint *)(ulong)uVar16)) {
            puVar22 = (uint *)((long)local_f8 - (long)(ulong)uVar16);
            uVar20 = 0;
            if (*puVar22 != 0) {
              uVar16 = puVar22[1];
              if ((uVar16 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
                lVar27 = 0xc;
                if (*(char *)((long)puVar22 + 10) != '\0') {
                  lVar27 = 0x1c;
                }
                lVar27 = (long)puVar22 + lVar27 + (ulong)(ushort)puVar22[2] * 8;
                if (lVar27 != 0) {
                  uVar20 = 0;
                  if ((ulong)uVar16 != 0) {
                    uVar20 = (uint)((ulong)((long)local_f8 - lVar27) / (ulong)uVar16);
                  }
                  if (*puVar22 <= uVar20) {
                    uVar20 = 0xffffffff;
                  }
                  if ((uVar20 < *(uint *)puVar14) &&
                     (uVar20 = (uint)*(ushort *)(*(long *)(puVar14 + 8) + (long)(int)uVar20 * 2),
                     uVar20 < 0x52)) goto LAB_01e92e58;
                }
              }
              goto LAB_01e92e54;
            }
          }
        }
LAB_01e92e58:
        if (uVar20 - 1 < 9) {
          *(undefined1 *)(param_1 + 0x132d1) = 1;
        }
        fVar37 = (float)((int)local_e0 + *(int *)(puVar35 + 8)) * 0.5;
        uVar16 = 0;
        if (fVar37 != (float)(int)fVar37) {
          uVar16 = (uint)(fVar37 < 0.0);
        }
        iVar31 = (int)fVar37 - uVar16;
        fVar37 = (float)(local_e0._4_4_ + *(int *)(puVar35 + 10)) * 0.5;
        uVar16 = 0;
        if (fVar37 != (float)(int)fVar37) {
          uVar16 = (uint)(fVar37 < 0.0);
        }
        iVar26 = (int)fVar37 - uVar16;
        fVar37 = (float)((int)local_d0 + *(int *)(puVar35 + 8)) * 0.5;
        uVar16 = 0;
        if (fVar37 != (float)(int)fVar37) {
          uVar16 = (uint)(fVar37 < 0.0);
        }
        iVar30 = (int)fVar37 - uVar16;
        fVar37 = (float)(local_d0._4_4_ + *(int *)(puVar35 + 10)) * 0.5;
        uVar16 = 0;
        if (fVar37 != (float)(int)fVar37) {
          uVar16 = (uint)(fVar37 < 0.0);
        }
        iVar33 = (int)fVar37 - uVar16;
        iVar8 = iVar31;
        if (iVar30 <= iVar31) {
          iVar8 = iVar30;
        }
        if (iVar31 <= iVar30) {
          iVar31 = iVar30;
        }
        iVar30 = iVar26;
        if (iVar33 <= iVar26) {
          iVar30 = iVar33;
        }
        if (iVar26 <= iVar33) {
          iVar26 = iVar33;
        }
        if (iVar26 + 1 != iVar30) {
          iVar33 = iVar8;
          do {
            uVar16 = iVar33 - iVar24;
            if (((int)uVar16 < 10) && (uVar20 = iVar30 - iVar29, (int)uVar20 < 8)) {
              ppuVar9 = local_c8 + uVar16;
              if (9 < uVar16) {
                ppuVar9 = local_c8;
              }
              ppuVar10 = (undefined1 **)((long)ppuVar9 + (ulong)uVar20);
              if (7 < uVar20) {
                ppuVar10 = ppuVar9;
              }
              *(undefined1 *)ppuVar10 = 0;
            }
            if (iVar33 < iVar31) {
              iVar33 = iVar33 + 1;
            }
            else {
              iVar30 = iVar30 + 1;
              iVar33 = iVar8;
            }
          } while ((iVar8 != iVar33) || (iVar26 + 1 != iVar30));
        }
      }
      puVar36 = puVar36 + 1;
    } while (puVar36 != puVar6);
  }
  iVar31 = uVar17 + 1;
  if (9 < (int)uVar21) {
    uVar21 = 10;
  }
  uVar23 = (ulong)(int)uVar21;
  if (uVar21 != 0) {
    uVar28 = (ulong)uVar17;
    if (uVar17 < 8) {
      if (uVar21 == 1) {
        uVar32 = 0;
      }
      else {
        uVar32 = 0;
        do {
          uVar34 = uVar32 & 0xfffffffe;
          bVar15 = 9 < (uint)uVar32;
          uVar32 = uVar32 + 2;
          ppuVar9 = local_c8 + uVar34;
          if (bVar15) {
            ppuVar9 = local_c8;
          }
          ppuVar10 = local_c8 + uVar34 + 1;
          if (bVar15) {
            ppuVar10 = local_c8;
          }
          *(undefined1 *)ppuVar9 = 0;
          *(undefined1 *)((long)ppuVar9 + uVar28) = 0;
          *(undefined1 *)ppuVar10 = 0;
          *(undefined1 *)((long)ppuVar10 + uVar28) = 0;
        } while ((uVar23 & 0xfffffffffffffffe) != uVar32);
      }
      if ((uVar21 & 1) != 0) {
        ppuVar9 = local_c8 + (uVar32 & 0xffffffff);
        if (9 < (uint)uVar32) {
          ppuVar9 = local_c8;
        }
        *(undefined1 *)ppuVar9 = 0;
        *(undefined1 *)((long)ppuVar9 + uVar28) = 0;
      }
    }
    else {
      if (uVar21 == 1) {
        uVar28 = 0;
      }
      else {
        uVar28 = 0;
        do {
          uVar32 = uVar28 & 0xfffffffe;
          bVar15 = 9 < (uint)uVar28;
          uVar28 = uVar28 + 2;
          ppuVar9 = local_c8 + uVar32;
          if (bVar15) {
            ppuVar9 = local_c8;
          }
          ppuVar10 = local_c8 + uVar32 + 1;
          if (bVar15) {
            ppuVar10 = local_c8;
          }
          *(undefined1 *)ppuVar9 = 0;
          *(undefined1 *)ppuVar10 = 0;
        } while ((uVar23 & 0xfffffffffffffffe) != uVar28);
      }
      if ((uVar23 & 1) != 0) {
        ppuVar9 = local_c8 + (uVar28 & 0xffffffff);
        if (9 < (uint)uVar28) {
          ppuVar9 = local_c8;
        }
        *(undefined1 *)ppuVar9 = 0;
      }
    }
  }
  iVar26 = iVar31;
  if (7 < iVar31) {
    iVar26 = 8;
  }
  if (iVar26 != 0) {
    uVar28 = 0;
    ppuVar9 = local_c8 + uVar25;
    if (9 < uVar25) {
      ppuVar9 = local_c8;
    }
    do {
      uVar34 = uVar28 & 0xffffffff;
      bVar15 = (uVar28 & 0xfffffff8) != 0;
      uVar28 = uVar28 + 1;
      uVar32 = uVar34;
      if (bVar15) {
        uVar32 = 0;
      }
      ppuVar10 = (undefined1 **)((long)ppuVar9 + uVar34);
      if (bVar15) {
        ppuVar10 = ppuVar9;
      }
      *(undefined1 *)((long)local_c8 + uVar32) = 0;
      *(undefined1 *)ppuVar10 = 0;
    } while ((long)iVar26 != uVar28);
  }
  if ((0 < (int)uVar21) && (0 < iVar31)) {
    piVar4 = (int *)(param_1 + 0x12f50);
    puVar5 = PTR_DAT_04bb2018 + 0x10;
    uVar28 = 0;
    do {
      uVar32 = uVar28 + 1;
      iVar31 = (int)uVar28;
      ppuVar9 = local_c8 + uVar32;
      if (8 < uVar28) {
        ppuVar9 = local_c8;
      }
      ppuVar10 = local_c8 + (iVar31 - 1U);
      if (9 < iVar31 - 1U) {
        ppuVar10 = local_c8;
      }
      uVar25 = 0;
      do {
        if ((int)uVar25 < 0) {
          uVar17 = uVar25 + 1;
          bVar15 = true;
          if (uVar25 == 0xffffffff) {
            uVar17 = 0;
            if (0 < iVar26) goto LAB_01e931c4;
            goto LAB_01e93224;
          }
          bVar19 = true;
          uVar16 = (uint)uVar32;
        }
        else {
          uVar34 = (ulong)uVar25;
          if (7 < uVar25) {
            uVar34 = 0;
          }
          bVar15 = *(char *)((long)local_c8 + uVar34 + uVar28 * 8) != '\0';
          uVar17 = uVar25 + 1;
          if ((int)uVar17 < iVar26) {
LAB_01e931c4:
            uVar34 = (ulong)uVar17;
            if (7 < uVar17) {
              uVar34 = 0;
            }
            bVar19 = false;
            if (*(char *)((long)local_c8 + uVar34 + uVar28 * 8) != '\0') {
              bVar19 = bVar15;
            }
            bVar15 = bVar19;
            if ((long)uVar32 < (long)uVar23) {
              ppuVar13 = (undefined1 **)((long)ppuVar9 + (ulong)uVar17);
              if (7 < uVar17) {
                ppuVar13 = ppuVar9;
              }
              bVar15 = false;
              if (*(char *)ppuVar13 != '\0') {
                bVar15 = bVar19;
              }
            }
          }
LAB_01e93224:
          bVar19 = false;
          uVar16 = iVar31 + 1;
        }
        bVar7 = bVar15;
        if ((int)uVar16 < (int)uVar21) {
          ppuVar13 = local_c8 + uVar16;
          if (9 < uVar16) {
            ppuVar13 = local_c8;
          }
          ppuVar11 = (undefined1 **)((long)ppuVar13 + (ulong)uVar25);
          if (7 < uVar25) {
            ppuVar11 = ppuVar13;
          }
          bVar7 = false;
          if (*(char *)ppuVar11 != '\0') {
            bVar7 = bVar15;
          }
        }
        uVar20 = uVar25 - 1;
        uVar34 = (ulong)uVar20;
        if (((int)uVar25 < 1) || ((int)uVar21 <= (int)uVar16)) {
          bVar15 = bVar7;
          if (0 < (int)uVar25) goto LAB_01e93298;
          if (uVar28 == 0) goto LAB_01e93310;
LAB_01e932c8:
          ppuVar13 = (undefined1 **)((long)ppuVar10 + (ulong)uVar25);
          if (7 < uVar25) {
            ppuVar13 = ppuVar10;
          }
          bVar7 = false;
          if (*(char *)ppuVar13 != '\0') {
            bVar7 = bVar15;
          }
          if (iVar26 <= (int)uVar17) {
            bVar19 = true;
          }
          bVar15 = bVar7;
          if (!bVar19) {
            ppuVar13 = (undefined1 **)((long)ppuVar10 + (ulong)uVar17);
            if (7 < uVar17) {
              ppuVar13 = ppuVar10;
            }
            bVar15 = false;
            if (*(char *)ppuVar13 != '\0') {
              bVar15 = bVar7;
            }
          }
          if (bVar15) {
LAB_01e93314:
            if (*piVar4 < *(int *)(param_1 + 0x12f54)) {
              plVar18 = *(long **)(param_1 + 0x12f60);
              if (plVar18 != (long *)0x0) {
                *(long *)(param_1 + 0x12f60) = *plVar18;
              }
              *plVar18 = (long)puVar5;
              *(int *)(plVar18 + 1) = iVar24 + iVar31;
              *(uint *)((long)plVar18 + 0xc) = uVar25 + iVar29;
              if (*piVar4 < *(int *)(param_1 + 0x12f54)) {
                *(long **)(*(long *)(param_1 + 0x12f58) + (long)*piVar4 * 8) = plVar18;
                *piVar4 = *piVar4 + 1;
              }
            }
          }
        }
        else {
          ppuVar13 = local_c8 + uVar16;
          if (9 < uVar16) {
            ppuVar13 = local_c8;
          }
          ppuVar11 = (undefined1 **)((long)ppuVar13 + uVar34);
          if (7 < uVar20) {
            ppuVar11 = ppuVar13;
          }
          bVar15 = false;
          if (*(char *)ppuVar11 != '\0') {
            bVar15 = bVar7;
          }
LAB_01e93298:
          uVar12 = uVar34;
          if (7 < uVar20) {
            uVar12 = 0;
          }
          bVar7 = false;
          if (*(char *)((long)local_c8 + uVar12 + uVar28 * 8) != '\0') {
            bVar7 = bVar15;
          }
          if (uVar28 != 0) {
            ppuVar13 = (undefined1 **)((long)ppuVar10 + uVar34);
            if (7 < uVar20) {
              ppuVar13 = ppuVar10;
            }
            bVar15 = false;
            if (*(char *)ppuVar13 != '\0') {
              bVar15 = bVar7;
            }
            goto LAB_01e932c8;
          }
LAB_01e93310:
          if (bVar7) goto LAB_01e93314;
        }
        uVar25 = uVar17;
      } while ((int)uVar17 < iVar26);
      uVar28 = uVar32;
    } while (uVar32 != uVar21);
  }
  return;
}

