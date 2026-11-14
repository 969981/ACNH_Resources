
/* WARNING: Removing unreachable block (ram,0x01529890) */
/* WARNING: Removing unreachable block (ram,0x015296a4) */
/* WARNING: Removing unreachable block (ram,0x015296cc) */
/* WARNING: Removing unreachable block (ram,0x015298b8) */
/* WARNING: Removing unreachable block (ram,0x01529548) */
/* WARNING: Removing unreachable block (ram,0x01529580) */

undefined4 FUN_015281a0(long param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  char *pcVar15;
  uint uVar16;
  uint *puVar17;
  ushort uVar18;
  uint *puVar19;
  char *pcVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  long lVar23;
  long lVar24;
  int *piVar25;
  undefined *local_170;
  undefined2 local_168;
  undefined2 local_166;
  undefined4 local_164;
  uint *local_160;
  uint local_158;
  undefined4 uStack_154;
  char *local_150;
  undefined *local_148;
  char *local_140;
  undefined8 local_138;
  undefined1 local_b5;
  undefined *local_b0;
  undefined1 *local_a8;
  int local_a0;
  undefined1 local_9c [31];
  undefined1 local_7d;
  undefined *local_78;
  undefined2 local_70;
  byte bStack_6e;
  undefined1 uStack_6d;
  undefined4 uStack_6c;
  long local_68;
  
  puVar5 = PTR_DAT_04bc0510;
  puVar1 = PTR_DAT_04bb43c0;
  if (*(int *)(param_1 + 0x50) == 3) goto LAB_01529754;
  pbVar2 = (byte *)(param_1 + 0x129e);
  local_168 = *(undefined2 *)(param_1 + 0x129c);
  local_160 = (uint *)0x0;
  local_170 = PTR_DAT_04bc0510 + 0x10;
  lVar23 = param_1 + 0x129c;
  local_166 = *(undefined2 *)pbVar2;
  local_164 = *(undefined4 *)(param_1 + 0x12a0);
  lVar24 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_168);
  if (*(long *)puVar1 != 0) {
    lVar24 = *(long *)(lVar24 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar24 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar24 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(lVar23);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if (uVar6 < *(uint *)(lVar24 + 0x1d8)) {
        puVar17 = *(uint **)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar6 * 8);
        if (puVar17 != (uint *)0x0) {
          local_160 = puVar17;
        }
      }
    }
  }
  uVar7 = FUN_01ad78cc(&local_170);
  local_148 = (undefined *)CONCAT44(local_148._4_4_,0x12);
  if (local_160 != (uint *)0x0) {
    uVar6 = *local_160;
    uVar18 = 0;
    if ((uVar6 != 0) && (local_160 != (uint *)(ulong)uVar6)) {
      puVar17 = (uint *)((long)local_160 - (long)(ulong)uVar6);
      uVar18 = 0;
      if (*puVar17 != 0) {
        uVar6 = puVar17[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
          lVar24 = 0xc;
          if (*(char *)((long)puVar17 + 10) != '\0') {
            lVar24 = 0x1c;
          }
          lVar24 = (long)puVar17 + lVar24 + (ulong)(ushort)puVar17[2] * 8;
          if (lVar24 != 0) {
            uVar16 = 0;
            if ((ulong)uVar6 != 0) {
              uVar16 = (uint)((ulong)((long)local_160 - lVar24) / (ulong)uVar6);
            }
            if (*puVar17 <= uVar16) {
              uVar16 = 0xffffffff;
            }
            if ((uVar16 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar18 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar16 * 2),
               uVar18 < 0xbd)) goto LAB_01528348;
          }
        }
        uVar18 = 0;
      }
    }
