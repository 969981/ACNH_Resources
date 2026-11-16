
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0251a5a0(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  int iVar11;
  long *plVar12;
  uint *puVar13;
  ulong uVar14;
  char cVar15;
  uint uVar16;
  long lVar17;
  uint *puVar18;
  int *piVar19;
  long *plVar20;
  byte *pbVar21;
  ulong uVar22;
  byte local_7c [12];
  byte local_70 [12];
  uint local_64;
  
  puVar7 = PTR_DAT_04bb39b0;
  if ((*(long *)PTR_DAT_04bb39b0 != 0) && (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) != 0)) {
    FUN_02507c6c(local_70,1,1,1,0);
    puVar8 = PTR_DAT_04bb5038;
    puVar6 = PTR_DAT_04bb3350;
    puVar5 = PTR_DAT_04bb32e0;
    puVar4 = PTR_DAT_04bb3238;
    puVar3 = PTR_DAT_04bb27c0;
    uVar16 = (uint)local_70[0];
    if (local_70[0] < 8) {
      puVar1 = PTR_DAT_04bb3780 + 0x10;
      lVar17 = *(long *)puVar7;
      local_7c[0] = local_70[0];
      do {
        if ((lVar17 != 0) && (*(int *)(lVar17 + 0x15c) != 0)) {
          pbVar21 = puVar5;
          if (*(int *)(lVar17 + 0x15c) != 0) {
            pbVar21 = (byte *)(lVar17 + 0x158);
          }
          if (7 < *pbVar21 || *pbVar21 != uVar16) {
            puVar13 = (uint *)puVar4;
            if (DAT_054f5738 != 0) {
              puVar13 = (uint *)(DAT_054f5738 + (ulong)uVar16 * 4 + 0xde8);
            }
            lVar17 = *(long *)puVar3;
            if (lVar17 != 0) {
              uVar16 = *puVar13;
              if ((((uVar16 == 0) ||
                   (plVar20 = *(long **)(*(long *)(*(long *)(lVar17 + 0x1c0) + 8) +
                                        ((ulong)(uVar16 >> 0x11) & 0x7ff8)), plVar20 == (long *)0x0)
                   ) || ((*(uint *)(plVar20 + 0x49) >> 1 & 1) != 0)) ||
                 (*(uint *)(plVar20 + 0x46) != uVar16)) {
                plVar20 = (long *)0x0;
              }
              if (*(int *)(lVar17 + 0x288) == 1 || *(int *)(lVar17 + 0x288) == -1) {
                plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
                lVar17 = *(long *)puVar3;
                iVar11 = (**(code **)(*plVar12 + 0x60))();
                if (iVar11 < 0x11) {
                  uVar16 = 1;
                }
                else {
                  uVar16 = *(uint *)(lVar17 + 0x5e8);
                  if (4 < uVar16) goto LAB_0251a730;
                  uVar16 = 0x1aU >> (ulong)(uVar16 & 0x1f) & 1;
                }
              }
              else {
LAB_0251a730:
                uVar16 = 0;
              }
              if (plVar20 != (long *)0x0) {
                lVar17 = plVar20[0x2a];
                if (((*PTR_DAT_04bb3778 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar11 != 0)) {
                  *(undefined **)PTR_DAT_04bb3770 = puVar1;
                  __cxa_guard_release(PTR_DAT_04bb3778);
                }
                uVar22 = (**(code **)(*plVar20 + 0x20))(plVar20,PTR_DAT_04bb3770);
                uVar2 = 0;
                if ((int)lVar17 == 1) {
                  uVar2 = uVar16;
                }
                if (((uVar22 & 1) != 0) && (uVar2 != 0)) {
                  local_64 = 0;
                  if (plVar20[0xe] != 0) {
                    uVar16 = *(uint *)(plVar20[0xe] + 0x280);
                    local_64 = 0;
                    if (uVar16 < 0x149) {
                      local_64 = uVar16;
                    }
                  }
                  puVar13 = (uint *)FUN_0251d928(local_64);
                  if (*puVar13 != 0) {
                    cVar15 = *PTR_DAT_04bc2fe0;
                    do {
                      if (cVar15 == '\0') {
                        cVar15 = '\x01';
                        *PTR_DAT_04bc2fe0 = 1;
                        puVar9 = PTR_DAT_04bc2fe8;
                        *(undefined8 *)PTR_DAT_04bc2fe8 = 0xffffffffffffffff;
                        *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar9 + 0xa0) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar9 + 0x50) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar9 + 0x58) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar9 + 0x60) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar9 + 0x68) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar9 + 0x70) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar9 + 0x78) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar9 + 0x80) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar9 + 0x88) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar9 + 0x90) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar9 + 0x98) = 0xffffffffffffffff;
                        uVar16 = *puVar13;
                      }
                      else {
                        uVar16 = *(uint *)(PTR_DAT_04bc2fe8 + 0x50);
                        if (-1 < (int)uVar16) {
                          if (((char *)((ulong)uVar16 + (long)puVar13) != (char *)0x0) &&
                             (*(char *)((ulong)uVar16 + (long)puVar13) == '\0')) {
                            return 0;
                          }
                          break;
                        }
                        if (uVar16 != 0xffffffff) break;
                        uVar16 = *puVar13;
                      }
                      if ((uVar16 == 0) || (puVar18 = (uint *)(ulong)uVar16, puVar13 == puVar18))
                      break;
                      lVar17 = 0xc;
                      if (*(char *)((long)puVar13 + (10 - (long)puVar18)) != '\0') {
                        lVar17 = 0x1c;
                      }
                      lVar17 = (long)puVar13 + (lVar17 - (long)puVar18);
                      if (lVar17 == 0) break;
                      uVar22 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar18));
                      *(undefined4 *)(PTR_DAT_04bc2fe8 + 0x50) = 0xfffffffe;
                      if (uVar22 == 0) break;
                      piVar19 = (int *)(lVar17 + 4);
                      while (piVar19[-1] != -0x13016225) {
                        piVar19 = piVar19 + 2;
                        uVar22 = uVar22 - 1;
                        if (uVar22 == 0) goto LAB_0251a930;
                      }
                      iVar11 = 0;
                      if (*piVar19 != -1) {
                        iVar11 = *piVar19;
                      }
                      *(int *)(PTR_DAT_04bc2fe8 + 0x50) = iVar11;
                      if (*puVar13 == 0) break;
                    } while( true );
                  }
                }
              }
            }
          }
        }
