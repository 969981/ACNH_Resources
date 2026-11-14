
void FUN_017fa550(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined2 *puVar4;
  int iVar5;
  long lVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  ushort *puVar21;
  long lVar22;
  char cVar23;
  ulong uVar24;
  long lVar25;
  uint *puVar26;
  ushort uVar27;
  int iVar28;
  int iVar29;
  uint *puVar30;
  uint *puVar31;
  int *piVar32;
  ulong uVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  uint uVar37;
  int iVar38;
  ulong uVar39;
  uint local_10c;
  undefined *local_108;
  undefined8 local_100;
  undefined *puStack_f8;
  uint local_f0;
  uint uStack_ec;
  undefined *local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined4 local_b4;
  long local_b0;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined4 local_a4;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  uint *local_90;
  uint local_88;
  undefined4 local_84;
  undefined *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if ((*(long *)PTR_DAT_04bb46b0 == 0) ||
     (lVar18 = FUN_026f480c(), puVar2 = PTR_DAT_04bb43c0, lVar18 == 0)) {
    return;
  }
  uVar36 = 0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  do {
    lVar35 = lVar18 + 0x118 + uVar36 * 0x2488;
    if ((*(long *)(lVar35 + 0x1ec8) == 0) ||
       (puVar19 = *(undefined8 **)(*(long *)(lVar35 + 0x1ec8) + 0x10), puVar19 == (undefined8 *)0x0)
       ) {
      uVar11 = 0;
    }
    else {
      uVar11 = (**(code **)*puVar19)();
    }
    uVar39 = 0;
    local_10c = 0x134b;
    local_108 = (undefined *)0x139b;
    lVar22 = *(long *)PTR_DAT_04bb46d0;
    uVar24 = (ulong)*(uint *)(lVar22 + 0x13c8);
    if (0 < (int)*(uint *)(lVar22 + 0x13c8)) goto LAB_017fa6ec;
LAB_017fa650:
    lVar25 = *(long *)(lVar22 + 0x12b8);
    if (lVar25 != 0) {
      uVar24 = 0;
      if (*(uint **)(lVar25 + 8) != (uint *)0x0) {
        uVar24 = (ulong)**(uint **)(lVar25 + 8);
      }
      if (uVar39 < uVar24) {
        if ((((lVar25 != 0) && (puVar26 = *(uint **)(lVar25 + 8), puVar26 != (uint *)0x0)) &&
            ((*(uint *)(lVar22 + 0x12d0) <= uVar39 ||
             (*(char *)(*(long *)(lVar22 + 0x12d8) + uVar39) != '\0')))) &&
           (((uVar39 < *puVar26 && (puVar26[1] != 0)) && ((ushort)puVar26[2] != 0)))) {
          iVar28 = 0xc;
          if (*(char *)((long)puVar26 + 10) != '\0') {
            iVar28 = 0x1c;
          }
          puVar26 = (uint *)((ulong)(puVar26[1] * (int)uVar39 + (uint)(ushort)puVar26[2] * 8 +
                                    iVar28) + (long)puVar26);
          if (puVar26 != (uint *)0x0) goto LAB_017fa710;
        }
        do {
          uVar37 = 0xfffe;
LAB_017fa824:
          local_80 = (undefined *)(ulong)uVar37;
          FUN_0277d4ac(&local_80);
          lVar22 = *(long *)puVar2;
          local_d8 = 0;
          local_e0 = local_80;
          local_e8 = puVar1;
          uVar12 = FUN_0277d6c4(&local_e0);
          if (*(long *)puVar2 == 0) {
LAB_017fa8c4:
            puVar26 = (uint *)0x0;
          }
          else {
            lVar22 = *(long *)(lVar22 + 0x57e58);
            uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
            if ((*(uint *)(lVar22 + 0x1d8) <= uVar12) ||
               (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar12 * 8) == 0))
            goto LAB_017fa8c4;
            lVar22 = *(long *)PTR_DAT_04bc0428;
            uVar12 = FUN_0277d6c4(&local_80);
            uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
            if (*(uint *)(lVar22 + 0x1d8) <= uVar12) goto LAB_017fa8c4;
            puVar26 = *(uint **)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar12 * 8);
          }
          lVar22 = *(long *)PTR_DAT_04bb46d0;
          uVar12 = *(uint *)(lVar22 + 0x13c8);
          uVar24 = (ulong)uVar12;
          if ((int)uVar12 < 1) {
            if ((((*(long *)(lVar22 + 0x12b8) != 0) &&
                 (puVar30 = *(uint **)(*(long *)(lVar22 + 0x12b8) + 8), puVar30 != (uint *)0x0)) &&
                ((*(uint *)(lVar22 + 0x12d0) <= uVar39 ||
                 (*(char *)(*(long *)(lVar22 + 0x12d8) + uVar39) != '\0')))) &&
               (((uVar39 < *puVar30 && (puVar30[1] != 0)) && ((ushort)puVar30[2] != 0)))) {
              iVar28 = 0xc;
              if (*(char *)((long)puVar30 + 10) != '\0') {
                iVar28 = 0x1c;
              }
              puVar30 = (uint *)((ulong)(puVar30[1] * (int)uVar39 + (uint)(ushort)puVar30[2] * 8 +
                                        iVar28) + (long)puVar30);
              goto joined_r0x017faa5c;
            }
          }
          else if (uVar39 < uVar24) {
            uVar33 = uVar39 & 0xffffffff;
            if (*(uint *)(lVar22 + 0x13b8) <= uVar39) {
              uVar33 = 0;
            }
            puVar30 = *(uint **)(*(long *)(lVar22 + 0x13c0) + uVar33 * 8);
joined_r0x017faa5c:
            if (puVar30 != (uint *)0x0) {
              if (*puVar30 != 0) {
                cVar23 = *PTR_DAT_04bb7d20;
                do {
                  if (cVar23 == '\0') {
                    cVar23 = '\x01';
                    *PTR_DAT_04bb7d20 = 1;
                    puVar3 = PTR_DAT_04bb7d28;
                    *(undefined8 *)PTR_DAT_04bb7d28 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
                  }
                  else {
                    uVar17 = *(uint *)(PTR_DAT_04bb7d28 + 0x18);
                    if (-1 < (int)uVar17) {
                      if ((short *)((ulong)uVar17 + (long)puVar30) != (short *)0x0) {
                        uVar33 = (ulong)*(short *)((ulong)uVar17 + (long)puVar30);
                        goto LAB_017faa78;
                      }
                      break;
                    }
                    if (uVar17 != 0xffffffff) break;
                  }
                  puVar31 = (uint *)(ulong)*puVar30;
                  uVar33 = 0;
                  if ((*puVar30 == 0) || (puVar30 == puVar31)) goto LAB_017faa78;
                  lVar25 = 0xc;
                  if (*(char *)((long)puVar30 + (10 - (long)puVar31)) != '\0') {
                    lVar25 = 0x1c;
                  }
                  lVar25 = (long)puVar30 + (lVar25 - (long)puVar31);
                  if (lVar25 == 0) break;
                  uVar34 = (ulong)*(ushort *)((long)puVar30 + (8 - (long)puVar31));
                  *(undefined4 *)(PTR_DAT_04bb7d28 + 0x18) = 0xfffffffe;
                  uVar33 = 0;
                  if (uVar34 == 0) goto LAB_017faa78;
                  piVar32 = (int *)(lVar25 + 4);
                  while (piVar32[-1] != 0x7d016b27) {
                    piVar32 = piVar32 + 2;
                    uVar34 = uVar34 - 1;
                    if (uVar34 == 0) {
                      uVar33 = 0;
                      goto LAB_017faa78;
                    }
                  }
                  iVar28 = 0;
                  if (*piVar32 != -1) {
                    iVar28 = *piVar32;
                  }
                  *(int *)(PTR_DAT_04bb7d28 + 0x18) = iVar28;
                } while (*puVar30 != 0);
              }
              uVar33 = 0;
LAB_017faa78:
              if ((uVar36 == (uVar33 & 0xffffffff)) && (puVar26 != (uint *)0x0)) {
                puVar30 = (uint *)((long)puVar26 - (ulong)*puVar26);
                if ((*puVar26 != 0) && ((puVar30 != (uint *)0x0 && (*puVar30 != 0)))) {
                  uVar17 = puVar30[1];
                  if ((uVar17 != 0) && ((ulong)(ushort)puVar30[2] != 0)) {
                    lVar25 = 0xc;
                    if (*(char *)((long)puVar30 + 10) != '\0') {
                      lVar25 = 0x1c;
                    }
                    lVar25 = (long)puVar30 + lVar25 + (ulong)(ushort)puVar30[2] * 8;
                    if (lVar25 != 0) {
                      uVar15 = 0;
                      if ((ulong)uVar17 != 0) {
                        uVar15 = (uint)((ulong)((long)puVar26 - lVar25) / (ulong)uVar17);
                      }
                      if (*puVar30 <= uVar15) {
                        uVar15 = 0xffffffff;
                      }
                      if ((uVar15 < *(uint *)PTR_DAT_04bc00c8) &&
                         (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar15 * 2) == 4))
                      {
                        local_10c = uVar37;
                        goto LAB_017fa6e0;
                      }
                    }
                  }
                  if (((*puVar30 != 0) && (uVar17 = puVar30[1], uVar17 != 0)) &&
                     ((ulong)(ushort)puVar30[2] != 0)) {
                    lVar25 = 0xc;
                    if (*(char *)((long)puVar30 + 10) != '\0') {
                      lVar25 = 0x1c;
                    }
                    lVar25 = (long)puVar30 + lVar25 + (ulong)(ushort)puVar30[2] * 8;
                    if (lVar25 != 0) {
                      uVar15 = 0;
                      if ((ulong)uVar17 != 0) {
                        uVar15 = (uint)((ulong)((long)puVar26 - lVar25) / (ulong)uVar17);
                      }
                      if (*puVar30 <= uVar15) {
                        uVar15 = 0xffffffff;
                      }
                      if (uVar15 < *(uint *)PTR_DAT_04bc00c8) {
                        if (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar15 * 2) != 5
                           ) {
                          uVar37 = (uint)local_108;
                        }
                        local_108 = (undefined *)(ulong)uVar37;
                      }
                    }
                  }
                }
              }
            }
          }
LAB_017fa6e0:
          uVar39 = uVar39 + 1;
          if ((int)uVar12 < 1) goto LAB_017fa650;
LAB_017fa6ec:
          if (uVar24 <= uVar39) goto LAB_017fab90;
          uVar24 = uVar39 & 0xffffffff;
          if (*(uint *)(lVar22 + 0x13b8) <= uVar39) {
            uVar24 = 0;
          }
          puVar26 = *(uint **)(*(long *)(lVar22 + 0x13c0) + uVar24 * 8);
        } while (puVar26 == (uint *)0x0);
