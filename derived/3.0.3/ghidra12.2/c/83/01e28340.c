
void FUN_01e28340(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  char cVar16;
  ushort uVar17;
  uint *puVar18;
  undefined8 *puVar19;
  uint *puVar20;
  int *piVar21;
  ulong uVar22;
  uint local_6c;
  uint local_68;
  uint local_64;
  
  puVar4 = PTR_DAT_04bb4760;
  uVar22 = 0;
  do {
    uVar10 = (uint)uVar22;
    if (uVar10 < 10) {
      lVar2 = uVar22 * 0xba0;
      if ((&DAT_053fee41)[lVar2] != '\0') {
        uVar9 = FUN_0219e890(&DAT_053fe348 + lVar2);
        if ((int)(&DAT_053fe898)[uVar22 * 0x2e8] < 1) {
          local_64 = 0;
        }
        else {
          local_64 = 0;
          iVar3 = (&DAT_053fe898)[uVar22 * 0x2e8] + (&DAT_053fe894)[uVar22 * 0x2e8] + -1;
          iVar11 = 0;
          if ((int)(&DAT_053fe890)[uVar22 * 0x2e8] <= iVar3) {
            iVar11 = (&DAT_053fe890)[uVar22 * 0x2e8];
          }
          puVar18 = (uint *)((&DAT_053fe888)[uVar22 * 0x174] + (long)(iVar3 - iVar11) * 0x14);
          if ((char)puVar18[4] == '\0') {
            local_64 = *puVar18;
          }
        }
        if ((int)local_64 < 0x1b && ((uVar9 ^ 0xffffffff) & 1) == 0) {
          lVar1 = *(long *)puVar4 + (uVar22 & 0xffffffff) * 0x15;
          if (0x6c < uVar10) {
            lVar1 = *(long *)puVar4;
          }
          uVar17 = (ushort)*(byte *)(lVar1 + 4) | (*(byte *)(lVar1 + 5) & 3) << 8;
          if (0x1ff < uVar17) {
            uVar17 = uVar17 | 0xfc00;
          }
          bVar6 = DAT_055c1b60 == &DAT_055c1b58;
          puVar19 = DAT_055c1b60 + -8;
          if ((!bVar6) && (puVar15 = DAT_055c1b60, uVar17 != 0)) {
            do {
              puVar15 = (undefined8 *)puVar15[1];
              uVar17 = uVar17 - 1;
              bVar6 = puVar15 == &DAT_055c1b58;
            } while (!bVar6 && uVar17 != 0);
            puVar19 = puVar15 + -8;
          }
          puVar15 = &DAT_055c04a0;
          if (!bVar6) {
            puVar15 = puVar19;
          }
          local_64 = uVar10;
          if (*(int *)(puVar15 + 7) == 0x6622bd46) {
            local_64 = 0;
            uVar12 = FUN_0220f914(&local_64);
            uVar10 = local_64;
            local_68 = (&DAT_053fea2c)[uVar22 * 0x2e8];
            if (local_68 == 2) {
              if (local_64 == 0) {
                (&DAT_053fea2c)[uVar22 * 0x2e8] = 0;
                if ((int)(&DAT_053fe898)[uVar22 * 0x2e8] < 1) {
                  local_68 = 0;
                }
                else {
                  local_68 = 0;
                  iVar3 = (&DAT_053fe898)[uVar22 * 0x2e8] + (&DAT_053fe894)[uVar22 * 0x2e8] + -1;
                  iVar11 = 0;
                  if ((int)(&DAT_053fe890)[uVar22 * 0x2e8] <= iVar3) {
                    iVar11 = (&DAT_053fe890)[uVar22 * 0x2e8];
                  }
                  puVar18 = (uint *)((&DAT_053fe888)[uVar22 * 0x174] + (long)(iVar3 - iVar11) * 0x14
                                    );
                  if ((char)puVar18[4] == '\0') {
                    local_68 = *puVar18;
                  }
                }
                bVar7 = (&DAT_053fe858)[lVar2];
                if (((bVar7 < 0x23) &&
                    ((byte)(&DAT_053fe859)[lVar2] <= (byte)PTR_DAT_04bc27f0[bVar7])) &&
                   (((uint)(&DAT_053e6eb8)[bVar7] >> (ulong)((byte)(&DAT_053fe859)[lVar2] & 0x1f) &
                    1) != 0)) {
                  if (bVar7 == 0xd) {
                    local_6c = 3;
                  }
                  else {
                    bVar7 = FUN_020fd7d8(&DAT_053fe858 + lVar2);
                    if (7 < bVar7) goto LAB_01e287ec;
                    local_6c = *(uint *)(&DAT_04058920 + (long)(char)bVar7 * 4);
                  }
                }
                else {
LAB_01e287ec:
                  local_6c = 1;
                }
                uVar13 = FUN_021de8e0(&local_68,&local_64,&local_6c);
                if ((uVar13 & 1) != 0) {
                  uVar14 = 0;
LAB_01e28824:
                  local_68 = 2;
                  FUN_01e2caf8(param_1,&DAT_053fe850 + lVar2,0,&local_68,uVar14,0);
                }
LAB_01e2882c:
                puVar5 = PTR_DAT_04bc1568;
                if ((uVar12 & 1) == 0) {
                  bVar7 = (&DAT_053fea30)[lVar2] & 0xfe;
LAB_01e28aa0:
                  (&DAT_053fea30)[lVar2] = bVar7;
                }
                else {
                  if (((&DAT_053fea30)[lVar2] & 1) != 0) goto LAB_01e283c0;
                  if ((int)(&DAT_053fe898)[uVar22 * 0x2e8] < 1) {
                    local_68 = 0;
                  }
                  else {
                    local_68 = 0;
                    iVar3 = (&DAT_053fe898)[uVar22 * 0x2e8] + (&DAT_053fe894)[uVar22 * 0x2e8] + -1;
                    iVar11 = 0;
                    if ((int)(&DAT_053fe890)[uVar22 * 0x2e8] <= iVar3) {
                      iVar11 = (&DAT_053fe890)[uVar22 * 0x2e8];
                    }
                    puVar18 = (uint *)((&DAT_053fe888)[uVar22 * 0x174] +
                                      (long)(iVar3 - iVar11) * 0x14);
                    if ((char)puVar18[4] == '\0') {
                      local_68 = *puVar18;
                    }
                  }
                  if (DAT_053e0208 == 0) {
LAB_01e2896c:
                    puVar18 = &DAT_053dcef0;
                  }
                  else {
                    if ((int)*(uint *)(DAT_053e0208 + 0x16ac8) < 1) {
                      if ((((*(long *)(DAT_053e0208 + 0x169b8) != 0) &&
                           (puVar18 = *(uint **)(*(long *)(DAT_053e0208 + 0x169b8) + 8),
                           puVar18 != (uint *)0x0)) &&
                          (((*(uint *)(DAT_053e0208 + 0x169d0) <= local_68 ||
                            (*(char *)(*(long *)(DAT_053e0208 + 0x169d8) + (long)(int)local_68) !=
                             '\0')) && ((local_68 < *puVar18 && (puVar18[1] != 0)))))) &&
                         ((ushort)puVar18[2] != 0)) {
                        iVar11 = 0xc;
                        if (*(char *)((long)puVar18 + 10) != '\0') {
                          iVar11 = 0x1c;
                        }
                        puVar18 = (uint *)((ulong)(puVar18[1] * local_68 +
                                                   (uint)(ushort)puVar18[2] * 8 + iVar11) +
                                          (long)puVar18);
                        if (puVar18 != (uint *)0x0) goto LAB_01e28974;
                      }
                      goto LAB_01e2896c;
                    }
                    if (*(uint *)(DAT_053e0208 + 0x16ac8) <= local_68) goto LAB_01e2896c;
                    uVar10 = local_68;
                    if (*(uint *)(DAT_053e0208 + 0x16ab8) <= local_68) {
                      uVar10 = 0;
                    }
                    puVar18 = *(uint **)(*(long *)(DAT_053e0208 + 0x16ac0) + (ulong)uVar10 * 8);
                    if (puVar18 == (uint *)0x0) goto LAB_01e2896c;
                  }
LAB_01e28974:
                  if (*puVar18 != 0) {
                    cVar16 = DAT_0538d1a8;
                    do {
                      if (cVar16 == '\0') {
                        cVar16 = '\x01';
                        *PTR_DAT_04bc1560 = 1;
                        *(undefined8 *)puVar5 = 0xffffffffffffffff;
                        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar5 + 0x90) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar5 + 0x98) = 0xffffffffffffffff;
                      }
                      else {
                        uVar10 = *(uint *)(puVar5 + 0x50);
                        if (-1 < (int)uVar10) {
                          if ((byte *)((ulong)uVar10 + (long)puVar18) != (byte *)0x0) {
                            bVar7 = *(byte *)((ulong)uVar10 + (long)puVar18);
                            goto LAB_01e28a70;
                          }
                          break;
                        }
                        if (uVar10 != 0xffffffff) break;
                      }
                      puVar20 = (uint *)(ulong)*puVar18;
                      bVar7 = 2;
                      if ((*puVar18 == 0) || (puVar18 == puVar20)) goto LAB_01e28a70;
                      lVar1 = 0xc;
                      if (*(char *)((long)puVar18 + (10 - (long)puVar20)) != '\0') {
                        lVar1 = 0x1c;
                      }
                      lVar1 = (long)puVar18 + (lVar1 - (long)puVar20);
                      if (lVar1 == 0) break;
                      uVar12 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar20));
                      *(undefined4 *)(puVar5 + 0x50) = 0xfffffffe;
                      if (uVar12 == 0) break;
                      piVar21 = (int *)(lVar1 + 4);
                      while (piVar21[-1] != 0x67850558) {
                        piVar21 = piVar21 + 2;
                        uVar12 = uVar12 - 1;
                        if (uVar12 == 0) goto LAB_01e28a6c;
                      }
                      iVar11 = 0;
                      if (*piVar21 != -1) {
                        iVar11 = *piVar21;
                      }
                      *(int *)(puVar5 + 0x50) = iVar11;
                      if (*puVar18 == 0) break;
                    } while( true );
                  }
LAB_01e28a6c:
                  bVar7 = 2;
LAB_01e28a70:
                  if (1 < bVar7) {
                    bVar7 = 2;
                  }
                  uVar10 = FUN_00a86724(DAT_04da7238);
                  if ((uVar10 & 0xfffffffe) == 6) goto LAB_01e28a98;
                  uVar12 = FUN_021ded20();
                  if ((uVar12 & 1) == 0) goto LAB_01e283c0;
                  bVar8 = (&DAT_053fe858)[lVar2];
                  if (((bVar8 < 0x23) &&
                      ((byte)(&DAT_053fe859)[lVar2] <= (byte)PTR_DAT_04bc27f0[bVar8])) &&
                     (((uint)(&DAT_053e6eb8)[bVar8] >> (ulong)((byte)(&DAT_053fe859)[lVar2] & 0x1f)
                      & 1) != 0)) {
                    if (bVar8 == 0xd) {
                      local_68 = 3;
                    }
                    else {
                      bVar8 = FUN_020fd7d8(&DAT_053fe858 + lVar2);
                      if (7 < bVar8) goto LAB_01e28b24;
                      local_68 = *(uint *)(&DAT_04058920 + (long)(char)bVar8 * 4);
                    }
                  }
                  else {
LAB_01e28b24:
                    local_68 = 1;
                  }
                  if (local_68 != 3) {
                    if (bVar7 == 0) {
                      iVar11 = FUN_01e2caa0(100);
                      local_6c = FUN_0220fcc4(&DAT_053fe858 + lVar2,0);
                      uVar12 = (ulong)local_6c;
                      if (3 < local_6c) {
                        uVar12 = 0;
                      }
                      if ((int)(&DAT_04101d10)[uVar12] <= iVar11) goto LAB_01e28a98;
                    }
                    else if (bVar7 == 1) {
LAB_01e28a98:
                      bVar7 = (&DAT_053fea30)[lVar2] | 1;
                      goto LAB_01e28aa0;
                    }
                  }
                }
              }
            }
            else if (local_68 == 1) {
              if (local_64 != 1) {
                (&DAT_053fea2c)[uVar22 * 0x2e8] = local_64;
                if ((int)(&DAT_053fe898)[uVar22 * 0x2e8] < 1) {
                  local_68 = 0;
                }
                else {
                  local_68 = 0;
                  iVar3 = (&DAT_053fe898)[uVar22 * 0x2e8] + (&DAT_053fe894)[uVar22 * 0x2e8] + -1;
                  iVar11 = 0;
                  if ((int)(&DAT_053fe890)[uVar22 * 0x2e8] <= iVar3) {
                    iVar11 = (&DAT_053fe890)[uVar22 * 0x2e8];
                  }
                  puVar18 = (uint *)((&DAT_053fe888)[uVar22 * 0x174] + (long)(iVar3 - iVar11) * 0x14
                                    );
                  if ((char)puVar18[4] == '\0') {
                    local_68 = *puVar18;
                  }
                }
                bVar7 = (&DAT_053fe858)[lVar2];
                if (((bVar7 < 0x23) &&
                    ((byte)(&DAT_053fe859)[lVar2] <= (byte)PTR_DAT_04bc27f0[bVar7])) &&
                   (((uint)(&DAT_053e6eb8)[bVar7] >> (ulong)((byte)(&DAT_053fe859)[lVar2] & 0x1f) &
                    1) != 0)) {
                  if (bVar7 == 0xd) {
                    local_6c = 3;
                  }
                  else {
                    bVar7 = FUN_020fd7d8(&DAT_053fe858 + lVar2);
                    if (7 < bVar7) goto LAB_01e28774;
                    local_6c = *(uint *)(&DAT_04058920 + (long)(char)bVar7 * 4);
                  }
                }
                else {
LAB_01e28774:
                  local_6c = 1;
                }
                uVar13 = FUN_021de8e0(&local_68,&local_64,&local_6c);
                if ((uVar13 & 1) != 0) {
                  local_68 = 2;
                  FUN_01e2caf8(param_1,&DAT_053fe850 + lVar2,0,&local_68,local_64 == 2,0);
                }
                if (uVar10 == 0) goto LAB_01e2882c;
              }
            }
            else if ((local_68 == 0) && (0 < (int)local_64)) {
              (&DAT_053fea2c)[uVar22 * 0x2e8] = local_64;
              if ((int)(&DAT_053fe898)[uVar22 * 0x2e8] < 1) {
                local_68 = 0;
              }
              else {
                local_68 = 0;
                iVar3 = (&DAT_053fe898)[uVar22 * 0x2e8] + (&DAT_053fe894)[uVar22 * 0x2e8] + -1;
                iVar11 = 0;
                if ((int)(&DAT_053fe890)[uVar22 * 0x2e8] <= iVar3) {
                  iVar11 = (&DAT_053fe890)[uVar22 * 0x2e8];
                }
                puVar18 = (uint *)((&DAT_053fe888)[uVar22 * 0x174] + (long)(iVar3 - iVar11) * 0x14);
                if ((char)puVar18[4] == '\0') {
                  local_68 = *puVar18;
                }
              }
              bVar7 = (&DAT_053fe858)[lVar2];
              if (((bVar7 < 0x23) && ((byte)(&DAT_053fe859)[lVar2] <= (byte)PTR_DAT_04bc27f0[bVar7])
                  ) && (((uint)(&DAT_053e6eb8)[bVar7] >>
                         (ulong)((byte)(&DAT_053fe859)[lVar2] & 0x1f) & 1) != 0)) {
                if (bVar7 == 0xd) {
                  local_6c = 3;
                }
                else {
                  bVar7 = FUN_020fd7d8(&DAT_053fe858 + lVar2);
                  if (7 < bVar7) goto LAB_01e28710;
                  local_6c = *(uint *)(&DAT_04058920 + (long)(char)bVar7 * 4);
                }
              }
              else {
LAB_01e28710:
                local_6c = 1;
              }
              uVar13 = FUN_021de8e0(&local_68,&local_64,&local_6c);
              if ((uVar13 & 1) != 0) {
                uVar14 = 1;
                goto LAB_01e28824;
              }
              goto LAB_01e2882c;
            }
          }
        }
      }
    }
LAB_01e283c0:
    uVar22 = uVar22 + 1;
    if (uVar22 == 10) {
      return;
    }
  } while( true );
}