LAB_01528348:
    if (uVar18 != 0x12) {
      uVar6 = *local_160;
      uVar16 = 0;
      if ((uVar6 != 0) && (local_160 != (uint *)(ulong)uVar6)) {
        puVar17 = (uint *)((long)local_160 - (long)(ulong)uVar6);
        uVar16 = 0;
        if (*puVar17 != 0) {
          uVar6 = puVar17[1];
          if ((uVar6 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
            lVar24 = 0xc;
            if (*(char *)((long)puVar17 + 10) != '\0') {
              lVar24 = 0x1c;
            }
            lVar24 = (long)puVar17 + lVar24 + (ulong)(ushort)puVar17[2] * 8;
            if (lVar24 != 0) {
              uVar16 = 0;
              if ((ulong)uVar6 != 0) {
                uVar16 = (uint)((ulong)((long)local_160 - lVar24) / (ulong)uVar6);
              }
              if (*puVar17 <= uVar16) {
                uVar16 = 0xffffffff;
              }
              if ((uVar16 < *(uint *)PTR_DAT_04bc00c8) &&
                 (uVar16 = (uint)*(ushort *)
                                  (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar16 * 2),
                 uVar16 < 0xbd)) goto LAB_015283e8;
            }
          }
          uVar16 = 0;
        }
      }
LAB_015283e8:
      local_148 = (undefined *)CONCAT44(local_148._4_4_,uVar16);
      if ((uVar16 & 0xfffffffd) == 0xa4) {
        local_78 = puVar5 + 0x10;
        bVar4 = *pbVar2;
        local_70 = *(undefined2 *)(param_1 + 0x129c);
        uStack_6d = *(undefined1 *)(param_1 + 0x129f);
        local_68 = 0;
        lVar24 = *(long *)puVar1;
        uStack_6c = *(undefined4 *)(param_1 + 0x12a0);
        bStack_6e = bVar4;
        uVar6 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar1 != 0) {
          lVar24 = *(long *)(lVar24 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar24 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            lVar24 = *(long *)PTR_DAT_04bc0428;
            uVar6 = FUN_0277d6c4(lVar23);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
            if (uVar6 < *(uint *)(lVar24 + 0x1d8)) {
              lVar24 = *(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar6 * 8);
              if (lVar24 != 0) {
                local_68 = lVar24;
              }
            }
          }
        }
        FUN_01adf970(&local_148,&local_78);
        pcVar15 = *(char **)(param_1 + 0x280);
        (**(code **)(local_148 + 0x18))(&local_148);
        pcVar20 = local_140;
        if (pcVar15 != local_140) {
          (**(code **)(local_148 + 0x18))(&local_148);
          lVar24 = 0;
          do {
            if (local_140[lVar24] == '\0') goto LAB_01528c30;
            if (local_140[lVar24 + 1] == '\0') {
              lVar24 = lVar24 + 1;
              goto LAB_01528c30;
            }
            if (local_140[lVar24 + 2] == '\0') {
              lVar24 = lVar24 + 2;
              goto LAB_01528c30;
            }
            lVar24 = lVar24 + 3;
          } while (lVar24 != 0x80001);
          lVar24 = 0;
LAB_01528c30:
          iVar8 = (int)lVar24;
          if (*(int *)(param_1 + 0x288) <= (int)lVar24) {
            iVar8 = *(int *)(param_1 + 0x288) + -1;
          }
          memcpy(pcVar15,pcVar20,(long)iVar8);
          pcVar15[iVar8] = '\0';
          bVar4 = bStack_6e;
        }
        *(undefined4 *)(param_1 + 0x10d8) = 0;
        if ((bVar4 >> 3 & 1) == 0) {
          local_b5 = 0;
          local_138._4_4_ = (uint)((ulong)local_138 >> 0x20) & 0xffffff00;
          local_138 = (uint *)CONCAT44(local_138._4_4_,0x80);
          local_a0 = 0x20;
          local_140 = (char *)((long)&local_138 + 4);
          local_a8 = local_9c;
          local_7d = 0;
          local_148 = PTR_DAT_04bb2d88 + 0x10;
          local_9c[0] = 0;
          local_b0 = PTR_DAT_04bb2028 + 0x10;
          uVar6 = FUN_01afceb4(&local_78);
          pcVar20 = local_140;
          if (uVar6 < 2) {
            pcVar15 = (&PTR_s_FtrArtEasel1x1_049a78a0)[uVar6];
          }
          else {
            pcVar15 = "";
          }
          if (local_140 != pcVar15) {
            lVar24 = 0;
            do {
              if (pcVar15[lVar24] == '\0') goto LAB_01528ebc;
              if (pcVar15[lVar24 + 1] == '\0') {
                lVar24 = lVar24 + 1;
                goto LAB_01528ebc;
              }
              if (pcVar15[lVar24 + 2] == '\0') {
                lVar24 = lVar24 + 2;
                goto LAB_01528ebc;
              }
              lVar24 = lVar24 + 3;
            } while (lVar24 != 0x80001);
            lVar24 = 0;
LAB_01528ebc:
            iVar8 = (int)lVar24;
            if ((int)local_138 <= (int)lVar24) {
              iVar8 = (int)local_138 + -1;
            }
            memcpy(local_140,pcVar15,(long)iVar8);
            pcVar20[iVar8] = '\0';
          }
          puVar21 = local_a8;
          (**(code **)(DAT_0520f248 + 0x18))(&DAT_0520f248);
          puVar22 = DAT_0520f250;
          if (puVar21 != DAT_0520f250) {
            (**(code **)(DAT_0520f248 + 0x18))(&DAT_0520f248);
            lVar24 = 0;
            do {
              if (DAT_0520f250[lVar24] == '\0') goto LAB_01528ffc;
              if (DAT_0520f250[lVar24 + 1] == '\0') goto LAB_01528ff0;
              if (DAT_0520f250[lVar24 + 2] == '\0') goto LAB_01528ff8;
              lVar24 = lVar24 + 3;
            } while (lVar24 != 0x80001);
            goto LAB_01528fe8;
          }
          goto LAB_01529024;
        }
        goto LAB_01529030;
      }
      if (local_160 == (uint *)0x0) goto LAB_01528d54;
      uVar6 = *local_160;
      uVar16 = 0;
      if ((uVar6 != 0) && (local_160 != (uint *)(ulong)uVar6)) {
        puVar17 = (uint *)((long)local_160 - (long)(ulong)uVar6);
        uVar16 = 0;
        if (*puVar17 != 0) {
          uVar6 = puVar17[1];
          if ((uVar6 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
            lVar24 = 0xc;
            if (*(char *)((long)puVar17 + 10) != '\0') {
              lVar24 = 0x1c;
            }
            lVar24 = (long)puVar17 + lVar24 + (ulong)(ushort)puVar17[2] * 8;
            if (lVar24 != 0) {
              uVar16 = 0;
              if ((ulong)uVar6 != 0) {
                uVar16 = (uint)((ulong)((long)local_160 - lVar24) / (ulong)uVar6);
              }
              if (*puVar17 <= uVar16) {
                uVar16 = 0xffffffff;
              }
              if ((uVar16 < *(uint *)PTR_DAT_04bc00c8) &&
                 (uVar16 = (uint)*(ushort *)
                                  (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar16 * 2),
                 uVar16 < 0xbd)) goto LAB_01528494;
            }
          }
          uVar16 = 0;
        }
      }
LAB_01528494:
      local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar16);
      if (uVar16 == 0x56) {
        local_148 = puVar5 + 0x10;
        local_140 = *(char **)(param_1 + 0x129c);
        local_138 = (uint *)0x0;
        lVar24 = *(long *)puVar1;
        uVar6 = FUN_0277d6c4(&local_140);
        if (*(long *)puVar1 != 0) {
          lVar24 = *(long *)(lVar24 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar24 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            lVar24 = *(long *)PTR_DAT_04bc0428;
            uVar6 = FUN_0277d6c4(lVar23);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
            if (uVar6 < *(uint *)(lVar24 + 0x1d8)) {
              puVar17 = *(uint **)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar6 * 8);
              if (puVar17 != (uint *)0x0) {
                local_138 = puVar17;
              }
            }
          }
        }
        FUN_01adf970(&local_78,&local_148);
        pcVar15 = *(char **)(param_1 + 0x280);
        (**(code **)(local_78 + 0x18))(&local_78);
        pcVar20 = (char *)CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT12(bStack_6e,local_70)));
        if (pcVar15 != pcVar20) {
          (**(code **)(local_78 + 0x18))(&local_78);
          lVar11 = CONCAT44(uStack_6c,CONCAT13(uStack_6d,CONCAT12(bStack_6e,local_70)));
          lVar24 = 0;
          do {
            if (*(char *)(lVar11 + lVar24) == '\0') goto LAB_01528d24;
            lVar14 = lVar11 + lVar24;
            if (*(char *)(lVar14 + 1) == '\0') goto LAB_01528c24;
            if (*(char *)(lVar14 + 2) == '\0') goto LAB_01528d20;
            lVar24 = lVar24 + 3;
          } while (lVar24 != 0x80001);
          goto LAB_01528a38;
        }
        goto LAB_01528d4c;
      }
      local_78._0_4_ = 0;
      uVar6 = *local_160;
      if ((uVar6 != 0) && (local_160 != (uint *)(ulong)uVar6)) {
        puVar17 = (uint *)((long)local_160 - (long)(ulong)uVar6);
        local_78._0_4_ = 0;
        if (*puVar17 != 0) {
          uVar6 = puVar17[1];
          if ((uVar6 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
            lVar24 = 0xc;
            if (*(char *)((long)puVar17 + 10) != '\0') {
              lVar24 = 0x1c;
            }
            lVar24 = (long)puVar17 + lVar24 + (ulong)(ushort)puVar17[2] * 8;
            if (lVar24 != 0) {
              uVar16 = 0;
              if ((ulong)uVar6 != 0) {
                uVar16 = (uint)((ulong)((long)local_160 - lVar24) / (ulong)uVar6);
              }
              if (*puVar17 <= uVar16) {
                uVar16 = 0xffffffff;
              }
              if ((uVar16 < *(uint *)PTR_DAT_04bc00c8) &&
                 (local_78._0_4_ =
                       (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar16 * 2),
                 (uint)local_78 < 0xbd)) goto LAB_0152853c;
            }
          }
          local_78._0_4_ = 0;
        }
      }
LAB_0152853c:
      if ((uint)local_78 != 0x74) {
        if (local_160 == (uint *)0x0) {
          uVar6 = 0xbc;
        }
        else {
          uVar16 = *local_160;
          uVar6 = 0;
          if ((uVar16 != 0) && (local_160 != (uint *)(ulong)uVar16)) {
            puVar17 = (uint *)((long)local_160 - (long)(ulong)uVar16);
            uVar6 = 0;
            if (*puVar17 != 0) {
              uVar6 = puVar17[1];
              if ((uVar6 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
                lVar24 = 0xc;
                if (*(char *)((long)puVar17 + 10) != '\0') {
                  lVar24 = 0x1c;
                }
                lVar24 = (long)puVar17 + lVar24 + (ulong)(ushort)puVar17[2] * 8;
                if (lVar24 != 0) {
                  uVar16 = 0;
                  if ((ulong)uVar6 != 0) {
                    uVar16 = (uint)((ulong)((long)local_160 - lVar24) / (ulong)uVar6);
                  }
                  if (*puVar17 <= uVar16) {
                    uVar16 = 0xffffffff;
                  }
                  if ((uVar16 < *(uint *)PTR_DAT_04bc00c8) &&
                     (uVar6 = (uint)*(ushort *)
                                     (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar16 * 2),
                     uVar6 < 0xbd)) goto LAB_01528d60;
                }
              }
              uVar6 = 0;
            }
          }
        }
        goto LAB_01528d60;
      }
      local_148 = puVar5 + 0x10;
      bVar4 = *pbVar2;
      local_138 = (uint *)0x0;
      lVar24 = *(long *)puVar1;
      local_140 = *(char **)(param_1 + 0x129c);
      uVar6 = FUN_0277d6c4(&local_140);
      if (*(long *)puVar1 == 0) {
LAB_01528ba4:
        local_78 = (undefined *)CONCAT44(local_78._4_4_,0x74);
        local_158 = 0xbc;
      }
      else {
        lVar24 = *(long *)(lVar24 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
        if ((*(uint *)(lVar24 + 0x1d8) <= uVar6) ||
           (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_01528ba4;
        lVar24 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(lVar23);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
        if ((*(uint *)(lVar24 + 0x1d8) <= uVar6) ||
           (puVar17 = *(uint **)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar6 * 8),
           puVar17 == (uint *)0x0)) goto LAB_01528ba4;
        local_158 = 0;
        local_78 = (undefined *)CONCAT44(local_78._4_4_,0x74);
        uVar6 = *puVar17;
        local_138 = puVar17;
        if ((uVar6 != 0) && (puVar17 != (uint *)(ulong)uVar6)) {
          puVar19 = (uint *)((long)puVar17 - (long)(ulong)uVar6);
          local_158 = 0;
          if (*puVar19 != 0) {
            uVar6 = puVar19[1];
            if ((uVar6 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
              lVar24 = 0xc;
              if (*(char *)((long)puVar19 + 10) != '\0') {
                lVar24 = 0x1c;
              }
              lVar24 = (long)puVar19 + lVar24 + (ulong)(ushort)puVar19[2] * 8;
              if (lVar24 != 0) {
                uVar16 = 0;
                if ((ulong)uVar6 != 0) {
                  uVar16 = (uint)((ulong)((long)puVar17 - lVar24) / (ulong)uVar6);
                }
                if (*puVar19 <= uVar16) {
                  uVar16 = 0xffffffff;
                }
                if ((uVar16 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_158 = (uint)*(ushort *)
                                       (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar16 * 2),
                   local_158 < 0xbd)) goto LAB_01528bb0;
              }
            }
            local_158 = 0;
          }
        }
      }
LAB_01528bb0:
      if (local_158 != (uint)local_78) goto LAB_01529030;
      if ((bVar4 >> 3 & 1) == 0) {
        if (((DAT_0532a970 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_0532a970), iVar8 != 0)) {
          DAT_0532a960 = PTR_DAT_04bb2020 + 0x10;
          DAT_0532a968 = "FtrBromideFrame";
          __cxa_guard_release(&DAT_0532a970);
        }
        pcVar20 = *(char **)(param_1 + 0x280);
        if (pcVar20 != DAT_0532a968) {
          lVar24 = 0;
          do {
            pcVar15 = DAT_0532a968;
            if (DAT_0532a968[lVar24] == '\0') goto LAB_0152993c;
            if (DAT_0532a968[lVar24 + 1] == '\0') goto LAB_01529930;
            if (DAT_0532a968[lVar24 + 2] == '\0') goto LAB_01529938;
            lVar24 = lVar24 + 3;
          } while (lVar24 != 0x80001);
          goto LAB_01529920;
        }
      }
      else {
        if (((DAT_0532a988 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_0532a988), iVar8 != 0)) {
          DAT_0532a978 = PTR_DAT_04bb2020 + 0x10;
          DAT_0532a980 = "FtrBromideFrameWall";
          __cxa_guard_release(&DAT_0532a988);
        }
        pcVar20 = *(char **)(param_1 + 0x280);
        if (pcVar20 != DAT_0532a980) {
          lVar24 = 0;
          do {
            pcVar15 = DAT_0532a980;
            if (DAT_0532a980[lVar24] == '\0') goto LAB_0152993c;
            if (DAT_0532a980[lVar24 + 1] == '\0') goto LAB_01529930;
            if (DAT_0532a980[lVar24 + 2] == '\0') goto LAB_01529938;
            lVar24 = lVar24 + 3;
          } while (lVar24 != 0x80001);
LAB_01529920:
          lVar24 = 0;
          goto LAB_0152993c;
        }
      }
      goto LAB_01529964;
    }
    local_78 = puVar5 + 0x10;
    bVar4 = *pbVar2;
    local_70 = *(undefined2 *)(param_1 + 0x129c);
    uStack_6d = *(undefined1 *)(param_1 + 0x129f);
    local_68 = 0;
    lVar24 = *(long *)puVar1;
    uStack_6c = *(undefined4 *)(param_1 + 0x12a0);
    bStack_6e = bVar4;
    uVar6 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar1 != 0) {
      lVar24 = *(long *)(lVar24 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar24 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar24 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(lVar23);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
        if (uVar6 < *(uint *)(lVar24 + 0x1d8)) {
          lVar24 = *(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar6 * 8);
          if (lVar24 != 0) {
            local_68 = lVar24;
          }
        }
      }
    }
    if ((bVar4 >> 3 & 1) == 0) goto switchD_01528da0_caseD_1;
    if ((*(byte *)(param_1 + 0x1298) >> 1 & 1) == 0) {
      FUN_01ada670(&local_148,&local_78);
      pcVar15 = *(char **)(param_1 + 0x280);
      (**(code **)(local_148 + 0x18))(&local_148);
      pcVar20 = local_140;
      if (pcVar15 != local_140) {
        (**(code **)(local_148 + 0x18))(&local_148);
        lVar24 = 0;
        do {
          if (local_140[lVar24] == '\0') goto LAB_01528dc4;
          if (local_140[lVar24 + 1] == '\0') {
            lVar24 = lVar24 + 1;
            goto LAB_01528dc4;
          }
          if (local_140[lVar24 + 2] == '\0') {
            lVar24 = lVar24 + 2;
            goto LAB_01528dc4;
          }
          lVar24 = lVar24 + 3;
        } while (lVar24 != 0x80001);
        lVar24 = 0;
LAB_01528dc4:
        iVar8 = (int)lVar24;
        if (*(int *)(param_1 + 0x288) <= (int)lVar24) {
          iVar8 = *(int *)(param_1 + 0x288) + -1;
        }
        memcpy(pcVar15,pcVar20,(long)iVar8);
        pcVar15[iVar8] = '\0';
      }
      *(undefined4 *)(param_1 + 0x10d8) = 0;
      local_140 = (char *)((long)&local_138 + 4);
      local_a8 = local_9c;
      local_b5 = 0;
      local_a0 = 0x20;
      local_148 = PTR_DAT_04bb2d88 + 0x10;
      local_138 = (uint *)CONCAT35(local_138._5_3_,0x80);
      local_7d = 0;
      local_9c[0] = 0;
      local_b0 = PTR_DAT_04bb2028 + 0x10;
      FUN_01adf970(&local_158,&local_78);
      pcVar15 = local_140;
      (**(code **)(CONCAT44(uStack_154,local_158) + 0x18))(&local_158);
      pcVar20 = local_150;
      if (pcVar15 != local_150) {
        (**(code **)(CONCAT44(uStack_154,local_158) + 0x18))(&local_158);
        lVar24 = 0;
        do {
          if (local_150[lVar24] == '\0') goto LAB_01528f50;
          if (local_150[lVar24 + 1] == '\0') {
            lVar24 = lVar24 + 1;
            goto LAB_01528f50;
          }
          if (local_150[lVar24 + 2] == '\0') {
            lVar24 = lVar24 + 2;
            goto LAB_01528f50;
          }
          lVar24 = lVar24 + 3;
        } while (lVar24 != 0x80001);
        lVar24 = 0;
LAB_01528f50:
        iVar8 = (int)lVar24;
        if ((int)local_138 <= (int)lVar24) {
          iVar8 = (int)local_138 + -1;
        }
        memcpy(pcVar15,pcVar20,(long)iVar8);
        pcVar15[iVar8] = '\0';
      }
      puVar21 = local_a8;
      (**(code **)(DAT_0520f2d8 + 0x18))(&DAT_0520f2d8);
      puVar22 = DAT_0520f2e0;
      if (puVar21 != DAT_0520f2e0) {
        (**(code **)(DAT_0520f2d8 + 0x18))(&DAT_0520f2d8);
        lVar24 = 0;
        do {
          if (DAT_0520f2e0[lVar24] == '\0') goto LAB_01528ffc;
          if (DAT_0520f2e0[lVar24 + 1] == '\0') goto LAB_01528ff0;
          if (DAT_0520f2e0[lVar24 + 2] == '\0') goto LAB_01528ff8;
          lVar24 = lVar24 + 3;
        } while (lVar24 != 0x80001);
LAB_01528fe8:
        lVar24 = 0;
        goto LAB_01528ffc;
      }
      goto LAB_01529024;
    }
    FUN_01adf970(&local_148,&local_78);
    pcVar15 = *(char **)(param_1 + 0x280);
    (**(code **)(local_148 + 0x18))(&local_148);
    pcVar20 = local_140;
    if (pcVar15 != local_140) {
      (**(code **)(local_148 + 0x18))(&local_148);
      lVar24 = 0;
      do {
        if (local_140[lVar24] == '\0') goto LAB_01528d24;
        if (local_140[lVar24 + 1] == '\0') goto LAB_01528c24;
        if (local_140[lVar24 + 2] == '\0') goto LAB_01528d20;
        lVar24 = lVar24 + 3;
      } while (lVar24 != 0x80001);
LAB_01528a38:
      lVar24 = 0;
      goto LAB_01528d24;
    }
    goto LAB_01528d4c;
  }
LAB_01528d54:
  uVar6 = 0xbc;
LAB_01528d60:
  local_148 = (undefined *)CONCAT44(local_148._4_4_,0x75);
  local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar6);
  if (uVar6 == 0x75) {
    FUN_01529cd0(param_1);
  }
  else {
    switch(uVar7) {
    case 1:
switchD_01528da0_caseD_1:
      FUN_0152b770(param_1);
      break;
    default:
      if ((*(byte *)(param_1 + 0x1299) >> 1 & 1) == 0) {
        uVar13 = FUN_01ad6a30(&local_170,0x33);
        if ((uVar13 & 1) == 0) {
          uVar13 = FUN_01ad6a30(&local_170,0x49);
          if ((uVar13 & 1) == 0) {
            iVar8 = FUN_0277d6c4(&local_168);
            if (iVar8 == 0x396b) {
              FUN_0152d590(param_1);
            }
            else {
              FUN_01529b40(param_1);
            }
          }
          else {
            FUN_0152cf90(param_1);
          }
        }
        else {
          FUN_0152cc50(param_1);
        }
      }
      else if (*(long *)(param_1 + 0x1290) != 0) {
        FUN_01adf970(&local_148,&local_170);
        FUN_0152ca90(param_1,&local_148,0);
        (**(code **)(*(long *)(param_1 + 0x278) + 0x18))(param_1 + 0x278);
        local_140 = *(char **)(param_1 + 0x280);
        local_148 = PTR_DAT_04bb2020 + 0x10;
        FUN_0152cb70(param_1,&local_148);
        FUN_0178a1e0(*(undefined8 *)(param_1 + 0x1290),param_1,param_1 + 0x278,param_1 + 0xf88);
      }
      break;
    case 3:
    case 7:
      FUN_01529f40(param_1);
      break;
    case 4:
      FUN_0152a7e0(param_1);
      break;
    case 5:
      FUN_0152af50(param_1);
      break;
    case 6:
      FUN_0152b240(param_1);
      break;
    case 0xf:
      FUN_0152bd70(param_1);
      break;
    case 0x1b:
      FUN_0152c370(param_1);
      break;
    case 0x47:
      FUN_0152c890(param_1);
    }
  }
  goto LAB_01529030;
LAB_01529930:
  lVar24 = lVar24 + 1;
  goto LAB_0152993c;
LAB_01529938:
  lVar24 = lVar24 + 2;
LAB_0152993c:
  iVar8 = (int)lVar24;
  if (*(int *)(param_1 + 0x288) <= (int)lVar24) {
    iVar8 = *(int *)(param_1 + 0x288) + -1;
  }
  memcpy(pcVar20,pcVar15,(long)iVar8);
  pcVar20[iVar8] = '\0';
LAB_01529964:
  *(undefined4 *)(param_1 + 0x10d8) = 0;
  FUN_01adf970(&local_78,&local_148);
  lVar24 = *(long *)(*(long *)(param_1 + 0x48) + 0x78);
  if (lVar24 != 0) {
    FUN_0074ed40(lVar24,&local_78,0);
  }
  goto LAB_01529030;
LAB_01528ff0:
  lVar24 = lVar24 + 1;
  goto LAB_01528ffc;
LAB_01528ff8:
  lVar24 = lVar24 + 2;
LAB_01528ffc:
  iVar8 = (int)lVar24;
  if (local_a0 <= (int)lVar24) {
    iVar8 = local_a0 + -1;
  }
  memcpy(puVar21,puVar22,(long)iVar8);
  puVar21[iVar8] = 0;
LAB_01529024:
  FUN_0152da00(param_1,&local_148);
  goto LAB_01529030;
LAB_01528c24:
  lVar24 = lVar24 + 1;
  goto LAB_01528d24;
LAB_01528d20:
  lVar24 = lVar24 + 2;
LAB_01528d24:
  iVar8 = (int)lVar24;
  if (*(int *)(param_1 + 0x288) <= (int)lVar24) {
    iVar8 = *(int *)(param_1 + 0x288) + -1;
  }
  memcpy(pcVar15,pcVar20,(long)iVar8);
  pcVar15[iVar8] = '\0';
LAB_01528d4c:
  *(undefined4 *)(param_1 + 0x10d8) = 0;
LAB_01529030:
  uVar6 = *(uint *)(param_1 + 0x1298);
  if ((uVar6 & 1) != 0) {
    local_b5 = 0;
    local_138._4_4_ = (uint)((ulong)local_138 >> 0x20) & 0xffffff00;
    local_138 = (uint *)CONCAT44(local_138._4_4_,0x80);
    local_a0 = 0x20;
    local_140 = (char *)((long)&local_138 + 4);
    local_a8 = local_9c;
    local_7d = 0;
    local_148 = PTR_DAT_04bb2d88 + 0x10;
    local_9c[0] = 0;
    local_b0 = PTR_DAT_04bb2028 + 0x10;
    uVar6 = FUN_01afccf0(&local_170,*(undefined4 *)(param_1 + 0x1404));
    pcVar20 = local_140;
    if (uVar6 < 6) {
      pcVar15 = (&PTR_s_FtrStandWallW1L2_049a7640)[uVar6];
    }
    else {
      pcVar15 = "";
    }
    if (local_140 != pcVar15) {
      lVar24 = 0;
      do {
        if (pcVar15[lVar24] == '\0') goto LAB_01529100;
        if (pcVar15[lVar24 + 1] == '\0') {
          lVar24 = lVar24 + 1;
          goto LAB_01529100;
        }
        if (pcVar15[lVar24 + 2] == '\0') {
          lVar24 = lVar24 + 2;
          goto LAB_01529100;
        }
        lVar24 = lVar24 + 3;
      } while (lVar24 != 0x80001);
      lVar24 = 0;
LAB_01529100:
      iVar8 = (int)lVar24;
      if ((int)local_138 <= (int)lVar24) {
        iVar8 = (int)local_138 + -1;
      }
      memcpy(local_140,pcVar15,(long)iVar8);
      pcVar20[iVar8] = '\0';
    }
    puVar21 = local_a8;
    (**(code **)(DAT_0520f2f8 + 0x18))(&DAT_0520f2f8);
    puVar22 = DAT_0520f300;
    if (puVar21 != DAT_0520f300) {
      (**(code **)(DAT_0520f2f8 + 0x18))(&DAT_0520f2f8);
      lVar24 = 0;
      do {
        if (DAT_0520f300[lVar24] == '\0') goto LAB_015291a0;
        if (DAT_0520f300[lVar24 + 1] == '\0') {
          lVar24 = lVar24 + 1;
          goto LAB_015291a0;
        }
        if (DAT_0520f300[lVar24 + 2] == '\0') {
          lVar24 = lVar24 + 2;
          goto LAB_015291a0;
        }
        lVar24 = lVar24 + 3;
      } while (lVar24 != 0x80001);
      lVar24 = 0;
LAB_015291a0:
      iVar8 = (int)lVar24;
      if (local_a0 <= (int)lVar24) {
        iVar8 = local_a0 + -1;
      }
      memcpy(puVar21,puVar22,(long)iVar8);
      puVar21[iVar8] = 0;
    }
    FUN_0152da00(param_1,&local_148);
    uVar6 = *(uint *)(param_1 + 0x1298);
  }
  if ((uVar6 >> 8 & 1) != 0) {
    local_b5 = 0;
    local_138._4_4_ = (uint)((ulong)local_138 >> 0x20) & 0xffffff00;
    local_138 = (uint *)CONCAT44(local_138._4_4_,0x80);
    local_148 = PTR_DAT_04bb2d88 + 0x10;
    local_7d = 0;
    local_9c[0] = 0;
    local_a0 = 0x20;
    local_140 = (char *)((long)&local_138 + 4);
    local_a8 = local_9c;
    local_b0 = PTR_DAT_04bb2028 + 0x10;
    if (*(int *)(param_1 + 0x1408) == 0x342f) {
      uVar6 = FUN_01aee3b4(&local_170);
      local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar6);
      if (9 < uVar6) goto LAB_01529260;
      lVar24 = *(long *)(&DAT_04175a70 + (long)(int)uVar6 * 8);
    }
    else {
LAB_01529260:
      lVar24 = 2;
    }
    pcVar20 = local_140;
    pcVar15 = (&PTR_s_FtrStandCeilingW1L1_049a76b0)[lVar24];
    if (local_140 != pcVar15) {
      lVar24 = 0;
      do {
        if (pcVar15[lVar24] == '\0') goto LAB_015292c0;
        if (pcVar15[lVar24 + 1] == '\0') {
          lVar24 = lVar24 + 1;
          goto LAB_015292c0;
        }
        if (pcVar15[lVar24 + 2] == '\0') {
          lVar24 = lVar24 + 2;
          goto LAB_015292c0;
        }
        lVar24 = lVar24 + 3;
      } while (lVar24 != 0x80001);
      lVar24 = 0;
LAB_015292c0:
      iVar8 = (int)lVar24;
      if ((int)local_138 <= (int)lVar24) {
        iVar8 = (int)local_138 + -1;
      }
      memcpy(local_140,pcVar15,(long)iVar8);
      pcVar20[iVar8] = '\0';
    }
    puVar21 = local_a8;
    (**(code **)(DAT_0520f308 + 0x18))(&DAT_0520f308);
    puVar22 = DAT_0520f310;
    if (puVar21 != DAT_0520f310) {
      (**(code **)(DAT_0520f308 + 0x18))(&DAT_0520f308);
      lVar24 = 0;
      do {
        if (DAT_0520f310[lVar24] == '\0') goto LAB_01529360;
        if (DAT_0520f310[lVar24 + 1] == '\0') {
          lVar24 = lVar24 + 1;
          goto LAB_01529360;
        }
        if (DAT_0520f310[lVar24 + 2] == '\0') {
          lVar24 = lVar24 + 2;
          goto LAB_01529360;
        }
        lVar24 = lVar24 + 3;
      } while (lVar24 != 0x80001);
      lVar24 = 0;
LAB_01529360:
      iVar8 = (int)lVar24;
      if (local_a0 <= (int)lVar24) {
        iVar8 = local_a0 + -1;
      }
      memcpy(puVar21,puVar22,(long)iVar8);
      puVar21[iVar8] = 0;
    }
    FUN_0152da00(param_1,&local_148);
  }
  FUN_01afbe90(&local_148,&local_170);
  if (*local_140 != '\0') {
    lVar24 = *(long *)PTR_DAT_04bb2698;
    if (lVar24 == 0) {
      puVar12 = malloc(0xa8);
    }
    else {
      plVar10 = *(long **)(*(long *)(param_1 + 0x48) + 0x240);
      if (plVar10 == (long *)0x0) {
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar10 = (long *)(lVar24 + 8);
        if (lVar11 != 0) {
          plVar10 = (long *)(lVar11 + 0xa8);
        }
        plVar10 = (long *)*plVar10;
      }
      puVar12 = (undefined8 *)(**(code **)(*plVar10 + 0x30))(plVar10,0xa8,8);
    }
    *(undefined4 *)(puVar12 + 4) = 0x80;
    pcVar15 = (char *)((long)puVar12 + 0x24);
    *pcVar15 = '\0';
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar1 = PTR_DAT_04bb2d88 + 0x10;
    *(undefined1 *)((long)puVar12 + 0xa3) = 0;
    puVar12[2] = puVar1;
    puVar12[3] = pcVar15;
    (**(code **)(local_148 + 0x18))(&local_148);
    pcVar20 = local_140;
    if (pcVar15 != local_140) {
      (**(code **)(local_148 + 0x18))(&local_148);
      lVar24 = 0;
      do {
        if (local_140[lVar24] == '\0') goto LAB_015294ac;
        if (local_140[lVar24 + 1] == '\0') {
          lVar24 = lVar24 + 1;
          goto LAB_015294ac;
        }
        if (local_140[lVar24 + 2] == '\0') {
          lVar24 = lVar24 + 2;
          goto LAB_015294ac;
        }
        lVar24 = lVar24 + 3;
      } while (lVar24 != 0x80001);
      lVar24 = 0;
LAB_015294ac:
      iVar8 = (int)lVar24;
      if (*(int *)(puVar12 + 4) <= (int)lVar24) {
        iVar8 = *(int *)(puVar12 + 4) + -1;
      }
      memcpy(pcVar15,pcVar20,(long)iVar8);
      pcVar15[iVar8] = '\0';
    }
    lVar24 = *(long *)(param_1 + 0x12e0);
    plVar10 = (long *)((long)*(int *)(param_1 + 0x12f4) + (long)puVar12);
    *(long **)(param_1 + 0x12e0) = plVar10;
    *plVar10 = lVar24;
    plVar10[1] = param_1 + 0x12e0;
    if (lVar24 != 0) {
      *(long **)(lVar24 + 8) = plVar10;
    }
    *(int *)(param_1 + 0x12f0) = *(int *)(param_1 + 0x12f0) + 1;
  }
  lVar24 = *(long *)(*(long *)(param_1 + 0x48) + 0x78);
  if (lVar24 != 0) {
    FUN_0152dba0(lVar24,lVar23);
  }
  FUN_01adf970(&local_148,&local_170);
  FUN_00739320(param_1,&local_148);
  uVar13 = (ulong)local_148 >> 0x20;
  local_148 = (undefined *)(uVar13 << 0x20);
  if (**(char **)(param_1 + 0x318) == '\0') {
    local_148 = (undefined *)(uVar13 << 0x20);
    (**(code **)(*(long *)(param_1 + 0x310) + 0x10))((long *)(param_1 + 0x310),&DAT_0520f288);
    puVar3 = (undefined4 *)(param_1 + 0x10dc) + ((ulong)local_148 & 0xffffffff);
    if (0x11 < (uint)local_148) {
      puVar3 = (undefined4 *)(param_1 + 0x10dc);
    }
    *puVar3 = 0;
    if (local_160 != (uint *)0x0) goto LAB_015295b4;
LAB_0152963c:
    uVar16 = 0;
  }
  else {
    if (local_160 == (uint *)0x0) goto LAB_0152963c;
LAB_015295b4:
    uVar6 = *local_160;
    uVar16 = 0;
    if ((uVar6 != 0) && (local_160 != (uint *)(ulong)uVar6)) {
      puVar17 = (uint *)((long)local_160 - (long)(ulong)uVar6);
      uVar16 = 0;
      if (*puVar17 != 0) {
        uVar6 = puVar17[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
          lVar24 = 0xc;
          if (*(char *)((long)puVar17 + 10) != '\0') {
            lVar24 = 0x1c;
          }
          lVar24 = (long)puVar17 + lVar24 + (ulong)(ushort)puVar17[2] * 8;
          if (lVar24 != 0) {
            uVar16 = 0;
            if ((ulong)uVar6 != 0) {
              uVar16 = (uint)((ulong)((long)local_160 - lVar24) / (ulong)uVar6);
            }
            if (*puVar17 <= uVar16) {
              uVar16 = 0xffffffff;
            }
            if ((uVar16 < *(uint *)PTR_DAT_04bc0048) &&
               (uVar16 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar16 * 2),
               uVar16 < 0x52)) goto LAB_01529640;
          }
        }
        goto LAB_0152963c;
      }
    }
  }
