
void FUN_01e29070(long param_1)

{
  ulong *puVar1;
  undefined *puVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  int iVar17;
  long lVar18;
  byte *pbVar19;
  undefined8 *puVar20;
  char cVar21;
  long lVar22;
  byte *pbVar23;
  uint *puVar24;
  int *piVar25;
  ushort uVar26;
  undefined8 *puVar27;
  uint *puVar28;
  long lVar29;
  ulong uVar30;
  ushort uVar31;
  byte local_88;
  byte bStack_87;
  undefined1 uStack_86;
  byte bStack_85;
  byte bStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined6 uStack_80;
  undefined2 local_7a;
  undefined6 uStack_78;
  uint local_6c;
  byte local_68;
  uint local_64;
  
  uVar30 = 0;
  do {
    uVar12 = (uint)uVar30;
    if (uVar12 < 10) {
      lVar6 = uVar30 * 0xba0;
      if ((&DAT_053fee41)[lVar6] != '\0') {
        bVar3 = *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476);
        lVar18 = param_1 + 0x78 + uVar30 * 0x28;
        puVar1 = (ulong *)(lVar18 + 8);
        if (bVar3 < 2) {
          uVar31 = *(ushort *)(param_1 + 0x74) >> (ulong)(uVar12 & 0x1f) & 1;
        }
        else {
          uVar31 = (ushort)((*(byte *)(lVar18 + 0xc) & 0x20) == 0);
        }
        lVar29 = (&DAT_053fede8)[uVar30 * 0x174];
        uVar11 = FUN_0219e890(&DAT_053fe348 + lVar6);
        if (lVar29 == 0) {
          bVar8 = false;
        }
        else {
          bVar8 = *(int *)(lVar29 + 4) == 1;
        }
        uVar5 = 1 << (ulong)(uVar12 & 0x1f);
        if (bVar3 < 2) {
          if ((int)(&DAT_053fe898)[uVar30 * 0x2e8] < 1) {
            iVar13 = 0;
          }
          else {
            iVar13 = 0;
            iVar7 = (&DAT_053fe898)[uVar30 * 0x2e8] + (&DAT_053fe894)[uVar30 * 0x2e8] + -1;
            iVar17 = 0;
            if ((int)(&DAT_053fe890)[uVar30 * 0x2e8] <= iVar7) {
              iVar17 = (&DAT_053fe890)[uVar30 * 0x2e8];
            }
            piVar25 = (int *)((&DAT_053fe888)[uVar30 * 0x174] + (long)(iVar7 - iVar17) * 0x14);
            if ((char)piVar25[4] == '\0') {
              iVar13 = *piVar25;
            }
          }
          local_88 = (byte)iVar13;
          bStack_87 = (byte)((uint)iVar13 >> 8);
          uStack_86 = (undefined1)((uint)iVar13 >> 0x10);
          bStack_85 = (byte)((uint)iVar13 >> 0x18);
          bVar8 = 0x1a < iVar13;
        }
        else {
          uVar26 = (ushort)uVar5;
          if ((uVar31 == 0) || ((*(byte *)(lVar18 + 9) & 3) != 1)) {
            uVar26 = *(ushort *)(param_1 + 0x57e) & (uVar26 ^ 0xffff);
          }
          else {
            if (!bVar8) goto LAB_01e291f0;
            uVar26 = *(ushort *)(param_1 + 0x57e) | uVar26;
          }
          bVar8 = false;
          *(ushort *)(param_1 + 0x57e) = uVar26;
        }
LAB_01e291f0:
        uVar5 = uVar5 & 0xffff;
        bVar4 = bStack_84;
        if ((uVar31 == 0 && (uVar5 & *(ushort *)(param_1 + 0x590)) == 0) &&
            (!bVar8 && ((uVar11 ^ 0xffffffff) & 1) == 0)) {
          lVar29 = *(long *)PTR_DAT_04bb39b0;
          if (lVar29 == 0) {
            if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_01e29288;
LAB_01e292f4:
            pbVar23 = PTR_DAT_04bb32e0;
            if (lVar29 == 0) {
LAB_01e29348:
              if (*pbVar23 < 8) goto LAB_01e293d0;
LAB_01e29354:
              pbVar23 = PTR_DAT_04bb5038;
              if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_01e293d0;
              lVar29 = **(long **)PTR_DAT_04bb27d0;
              bVar4 = *(byte *)(lVar29 + 0x473);
              pbVar19 = PTR_DAT_04bb5038;
              if ((long)(char)bVar4 != 0xffffffffffffffff) {
                puVar24 = (uint *)(lVar29 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
                if (7 < bVar4) {
                  puVar24 = (uint *)(lVar29 + 0x48);
                }
                if ((*puVar24 & 8) != 0) {
                  pbVar19 = (byte *)(lVar29 + 0x471);
                }
              }
              local_88 = *pbVar19;
              if (7 < local_88) goto LAB_01e293d0;
            }
            else {
              if (*(int *)(lVar29 + 0x15c) != 0) {
                pbVar23 = (byte *)(lVar29 + 0x158);
              }
              if (7 < *pbVar23) {
                if ((*(int *)(lVar29 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
                  pbVar23 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
                  goto LAB_01e29348;
                }
                goto LAB_01e29354;
              }
LAB_01e293d0:
              local_88 = *pbVar23;
              if (7 < local_88) {
                local_88 = 0xff;
              }
            }
            uVar14 = FUN_0252f708(&local_88,1,0);
            if ((uVar14 & 1) == 0) goto LAB_01e293f8;
          }
          else {
            pbVar23 = PTR_DAT_04bb32e0;
            if (*(int *)(lVar29 + 0x15c) != 0) {
              pbVar23 = (byte *)(lVar29 + 0x158);
            }
            if ((*pbVar23 < 8) ||
               (((*(int *)(lVar29 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
                (*(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5) < 8)))) goto LAB_01e292f4;
LAB_01e29288:
            if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
              lVar22 = **(long **)PTR_DAT_04bb27d0;
              bVar4 = *(byte *)(lVar22 + 0x473);
              pbVar23 = PTR_DAT_04bb5038;
              if ((long)(char)bVar4 != 0xffffffffffffffff) {
                puVar24 = (uint *)(lVar22 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
                if (7 < bVar4) {
                  puVar24 = (uint *)(lVar22 + 0x48);
                }
                if ((*puVar24 & 8) != 0) {
                  pbVar23 = (byte *)(lVar22 + 0x471);
                }
              }
              if (*pbVar23 < 8) goto LAB_01e292f4;
            }
            if ((byte)*PTR_DAT_04bb5038 < 8) goto LAB_01e292f4;
LAB_01e293f8:
            local_88 = (byte)uVar30;
            bVar4 = local_88;
            bStack_87 = (byte)(uVar30 >> 8);
            uStack_86 = (undefined1)(uVar30 >> 0x10);
            bStack_85 = (byte)(uVar30 >> 0x18);
            lVar29 = *(long *)PTR_DAT_04bb4760 + (uVar30 & 0xffffffff) * 0x15;
            if (0x6c < uVar12) {
              lVar29 = *(long *)PTR_DAT_04bb4760;
            }
            uVar26 = (ushort)*(byte *)(lVar29 + 4) | (*(byte *)(lVar29 + 5) & 3) << 8;
            if (0x1ff < uVar26) {
              uVar26 = uVar26 | 0xfc00;
            }
            bVar8 = DAT_055c1b60 == &DAT_055c1b58;
            puVar27 = DAT_055c1b60 + -8;
            if ((!bVar8) && (puVar20 = DAT_055c1b60, uVar26 != 0)) {
              do {
                puVar20 = (undefined8 *)puVar20[1];
                uVar26 = uVar26 - 1;
                bVar8 = puVar20 == &DAT_055c1b58;
              } while (!bVar8 && uVar26 != 0);
              puVar27 = puVar20 + -8;
            }
            puVar20 = &DAT_055c04a0;
            if (!bVar8) {
              puVar20 = puVar27;
            }
            if (*(int *)(puVar20 + 7) == 0x6622bd46) {
              local_88 = 0;
              bStack_87 = 0;
              uStack_86 = 0;
              bStack_85 = 0;
              uVar14 = FUN_0220f914(&local_88);
              local_6c = (&DAT_053fea2c)[uVar30 * 0x2e8];
              if (local_6c == 2) {
                if (CONCAT13(bStack_85,CONCAT12(uStack_86,CONCAT11(bStack_87,local_88))) == 0) {
                  (&DAT_053fea2c)[uVar30 * 0x2e8] = 0;
                  if (bVar3 < 2) {
                    if ((int)(&DAT_053fe898)[uVar30 * 0x2e8] < 1) {
                      local_6c = 0;
                    }
                    else {
                      local_6c = 0;
                      iVar17 = (&DAT_053fe898)[uVar30 * 0x2e8] + (&DAT_053fe894)[uVar30 * 0x2e8] +
                               -1;
                      iVar13 = 0;
                      if ((int)(&DAT_053fe890)[uVar30 * 0x2e8] <= iVar17) {
                        iVar13 = (&DAT_053fe890)[uVar30 * 0x2e8];
                      }
                      puVar24 = (uint *)((&DAT_053fe888)[uVar30 * 0x174] +
                                        (long)(iVar17 - iVar13) * 0x14);
                      if ((char)puVar24[4] == '\0') {
                        local_6c = *puVar24;
                      }
                    }
                    bVar9 = (&DAT_053fe858)[lVar6];
                    if (((bVar9 < 0x23) &&
                        ((byte)(&DAT_053fe859)[lVar6] <= (byte)PTR_DAT_04bc27f0[bVar9])) &&
                       ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
                         (ulong)((byte)(&DAT_053fe859)[lVar6] & 0x1f) & 1) != 0)) {
                      if (bVar9 == 0xd) {
                        local_64 = 3;
                      }
                      else {
                        bVar9 = FUN_020fd7d8(&DAT_053fe858 + lVar6);
                        if (7 < bVar9) goto LAB_01e29734;
                        local_64 = *(uint *)(&DAT_04058920 + (long)(char)bVar9 * 4);
                      }
                    }
                    else {
LAB_01e29734:
                      local_64 = 1;
                    }
                    uVar15 = FUN_021de8e0(&local_6c,&local_88,&local_64);
                    if ((uVar15 & 1) != 0) {
                      uVar16 = 0;
                      goto LAB_01e29770;
                    }
                  }
LAB_01e29828:
                  if ((uVar14 & 1) == 0) {
                    bVar9 = (&DAT_053fea30)[lVar6] & 0xfe;
LAB_01e29ad4:
                    (&DAT_053fea30)[lVar6] = bVar9;
                  }
                  else {
                    if (((&DAT_053fea30)[lVar6] & 1) != 0) goto LAB_01e29ad8;
                    if ((int)(&DAT_053fe898)[uVar30 * 0x2e8] < 1) {
                      local_6c = 0;
                    }
                    else {
                      local_6c = 0;
                      iVar17 = (&DAT_053fe898)[uVar30 * 0x2e8] + (&DAT_053fe894)[uVar30 * 0x2e8] +
                               -1;
                      iVar13 = 0;
                      if ((int)(&DAT_053fe890)[uVar30 * 0x2e8] <= iVar17) {
                        iVar13 = (&DAT_053fe890)[uVar30 * 0x2e8];
                      }
                      puVar24 = (uint *)((&DAT_053fe888)[uVar30 * 0x174] +
                                        (long)(iVar17 - iVar13) * 0x14);
                      if ((char)puVar24[4] == '\0') {
                        local_6c = *puVar24;
                      }
                    }
                    lVar29 = *(long *)PTR_DAT_04bb3968;
                    if (lVar29 == 0) {
LAB_01e29948:
                      puVar24 = (uint *)PTR_DAT_04bc2828;
                    }
                    else {
                      if ((int)*(uint *)(lVar29 + 0x16ac8) < 1) {
                        if (((*(long *)(lVar29 + 0x169b8) != 0) &&
                            (puVar24 = *(uint **)(*(long *)(lVar29 + 0x169b8) + 8),
                            puVar24 != (uint *)0x0)) &&
                           (((*(uint *)(lVar29 + 0x169d0) <= local_6c ||
                             (*(char *)(*(long *)(lVar29 + 0x169d8) + (long)(int)local_6c) != '\0'))
                            && (((local_6c < *puVar24 && (puVar24[1] != 0)) &&
                                ((ushort)puVar24[2] != 0)))))) {
                          iVar13 = 0xc;
                          if (*(char *)((long)puVar24 + 10) != '\0') {
                            iVar13 = 0x1c;
                          }
                          puVar24 = (uint *)((ulong)(puVar24[1] * local_6c +
                                                     (uint)(ushort)puVar24[2] * 8 + iVar13) +
                                            (long)puVar24);
                          if (puVar24 != (uint *)0x0) goto LAB_01e29950;
                        }
                        goto LAB_01e29948;
                      }
                      if (*(uint *)(lVar29 + 0x16ac8) <= local_6c) goto LAB_01e29948;
                      uVar12 = local_6c;
                      if (*(uint *)(lVar29 + 0x16ab8) <= local_6c) {
                        uVar12 = 0;
                      }
                      puVar24 = *(uint **)(*(long *)(lVar29 + 0x16ac0) + (ulong)uVar12 * 8);
                      if (puVar24 == (uint *)0x0) goto LAB_01e29948;
                    }
LAB_01e29950:
                    if (*puVar24 != 0) {
                      cVar21 = *PTR_DAT_04bc1560;
                      do {
                        if (cVar21 == '\0') {
                          cVar21 = '\x01';
                          *PTR_DAT_04bc1560 = 1;
                          puVar2 = PTR_DAT_04bc1568;
                          *(undefined8 *)PTR_DAT_04bc1568 = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x60) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x68) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x70) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x78) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x80) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x88) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x90) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x98) = 0xffffffffffffffff;
                        }
                        else {
                          uVar12 = *(uint *)(PTR_DAT_04bc1568 + 0x50);
                          if (-1 < (int)uVar12) {
                            if ((byte *)((ulong)uVar12 + (long)puVar24) != (byte *)0x0) {
                              bVar9 = *(byte *)((ulong)uVar12 + (long)puVar24);
                              goto LAB_01e29aa4;
                            }
                            break;
                          }
                          if (uVar12 != 0xffffffff) break;
                        }
                        puVar28 = (uint *)(ulong)*puVar24;
                        bVar9 = 2;
                        if ((*puVar24 == 0) || (puVar24 == puVar28)) goto LAB_01e29aa4;
                        lVar29 = 0xc;
                        if (*(char *)((long)puVar24 + (10 - (long)puVar28)) != '\0') {
                          lVar29 = 0x1c;
                        }
                        lVar29 = (long)puVar24 + (lVar29 - (long)puVar28);
                        if (lVar29 == 0) break;
                        uVar14 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar28));
                        *(undefined4 *)(PTR_DAT_04bc1568 + 0x50) = 0xfffffffe;
                        if (uVar14 == 0) break;
                        piVar25 = (int *)(lVar29 + 4);
                        while (piVar25[-1] != 0x67850558) {
                          piVar25 = piVar25 + 2;
                          uVar14 = uVar14 - 1;
                          if (uVar14 == 0) goto LAB_01e29aa0;
                        }
                        iVar13 = 0;
                        if (*piVar25 != -1) {
                          iVar13 = *piVar25;
                        }
                        *(int *)(PTR_DAT_04bc1568 + 0x50) = iVar13;
                        if (*puVar24 == 0) break;
                      } while( true );
                    }
LAB_01e29aa0:
                    bVar9 = 2;
LAB_01e29aa4:
                    if (1 < bVar9) {
                      bVar9 = 2;
                    }
                    uVar12 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0);
                    if ((uVar12 & 0xfffffffe) == 6) goto LAB_01e29acc;
                    uVar14 = FUN_021ded20();
                    if ((uVar14 & 1) != 0) {
                      bVar10 = (&DAT_053fe858)[lVar6];
                      if (((bVar10 < 0x23) &&
                          ((byte)(&DAT_053fe859)[lVar6] <= (byte)PTR_DAT_04bc27f0[bVar10])) &&
                         ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar10 * 4) >>
                           (ulong)((byte)(&DAT_053fe859)[lVar6] & 0x1f) & 1) != 0)) {
                        if (bVar10 == 0xd) {
                          local_6c = 3;
                        }
                        else {
                          bVar10 = FUN_020fd7d8();
                          if (bVar10 < 8) {
                            local_6c = *(uint *)(&DAT_04058920 + (long)(char)bVar10 * 4);
                          }
                          else {
                            local_6c = 1;
                          }
                        }
                      }
                      else {
                        local_6c = 1;
                      }
                      if (local_6c != 3) {
                        if (bVar9 == 0) {
                          iVar13 = FUN_01e2caa0(100);
                          local_64 = FUN_0220fcc4(&DAT_053fe858 + lVar6,0);
                          uVar14 = (ulong)local_64;
                          if (3 < local_64) {
                            uVar14 = 0;
                          }
                          if ((int)(&DAT_04101d10)[uVar14] <= iVar13) goto LAB_01e29acc;
                        }
                        else if (bVar9 == 1) {
LAB_01e29acc:
                          bVar9 = (&DAT_053fea30)[lVar6] | 1;
                          goto LAB_01e29ad4;
                        }
                      }
                    }
                  }
                }
              }
              else if (local_6c == 1) {
                iVar13 = CONCAT13(bStack_85,CONCAT12(uStack_86,CONCAT11(bStack_87,local_88)));
                if (iVar13 != 1) {
                  (&DAT_053fea2c)[uVar30 * 0x2e8] = iVar13;
                  if (bVar3 < 2) {
                    if ((int)(&DAT_053fe898)[uVar30 * 0x2e8] < 1) {
                      local_6c = 0;
                    }
                    else {
                      local_6c = 0;
                      iVar7 = (&DAT_053fe898)[uVar30 * 0x2e8] + (&DAT_053fe894)[uVar30 * 0x2e8] + -1
                      ;
                      iVar17 = 0;
                      if ((int)(&DAT_053fe890)[uVar30 * 0x2e8] <= iVar7) {
                        iVar17 = (&DAT_053fe890)[uVar30 * 0x2e8];
                      }
                      puVar24 = (uint *)((&DAT_053fe888)[uVar30 * 0x174] +
                                        (long)(iVar7 - iVar17) * 0x14);
                      if ((char)puVar24[4] == '\0') {
                        local_6c = *puVar24;
                      }
                    }
                    bVar9 = (&DAT_053fe858)[lVar6];
                    if (((bVar9 < 0x23) &&
                        ((byte)(&DAT_053fe859)[lVar6] <= (byte)PTR_DAT_04bc27f0[bVar9])) &&
                       ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
                         (ulong)((byte)(&DAT_053fe859)[lVar6] & 0x1f) & 1) != 0)) {
                      if (bVar9 == 0xd) {
                        local_64 = 3;
                      }
                      else {
                        bVar9 = FUN_020fd7d8(&DAT_053fe858 + lVar6);
                        if (7 < bVar9) goto LAB_01e297d4;
                        local_64 = *(uint *)(&DAT_04058920 + (long)(char)bVar9 * 4);
                      }
                    }
                    else {
LAB_01e297d4:
                      local_64 = 1;
                    }
                    uVar15 = FUN_021de8e0(&local_6c,&local_88,&local_64);
                    if ((uVar15 & 1) != 0) {
                      local_6c = 2;
                      FUN_01e2caf8(param_1,&DAT_053fe850 + lVar6,1,&local_6c,
                                   CONCAT13(bStack_85,
                                            CONCAT12(uStack_86,CONCAT11(bStack_87,local_88))) == 2,0
                                  );
                    }
                  }
                  if (iVar13 == 0) goto LAB_01e29828;
                }
              }
              else if ((local_6c == 0) &&
                      (iVar13 = CONCAT13(bStack_85,CONCAT12(uStack_86,CONCAT11(bStack_87,local_88)))
                      , 0 < iVar13)) {
                (&DAT_053fea2c)[uVar30 * 0x2e8] = iVar13;
                if (1 < bVar3) goto LAB_01e29828;
                if ((int)(&DAT_053fe898)[uVar30 * 0x2e8] < 1) {
                  local_6c = 0;
                }
                else {
                  local_6c = 0;
                  iVar17 = (&DAT_053fe898)[uVar30 * 0x2e8] + (&DAT_053fe894)[uVar30 * 0x2e8] + -1;
                  iVar13 = 0;
                  if ((int)(&DAT_053fe890)[uVar30 * 0x2e8] <= iVar17) {
                    iVar13 = (&DAT_053fe890)[uVar30 * 0x2e8];
                  }
                  puVar24 = (uint *)((&DAT_053fe888)[uVar30 * 0x174] +
                                    (long)(iVar17 - iVar13) * 0x14);
                  if ((char)puVar24[4] == '\0') {
                    local_6c = *puVar24;
                  }
                }
                bVar9 = (&DAT_053fe858)[lVar6];
                if (((bVar9 < 0x23) &&
                    ((byte)(&DAT_053fe859)[lVar6] <= (byte)PTR_DAT_04bc27f0[bVar9])) &&
                   ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
                     (ulong)((byte)(&DAT_053fe859)[lVar6] & 0x1f) & 1) != 0)) {
                  if (bVar9 == 0xd) {
                    local_64 = 3;
                  }
                  else {
                    bVar9 = FUN_020fd7d8(&DAT_053fe858 + lVar6);
                    if (7 < bVar9) goto LAB_01e29640;
                    local_64 = *(uint *)(&DAT_04058920 + (long)(char)bVar9 * 4);
                  }
                }
                else {
LAB_01e29640:
                  local_64 = 1;
                }
                uVar15 = FUN_021de8e0(&local_6c,&local_88,&local_64);
                if ((uVar15 & 1) == 0) goto LAB_01e29828;
                uVar16 = 1;
