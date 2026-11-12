
uint * FUN_0088a2d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  uint *puVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  void *pvVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  char *pcVar15;
  short *psVar16;
  uint *puVar17;
  ulong uVar18;
  int *piVar19;
  char *pcVar20;
  long lVar21;
  ulong uVar22;
  undefined *local_888;
  undefined1 auStack_880 [1876];
  uint local_12c;
  uint local_128;
  uint local_124;
  int local_120;
  uint local_118;
  uint local_114;
  undefined8 local_110;
  char *local_108;
  undefined4 local_100;
  char local_fc [63];
  undefined1 local_bd;
  uint local_b4;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  uint *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined **local_88;
  uint *puStack_80;
  
  psVar16 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  lVar9 = param_1;
  if (*psVar16 == 0) {
    local_110 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)((ulong)local_110 >> 0x20) < '\x05') {
      lVar9 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_110);
      local_888 = (undefined *)(lVar9 + -0x15180);
      lVar9 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_888);
      local_110 = (undefined *)lVar9;
    }
    psVar16 = (short *)&local_110;
    uVar22 = (ulong)local_110 >> 0x30;
    local_110._0_6_ = CONCAT24(5,(undefined4)local_110);
    local_110 = (undefined *)(CONCAT26((short)uVar22,(undefined6)local_110) & 0xff00ffffffffffff);
  }
  local_90 = *(undefined8 *)psVar16;
  FUN_0088a148(&local_98,lVar9,param_2);
  puVar6 = PTR_DAT_04bb43c0;
  lVar21 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(&local_98);
  lVar9 = *(long *)puVar6;
  if (lVar9 == 0) {
    return (uint *)0x0;
  }
  lVar21 = *(long *)(lVar21 + 0x57e58);
  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
  if (*(uint *)(lVar21 + 0x1d8) <= uVar7) {
    return (uint *)0x0;
  }
  if (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar7 * 8) == 0) {
    return (uint *)0x0;
  }
  local_a0 = (uint *)0x0;
  local_b0 = PTR_DAT_04bc0510 + 0x10;
  local_a8 = local_98;
  uStack_a4 = uStack_94;
  uVar7 = FUN_0277d6c4(&local_a8);
  if (*(long *)puVar6 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar7 = FUN_0277d6c4(&local_98);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
         (puVar14 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8),
         puVar14 != (uint *)0x0)) {
        uVar7 = *puVar14;
        local_b4 = 0;
        local_a0 = puVar14;
        if ((uVar7 == 0) || (puVar14 == (uint *)(ulong)uVar7)) goto LAB_0088a4e0;
        puVar17 = (uint *)((long)puVar14 - (long)(ulong)uVar7);
        local_b4 = 0;
        if (*puVar17 == 0) goto LAB_0088a4e0;
        uVar7 = puVar17[1];
        if ((uVar7 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar17 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar17 + lVar9 + (ulong)(ushort)puVar17[2] * 8;
          if (lVar9 != 0) {
            uVar8 = 0;
            if ((ulong)uVar7 != 0) {
              uVar8 = (uint)((ulong)((long)puVar14 - lVar9) / (ulong)uVar7);
            }
            if (*puVar17 <= uVar8) {
              uVar8 = 0xffffffff;
            }
            if ((uVar8 < *(uint *)PTR_DAT_04bc0068) &&
               (local_b4 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar8 * 2)
               , local_b4 < 0x13e)) goto LAB_0088a4e0;
          }
        }
      }
    }
  }
  local_b4 = 0;