LAB_017fa710:
        if (*puVar26 != 0) {
          cVar23 = *PTR_DAT_04bb7d20;
          do {
            if (cVar23 == '\0') {
              cVar23 = '\x01';
              *PTR_DAT_04bb7d20 = 1;
              puVar3 = PTR_DAT_04bb7d28;
              *(undefined8 *)PTR_DAT_04bb7d28 = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
            }
            else {
              uVar37 = *(uint *)(PTR_DAT_04bb7d28 + 4);
              if (-1 < (int)uVar37) {
                if ((ushort *)((ulong)uVar37 + (long)puVar26) == (ushort *)0x0) break;
                uVar37 = (uint)*(ushort *)((ulong)uVar37 + (long)puVar26);
                goto LAB_017fa824;
              }
              if (uVar37 != 0xffffffff) break;
            }
            puVar30 = (uint *)(ulong)*puVar26;
            uVar37 = 0;
            if ((*puVar26 == 0) || (puVar26 == puVar30)) goto LAB_017fa824;
            lVar22 = 0xc;
            if (*(char *)((long)puVar26 + (10 - (long)puVar30)) != '\0') {
              lVar22 = 0x1c;
            }
            lVar22 = (long)puVar26 + (lVar22 - (long)puVar30);
            if (lVar22 == 0) break;
            uVar24 = (ulong)*(ushort *)((long)puVar26 + (8 - (long)puVar30));
            *(undefined4 *)(PTR_DAT_04bb7d28 + 4) = 0xfffffffe;
            if (uVar24 == 0) break;
            piVar32 = (int *)(lVar22 + 4);
            while (piVar32[-1] != 0x20cb67bc) {
              piVar32 = piVar32 + 2;
              uVar24 = uVar24 - 1;
              if (uVar24 == 0) goto LAB_017fa820;
            }
            uVar37 = 0;
            iVar28 = 0;
            if (*piVar32 != -1) {
              iVar28 = *piVar32;
            }
            *(int *)(PTR_DAT_04bb7d28 + 4) = iVar28;
            if (*puVar26 == 0) goto LAB_017fa824;
          } while( true );
        }
