
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b1b630(void)

{
  uint uVar1;
  long *plVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  uint *puVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined1 auStack_dc [8];
  uint local_d4;
  undefined **local_d0;
  undefined2 local_c8;
  undefined1 local_c6;
  undefined1 local_c5;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined1 local_b1;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined1 local_aa;
  undefined1 local_a9;
  undefined4 local_a8;
  undefined1 local_a4;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined4 local_9c;
  undefined1 local_98;
  undefined2 local_94;
  undefined1 local_92;
  undefined1 local_91;
  undefined4 local_90;
  undefined1 local_8c;
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  undefined1 local_80;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined1 local_79;
  undefined4 local_78;
  undefined1 local_74;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  undefined1 local_68;
  undefined2 local_64;
  
  DAT_0532c52c = 0;
  DAT_0532c534 = 0;
  DAT_0532c51c = 0;
  DAT_0532c524 = 0;
  DAT_0532c50c = 0;
  DAT_0532c514 = 0;
  DAT_0532c4fc = 0;
  DAT_0532c504 = 0;
  DAT_0532c4ec = 0;
  DAT_0532c4f4 = 0;
  DAT_0532c4dc = 0;
  DAT_0532c4e4 = 0;
  DAT_0532c4cc = 0;
  DAT_0532c4d4 = 0;
  DAT_0532c4bc = 0;
  DAT_0532c4c4 = 0;
  DAT_0532c4ac = 0;
  DAT_0532c4b4 = 0;
  DAT_0532c49c = 0;
  DAT_0532c4a4 = 0;
  DAT_0532c48c = 0;
  DAT_0532c494 = 0;
  DAT_0532c47c = 0;
  DAT_0532c484 = 0;
  DAT_0532c46c = 0;
  DAT_0532c474 = 0;
  DAT_0532c45c = 0;
  DAT_0532c464 = 0;
  DAT_0532c44c = 0;
  DAT_0532c454 = 0;
  lVar12 = *(long *)PTR_DAT_04bb46f0;
  _DAT_0532c43c = 0;
  DAT_0532c444 = 0;
  if (lVar12 != 0) {
    uVar17 = 0;
    do {
      uVar20 = uVar17 >> 3;
      if ((*(byte *)(lVar12 + 0xe98e0 + uVar20) >> (ulong)((uint)uVar17 & 7) & 1) != 0) {
        FUN_02621f00(auStack_dc,lVar12,uVar17);
        local_a4 = 0;
        local_98 = 0;
        local_8c = 0;
        local_80 = 0;
        local_ac = *(undefined2 *)PTR_DAT_04bb37e0;
        local_aa = PTR_DAT_04bb37e0[2];
        local_a9 = PTR_DAT_04bb37e0[3];
        local_a8 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
        local_74 = 0;
        local_68 = 0;
        local_64 = 0;
        local_a0 = local_ac;
        local_9e = local_aa;
        local_9d = local_a9;
        local_9c = local_a8;
        local_94 = local_ac;
        local_92 = local_aa;
        local_91 = local_a9;
        local_90 = local_a8;
        local_88 = local_ac;
        local_86 = local_aa;
        local_85 = local_a9;
        local_84 = local_a8;
        local_7c = local_ac;
        local_7a = local_aa;
        local_79 = local_a9;
        local_78 = local_a8;
        local_70 = local_ac;
        local_6e = local_aa;
        local_6d = local_a9;
        local_6c = local_a8;
        FUN_02632ae0(lVar12,&local_ac,uVar17,lVar12 + 0xe98e0);
        uVar6 = local_a8;
        uVar5 = local_a9;
        uVar4 = local_aa;
        uVar3 = local_ac;
        puVar7 = PTR_DAT_04bb43c0;
        if (local_64._1_1_ == '\0') {
switchD_01b1bbb0_caseD_53:
          bVar11 = (&DAT_0532c43c)[uVar20] & ((byte)(1 << (uVar17 & 7)) ^ 0xff);
        }
        else {
          bVar11 = (byte)local_64;
          uVar21 = (ulong)(byte)local_64;
          if ((byte)local_64 == 0) goto switchD_01b1bbb0_caseD_53;
          local_b4 = local_ac;
          local_b2 = local_aa;
          local_b1 = local_a9;
          local_b0 = local_a8;
          lVar19 = *(long *)PTR_DAT_04bb43c0;
          uVar9 = FUN_0277d6c4(&local_b4);
          puVar8 = PTR_DAT_04bc00c8;
          lVar18 = *(long *)puVar7;
          if (lVar18 == 0) {
LAB_01b1b990:
            uVar9 = 0;
            plVar2 = (long *)PTR_DAT_04bb43c0;
            uVar3 = local_a0;
            uVar4 = local_9e;
            uVar5 = local_9d;
            uVar6 = local_9c;
          }
          else {
            lVar19 = *(long *)(lVar19 + 0x57e58);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
            if ((*(uint *)(lVar19 + 0x1d8) <= uVar9) ||
               (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar9 * 8) == 0))
            goto LAB_01b1b990;
            local_c8 = uVar3;
            local_c6 = uVar4;
            local_c5 = uVar5;
            local_c4 = uVar6;
            local_c0 = 0;
            local_d0 = &PTR_FUN_04a36b50;
            uVar9 = FUN_0277d6c4(&local_c8);
            if (DAT_053274a0 == 0) {
LAB_01b1bb40:
              local_d4 = 0xbc;
            }
            else {
              lVar18 = *(long *)(lVar18 + 0x57e58);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
              if ((*(uint *)(lVar18 + 0x1d8) <= uVar9) ||
                 (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar9 * 8) == 0))
              goto LAB_01b1bb40;
              lVar18 = *(long *)PTR_DAT_04bc0428;
              uVar9 = FUN_0277d6c4(&local_b4);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
              if ((*(uint *)(lVar18 + 0x1d8) <= uVar9) ||
                 (puVar13 = *(uint **)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar9 * 8),
                 puVar13 == (uint *)0x0)) goto LAB_01b1bb40;
              uVar9 = *puVar13;
              local_d4 = 0;
              if ((uVar9 != 0) && (puVar13 != (uint *)(ulong)uVar9)) {
                puVar16 = (uint *)((long)puVar13 - (long)(ulong)uVar9);
                local_d4 = 0;
                if (*puVar16 != 0) {
                  uVar9 = puVar16[1];
                  if ((uVar9 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                    lVar18 = 0xc;
                    if (*(char *)((long)puVar16 + 10) != '\0') {
                      lVar18 = 0x1c;
                    }
                    lVar18 = (long)puVar16 + lVar18 + (ulong)(ushort)puVar16[2] * 8;
                    if (lVar18 != 0) {
                      uVar10 = 0;
                      if ((ulong)uVar9 != 0) {
                        uVar10 = (uint)((ulong)((long)puVar13 - lVar18) / (ulong)uVar9);
                      }
                      if (*puVar16 <= uVar10) {
                        uVar10 = 0xffffffff;
                      }
                      if ((uVar10 < *(uint *)puVar8) &&
                         (local_d4 = (uint)*(ushort *)
                                            (*(long *)(puVar8 + 8) + (long)(int)uVar10 * 2),
                         local_d4 < 0xbd)) goto LAB_01b1bb44;
                    }
                  }
                  local_d4 = 0;
                }
              }
            }
LAB_01b1bb44:
            uVar9 = local_d4 - 0x52;
            if ((0x11 < uVar9) || ((0x25001U >> (ulong)(uVar9 & 0x1f) & 1) == 0))
            goto switchD_01b1bbb0_caseD_53;
            uVar9 = 0x3affeU >> (ulong)(uVar9 & 0x1f) & 1;
            plVar2 = (long *)PTR_DAT_04bb43c0;
            uVar3 = local_a0;
            uVar4 = local_9e;
            uVar5 = local_9d;
            uVar6 = local_9c;
          }
          PTR_DAT_04bb43c0 = (undefined *)plVar2;
          local_a0 = uVar3;
          local_9e = uVar4;
          local_9d = uVar5;
          local_9c = uVar6;
          if (bVar11 != 1) {
            lVar18 = *plVar2;
            local_b4 = uVar3;
            local_b2 = uVar4;
            local_b1 = uVar5;
            local_b0 = uVar6;
            uVar10 = FUN_0277d6c4(&local_b4);
            puVar7 = PTR_DAT_04bc00c8;
            lVar19 = *plVar2;
            if (lVar19 == 0) {
switchD_01b1bbb0_caseD_52:
              plVar2 = (long *)PTR_DAT_04bb43c0;
              uVar3 = local_94;
              uVar4 = local_92;
              uVar5 = local_91;
              uVar6 = local_90;
            }
            else {
              lVar18 = *(long *)(lVar18 + 0x57e58);
              uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
              if ((*(uint *)(lVar18 + 0x1d8) <= uVar10) ||
                 (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8) == 0))
              goto switchD_01b1bbb0_caseD_52;
              local_c0 = 0;
              local_d0 = &PTR_FUN_04a36b50;
              local_c8 = uVar3;
              local_c6 = uVar4;
              local_c5 = uVar5;
              local_c4 = uVar6;
              uVar10 = FUN_0277d6c4(&local_c8);
              if (DAT_053274a0 == 0) {
LAB_01b1bb84:
                local_d4 = 0xbc;
              }
              else {
                lVar18 = *(long *)(lVar19 + 0x57e58);
                uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
                if ((*(uint *)(lVar18 + 0x1d8) <= uVar10) ||
                   (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8) == 0))
                goto LAB_01b1bb84;
                lVar18 = *(long *)PTR_DAT_04bc0428;
                uVar10 = FUN_0277d6c4(&local_b4);
                uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
                if ((*(uint *)(lVar18 + 0x1d8) <= uVar10) ||
                   (puVar13 = *(uint **)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8),
                   puVar13 == (uint *)0x0)) goto LAB_01b1bb84;
                uVar10 = *puVar13;
                local_d4 = 0;
                if ((uVar10 != 0) && (puVar13 != (uint *)(ulong)uVar10)) {
                  puVar16 = (uint *)((long)puVar13 - (long)(ulong)uVar10);
                  local_d4 = 0;
                  if (*puVar16 != 0) {
                    uVar10 = puVar16[1];
                    if ((uVar10 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                      lVar18 = 0xc;
                      if (*(char *)((long)puVar16 + 10) != '\0') {
                        lVar18 = 0x1c;
                      }
                      lVar18 = (long)puVar16 + lVar18 + (ulong)(ushort)puVar16[2] * 8;
                      if (lVar18 != 0) {
                        uVar1 = 0;
                        if ((ulong)uVar10 != 0) {
                          uVar1 = (uint)((ulong)((long)puVar13 - lVar18) / (ulong)uVar10);
                        }
                        if (*puVar16 <= uVar1) {
                          uVar1 = 0xffffffff;
                        }
                        if ((uVar1 < *(uint *)puVar7) &&
                           (local_d4 = (uint)*(ushort *)
                                              (*(long *)(puVar7 + 8) + (long)(int)uVar1 * 2),
                           local_d4 < 0xbd)) goto LAB_01b1bb88;
                      }
                    }
                    local_d4 = 0;
                  }
                }
              }
LAB_01b1bb88:
              switch(local_d4) {
              case 0x52:
              case 0x5e:
              case 0x60:
                goto switchD_01b1bbb0_caseD_52;
              default:
                goto switchD_01b1bbb0_caseD_53;
              case 99:
                uVar9 = 1;
                plVar2 = (long *)PTR_DAT_04bb43c0;
                uVar3 = local_94;
                uVar4 = local_92;
                uVar5 = local_91;
                uVar6 = local_90;
              }
            }
            PTR_DAT_04bb43c0 = (undefined *)plVar2;
            local_94 = uVar3;
            local_92 = uVar4;
            local_91 = uVar5;
            local_90 = uVar6;
            if (bVar11 != 2) {
              lVar18 = *plVar2;
              local_b4 = uVar3;
              local_b2 = uVar4;
              local_b1 = uVar5;
              local_b0 = uVar6;
              uVar10 = FUN_0277d6c4(&local_b4);
              puVar7 = PTR_DAT_04bc00c8;
              lVar19 = *plVar2;
              if (lVar19 == 0) {
switchD_01b1bd88_caseD_52:
                plVar2 = (long *)PTR_DAT_04bb43c0;
                uVar3 = local_88;
                uVar4 = local_86;
                uVar5 = local_85;
                uVar6 = local_84;
              }
              else {
                lVar18 = *(long *)(lVar18 + 0x57e58);
                uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
                if ((*(uint *)(lVar18 + 0x1d8) <= uVar10) ||
                   (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8) == 0))
                goto switchD_01b1bd88_caseD_52;
                local_c0 = 0;
                local_d0 = &PTR_FUN_04a36b50;
                local_c8 = uVar3;
                local_c6 = uVar4;
                local_c5 = uVar5;
                local_c4 = uVar6;
                uVar10 = FUN_0277d6c4(&local_c8);
                if (DAT_053274a0 == 0) {
LAB_01b1bd5c:
                  local_d4 = 0xbc;
                }
                else {
                  lVar18 = *(long *)(lVar19 + 0x57e58);
                  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
                  if ((*(uint *)(lVar18 + 0x1d8) <= uVar10) ||
                     (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8) == 0))
                  goto LAB_01b1bd5c;
                  lVar18 = *(long *)PTR_DAT_04bc0428;
                  uVar10 = FUN_0277d6c4(&local_b4);
                  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
                  if ((*(uint *)(lVar18 + 0x1d8) <= uVar10) ||
                     (puVar13 = *(uint **)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8),
                     puVar13 == (uint *)0x0)) goto LAB_01b1bd5c;
                  uVar10 = *puVar13;
                  local_d4 = 0;
                  if ((uVar10 != 0) && (puVar13 != (uint *)(ulong)uVar10)) {
                    puVar16 = (uint *)((long)puVar13 - (long)(ulong)uVar10);
                    local_d4 = 0;
                    if (*puVar16 != 0) {
                      uVar10 = puVar16[1];
                      if ((uVar10 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                        lVar18 = 0xc;
                        if (*(char *)((long)puVar16 + 10) != '\0') {
                          lVar18 = 0x1c;
                        }
                        lVar18 = (long)puVar16 + lVar18 + (ulong)(ushort)puVar16[2] * 8;
                        if (lVar18 != 0) {
                          uVar1 = 0;
                          if ((ulong)uVar10 != 0) {
                            uVar1 = (uint)((ulong)((long)puVar13 - lVar18) / (ulong)uVar10);
                          }
                          if (*puVar16 <= uVar1) {
                            uVar1 = 0xffffffff;
                          }
                          if ((uVar1 < *(uint *)puVar7) &&
                             (local_d4 = (uint)*(ushort *)
                                                (*(long *)(puVar7 + 8) + (long)(int)uVar1 * 2),
                             local_d4 < 0xbd)) goto LAB_01b1bd60;
                        }
                      }
                      local_d4 = 0;
                    }
                  }
                }
LAB_01b1bd60:
                switch(local_d4) {
                case 0x52:
                case 0x5e:
                case 0x60:
                  goto switchD_01b1bd88_caseD_52;
                default:
                  goto switchD_01b1bbb0_caseD_53;
                case 99:
                  uVar9 = 1;
                  plVar2 = (long *)PTR_DAT_04bb43c0;
                  uVar3 = local_88;
                  uVar4 = local_86;
                  uVar5 = local_85;
                  uVar6 = local_84;
                }
              }
              PTR_DAT_04bb43c0 = (undefined *)plVar2;
              local_88 = uVar3;
              local_86 = uVar4;
              local_85 = uVar5;
              local_84 = uVar6;
              if (bVar11 != 3) {
                lVar18 = *plVar2;
                local_b4 = uVar3;
                local_b2 = uVar4;
                local_b1 = uVar5;
                local_b0 = uVar6;
                uVar10 = FUN_0277d6c4(&local_b4);
                puVar7 = PTR_DAT_04bc00c8;
                lVar19 = *plVar2;
                if (lVar19 == 0) {
switchD_01b1bf60_caseD_52:
                  plVar2 = (long *)PTR_DAT_04bb43c0;
                  uVar3 = local_7c;
                  uVar4 = local_7a;
                  uVar5 = local_79;
                  uVar6 = local_78;
                }
                else {
                  lVar18 = *(long *)(lVar18 + 0x57e58);
                  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
                  if ((*(uint *)(lVar18 + 0x1d8) <= uVar10) ||
                     (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8) == 0))
                  goto switchD_01b1bf60_caseD_52;
                  local_c0 = 0;
                  local_d0 = &PTR_FUN_04a36b50;
                  local_c8 = uVar3;
                  local_c6 = uVar4;
                  local_c5 = uVar5;
                  local_c4 = uVar6;
                  uVar10 = FUN_0277d6c4(&local_c8);
                  if (DAT_053274a0 == 0) {
LAB_01b1bf34:
                    local_d4 = 0xbc;
                  }
                  else {
                    lVar18 = *(long *)(lVar19 + 0x57e58);
                    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
                    if ((*(uint *)(lVar18 + 0x1d8) <= uVar10) ||
                       (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8) == 0))
                    goto LAB_01b1bf34;
                    lVar18 = *(long *)PTR_DAT_04bc0428;
                    uVar10 = FUN_0277d6c4(&local_b4);
                    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
                    if ((*(uint *)(lVar18 + 0x1d8) <= uVar10) ||
                       (puVar13 = *(uint **)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8),
                       puVar13 == (uint *)0x0)) goto LAB_01b1bf34;
                    uVar10 = *puVar13;
                    local_d4 = 0;
                    if ((uVar10 != 0) && (puVar13 != (uint *)(ulong)uVar10)) {
                      puVar16 = (uint *)((long)puVar13 - (long)(ulong)uVar10);
                      local_d4 = 0;
                      if (*puVar16 != 0) {
                        uVar10 = puVar16[1];
                        if ((uVar10 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                          lVar18 = 0xc;
                          if (*(char *)((long)puVar16 + 10) != '\0') {
                            lVar18 = 0x1c;
                          }
                          lVar18 = (long)puVar16 + lVar18 + (ulong)(ushort)puVar16[2] * 8;
                          if (lVar18 != 0) {
                            uVar1 = 0;
                            if ((ulong)uVar10 != 0) {
                              uVar1 = (uint)((ulong)((long)puVar13 - lVar18) / (ulong)uVar10);
                            }
                            if (*puVar16 <= uVar1) {
                              uVar1 = 0xffffffff;
                            }
                            if ((uVar1 < *(uint *)puVar7) &&
                               (local_d4 = (uint)*(ushort *)
                                                  (*(long *)(puVar7 + 8) + (long)(int)uVar1 * 2),
                               local_d4 < 0xbd)) goto LAB_01b1bf38;
                          }
                        }
                        local_d4 = 0;
                      }
                    }
                  }
LAB_01b1bf38:
                  switch(local_d4) {
                  case 0x52:
                  case 0x5e:
                  case 0x60:
                    goto switchD_01b1bf60_caseD_52;
                  default:
                    goto switchD_01b1bbb0_caseD_53;
                  case 99:
                    uVar9 = 1;
                    plVar2 = (long *)PTR_DAT_04bb43c0;
                    uVar3 = local_7c;
                    uVar4 = local_7a;
                    uVar5 = local_79;
                    uVar6 = local_78;
                  }
                }
                PTR_DAT_04bb43c0 = (undefined *)plVar2;
                local_7c = uVar3;
                local_7a = uVar4;
                local_79 = uVar5;
                local_78 = uVar6;
                if (bVar11 != 4) {
                  lVar18 = *plVar2;
                  local_b4 = uVar3;
                  local_b2 = uVar4;
                  local_b1 = uVar5;
                  local_b0 = uVar6;
                  uVar10 = FUN_0277d6c4(&local_b4);
                  puVar7 = PTR_DAT_04bc00c8;
                  lVar19 = *plVar2;
                  if (lVar19 != 0) {
                    lVar18 = *(long *)(lVar18 + 0x57e58);
                    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
                    if ((uVar10 < *(uint *)(lVar18 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                      local_c0 = 0;
                      local_d0 = &PTR_FUN_04a36b50;
                      local_c8 = uVar3;
                      local_c6 = uVar4;
                      local_c5 = uVar5;
                      local_c4 = uVar6;
                      uVar10 = FUN_0277d6c4(&local_c8);
                      if (DAT_053274a0 == 0) {
LAB_01b1c120:
                        local_d4 = 0xbc;
                      }
                      else {
                        lVar18 = *(long *)(lVar19 + 0x57e58);
                        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
                        if ((*(uint *)(lVar18 + 0x1d8) <= uVar10) ||
                           (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8) == 0))
                        goto LAB_01b1c120;
                        lVar18 = *(long *)PTR_DAT_04bc0428;
                        uVar10 = FUN_0277d6c4(&local_b4);
                        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
                        if ((*(uint *)(lVar18 + 0x1d8) <= uVar10) ||
                           (puVar13 = *(uint **)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8),
                           puVar13 == (uint *)0x0)) goto LAB_01b1c120;
                        uVar10 = *puVar13;
                        local_d4 = 0;
                        if ((uVar10 != 0) && (puVar13 != (uint *)(ulong)uVar10)) {
                          puVar16 = (uint *)((long)puVar13 - (long)(ulong)uVar10);
                          local_d4 = 0;
                          if (*puVar16 != 0) {
                            uVar10 = puVar16[1];
                            if ((uVar10 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                              lVar18 = 0xc;
                              if (*(char *)((long)puVar16 + 10) != '\0') {
                                lVar18 = 0x1c;
                              }
                              lVar18 = (long)puVar16 + lVar18 + (ulong)(ushort)puVar16[2] * 8;
                              if (lVar18 != 0) {
                                uVar1 = 0;
                                if ((ulong)uVar10 != 0) {
                                  uVar1 = (uint)((ulong)((long)puVar13 - lVar18) / (ulong)uVar10);
                                }
                                if (*puVar16 <= uVar1) {
                                  uVar1 = 0xffffffff;
                                }
                                if ((uVar1 < *(uint *)puVar7) &&
                                   (local_d4 = (uint)*(ushort *)
                                                      (*(long *)(puVar7 + 8) + (long)(int)uVar1 * 2)
                                   , local_d4 < 0xbd)) goto LAB_01b1c124;
                              }
                            }
                            local_d4 = 0;
                          }
                        }
                      }
LAB_01b1c124:
                      switch(local_d4) {
                      case 0x52:
                      case 0x5e:
                      case 0x60:
                        break;
                      default:
                        goto switchD_01b1bbb0_caseD_53;
                      case 99:
                        uVar9 = 1;
                      }
                    }
                  }
                  uVar6 = local_6c;
                  uVar5 = local_6d;
                  uVar4 = local_6e;
                  uVar3 = local_70;
                  puVar7 = PTR_DAT_04bb43c0;
                  if (bVar11 != 5) {
                    local_b4 = local_70;
                    local_b2 = local_6e;
                    local_b1 = local_6d;
                    local_b0 = local_6c;
                    lVar18 = *(long *)PTR_DAT_04bb43c0;
                    uVar10 = FUN_0277d6c4(&local_b4);
                    puVar8 = PTR_DAT_04bc00c8;
                    lVar19 = *(long *)puVar7;
                    if (lVar19 != 0) {
                      lVar18 = *(long *)(lVar18 + 0x57e58);
                      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
                      if ((uVar10 < *(uint *)(lVar18 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                        local_c8 = uVar3;
                        local_c6 = uVar4;
                        local_c5 = uVar5;
                        local_c4 = uVar6;
                        local_c0 = 0;
                        local_d0 = &PTR_FUN_04a36b50;
                        uVar10 = FUN_0277d6c4(&local_c8);
                        if (DAT_053274a0 == 0) {
LAB_01b1c314:
                          local_d4 = 0xbc;
                        }
                        else {
                          lVar18 = *(long *)(lVar19 + 0x57e58);
                          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
                          if ((*(uint *)(lVar18 + 0x1d8) <= uVar10) ||
                             (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8) == 0))
                          goto LAB_01b1c314;
                          lVar18 = *(long *)PTR_DAT_04bc0428;
                          uVar10 = FUN_0277d6c4(&local_b4);
                          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
                          if ((*(uint *)(lVar18 + 0x1d8) <= uVar10) ||
                             (puVar13 = *(uint **)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8
                                                  ), puVar13 == (uint *)0x0)) goto LAB_01b1c314;
                          uVar10 = *puVar13;
                          local_d4 = 0;
                          if ((uVar10 != 0) && (puVar13 != (uint *)(ulong)uVar10)) {
                            puVar16 = (uint *)((long)puVar13 - (long)(ulong)uVar10);
                            local_d4 = 0;
                            if (*puVar16 != 0) {
                              uVar10 = puVar16[1];
                              if ((uVar10 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                                lVar18 = 0xc;
                                if (*(char *)((long)puVar16 + 10) != '\0') {
                                  lVar18 = 0x1c;
                                }
                                lVar18 = (long)puVar16 + lVar18 + (ulong)(ushort)puVar16[2] * 8;
                                if (lVar18 != 0) {
                                  uVar1 = 0;
                                  if ((ulong)uVar10 != 0) {
                                    uVar1 = (uint)((ulong)((long)puVar13 - lVar18) / (ulong)uVar10);
                                  }
                                  if (*puVar16 <= uVar1) {
                                    uVar1 = 0xffffffff;
                                  }
                                  if ((uVar1 < *(uint *)puVar8) &&
                                     (local_d4 = (uint)*(ushort *)
                                                        (*(long *)(puVar8 + 8) +
                                                        (long)(int)uVar1 * 2), local_d4 < 0xbd))
                                  goto LAB_01b1c318;
                                }
                              }
                              local_d4 = 0;
                            }
                          }
                        }
LAB_01b1c318:
                        switch(local_d4) {
                        case 0x52:
                        case 0x5e:
                        case 0x60:
                          break;
                        default:
                          goto switchD_01b1bbb0_caseD_53;
                        case 99:
                          uVar9 = 1;
                        }
                      }
                    }
                    if (bVar11 != 6) {
                      lVar18 = uVar21 - 6;
                      lVar19 = DAT_053274a0;
                      do {
                        uVar6 = local_a8;
                        uVar5 = local_a9;
                        uVar4 = local_aa;
                        uVar3 = local_ac;
                        local_b4 = local_ac;
                        local_b2 = local_aa;
                        local_b1 = local_a9;
                        local_b0 = local_a8;
                        uVar10 = FUN_0277d6c4(&local_b4);
                        lVar15 = DAT_053274a0;
                        if (DAT_053274a0 == 0) {
                          lVar19 = 0;
                        }
                        else {
                          lVar14 = *(long *)(lVar19 + 0x57e58);
                          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
                          lVar19 = DAT_053274a0;
                          if ((uVar10 < *(uint *)(lVar14 + 0x1d8)) &&
                             (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                            local_c8 = uVar3;
                            local_c6 = uVar4;
                            local_c5 = uVar5;
                            local_c4 = uVar6;
                            local_c0 = 0;
                            local_d0 = &PTR_FUN_04a36b50;
                            uVar10 = FUN_0277d6c4(&local_c8);
                            lVar19 = DAT_053274a0;
                            if (DAT_053274a0 == 0) {
LAB_01b1c568:
                              local_d4 = 0xbc;
                            }
                            else {
                              lVar15 = *(long *)(lVar15 + 0x57e58);
                              uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                              if ((*(uint *)(lVar15 + 0x1d8) <= uVar10) ||
                                 (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8) == 0)
                                 ) goto LAB_01b1c568;
                              lVar15 = *(long *)PTR_DAT_04bc0428;
                              uVar10 = FUN_0277d6c4(&local_b4);
                              uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                              lVar19 = *(long *)PTR_DAT_04bb43c0;
                              if ((*(uint *)(lVar15 + 0x1d8) <= uVar10) ||
                                 (puVar13 = *(uint **)(*(long *)(lVar15 + 0x1e0) +
                                                      (long)(int)uVar10 * 8), puVar13 == (uint *)0x0
                                 )) goto LAB_01b1c568;
                              uVar10 = *puVar13;
                              local_d4 = 0;
                              if ((uVar10 != 0) && (puVar13 != (uint *)(ulong)uVar10)) {
                                puVar16 = (uint *)((long)puVar13 - (long)(ulong)uVar10);
                                local_d4 = 0;
                                if (*puVar16 != 0) {
                                  uVar10 = puVar16[1];
                                  if ((uVar10 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                                    lVar15 = 0xc;
                                    if (*(char *)((long)puVar16 + 10) != '\0') {
                                      lVar15 = 0x1c;
                                    }
                                    lVar15 = (long)puVar16 + lVar15 + (ulong)(ushort)puVar16[2] * 8;
                                    if (lVar15 != 0) {
                                      uVar1 = 0;
                                      if ((ulong)uVar10 != 0) {
                                        uVar1 = (uint)((ulong)((long)puVar13 - lVar15) /
                                                      (ulong)uVar10);
                                      }
                                      if (*puVar16 <= uVar1) {
                                        uVar1 = 0xffffffff;
                                      }
                                      if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                                         (local_d4 = (uint)*(ushort *)
                                                            (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                            (long)(int)uVar1 * 2), local_d4 < 0xbd))
                                      goto LAB_01b1c56c;
                                    }
                                  }
                                  local_d4 = 0;
                                }
                              }
                            }
LAB_01b1c56c:
                            switch(local_d4) {
                            case 0x52:
                            case 0x5e:
                            case 0x60:
                              break;
                            default:
                              goto switchD_01b1bbb0_caseD_53;
                            case 99:
                              uVar9 = 1;
                            }
                          }
                        }
                        lVar18 = lVar18 + -1;
                      } while (lVar18 != 0);
                      goto LAB_01b1c358;
                    }
                  }
                }
              }
            }
          }
LAB_01b1c358:
          if (uVar9 == 0) goto switchD_01b1bbb0_caseD_53;
          bVar11 = (&DAT_0532c43c)[uVar20] | (byte)(1 << (uVar17 & 7));
        }
        (&DAT_0532c43c)[uVar20] = bVar11;
      }
      uVar9 = (uint)uVar17 + 1;
      uVar17 = (ulong)uVar9;
    } while (uVar9 != 0x800);
  }
  return;
}

