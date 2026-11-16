
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_027a2710(long param_1,ulong param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  char *pcVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  int iVar11;
  ushort *puVar12;
  int *piVar13;
  ulong uVar14;
  char cVar15;
  int iVar16;
  uint *puVar17;
  char *pcVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  byte bVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  uint *puVar27;
  byte *pbVar28;
  
  puVar9 = PTR_DAT_04bb6448;
  puVar8 = PTR_DAT_04bb6440;
  lVar19 = *(long *)PTR_DAT_04bb2208;
  if ((int)*(uint *)(lVar19 + 0x1d40) < 1) {
    if (*(long *)(lVar19 + 0x1c30) == 0) {
      return 0;
    }
    puVar27 = *(uint **)(*(long *)(lVar19 + 0x1c30) + 8);
    if (puVar27 == (uint *)0x0) {
      return 0;
    }
    if ((param_3 < *(uint *)(lVar19 + 0x1c48)) &&
       (*(char *)(*(long *)(lVar19 + 0x1c50) + (long)(int)param_3) == '\0')) {
      return 0;
    }
    if (*puVar27 <= param_3) {
      return 0;
    }
    if (puVar27[1] == 0) {
      return 0;
    }
    if ((ushort)puVar27[2] == 0) {
      return 0;
    }
    iVar11 = 0xc;
    if (*(char *)((long)puVar27 + 10) != '\0') {
      iVar11 = 0x1c;
    }
    puVar27 = (uint *)((ulong)(puVar27[1] * param_3 + (uint)(ushort)puVar27[2] * 8 + iVar11) +
                      (long)puVar27);
  }
  else {
    if (*(uint *)(lVar19 + 0x1d40) <= param_3) {
      return 0;
    }
    if (*(uint *)(lVar19 + 0x1d30) <= param_3) {
      param_3 = 0;
    }
    puVar27 = *(uint **)(*(long *)(lVar19 + 0x1d38) + (ulong)param_3 * 8);
  }
  if (puVar27 == (uint *)0x0) {
    return 0;
  }
  uVar20 = *puVar27;
  if (uVar20 != 0) {
    cVar15 = *PTR_DAT_04bb6440;
    do {
      puVar17 = (uint *)(ulong)uVar20;
      if (cVar15 != '\0') {
        uVar20 = *(uint *)(puVar9 + 0x3c);
        if ((int)uVar20 < 0) {
          if ((uVar20 == 0xffffffff) && (puVar17 != (uint *)0x0)) goto LAB_027a27e8;
          goto LAB_027a28e0;
        }
        if ((ushort *)((ulong)uVar20 + (long)puVar27) == (ushort *)0x0) goto LAB_027a28e0;
        uVar7 = *(ushort *)((ulong)uVar20 + (long)puVar27);
        puVar2 = (uint *)(param_1 + 0xe98) + uVar7;
        if ((uVar7 & 0xfe00) != 0) {
          puVar2 = (uint *)(param_1 + 0xe98);
        }
        uVar20 = *puVar2;
LAB_027a28ec:
        cVar15 = *puVar8;
        goto LAB_027a2904;
      }
      cVar15 = '\x01';
      *(undefined8 *)puVar9 = 0xffffffffffffffff;
      *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
      *puVar8 = 1;
      *(undefined4 *)(puVar9 + 0x50) = 0xffffffff;
      *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
      puVar17 = (uint *)(ulong)*puVar27;
      if (puVar17 == (uint *)0x0) {
LAB_027a28e0:
        puVar17 = (uint *)(ulong)*puVar27;
        uVar20 = *(uint *)(param_1 + 0xe98);
        if (*puVar27 != 0) goto LAB_027a28ec;
        goto LAB_027a29b4;
      }
LAB_027a27e8:
      lVar19 = (long)puVar27 - (long)puVar17;
      if (lVar19 == 0) goto LAB_027a28e0;
      lVar25 = 0xc;
      if (*(char *)(lVar19 + 10) != '\0') {
        lVar25 = 0x1c;
      }
      if (lVar25 + lVar19 == 0) goto LAB_027a28e0;
      uVar21 = (ulong)*(ushort *)(lVar19 + 8);
      *(undefined4 *)(puVar9 + 0x3c) = 0xfffffffe;
      if (uVar21 == 0) goto LAB_027a28e0;
      piVar13 = (int *)(lVar25 + lVar19 + 4);
      while (piVar13[-1] != 0x54706054) {
        piVar13 = piVar13 + 2;
        uVar21 = uVar21 - 1;
        if (uVar21 == 0) goto LAB_027a28e0;
      }
      iVar11 = 0;
      if (*piVar13 != -1) {
        iVar11 = *piVar13;
      }
      *(int *)(puVar9 + 0x3c) = iVar11;
      uVar20 = *puVar27;
    } while (uVar20 != 0);
  }
  uVar20 = *(uint *)(param_1 + 0xe98);
  goto LAB_027a29b4;
LAB_027a2c70:
  if ((int)uVar20 < 0) {
    if (uVar20 == 0xffffffff) {
      lVar19 = (long)puVar27 - uVar21;
      if (lVar19 == 0) {
        uVar20 = 0xffffffff;
        iVar11 = 0;
      }
      else {
        lVar25 = 0xc;
        if (*(char *)(lVar19 + 10) != '\0') {
          lVar25 = 0x1c;
        }
        if (lVar25 + lVar19 == 0) {
          iVar11 = 0;
          uVar20 = 0xffffffff;
        }
        else {
          uVar21 = (ulong)*(ushort *)(lVar19 + 8);
          uVar20 = 0xfffffffe;
          *(undefined4 *)(puVar9 + 0x4c) = 0xfffffffe;
          iVar11 = 0;
          if (uVar21 != 0) goto code_r0x027a2ca8;
        }
      }
    }
    else {
LAB_027a35f8:
      iVar11 = 0;
    }
  }
  else {
    iVar11 = 0;
    if ((byte *)((long)puVar27 + (ulong)uVar20) != (byte *)0x0) {
      uVar22 = (uint)*(byte *)((long)puVar27 + (ulong)uVar20);
      if (uVar22 == 0) goto LAB_027a35f8;
      uVar24 = 0;
      iVar11 = 0;
      do {
        uVar5 = *puVar27;
        if (uVar5 != 0) {
          do {
            if (cVar15 == '\0') {
              cVar15 = '\x01';
              *(undefined8 *)puVar9 = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
              uVar20 = 0xffffffff;
              *puVar8 = 1;
              *(undefined4 *)(puVar9 + 0x50) = 0xffffffff;
              *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
              uVar5 = *puVar27;
            }
            else {
              uVar6 = *(uint *)(puVar9 + 0x3c);
              if (-1 < (int)uVar6) {
                if (((ushort *)((ulong)uVar6 + (long)puVar27) != (ushort *)0x0) &&
                   (uVar7 = *(ushort *)((ulong)uVar6 + (long)puVar27), uVar7 < 0x200)) {
                  puVar17 = (uint *)(param_1 + 0xe98) + uVar7;
                  goto LAB_027a35d8;
                }
                break;
              }
              if (uVar6 != 0xffffffff) break;
            }
            lVar19 = (long)puVar27 - (ulong)uVar5;
            if (((ulong)uVar5 == 0) || (lVar19 == 0)) break;
            lVar25 = 0xc;
            if (*(char *)(lVar19 + 10) != '\0') {
              lVar25 = 0x1c;
            }
            if (lVar25 + lVar19 == 0) break;
            uVar21 = (ulong)*(ushort *)(lVar19 + 8);
            *(undefined4 *)(puVar9 + 0x3c) = 0xfffffffe;
            if (uVar21 == 0) break;
            piVar13 = (int *)(lVar25 + lVar19 + 4);
            while (piVar13[-1] != 0x54706054) {
              piVar13 = piVar13 + 2;
              uVar21 = uVar21 - 1;
              if (uVar21 == 0) goto LAB_027a35d4;
            }
            iVar16 = 0;
            if (*piVar13 != -1) {
              iVar16 = *piVar13;
            }
            *(int *)(puVar9 + 0x3c) = iVar16;
            uVar5 = *puVar27;
            if (uVar5 == 0) break;
          } while( true );
        }
LAB_027a35d4:
        puVar17 = (uint *)(param_1 + 0xe98);
LAB_027a35d8:
        uVar5 = uVar24 & 0x1f;
        uVar24 = uVar24 + 1;
        iVar11 = (*puVar17 >> (ulong)uVar5 & 1) + iVar11;
      } while (uVar24 != uVar22);
    }
  }
LAB_027a30c4:
  uVar22 = *puVar27;
  while (uVar22 != 0) {
    if (cVar15 == '\0') {
      cVar15 = '\x01';
      *(undefined8 *)puVar9 = 0xffffffffffffffff;
      *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
      *puVar8 = 1;
      *(undefined4 *)(puVar9 + 0x50) = 0xffffffff;
      *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
      uVar22 = *puVar27;
    }
    else {
      if (-1 < (int)uVar20) {
        uVar22 = 0;
        if ((byte *)((long)puVar27 + (ulong)uVar20) != (byte *)0x0) {
          uVar22 = (uint)*(byte *)((long)puVar27 + (ulong)uVar20);
        }
        goto LAB_027a317c;
      }
      if (uVar20 != 0xffffffff) break;
    }
    puVar17 = (uint *)(ulong)uVar22;
    if ((puVar17 == (uint *)0x0) || (puVar27 == puVar17)) break;
    lVar19 = 0xc;
    if (*(char *)((long)puVar27 + (10 - (long)puVar17)) != '\0') {
      lVar19 = 0x1c;
    }
    lVar19 = (long)puVar27 + (lVar19 - (long)puVar17);
    if (lVar19 == 0) break;
    uVar21 = (ulong)*(ushort *)((long)puVar27 + (8 - (long)puVar17));
    *(undefined4 *)(puVar9 + 0x4c) = 0xfffffffe;
    uVar22 = 0;
    if (uVar21 == 0) goto LAB_027a317c;
    puVar17 = (uint *)(lVar19 + 4);
    while (puVar17[-1] != 0x1be772f0) {
      puVar17 = puVar17 + 2;
      uVar21 = uVar21 - 1;
      if (uVar21 == 0) {
        uVar22 = 0;
        goto LAB_027a317c;
      }
    }
    uVar20 = 0;
    if (*puVar17 != 0xffffffff) {
      uVar20 = *puVar17;
    }
    *(uint *)(puVar9 + 0x4c) = uVar20;
    uVar22 = *puVar27;
  }
LAB_027a3178:
  uVar22 = 0;
LAB_027a317c:
  if (5 < uVar22) {
    uVar22 = 6;
  }
  if (uVar22 == 0) {
    return 0;
  }
  uVar21 = 0;
  iVar16 = 0;
  do {
    uVar20 = *puVar27;
    if (uVar20 != 0) {
      do {
        if (cVar15 == '\0') {
          cVar15 = '\x01';
          *(undefined8 *)puVar9 = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
          *puVar8 = 1;
          *(undefined4 *)(puVar9 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
          uVar20 = *puVar27;
        }
        else {
          uVar24 = *(uint *)(puVar9 + 0x3c);
          if (-1 < (int)uVar24) {
            if (((ushort *)((ulong)uVar24 + (long)puVar27) != (ushort *)0x0) &&
               (uVar7 = *(ushort *)((ulong)uVar24 + (long)puVar27), uVar7 < 0x200)) {
              puVar17 = (uint *)(param_1 + 0xe98) + uVar7;
              goto LAB_027a32ac;
            }
            break;
          }
          if (uVar24 != 0xffffffff) break;
        }
        lVar19 = (long)puVar27 - (ulong)uVar20;
        if (((ulong)uVar20 == 0) || (lVar19 == 0)) break;
        lVar25 = 0xc;
        if (*(char *)(lVar19 + 10) != '\0') {
          lVar25 = 0x1c;
        }
        if (lVar25 + lVar19 == 0) break;
        uVar26 = (ulong)*(ushort *)(lVar19 + 8);
        *(undefined4 *)(puVar9 + 0x3c) = 0xfffffffe;
        if (uVar26 == 0) break;
        piVar13 = (int *)(lVar25 + lVar19 + 4);
        while (piVar13[-1] != 0x54706054) {
          piVar13 = piVar13 + 2;
          uVar26 = uVar26 - 1;
          if (uVar26 == 0) goto LAB_027a32a8;
        }
        iVar1 = 0;
        if (*piVar13 != -1) {
          iVar1 = *piVar13;
        }
        *(int *)(puVar9 + 0x3c) = iVar1;
        uVar20 = *puVar27;
        if (uVar20 == 0) break;
      } while( true );
    }
LAB_027a32a8:
    puVar17 = (uint *)(param_1 + 0xe98);
LAB_027a32ac:
    if ((*puVar17 >> (ulong)((uint)uVar21 & 0x1f) & 1) != 0) {
      uVar20 = *puVar27;
      while (uVar20 != 0) {
        if (cVar15 == '\0') {
          cVar15 = '\x01';
          *(undefined8 *)puVar9 = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
          *puVar8 = 1;
          *(undefined4 *)(puVar9 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
          uVar20 = *puVar27;
        }
        else {
          uVar24 = *(uint *)(puVar9 + 0x4c);
          if (-1 < (int)uVar24) {
            uVar26 = 0;
            if ((byte *)((ulong)uVar24 + (long)puVar27) != (byte *)0x0) {
              uVar26 = (ulong)*(byte *)((ulong)uVar24 + (long)puVar27);
            }
            goto LAB_027a3368;
          }
          if (uVar24 != 0xffffffff) break;
        }
        puVar17 = (uint *)(ulong)uVar20;
        uVar26 = 0;
        if (puVar17 == (uint *)0x0) goto LAB_027a3368;
        if (puVar27 == puVar17) break;
        lVar19 = 0xc;
        if (*(char *)((long)puVar27 + (10 - (long)puVar17)) != '\0') {
          lVar19 = 0x1c;
        }
        lVar19 = (long)puVar27 + (lVar19 - (long)puVar17);
        if (lVar19 == 0) break;
        uVar14 = (ulong)*(ushort *)((long)puVar27 + (8 - (long)puVar17));
        *(undefined4 *)(puVar9 + 0x4c) = 0xfffffffe;
        uVar26 = 0;
        if (uVar14 == 0) goto LAB_027a3368;
        piVar13 = (int *)(lVar19 + 4);
        while (piVar13[-1] != 0x1be772f0) {
          piVar13 = piVar13 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) {
            uVar26 = 0;
            goto LAB_027a3368;
          }
        }
        iVar1 = 0;
        if (*piVar13 != -1) {
          iVar1 = *piVar13;
        }
        *(int *)(puVar9 + 0x4c) = iVar1;
        uVar20 = *puVar27;
      }
      uVar26 = 0;
LAB_027a3368:
      if (uVar21 <= uVar26) {
        uVar20 = *puVar27;
        if (uVar20 != 0) {
          do {
            if (cVar15 == '\0') {
              cVar15 = '\x01';
              *(undefined8 *)puVar9 = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
              *puVar8 = 1;
              *(undefined4 *)(puVar9 + 0x50) = 0xffffffff;
              *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
              uVar20 = *puVar27;
            }
            else {
              uVar24 = *(uint *)(puVar9 + 0x3c);
              if (-1 < (int)uVar24) {
                if (((ushort *)((ulong)uVar24 + (long)puVar27) != (ushort *)0x0) &&
                   (uVar7 = *(ushort *)((ulong)uVar24 + (long)puVar27), uVar7 < 0x200)) {
                  lVar19 = param_1 + 0x1698 + (ulong)uVar7 * 6;
                  goto LAB_027a31c0;
                }
                break;
              }
              if (uVar24 != 0xffffffff) break;
            }
            lVar19 = (long)puVar27 - (ulong)uVar20;
            if (((ulong)uVar20 == 0) || (lVar19 == 0)) break;
            lVar25 = 0xc;
            if (*(char *)(lVar19 + 10) != '\0') {
              lVar25 = 0x1c;
            }
            if (lVar25 + lVar19 == 0) break;
            uVar26 = (ulong)*(ushort *)(lVar19 + 8);
            *(undefined4 *)(puVar9 + 0x3c) = 0xfffffffe;
            if (uVar26 == 0) break;
            piVar13 = (int *)(lVar25 + lVar19 + 4);
            while (piVar13[-1] != 0x54706054) {
              piVar13 = piVar13 + 2;
              uVar26 = uVar26 - 1;
              if (uVar26 == 0) goto LAB_027a31bc;
            }
            iVar1 = 0;
            if (*piVar13 != -1) {
              iVar1 = *piVar13;
            }
            *(int *)(puVar9 + 0x3c) = iVar1;
            uVar20 = *puVar27;
            if (uVar20 == 0) break;
          } while( true );
        }
LAB_027a31bc:
        lVar19 = param_1 + 0x1698;
LAB_027a31c0:
        iVar16 = iVar16 + (uint)*(byte *)(lVar19 + uVar21);
      }
    }
    uVar21 = uVar21 + 1;
    if (uVar21 == uVar22) {
      if (iVar16 < iVar11) {
        return 1;
      }
      return 0;
    }
  } while( true );
code_r0x027a2ca8:
  puVar17 = (uint *)(lVar25 + lVar19 + 4);
  while (puVar17[-1] != 0x1be772f0) {
    puVar17 = puVar17 + 2;
    uVar21 = uVar21 - 1;
    if (uVar21 == 0) {
      uVar20 = 0xfffffffe;
      iVar11 = 0;
      goto LAB_027a30c4;
    }
  }
  uVar20 = 0;
  if (*puVar17 != 0xffffffff) {
    uVar20 = *puVar17;
  }
  *(uint *)(puVar9 + 0x4c) = uVar20;
  uVar21 = (ulong)*puVar27;
  if (*puVar27 == 0) goto code_r0x027a2ce0;
  goto LAB_027a2c70;
code_r0x027a2ce0:
  iVar11 = 0;
  goto LAB_027a3178;
  while( true ) {
    if (puVar27 == puVar17) break;
    lVar19 = 0xc;
    if (*(char *)((long)puVar27 + (10 - (long)puVar17)) != '\0') {
      lVar19 = 0x1c;
    }
    lVar19 = (long)puVar27 + (lVar19 - (long)puVar17);
    if (lVar19 == 0) break;
    uVar21 = (ulong)*(ushort *)((long)puVar27 + (8 - (long)puVar17));
    *(undefined4 *)(puVar9 + 0x48) = 0xfffffffe;
    pcVar18 = (char *)0x0;
    if (uVar21 == 0) goto LAB_027a29b8;
    piVar13 = (int *)(lVar19 + 4);
    while (piVar13[-1] != 0x45f320f2) {
      piVar13 = piVar13 + 2;
      uVar21 = uVar21 - 1;
      if (uVar21 == 0) {
        pcVar18 = (char *)0x0;
        goto LAB_027a29b8;
      }
    }
    iVar11 = 0;
    if (*piVar13 != -1) {
      iVar11 = *piVar13;
    }
    *(int *)(puVar9 + 0x48) = iVar11;
    puVar17 = (uint *)(ulong)*puVar27;
    if (*puVar27 == 0) break;
LAB_027a2904:
    if (cVar15 == '\0') {
      cVar15 = '\x01';
      *(undefined8 *)puVar9 = 0xffffffffffffffff;
      *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
      *puVar8 = 1;
      *(undefined4 *)(puVar9 + 0x50) = 0xffffffff;
      *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
      puVar17 = (uint *)(ulong)*puVar27;
      pcVar18 = (char *)0x0;
      if (puVar17 == (uint *)0x0) goto LAB_027a29b8;
    }
    else {
      uVar22 = *(uint *)(puVar9 + 0x48);
      if (-1 < (int)uVar22) {
        pcVar18 = (char *)((ulong)uVar22 + (long)puVar27);
        goto LAB_027a29b8;
      }
      if (uVar22 != 0xffffffff) break;
      if (puVar17 == (uint *)0x0) {
        pcVar18 = (char *)0x0;
        goto LAB_027a29b8;
      }
    }
  }
LAB_027a29b4:
  pcVar18 = (char *)0x0;
LAB_027a29b8:
  pcVar3 = *(char **)PTR_PTR_04bb6438;
  if (pcVar18 != (char *)0x0) {
    pcVar3 = pcVar18;
  }
  if (pcVar3 != "BootPhone") {
    uVar21 = 0;
    bVar10 = true;
    do {
      if (pcVar3[uVar21] != "BootPhone"[uVar21]) break;
      if (pcVar3[uVar21] == '\0') {
        if (!(bool)(pcVar3 == "BootPhoneBeginner" | bVar10)) goto LAB_027a2a44;
        goto LAB_027a2a84;
      }
      bVar10 = uVar21 < 0x80000;
      uVar21 = uVar21 + 1;
    } while (uVar21 != 0x80001);
    if (pcVar3 != "BootPhoneBeginner") {
LAB_027a2a44:
      if (*pcVar3 != 'B') goto LAB_027a2b78;
      lVar19 = 0;
      do {
        if ((lVar19 == 0x80000) ||
           (lVar25 = lVar19 + 1, pcVar3[lVar25] != "BootPhoneBeginner"[lVar19 + 1]))
        goto LAB_027a2b78;
        lVar19 = lVar19 + 1;
      } while (pcVar3[lVar25] != '\0');
    }
  }
LAB_027a2a84:
  uVar22 = *puVar27;
  if (uVar22 != 0) {
    cVar15 = *puVar8;
    do {
      uVar21 = (ulong)uVar22;
      if (cVar15 == '\0') {
        cVar15 = '\x01';
        *(undefined8 *)puVar9 = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
        *puVar8 = 1;
        *(undefined4 *)(puVar9 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
        uVar21 = (ulong)*puVar27;
      }
      else {
        uVar22 = *(uint *)(puVar9 + 0xc);
        if (-1 < (int)uVar22) {
          if ((uint *)((ulong)uVar22 + (long)puVar27) != (uint *)0x0) {
            lVar19 = 0;
            if (uVar20 == 0) {
              return 0;
            }
            if (uVar20 < *(uint *)((ulong)uVar22 + (long)puVar27)) {
              return 0;
            }
            goto LAB_027a2b84;
          }
          break;
        }
        if (uVar22 != 0xffffffff) break;
      }
      if ((uVar21 == 0) || (lVar19 = (long)puVar27 - uVar21, lVar19 == 0)) break;
      lVar25 = 0xc;
      if (*(char *)(lVar19 + 10) != '\0') {
        lVar25 = 0x1c;
      }
      if (lVar25 + lVar19 == 0) break;
      uVar21 = (ulong)*(ushort *)(lVar19 + 8);
      *(undefined4 *)(puVar9 + 0xc) = 0xfffffffe;
      if (uVar21 == 0) break;
      piVar13 = (int *)(lVar25 + lVar19 + 4);
      while (piVar13[-1] != -0x31f6cc04) {
        piVar13 = piVar13 + 2;
        uVar21 = uVar21 - 1;
        if (uVar21 == 0) goto LAB_027a2b78;
      }
      iVar11 = 0;
      if (*piVar13 != -1) {
        iVar11 = *piVar13;
      }
      *(int *)(puVar9 + 0xc) = iVar11;
      uVar22 = *puVar27;
      if (uVar22 == 0) break;
    } while( true );
  }
LAB_027a2b78:
  if (uVar20 != 0) {
    uVar21 = (ulong)*puVar27;
    lVar19 = param_1;
    if (*puVar27 != 0) {
LAB_027a2b84:
      cVar15 = *puVar8;
      do {
        if (cVar15 == '\0') {
          cVar15 = '\x01';
          *(undefined8 *)puVar9 = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
          *puVar8 = 1;
          *(undefined4 *)(puVar9 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
          uVar21 = (ulong)*puVar27;
        }
        else {
          uVar20 = *(uint *)(puVar9 + 0x44);
          if (-1 < (int)uVar20) {
            if (((char *)((ulong)uVar20 + (long)puVar27) != (char *)0x0) &&
               (*(char *)((ulong)uVar20 + (long)puVar27) != '\0')) {
              uVar20 = *(uint *)(puVar9 + 0x4c);
              goto LAB_027a2c70;
            }
            break;
          }
          if (uVar20 != 0xffffffff) break;
        }
        if ((uVar21 == 0) || (lVar25 = (long)puVar27 - uVar21, lVar25 == 0)) break;
        lVar4 = 0xc;
        if (*(char *)(lVar25 + 10) != '\0') {
          lVar4 = 0x1c;
        }
        if (lVar4 + lVar25 == 0) break;
        uVar21 = (ulong)*(ushort *)(lVar25 + 8);
        *(undefined4 *)(puVar9 + 0x44) = 0xfffffffe;
        if (uVar21 == 0) break;
        piVar13 = (int *)(lVar4 + lVar25 + 4);
        while (piVar13[-1] != -0x76abbd24) {
          piVar13 = piVar13 + 2;
          uVar21 = uVar21 - 1;
          if (uVar21 == 0) goto LAB_027a2ce4;
        }
        iVar11 = 0;
        if (*piVar13 != -1) {
          iVar11 = *piVar13;
        }
        *(int *)(puVar9 + 0x44) = iVar11;
        uVar21 = (ulong)*puVar27;
        if (*puVar27 == 0) break;
      } while( true );
    }
LAB_027a2ce4:
    iVar11 = FUN_02798cb0(lVar19,puVar27);
    uVar20 = *puVar27;
    if (uVar20 != 0) {
      cVar15 = *puVar8;
      do {
        if (cVar15 == '\0') {
          cVar15 = '\x01';
          *(undefined8 *)puVar9 = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
          *puVar8 = 1;
          *(undefined4 *)(puVar9 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
          uVar20 = *puVar27;
        }
        else {
          uVar22 = *(uint *)(puVar9 + 0x4c);
          if (-1 < (int)uVar22) {
            if ((byte *)((ulong)uVar22 + (long)puVar27) != (byte *)0x0) {
              bVar23 = *(byte *)((ulong)uVar22 + (long)puVar27);
              goto LAB_027a2de4;
            }
            break;
          }
          if (uVar22 != 0xffffffff) break;
        }
        puVar17 = (uint *)(ulong)uVar20;
        bVar23 = 0;
        if ((puVar17 == (uint *)0x0) || (bVar23 = 0, puVar27 == puVar17)) goto LAB_027a2de4;
        lVar19 = 0xc;
        if (*(char *)((long)puVar27 + (10 - (long)puVar17)) != '\0') {
          lVar19 = 0x1c;
        }
        lVar19 = (long)puVar27 + (lVar19 - (long)puVar17);
        bVar23 = 0;
        if (lVar19 == 0) goto LAB_027a2de4;
        uVar21 = (ulong)*(ushort *)((long)puVar27 + (8 - (long)puVar17));
        *(undefined4 *)(puVar9 + 0x4c) = 0xfffffffe;
        if (uVar21 == 0) break;
        piVar13 = (int *)(lVar19 + 4);
        while (piVar13[-1] != 0x1be772f0) {
          piVar13 = piVar13 + 2;
          uVar21 = uVar21 - 1;
          if (uVar21 == 0) goto LAB_027a2de0;
        }
        iVar16 = 0;
        if (*piVar13 != -1) {
          iVar16 = *piVar13;
        }
        *(int *)(puVar9 + 0x4c) = iVar16;
        uVar20 = *puVar27;
        if (uVar20 == 0) break;
      } while( true );
    }
LAB_027a2de0:
    bVar23 = 0;
LAB_027a2de4:
    if (5 < bVar23) {
      bVar23 = 6;
    }
    if (bVar23 != 0) {
      iVar16 = 0;
      if (iVar11 != 0) {
        cVar15 = *puVar8;
        uVar21 = 1;
LAB_027a2e40:
        do {
          uVar26 = (ulong)*puVar27;
          if (*puVar27 != 0) {
            if (cVar15 == '\0') {
              cVar15 = '\x01';
              *(undefined8 *)puVar9 = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
              *puVar8 = 1;
              *(undefined4 *)(puVar9 + 0x50) = 0xffffffff;
              *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
              uVar26 = (ulong)*puVar27;
joined_r0x027a2e98:
              if ((uVar26 != 0) && (lVar19 = (long)puVar27 - uVar26, lVar19 != 0)) {
                lVar25 = 0xc;
                if (*(char *)(lVar19 + 10) != '\0') {
                  lVar25 = 0x1c;
                }
                if (lVar25 + lVar19 != 0) {
                  uVar26 = (ulong)*(ushort *)(lVar19 + 8);
                  *(undefined4 *)(puVar9 + 0x4c) = 0xfffffffe;
                  if (uVar26 != 0) {
                    piVar13 = (int *)(lVar25 + lVar19 + 4);
                    do {
                      if (piVar13[-1] == 0x1be772f0) {
                        iVar1 = 0;
                        if (*piVar13 != -1) {
                          iVar1 = *piVar13;
                        }
                        *(int *)(puVar9 + 0x4c) = iVar1;
                        goto LAB_027a2e40;
                      }
                      piVar13 = piVar13 + 2;
                      uVar26 = uVar26 - 1;
                    } while (uVar26 != 0);
                  }
                }
              }
            }
            else {
              uVar20 = *(uint *)(puVar9 + 0x4c);
              if ((int)uVar20 < 0) {
                if (uVar20 == 0xffffffff) goto joined_r0x027a2e98;
              }
              else if (((byte *)((ulong)uVar20 + (long)puVar27) != (byte *)0x0) &&
                      (uVar21 <= *(byte *)((ulong)uVar20 + (long)puVar27))) {
LAB_027a2f00:
                if (cVar15 == '\0') {
                  cVar15 = '\x01';
                  *(undefined8 *)puVar9 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                  *puVar8 = 1;
                  *(undefined4 *)(puVar9 + 0x50) = 0xffffffff;
                  *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
                  uVar26 = (ulong)*puVar27;
LAB_027a2f3c:
                  lVar19 = (long)puVar27 - uVar26;
                  if ((uVar26 == 0) || (lVar19 == 0)) goto LAB_027a2fcc;
                  lVar25 = 0xc;
                  if (*(char *)(lVar19 + 10) != '\0') {
                    lVar25 = 0x1c;
                  }
                  if (lVar25 + lVar19 == 0) goto LAB_027a2fcc;
                  uVar26 = (ulong)*(ushort *)(lVar19 + 8);
                  *(undefined4 *)(puVar9 + 0x3c) = 0xfffffffe;
                  if (uVar26 == 0) goto LAB_027a2fcc;
                  piVar13 = (int *)(lVar25 + lVar19 + 4);
                  while (piVar13[-1] != 0x54706054) {
                    piVar13 = piVar13 + 2;
                    uVar26 = uVar26 - 1;
                    if (uVar26 == 0) goto LAB_027a2fcc;
                  }
                  iVar1 = 0;
                  if (*piVar13 != -1) {
                    iVar1 = *piVar13;
                  }
                  *(int *)(puVar9 + 0x3c) = iVar1;
                  uVar26 = (ulong)*puVar27;
                  if (*puVar27 == 0) goto LAB_027a2fcc;
                  goto LAB_027a2f00;
                }
                uVar20 = *(uint *)(puVar9 + 0x3c);
                if ((int)uVar20 < 0) {
                  if (uVar20 != 0xffffffff) goto LAB_027a2fcc;
                  goto LAB_027a2f3c;
                }
                if (((ushort *)((ulong)uVar20 + (long)puVar27) != (ushort *)0x0) &&
                   (uVar7 = *(ushort *)((ulong)uVar20 + (long)puVar27), uVar7 < 0x200)) {
                  lVar19 = param_1 + 0x1698 + (ulong)uVar7 * 6;
                  goto LAB_027a2fd0;
                }
LAB_027a2fcc:
                lVar19 = param_1 + 0x1698;
LAB_027a2fd0:
                iVar16 = iVar16 + (uint)*(byte *)(uVar21 + lVar19 + -1);
              }
            }
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 != iVar11 + 1);
      }
      if (iVar11 <= iVar16) {
        if ((param_2 & 1) == 0) {
          return 0;
        }
        uVar20 = *puVar27;
        if (uVar20 != 0) {
          cVar15 = *puVar8;
          while( true ) {
            if (cVar15 == '\0') {
              cVar15 = '\x01';
              *(undefined8 *)puVar9 = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
              *puVar8 = 1;
              *(undefined4 *)(puVar9 + 0x50) = 0xffffffff;
              *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
              uVar20 = *puVar27;
            }
            else {
              uVar22 = *(uint *)(puVar9 + 0x4c);
              if (-1 < (int)uVar22) {
                if ((char *)((ulong)uVar22 + (long)puVar27) == (char *)0x0) {
                  return 1;
                }
                if (*(char *)((ulong)uVar22 + (long)puVar27) == '\0') {
                  return 1;
                }
                pbVar28 = (byte *)(param_1 + 0x5298);
                puVar12 = (ushort *)
                          FUN_00ac30f0(puVar27,0xf,0x54706054,*(undefined8 *)PTR_DAT_04bc0bb0);
                if ((puVar12 != (ushort *)0x0) && (*puVar12 < 0x200)) {
                  pbVar28 = pbVar28 + *puVar12;
                }
                if ((*pbVar28 & 1) == 0) {
                  return 1;
                }
                return 0;
              }
              if (uVar22 != 0xffffffff) {
                return 1;
              }
            }
            puVar17 = (uint *)(ulong)uVar20;
            if (puVar17 == (uint *)0x0) {
              return 1;
            }
            if (puVar27 == puVar17) break;
            lVar19 = 0xc;
            if (*(char *)((long)puVar27 + (10 - (long)puVar17)) != '\0') {
              lVar19 = 0x1c;
            }
            lVar19 = (long)puVar27 + (lVar19 - (long)puVar17);
            if (lVar19 == 0) {
              return 1;
            }
            uVar21 = (ulong)*(ushort *)((long)puVar27 + (8 - (long)puVar17));
            *(undefined4 *)(puVar9 + 0x4c) = 0xfffffffe;
            if (uVar21 == 0) {
              return 1;
            }
            piVar13 = (int *)(lVar19 + 4);
            while (piVar13[-1] != 0x1be772f0) {
              piVar13 = piVar13 + 2;
              uVar21 = uVar21 - 1;
              if (uVar21 == 0) {
                return 1;
              }
            }
            iVar11 = 0;
            if (*piVar13 != -1) {
              iVar11 = *piVar13;
            }
            *(int *)(puVar9 + 0x4c) = iVar11;
            uVar20 = *puVar27;
            if (uVar20 == 0) {
              return 1;
            }
          }
          return 1;
        }
      }
      return 1;
    }
  }
  return 0;
}