LAB_017fa820:
        uVar37 = 0;
        goto LAB_017fa824;
      }
    }
LAB_017fab90:
    local_80 = local_108;
    FUN_0277d4ac(&local_80);
    local_a0 = (undefined *)(ulong)(ushort)local_10c;
    FUN_0277d4ac(&local_a0);
    if ((*(long *)(lVar35 + 0x1ec8) != 0) &&
       (plVar20 = *(long **)(*(long *)(lVar35 + 0x1ec8) + 0x20), plVar20 != (long *)0x0)) {
      local_e8 = *(undefined **)(lVar35 + 0x1ea8);
      local_e0 = *(undefined **)(lVar35 + 0x1eb0);
      local_d8 = 0x24;
      (**(code **)(*plVar20 + 0x20))(plVar20,&local_e8);
    }
    FUN_0285abd0(*(long *)(lVar35 + 0x1eb0) + *(long *)(lVar35 + 0x1ea8),&local_80,&local_a0);
    if ((*(long *)(lVar35 + 0x1ec8) != 0) &&
       (plVar20 = *(long **)(*(long *)(lVar35 + 0x1ec8) + 0x20), plVar20 != (long *)0x0)) {
      local_e8 = *(undefined **)(lVar35 + 0x1ea8);
      local_e0 = *(undefined **)(lVar35 + 0x1eb0);
      local_d8 = 0x24;
      (**(code **)(*plVar20 + 0x20))(plVar20,&local_e8);
    }
    lVar22 = *(long *)(lVar35 + 0x1eb0) + *(long *)(lVar35 + 0x1ea8);
    *(byte *)(lVar22 + 0x1f) = *(byte *)(lVar22 + 0x1f) & 0xbf | (uVar36 == 0) << 6;
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar35 + 0x1ec8) != 0)) &&
       (puVar19 = *(undefined8 **)(*(long *)(lVar35 + 0x1ec8) + 0x18), puVar19 != (undefined8 *)0x0)
       ) {
      (**(code **)*puVar19)();
    }
    uVar36 = uVar36 + 1;
  } while (uVar36 != 6);
  uVar36 = 0;
  lVar35 = lVar18 + 0x1c0;
  puVar2 = PTR_DAT_04bc0510 + 0x10;
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  puVar3 = PTR_DAT_04bb2010 + 0x10;
  puVar26 = (uint *)PTR_DAT_04bc00c8;
LAB_017facf4:
  lVar22 = *(long *)PTR_DAT_04bb46d0;
  uVar11 = *(uint *)(lVar22 + 0x13c8);
  iVar28 = (int)uVar36;
  if ((int)uVar11 < 1) {
    uVar39 = 0;
    if (*(long *)(lVar22 + 0x12b8) != 0) {
      puVar30 = *(uint **)(*(long *)(lVar22 + 0x12b8) + 8);
      uVar39 = 0;
      if (puVar30 != (uint *)0x0) {
        uVar39 = (ulong)*puVar30;
      }
    }
    if (uVar39 <= uVar36) {
      return;
    }
    if (0 < (int)uVar11) goto LAB_017fad44;
    if ((((*(long *)(lVar22 + 0x12b8) != 0) &&
         (puVar30 = *(uint **)(*(long *)(lVar22 + 0x12b8) + 8), puVar30 != (uint *)0x0)) &&
        ((*(uint *)(lVar22 + 0x12d0) <= uVar36 ||
         (*(char *)(*(long *)(lVar22 + 0x12d8) + uVar36) != '\0')))) &&
       (((uVar36 < *puVar30 && (puVar30[1] != 0)) && ((ushort)puVar30[2] != 0)))) {
      iVar29 = 0xc;
      if (*(char *)((long)puVar30 + 10) != '\0') {
        iVar29 = 0x1c;
      }
      puVar30 = (uint *)((ulong)(puVar30[1] * iVar28 + (uint)(ushort)puVar30[2] * 8 + iVar29) +
                        (long)puVar30);
      goto joined_r0x017faec0;
    }
LAB_017faec4:
    uVar27 = 0xfffe;
  }
  else {
    if (uVar11 <= uVar36) {
      return;
    }
LAB_017fad44:
    if (uVar11 <= uVar36) goto LAB_017faec4;
    uVar39 = uVar36 & 0xffffffff;
    if (*(uint *)(lVar22 + 0x13b8) <= uVar36) {
      uVar39 = 0;
    }
    puVar30 = *(uint **)(*(long *)(lVar22 + 0x13c0) + uVar39 * 8);
joined_r0x017faec0:
    if (puVar30 == (uint *)0x0) goto LAB_017faec4;
    if (*puVar30 != 0) {
      cVar23 = *PTR_DAT_04bb7d20;
      do {
        if (cVar23 == '\0') {
          cVar23 = '\x01';
          *PTR_DAT_04bb7d20 = 1;
          puVar7 = PTR_DAT_04bb7d28;
          *(undefined8 *)PTR_DAT_04bb7d28 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
        }
        else {
          uVar11 = *(uint *)(PTR_DAT_04bb7d28 + 4);
          if (-1 < (int)uVar11) {
            if ((ushort *)((ulong)uVar11 + (long)puVar30) == (ushort *)0x0) break;
            uVar27 = *(ushort *)((ulong)uVar11 + (long)puVar30);
            goto LAB_017faec8;
          }
          if (uVar11 != 0xffffffff) break;
        }
        puVar31 = (uint *)(ulong)*puVar30;
        uVar27 = 0;
        if ((*puVar30 == 0) || (puVar30 == puVar31)) goto LAB_017faec8;
        lVar22 = 0xc;
        if (*(char *)((long)puVar30 + (10 - (long)puVar31)) != '\0') {
          lVar22 = 0x1c;
        }
        lVar22 = (long)puVar30 + (lVar22 - (long)puVar31);
        if (lVar22 == 0) break;
        uVar39 = (ulong)*(ushort *)((long)puVar30 + (8 - (long)puVar31));
        *(undefined4 *)(PTR_DAT_04bb7d28 + 4) = 0xfffffffe;
        uVar27 = 0;
        if (uVar39 == 0) goto LAB_017faec8;
        piVar32 = (int *)(lVar22 + 4);
        while (piVar32[-1] != 0x20cb67bc) {
          piVar32 = piVar32 + 2;
          uVar39 = uVar39 - 1;
          if (uVar39 == 0) {
            uVar27 = 0;
            goto LAB_017faec8;
          }
        }
        uVar27 = 0;
        iVar29 = 0;
        if (*piVar32 != -1) {
          iVar29 = *piVar32;
        }
        *(int *)(PTR_DAT_04bb7d28 + 4) = iVar29;
        if (*puVar30 == 0) goto LAB_017faec8;
      } while( true );
    }
    uVar27 = 0;
  }
