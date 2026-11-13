
/* WARNING: Type propagation algorithm not settling */

byte FUN_01241050(void)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  uint uVar6;
  uint *puVar7;
  ushort *puVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  int iVar11;
  undefined1 uVar12;
  ushort uVar13;
  uint *puVar14;
  char cVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  int *piVar19;
  long lVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  uint uVar23;
  uint uVar24;
  undefined1 uVar25;
  uint uVar26;
  uint *puVar27;
  uint *puVar28;
  uint local_6c [3];
  
  if (((((DAT_05150358 == 0) || (*(long *)(DAT_05150358 + 0xb0) == 0)) ||
       (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) == 0)) ||
      ((*(long *)(DAT_05150358 + 0x2b0) == 0 ||
       (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) == 0)))) ||
     ((uVar6 = FUN_012418e0(), puVar4 = PTR_DAT_04bbbc78, puVar3 = PTR_DAT_04bbbc70, uVar6 == 0xfffe
      || (uVar24 = (uVar6 & 0xffff) - (uint)*(ushort *)(DAT_05150358 + 0x1f8),
         *(uint *)(DAT_05150358 + 0x1d8) <= uVar24)))) {
    return 0;
  }
  puVar7 = *(uint **)(*(long *)(DAT_05150358 + 0x1e0) + (long)(int)uVar24 * 8);
  if (puVar7 == (uint *)0x0) {
    return 0;
  }
  uVar24 = *puVar7;
  local_6c[2] = 0;
  if ((uVar24 != 0) && (puVar7 != (uint *)(ulong)uVar24)) {
    puVar14 = (uint *)((long)puVar7 - (long)(ulong)uVar24);
    local_6c[2] = 0;
    if (*puVar14 != 0) {
      uVar24 = puVar14[1];
      if ((uVar24 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
        lVar20 = 0xc;
        if (*(char *)((long)puVar14 + 10) != '\0') {
          lVar20 = 0x1c;
        }
        lVar20 = (long)puVar14 + lVar20 + (ulong)(ushort)puVar14[2] * 8;
        if (lVar20 != 0) {
          uVar16 = 0;
          if ((ulong)uVar24 != 0) {
            uVar16 = (uint)((ulong)((long)puVar7 - lVar20) / (ulong)uVar24);
          }
          if (*puVar14 <= uVar16) {
            uVar16 = 0xffffffff;
          }
          if ((uVar16 < DAT_051503b8) &&
             (local_6c[2] = (uint)*(ushort *)(DAT_051503c0 + (long)(int)uVar16 * 2),
             local_6c[2] < 0x2f)) goto LAB_01241164;
        }
      }
      local_6c[2] = 0;
    }
  }
LAB_01241164:
  uVar24 = *(uint *)(DAT_05150358 + 0x3c0);
  uVar16 = uVar24;
  if (((int)uVar24 < 1) &&
     (((*(long *)(DAT_05150358 + 0x2b0) == 0 ||
       (puVar14 = *(uint **)(*(long *)(DAT_05150358 + 0x2b0) + 8), puVar14 == (uint *)0x0)) ||
      (uVar16 = *puVar14, (int)uVar16 < 1)))) {
    uVar23 = 0xffffffff;
  }
  else {
    uVar17 = 0;
    uVar23 = 0xffffffff;
    bVar5 = DAT_05150d18;
    do {
      if ((int)uVar24 < 1) {
        if (((((*(long *)(DAT_05150358 + 0x2b0) != 0) &&
              (puVar14 = *(uint **)(*(long *)(DAT_05150358 + 0x2b0) + 8), puVar14 != (uint *)0x0))
             && ((*(uint *)(DAT_05150358 + 0x2c8) <= uVar17 ||
                 (*(char *)(*(long *)(DAT_05150358 + 0x2d0) + (long)(int)uVar17) != '\0')))) &&
            ((uVar17 < *puVar14 && (puVar14[1] != 0)))) && ((ushort)puVar14[2] != 0)) {
          iVar11 = 0xc;
          if (*(char *)((long)puVar14 + 10) != '\0') {
            iVar11 = 0x1c;
          }
          puVar14 = (uint *)((ulong)(puVar14[1] * uVar17 + (uint)(ushort)puVar14[2] * 8 + iVar11) +
                            (long)puVar14);
          goto joined_r0x012412e4;
        }
      }
      else if (uVar17 < uVar24) {
        uVar1 = uVar17;
        if (*(uint *)(DAT_05150358 + 0x3b0) <= uVar17) {
          uVar1 = 0;
        }
        puVar14 = *(uint **)(*(long *)(DAT_05150358 + 0x3b8) + (ulong)uVar1 * 8);
joined_r0x012412e4:
        if (puVar14 != (uint *)0x0) {
          uVar1 = *puVar14;
          if (uVar1 == 0 || puVar14 == (uint *)(ulong)uVar1) {
LAB_01241248:
            local_6c[0] = 0;
          }
          else {
            puVar27 = (uint *)((long)puVar14 - (long)(ulong)uVar1);
            local_6c[0] = 0;
            if (*puVar27 != 0) {
              uVar1 = puVar27[1];
              if ((uVar1 != 0) && ((ulong)(ushort)puVar27[2] != 0)) {
                lVar20 = 0xc;
                if (*(char *)((long)puVar27 + 10) != '\0') {
                  lVar20 = 0x1c;
                }
                lVar20 = (long)puVar27 + lVar20 + (ulong)(ushort)puVar27[2] * 8;
                if (lVar20 != 0) {
                  uVar26 = 0;
                  if ((ulong)uVar1 != 0) {
                    uVar26 = (uint)((ulong)((long)puVar14 - lVar20) / (ulong)uVar1);
                  }
                  if (*puVar27 <= uVar26) {
                    uVar26 = 0xffffffff;
                  }
                  if ((uVar26 < DAT_05150d50) &&
                     (local_6c[0] = (uint)*(ushort *)(DAT_05150d58 + (long)(int)uVar26 * 2),
                     local_6c[0] < 0x2f)) goto LAB_0124124c;
                }
              }
              goto LAB_01241248;
            }
          }
LAB_0124124c:
          uVar1 = *puVar14;
          puVar27 = (uint *)(ulong)uVar1;
          if (local_6c[0] == local_6c[2]) {
            uVar26 = 0;
            if (uVar1 != 0) {
              if ((bVar5 & 1) == 0) {
                DAT_05150d18 = 1;
                uVar18 = 0xffffffff;
                DAT_05150d1c = 0xffffffffffffffff;
                DAT_05150d24 = 0xffffffffffffffff;
                DAT_05150d2c = 0xffffffffffffffff;
                DAT_05150d34 = 0xffffffffffffffff;
LAB_012413f8:
                if (puVar14 != puVar27) {
                  do {
                    if (uVar18 != 0xffffffff) goto LAB_01241400;
                    lVar20 = 0xc;
                    if (*(char *)((long)puVar14 + (10 - (long)puVar27)) != '\0') {
                      lVar20 = 0x1c;
                    }
                    lVar20 = (long)puVar14 + (lVar20 - (long)puVar27);
                    if (lVar20 == 0) goto LAB_01241400;
                    uVar18 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar27));
                    DAT_05150d1c = CONCAT44(0xfffffffe,(undefined4)DAT_05150d1c);
                    uVar26 = 0;
                    if (uVar18 == 0) goto LAB_01241404;
                    puVar28 = (uint *)(lVar20 + 4);
                    while (puVar28[-1] != 0x6aa33bf0) {
                      puVar28 = puVar28 + 2;
                      uVar18 = uVar18 - 1;
                      if (uVar18 == 0) {
                        uVar26 = 0;
                        goto LAB_01241404;
                      }
                    }
                    uVar18 = (ulong)*puVar28;
                    uVar2 = 0;
                    if (*puVar28 != 0xffffffff) {
                      uVar2 = uVar18;
                    }
                    DAT_05150d1c = CONCAT44((int)uVar2,(undefined4)DAT_05150d1c);
                  } while ((int)uVar2 < 0);
                  puVar8 = (ushort *)(uVar2 + (long)puVar14);
                  if (puVar8 != (ushort *)0x0) goto LAB_0124127c;
                }
LAB_01241400:
                uVar26 = 0;
              }
              else {
                uVar18 = DAT_05150d1c >> 0x20;
                if ((long)DAT_05150d1c < 0) goto LAB_012413f8;
                puVar8 = (ushort *)(uVar18 + (long)puVar14);
                if (puVar8 == (ushort *)0x0) goto LAB_01241400;
LAB_0124127c:
                uVar26 = (uint)*puVar8;
              }
LAB_01241404:
              bVar5 = 1;
            }
            if (uVar6 == uVar26) {
              puVar27 = (uint *)(ulong)*puVar14;
              if (*puVar14 != 0) {
                if ((bVar5 & 1) == 0) {
                  DAT_05150d18 = 1;
                  uVar18 = 0xffffffff;
                  DAT_05150d1c = 0xffffffffffffffff;
                  DAT_05150d24 = 0xffffffffffffffff;
                  DAT_05150d2c = 0xffffffffffffffff;
                  DAT_05150d34 = 0xffffffffffffffff;
LAB_012414d0:
                  if (puVar14 != puVar27) {
                    do {
                      if (uVar18 != 0xffffffff) goto LAB_012411fc;
                      lVar20 = 0xc;
                      if (*(char *)((long)puVar14 + (10 - (long)puVar27)) != '\0') {
                        lVar20 = 0x1c;
                      }
                      lVar20 = (long)puVar14 + (lVar20 - (long)puVar27);
                      if (lVar20 == 0) goto LAB_012411fc;
                      uVar18 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar27));
                      DAT_05150d24 = CONCAT44(0xfffffffe,(undefined4)DAT_05150d24);
                      if (uVar18 == 0) goto LAB_012411fc;
                      puVar28 = (uint *)(lVar20 + 4);
                      while (puVar28[-1] != 0x8d23365) {
                        puVar28 = puVar28 + 2;
                        uVar18 = uVar18 - 1;
                        bVar5 = 1;
                        if (uVar18 == 0) goto LAB_01241200;
                      }
                      uVar18 = (ulong)*puVar28;
                      uVar2 = 0;
                      if (*puVar28 != 0xffffffff) {
                        uVar2 = uVar18;
                      }
                      DAT_05150d24 = CONCAT44((int)uVar2,(undefined4)DAT_05150d24);
                    } while ((int)uVar2 < 0);
                    goto joined_r0x0124154c;
                  }
                }
                else {
                  uVar18 = DAT_05150d24 >> 0x20;
                  uVar2 = uVar18;
                  if ((long)DAT_05150d24 < 0) goto LAB_012414d0;
joined_r0x0124154c:
                  if (((char *)(uVar2 + (long)puVar14) != (char *)0x0) &&
                     (*(char *)(uVar2 + (long)puVar14) != '\0')) {
                    pbVar9 = (byte *)FUN_01248db0(puVar14,4,0xc7208ade);
                    if (pbVar9 == (byte *)0x0) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = (uint)*pbVar9;
                    }
                    pbVar9 = (byte *)FUN_01248db0(puVar14,5,0xd5952530);
                    if (pbVar9 == (byte *)0x0) {
                      uVar24 = 0;
                    }
                    else {
                      uVar24 = (uint)*pbVar9;
                    }
                    pbVar9 = (byte *)FUN_01248db0(puVar14,6,0x6d294255);
                    if (pbVar9 == (byte *)0x0) {
                      uVar16 = 0;
                    }
                    else {
                      uVar16 = (uint)*pbVar9;
                    }
                    pbVar9 = (byte *)FUN_01248db0(puVar14,7,0xf0fe7aec);
                    if (pbVar9 == (byte *)0x0) {
                      uVar17 = 0;
                    }
                    else {
                      uVar17 = (uint)*pbVar9;
                    }
                    if (2 < uVar6) {
                      return 0;
                    }
                    if (2 < uVar24) {
                      return 0;
                    }
                    if (2 < uVar16) {
                      return 0;
                    }
                    if (uVar17 < 3) {
                      return (&DAT_041749e0)[uVar6] |
                             ((&DAT_041749e0)[uVar16] << 2 | (&DAT_041749e0)[uVar17] << 4 |
                             (&DAT_041749e0)[uVar24]) << 2;
                    }
                    return 0;
                  }
                }
LAB_012411fc:
                bVar5 = 1;
              }
LAB_01241200:
              uVar23 = uVar17;
            }
          }
          else {
            local_6c[0] = 0;
            if ((uVar1 != 0) && (puVar14 != puVar27)) {
              puVar27 = (uint *)((long)puVar14 - (long)puVar27);
              if ((*puVar27 != 0) &&
                 ((uVar1 = puVar27[1], uVar1 != 0 && ((ulong)(ushort)puVar27[2] != 0)))) {
                lVar20 = 0xc;
                if (*(char *)((long)puVar27 + 10) != '\0') {
                  lVar20 = 0x1c;
                }
                lVar20 = (long)puVar27 + lVar20 + (ulong)(ushort)puVar27[2] * 8;
                if (lVar20 != 0) {
                  uVar26 = 0;
                  if ((ulong)uVar1 != 0) {
                    uVar26 = (uint)((ulong)((long)puVar14 - lVar20) / (ulong)uVar1);
                  }
                  if (*puVar27 <= uVar26) {
                    uVar26 = 0xffffffff;
                  }
                  if ((uVar26 < DAT_05150d50) &&
                     (uVar13 = *(ushort *)(DAT_05150d58 + (long)(int)uVar26 * 2),
                     local_6c[0] = (uint)uVar13, uVar13 < 0x2f)) goto LAB_012413bc;
                }
              }
              local_6c[0] = 0;
            }
LAB_012413bc:
            if (local_6c[0] < 0x2b) {
              if ((1L << ((ulong)local_6c[0] & 0x3f) & 0x7b800000000U) == 0) {
                if ((ulong)local_6c[0] != 0x26) goto LAB_01241554;
                iVar11 = 0x51;
              }
              else {
                iVar11 = 0x1b;
              }
            }
            else {
LAB_01241554:
              iVar11 = 0;
            }
            uVar17 = (uVar17 + iVar11) - 1;
          }
        }
      }
      uVar17 = uVar17 + 1;
    } while ((int)uVar17 < (int)uVar16);
  }
  if (*puVar7 != 0) {
    cVar15 = *PTR_DAT_04bbbc70;
    do {
      if (cVar15 == '\0') {
        cVar15 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined4 *)(puVar4 + 0x60) = 0xffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
      }
      else {
        uVar6 = *(uint *)(puVar4 + 0x10);
        if (-1 < (int)uVar6) {
          if (((short *)((ulong)uVar6 + (long)puVar7) != (short *)0x0) &&
             (*(short *)((ulong)uVar6 + (long)puVar7) != -2)) {
            puVar8 = (ushort *)FUN_01246470(puVar7,4,0x6ac5a6df,*(undefined8 *)PTR_DAT_04bbbcb8);
            if (puVar8 == (ushort *)0x0) {
              uVar13 = 0xfffe;
            }
            else {
              uVar13 = *puVar8;
            }
            local_6c[0] = (uint)uVar13;
            local_6c[1] = 0;
            FUN_0277d4ac(local_6c);
          }
          break;
        }
        if (uVar6 != 0xffffffff) break;
      }
      puVar14 = (uint *)(ulong)*puVar7;
      if ((*puVar7 == 0) || (puVar7 == puVar14)) break;
      lVar20 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar14)) != '\0') {
        lVar20 = 0x1c;
      }
      lVar20 = (long)puVar7 + (lVar20 - (long)puVar14);
      if (lVar20 == 0) break;
      uVar18 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar14));
      *(undefined4 *)(puVar4 + 0x10) = 0xfffffffe;
      if (uVar18 == 0) break;
      piVar19 = (int *)(lVar20 + 4);
      while (piVar19[-1] != 0x6ac5a6df) {
        piVar19 = piVar19 + 2;
        uVar18 = uVar18 - 1;
        if (uVar18 == 0) goto LAB_012416c4;
      }
      iVar11 = 0;
      if (*piVar19 != -1) {
        iVar11 = *piVar19;
      }
      *(int *)(puVar4 + 0x10) = iVar11;
      if (*puVar7 == 0) break;
    } while( true );
  }