LAB_0251a930:
        bVar10 = local_7c[0];
        uVar22 = (ulong)local_7c[0];
        if (7 < local_7c[0]) {
          return 1;
        }
        if (uVar22 + 1 == 8) {
          return 1;
        }
        pbVar21 = puVar8 + uVar22 + 1;
        uVar14 = FUN_02507924(local_7c,pbVar21);
        if ((uVar14 & 1) == 0) {
          if (uVar22 + 2 == 8) {
            return 1;
          }
          pbVar21 = puVar8 + uVar22 + 2;
          uVar14 = FUN_02507924(local_7c,pbVar21);
          if ((uVar14 & 1) == 0) {
            if (uVar22 + 3 == 8) {
              return 1;
            }
            pbVar21 = puVar8 + uVar22 + 3;
            uVar14 = FUN_02507924(local_7c,pbVar21);
            if ((uVar14 & 1) == 0) {
              if (uVar22 + 4 == 8) {
                return 1;
              }
              pbVar21 = puVar8 + uVar22 + 4;
              uVar14 = FUN_02507924(local_7c,pbVar21);
              if ((uVar14 & 1) == 0) {
                if (uVar22 + 5 == 8) {
                  return 1;
                }
                pbVar21 = puVar8 + uVar22 + 5;
                uVar14 = FUN_02507924(local_7c,pbVar21);
                if ((uVar14 & 1) == 0) {
                  if (uVar22 + 6 == 8) {
                    return 1;
                  }
                  pbVar21 = puVar8 + uVar22 + 6;
                  uVar14 = FUN_02507924(local_7c,pbVar21);
                  if ((uVar14 & 1) == 0) {
                    if (uVar22 + 7 == 8) {
                      return 1;
                    }
                    pbVar21 = puVar8 + uVar22 + 7;
                    uVar14 = FUN_02507924(local_7c,pbVar21);
                    if ((uVar14 & 1) == 0) {
                      if (bVar10 == 0) {
                        return 1;
                      }
                      pbVar21 = puVar8 + uVar22 + 8;
                      FUN_02507924(local_7c,pbVar21);
                    }
                  }
                }
              }
            }
          }
        }
        local_7c[0] = *pbVar21;
        uVar16 = (uint)local_7c[0];
        if (7 < uVar16) {
          return 1;
        }
        lVar17 = *(long *)puVar7;
      } while( true );
    }
  }
  return 1;
}