LAB_01529640:
  local_148 = (undefined *)CONCAT44(local_148._4_4_,uVar16);
  if (uVar16 - 0x37 < 5) {
    local_b5 = 0;
    local_140 = (char *)((long)&local_138 + 4);
    local_138 = (uint *)CONCAT35(local_138._5_3_,0x80);
    local_148 = PTR_DAT_04bb2d88 + 0x10;
    uVar13 = FUN_01aea340(&local_170,&local_148);
    if ((uVar13 & 1) != 0) {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
      if (**(char **)(param_1 + 0x3b0) == '\0') {
        local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
        (**(code **)(*(long *)(param_1 + 0x3a8) + 0x10))((long *)(param_1 + 0x3a8),&local_148);
        uVar6 = (uint)local_78;
LAB_015296e0:
        puVar3 = (undefined4 *)(param_1 + 0x10dc) + uVar6;
        if (0x11 < uVar6) {
          puVar3 = (undefined4 *)(param_1 + 0x10dc);
        }
        *puVar3 = 0;
      }
    }
  }
  else if ((*(byte *)(param_1 + 0x1298) >> 2 & 1) != 0) {
    iVar8 = 0;
    do {
      piVar25 = (int *)((long)&DAT_053275f0 + (long)iVar8 * 0x138 + 4);
      if ((*piVar25 != 0xfffe) && (iVar9 = FUN_0277d6c4(lVar23), iVar9 == *piVar25)) {
        if (*(char *)(&DAT_05327698)[(long)iVar8 * 0x27] != '\0') {
          local_148 = (undefined *)CONCAT44(local_148._4_4_,1);
          if (**(char **)(param_1 + 0x3b0) == '\0') {
            local_148 = (undefined *)CONCAT44(local_148._4_4_,1);
            (**(code **)(*(long *)(param_1 + 0x3a8) + 0x10))
                      ((long *)(param_1 + 0x3a8),&DAT_05327690 + (long)iVar8 * 0x27);
            uVar6 = (uint)local_148;
            goto LAB_015296e0;
          }
        }
        break;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0x1f);
  }
  if (*(long *)(param_1 + 0x12e8) != param_1 + 0x12e0) {
    lVar24 = (long)*(int *)(param_1 + 0x12f4);
    lVar11 = (param_1 + 0x12e0) - lVar24;
    lVar23 = *(long *)(param_1 + 0x12e8) - lVar24;
    if (*(long *)(*(long *)(param_1 + 0x48) + 0x78) == 0) {
      do {
        lVar23 = *(long *)(lVar23 + lVar24 + 8) + -lVar24;
      } while (lVar23 != lVar11);
    }
    else {
      do {
        lVar14 = *(long *)(*(long *)(param_1 + 0x48) + 0x78);
        if (lVar14 != 0) {
          FUN_0074ed40(lVar14,lVar23 + 0x10,0);
        }
        lVar23 = *(long *)(lVar23 + lVar24 + 8) + -lVar24;
      } while (lVar23 != lVar11);
    }
  }
LAB_01529754:
  uVar7 = FUN_0073a69c(param_1);
  if (((*(int *)(param_1 + 0x50) != 3) && (**(char **)(param_1 + 0x1200) != '\0')) &&
     (lVar23 = *(long *)(*(long *)(param_1 + 0x48) + 0x78), lVar23 != 0)) {
    FUN_0074ed40(lVar23,param_1 + 0x11f8,0);
  }
  if ((((*(byte *)(param_1 + 0x1299) >> 1 & 1) != 0) && (*(long *)(param_1 + 0x1290) != 0)) &&
     (iVar8 = FUN_0178b150(*(long *)(param_1 + 0x1290),*(undefined8 *)(param_1 + 0x48)), iVar8 == 1)
     ) {
    uVar7 = 1;
  }
  return uVar7;
}

