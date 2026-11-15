
void FUN_02009f00(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  char cVar13;
  code *pcVar14;
  byte bVar15;
  uint uVar16;
  uint *puVar17;
  int *piVar18;
  bool bVar19;
  long *plVar20;
  uint *puVar21;
  long *plVar22;
  uint uVar23;
  uint local_ec;
  uint local_bc;
  long local_b8;
  undefined *local_b0;
  undefined *local_a8;
  long local_a0;
  undefined *local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  uVar7 = (**(code **)(*param_1 + 0x20))();
  puVar3 = PTR_DAT_04bb32f0;
  if (((uVar7 & 1) == 0) &&
     ((*(long *)PTR_DAT_04bb32f0 == 0 ||
      ((iVar8 = FUN_00883550(), iVar8 != 1 &&
       ((*(long *)puVar3 == 0 || (iVar8 = FUN_00883068(), iVar8 != 1)))))))) {
    bVar19 = false;
  }
  else {
    lVar9 = (**(code **)(*param_1 + 0x28))(param_1);
    local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(*(long *)(lVar9 + 8) + 0x230));
    lVar9 = (**(code **)(*param_1 + 0x28))(param_1);
    bVar19 = true;
    FUN_021e8490(&local_b8,*(long *)(*(long *)(lVar9 + 8) + 0x68) + 0x278,&DAT_053c3670,1,0);
  }
  puVar3 = PTR_DAT_04bc1578;
  plVar22 = (long *)param_1[4];
  if (plVar22 != param_1 + 3) {
    plVar20 = param_1 + -8;
    plVar12 = plVar22 + -0xb;
    if (bVar19) {
      if ((uVar7 & 1) != 0) {
        local_ec = 1;
        lVar9 = *(long *)PTR_DAT_04bb3968;
        puVar1 = PTR_DAT_04bbc1a0 + 0x10;
        puVar2 = PTR_DAT_04bb2010 + 0x10;
        do {
          local_b8 = plVar22[-0xb];
          local_a0 = plVar12[3];
          local_90 = plVar12[5];
          local_70 = plVar12[9];
          local_b0 = puVar1;
          local_a8 = puVar2;
          local_98 = puVar2;
          FUN_0200a9f0(&local_b8);
          uVar23 = 0;
          do {
            local_bc = uVar23;
            if ((int)*(uint *)(lVar9 + 0x16ca0) < 1) {
              if ((((*(long *)(lVar9 + 0x16b90) != 0) &&
                   (puVar21 = *(uint **)(*(long *)(lVar9 + 0x16b90) + 8), puVar21 != (uint *)0x0))
                  && ((*(uint *)(lVar9 + 0x16ba8) <= uVar23 ||
                      (*(char *)(*(long *)(lVar9 + 0x16bb0) + (long)(int)uVar23) != '\0')))) &&
                 (((uVar23 < *puVar21 && (puVar21[1] != 0)) && ((ushort)puVar21[2] != 0)))) {
                iVar8 = 0xc;
                if (*(char *)((long)puVar21 + 10) != '\0') {
                  iVar8 = 0x1c;
                }
                puVar21 = (uint *)((ulong)(puVar21[1] * uVar23 + (uint)(ushort)puVar21[2] * 8 +
                                          iVar8) + (long)puVar21);
                goto joined_r0x0200a288;
              }
            }
            else if (uVar23 < *(uint *)(lVar9 + 0x16ca0)) {
              uVar16 = uVar23;
              if (*(uint *)(lVar9 + 0x16c90) <= uVar23) {
                uVar16 = 0;
              }
              puVar21 = *(uint **)(*(long *)(lVar9 + 0x16c98) + (ulong)uVar16 * 8);
joined_r0x0200a288:
              if (puVar21 != (uint *)0x0) {
                if (*puVar21 != 0) {
                  cVar13 = *PTR_DAT_04bc1570;
                  do {
                    puVar6 = PTR_DAT_04bc1570;
                    if (cVar13 == '\0') {
                      cVar13 = '\x01';
                      *(undefined8 *)puVar3 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
                      *(undefined4 *)(puVar3 + 0x68) = 0xffffffff;
                      *puVar6 = 1;
                      *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
                    }
                    else {
                      uVar16 = *(uint *)(puVar3 + 100);
                      if (-1 < (int)uVar16) {
                        if (((byte *)((ulong)uVar16 + (long)puVar21) != (byte *)0x0) &&
                           (bVar15 = *(byte *)((ulong)uVar16 + (long)puVar21), uVar16 = (uint)bVar15
                           , bVar15 < 5)) goto LAB_0200a2b4;
                        break;
                      }
                      if (uVar16 != 0xffffffff) break;
                    }
                    puVar17 = (uint *)(ulong)*puVar21;
                    uVar16 = 1;
                    if ((*puVar21 == 0) || (puVar21 == puVar17)) goto LAB_0200a2b4;
                    lVar11 = 0xc;
                    if (*(char *)((long)puVar21 + (10 - (long)puVar17)) != '\0') {
                      lVar11 = 0x1c;
                    }
                    lVar11 = (long)puVar21 + (lVar11 - (long)puVar17);
                    if (lVar11 == 0) break;
                    uVar10 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar17));
                    *(undefined4 *)(puVar3 + 100) = 0xfffffffe;
                    if (uVar10 == 0) break;
                    piVar18 = (int *)(lVar11 + 4);
                    while (piVar18[-1] != -0x11f69e06) {
                      piVar18 = piVar18 + 2;
                      uVar10 = uVar10 - 1;
                      if (uVar10 == 0) goto LAB_0200a2b0;
                    }
                    iVar8 = 0;
                    if (*piVar18 != -1) {
                      iVar8 = *piVar18;
                    }
                    *(int *)(puVar3 + 100) = iVar8;
                    if (*puVar21 == 0) break;
                  } while( true );
                }
LAB_0200a2b0:
                uVar16 = 1;
LAB_0200a2b4:
                if (((int)uVar16 <= *(int *)(*(long *)PTR_DAT_04bb3968 + 0x11b8)) &&
                   (uVar10 = (**(code **)(*param_1 + 0x30))(param_1,puVar21), (uVar10 & 1) != 0)) {
                  lVar11 = (**(code **)(*param_1 + 0x28))(param_1);
                  uVar16 = *puVar21;
                  if ((*(byte *)(lVar11 + 0xad54) >> 2 & 1) != 0) {
                    if (uVar16 != 0) {
                      cVar13 = *PTR_DAT_04bc1570;
                      do {
                        puVar6 = PTR_DAT_04bc1570;
                        if (cVar13 == '\0') {
                          cVar13 = '\x01';
                          *(undefined8 *)puVar3 = 0xffffffffffffffff;
                          *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
                          *(undefined4 *)(puVar3 + 0x68) = 0xffffffff;
                          *puVar6 = 1;
                          *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
                        }
                        else {
                          uVar16 = *(uint *)(puVar3 + 0x30);
                          if (-1 < (int)uVar16) {
                            if ((byte *)((ulong)uVar16 + (long)puVar21) != (byte *)0x0) {
                              bVar15 = *(byte *)((ulong)uVar16 + (long)puVar21);
                              goto LAB_0200a410;
                            }
                            break;
                          }
                          if (uVar16 != 0xffffffff) break;
                        }
                        puVar17 = (uint *)(ulong)*puVar21;
                        bVar15 = 2;
                        if ((*puVar21 == 0) || (puVar21 == puVar17)) goto LAB_0200a410;
                        lVar11 = 0xc;
                        if (*(char *)((long)puVar21 + (10 - (long)puVar17)) != '\0') {
                          lVar11 = 0x1c;
                        }
                        lVar11 = (long)puVar21 + (lVar11 - (long)puVar17);
                        if (lVar11 == 0) break;
                        uVar10 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar17));
                        *(undefined4 *)(puVar3 + 0x30) = 0xfffffffe;
                        if (uVar10 == 0) break;
                        piVar18 = (int *)(lVar11 + 4);
                        while (piVar18[-1] != -0x5621fc7c) {
                          piVar18 = piVar18 + 2;
                          uVar10 = uVar10 - 1;
                          if (uVar10 == 0) goto LAB_0200a40c;
                        }
                        iVar8 = 0;
                        if (*piVar18 != -1) {
                          iVar8 = *piVar18;
                        }
                        *(int *)(puVar3 + 0x30) = iVar8;
                        if (*puVar21 == 0) break;
                      } while( true );
                    }
LAB_0200a40c:
                    bVar15 = 2;
LAB_0200a410:
                    if (1 < bVar15) {
                      bVar15 = 2;
                    }
                    if (bVar15 != 0) goto LAB_0200a0f0;
                    uVar16 = *puVar21;
                  }
                  if (uVar16 != 0) {
                    cVar13 = *PTR_DAT_04bc1570;
                    do {
                      puVar6 = PTR_DAT_04bc1570;
                      if (cVar13 == '\0') {
                        cVar13 = '\x01';
                        *(undefined8 *)puVar3 = 0xffffffffffffffff;
                        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
                        *(undefined4 *)(puVar3 + 0x68) = 0xffffffff;
                        *puVar6 = 1;
                        *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
                      }
                      else {
                        uVar16 = *(uint *)(puVar3 + 0x10);
                        if (-1 < (int)uVar16) {
                          if ((byte *)((ulong)uVar16 + (long)puVar21) != (byte *)0x0) {
                            uVar16 = (uint)*(byte *)((ulong)uVar16 + (long)puVar21);
                            goto LAB_0200a510;
                          }
                          break;
                        }
                        if (uVar16 != 0xffffffff) break;
                      }
                      lVar11 = (long)puVar21 - (ulong)*puVar21;
                      if (*puVar21 == 0) break;
                      uVar16 = 0xb;
                      if (lVar11 == 0) goto LAB_0200a510;
                      lVar5 = 0xc;
                      if (*(char *)(lVar11 + 10) != '\0') {
                        lVar5 = 0x1c;
                      }
                      if (lVar5 + lVar11 == 0) break;
                      uVar10 = (ulong)*(ushort *)(lVar11 + 8);
                      *(undefined4 *)(puVar3 + 0x10) = 0xfffffffe;
                      if (uVar10 == 0) break;
                      piVar18 = (int *)(lVar5 + lVar11 + 4);
                      while (piVar18[-1] != -0x579bbb8e) {
                        piVar18 = piVar18 + 2;
                        uVar10 = uVar10 - 1;
                        if (uVar10 == 0) goto LAB_0200a50c;
                      }
                      iVar8 = 0;
                      if (*piVar18 != -1) {
                        iVar8 = *piVar18;
                      }
                      *(int *)(puVar3 + 0x10) = iVar8;
                      if (*puVar21 == 0) break;
                    } while( true );
                  }
LAB_0200a50c:
                  uVar16 = 0xb;
LAB_0200a510:
                  if (10 < uVar16) {
                    uVar16 = 0xb;
                  }
                  ppuVar4 = &PTR_FUN_04a6e038 + (ulong)uVar16 * 2;
                  if (0xb < uVar16) {
                    ppuVar4 = &PTR_FUN_04a6e038;
                  }
                  pcVar14 = (code *)*ppuVar4;
                  plVar12 = (long *)((long)param_1 + ((long)ppuVar4[1] >> 1));
                  if (((ulong)ppuVar4[1] & 1) != 0) {
                    pcVar14 = *(code **)(pcVar14 + *plVar12);
                  }
                  uVar10 = (*pcVar14)(plVar12,&local_bc,&local_b8);
                  if ((uVar10 & 1) != 0) {
                    if (*puVar21 != 0) {
                      cVar13 = *PTR_DAT_04bc1570;
                      do {
                        puVar6 = PTR_DAT_04bc1570;
                        if (cVar13 == '\0') {
                          cVar13 = '\x01';
                          *(undefined8 *)puVar3 = 0xffffffffffffffff;
                          *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
                          *(undefined4 *)(puVar3 + 0x68) = 0xffffffff;
                          *puVar6 = 1;
                          *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
                        }
                        else {
                          uVar16 = *(uint *)(puVar3 + 0x28);
                          if (-1 < (int)uVar16) {
                            if ((byte *)((ulong)uVar16 + (long)puVar21) != (byte *)0x0) {
                              uVar16 = (uint)*(byte *)((ulong)uVar16 + (long)puVar21);
                              goto LAB_0200a660;
                            }
                            break;
                          }
                          if (uVar16 != 0xffffffff) break;
                        }
                        puVar17 = (uint *)(ulong)*puVar21;
                        uVar16 = 6;
                        if ((*puVar21 == 0) || (puVar21 == puVar17)) goto LAB_0200a660;
                        lVar11 = 0xc;
                        if (*(char *)((long)puVar21 + (10 - (long)puVar17)) != '\0') {
                          lVar11 = 0x1c;
                        }
                        lVar11 = (long)puVar21 + (lVar11 - (long)puVar17);
                        if (lVar11 == 0) break;
                        uVar10 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar17));
                        *(undefined4 *)(puVar3 + 0x28) = 0xfffffffe;
                        if (uVar10 == 0) break;
                        piVar18 = (int *)(lVar11 + 4);
                        while (piVar18[-1] != -0x5f105254) {
                          piVar18 = piVar18 + 2;
                          uVar10 = uVar10 - 1;
                          if (uVar10 == 0) goto LAB_0200a65c;
                        }
                        iVar8 = 0;
                        if (*piVar18 != -1) {
                          iVar8 = *piVar18;
                        }
                        *(int *)(puVar3 + 0x28) = iVar8;
                        if (*puVar21 == 0) break;
                      } while( true );
                    }
LAB_0200a65c:
                    uVar16 = 6;
LAB_0200a660:
                    if (5 < uVar16) {
                      uVar16 = 6;
                    }
                    ppuVar4 = &PTR_LAB_04a6e0f8 + (ulong)uVar16 * 2;
                    if (6 < uVar16) {
                      ppuVar4 = &PTR_LAB_04a6e0f8;
                    }
                    pcVar14 = (code *)*ppuVar4;
                    plVar12 = (long *)((long)param_1 + ((long)ppuVar4[1] >> 1));
                    if (((ulong)ppuVar4[1] & 1) != 0) {
                      pcVar14 = *(code **)(pcVar14 + *plVar12);
                    }
                    uVar10 = (*pcVar14)(plVar12,&local_b8);
                    if ((uVar10 & 1) != 0) {
                      if (*puVar21 != 0) {
                        cVar13 = *PTR_DAT_04bc1570;
                        do {
                          puVar6 = PTR_DAT_04bc1570;
                          if (cVar13 == '\0') {
                            cVar13 = '\x01';
                            *(undefined8 *)puVar3 = 0xffffffffffffffff;
                            *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
                            *(undefined4 *)(puVar3 + 0x68) = 0xffffffff;
                            *puVar6 = 1;
                            *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
                          }
                          else {
                            uVar16 = *(uint *)(puVar3 + 0x10);
                            if (-1 < (int)uVar16) {
                              if ((byte *)((ulong)uVar16 + (long)puVar21) != (byte *)0x0) {
                                bVar15 = *(byte *)((ulong)uVar16 + (long)puVar21);
                                goto LAB_0200a794;
                              }
                              break;
                            }
                            if (uVar16 != 0xffffffff) break;
                          }
                          lVar11 = (long)puVar21 - (ulong)*puVar21;
                          if (*puVar21 == 0) break;
                          bVar15 = 0xb;
                          if (lVar11 == 0) goto LAB_0200a794;
                          lVar5 = 0xc;
                          if (*(char *)(lVar11 + 10) != '\0') {
                            lVar5 = 0x1c;
                          }
                          if (lVar5 + lVar11 == 0) break;
                          uVar10 = (ulong)*(ushort *)(lVar11 + 8);
                          *(undefined4 *)(puVar3 + 0x10) = 0xfffffffe;
                          if (uVar10 == 0) break;
                          piVar18 = (int *)(lVar5 + lVar11 + 4);
                          while (piVar18[-1] != -0x579bbb8e) {
                            piVar18 = piVar18 + 2;
                            uVar10 = uVar10 - 1;
                            if (uVar10 == 0) goto LAB_0200a790;
                          }
                          iVar8 = 0;
                          if (*piVar18 != -1) {
                            iVar8 = *piVar18;
                          }
                          *(int *)(puVar3 + 0x10) = iVar8;
                          if (*puVar21 == 0) break;
                        } while( true );
                      }
LAB_0200a790:
                      bVar15 = 0xb;
LAB_0200a794:
                      if (10 < bVar15) {
                        bVar15 = 0xb;
                      }
                      if (bVar15 != 10) {
                        if (*puVar21 != 0) {
                          cVar13 = *PTR_DAT_04bc1570;
                          do {
                            puVar6 = PTR_DAT_04bc1570;
                            if (cVar13 == '\0') {
                              cVar13 = '\x01';
                              *(undefined8 *)puVar3 = 0xffffffffffffffff;
                              *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar3 + 0x60) = 0xffffffffffffffff;
                              *(undefined4 *)(puVar3 + 0x68) = 0xffffffff;
                              *puVar6 = 1;
                              *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
                            }
                            else {
                              uVar16 = *(uint *)(puVar3 + 0x10);
                              if (-1 < (int)uVar16) {
                                if ((byte *)((ulong)uVar16 + (long)puVar21) != (byte *)0x0) {
                                  bVar15 = *(byte *)((ulong)uVar16 + (long)puVar21);
                                  goto LAB_0200a8b0;
                                }
                                break;
                              }
                              if (uVar16 != 0xffffffff) break;
                            }
                            lVar11 = (long)puVar21 - (ulong)*puVar21;
                            if (*puVar21 == 0) break;
                            bVar15 = 0xb;
                            if (lVar11 == 0) goto LAB_0200a8b0;
                            lVar5 = 0xc;
                            if (*(char *)(lVar11 + 10) != '\0') {
                              lVar5 = 0x1c;
                            }
                            if (lVar5 + lVar11 == 0) break;
                            uVar10 = (ulong)*(ushort *)(lVar11 + 8);
                            *(undefined4 *)(puVar3 + 0x10) = 0xfffffffe;
                            if (uVar10 == 0) break;
                            piVar18 = (int *)(lVar5 + lVar11 + 4);
                            while (piVar18[-1] != -0x579bbb8e) {
                              piVar18 = piVar18 + 2;
                              uVar10 = uVar10 - 1;
                              if (uVar10 == 0) goto LAB_0200a8ac;
                            }
                            iVar8 = 0;
                            if (*piVar18 != -1) {
                              iVar8 = *piVar18;
                            }
                            *(int *)(puVar3 + 0x10) = iVar8;
                            if (*puVar21 == 0) break;
                          } while( true );
                        }
LAB_0200a8ac:
                        bVar15 = 0xb;
LAB_0200a8b0:
                        if (10 < bVar15) {
                          bVar15 = 0xb;
                        }
                        if (bVar15 != 0xb) {
                          FUN_0200af50(&local_bc,&local_b8,param_2);
                          local_ec = 0;
                        }
                      }
                    }
                  }
                }
              }
            }