LAB_012416c4:
  if (uVar23 != 0xffffffff) {
    if ((int)*(uint *)(DAT_05150358 + 0x3c0) < 1) {
      if (*(long *)(DAT_05150358 + 0x2b0) == 0) {
        return 0;
      }
      puVar7 = *(uint **)(*(long *)(DAT_05150358 + 0x2b0) + 8);
      if (puVar7 == (uint *)0x0) {
        return 0;
      }
      if ((uVar23 < *(uint *)(DAT_05150358 + 0x2c8)) &&
         (*(char *)(*(long *)(DAT_05150358 + 0x2d0) + (long)(int)uVar23) == '\0')) {
        return 0;
      }
      if (*puVar7 <= uVar23) {
        return 0;
      }
      if (puVar7[1] == 0) {
        return 0;
      }
      if ((ushort)puVar7[2] == 0) {
        return 0;
      }
      iVar11 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        iVar11 = 0x1c;
      }
      lVar20 = (ulong)(puVar7[1] * uVar23 + (uint)(ushort)puVar7[2] * 8 + iVar11) + (long)puVar7;
    }
    else {
      if (*(uint *)(DAT_05150358 + 0x3c0) <= uVar23) {
        return 0;
      }
      if (*(uint *)(DAT_05150358 + 0x3b0) <= uVar23) {
        uVar23 = 0;
      }
      lVar20 = *(long *)(*(long *)(DAT_05150358 + 0x3b8) + (ulong)uVar23 * 8);
    }
    if (lVar20 != 0) {
      puVar10 = (undefined1 *)FUN_01248db0(lVar20,4,0xc7208ade);
      if (puVar10 == (undefined1 *)0x0) {
        uVar21 = 0;
      }
      else {
        uVar21 = *puVar10;
      }
      puVar10 = (undefined1 *)FUN_01248db0(lVar20,5,0xd5952530);
      if (puVar10 == (undefined1 *)0x0) {
        uVar22 = 0;
      }
      else {
        uVar22 = *puVar10;
      }
      puVar10 = (undefined1 *)FUN_01248db0(lVar20,6,0x6d294255);
      if (puVar10 == (undefined1 *)0x0) {
        uVar25 = 0;
      }
      else {
        uVar25 = *puVar10;
      }
      puVar10 = (undefined1 *)FUN_01248db0(lVar20,7,0xf0fe7aec);
      if (puVar10 == (undefined1 *)0x0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *puVar10;
      }
      bVar5 = FUN_01240fd0(uVar21,uVar22,uVar25,uVar12);
      return bVar5;
    }
  }
  return 0;
}