LAB_01e29770:
                local_6c = 2;
                FUN_01e2caf8(param_1,&DAT_053fe850 + lVar6,1,&local_6c,uVar16,0);
                goto LAB_01e29828;
              }
            }
LAB_01e29ad8:
            puVar2 = &DAT_053fe850 + lVar6;
            iVar13 = FUN_01e2ec3c(param_1,puVar2);
            if (iVar13 == 100) {
              if (bVar3 < 2) {
                local_88 = 2;
                bStack_87 = 0;
                uStack_86 = 0;
                bStack_85 = 0;
                FUN_01e2caf8(param_1,puVar2,1,&local_88,0,0);
              }
              else if (*(int *)(param_1 + 0x20c + uVar30 * 4) == 0) {
                if ((int)(&DAT_053fe898)[uVar30 * 0x2e8] < 1) {
                  piVar25 = (int *)PTR_DAT_04bc15a0;
                }
                else {
                  iVar17 = (&DAT_053fe898)[uVar30 * 0x2e8] + (&DAT_053fe894)[uVar30 * 0x2e8] + -1;
                  iVar13 = 0;
                  if ((int)(&DAT_053fe890)[uVar30 * 0x2e8] <= iVar17) {
                    iVar13 = (&DAT_053fe890)[uVar30 * 0x2e8];
                  }
                  piVar25 = (int *)((&DAT_053fe888)[uVar30 * 0x174] + (long)(iVar17 - iVar13) * 0x14
                                   + 8);
                }
                iVar13 = *piVar25;
                local_88 = 2;
                bStack_87 = 0;
                uStack_86 = 0;
                bStack_85 = 0;
                FUN_01e2caf8(param_1,puVar2,1,&local_88,0,1);
                if ((iVar13 == 1) && (*(int *)(&DAT_053fe970 + uVar30 * 0x174) == 0)) {
                  *(undefined4 *)(param_1 + 0x20c + uVar30 * 4) = 2;
                  if (*(char *)(param_1 + 0x208) != '\0') {
                    local_68 = bVar4;
                    local_88 = 0;
                    bStack_87 = 0;
                    uStack_86 = 0;
                    bStack_85 = 0;
                    local_6c = 1;
                    uStack_82 = 0;
                    bStack_84 = 0;
                    uStack_83 = 0xff;
                    if (-1 < DAT_053d0fb0) {
                      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0fb0,&local_88,
                                   &local_6c,8,0);
                    }
                  }
                  if (*(char *)(param_1 + 0x234) != '\0') {
                    local_68 = bVar4;
                    local_88 = 0;
                    bStack_87 = 0;
                    uStack_86 = 0;
                    bStack_85 = 0;
                    local_6c = 1;
                    uStack_82 = 0;
                    bStack_84 = 0;
                    uStack_83 = 0xff;
                    if (-1 < DAT_053d0fb0) {
                      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0fb0,&local_88,
                                   &local_6c,8,0);
                    }
                  }
                  if (*(char *)(param_1 + 0x260) != '\0') {
                    local_68 = bVar4;
                    local_88 = 0;
                    bStack_87 = 0;
                    uStack_86 = 0;
                    bStack_85 = 0;
                    local_6c = 1;
                    uStack_82 = 0;
                    bStack_84 = 0;
                    uStack_83 = 0xff;
                    if (-1 < DAT_053d0fb0) {
                      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0fb0,&local_88,
                                   &local_6c,8,0);
                    }
                  }
                  if (*(char *)(param_1 + 0x28c) != '\0') {
                    local_68 = bVar4;
                    local_88 = 0;
                    bStack_87 = 0;
                    uStack_86 = 0;
                    bStack_85 = 0;
                    local_6c = 1;
                    uStack_82 = 0;
                    bStack_84 = 0;
                    uStack_83 = 0xff;
                    if (-1 < DAT_053d0fb0) {
                      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0fb0,&local_88,
                                   &local_6c,8,0);
                    }
                  }
                  if (*(char *)(param_1 + 0x2b8) != '\0') {
                    local_68 = bVar4;
                    local_88 = 0;
                    bStack_87 = 0;
                    uStack_86 = 0;
                    bStack_85 = 0;
                    local_6c = 1;
                    uStack_82 = 0;
                    bStack_84 = 0;
                    uStack_83 = 0xff;
                    if (-1 < DAT_053d0fb0) {
                      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0fb0,&local_88,
                                   &local_6c,8,0);
                    }
                  }
                  if (*(char *)(param_1 + 0x2e4) != '\0') {
                    local_68 = bVar4;
                    local_88 = 0;
                    bStack_87 = 0;
                    uStack_86 = 0;
                    bStack_85 = 0;
                    local_6c = 1;
                    uStack_82 = 0;
                    bStack_84 = 0;
                    uStack_83 = 0xff;
                    if (-1 < DAT_053d0fb0) {
                      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0fb0,&local_88,
                                   &local_6c,8,0);
                    }
                  }
                  if (*(char *)(param_1 + 0x310) != '\0') {
                    local_68 = bVar4;
                    local_88 = 0;
                    bStack_87 = 0;
                    uStack_86 = 0;
                    bStack_85 = 0;
                    local_6c = 1;
                    uStack_82 = 0;
                    bStack_84 = 0;
                    uStack_83 = 0xff;
                    if (-1 < DAT_053d0fb0) {
                      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0fb0,&local_88,
                                   &local_6c,8,0);
                    }
                  }
                  if (*(char *)(param_1 + 0x33c) != '\0') {
                    local_68 = bVar4;
                    local_88 = 0;
                    bStack_87 = 0;
                    uStack_86 = 0;
                    bStack_85 = 0;
                    local_6c = 1;
                    uStack_82 = 0;
                    bStack_84 = 0;
                    uStack_83 = 0xff;
                    if (-1 < DAT_053d0fb0) {
                      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0fb0,&local_88,
                                   &local_6c,8,0);
                    }
                  }
                  if (*(char *)(param_1 + 0x368) != '\0') {
                    local_68 = bVar4;
                    local_88 = 0;
                    bStack_87 = 0;
                    uStack_86 = 0;
                    bStack_85 = 0;
                    local_6c = 1;
                    uStack_82 = 0;
                    bStack_84 = 0;
                    uStack_83 = 0xff;
                    if (-1 < DAT_053d0fb0) {
                      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0fb0,&local_88,
                                   &local_6c,8,0);
                    }
                  }
                  if (*(char *)(param_1 + 0x394) != '\0') {
                    local_68 = bVar4;
                    local_88 = 0;
                    bStack_87 = 0;
                    uStack_86 = 0;
                    bStack_85 = 0;
                    local_6c = 1;
                    uStack_82 = 0;
                    bStack_84 = 0;
                    uStack_83 = 0xff;
                    if (-1 < DAT_053d0fb0) {
                      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0fb0,&local_88,
                                   &local_6c,8,0);
                    }
                  }
                  if (*(char *)(param_1 + 0x3c0) != '\0') {
                    local_68 = bVar4;
                    local_88 = 0;
                    bStack_87 = 0;
                    uStack_86 = 0;
                    bStack_85 = 0;
                    local_6c = 1;
                    uStack_82 = 0;
                    bStack_84 = 0;
                    uStack_83 = 0xff;
                    if (-1 < DAT_053d0fb0) {
                      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0fb0,&local_88,
                                   &local_6c,8,0);
                    }
                  }
                  if (*(char *)(param_1 + 0x3ec) != '\0') {
                    local_68 = bVar4;
                    local_88 = 0;
                    bStack_87 = 0;
                    uStack_86 = 0;
                    bStack_85 = 0;
                    local_6c = 1;
                    uStack_82 = 0;
                    bStack_84 = 0;
                    uStack_83 = 0xff;
                    if (-1 < DAT_053d0fb0) {
                      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0fb0,&local_88,
                                   &local_6c,8,0);
                    }
                  }
                }
                else {
                  FUN_01e32928(param_1,puVar2);
                }
              }
            }
          }
          bVar4 = bStack_84;
          if (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) {
            uVar14 = *puVar1;
            bStack_87 = (byte)(uVar14 >> 8);
            uStack_86 = (undefined1)(uVar14 >> 0x10);
            bStack_84 = (byte)(uVar14 >> 0x20);
            uStack_83 = (undefined1)(uVar14 >> 0x28);
            if ((int)(&DAT_053fe898)[uVar30 * 0x2e8] < 1) {
              bStack_87 = bStack_87 & 3;
              piVar25 = (int *)PTR_DAT_04bc15a0;
            }
            else {
              iVar17 = 0;
              iVar7 = (&DAT_053fe898)[uVar30 * 0x2e8] + (&DAT_053fe894)[uVar30 * 0x2e8] + -1;
              iVar13 = 0;
              if ((int)(&DAT_053fe890)[uVar30 * 0x2e8] <= iVar7) {
                iVar13 = (&DAT_053fe890)[uVar30 * 0x2e8];
              }
              piVar25 = (int *)((&DAT_053fe888)[uVar30 * 0x174] + (long)(iVar7 - iVar13) * 0x14);
              if ((char)piVar25[4] == '\0') {
                iVar17 = *piVar25;
              }
              bStack_87 = bStack_87 & 3 | (byte)(iVar17 << 2);
              piVar25 = piVar25 + 2;
            }
            uVar16 = (&DAT_053fe874)[uVar30 * 0x174];
            lVar29 = (&DAT_053fe87c)[uVar30 * 0x174];
            uStack_82 = (undefined1)uVar16;
            uStack_81 = (undefined1)((ulong)uVar16 >> 8);
            uStack_80 = (undefined6)((ulong)uVar16 >> 0x10);
            local_7a = (undefined2)lVar29;
            uStack_78 = (undefined6)((ulong)lVar29 >> 0x10);
            local_88 = (byte)(&DAT_053fe870)[uVar30 * 0x2e8];
            local_6c = (&DAT_053fea2c)[uVar30 * 0x2e8];
            bVar9 = (byte)*piVar25 & 3 | (byte)((local_6c & 3) << 2) |
                    ((&DAT_053fea30)[lVar6] & 1) << 4;
            bStack_85 = bVar9 | 0xc0;
            bVar4 = bStack_84 | 0x3f;
            if ((*puVar1 !=
                 (CONCAT17(uStack_81,
                           CONCAT16(uStack_82,
                                    CONCAT15(uStack_83,
                                             CONCAT14(bStack_84,
                                                      CONCAT13(bVar9,CONCAT12(uStack_86,
                                                                              CONCAT11(bStack_87,
                                                                                       local_88)))))
                                   )) | 0x3fc0000000) ||
                *(long *)(lVar18 + 0x10) != CONCAT26(local_7a,uStack_80)) ||
                *(long *)(lVar18 + 0x16) != lVar29) {
              *puVar1 = CONCAT17(uStack_81,
                                 CONCAT16(uStack_82,
                                          CONCAT15(uStack_83,
                                                   CONCAT14(bStack_84,
                                                            CONCAT13(bVar9,CONCAT12(uStack_86,
                                                                                    CONCAT11(
                                                  bStack_87,local_88))))))) | 0x3fc0000000;
              *(ulong *)(lVar18 + 0x10) = CONCAT26(local_7a,uStack_80);
              *(long *)(lVar18 + 0x16) = lVar29;
              *(undefined1 *)(param_1 + 0x78 + uVar30 * 0x28 + 0x1e) = 1;
            }
          }
        }
        bStack_84 = bVar4;
        uVar31 = uVar31 ^ 1;
        if (bVar3 < 2) {
          uVar31 = 1;
        }
        if (((uVar31 == 0) && (((uVar11 & 1) != 0 || ((*(ushort *)(param_1 + 0x57e) & uVar5) != 0)))
            ) && (*(char *)puVar1 == 'd')) {
          local_88 = 1;
          if ((*(byte *)(lVar18 + 9) & 3) != 1) {
            local_88 = 2;
          }
          bStack_87 = 0;
          uStack_86 = 0;
          bStack_85 = 0;
          FUN_01e2caf8(param_1,&DAT_053fe850 + lVar6,0,&local_88,0,0);
        }
      }
    }
    uVar30 = uVar30 + 1;
    if (uVar30 == 10) {
      return;
    }
  } while( true );
}

