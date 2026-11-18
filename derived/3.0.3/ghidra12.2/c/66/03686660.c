
/* WARNING: Removing unreachable block (ram,0x036876d8) */
/* WARNING: Removing unreachable block (ram,0x03687488) */
/* WARNING: Removing unreachable block (ram,0x03687b94) */
/* WARNING: Removing unreachable block (ram,0x0368693c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_03686660(int *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  ushort *puVar5;
  long *plVar6;
  int iVar7;
  ushort uVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined8 ****ppppuVar11;
  bool bVar12;
  byte bVar13;
  int iVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  uint *puVar18;
  undefined8 *puVar19;
  uint *puVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  long lVar25;
  char cVar26;
  long lVar27;
  long lVar28;
  undefined8 *puVar29;
  long lVar30;
  long *plVar31;
  long *plVar32;
  int local_174;
  undefined *local_170;
  undefined2 local_168;
  uint local_160 [2];
  undefined *local_158;
  undefined1 *local_150;
  undefined4 local_148;
  undefined1 local_144 [15];
  undefined1 local_135;
  undefined4 local_130;
  int iStack_12c;
  int local_128;
  uint local_124;
  undefined8 local_120;
  byte local_118;
  undefined7 uStack_117;
  undefined4 local_110;
  uint uStack_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined *local_100;
  undefined1 *local_f8;
  undefined4 local_f0;
  undefined1 local_ec [15];
  undefined1 local_dd;
  int local_d4;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined8 ****local_c0;
  undefined8 ****ppppuStack_b8;
  undefined8 ***local_b0;
  undefined8 **local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 local_90 [4];
  int local_6c;
  
  lVar30 = *(long *)PTR_DAT_04bb4e28;
  if (lVar30 == 0) {
    return;
  }
  if (0 < *param_1) {
    lVar17 = 0;
    puVar29 = *(undefined8 **)(param_1 + 4);
    do {
      puVar19 = *(undefined8 **)(*(long *)(param_1 + 2) + lVar17 * 8);
      lVar17 = lVar17 + 1;
      *puVar19 = puVar29;
      *(undefined8 **)(param_1 + 4) = puVar19;
      puVar29 = puVar19;
    } while (lVar17 < *param_1);
  }
  *param_1 = 0;
  plVar32 = (long *)PTR_DAT_04bb2720;
  lVar17 = *(long *)PTR_DAT_04bb2720;
  local_6c = param_2;
  if (lVar17 == 0) {
    puVar29 = &DAT_055c04a0;
  }
  else {
    puVar29 = &DAT_055c04a0;
    if (*(long *)(lVar17 + 0x330) != 0) {
      puVar29 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
      iVar14 = FUN_006bd550(*puVar29,0);
      puVar29 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar14 != 0x758f7eaf) {
        puVar29 = &DAT_055c04a0;
      }
    }
  }
  iVar14 = *(int *)(puVar29 + 7);
  if (local_6c != 0) {
    local_d4 = 0;
    local_b0 = &local_a8;
    local_a8 = &local_a0;
    local_c0 = &local_b0;
    local_a0 = &local_98;
    local_d0 = 0;
    local_c8 = (undefined8 *)0x0;
    local_98 = 0;
    if (local_90 != (undefined8 *)0x0) {
      local_d0 = 0x400000000;
      local_c8 = local_90;
    }
    if (*(int *)(lVar30 + 0xe0) != 0) {
      plVar32 = *(long **)(lVar30 + 0xe8);
      iVar14 = 0;
      plVar31 = plVar32 + *(int *)(lVar30 + 0xe0);
      puVar1 = PTR_DAT_04bb2ab0 + 0x10;
      puVar2 = PTR_DAT_04bb35a0 + 0x10;
      ppppuStack_b8 = local_c0;
      do {
        lVar30 = *plVar32;
        if ((*(int *)(lVar30 + 0x3c) != 2) && ((*(ushort *)(lVar30 + 0x114) & 0x60) == 0)) {
          uVar15 = FUN_03772400(*(undefined4 *)(lVar30 + 0xd8));
          ppppuVar11 = local_c0;
          if ((uVar15 & 1) == 0) {
            if ((int)local_d0 != 0) {
              lVar17 = (long)(int)local_d0 << 3;
              puVar29 = local_c8;
              do {
                if (*(int *)*puVar29 == *(int *)(lVar30 + 0xd8)) goto LAB_036868ac;
                puVar29 = puVar29 + 1;
                lVar17 = lVar17 + -8;
              } while (lVar17 != 0);
            }
            if ((int)local_d0 < local_d0._4_4_) {
              if (local_c0 != (undefined8 ****)0x0) {
                local_c0 = (undefined8 ****)*local_c0;
              }
              *(undefined4 *)ppppuVar11 = *(undefined4 *)(lVar30 + 0xd8);
              if ((int)local_d0 < local_d0._4_4_) {
                local_c8[(int)local_d0] = ppppuVar11;
                local_d0 = CONCAT44(local_d0._4_4_,(int)local_d0 + 1);
              }
            }
LAB_036868ac:
            local_148 = 0x10;
            local_f0 = 0x10;
            local_135 = 0;
            local_144[0] = 0;
            local_130 = 0;
            local_128 = 0;
            uStack_10c = 0;
            local_104 = 0;
            local_dd = 0;
            local_ec[0] = 0;
            local_120 = 0;
            local_118 = 0;
            local_158 = puVar1;
            local_150 = local_144;
            local_100 = puVar1;
            local_f8 = local_ec;
            uVar15 = FUN_03697750(local_160,lVar30,&local_d0);
            if (((uVar15 & 1) != 0) && (lVar17 = *(long *)PTR_DAT_04bb46b0, lVar17 != 0)) {
              uVar8 = *(ushort *)(lVar30 + 0x38);
              local_170 = (undefined *)CONCAT44(local_170._4_4_,1);
              if ((((*(byte *)(lVar17 + 0x50d) ^ 0xff) & 6) == 0) &&
                 ((lVar17 = (**(code **)(**(long **)(*(long *)(lVar17 + 0x10) + 0x188) + 0x38))(),
                  uVar8 < 500 && (lVar17 != 0)))) {
                lVar17 = lVar17 + (ulong)uVar8 * 0x2d48;
                if ((*(long **)(lVar17 + 0x4cc38) == (long *)0x0) ||
                   (puVar29 = (undefined8 *)**(long **)(lVar17 + 0x4cc38),
                   puVar29 == (undefined8 *)0x0)) {
                  uVar15 = 0;
                }
                else {
                  uVar15 = (**(code **)*puVar29)();
                  uVar15 = uVar15 & 0xffffffff;
                }
                bVar13 = FUN_028f41ac(*(long *)(lVar17 + 0x4cc20) + *(long *)(lVar17 + 0x4cc18));
                local_118 = local_118 & 0xfe | bVar13 & 1;
                if ((((uVar15 & 1) != 0) && (*(long *)(lVar17 + 0x4cc38) != 0)) &&
                   (puVar29 = *(undefined8 **)(*(long *)(lVar17 + 0x4cc38) + 8),
                   puVar29 != (undefined8 *)0x0)) {
                  (**(code **)*puVar29)();
                }
              }
            }
            bVar12 = local_d4 != local_128;
            local_d4 = local_128;
            local_108 = *(undefined4 *)(lVar30 + 0xe8);
            if (bVar12) {
              iVar14 = 0;
            }
            iStack_12c = iVar14;
            if (*param_1 < param_1[1]) {
              puVar29 = *(undefined8 **)(param_1 + 4);
              if (puVar29 != (undefined8 *)0x0) {
                *(undefined8 *)(param_1 + 4) = *puVar29;
              }
              puVar3 = (undefined1 *)((long)puVar29 + 0x1c);
              *(undefined1 *)((long)puVar29 + 0x2b) = 0;
              *(ushort *)puVar29 = (ushort)local_160[0];
              *(undefined4 *)(puVar29 + 3) = 0x10;
              puVar29[1] = puVar2;
              puVar29[2] = puVar3;
              (**(code **)(local_158 + 0x18))(&local_158);
              puVar10 = local_150;
              if (puVar3 != local_150) {
                (**(code **)(local_158 + 0x18))(&local_158);
                lVar30 = 0;
                do {
                  if (local_150[lVar30] == '\0') goto LAB_03686abc;
                  if (local_150[lVar30 + 1] == '\0') {
                    lVar30 = lVar30 + 1;
                    goto LAB_03686abc;
                  }
                  if (local_150[lVar30 + 2] == '\0') {
                    lVar30 = lVar30 + 2;
                    goto LAB_03686abc;
                  }
                  lVar30 = lVar30 + 3;
                } while (lVar30 != 0x80001);
                lVar30 = 0;
LAB_03686abc:
                iVar7 = (int)lVar30;
                if (*(int *)(puVar29 + 3) <= (int)lVar30) {
                  iVar7 = *(int *)(puVar29 + 3) + -1;
                }
                memcpy(puVar3,puVar10,(long)iVar7);
                puVar3[iVar7] = 0;
              }
              puVar4 = PTR_DAT_04bb2ab0;
              puVar3 = (undefined1 *)((long)puVar29 + 0x74);
              *(undefined1 *)((long)puVar29 + 0x83) = 0;
              puVar29[1] = puVar4 + 0x10;
              puVar29[6] = CONCAT44(iStack_12c,local_130);
              puVar29[7] = CONCAT44(local_124,local_128);
              puVar29[8] = local_120;
              puVar29[9] = CONCAT71(uStack_117,local_118);
              puVar29[10] = CONCAT44(uStack_10c,local_110);
              puVar29[0xb] = CONCAT44(local_104,local_108);
              *(undefined4 *)(puVar29 + 0xe) = 0x10;
              puVar29[0xc] = PTR_DAT_04bb35a0 + 0x10;
              puVar29[0xd] = puVar3;
              (**(code **)(local_100 + 0x18))(&local_100);
              puVar10 = local_f8;
              if (puVar3 != local_f8) {
                (**(code **)(local_100 + 0x18))(&local_100);
                lVar30 = 0;
                do {
                  if (local_f8[lVar30] == '\0') goto LAB_03686bac;
                  if (local_f8[lVar30 + 1] == '\0') {
                    lVar30 = lVar30 + 1;
                    goto LAB_03686bac;
                  }
                  if (local_f8[lVar30 + 2] == '\0') {
                    lVar30 = lVar30 + 2;
                    goto LAB_03686bac;
                  }
                  lVar30 = lVar30 + 3;
                } while (lVar30 != 0x80001);
                lVar30 = 0;
LAB_03686bac:
                iVar7 = (int)lVar30;
                if (*(int *)(puVar29 + 0xe) <= (int)lVar30) {
                  iVar7 = *(int *)(puVar29 + 0xe) + -1;
                }
                memcpy(puVar3,puVar10,(long)iVar7);
                puVar3[iVar7] = 0;
              }
              puVar29[0xc] = puVar4 + 0x10;
              if (*param_1 < param_1[1]) {
                *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar29;
                *param_1 = *param_1 + 1;
              }
            }
            iVar14 = iVar14 + 1;
          }
        }
        plVar32 = plVar32 + 1;
      } while (plVar32 != plVar31);
    }
    if (*param_1 < 2) {
      return;
    }
    lVar30 = *(long *)(param_1 + 2);
    uVar22 = 0;
    uVar24 = *param_1 - 1;
    do {
      if ((int)uVar24 <= (int)uVar22) {
        return;
      }
      lVar17 = *(long *)(lVar30 + (ulong)uVar22 * 8);
      uVar21 = (ulong)uVar22;
      uVar23 = (ulong)uVar24;
      uVar15 = uVar21;
      uVar24 = uVar22;
      do {
        lVar25 = lVar30 + uVar15 * 8;
        lVar27 = *(long *)(lVar25 + 8);
        if (*(int *)(lVar17 + 0x3c) == *(int *)(lVar27 + 0x3c)) {
          if (((*(byte *)(lVar17 + 0x48) >> 3 & 1) == 0) ||
             ((*(byte *)(lVar27 + 0x48) >> 3 & 1) != 0)) goto LAB_03686c50;
LAB_03686cb4:
          uVar24 = (uint)uVar15;
          *(long *)(lVar25 + 8) = lVar17;
          *(long *)(lVar30 + uVar15 * 8) = lVar27;
        }
        else {
          if (*(int *)(lVar17 + 0x58) != *(int *)(lVar27 + 0x58)) {
            if (*(int *)(lVar27 + 0x58) <= *(int *)(lVar17 + 0x58)) goto LAB_03686c50;
            goto LAB_03686cb4;
          }
          if (*(int *)(lVar27 + 0x3c) <= *(int *)(lVar17 + 0x3c)) goto LAB_03686cb4;
LAB_03686c50:
          lVar17 = lVar27;
        }
        uVar15 = uVar15 + 1;
      } while (uVar23 != uVar15);
      if ((int)uVar24 <= (int)uVar22) {
        return;
      }
      lVar17 = *(long *)(lVar30 + (ulong)uVar24 * 8);
      uVar15 = (ulong)uVar24;
      uVar22 = uVar24;
      do {
        lVar25 = lVar30 + uVar15 * 8;
        lVar27 = *(long *)(lVar25 + -8);
        if (*(int *)(lVar17 + 0x3c) == *(int *)(lVar27 + 0x3c)) {
          if (((*(byte *)(lVar17 + 0x48) >> 3 & 1) != 0) ||
             ((*(byte *)(lVar27 + 0x48) >> 3 & 1) == 0)) goto LAB_03686ce0;
LAB_03686d44:
          uVar22 = (uint)uVar15;
          *(long *)(lVar25 + -8) = lVar17;
          *(long *)(lVar30 + uVar15 * 8) = lVar27;
        }
        else {
          if (*(int *)(lVar17 + 0x58) != *(int *)(lVar27 + 0x58)) {
            if (*(int *)(lVar17 + 0x58) < *(int *)(lVar27 + 0x58)) goto LAB_03686ce0;
            goto LAB_03686d44;
          }
          if (*(int *)(lVar17 + 0x3c) < *(int *)(lVar27 + 0x3c)) goto LAB_03686d44;
LAB_03686ce0:
          lVar17 = lVar27;
        }
        uVar15 = uVar15 - 1;
      } while ((long)uVar21 < (long)uVar15);
      if (uVar22 == uVar24) {
        return;
      }
    } while( true );
  }
  local_d0._4_4_ = 0;
  local_c8 = (undefined8 *)0x0;
  local_b0 = &local_a8;
  local_a8 = &local_a0;
  local_c0 = &local_b0;
  local_a0 = &local_98;
  local_98 = 0;
  if (local_90 != (undefined8 *)0x0) {
    local_d0._4_4_ = 4;
    local_c8 = local_90;
  }
  local_d0._0_4_ = 0;
  ppppuStack_b8 = local_c0;
  local_160[0] = FUN_0376f3e0();
  ppppuVar11 = local_c0;
  lVar17 = *(long *)PTR_DAT_04bb4960;
  if (((lVar17 != 0) &&
      (uVar24 = (local_160[0] & 0xffff) - (uint)*(ushort *)(lVar17 + 0x7f8),
      uVar24 < *(uint *)(lVar17 + 0x7d8))) &&
     (puVar18 = *(uint **)(*(long *)(lVar17 + 0x7e0) + (long)(int)uVar24 * 8),
     puVar18 != (uint *)0x0)) {
    uVar24 = *puVar18;
    if (uVar24 == 0 || puVar18 == (uint *)(ulong)uVar24) {
LAB_03686e50:
      uVar22 = 0;
    }
    else {
      puVar20 = (uint *)((long)puVar18 - (long)(ulong)uVar24);
      if (((*puVar20 == 0) || (uVar24 = puVar20[1], uVar24 == 0)) ||
         ((ulong)(ushort)puVar20[2] == 0)) goto LAB_03686e50;
      lVar17 = 0xc;
      if (*(char *)((long)puVar20 + 10) != '\0') {
        lVar17 = 0x1c;
      }
      lVar17 = (long)puVar20 + lVar17 + (ulong)(ushort)puVar20[2] * 8;
      uVar22 = 0;
      if (lVar17 != 0) {
        uVar22 = 0;
        if ((ulong)uVar24 != 0) {
          uVar22 = (uint)((ulong)((long)puVar18 - lVar17) / (ulong)uVar24);
        }
        if (*puVar20 <= uVar22) {
          uVar22 = 0xffffffff;
        }
        if ((*(uint *)PTR_DAT_04bc3970 <= uVar22) ||
           (uVar8 = *(ushort *)(*(long *)(PTR_DAT_04bc3970 + 8) + (long)(int)uVar22 * 2),
           uVar22 = (uint)uVar8, 0x14 < uVar8)) goto LAB_03686e50;
      }
    }
    if ((int)local_d0 < local_d0._4_4_) {
      if (local_c0 != (undefined8 ****)0x0) {
        local_c0 = (undefined8 ****)*local_c0;
      }
      *(uint *)ppppuVar11 = uVar22;
      if ((int)local_d0 < local_d0._4_4_) {
        local_c8[(int)local_d0] = ppppuVar11;
        local_d0._0_4_ = (int)local_d0 + 1;
      }
    }
    ppppuVar11 = local_c0;
    puVar2 = PTR_DAT_04bc3980;
    puVar1 = PTR_DAT_04bc3978;
    if (*puVar18 == 0) {
LAB_03686f90:
      uVar24 = 0;
    }
    else {
      cVar26 = *PTR_DAT_04bc3978;
      do {
        if (cVar26 == '\0') {
          cVar26 = '\x01';
          *(undefined8 *)puVar2 = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
          *puVar1 = 1;
          *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
        }
        else {
          uVar24 = *(uint *)(puVar2 + 0x24);
          if (-1 < (int)uVar24) {
            if (((byte *)((ulong)uVar24 + (long)puVar18) == (byte *)0x0) ||
               (bVar13 = *(byte *)((ulong)uVar24 + (long)puVar18), uVar24 = (uint)bVar13,
               0x14 < bVar13)) goto LAB_03686f90;
            goto LAB_03686f94;
          }
          if (uVar24 != 0xffffffff) goto LAB_03686f90;
        }
        puVar20 = (uint *)(ulong)*puVar18;
        uVar24 = 0;
        if ((*puVar18 == 0) || (puVar18 == puVar20)) goto LAB_03686f94;
        lVar17 = 0xc;
        if (*(char *)((long)puVar18 + (10 - (long)puVar20)) != '\0') {
          lVar17 = 0x1c;
        }
        lVar17 = (long)puVar18 + (lVar17 - (long)puVar20);
        if (lVar17 == 0) goto LAB_03686f90;
        uVar15 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar20));
        *(undefined4 *)(puVar2 + 0x24) = 0xfffffffe;
        uVar24 = 0;
        if (uVar15 == 0) goto LAB_03686f94;
        piVar16 = (int *)(lVar17 + 4);
        while (piVar16[-1] != 0x3297a85e) {
          piVar16 = piVar16 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) {
            uVar24 = 0;
            goto LAB_03686f94;
          }
        }
        iVar7 = 0;
        if (*piVar16 != -1) {
          iVar7 = *piVar16;
        }
        *(int *)(puVar2 + 0x24) = iVar7;
      } while (*puVar18 != 0);
      uVar24 = 0;
    }
LAB_03686f94:
    if ((int)local_d0 < local_d0._4_4_) {
      if (local_c0 != (undefined8 ****)0x0) {
        local_c0 = (undefined8 ****)*local_c0;
      }
      *(uint *)ppppuVar11 = uVar24;
      if ((int)local_d0 < local_d0._4_4_) {
        local_c8[(int)local_d0] = ppppuVar11;
        local_d0._0_4_ = (int)local_d0 + 1;
      }
    }
    ppppuVar11 = local_c0;
    if (*puVar18 == 0) {
LAB_036870c0:
      uVar24 = 0;
    }
    else {
      cVar26 = *puVar1;
      do {
        if (cVar26 == '\0') {
          cVar26 = '\x01';
          *(undefined8 *)puVar2 = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
          *puVar1 = 1;
          *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
        }
        else {
          uVar24 = *(uint *)(puVar2 + 0x28);
          if (-1 < (int)uVar24) {
            if (((byte *)((ulong)uVar24 + (long)puVar18) == (byte *)0x0) ||
               (bVar13 = *(byte *)((ulong)uVar24 + (long)puVar18), uVar24 = (uint)bVar13,
               0x14 < bVar13)) goto LAB_036870c0;
            goto LAB_036870c4;
          }
          if (uVar24 != 0xffffffff) goto LAB_036870c0;
        }
        puVar20 = (uint *)(ulong)*puVar18;
        uVar24 = 0;
        if ((*puVar18 == 0) || (puVar18 == puVar20)) goto LAB_036870c4;
        lVar17 = 0xc;
        if (*(char *)((long)puVar18 + (10 - (long)puVar20)) != '\0') {
          lVar17 = 0x1c;
        }
        lVar17 = (long)puVar18 + (lVar17 - (long)puVar20);
        if (lVar17 == 0) goto LAB_036870c0;
        uVar15 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar20));
        *(undefined4 *)(puVar2 + 0x28) = 0xfffffffe;
        uVar24 = 0;
        if (uVar15 == 0) goto LAB_036870c4;
        piVar16 = (int *)(lVar17 + 4);
        while (piVar16[-1] != 0x202207b0) {
          piVar16 = piVar16 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) {
            uVar24 = 0;
            goto LAB_036870c4;
          }
        }
        iVar7 = 0;
        if (*piVar16 != -1) {
          iVar7 = *piVar16;
        }
        *(int *)(puVar2 + 0x28) = iVar7;
      } while (*puVar18 != 0);
      uVar24 = 0;
    }
LAB_036870c4:
    if ((int)local_d0 < local_d0._4_4_) {
      if (local_c0 != (undefined8 ****)0x0) {
        local_c0 = (undefined8 ****)*local_c0;
      }
      *(uint *)ppppuVar11 = uVar24;
      if ((int)local_d0 < local_d0._4_4_) {
        local_c8[(int)local_d0] = ppppuVar11;
        local_d0._0_4_ = (int)local_d0 + 1;
      }
    }
    ppppuVar11 = local_c0;
    if (*puVar18 == 0) {
LAB_036871f0:
      uVar24 = 0;
    }
    else {
      cVar26 = *puVar1;
      do {
        if (cVar26 == '\0') {
          cVar26 = '\x01';
          *(undefined8 *)puVar2 = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
          *puVar1 = 1;
          *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
        }
        else {
          uVar24 = *(uint *)(puVar2 + 0x2c);
          if (-1 < (int)uVar24) {
            if (((byte *)((ulong)uVar24 + (long)puVar18) == (byte *)0x0) ||
               (bVar13 = *(byte *)((ulong)uVar24 + (long)puVar18), uVar24 = (uint)bVar13,
               0x14 < bVar13)) goto LAB_036871f0;
            goto LAB_036871f4;
          }
          if (uVar24 != 0xffffffff) goto LAB_036871f0;
        }
        puVar20 = (uint *)(ulong)*puVar18;
        uVar24 = 0;
        if ((*puVar18 == 0) || (puVar18 == puVar20)) goto LAB_036871f4;
        lVar17 = 0xc;
        if (*(char *)((long)puVar18 + (10 - (long)puVar20)) != '\0') {
          lVar17 = 0x1c;
        }
        lVar17 = (long)puVar18 + (lVar17 - (long)puVar20);
        if (lVar17 == 0) goto LAB_036871f0;
        uVar15 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar20));
        *(undefined4 *)(puVar2 + 0x2c) = 0xfffffffe;
        uVar24 = 0;
        if (uVar15 == 0) goto LAB_036871f4;
        piVar16 = (int *)(lVar17 + 4);
        while (piVar16[-1] != -0x67619f2b) {
          piVar16 = piVar16 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) {
            uVar24 = 0;
            goto LAB_036871f4;
          }
        }
        iVar7 = 0;
        if (*piVar16 != -1) {
          iVar7 = *piVar16;
        }
        *(int *)(puVar2 + 0x2c) = iVar7;
      } while (*puVar18 != 0);
      uVar24 = 0;
    }
LAB_036871f4:
    if ((int)local_d0 < local_d0._4_4_) {
      if (local_c0 != (undefined8 ****)0x0) {
        local_c0 = (undefined8 ****)*local_c0;
      }
      *(uint *)ppppuVar11 = uVar24;
      if ((int)local_d0 < local_d0._4_4_) {
        local_c8[(int)local_d0] = ppppuVar11;
        local_d0._0_4_ = (int)local_d0 + 1;
      }
    }
  }
  local_d4 = 0;
  if (((iVar14 == -0x7975b8e8) || (iVar14 == -0x17df00c3)) || (iVar14 == -0x3e092032)) {
    if (*(int *)(lVar30 + 0xe0) != 0) {
      plVar32 = *(long **)(lVar30 + 0xe8);
      iVar14 = 0;
      plVar31 = plVar32 + *(int *)(lVar30 + 0xe0);
      puVar1 = PTR_DAT_04bb2ab0 + 0x10;
      puVar2 = PTR_DAT_04bb7648 + 0x10;
      puVar4 = PTR_DAT_04bb35a0 + 0x10;
      do {
        lVar17 = *plVar32;
        if ((((*(ushort *)(lVar17 + 0x114) >> 5 & 1) == 0) || (*(char *)(lVar30 + 0x1231) < '\0'))
           && (((*(ushort *)(lVar17 + 0x114) >> 6 & 1) == 0 &&
               (*(int *)(lVar17 + 0x3c) != 2 && *param_1 < 6)))) {
          local_135 = 0;
          local_148 = 0x10;
          local_f0 = 0x10;
          local_144[0] = 0;
          local_130 = 0;
          local_128 = 0;
          uStack_10c = 0;
          local_104 = 0;
          local_120 = 0;
          local_118 = 0;
          local_dd = 0;
          local_ec[0] = 0;
          local_158 = puVar1;
          local_150 = local_144;
          local_100 = puVar1;
          local_f8 = local_ec;
          uVar15 = FUN_03697750(local_160,lVar17,&local_d0);
          if ((uVar15 & 1) != 0) {
            if ((*(ushort *)(lVar17 + 0x114) & 0xa0) == 0) {
              local_124 = 2;
              lVar17 = *(long *)PTR_DAT_04bb46b0;
              if (lVar17 != 0) {
                local_170 = (undefined *)CONCAT44(local_170._4_4_,1);
                if ((((*(byte *)(lVar17 + 0x50d) ^ 0xff) & 6) == 0) &&
                   (lVar17 = (**(code **)(**(long **)(*(long *)(lVar17 + 0x10) + 0x188) + 0x38))(),
                   lVar17 != 0)) {
                  if ((*(long **)(lVar17 + 0x36620) == (long *)0x0) ||
                     (puVar29 = (undefined8 *)**(long **)(lVar17 + 0x36620),
                     puVar29 == (undefined8 *)0x0)) {
                    uVar15 = 0;
                  }
                  else {
                    uVar15 = (**(code **)*puVar29)();
                    uVar15 = uVar15 & 0xffffffff;
                  }
                  local_168 = (ushort)local_160[0];
                  local_170 = puVar2;
                  uVar21 = FUN_029066e0(*(long *)(lVar17 + 0x36608) + *(long *)(lVar17 + 0x36600),
                                        &local_170);
                  if ((((uVar15 & 1) != 0) && (*(long *)(lVar17 + 0x36620) != 0)) &&
                     (puVar29 = *(undefined8 **)(*(long *)(lVar17 + 0x36620) + 8),
                     puVar29 != (undefined8 *)0x0)) {
                    (**(code **)*puVar29)();
                  }
                  uVar8 = (ushort)local_160[0];
                  uVar15 = (ulong)(ushort)local_160[0];
                  uVar24 = local_160[0] & 0xffff;
                  if ((uVar21 & 1) != 0) {
                    if (*(long **)(lVar17 + 0x36658) == (long *)0x0) {
                      uVar15 = 0;
                    }
                    else {
                      puVar29 = (undefined8 *)**(long **)(lVar17 + 0x36658);
                      uVar15 = 0;
                      if (puVar29 != (undefined8 *)0x0) {
                        uVar15 = (**(code **)*puVar29)();
                      }
                    }
                    local_124 = (uint)(uVar24 !=
                                      *(ushort *)
                                       (*(long *)(lVar17 + 0x36640) + *(long *)(lVar17 + 0x36638) +
                                       0x48b0));
                    if ((uVar15 & 1) != 0) {
                      lVar17 = *(long *)(lVar17 + 0x36658);
joined_r0x036877d4:
                      if (lVar17 != 0) {
                        if (*(undefined8 **)(lVar17 + 8) != (undefined8 *)0x0) {
                          (**(code **)**(undefined8 **)(lVar17 + 8))();
                        }
                        goto LAB_0368777c;
                      }
                    }
LAB_036877d8:
                    local_118 = local_118 | 1;
                    goto LAB_036873b0;
                  }
                  lVar17 = *(long *)PTR_DAT_04bb46b0;
                  if (lVar17 != 0) {
                    local_170 = (undefined *)CONCAT44(local_170._4_4_,1);
                    if (((((*(byte *)(lVar17 + 0x50d) ^ 0xff) & 6) == 0) &&
                        (lVar17 = (**(code **)(**(long **)(*(long *)(lVar17 + 0x10) + 0x188) + 0x38)
                                  )(), uVar8 < 500)) && (lVar17 != 0)) {
                      lVar17 = lVar17 + uVar15 * 0x2d48;
                      if (*(long **)(lVar17 + 0x4cc70) == (long *)0x0) {
                        uVar15 = 0;
                      }
                      else {
                        puVar29 = (undefined8 *)**(long **)(lVar17 + 0x4cc70);
                        uVar15 = 0;
                        if (puVar29 != (undefined8 *)0x0) {
                          uVar15 = (**(code **)*puVar29)();
                        }
                      }
                      puVar5 = (ushort *)(*(long *)(lVar17 + 0x4cc58) + *(long *)(lVar17 + 0x4cc50))
                      ;
                      local_124 = (uint)((*puVar5 & 1) == 0 && puVar5[2] != 0xffff);
                      if ((uVar15 & 1) != 0) {
                        lVar17 = *(long *)(lVar17 + 0x4cc70);
                        goto joined_r0x036877d4;
                      }
                      goto LAB_036877d8;
                    }
                  }
                }
LAB_0368777c:
                local_118 = local_118 | 1;
                if (local_124 != 2) goto LAB_036873b0;
              }
            }
            else {
              local_124 = iVar14 + 2;
              iVar14 = iVar14 + 1;
              local_118 = local_118 & 0xfe | 0x10;
LAB_036873b0:
              if (*param_1 < param_1[1]) {
                puVar29 = *(undefined8 **)(param_1 + 4);
                if (puVar29 != (undefined8 *)0x0) {
                  *(undefined8 *)(param_1 + 4) = *puVar29;
                }
                puVar3 = (undefined1 *)((long)puVar29 + 0x1c);
                *(undefined1 *)((long)puVar29 + 0x2b) = 0;
                *(ushort *)puVar29 = (ushort)local_160[0];
                *(undefined4 *)(puVar29 + 3) = 0x10;
                puVar29[1] = puVar4;
                puVar29[2] = puVar3;
                (**(code **)(local_158 + 0x18))(&local_158);
                puVar10 = local_150;
                if (puVar3 != local_150) {
                  (**(code **)(local_158 + 0x18))(&local_158);
                  lVar17 = 0;
                  do {
                    if (local_150[lVar17] == '\0') goto LAB_036874f0;
                    if (local_150[lVar17 + 1] == '\0') {
                      lVar17 = lVar17 + 1;
                      goto LAB_036874f0;
                    }
                    if (local_150[lVar17 + 2] == '\0') {
                      lVar17 = lVar17 + 2;
                      goto LAB_036874f0;
                    }
                    lVar17 = lVar17 + 3;
                  } while (lVar17 != 0x80001);
                  lVar17 = 0;
LAB_036874f0:
                  iVar7 = (int)lVar17;
                  if (*(int *)(puVar29 + 3) <= (int)lVar17) {
                    iVar7 = *(int *)(puVar29 + 3) + -1;
                  }
                  memcpy(puVar3,puVar10,(long)iVar7);
                  puVar3[iVar7] = 0;
                }
                puVar9 = PTR_DAT_04bb2ab0;
                puVar3 = (undefined1 *)((long)puVar29 + 0x74);
                *(undefined1 *)((long)puVar29 + 0x83) = 0;
                puVar29[1] = puVar9 + 0x10;
                puVar29[6] = CONCAT44(iStack_12c,local_130);
                puVar29[7] = CONCAT44(local_124,local_128);
                puVar29[8] = local_120;
                puVar29[9] = CONCAT71(uStack_117,local_118);
                puVar29[10] = CONCAT44(uStack_10c,local_110);
                puVar29[0xb] = CONCAT44(local_104,local_108);
                *(undefined4 *)(puVar29 + 0xe) = 0x10;
                puVar29[0xc] = PTR_DAT_04bb35a0 + 0x10;
                puVar29[0xd] = puVar3;
                (**(code **)(local_100 + 0x18))(&local_100);
                puVar10 = local_f8;
                if (puVar3 != local_f8) {
                  (**(code **)(local_100 + 0x18))(&local_100);
                  lVar17 = 0;
                  do {
                    if (local_f8[lVar17] == '\0') goto LAB_036875dc;
                    if (local_f8[lVar17 + 1] == '\0') {
                      lVar17 = lVar17 + 1;
                      goto LAB_036875dc;
                    }
                    if (local_f8[lVar17 + 2] == '\0') {
                      lVar17 = lVar17 + 2;
                      goto LAB_036875dc;
                    }
                    lVar17 = lVar17 + 3;
                  } while (lVar17 != 0x80001);
                  lVar17 = 0;
LAB_036875dc:
                  iVar7 = (int)lVar17;
                  if (*(int *)(puVar29 + 0xe) <= (int)lVar17) {
                    iVar7 = *(int *)(puVar29 + 0xe) + -1;
                  }
                  memcpy(puVar3,puVar10,(long)iVar7);
                  puVar3[iVar7] = 0;
                }
                puVar29[0xc] = puVar9 + 0x10;
                if (*param_1 < param_1[1]) {
                  *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar29;
                  *param_1 = *param_1 + 1;
                }
              }
            }
          }
        }
        plVar32 = plVar32 + 1;
      } while (plVar32 != plVar31);
    }
    plVar32 = (long *)PTR_DAT_04bb2720;
    if (1 < *param_1) {
      lVar17 = *(long *)(param_1 + 2);
      uVar22 = 0;
      uVar24 = *param_1 - 1;
      do {
        if ((int)uVar24 <= (int)uVar22) break;
        lVar25 = *(long *)(lVar17 + (ulong)uVar22 * 8);
        uVar15 = (ulong)uVar22;
        if ((uVar24 - uVar22 & 1) == 0) {
          uVar21 = uVar15;
        }
        else {
          uVar21 = uVar15 + 1;
          lVar27 = *(long *)(lVar17 + uVar21 * 8);
          if (*(int *)(lVar25 + 0x3c) < *(int *)(lVar27 + 0x3c)) {
            lVar25 = lVar27;
          }
          else {
            *(long *)(lVar17 + uVar21 * 8) = lVar25;
            *(long *)(lVar17 + uVar15 * 8) = lVar27;
          }
        }
        uVar23 = (ulong)uVar24;
        uVar24 = uVar22;
        if (~uVar15 + uVar23 != 0) {
          plVar31 = (long *)(lVar17 + 8 + uVar21 * 8);
          do {
            lVar27 = *plVar31;
            if (*(int *)(lVar25 + 0x3c) < *(int *)(lVar27 + 0x3c)) {
              lVar25 = lVar27;
            }
            else {
              plVar31[-1] = lVar27;
              *plVar31 = lVar25;
              uVar24 = (uint)uVar21;
            }
            lVar27 = plVar31[1];
            if (*(int *)(lVar25 + 0x3c) < *(int *)(lVar27 + 0x3c)) {
              lVar25 = lVar27;
            }
            else {
              uVar24 = (uint)uVar21 + 1;
              *plVar31 = lVar27;
              plVar31[1] = lVar25;
            }
            uVar21 = uVar21 + 2;
            plVar31 = plVar31 + 2;
          } while (uVar23 != uVar21);
        }
        if ((int)uVar24 <= (int)uVar22) break;
        lVar25 = *(long *)(lVar17 + (ulong)uVar24 * 8);
        uVar21 = (ulong)uVar24;
        uVar22 = uVar24;
        do {
          lVar27 = lVar17 + uVar21 * 8;
          lVar28 = *(long *)(lVar27 + -8);
          if (*(int *)(lVar25 + 0x3c) < *(int *)(lVar28 + 0x3c)) {
            uVar22 = (uint)uVar21;
            *(long *)(lVar27 + -8) = lVar25;
            *(long *)(lVar17 + uVar21 * 8) = lVar28;
          }
          else {
            lVar25 = lVar28;
          }
          uVar21 = uVar21 - 1;
        } while ((long)uVar15 < (long)uVar21);
      } while (uVar22 != uVar24);
    }
  }
  else {
    if (DAT_05ac0a90 == iVar14) {
      lVar17 = 0;
    }
    else if (DAT_05ac0aa0 == iVar14) {
      lVar17 = 1;
    }
    else if (DAT_05ac0ab0 == iVar14) {
      lVar17 = 2;
    }
    else if (DAT_05ac0ac0 == iVar14) {
      lVar17 = 3;
    }
    else if (DAT_05ac0ad0 == iVar14) {
      lVar17 = 4;
    }
    else if (DAT_05ac0ae0 == iVar14) {
      lVar17 = 5;
    }
    else if (DAT_05ac0af0 == iVar14) {
      lVar17 = 6;
    }
    else if (DAT_05ac0b00 == iVar14) {
      lVar17 = 7;
    }
    else if (DAT_05ac0b10 == iVar14) {
      lVar17 = 8;
    }
    else {
      if (DAT_05ac0b20 != iVar14) goto LAB_03687e50;
      lVar17 = 9;
    }
    local_174 = 0;
    local_d4 = (&DAT_05ac0a98)[lVar17 * 4];
    if (*(int *)(lVar30 + 0xe0) != 0) {
      iVar14 = 0;
      plVar31 = *(long **)(lVar30 + 0xe8);
      plVar6 = plVar31 + *(int *)(lVar30 + 0xe0);
      puVar1 = PTR_DAT_04bb2ab0 + 0x10;
      puVar2 = PTR_DAT_04bb35a0 + 0x10;
      do {
        lVar17 = *plVar31;
        if ((((*(ushort *)(lVar17 + 0x114) & 0x60) == 0) && (*(int *)(lVar17 + 0xe8) == local_d4))
           && (*(int *)(lVar17 + 0x3c) != 2)) {
          local_148 = 0x10;
          local_135 = 0;
          local_144[0] = 0;
          local_130 = 0;
          local_128 = 0;
          uStack_10c = 0;
          local_104 = 0;
          local_f0 = 0x10;
          local_dd = 0;
          local_ec[0] = 0;
          local_120 = 0;
          local_118 = 0;
          local_158 = puVar1;
          local_150 = local_144;
          local_100 = puVar1;
          local_f8 = local_ec;
          uVar15 = FUN_03697750(local_160,lVar17,&local_d0);
          if (((uVar15 & 1) != 0) && (lVar25 = *(long *)PTR_DAT_04bb46b0, lVar25 != 0)) {
            uVar8 = *(ushort *)(lVar17 + 0x38);
            local_170 = (undefined *)CONCAT44(local_170._4_4_,1);
            if ((((*(byte *)(lVar25 + 0x50d) ^ 0xff) & 6) == 0) &&
               ((lVar17 = (**(code **)(**(long **)(*(long *)(lVar25 + 0x10) + 0x188) + 0x38))(),
                uVar8 < 500 && (lVar17 != 0)))) {
              lVar17 = lVar17 + (ulong)uVar8 * 0x2d48;
              if ((*(long **)(lVar17 + 0x4cc38) == (long *)0x0) ||
                 (puVar29 = (undefined8 *)**(long **)(lVar17 + 0x4cc38),
                 puVar29 == (undefined8 *)0x0)) {
                uVar15 = 0;
              }
              else {
                uVar15 = (**(code **)*puVar29)();
                uVar15 = uVar15 & 0xffffffff;
              }
              bVar13 = FUN_028f41ac(*(long *)(lVar17 + 0x4cc20) + *(long *)(lVar17 + 0x4cc18));
              local_118 = local_118 & 0xfe | bVar13 & 1;
              if ((((uVar15 & 1) != 0) && (*(long *)(lVar17 + 0x4cc38) != 0)) &&
                 (puVar29 = *(undefined8 **)(*(long *)(lVar17 + 0x4cc38) + 8),
                 puVar29 != (undefined8 *)0x0)) {
                (**(code **)*puVar29)();
              }
            }
          }
          bVar12 = local_174 != local_128;
          local_174 = local_128;
          if (bVar12) {
            iVar14 = 0;
          }
          iStack_12c = iVar14;
          if (*param_1 < param_1[1]) {
            puVar29 = *(undefined8 **)(param_1 + 4);
            if (puVar29 != (undefined8 *)0x0) {
              *(undefined8 *)(param_1 + 4) = *puVar29;
            }
            puVar3 = (undefined1 *)((long)puVar29 + 0x1c);
            *(undefined1 *)((long)puVar29 + 0x2b) = 0;
            *(ushort *)puVar29 = (ushort)local_160[0];
            *(undefined4 *)(puVar29 + 3) = 0x10;
            puVar29[1] = puVar2;
            puVar29[2] = puVar3;
            (**(code **)(local_158 + 0x18))(&local_158);
            puVar10 = local_150;
            if (puVar3 != local_150) {
              (**(code **)(local_158 + 0x18))(&local_158);
              lVar17 = 0;
              do {
                if (local_150[lVar17] == '\0') goto LAB_03687cfc;
                if (local_150[lVar17 + 1] == '\0') {
                  lVar17 = lVar17 + 1;
                  goto LAB_03687cfc;
                }
                if (local_150[lVar17 + 2] == '\0') {
                  lVar17 = lVar17 + 2;
                  goto LAB_03687cfc;
                }
                lVar17 = lVar17 + 3;
              } while (lVar17 != 0x80001);
              lVar17 = 0;
LAB_03687cfc:
              iVar7 = (int)lVar17;
              if (*(int *)(puVar29 + 3) <= (int)lVar17) {
                iVar7 = *(int *)(puVar29 + 3) + -1;
              }
              memcpy(puVar3,puVar10,(long)iVar7);
              puVar3[iVar7] = 0;
            }
            puVar4 = PTR_DAT_04bb2ab0;
            puVar3 = (undefined1 *)((long)puVar29 + 0x74);
            *(undefined1 *)((long)puVar29 + 0x83) = 0;
            puVar29[1] = puVar4 + 0x10;
            puVar29[6] = CONCAT44(iStack_12c,local_130);
            puVar29[7] = CONCAT44(local_124,local_128);
            puVar29[8] = local_120;
            puVar29[9] = CONCAT71(uStack_117,local_118);
            puVar29[10] = CONCAT44(uStack_10c,local_110);
            puVar29[0xb] = CONCAT44(local_104,local_108);
            *(undefined4 *)(puVar29 + 0xe) = 0x10;
            puVar29[0xc] = PTR_DAT_04bb35a0 + 0x10;
            puVar29[0xd] = puVar3;
            (**(code **)(local_100 + 0x18))(&local_100);
            puVar10 = local_f8;
            if (puVar3 != local_f8) {
              (**(code **)(local_100 + 0x18))(&local_100);
              lVar17 = 0;
              do {
                if (local_f8[lVar17] == '\0') goto LAB_03687dec;
                if (local_f8[lVar17 + 1] == '\0') {
                  lVar17 = lVar17 + 1;
                  goto LAB_03687dec;
                }
                if (local_f8[lVar17 + 2] == '\0') {
                  lVar17 = lVar17 + 2;
                  goto LAB_03687dec;
                }
                lVar17 = lVar17 + 3;
              } while (lVar17 != 0x80001);
              lVar17 = 0;
LAB_03687dec:
              iVar7 = (int)lVar17;
              if (*(int *)(puVar29 + 0xe) <= (int)lVar17) {
                iVar7 = *(int *)(puVar29 + 0xe) + -1;
              }
              memcpy(puVar3,puVar10,(long)iVar7);
              puVar3[iVar7] = 0;
            }
            puVar29[0xc] = puVar4 + 0x10;
            if (*param_1 < param_1[1]) {
              *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar29;
              *param_1 = *param_1 + 1;
            }
          }
          iVar14 = iVar14 + 1;
          plVar32 = (long *)PTR_DAT_04bb2720;
        }
        plVar31 = plVar31 + 1;
      } while (plVar31 != plVar6);
    }
    if (1 < *param_1) {
      lVar17 = *(long *)(param_1 + 2);
      uVar22 = 0;
      uVar24 = *param_1 - 1;
      do {
        if ((int)uVar24 <= (int)uVar22) break;
        lVar25 = *(long *)(lVar17 + (ulong)uVar22 * 8);
        uVar21 = (ulong)uVar22;
        uVar23 = (ulong)uVar24;
        uVar15 = uVar21;
        uVar24 = uVar22;
        do {
          lVar27 = lVar17 + uVar15 * 8;
          lVar28 = *(long *)(lVar27 + 8);
          if (*(int *)(lVar25 + 0x3c) == *(int *)(lVar28 + 0x3c)) {
            if (((*(byte *)(lVar25 + 0x48) >> 3 & 1) != 0) &&
               ((*(byte *)(lVar28 + 0x48) >> 3 & 1) == 0)) goto LAB_03688230;
LAB_03688294:
            lVar25 = lVar28;
          }
          else {
            iVar14 = 0x7fffffff;
            if (*(int *)(lVar28 + 0x44) != 2) {
              iVar14 = *(int *)(lVar28 + 0x3c);
            }
            if ((*(int *)(lVar25 + 0x44) != 2) && (*(int *)(lVar25 + 0x3c) < iVar14))
            goto LAB_03688294;
LAB_03688230:
            uVar24 = (uint)uVar15;
            *(long *)(lVar27 + 8) = lVar25;
            *(long *)(lVar17 + uVar15 * 8) = lVar28;
          }
          uVar15 = uVar15 + 1;
        } while (uVar23 != uVar15);
        if ((int)uVar24 <= (int)uVar22) break;
        lVar25 = *(long *)(lVar17 + (ulong)uVar24 * 8);
        uVar15 = (ulong)uVar24;
        uVar22 = uVar24;
        do {
          lVar27 = lVar17 + uVar15 * 8;
          lVar28 = *(long *)(lVar27 + -8);
          if (*(int *)(lVar25 + 0x3c) == *(int *)(lVar28 + 0x3c)) {
            if (((*(byte *)(lVar25 + 0x48) >> 3 & 1) == 0) &&
               ((*(byte *)(lVar28 + 0x48) >> 3 & 1) != 0)) goto LAB_03688320;
LAB_036882c0:
            lVar25 = lVar28;
          }
          else {
            iVar14 = 0x7fffffff;
            if (*(int *)(lVar28 + 0x44) != 2) {
              iVar14 = *(int *)(lVar28 + 0x3c);
            }
            if ((*(int *)(lVar25 + 0x44) == 2) || (iVar14 <= *(int *)(lVar25 + 0x3c)))
            goto LAB_036882c0;
LAB_03688320:
            uVar22 = (uint)uVar15;
            *(long *)(lVar27 + -8) = lVar25;
            *(long *)(lVar17 + uVar15 * 8) = lVar28;
          }
          uVar15 = uVar15 - 1;
        } while ((long)uVar21 < (long)uVar15);
      } while (uVar22 != uVar24);
    }
  }
LAB_03687e50:
  if (*(int *)(lVar30 + 0xe0) != 0) {
    plVar31 = *(long **)(lVar30 + 0xe8);
    plVar6 = plVar31 + *(int *)(lVar30 + 0xe0);
    puVar1 = PTR_DAT_04bb2ab0 + 0x10;
    puVar2 = PTR_DAT_04bb35a0 + 0x10;
    do {
      puVar29 = &DAT_055c04a0;
      lVar30 = *plVar31;
      if (((*(ushort *)(lVar30 + 0x114) & 0x60) == 0) && (*(int *)(lVar30 + 0x3c) == 2)) {
        local_135 = 0;
        local_148 = 0x10;
        local_f0 = 0x10;
        local_144[0] = 0;
        local_130 = 0;
        local_128 = 0;
        uStack_10c = 0;
        local_104 = 0;
        local_120 = 0;
        local_118 = 0;
        local_dd = 0;
        local_ec[0] = 0;
        local_158 = puVar1;
        local_150 = local_144;
        local_100 = puVar1;
        local_f8 = local_ec;
        uVar15 = FUN_03697750(local_160,lVar30,&local_d0);
        if ((uVar15 & 1) != 0) {
          local_124 = 0xffffffff;
          lVar30 = *plVar32;
          if ((lVar30 != 0) && (*(long *)(lVar30 + 0x330) != 0)) {
            puVar19 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar30 + 0x338));
            iVar14 = FUN_006bd550(*puVar19,0);
            puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar14 != 0x758f7eaf) {
              puVar19 = puVar29;
            }
            puVar29 = puVar19;
          }
          uStack_10c = 2;
          if (*(int *)(puVar29 + 7) != -0x3e092032) {
            uStack_10c = (uint)(*(int *)(puVar29 + 7) == -0x7975b8e8);
          }
          if (*param_1 < param_1[1]) {
            puVar29 = *(undefined8 **)(param_1 + 4);
            if (puVar29 != (undefined8 *)0x0) {
              *(undefined8 *)(param_1 + 4) = *puVar29;
            }
            puVar3 = (undefined1 *)((long)puVar29 + 0x1c);
            *(undefined1 *)((long)puVar29 + 0x2b) = 0;
            *(ushort *)puVar29 = (ushort)local_160[0];
            *(undefined4 *)(puVar29 + 3) = 0x10;
            puVar29[1] = puVar2;
            puVar29[2] = puVar3;
            (**(code **)(local_158 + 0x18))(&local_158);
            puVar10 = local_150;
            if (puVar3 != local_150) {
              (**(code **)(local_158 + 0x18))(&local_158);
              lVar30 = 0;
              do {
                if (local_150[lVar30] == '\0') goto LAB_0368806c;
                if (local_150[lVar30 + 1] == '\0') {
                  lVar30 = lVar30 + 1;
                  goto LAB_0368806c;
                }
                if (local_150[lVar30 + 2] == '\0') {
                  lVar30 = lVar30 + 2;
                  goto LAB_0368806c;
                }
                lVar30 = lVar30 + 3;
              } while (lVar30 != 0x80001);
              lVar30 = 0;
LAB_0368806c:
              iVar14 = (int)lVar30;
              if (*(int *)(puVar29 + 3) <= (int)lVar30) {
                iVar14 = *(int *)(puVar29 + 3) + -1;
              }
              memcpy(puVar3,puVar10,(long)iVar14);
              puVar3[iVar14] = 0;
            }
            puVar4 = PTR_DAT_04bb2ab0;
            puVar3 = (undefined1 *)((long)puVar29 + 0x74);
            *(undefined1 *)((long)puVar29 + 0x83) = 0;
            puVar29[1] = puVar4 + 0x10;
            puVar29[6] = CONCAT44(iStack_12c,local_130);
            puVar29[7] = CONCAT44(local_124,local_128);
            puVar29[8] = local_120;
            puVar29[9] = CONCAT71(uStack_117,local_118);
            puVar29[10] = CONCAT44(uStack_10c,local_110);
            puVar29[0xb] = CONCAT44(local_104,local_108);
            *(undefined4 *)(puVar29 + 0xe) = 0x10;
            puVar29[0xc] = PTR_DAT_04bb35a0 + 0x10;
            puVar29[0xd] = puVar3;
            (**(code **)(local_100 + 0x18))(&local_100);
            puVar10 = local_f8;
            if (puVar3 != local_f8) {
              (**(code **)(local_100 + 0x18))(&local_100);
              lVar30 = 0;
              do {
                if (local_f8[lVar30] == '\0') goto LAB_0368815c;
                if (local_f8[lVar30 + 1] == '\0') {
                  lVar30 = lVar30 + 1;
                  goto LAB_0368815c;
                }
                if (local_f8[lVar30 + 2] == '\0') {
                  lVar30 = lVar30 + 2;
                  goto LAB_0368815c;
                }
                lVar30 = lVar30 + 3;
              } while (lVar30 != 0x80001);
              lVar30 = 0;
LAB_0368815c:
              iVar14 = (int)lVar30;
              if (*(int *)(puVar29 + 0xe) <= (int)lVar30) {
                iVar14 = *(int *)(puVar29 + 0xe) + -1;
              }
              memcpy(puVar3,puVar10,(long)iVar14);
              puVar3[iVar14] = 0;
            }
            puVar29[0xc] = puVar4 + 0x10;
            plVar32 = (long *)PTR_DAT_04bb2720;
            if (*param_1 < param_1[1]) {
              *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar29;
              *param_1 = *param_1 + 1;
            }
          }
        }
      }
      plVar31 = plVar31 + 1;
    } while (plVar31 != plVar6);
  }
  return;
}