LAB_017faec8:
  local_88 = (uint)uVar27;
  local_84 = 0;
  FUN_0277d4ac(&local_88);
  puVar7 = PTR_DAT_04bb43c0;
  local_90 = (uint *)0x0;
  local_98 = local_88;
  local_94 = local_84;
  lVar22 = *(long *)PTR_DAT_04bb43c0;
  local_a0 = puVar2;
  uVar11 = FUN_0277d6c4(&local_98);
  if (*(long *)puVar7 == 0) {
LAB_017faf80:
    if (local_90 != (uint *)0x0) goto LAB_017faf88;
LAB_017fb060:
    lVar22 = *(long *)PTR_DAT_04bb46d0;
    if ((int)*(uint *)(lVar22 + 0x13c8) < 1) {
      if ((*(long *)(lVar22 + 0x12b8) != 0) &&
         (puVar26 = *(uint **)(*(long *)(lVar22 + 0x12b8) + 8), puVar26 != (uint *)0x0)) {
        if (((*(uint *)(lVar22 + 0x12d0) <= uVar36) ||
            (*(char *)(*(long *)(lVar22 + 0x12d8) + uVar36) != '\0')) &&
           (((uVar36 < *puVar26 && (puVar26[1] != 0)) && ((ushort)puVar26[2] != 0)))) {
          iVar29 = 0xc;
          if (*(char *)((long)puVar26 + 10) != '\0') {
            iVar29 = 0x1c;
          }
          puVar26 = (uint *)((ulong)(puVar26[1] * iVar28 + (uint)(ushort)puVar26[2] * 8 + iVar29) +
                            (long)puVar26);
          if (puVar26 != (uint *)0x0) goto LAB_017fb0a4;
        }
        goto LAB_017fb214;
      }
LAB_017fb220:
      iVar29 = 0;
      iVar38 = 0;
    }
    else {
      if (*(uint *)(lVar22 + 0x13c8) <= uVar36) goto LAB_017fb220;
      uVar39 = uVar36 & 0xffffffff;
      if (*(uint *)(lVar22 + 0x13b8) <= uVar36) {
        uVar39 = 0;
      }
      puVar26 = *(uint **)(*(long *)(lVar22 + 0x13c0) + uVar39 * 8);
      if (puVar26 == (uint *)0x0) {
LAB_017fb214:
        iVar29 = 0;
        iVar38 = 0;
      }
      else {
LAB_017fb0a4:
        if (*puVar26 == 0) goto LAB_017fb214;
        cVar23 = *PTR_DAT_04bb7d20;
        do {
          if (cVar23 != '\0') {
            uVar11 = *(uint *)(PTR_DAT_04bb7d28 + 8);
            if ((int)uVar11 < 0) {
              if (uVar11 == 0xffffffff) goto LAB_017fb104;
            }
            else if ((short *)((ulong)uVar11 + (long)puVar26) != (short *)0x0) {
              iVar29 = (int)*(short *)((ulong)uVar11 + (long)puVar26);
              goto LAB_017fb610;
            }
            goto LAB_017fb60c;
          }
          cVar23 = '\x01';
          *PTR_DAT_04bb7d20 = 1;
          puVar7 = PTR_DAT_04bb7d28;
          *(undefined8 *)PTR_DAT_04bb7d28 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
LAB_017fb104:
          puVar30 = (uint *)(ulong)*puVar26;
          iVar29 = 0;
          if ((*puVar26 == 0) || (puVar26 == puVar30)) {
LAB_017fb610:
            uVar11 = *puVar26;
            if (uVar11 == 0) goto LAB_017fb6d4;
            uVar39 = (ulong)*(uint *)(PTR_DAT_04bb7d28 + 0xc);
            goto LAB_017fb624;
          }
          lVar22 = 0xc;
          if (*(char *)((long)puVar26 + (10 - (long)puVar30)) != '\0') {
            lVar22 = 0x1c;
          }
          lVar22 = (long)puVar26 + (lVar22 - (long)puVar30);
          if (lVar22 == 0) {
LAB_017fb60c:
            iVar29 = 0;
            goto LAB_017fb610;
          }
          uVar39 = (ulong)*(ushort *)((long)puVar26 + (8 - (long)puVar30));
          *(undefined4 *)(PTR_DAT_04bb7d28 + 8) = 0xfffffffe;
          if (uVar39 == 0) goto LAB_017fb60c;
          piVar32 = (int *)(lVar22 + 4);
          while (piVar32[-1] != 0x374d00da) {
            piVar32 = piVar32 + 2;
            uVar39 = uVar39 - 1;
            if (uVar39 == 0) goto LAB_017fb60c;
          }
          iVar29 = 0;
          iVar38 = 0;
          iVar5 = 0;
          if (*piVar32 != -1) {
            iVar5 = *piVar32;
          }
          *(int *)(PTR_DAT_04bb7d28 + 8) = iVar5;
        } while (*puVar26 != 0);
      }
    }
    goto LAB_017fb230;
  }
  lVar22 = *(long *)(lVar22 + 0x57e58);
  uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
  if ((*(uint *)(lVar22 + 0x1d8) <= uVar11) ||
     (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar11 * 8) == 0)) goto LAB_017faf80;
  lVar22 = *(long *)PTR_DAT_04bc0428;
  uVar11 = FUN_0277d6c4(&local_88);
  uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
  if ((*(uint *)(lVar22 + 0x1d8) <= uVar11) ||
     (puVar30 = *(uint **)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar11 * 8),
     puVar30 == (uint *)0x0)) goto LAB_017faf80;
  local_90 = puVar30;
