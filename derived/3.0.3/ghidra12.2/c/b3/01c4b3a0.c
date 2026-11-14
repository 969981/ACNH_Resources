
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff90 : 0x01c4bb74 */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01c4b3a0(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  undefined2 uVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  ulong uVar17;
  int *piVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  short sVar22;
  uint *puVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  uint local_7c;
  byte local_70;
  uint local_64;
  
  lVar21 = *(long *)PTR_DAT_04bb4928;
  iVar10 = FUN_00a8de70(*(undefined8 *)PTR_DAT_04bb30a0,lVar21);
  *(uint *)(param_1 + 0x204) = *(byte *)(lVar21 + 2) - 1;
  bVar4 = *(byte *)(lVar21 + 4);
  *(undefined4 *)(param_1 + 0x200) = 0;
  iVar11 = 1;
  if (6 < bVar4 - 9) {
    iVar11 = (uint)(4 < bVar4 - 0x10) << 1;
  }
  iVar1 = 0;
  if (4 < bVar4 - 4) {
    iVar1 = iVar11;
  }
  *(int *)(param_1 + 0x208) = iVar1;
  puVar8 = PTR_DAT_04bbcae8;
  puVar6 = PTR_DAT_04bbcad8;
  uVar14 = *(uint *)(*(long *)PTR_DAT_04bb3d80 + 0x310);
  if (((int)uVar14 < 1) &&
     (((lVar21 = *(long *)(*(long *)PTR_DAT_04bb3d80 + 0x200), lVar21 == 0 ||
       (puVar23 = *(uint **)(lVar21 + 8), puVar23 == (uint *)0x0)) ||
      (uVar14 = *puVar23, (int)uVar14 < 1)))) {
    local_7c = 0;
  }
  else {
    local_7c = 0;
    uVar24 = 0;
    do {
      lVar21 = *(long *)PTR_DAT_04bb3d80;
      if ((int)*(uint *)(lVar21 + 0x310) < 1) {
        if (((((*(long *)(lVar21 + 0x200) == 0) ||
              (puVar23 = *(uint **)(*(long *)(lVar21 + 0x200) + 8), puVar23 == (uint *)0x0)) ||
             ((uVar24 < *(uint *)(lVar21 + 0x218) &&
              (*(char *)(*(long *)(lVar21 + 0x220) + uVar24) == '\0')))) ||
            ((*puVar23 <= uVar24 || (puVar23[1] == 0)))) || ((ushort)puVar23[2] == 0))
        goto LAB_01c4b564;
        iVar11 = 0xc;
        if (*(char *)((long)puVar23 + 10) != '\0') {
          iVar11 = 0x1c;
        }
        puVar23 = (uint *)((ulong)(puVar23[1] * (int)uVar24 + (uint)(ushort)puVar23[2] * 8 + iVar11)
                          + (long)puVar23);
        uVar19 = *puVar23;
      }
      else if (uVar24 < *(uint *)(lVar21 + 0x310)) {
        uVar17 = uVar24 & 0xffffffff;
        if (*(uint *)(lVar21 + 0x300) <= uVar24) {
          uVar17 = 0;
        }
        puVar23 = *(uint **)(*(long *)(lVar21 + 0x308) + uVar17 * 8);
        uVar19 = *puVar23;
      }
      else {
LAB_01c4b564:
        puVar23 = (uint *)0x0;
        uVar19 = uRam0000000000000000;
      }
      if (uVar19 != 0) {
        cVar13 = *PTR_DAT_04bbcae0;
        do {
          puVar7 = PTR_DAT_04bbcae0;
          if (cVar13 == '\0') {
            cVar13 = '\x01';
            *(undefined8 *)puVar8 = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
            *(undefined4 *)(puVar8 + 0x48) = 0xffffffff;
            *puVar7 = 1;
            *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
          }
          else {
            uVar19 = *(uint *)(puVar8 + 0x20);
            if (-1 < (int)uVar19) {
              if ((short *)((ulong)uVar19 + (long)puVar23) != (short *)0x0) {
                sVar22 = *(short *)((ulong)uVar19 + (long)puVar23);
                goto LAB_01c4b654;
              }
              break;
            }
            if (uVar19 != 0xffffffff) break;
          }
          puVar16 = (uint *)(ulong)*puVar23;
          sVar22 = 0;
          if ((*puVar23 == 0) || (puVar23 == puVar16)) goto LAB_01c4b654;
          lVar2 = 0xc;
          if (*(char *)((long)puVar23 + (10 - (long)puVar16)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar23 + (lVar2 - (long)puVar16);
          if (lVar2 == 0) break;
          uVar17 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar16));
          *(undefined4 *)(puVar8 + 0x20) = 0xfffffffe;
          if (uVar17 == 0) break;
          piVar18 = (int *)(lVar2 + 4);
          while (piVar18[-1] != 0x20cb67bc) {
            piVar18 = piVar18 + 2;
            uVar17 = uVar17 - 1;
            if (uVar17 == 0) goto LAB_01c4b650;
          }
          iVar11 = 0;
          if (*piVar18 != -1) {
            iVar11 = *piVar18;
          }
          *(int *)(puVar8 + 0x20) = iVar11;
          if (*puVar23 == 0) break;
        } while( true );
      }
LAB_01c4b650:
      sVar22 = 0;
LAB_01c4b654:
      local_64 = *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x65204);
      if (1 < local_64) {
        local_64 = 0;
      }
      sVar9 = FUN_013ef41c(lVar21,param_1 + 0x204,param_1 + 0x208,sVar22,&local_64);
      if (sVar9 != 0) {
        if (*puVar23 != 0) {
          cVar13 = *PTR_DAT_04bbcae0;
          do {
            puVar7 = PTR_DAT_04bbcae0;
            if (cVar13 == '\0') {
              cVar13 = '\x01';
              *(undefined8 *)puVar8 = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
              *(undefined4 *)(puVar8 + 0x48) = 0xffffffff;
              *puVar7 = 1;
              *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
            }
            else {
              uVar19 = *(uint *)(puVar8 + 0x20);
              if (-1 < (int)uVar19) {
                if ((undefined2 *)((ulong)uVar19 + (long)puVar23) != (undefined2 *)0x0) {
                  uVar12 = *(undefined2 *)((ulong)uVar19 + (long)puVar23);
                  goto LAB_01c4b784;
                }
                break;
              }
              if (uVar19 != 0xffffffff) break;
            }
            puVar16 = (uint *)(ulong)*puVar23;
            uVar12 = 0;
            if ((*puVar23 == 0) || (puVar23 == puVar16)) goto LAB_01c4b784;
            lVar21 = 0xc;
            if (*(char *)((long)puVar23 + (10 - (long)puVar16)) != '\0') {
              lVar21 = 0x1c;
            }
            lVar21 = (long)puVar23 + (lVar21 - (long)puVar16);
            if (lVar21 == 0) break;
            uVar17 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar16));
            *(undefined4 *)(puVar8 + 0x20) = 0xfffffffe;
            if (uVar17 == 0) break;
            piVar18 = (int *)(lVar21 + 4);
            while (piVar18[-1] != 0x20cb67bc) {
              piVar18 = piVar18 + 2;
              uVar17 = uVar17 - 1;
              if (uVar17 == 0) goto LAB_01c4b780;
            }
            iVar11 = 0;
            if (*piVar18 != -1) {
              iVar11 = *piVar18;
            }
            *(int *)(puVar8 + 0x20) = iVar11;
            if (*puVar23 == 0) break;
          } while( true );
        }
LAB_01c4b780:
        uVar12 = 0;
LAB_01c4b784:
        uVar17 = FUN_013f4ed0(*(undefined8 *)PTR_DAT_04bb3d80,uVar12);
        if (((uVar17 & 1) != 0) && (((sVar22 != 0x8ec || (iVar10 == 4)) || (iVar10 == 5)))) {
          uVar19 = *puVar23;
          uVar15 = 0;
          if ((uVar19 != 0) && (puVar23 != (uint *)(ulong)uVar19)) {
            puVar16 = (uint *)((long)puVar23 - (long)(ulong)uVar19);
            uVar15 = 0;
            if (*puVar16 != 0) {
              uVar19 = puVar16[1];
              if ((uVar19 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                lVar21 = 0xc;
                if (*(char *)((long)puVar16 + 10) != '\0') {
                  lVar21 = 0x1c;
                }
                lVar21 = (long)puVar16 + lVar21 + (ulong)(ushort)puVar16[2] * 8;
                if (lVar21 != 0) {
                  uVar15 = 0;
                  if ((ulong)uVar19 != 0) {
                    uVar15 = (uint)((ulong)((long)puVar23 - lVar21) / (ulong)uVar19);
                  }
                  if (*puVar16 <= uVar15) {
                    uVar15 = 0xffffffff;
                  }
                  if ((uVar15 < *(uint *)puVar6) &&
                     (uVar15 = (uint)*(ushort *)(*(long *)(puVar6 + 8) + (long)(int)uVar15 * 2),
                     uVar15 < 9)) goto LAB_01c4b480;
                }
              }
              uVar15 = 0;
            }
          }
LAB_01c4b480:
          local_7c = 1 << (ulong)(uVar15 & 0x1f) | local_7c;
        }
      }
      uVar24 = uVar24 + 1;
    } while (uVar24 != uVar14);
  }
  uVar14 = *(uint *)(param_1 + 0x1c0);
  uVar19 = uVar14;
  if (((int)uVar14 < 1) &&
     (((*(long *)(param_1 + 0xb0) == 0 ||
       (puVar23 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar23 == (uint *)0x0)) ||
      (uVar19 = *puVar23, (int)uVar19 < 1)))) {
    return;
  }
  uVar25 = DAT_0534d2d4 & 0xffffffff;
  uVar17 = DAT_0534d2d4 >> 0x20;
  uVar15 = *(uint *)(param_1 + 0x200);
  uVar24 = 0;
  cVar13 = DAT_0534d2d0;