LAB_0200a0f0:
            uVar16 = 0x15;
            if ((int)uVar23 < 0x15) {
              uVar16 = uVar23 + 1;
            }
            uVar23 = uVar16;
          } while (uVar16 != 0x15);
          FUN_020095f8(param_1,&local_b8);
          plVar22 = (long *)plVar22[1];
          plVar12 = plVar22 + -0xb;
        } while (plVar12 != plVar20);
        goto LAB_0200a96c;
      }
      puVar3 = PTR_DAT_04bbc1a0 + 0x10;
      puVar1 = PTR_DAT_04bb2010 + 0x10;
      do {
        local_88 = plVar12[6];
        local_b8 = plVar22[-0xb];
        local_a0 = plVar12[3];
        local_90 = plVar12[5];
        local_78 = plVar12[8];
        local_70 = plVar12[9];
        local_68 = (undefined4)plVar12[10];
        local_80 = plVar12[7];
        local_b0 = puVar3;
        local_a8 = puVar1;
        local_98 = puVar1;
        FUN_0200a9f0(&local_b8);
        FUN_020095f8(param_1,&local_b8);
        plVar22 = (long *)plVar22[1];
        plVar12 = plVar22 + -0xb;
      } while (plVar12 != plVar20);
    }
    else {
      do {
        FUN_020095f8(param_1);
        plVar22 = (long *)plVar22[1];
      } while (plVar22 + -0xb != plVar20);
    }
  }
  local_ec = 1;
LAB_0200a96c:
  if ((uVar7 & local_ec) != 0) {
    local_bc = 2;
    local_b0 = PTR_DAT_04bbc1a0 + 0x10;
    local_b8 = 0;
    local_88 = 0;
    local_80 = 0;
    local_70 = (ulong)local_70._6_2_ << 0x30;
    local_68 = 0;
    local_a8 = PTR_DAT_04bb2010 + 0x10;
    local_a0 = 0;
    local_90 = 0;
    local_78 = 0xffffffffffffffff;
    local_70 = CONCAT44(local_70._4_4_,0xbf800000);
    local_98 = local_a8;
    FUN_0200af50(&local_bc,&local_b8,param_2);
  }
  return;
}