LAB_017faf88:
  puVar30 = (uint *)((long)local_90 - (ulong)*local_90);
  if (((*local_90 == 0) || (puVar30 == (uint *)0x0)) || (*puVar30 == 0)) goto LAB_017fb060;
  uVar11 = puVar30[1];
  if ((uVar11 == 0) || ((ulong)(ushort)puVar30[2] == 0)) {
LAB_017faffc:
    if ((*puVar30 != 0) && ((uVar11 = puVar30[1], uVar11 != 0 && ((ulong)(ushort)puVar30[2] != 0))))
    {
      lVar22 = 0xc;
      if (*(char *)((long)puVar30 + 10) != '\0') {
        lVar22 = 0x1c;
      }
      lVar22 = (long)puVar30 + lVar22 + (ulong)(ushort)puVar30[2] * 8;
      if (lVar22 != 0) {
        uVar37 = 0;
        if ((ulong)uVar11 != 0) {
          uVar37 = (uint)((ulong)((long)local_90 - lVar22) / (ulong)uVar11);
        }
        if (*puVar30 <= uVar37) {
          uVar37 = 0xffffffff;
        }
        if ((uVar37 < *puVar26) && (*(short *)(*(long *)(puVar26 + 2) + (long)(int)uVar37 * 2) == 5)
           ) goto LAB_017fbe40;
      }
    }
    goto LAB_017fb060;
  }
  lVar22 = 0xc;
  if (*(char *)((long)puVar30 + 10) != '\0') {
    lVar22 = 0x1c;
  }
  lVar22 = (long)puVar30 + lVar22 + (ulong)(ushort)puVar30[2] * 8;
  if (lVar22 == 0) goto LAB_017faffc;
  uVar37 = 0;
  if ((ulong)uVar11 != 0) {
    uVar37 = (uint)((ulong)((long)local_90 - lVar22) / (ulong)uVar11);
  }
  if (*puVar30 <= uVar37) {
    uVar37 = 0xffffffff;
  }
  if ((*puVar26 <= uVar37) || (*(short *)(*(long *)(puVar26 + 2) + (long)(int)uVar37 * 2) != 4))
  goto LAB_017faffc;
  goto LAB_017fbe40;
LAB_017fb624:
  if ((int)uVar39 < 0) {
    if ((uVar39 != 0xffffffff) || (lVar22 = (long)puVar26 - (ulong)uVar11, lVar22 == 0))
    goto LAB_017fb6d4;
    lVar25 = 0xc;
    if (*(char *)(lVar22 + 10) != '\0') {
      lVar25 = 0x1c;
    }
    if (lVar25 + lVar22 == 0) goto LAB_017fb6d4;
    uVar39 = (ulong)*(ushort *)(lVar22 + 8);
    *(undefined4 *)(PTR_DAT_04bb7d28 + 0xc) = 0xfffffffe;
    if (uVar39 == 0) goto LAB_017fb6d4;
    puVar30 = (uint *)(lVar25 + lVar22 + 4);
    while (puVar30[-1] != 0x4d8d53ba) {
      puVar30 = puVar30 + 2;
      uVar39 = uVar39 - 1;
      if (uVar39 == 0) goto LAB_017fb6d4;
    }
    uVar39 = 0;
    if (*puVar30 != 0xffffffff) {
      uVar39 = (ulong)*puVar30;
    }
    *(int *)(PTR_DAT_04bb7d28 + 0xc) = (int)uVar39;
    uVar11 = *puVar26;
    if (uVar11 == 0) goto LAB_017fb6d4;
    goto LAB_017fb624;
  }
  if ((short *)(uVar39 + (long)puVar26) != (short *)0x0) {
    iVar38 = (int)*(short *)(uVar39 + (long)puVar26);
    goto LAB_017fb230;
  }
LAB_017fb6d4:
  iVar38 = 0;