LAB_01c4b904:
  if ((int)uVar14 < 1) {
    if (*(long *)(param_1 + 0xb0) == 0) {
      puVar23 = (uint *)0x0;
    }
    else {
      puVar23 = *(uint **)(*(long *)(param_1 + 0xb0) + 8);
      if (puVar23 == (uint *)0x0) {
        puVar23 = (uint *)0x0;
      }
      else if ((uVar24 < *(uint *)(param_1 + 200)) &&
              (*(char *)(*(long *)(param_1 + 0xd0) + uVar24) == '\0')) {
        puVar23 = (uint *)0x0;
      }
      else if (uVar24 < *puVar23) {
        if (puVar23[1] == 0) {
          puVar23 = (uint *)0x0;
        }
        else if ((ushort)puVar23[2] == 0) {
          puVar23 = (uint *)0x0;
        }
        else {
          iVar11 = 0xc;
          if (*(char *)((long)puVar23 + 10) != '\0') {
            iVar11 = 0x1c;
          }
          puVar23 = (uint *)((ulong)(puVar23[1] * (int)uVar24 + (uint)(ushort)puVar23[2] * 8 +
                                    iVar11) + (long)puVar23);
        }
      }
      else {
        puVar23 = (uint *)0x0;
      }
    }
  }
  else if (uVar24 < uVar14) {
    uVar26 = uVar24 & 0xffffffff;
    if (*(uint *)(param_1 + 0x1b0) <= uVar24) {
      uVar26 = 0;
    }
    puVar23 = *(uint **)(*(long *)(param_1 + 0x1b8) + uVar26 * 8);
  }
  else {
    puVar23 = (uint *)0x0;
  }
  while (puVar16 = (uint *)(ulong)*puVar23, *puVar23 != 0) {
    if (cVar13 == '\0') {
      DAT_0534d2d4 = 0xffffffffffffffff;
      cVar13 = '\x01';
      uVar25 = 0xffffffff;
      DAT_0534d2d0 = '\x01';
      puVar16 = (uint *)0x0;
      puVar5 = (uint *)(ulong)*puVar23;
    }
    else {
      if (-1 < (int)uVar17) {
        puVar16 = (uint *)0x0;
        if ((ushort *)(uVar17 + (long)puVar23) != (ushort *)0x0) {
          puVar16 = (uint *)(ulong)*(ushort *)(uVar17 + (long)puVar23);
        }
        break;
      }
      puVar5 = puVar16;
      if (uVar17 != 0xffffffff) {
        puVar16 = (uint *)0x0;
        break;
      }
    }
    if (puVar5 == (uint *)0x0) {
      uVar17 = 0xffffffff;
      break;
    }
    if (puVar23 == puVar5) {
LAB_01c4bebc:
      puVar16 = (uint *)0x0;
      uVar17 = 0xffffffff;
      break;
    }
    lVar21 = 0xc;
    if (*(char *)((long)puVar23 + (10 - (long)puVar5)) != '\0') {
      lVar21 = 0x1c;
    }
    lVar21 = (long)puVar23 + (lVar21 - (long)puVar5);
    if (lVar21 == 0) goto LAB_01c4bebc;
    uVar17 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar5));
    DAT_0534d2d4 = CONCAT44(0xfffffffe,(undefined4)DAT_0534d2d4);
    if (uVar17 == 0) {
LAB_01c4ba78:
      puVar16 = (uint *)0x0;
      uVar17 = 0xfffffffe;
      break;
    }
    puVar16 = (uint *)(lVar21 + 4);
    while (puVar16[-1] != 0xc35f78ed) {
      puVar16 = puVar16 + 2;
      uVar17 = uVar17 - 1;
      if (uVar17 == 0) goto LAB_01c4ba78;
    }
    uVar17 = 0;
    if (*puVar16 != 0xffffffff) {
      uVar17 = (ulong)*puVar16;
    }
    DAT_0534d2d4 = CONCAT44((int)uVar17,(undefined4)DAT_0534d2d4);
  }
  if (((uint)puVar16 < 0x100) && (((ulong)puVar16 & 0xff) == 0)) {
    uVar3 = *puVar23;
    uVar20 = 0;
    if (uVar3 != 0) {
      do {
        puVar16 = (uint *)(ulong)uVar3;
        if (cVar13 == '\0') {
          DAT_0534d2d4 = 0xffffffffffffffff;
          cVar13 = '\x01';
          uVar17 = 0xffffffff;
          puVar16 = (uint *)(ulong)*puVar23;
          DAT_0534d2d0 = '\x01';
          uVar20 = 0;
          if (puVar16 == (uint *)0x0) goto LAB_01c4bf0c;
        }
        else {
          if (-1 < (int)uVar25) goto LAB_01c4beec;
          if (uVar25 != 0xffffffff) goto LAB_01c4befc;
          if (puVar16 == (uint *)0x0) {
            uVar20 = 0;
            goto LAB_01c4bf0c;
          }
        }
        if (puVar23 == puVar16) goto LAB_01c4bec8;
        lVar21 = 0xc;
        if (*(char *)((long)puVar23 + (10 - (long)puVar16)) != '\0') {
          lVar21 = 0x1c;
        }
        lVar21 = (long)puVar23 + (lVar21 - (long)puVar16);
        if (lVar21 == 0) goto LAB_01c4bec8;
        uVar25 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar16));
        DAT_0534d2d4 = CONCAT44(DAT_0534d2d4._4_4_,0xfffffffe);
        if (uVar25 == 0) goto LAB_01c4b8e4;
        puVar16 = (uint *)(lVar21 + 4);
        while (puVar16[-1] != 0x54706054) {
          puVar16 = puVar16 + 2;
          uVar25 = uVar25 - 1;
          if (uVar25 == 0) goto LAB_01c4b8e4;
        }
        uVar25 = 0;
        if (*puVar16 != 0xffffffff) {
          uVar25 = (ulong)*puVar16;
        }
        DAT_0534d2d4 = CONCAT44(DAT_0534d2d4._4_4_,(int)uVar25);
        uVar3 = *puVar23;
      } while (uVar3 != 0);
      uVar20 = 0;
    }
    goto LAB_01c4b8e8;
  }
  local_64 = 0;
  local_70 = (byte)puVar16;
  if (((((((((ulong)puVar16 & 1) != 0) && ((local_7c & 1) != 0)) ||
         ((local_64 = 1, (local_70 >> 1 & 1) != 0 && ((local_7c >> 1 & 1) != 0)))) ||
        (((local_64 = 2, (local_70 >> 2 & 1) != 0 && ((local_7c >> 2 & 1) != 0)) ||
         ((local_64 = 3, (local_70 >> 3 & 1) != 0 && ((local_7c >> 3 & 1) != 0)))))) ||
       (((local_64 = 4, (local_70 >> 4 & 1) != 0 && ((local_7c >> 4 & 1) != 0)) ||
        ((local_64 = 5, (local_70 >> 5 & 1) != 0 && ((local_7c >> 5 & 1) != 0)))))) ||
      (((local_64 = 6, (local_70 >> 6 & 1) != 0 && ((local_7c >> 6 & 1) != 0)) ||
       ((local_64 = 7, (char)local_70 < '\0' && ((local_7c >> 7 & 1) != 0)))))) ||
     ((local_64 = 8, ((ulong)puVar16 & 0x100) != 0 && ((local_7c >> 8 & 1) != 0)))) {
    while (uVar20 = *puVar23, uVar20 != 0) {
      if (cVar13 == '\0') {
        DAT_0534d2d4 = 0xffffffffffffffff;
        cVar13 = '\x01';
        uVar17 = 0xffffffff;
        DAT_0534d2d0 = '\x01';
        uVar20 = 0;
        uVar3 = *puVar23;
      }
      else {
        if (-1 < (int)uVar25) goto LAB_01c4beec;
        uVar3 = uVar20;
        if (uVar25 != 0xffffffff) goto LAB_01c4befc;
      }
      puVar16 = (uint *)(ulong)uVar3;
      if (puVar16 == (uint *)0x0) goto LAB_01c4bf0c;
      if (puVar23 == puVar16) goto LAB_01c4bec8;
      lVar21 = 0xc;
      if (*(char *)((long)puVar23 + (10 - (long)puVar16)) != '\0') {
        lVar21 = 0x1c;
      }
      lVar21 = (long)puVar23 + (lVar21 - (long)puVar16);
      if (lVar21 == 0) goto LAB_01c4bec8;
      uVar25 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar16));
      DAT_0534d2d4._4_4_ = (undefined4)(DAT_0534d2d4 >> 0x20);
      DAT_0534d2d4 = CONCAT44(DAT_0534d2d4._4_4_,0xfffffffe);
      if (uVar25 == 0) goto LAB_01c4b8e4;
      puVar16 = (uint *)(lVar21 + 4);
      while (puVar16[-1] != 0x54706054) {
        puVar16 = puVar16 + 2;
        uVar25 = uVar25 - 1;
        if (uVar25 == 0) goto LAB_01c4b8e4;
      }
      uVar25 = 0;
      if (*puVar16 != 0xffffffff) {
        uVar25 = (ulong)*puVar16;
      }
      DAT_0534d2d4 = CONCAT44(DAT_0534d2d4._4_4_,(int)uVar25);
    }
    goto LAB_01c4b8e8;
  }
  goto LAB_01c4b8f8;
LAB_01c4beec:
  uVar20 = 0;
  if ((ushort *)(uVar25 + (long)puVar23) != (ushort *)0x0) {
    uVar20 = (uint)*(ushort *)(uVar25 + (long)puVar23);
  }
LAB_01c4b8e8:
  uVar15 = 1 << (ulong)(uVar20 & 0x1f) | uVar15;
  *(uint *)(param_1 + 0x200) = uVar15;
LAB_01c4b8f8:
  uVar24 = uVar24 + 1;
  if (uVar24 == uVar19) {
    return;
  }
  goto LAB_01c4b904;
LAB_01c4befc:
  uVar20 = 0;
  goto LAB_01c4b8e8;
LAB_01c4bf0c:
  uVar25 = 0xffffffff;
  goto LAB_01c4b8e8;
LAB_01c4bec8:
  uVar20 = 0;
  uVar25 = 0xffffffff;
  goto LAB_01c4b8e8;
LAB_01c4b8e4:
  uVar20 = 0;
  uVar25 = 0xfffffffe;
  goto LAB_01c4b8e8;
}