LAB_0088a4e0:
  puVar6 = PTR_DAT_04bb57b8;
  uVar7 = *(uint *)(param_1 + 0x808);
  if ((0 < (int)uVar7) ||
     (((*(long *)(param_1 + 0x6f8) != 0 &&
       (puVar14 = *(uint **)(*(long *)(param_1 + 0x6f8) + 8), puVar14 != (uint *)0x0)) &&
      (uVar7 = *puVar14, 0 < (int)uVar7)))) {
    uVar22 = 0;
    puVar1 = PTR_DAT_04bb2f70 + 0x10;
    puVar2 = PTR_DAT_04bb2bc0 + 0x10;
    puVar3 = PTR_DAT_04bbfe60 + 0x10;
    ppuVar4 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    do {
      if ((int)*(uint *)(param_1 + 0x808) < 1) {
        if (((((*(long *)(param_1 + 0x6f8) != 0) &&
              (puVar14 = *(uint **)(*(long *)(param_1 + 0x6f8) + 8), puVar14 != (uint *)0x0)) &&
             ((*(uint *)(param_1 + 0x710) <= uVar22 ||
              (*(char *)(*(long *)(param_1 + 0x718) + uVar22) != '\0')))) &&
            ((uVar22 < *puVar14 && (puVar14[1] != 0)))) && ((ushort)puVar14[2] != 0)) {
          iVar13 = 0xc;
          if (*(char *)((long)puVar14 + 10) != '\0') {
            iVar13 = 0x1c;
          }
          puVar14 = (uint *)((ulong)(puVar14[1] * (int)uVar22 + (uint)(ushort)puVar14[2] * 8 +
                                    iVar13) + (long)puVar14);
          goto joined_r0x0088a788;
        }
      }
      else if (uVar22 < *(uint *)(param_1 + 0x808)) {
        uVar18 = uVar22 & 0xffffffff;
        if (*(uint *)(param_1 + 0x7f8) <= uVar22) {
          uVar18 = 0;
        }
        puVar14 = *(uint **)(*(long *)(param_1 + 0x800) + uVar18 * 8);
joined_r0x0088a788:
        if (puVar14 != (uint *)0x0) {
          uVar8 = *puVar14;
          if (uVar8 != 0) {
            cVar11 = *PTR_DAT_04bb57b0;
            do {
              if (cVar11 == '\0') {
                cVar11 = '\x01';
                *(undefined8 *)puVar6 = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
                uVar8 = *puVar14;
                *PTR_DAT_04bb57b0 = 1;
              }
              else {
                uVar12 = *(uint *)(puVar6 + 0x20);
                if (-1 < (int)uVar12) {
                  pcVar20 = (char *)((ulong)uVar12 + (long)puVar14);
                  goto LAB_0088a6bc;
                }
                if (uVar12 != 0xffffffff) break;
              }
              puVar17 = (uint *)(ulong)uVar8;
              pcVar20 = (char *)0x0;
              if ((puVar17 == (uint *)0x0) || (pcVar20 = (char *)0x0, puVar14 == puVar17))
              goto LAB_0088a6bc;
              lVar9 = 0xc;
              if (*(char *)((long)puVar14 + (10 - (long)puVar17)) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar14 + (lVar9 - (long)puVar17);
              pcVar20 = (char *)0x0;
              if (lVar9 == 0) goto LAB_0088a6bc;
              uVar18 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar17));
              *(undefined4 *)(puVar6 + 0x20) = 0xfffffffe;
              if (uVar18 == 0) break;
              piVar19 = (int *)(lVar9 + 4);
              while (piVar19[-1] != 0x46e66708) {
                piVar19 = piVar19 + 2;
                uVar18 = uVar18 - 1;
                if (uVar18 == 0) goto LAB_0088a6b8;
              }
              iVar13 = 0;
              if (*piVar19 != -1) {
                iVar13 = *piVar19;
              }
              *(int *)(puVar6 + 0x20) = iVar13;
              uVar8 = *puVar14;
              if (uVar8 == 0) break;
            } while( true );
          }
LAB_0088a6b8:
          pcVar20 = (char *)0x0;
LAB_0088a6bc:
          local_100 = 0x40;
          local_bd = 0;
          pcVar15 = *(char **)PTR_PTR_04bb5818;
          if (pcVar20 != (char *)0x0) {
            pcVar15 = pcVar20;
          }
          local_108 = local_fc;
          if (local_fc != pcVar15) {
            lVar9 = 0;
            do {
              if (pcVar15[lVar9] == '\0') {
LAB_0088a794:
                iVar13 = (int)lVar9;
joined_r0x0088a798:
                if (0x3f < iVar13) {
                  iVar13 = 0x3f;
                }
                goto LAB_0088a7a0;
              }
              if (pcVar15[lVar9 + 1] == '\0') {
                lVar9 = lVar9 + 1;
                goto LAB_0088a794;
              }
              if (pcVar15[lVar9 + 2] == '\0') {
                iVar13 = (int)lVar9 + 2;
                goto joined_r0x0088a798;
              }
              lVar9 = lVar9 + 3;
            } while (lVar9 != 0x80001);
            iVar13 = 0;
LAB_0088a7a0:
            local_110 = puVar1;
            memcpy(local_fc,pcVar15,(long)iVar13);
            local_fc[iVar13] = '\0';
          }
          local_114 = 0;
          uVar8 = 0;
          local_110 = puVar2;
          do {
            pcVar20 = "";
            if (uVar8 < 0x13e) {
              pcVar20 = *(char **)(PTR_DAT_04bb5820 + (ulong)uVar8 * 8 + 0x1298);
            }
            (**(code **)(local_110 + 0x18))(&local_110);
            if (pcVar20 == local_108) {
LAB_0088a88c:
              local_114 = uVar8;
              break;
            }
            if (*pcVar20 == *local_108) {
              if (*pcVar20 == '\0') goto LAB_0088a88c;
              lVar9 = 0x7fffe;
              pcVar15 = local_108;
              while( true ) {
                if (pcVar20[1] != pcVar15[1]) break;
                if (pcVar20[1] == '\0') goto LAB_0088a88c;
                if (pcVar20[2] != pcVar15[2]) break;
                if (pcVar20[2] == '\0') goto LAB_0088a88c;
                if ((lVar9 == 0) || (cVar11 = pcVar20[3], cVar11 != pcVar15[3])) break;
                lVar9 = lVar9 + -3;
                pcVar15 = pcVar15 + 3;
                pcVar20 = pcVar20 + 3;
                if (cVar11 == '\0') goto LAB_0088a88c;
              }
            }
            uVar12 = 0x13e;
            if ((int)uVar8 < 0x13e) {
              uVar12 = uVar8 + 1;
            }
            uVar8 = uVar12;
          } while (uVar12 != 0x13e);
          local_118 = local_114;
          if ((local_114 != 0) && (local_b4 == local_114)) {
            local_888 = puVar3;
            memset(auStack_880,0,0x754);
            uVar8 = nn::os::GetSystemTick();
            local_12c = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
            local_128 = (local_12c ^ local_12c >> 0x1e) * 0x6c078965 + 2;
            local_124 = (local_128 ^ local_128 >> 0x1e) * 0x6c078965 + 3;
            local_120 = (local_124 ^ local_124 >> 0x1e) * 0x6c078965 + 4;
            pvVar10 = (void *)(**(code **)(local_888 + 0x18))(&local_888);
            memset(pvVar10,0,0x754);
            pvVar10 = (void *)(**(code **)(local_888 + 0x18))(&local_888);
            memset(pvVar10,0,0x754);
            puStack_80 = &local_118;
            local_88 = &PTR_FUN_049ff4e8;
            FUN_008a1ba0(&local_888,&local_88);
            lVar9 = (**(code **)(local_888 + 0x20))(&local_888);
            uVar8 = FUN_0277d6c4(&local_98);
            if (((uVar8 >> 3 & 0x1fff) < 0x753) &&
               ((*(uint *)(lVar9 + (ulong)((uVar8 & 0xffff) >> 5) * 4) >> (ulong)(uVar8 & 0x1f) & 1)
                != 0)) {
              uVar8 = *puVar14;
              if (uVar8 != 0) {
                cVar11 = *PTR_DAT_04bb57b0;
                do {
                  if (cVar11 == '\0') {
                    cVar11 = '\x01';
                    *(undefined8 *)puVar6 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
                    uVar8 = *puVar14;
                    *PTR_DAT_04bb57b0 = 1;
                  }
                  else {
                    uVar12 = *(uint *)(puVar6 + 0x1c);
                    if (-1 < (int)uVar12) {
                      puVar17 = (uint *)((ulong)uVar12 + (long)puVar14);
                      goto LAB_0088a574;
                    }
                    if (uVar12 != 0xffffffff) break;
                  }
                  puVar5 = (uint *)(ulong)uVar8;
                  puVar17 = (uint *)0x0;
                  if ((puVar5 == (uint *)0x0) || (puVar17 = (uint *)0x0, puVar14 == puVar5))
                  goto LAB_0088a574;
                  lVar9 = 0xc;
                  if (*(char *)((long)puVar14 + (10 - (long)puVar5)) != '\0') {
                    lVar9 = 0x1c;
                  }
                  lVar9 = (long)puVar14 + (lVar9 - (long)puVar5);
                  puVar17 = (uint *)0x0;
                  if (lVar9 == 0) goto LAB_0088a574;
                  uVar18 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar5));
                  *(undefined4 *)(puVar6 + 0x1c) = 0xfffffffe;
                  if (uVar18 == 0) break;
                  piVar19 = (int *)(lVar9 + 4);
                  while (piVar19[-1] != -0x41d928f2) {
                    piVar19 = piVar19 + 2;
                    uVar18 = uVar18 - 1;
                    if (uVar18 == 0) goto LAB_0088a570;
                  }
                  iVar13 = 0;
                  if (*piVar19 != -1) {
                    iVar13 = *piVar19;
                  }
                  *(int *)(puVar6 + 0x1c) = iVar13;
                  uVar8 = *puVar14;
                  if (uVar8 == 0) break;
                } while( true );
              }
LAB_0088a570:
              puVar17 = (uint *)0x0;
LAB_0088a574:
              puStack_80 = (uint *)PTR_DAT_04c47d00;
              if (puVar17 != (uint *)0x0) {
                puStack_80 = puVar17;
              }
              local_88 = ppuVar4;
              uVar18 = FUN_0087c200(param_1,&local_88,&local_90,0);
              if ((uVar18 & 1) != 0) {
                return puVar14;
              }
            }
          }
        }
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar7);
  }
  return (uint *)0x0;
}