LAB_017fb230:
  iVar10 = DAT_052945d4;
  iVar9 = DAT_052945d0;
  iVar8 = DAT_05293db4;
  iVar5 = DAT_05293db0;
  iVar13 = FUN_01ad7260(&local_a0);
  if (iVar13 != 0) {
    lVar22 = *(long *)PTR_DAT_04bb46d0;
    if ((int)*(uint *)(lVar22 + 0x13c8) < 1) {
      if ((((*(long *)(lVar22 + 0x12b8) != 0) &&
           (puVar26 = *(uint **)(*(long *)(lVar22 + 0x12b8) + 8), puVar26 != (uint *)0x0)) &&
          ((*(uint *)(lVar22 + 0x12d0) <= uVar36 ||
           (*(char *)(*(long *)(lVar22 + 0x12d8) + uVar36) != '\0')))) &&
         (((uVar36 < *puVar26 && (puVar26[1] != 0)) && ((ushort)puVar26[2] != 0)))) {
        iVar13 = 0xc;
        if (*(char *)((long)puVar26 + 10) != '\0') {
          iVar13 = 0x1c;
        }
        puVar26 = (uint *)((ulong)(puVar26[1] * iVar28 + (uint)(ushort)puVar26[2] * 8 + iVar13) +
                          (long)puVar26);
        goto joined_r0x017fb3f8;
      }
    }
    else if (uVar36 < *(uint *)(lVar22 + 0x13c8)) {
      uVar39 = uVar36 & 0xffffffff;
      if (*(uint *)(lVar22 + 0x13b8) <= uVar36) {
        uVar39 = 0;
      }
      puVar26 = *(uint **)(*(long *)(lVar22 + 0x13c0) + uVar39 * 8);
joined_r0x017fb3f8:
      if ((puVar26 != (uint *)0x0) && (*puVar26 != 0)) {
        cVar23 = *PTR_DAT_04bb7d20;
        do {
          if (cVar23 == '\0') {
            cVar23 = '\x01';
            *PTR_DAT_04bb7d20 = 1;
            puVar7 = PTR_DAT_04bb7d28;
            *(undefined8 *)PTR_DAT_04bb7d28 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          }
          else {
            uVar11 = *(uint *)(PTR_DAT_04bb7d28 + 0x10);
            if (-1 < (int)uVar11) {
              if ((short *)((ulong)uVar11 + (long)puVar26) == (short *)0x0) break;
              iVar13 = (int)*(short *)((ulong)uVar11 + (long)puVar26);
              goto LAB_017fb404;
            }
            if (uVar11 != 0xffffffff) break;
          }
          puVar30 = (uint *)(ulong)*puVar26;
          iVar13 = 0;
          if ((*puVar26 == 0) || (puVar26 == puVar30)) goto LAB_017fb404;
          lVar22 = 0xc;
          if (*(char *)((long)puVar26 + (10 - (long)puVar30)) != '\0') {
            lVar22 = 0x1c;
          }
          lVar22 = (long)puVar26 + (lVar22 - (long)puVar30);
          if (lVar22 == 0) break;
          uVar39 = (ulong)*(ushort *)((long)puVar26 + (8 - (long)puVar30));
          *(undefined4 *)(PTR_DAT_04bb7d28 + 0x10) = 0xfffffffe;
          if (uVar39 == 0) break;
          piVar32 = (int *)(lVar22 + 4);
          while (piVar32[-1] != -0x39e3d866) {
            piVar32 = piVar32 + 2;
            uVar39 = uVar39 - 1;
            if (uVar39 == 0) goto LAB_017fb400;
          }
          iVar13 = 0;
          iVar14 = 0;
          if (*piVar32 != -1) {
            iVar14 = *piVar32;
          }
          *(int *)(PTR_DAT_04bb7d28 + 0x10) = iVar14;
          if (*puVar26 == 0) goto LAB_017fb404;
        } while( true );
      }
    }
LAB_017fb400:
    iVar13 = 0;
LAB_017fb404:
    iVar14 = FUN_01ad7260(&local_a0);
    if ((iVar14 != 0) &&
       (((iVar13 == 0 || (iVar14 = FUN_01ad7260(&local_a0), iVar13 < iVar14)) &&
        (puVar21 = (ushort *)FUN_01afd600(&local_a0), puVar21 != (ushort *)0x0)))) {
      *puVar21 = *puVar21 & 0xfff8 | (ushort)iVar13 & 7;
    }
  }
  iVar13 = FUN_01afcfa0(&local_a0);
  lVar22 = *(long *)PTR_DAT_04bb46d0;
  if (iVar13 != 0) {
    uVar11 = *(uint *)(lVar22 + 0x13c8);
    if ((int)uVar11 < 1) {
      if ((((*(long *)(lVar22 + 0x12b8) != 0) &&
           (puVar26 = *(uint **)(*(long *)(lVar22 + 0x12b8) + 8), puVar26 != (uint *)0x0)) &&
          ((*(uint *)(lVar22 + 0x12d0) <= uVar36 ||
           (*(char *)(*(long *)(lVar22 + 0x12d8) + uVar36) != '\0')))) &&
         (((uVar36 < *puVar26 && (puVar26[1] != 0)) && ((ushort)puVar26[2] != 0)))) {
        iVar13 = 0xc;
        if (*(char *)((long)puVar26 + 10) != '\0') {
          iVar13 = 0x1c;
        }
        puVar26 = (uint *)((ulong)(puVar26[1] * iVar28 + (uint)(ushort)puVar26[2] * 8 + iVar13) +
                          (long)puVar26);
        goto joined_r0x017fb5dc;
      }
    }
    else if (uVar36 < uVar11) {
      uVar39 = uVar36 & 0xffffffff;
      if (*(uint *)(lVar22 + 0x13b8) <= uVar36) {
        uVar39 = 0;
      }
      puVar26 = *(uint **)(*(long *)(lVar22 + 0x13c0) + uVar39 * 8);
joined_r0x017fb5dc:
      if (puVar26 != (uint *)0x0) {
        if (*puVar26 != 0) {
          cVar23 = *PTR_DAT_04bb7d20;
          do {
            if (cVar23 == '\0') {
              cVar23 = '\x01';
              *PTR_DAT_04bb7d20 = 1;
              puVar7 = PTR_DAT_04bb7d28;
              *(undefined8 *)PTR_DAT_04bb7d28 = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
            }
            else {
              uVar37 = *(uint *)(PTR_DAT_04bb7d28 + 0x14);
              if (-1 < (int)uVar37) {
                if (((short *)((ulong)uVar37 + (long)puVar26) != (short *)0x0) &&
                   (*(short *)((ulong)uVar37 + (long)puVar26) == -1)) goto LAB_017fb8d0;
                break;
              }
              if (uVar37 != 0xffffffff) break;
            }
            lVar25 = (long)puVar26 - (ulong)*puVar26;
            if ((*puVar26 == 0) || (lVar25 == 0)) break;
            lVar6 = 0xc;
            if (*(char *)(lVar25 + 10) != '\0') {
              lVar6 = 0x1c;
            }
            if (lVar6 + lVar25 == 0) break;
            uVar39 = (ulong)*(ushort *)(lVar25 + 8);
            *(undefined4 *)(PTR_DAT_04bb7d28 + 0x14) = 0xfffffffe;
            if (uVar39 == 0) break;
            piVar32 = (int *)(lVar6 + lVar25 + 4);
            while (piVar32[-1] != -0x4a67fbaf) {
              piVar32 = piVar32 + 2;
              uVar39 = uVar39 - 1;
              if (uVar39 == 0) goto LAB_017fb700;
            }
            iVar13 = 0;
            if (*piVar32 != -1) {
              iVar13 = *piVar32;
            }
            *(int *)(PTR_DAT_04bb7d28 + 0x14) = iVar13;
            if (*puVar26 == 0) break;
          } while( true );
        }
LAB_017fb700:
        if ((int)uVar11 < 1) {
          if (((*(long *)(lVar22 + 0x12b8) != 0) &&
              (puVar26 = *(uint **)(*(long *)(lVar22 + 0x12b8) + 8), puVar26 != (uint *)0x0)) &&
             ((*(uint *)(lVar22 + 0x12d0) <= uVar36 ||
              (*(char *)(*(long *)(lVar22 + 0x12d8) + uVar36) != '\0')))) {
            lVar25 = 0xffffffff;
            if (*puVar26 <= uVar36) goto LAB_017fb8b8;
            if ((puVar26[1] != 0) && ((ushort)puVar26[2] != 0)) {
              iVar13 = 0xc;
              if (*(char *)((long)puVar26 + 10) != '\0') {
                iVar13 = 0x1c;
              }
              puVar26 = (uint *)((ulong)(puVar26[1] * iVar28 + (uint)(ushort)puVar26[2] * 8 + iVar13
                                        ) + (long)puVar26);
              if (puVar26 != (uint *)0x0) goto LAB_017fb734;
            }
          }
LAB_017fb898:
          lVar25 = 0xffffffff;
        }
        else {
          lVar25 = 0xffffffff;
          if (uVar36 < uVar11) {
            uVar39 = uVar36 & 0xffffffff;
            if (*(uint *)(lVar22 + 0x13b8) <= uVar36) {
              uVar39 = 0;
            }
            puVar26 = *(uint **)(*(long *)(lVar22 + 0x13c0) + uVar39 * 8);
            if (puVar26 == (uint *)0x0) goto LAB_017fb898;
LAB_017fb734:
            if (*puVar26 != 0) {
              cVar23 = *PTR_DAT_04bb7d20;
              do {
                if (cVar23 == '\0') {
                  cVar23 = '\x01';
                  *PTR_DAT_04bb7d20 = 1;
                  puVar7 = PTR_DAT_04bb7d28;
                  *(undefined8 *)PTR_DAT_04bb7d28 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                }
                else {
                  uVar11 = *(uint *)(PTR_DAT_04bb7d28 + 0x14);
                  if (-1 < (int)uVar11) {
                    if ((short *)((ulong)uVar11 + (long)puVar26) == (short *)0x0) break;
                    lVar25 = (long)*(short *)((ulong)uVar11 + (long)puVar26);
                    goto LAB_017fb8b8;
                  }
                  if (uVar11 != 0xffffffff) break;
                }
                puVar30 = (uint *)(ulong)*puVar26;
                lVar25 = 0;
                if ((*puVar26 == 0) || (puVar26 == puVar30)) goto LAB_017fb8b8;
                lVar22 = 0xc;
                if (*(char *)((long)puVar26 + (10 - (long)puVar30)) != '\0') {
                  lVar22 = 0x1c;
                }
                lVar22 = (long)puVar26 + (lVar22 - (long)puVar30);
                if (lVar22 == 0) break;
                uVar39 = (ulong)*(ushort *)((long)puVar26 + (8 - (long)puVar30));
                *(undefined4 *)(PTR_DAT_04bb7d28 + 0x14) = 0xfffffffe;
                if (uVar39 == 0) break;
                piVar32 = (int *)(lVar22 + 4);
                while (piVar32[-1] != -0x4a67fbaf) {
                  piVar32 = piVar32 + 2;
                  uVar39 = uVar39 - 1;
                  if (uVar39 == 0) goto LAB_017fb8b4;
                }
                lVar25 = 0;
                iVar13 = 0;
                if (*piVar32 != -1) {
                  iVar13 = *piVar32;
                }
                *(int *)(PTR_DAT_04bb7d28 + 0x14) = iVar13;
                if (*puVar26 == 0) goto LAB_017fb8b8;
              } while( true );
            }
LAB_017fb8b4:
            lVar25 = 0;
          }
        }
LAB_017fb8b8:
        FUN_01afdcc4(&local_a0,lVar25);
        lVar22 = *(long *)PTR_DAT_04bb46d0;
      }
    }
  }
