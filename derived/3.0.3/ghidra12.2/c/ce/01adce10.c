
undefined8 FUN_01adce10(long param_1,char *param_2)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  char *pcVar7;
  uint *puVar8;
  uint uVar9;
  byte *pbVar10;
  uint *puVar11;
  undefined8 *puVar12;
  byte local_40 [4];
  uint local_3c;
  uint local_38;
  uint local_34;
  
  local_40[0] = 0;
  local_40[1] = 0;
  FUN_01adab50(param_1,local_40);
  local_3c = 0;
  do {
    if ((local_3c != 0) && (local_3c < 0xe)) {
      uVar9 = local_3c + 7;
      if (-1 < (int)local_3c) {
        uVar9 = local_3c;
      }
      if (((uint)((int)uVar9 >> 3) < 2) &&
         ((local_40[(uint)((int)uVar9 >> 3)] >> (ulong)(local_3c & 7) & 1) != 0)) {
        if (local_3c != 9) {
          return 0;
        }
        local_38 = local_3c;
        if ((DAT_05ab5ea8 == 0) || (local_34 = 9, (*(byte *)(DAT_05ab5ea8 + 0x1a71) >> 1 & 1) == 0))
        {
          puVar8 = *(uint **)(param_1 + 0x10);
          if (puVar8 == (uint *)0x0) {
            local_34 = 0x21;
          }
          else {
            uVar9 = *puVar8;
            local_34 = 0;
            if ((uVar9 != 0) && (puVar8 != (uint *)(ulong)uVar9)) {
              puVar11 = (uint *)((long)puVar8 - (long)(ulong)uVar9);
              local_34 = 0;
              if (*puVar11 != 0) {
                uVar9 = puVar11[1];
                if ((uVar9 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
                  lVar5 = 0xc;
                  if (*(char *)((long)puVar11 + 10) != '\0') {
                    lVar5 = 0x1c;
                  }
                  lVar5 = (long)puVar11 + lVar5 + (ulong)(ushort)puVar11[2] * 8;
                  if (lVar5 != 0) {
                    uVar1 = 0;
                    if ((ulong)uVar9 != 0) {
                      uVar1 = (uint)((ulong)((long)puVar8 - lVar5) / (ulong)uVar9);
                    }
                    if (*puVar11 <= uVar1) {
                      uVar1 = 0xffffffff;
                    }
                    if ((uVar1 < DAT_05326af0) &&
                       (local_34 = (uint)*(ushort *)(DAT_05326af8 + (long)(int)uVar1 * 2),
                       local_34 < 0xa2)) goto LAB_01adcf64;
                  }
                }
                local_34 = 0;
              }
            }
          }
LAB_01adcf64:
          if ((int)*(uint *)(DAT_0532a7a0 + 0x1c0) < 1) {
            if ((((*(long *)(DAT_0532a7a0 + 0xb0) != 0) &&
                 (puVar8 = *(uint **)(*(long *)(DAT_0532a7a0 + 0xb0) + 8), puVar8 != (uint *)0x0))
                && ((*(uint *)(DAT_0532a7a0 + 200) <= local_34 ||
                    (*(char *)(*(long *)(DAT_0532a7a0 + 0xd0) + (long)(int)local_34) != '\0')))) &&
               (((local_34 < *puVar8 && (puVar8[1] != 0)) && ((ushort)puVar8[2] != 0)))) {
              iVar4 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                iVar4 = 0x1c;
              }
              puVar8 = (uint *)((ulong)(puVar8[1] * local_34 + (uint)(ushort)puVar8[2] * 8 + iVar4)
                               + (long)puVar8);
              goto joined_r0x01add0ac;
            }
          }
          else if (local_34 < *(uint *)(DAT_0532a7a0 + 0x1c0)) {
            uVar9 = local_34;
            if (*(uint *)(DAT_0532a7a0 + 0x1b0) <= local_34) {
              uVar9 = 0;
            }
            puVar8 = *(uint **)(*(long *)(DAT_0532a7a0 + 0x1b8) + (ulong)uVar9 * 8);
joined_r0x01add0ac:
            if (puVar8 != (uint *)0x0) {
              puVar11 = (uint *)((long)puVar8 - (ulong)*puVar8);
              if (((*puVar8 != 0) && (puVar11 != (uint *)0x0)) &&
                 ((*puVar11 != 0 &&
                  ((uVar9 = puVar11[1], uVar9 != 0 && ((ulong)(ushort)puVar11[2] != 0)))))) {
                lVar5 = 0xc;
                if (*(char *)((long)puVar11 + 10) != '\0') {
                  lVar5 = 0x1c;
                }
                lVar5 = (long)puVar11 + lVar5 + (ulong)(ushort)puVar11[2] * 8;
                if (lVar5 != 0) {
                  uVar1 = 0;
                  if ((ulong)uVar9 != 0) {
                    uVar1 = (uint)((ulong)((long)puVar8 - lVar5) / (ulong)uVar9);
                  }
                  if (*puVar11 <= uVar1) {
                    uVar1 = 0xffffffff;
                  }
                  if ((uVar1 < *(uint *)PTR_DAT_04bc02c8) &&
                     (*(short *)(*(long *)(PTR_DAT_04bc02c8 + 8) + (long)(int)uVar1 * 2) == 0x12)) {
                    lVar5 = FUN_029156e0();
                    iVar4 = *(int *)(lVar5 + 0x38);
                    uVar6 = FUN_03777260(iVar4);
                    if (((uVar6 & 1) != 0) && (iVar4 != -0x21ba1d3a)) {
                      return 0;
                    }
                  }
                }
              }
            }
          }
        }
        if (DAT_04cd19d8 == 0) {
          pbVar10 = &DAT_0548e140;
LAB_01add110:
          if (*pbVar10 < 8) goto LAB_01add17c;
LAB_01add11c:
          if (DAT_0537d558 == (long *)0x0) {
LAB_01add174:
            pbVar10 = &DAT_0548e168;
            goto LAB_01add17c;
          }
          lVar5 = *DAT_0537d558;
          bVar3 = *(byte *)(lVar5 + 0x473);
          pbVar10 = PTR_DAT_04bb5038;
          if ((long)(char)bVar3 != 0xffffffffffffffff) {
            puVar8 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
            if (7 < bVar3) {
              puVar8 = (uint *)(lVar5 + 0x48);
            }
            if ((*puVar8 & 8) != 0) {
              pbVar10 = (byte *)(lVar5 + 0x471);
            }
          }
          uVar9 = (uint)*pbVar10;
          if (7 < *pbVar10) goto LAB_01add174;
        }
        else {
          pbVar10 = PTR_DAT_04bb32e0;
          if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
            pbVar10 = (byte *)(DAT_04cd19d8 + 0x158);
          }
          if (7 < *pbVar10) {
            if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
              pbVar10 = (byte *)(DAT_054f5738 + 0x11a5);
              goto LAB_01add110;
            }
            goto LAB_01add11c;
          }
LAB_01add17c:
          uVar9 = (uint)*pbVar10;
          if (7 < uVar9) {
            uVar9 = 0xff;
          }
        }
        if (DAT_054f5738 == 0) {
          if ((DAT_054f0960 & 1) == 0) {
            iVar4 = __cxa_guard_acquire(&DAT_054f0960);
            puVar12 = &DAT_054f0958;
            if (iVar4 != 0) {
              DAT_054f0958 = 0;
              __cxa_guard_release(&DAT_054f0960);
            }
          }
          else {
            puVar12 = &DAT_054f0958;
          }
        }
        else {
          puVar12 = (undefined8 *)(DAT_054f5738 + 0x204);
          if (uVar9 < 8) {
            puVar12 = puVar12 + uVar9;
          }
        }
        local_34 = 0x31;
        if ((*(uint *)((long)puVar12 + 4) >> 0x11 & 1) != 0) {
          puVar8 = *(uint **)(param_1 + 0x10);
          if (puVar8 == (uint *)0x0) {
            local_34 = 0x21;
          }
          else {
            uVar9 = *puVar8;
            local_34 = 0;
            if ((uVar9 != 0) && (puVar8 != (uint *)(ulong)uVar9)) {
              puVar11 = (uint *)((long)puVar8 - (long)(ulong)uVar9);
              local_34 = 0;
              if (*puVar11 != 0) {
                uVar9 = puVar11[1];
                if ((uVar9 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
                  lVar5 = 0xc;
                  if (*(char *)((long)puVar11 + 10) != '\0') {
                    lVar5 = 0x1c;
                  }
                  lVar5 = (long)puVar11 + lVar5 + (ulong)(ushort)puVar11[2] * 8;
                  if (lVar5 != 0) {
                    uVar1 = 0;
                    if ((ulong)uVar9 != 0) {
                      uVar1 = (uint)((ulong)((long)puVar8 - lVar5) / (ulong)uVar9);
                    }
                    if (*puVar11 <= uVar1) {
                      uVar1 = 0xffffffff;
                    }
                    if ((uVar1 < DAT_05326af0) &&
                       (local_34 = (uint)*(ushort *)(DAT_05326af8 + (long)(int)uVar1 * 2),
                       local_34 < 0xa2)) goto LAB_01add284;
                  }
                }
                local_34 = 0;
              }
            }
          }
LAB_01add284:
          if ((int)*(uint *)(DAT_0532a7a0 + 0x1c0) < 1) {
            if ((((*(long *)(DAT_0532a7a0 + 0xb0) != 0) &&
                 (puVar8 = *(uint **)(*(long *)(DAT_0532a7a0 + 0xb0) + 8), puVar8 != (uint *)0x0))
                && ((*(uint *)(DAT_0532a7a0 + 200) <= local_34 ||
                    (*(char *)(*(long *)(DAT_0532a7a0 + 0xd0) + (long)(int)local_34) != '\0')))) &&
               (((local_34 < *puVar8 && (puVar8[1] != 0)) && ((ushort)puVar8[2] != 0)))) {
              iVar4 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                iVar4 = 0x1c;
              }
              puVar8 = (uint *)((ulong)(puVar8[1] * local_34 + (uint)(ushort)puVar8[2] * 8 + iVar4)
                               + (long)puVar8);
              goto joined_r0x01add3a8;
            }
          }
          else if (local_34 < *(uint *)(DAT_0532a7a0 + 0x1c0)) {
            uVar9 = local_34;
            if (*(uint *)(DAT_0532a7a0 + 0x1b0) <= local_34) {
              uVar9 = 0;
            }
            puVar8 = *(uint **)(*(long *)(DAT_0532a7a0 + 0x1b8) + (ulong)uVar9 * 8);
joined_r0x01add3a8:
            if (puVar8 != (uint *)0x0) {
              puVar11 = (uint *)((long)puVar8 - (ulong)*puVar8);
              if (((*puVar8 != 0) && (puVar11 != (uint *)0x0)) &&
                 ((*puVar11 != 0 &&
                  ((uVar9 = puVar11[1], uVar9 != 0 && ((ulong)(ushort)puVar11[2] != 0)))))) {
                lVar5 = 0xc;
                if (*(char *)((long)puVar11 + 10) != '\0') {
                  lVar5 = 0x1c;
                }
                lVar5 = (long)puVar11 + lVar5 + (ulong)(ushort)puVar11[2] * 8;
                if (lVar5 != 0) {
                  uVar1 = 0;
                  if ((ulong)uVar9 != 0) {
                    uVar1 = (uint)((ulong)((long)puVar8 - lVar5) / (ulong)uVar9);
                  }
                  if (*puVar11 <= uVar1) {
                    uVar1 = 0xffffffff;
                  }
                  if ((uVar1 < *(uint *)PTR_DAT_04bc02c8) &&
                     (*(short *)(*(long *)(PTR_DAT_04bc02c8 + 8) + (long)(int)uVar1 * 2) == 0x51)) {
                    return 1;
                  }
                }
              }
            }
          }
        }
        if ((DAT_05ab5ea8 != 0) && ((*(byte *)(DAT_05ab5ea8 + 0x1a71) >> 1 & 1) != 0)) {
          if (*(long *)(param_1 + 0x10) == 0) {
            local_34 = 0x21;
          }
          else {
            uVar9 = FUN_03853b94();
            if ((DAT_05326af0 <= uVar9) ||
               (uVar2 = *(ushort *)(DAT_05326af8 + (long)(int)uVar9 * 2), local_34 = (uint)uVar2,
               0xa1 < uVar2)) {
              local_34 = 0;
            }
          }
          if ((int)*(uint *)(DAT_0532a7a0 + 0x1c0) < 1) {
            if ((((*(long *)(DAT_0532a7a0 + 0xb0) != 0) &&
                 (puVar8 = *(uint **)(*(long *)(DAT_0532a7a0 + 0xb0) + 8), puVar8 != (uint *)0x0))
                && ((*(uint *)(DAT_0532a7a0 + 200) <= local_34 ||
                    (*(char *)(*(long *)(DAT_0532a7a0 + 0xd0) + (long)(int)local_34) != '\0')))) &&
               (((local_34 < *puVar8 && (puVar8[1] != 0)) && ((ushort)puVar8[2] != 0)))) {
              iVar4 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                iVar4 = 0x1c;
              }
              lVar5 = (ulong)(puVar8[1] * local_34 + (uint)(ushort)puVar8[2] * 8 + iVar4) +
                      (long)puVar8;
              goto joined_r0x01add4d0;
            }
          }
          else if (local_34 < *(uint *)(DAT_0532a7a0 + 0x1c0)) {
            uVar9 = local_34;
            if (*(uint *)(DAT_0532a7a0 + 0x1b0) <= local_34) {
              uVar9 = 0;
            }
            lVar5 = *(long *)(*(long *)(DAT_0532a7a0 + 0x1b8) + (ulong)uVar9 * 8);
joined_r0x01add4d0:
            if (((lVar5 != 0) && (uVar9 = FUN_03853b94(), uVar9 < DAT_05326b00)) &&
               (*(short *)(DAT_05326b08 + (long)(int)uVar9 * 2) == 0x4c)) {
              return 1;
            }
          }
        }
        if (DAT_04c487d4 != -1) {
          local_34 = 0x17;
          puVar8 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
          if (0xff < (uint)(int)DAT_04c487d4) {
            puVar8 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((*puVar8 >> 0x17 & 1) != 0) {
            if (*(long *)(param_1 + 0x10) == 0) {
              local_34 = 0x21;
            }
            else {
              uVar9 = FUN_03853b94();
              if ((DAT_05326af0 <= uVar9) ||
                 (uVar2 = *(ushort *)(DAT_05326af8 + (long)(int)uVar9 * 2), local_34 = (uint)uVar2,
                 0xa1 < uVar2)) {
                local_34 = 0;
              }
            }
            if ((int)*(uint *)(DAT_0532a7a0 + 0x1c0) < 1) {
              if ((((*(long *)(DAT_0532a7a0 + 0xb0) != 0) &&
                   (puVar8 = *(uint **)(*(long *)(DAT_0532a7a0 + 0xb0) + 8), puVar8 != (uint *)0x0))
                  && ((*(uint *)(DAT_0532a7a0 + 200) <= local_34 ||
                      (*(char *)(*(long *)(DAT_0532a7a0 + 0xd0) + (long)(int)local_34) != '\0'))))
                 && (((local_34 < *puVar8 && (puVar8[1] != 0)) && ((ushort)puVar8[2] != 0)))) {
                iVar4 = 0xc;
                if (*(char *)((long)puVar8 + 10) != '\0') {
                  iVar4 = 0x1c;
                }
                lVar5 = (ulong)(puVar8[1] * local_34 + (uint)(ushort)puVar8[2] * 8 + iVar4) +
                        (long)puVar8;
                goto joined_r0x01add634;
              }
            }
            else if (local_34 < *(uint *)(DAT_0532a7a0 + 0x1c0)) {
              uVar9 = local_34;
              if (*(uint *)(DAT_0532a7a0 + 0x1b0) <= local_34) {
                uVar9 = 0;
              }
              lVar5 = *(long *)(*(long *)(DAT_0532a7a0 + 0x1b8) + (ulong)uVar9 * 8);
joined_r0x01add634:
              if (((lVar5 != 0) && (uVar9 = FUN_03853b94(), uVar9 < DAT_05326b00)) &&
                 (*(short *)(DAT_05326b08 + (long)(int)uVar9 * 2) == 0x12)) {
                return 0;
              }
            }
          }
        }
        puVar8 = *(uint **)(param_1 + 0x10);
        if (puVar8 == (uint *)0x0) {
          local_34 = 0xbc;
        }
        else {
          uVar9 = *puVar8;
          local_34 = 0;
          if ((uVar9 != 0) && (puVar8 != (uint *)(ulong)uVar9)) {
            puVar11 = (uint *)((long)puVar8 - (long)(ulong)uVar9);
            local_34 = 0;
            if (*puVar11 != 0) {
              uVar9 = puVar11[1];
              if ((uVar9 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
                lVar5 = 0xc;
                if (*(char *)((long)puVar11 + 10) != '\0') {
                  lVar5 = 0x1c;
                }
                lVar5 = (long)puVar11 + lVar5 + (ulong)(ushort)puVar11[2] * 8;
                if (lVar5 != 0) {
                  uVar1 = 0;
                  if ((ulong)uVar9 != 0) {
                    uVar1 = (uint)((ulong)((long)puVar8 - lVar5) / (ulong)uVar9);
                  }
                  if (*puVar11 <= uVar1) {
                    uVar1 = 0xffffffff;
                  }
                  if ((uVar1 < DAT_05326ec0) &&
                     (local_34 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2),
                     local_34 < 0xbd)) goto LAB_01add6d4;
                }
              }
              local_34 = 0;
            }
          }
        }
LAB_01add6d4:
        if (local_34 == 0x25) {
          if ((*param_2 == '\0') && (lVar5 = FUN_01ad81b0(param_1), lVar5 != 0)) {
            local_34 = 0xb;
            lVar5 = FUN_0172f620(lVar5,6,0x42ad246a,DAT_0532ad08);
            if (lVar5 == 0) {
              return 0;
            }
            uVar9 = local_34 + 7;
            if (-1 < (int)local_34) {
              uVar9 = local_34;
            }
            if ((*(byte *)(lVar5 + (ulong)(uint)((int)uVar9 >> 3)) >> (ulong)(local_34 & 7) & 1) ==
                0) {
              return 0;
            }
          }
          uVar6 = FUN_0180bc80();
          if ((uVar6 & 1) != 0) {
            return 1;
          }
          uVar6 = FUN_0180bda0();
          if ((uVar6 & 1) != 0) {
            return 1;
          }
          uVar6 = FUN_0180bad0();
          if ((uVar6 & 1) != 0) {
            return 1;
          }
          uVar6 = FUN_0180bc10();
          if ((uVar6 & 1) != 0) {
            return 1;
          }
          uVar6 = FUN_0180bee0();
          if ((uVar6 & 1) != 0) {
            return 1;
          }
          uVar6 = FUN_0180b2a0();
          if ((uVar6 & 1) != 0) {
            return 1;
          }
          uVar6 = FUN_0180bb70();
          if ((uVar6 & 1) != 0) {
            return 1;
          }
          uVar6 = FUN_0180be40();
          if ((uVar6 & 1) != 0) {
            return 1;
          }
          uVar6 = FUN_0180c020();
          if ((uVar6 & 1) != 0) {
            return 1;
          }
          uVar6 = FUN_0180b660();
          if ((uVar6 & 1) != 0) {
            return 1;
          }
          lVar5 = FUN_029156e0();
          if (*(int *)(lVar5 + 0x38) == 0x6622bd46) {
            return 1;
          }
          puVar8 = *(uint **)(param_1 + 0x10);
        }
        if (puVar8 == (uint *)0x0) {
          local_34 = 0x21;
        }
        else {
          uVar9 = FUN_03853b94();
          if ((DAT_05326af0 <= uVar9) ||
             (uVar2 = *(ushort *)(DAT_05326af8 + (long)(int)uVar9 * 2), local_34 = (uint)uVar2,
             0xa1 < uVar2)) {
            local_34 = 0;
          }
        }
        if ((int)*(uint *)(DAT_0532a7a0 + 0x1c0) < 1) {
          if (*(long *)(DAT_0532a7a0 + 0xb0) == 0) {
            return 0;
          }
          puVar8 = *(uint **)(*(long *)(DAT_0532a7a0 + 0xb0) + 8);
          if (puVar8 == (uint *)0x0) {
            return 0;
          }
          if ((local_34 < *(uint *)(DAT_0532a7a0 + 200)) &&
             (*(char *)(*(long *)(DAT_0532a7a0 + 0xd0) + (long)(int)local_34) == '\0')) {
            return 0;
          }
          if (*puVar8 <= local_34) {
            return 0;
          }
          if (puVar8[1] == 0) {
            return 0;
          }
          if ((ushort)puVar8[2] == 0) {
            return 0;
          }
          iVar4 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            iVar4 = 0x1c;
          }
          if ((ulong)(puVar8[1] * local_34 + (uint)(ushort)puVar8[2] * 8 + iVar4) + (long)puVar8 ==
              0) {
            return 0;
          }
        }
        else {
          if (*(uint *)(DAT_0532a7a0 + 0x1c0) <= local_34) {
            return 0;
          }
          uVar9 = local_34;
          if (*(uint *)(DAT_0532a7a0 + 0x1b0) <= local_34) {
            uVar9 = 0;
          }
          if (*(long *)(*(long *)(DAT_0532a7a0 + 0x1b8) + (ulong)uVar9 * 8) == 0) {
            return 0;
          }
        }
        uVar9 = FUN_03853b94();
        if (DAT_05326b00 <= uVar9) {
          return 0;
        }
        if (*(short *)(DAT_05326b08 + (long)(int)uVar9 * 2) != 0x12) {
          return 0;
        }
        if (*param_2 == '\0') {
          lVar5 = FUN_01ad81b0(param_1);
          if (lVar5 == 0) {
            return 0;
          }
          pcVar7 = (char *)FUN_0172f620(lVar5,3,0x555442aa,0);
          if ((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) {
            return 0;
          }
          uVar6 = FUN_01ad8950(lVar5);
          if ((uVar6 & 1) == 0) {
            return 0;
          }
        }
        return 1;
      }
    }
    local_3c = local_3c + 1;
    if (local_3c == 0xe) {
      return 0;
    }
  } while( true );
}