LAB_017fb8d0:
  if ((int)*(uint *)(lVar22 + 0x13c8) < 1) {
    if ((((*(long *)(lVar22 + 0x12b8) != 0) &&
         (puVar26 = *(uint **)(*(long *)(lVar22 + 0x12b8) + 8), puVar26 != (uint *)0x0)) &&
        ((*(uint *)(lVar22 + 0x12d0) <= uVar36 ||
         (*(char *)(*(long *)(lVar22 + 0x12d8) + uVar36) != '\0')))) &&
       (((uVar36 < *puVar26 && (puVar26[1] != 0)) && ((ushort)puVar26[2] != 0)))) {
      iVar13 = 0xc;
      if (*(char *)((long)puVar26 + 10) != '\0') {
        iVar13 = 0x1c;
      }
      puVar26 = (uint *)((ulong)(puVar26[1] * iVar28 + (uint)(ushort)puVar26[2] * 8 + iVar13) +
                        (long)puVar26);
      if (puVar26 != (uint *)0x0) goto LAB_017fb908;
    }
LAB_017fba00:
    uVar11 = 0;
  }
  else {
    if (*(uint *)(lVar22 + 0x13c8) <= uVar36) goto LAB_017fba00;
    uVar39 = uVar36 & 0xffffffff;
    if (*(uint *)(lVar22 + 0x13b8) <= uVar36) {
      uVar39 = 0;
    }
    puVar26 = *(uint **)(*(long *)(lVar22 + 0x13c0) + uVar39 * 8);
    if (puVar26 == (uint *)0x0) goto LAB_017fba00;
LAB_017fb908:
    uVar11 = *puVar26;
    if (uVar11 == 0 || puVar26 == (uint *)(ulong)uVar11) {
LAB_017fb984:
      uVar11 = 0;
    }
    else {
      puVar30 = (uint *)((long)puVar26 - (long)(ulong)uVar11);
      if (((*puVar30 == 0) || (uVar11 = puVar30[1], uVar11 == 0)) ||
         ((ulong)(ushort)puVar30[2] == 0)) goto LAB_017fb984;
      lVar22 = 0xc;
      if (*(char *)((long)puVar30 + 10) != '\0') {
        lVar22 = 0x1c;
      }
      lVar22 = (long)puVar30 + lVar22 + (ulong)(ushort)puVar30[2] * 8;
      if (lVar22 == 0) goto LAB_017fb984;
      uVar37 = 0;
      if ((ulong)uVar11 != 0) {
        uVar37 = (uint)((ulong)((long)puVar26 - lVar22) / (ulong)uVar11);
      }
      if (*puVar30 <= uVar37) {
        uVar37 = 0xffffffff;
      }
      if ((*(uint *)PTR_DAT_04bbe500 <= uVar37) ||
         (uVar27 = *(ushort *)(*(long *)(PTR_DAT_04bbe500 + 8) + (long)(int)uVar37 * 2),
         uVar11 = (uint)uVar27, 3 < uVar27)) goto LAB_017fb984;
    }
    local_e8 = (undefined *)CONCAT44(local_e8._4_4_,uVar11);
  }
  FUN_01afade0(&local_a0,uVar11);
  puVar7 = PTR_DAT_04bb43c0;
  local_c0 = PTR_DAT_04bc0510 + 0x10;
  local_a6 = local_98._2_1_;
  local_a5 = local_98._3_1_;
  local_a4 = local_94;
  local_b6 = local_98._2_1_;
  local_b5 = local_98._3_1_;
  local_b4 = local_94;
  local_a8 = (undefined2)local_98;
  local_b8 = (undefined2)local_98;
  local_b0 = 0;
  lVar22 = *(long *)PTR_DAT_04bb43c0;
  uVar11 = FUN_0277d6c4(&local_b8);
  if (*(long *)puVar7 != 0) {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((uVar11 < *(uint *)(lVar22 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
      lVar22 = *(long *)PTR_DAT_04bc0428;
      uVar11 = FUN_0277d6c4(&local_a8);
      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
      if ((uVar11 < *(uint *)(lVar22 + 0x1d8)) &&
         (lVar22 = *(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar11 * 8), lVar22 != 0)) {
        local_b0 = lVar22;
      }
    }
  }
  uVar11 = (iVar9 + iVar29) - iVar5;
  local_d8 = 0;
  uVar37 = (iVar10 + iVar38) - iVar8;
  local_c8 = 0;
  local_e8 = puVar1;
  local_e0 = puVar3;
  local_d0 = puVar3;
  FUN_01afb480(&local_c0,&local_e8);
  iVar28 = local_c8._4_4_ + 1;
  if (iVar28 != local_d8._4_4_) {
    iVar5 = (int)local_d8;
    iVar29 = local_d8._4_4_;
    iVar38 = (int)local_d8;
    do {
      puStack_f8 = PTR_DAT_04bb2010 + 0x10;
      local_100 = 0xfffe;
      local_f0 = iVar38;
      uStack_ec = iVar29;
      FUN_0277d4ac(&local_100);
      FUN_0277eec0(&local_a8,&local_100,&puStack_f8);
      uVar12 = iVar38 + uVar11;
      uVar17 = iVar29 + uVar37;
      local_f0 = uVar12;
      uStack_ec = uVar17;
      uVar15 = (**(code **)(*(long *)(lVar18 + 0x1c0) + 0x18))(lVar35);
      uVar16 = (**(code **)(*(long *)(lVar18 + 0x1c0) + 0x20))(lVar35);
      lVar22 = *(long *)(lVar18 + 0x1e8);
      if (uVar15 <= uVar12) {
        uVar12 = 0;
      }
      if (uVar16 <= uVar17) {
        uVar17 = 0;
      }
      if (lVar22 == 0) {
        uVar39 = 0;
      }
      else {
        if (*(undefined8 **)(lVar22 + 0x10) == (undefined8 *)0x0) {
          uVar39 = 0;
          lVar22 = *(long *)(lVar22 + 0x20);
        }
        else {
          uVar39 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
          uVar39 = uVar39 & 0xffffffff;
          if (*(long *)(lVar18 + 0x1e8) == 0) goto LAB_017fbc38;
          lVar22 = *(long *)(*(long *)(lVar18 + 0x1e8) + 0x20);
        }
        if (lVar22 != 0) {
          local_80 = *(undefined **)(lVar18 + 0x1c8);
          local_78 = (**(code **)(*(long *)(lVar18 + 0x1c0) + 0x28))(lVar35,uVar12,uVar17);
          uStack_70 = 8;
          plVar20 = *(long **)(*(long *)(lVar18 + 0x1e8) + 0x20);
          (**(code **)(*plVar20 + 0x20))(plVar20,&local_80);
        }
      }
LAB_017fbc38:
      lVar22 = (**(code **)(*(long *)(lVar18 + 0x1c0) + 0x28))(lVar35,uVar12,uVar17);
      puVar4 = (undefined2 *)(lVar22 + *(long *)(lVar18 + 0x1c8));
      *puVar4 = (undefined2)local_100;
      *(undefined1 *)(puVar4 + 1) = local_100._2_1_;
      *(undefined1 *)((long)puVar4 + 3) = local_100._3_1_;
      *(undefined4 *)(puVar4 + 2) = local_100._4_4_;
      if ((((uVar39 & 1) != 0) && (*(long *)(lVar18 + 0x1e8) != 0)) &&
         (puVar19 = *(undefined8 **)(*(long *)(lVar18 + 0x1e8) + 0x18), puVar19 != (undefined8 *)0x0
         )) {
        (**(code **)*puVar19)();
      }
      if (iVar38 < (int)local_c8) {
        iVar38 = iVar38 + 1;
      }
      else {
        iVar29 = iVar29 + 1;
        iVar38 = (int)local_d8;
      }
    } while ((iVar5 != iVar38) || (iVar28 != iVar29));
  }
  uVar12 = (**(code **)(*(long *)(lVar18 + 0x1c0) + 0x18))(lVar35);
  uVar17 = (**(code **)(*(long *)(lVar18 + 0x1c0) + 0x20))(lVar35);
  lVar22 = *(long *)(lVar18 + 0x1e8);
  if (uVar12 <= uVar11) {
    uVar11 = 0;
  }
  if (uVar17 <= uVar37) {
    uVar37 = 0;
  }
  if (lVar22 == 0) {
    uVar39 = 0;
  }
  else {
    if (*(undefined8 **)(lVar22 + 0x10) == (undefined8 *)0x0) {
      uVar39 = 0;
      lVar22 = *(long *)(lVar22 + 0x20);
    }
    else {
      uVar39 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
      uVar39 = uVar39 & 0xffffffff;
      if (*(long *)(lVar18 + 0x1e8) == 0) goto LAB_017fbdcc;
      lVar22 = *(long *)(*(long *)(lVar18 + 0x1e8) + 0x20);
    }
    if (lVar22 != 0) {
      local_80 = *(undefined **)(lVar18 + 0x1c8);
      local_78 = (**(code **)(*(long *)(lVar18 + 0x1c0) + 0x28))(lVar35,uVar11,uVar37);
      uStack_70 = 8;
      plVar20 = *(long **)(*(long *)(lVar18 + 0x1e8) + 0x20);
      (**(code **)(*plVar20 + 0x20))(plVar20,&local_80);
    }
  }
LAB_017fbdcc:
  lVar22 = (**(code **)(*(long *)(lVar18 + 0x1c0) + 0x28))(lVar35,uVar11,uVar37);
  puVar4 = (undefined2 *)(lVar22 + *(long *)(lVar18 + 0x1c8));
  *puVar4 = local_a8;
  *(undefined1 *)(puVar4 + 1) = local_a6;
  *(undefined1 *)((long)puVar4 + 3) = local_a5;
  *(undefined4 *)(puVar4 + 2) = local_a4;
  if ((((uVar39 & 1) != 0) && (*(long *)(lVar18 + 0x1e8) != 0)) &&
     (puVar19 = *(undefined8 **)(*(long *)(lVar18 + 0x1e8) + 0x18), puVar19 != (undefined8 *)0x0)) {
    (**(code **)*puVar19)();
  }
  puVar26 = (uint *)PTR_DAT_04bc00c8;
LAB_017fbe40:
  uVar36 = uVar36 + 1;
  goto LAB_017facf4;
}

