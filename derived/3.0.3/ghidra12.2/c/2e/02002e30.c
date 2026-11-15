
void FUN_02002e30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  short sVar5;
  bool bVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  char cVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  byte bVar15;
  byte bVar16;
  uint uVar17;
  long lVar18;
  undefined *puVar19;
  int *piVar20;
  uint *puVar21;
  char *pcVar22;
  bool bVar23;
  long lVar24;
  uint *puVar25;
  long lVar26;
  long lVar27;
  uint local_e4;
  uint local_e0;
  int local_dc;
  undefined8 local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  uint local_6c;
  
  puVar1 = PTR_DAT_04bb32f0;
  lVar24 = *(long *)(param_1 + 0x38b0);
  puVar13 = (undefined *)0x0;
  if (*(long *)(lVar24 + 8) != 0) {
    uVar9 = *(uint *)(*(long *)(lVar24 + 8) + 0x508);
    puVar19 = &DAT_053fe348 + (ulong)uVar9 * 0xba0;
    if (9 < uVar9) {
      puVar19 = &DAT_053fe348;
    }
    puVar13 = (undefined *)0x0;
    if (uVar9 != 0xffffffff) {
      puVar13 = puVar19;
    }
  }
  if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
    if (puVar13 != (undefined *)0x0) {
      local_c8 = CONCAT44(local_c8._4_4_,*(int *)(puVar13 + 0x4e8));
      if (*(int *)(puVar13 + 0x4e8) != 0) goto LAB_02002f3c;
    }
    if (((*(long *)PTR_DAT_04bb32f0 != 0) &&
        ((uVar9 = FUN_00883550(), uVar9 < 2 ||
         ((*(long *)puVar1 != 0 && (uVar9 = FUN_00883068(), uVar9 < 2)))))) ||
       (uVar11 = FUN_021dcfe0(*(long *)(*(long *)(param_1 + 0x38b0) + 8) + 0x508), (uVar11 & 1) != 0
       )) goto LAB_02002f3c;
    if (*(int *)(lVar24 + 0xb01c) == 0) {
      if (*(int *)(lVar24 + 0xafc0) < 0x1c) {
        local_d8 = (undefined *)CONCAT44(local_d8._4_4_,5);
        if (*(int *)(lVar24 + 0xafc0) != 5) goto LAB_02002f84;
      }
      goto LAB_02002f3c;
    }
    if (*(int *)(lVar24 + 0xb01c) == 1) goto LAB_02002f3c;
LAB_02002f84:
    bVar8 = true;
LAB_02002f88:
    bVar6 = bVar8;
    lVar24 = *(long *)(*(long *)(param_1 + 0x38b0) + 8);
    bVar23 = true;
    local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(lVar24 + 0x230));
    FUN_021e8490(&local_c8,*(long *)(lVar24 + 0x68) + 0x278,&DAT_053bc9c0,1,0);
  }
  else {
LAB_02002f3c:
    if (*(long *)puVar1 == 0) {
LAB_02002f78:
      bVar6 = false;
      bVar23 = false;
    }
    else {
      iVar10 = FUN_00883550();
      if (iVar10 == 1) {
        bVar8 = false;
        goto LAB_02002f88;
      }
      if (*(long *)puVar1 == 0) goto LAB_02002f78;
      iVar10 = FUN_00883068();
      bVar6 = false;
      bVar23 = false;
      bVar8 = false;
      if (iVar10 == 1) goto LAB_02002f88;
    }
  }
  puVar13 = PTR_DAT_04bc1578;
  lVar27 = *(long *)(param_1 + 8) + -0x48;
  lVar18 = *(long *)PTR_DAT_04bb3968;
  lVar26 = *(long *)(*(long *)(param_1 + 8) + 0x18);
  lVar24 = lVar26 + -0x58;
  if (bVar23) {
    if (bVar6) {
      if (lVar24 != lVar27) {
        puVar1 = PTR_DAT_04bbc1a0 + 0x10;
        puVar19 = PTR_DAT_04bb2010 + 0x10;
        puVar2 = PTR_DAT_04bb2020 + 0x10;
        bVar16 = 1;
        do {
          local_98 = *(undefined8 *)(lVar24 + 0x30);
          local_c8 = *(undefined8 *)(lVar26 + -0x58);
          local_b0 = *(undefined8 *)(lVar24 + 0x18);
          local_a0 = *(undefined8 *)(lVar24 + 0x28);
          local_90 = *(undefined8 *)(lVar24 + 0x38);
          local_78 = *(undefined4 *)(lVar24 + 0x50);
          local_88 = *(undefined8 *)(lVar24 + 0x40);
          local_80 = *(undefined8 *)(lVar24 + 0x48);
          local_c0 = puVar1;
          local_b8 = puVar19;
          local_a8 = puVar19;
          FUN_020040d0(&local_c8);
          pcVar22 = PTR_DAT_04bc1570;
          uVar9 = 0;
          do {
            local_d8 = (undefined *)CONCAT44(local_d8._4_4_,uVar9);
            if ((int)*(uint *)(lVar18 + 0x16ca0) < 1) {
              lVar24 = *(long *)(lVar18 + 0x16b90);
              if ((((lVar24 != 0) && (puVar25 = *(uint **)(lVar24 + 8), puVar25 != (uint *)0x0)) &&
                  ((*(uint *)(lVar18 + 0x16ba8) <= uVar9 ||
                   (*(char *)(*(long *)(lVar18 + 0x16bb0) + (long)(int)uVar9) != '\0')))) &&
                 (((uVar9 < *puVar25 && (puVar25[1] != 0)) && ((ushort)puVar25[2] != 0)))) {
                iVar10 = 0xc;
                if (*(char *)((long)puVar25 + 10) != '\0') {
                  iVar10 = 0x1c;
                }
                puVar25 = (uint *)((ulong)(puVar25[1] * uVar9 + (uint)(ushort)puVar25[2] * 8 +
                                          iVar10) + (long)puVar25);
                goto joined_r0x02003290;
              }
            }
            else if (uVar9 < *(uint *)(lVar18 + 0x16ca0)) {
              uVar17 = uVar9;
              if (*(uint *)(lVar18 + 0x16c90) <= uVar9) {
                uVar17 = 0;
              }
              puVar25 = *(uint **)(*(long *)(lVar18 + 0x16c98) + (ulong)uVar17 * 8);
joined_r0x02003290:
              if (puVar25 != (uint *)0x0) {
                if (*puVar25 == 0) {
LAB_020032a8:
                  bVar15 = 0;
                }
                else {
                  cVar12 = *pcVar22;
                  do {
                    if (cVar12 == '\0') {
                      cVar12 = '\x01';
                      *(undefined8 *)puVar13 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                      *pcVar22 = '\x01';
                      *(undefined8 *)(puVar13 + 0x60) = 0xffffffffffffffff;
                      *(undefined4 *)(puVar13 + 0x68) = 0xffffffff;
                      *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 0x50) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 0x58) = 0xffffffffffffffff;
                    }
                    else {
                      uVar17 = *(uint *)(puVar13 + 0x14);
                      if (-1 < (int)uVar17) {
                        if ((byte *)((ulong)uVar17 + (long)puVar25) == (byte *)0x0)
                        goto LAB_020032a8;
                        bVar15 = *(byte *)((ulong)uVar17 + (long)puVar25);
                        goto LAB_020032ac;
                      }
                      if (uVar17 != 0xffffffff) goto LAB_020032a8;
                    }
                    puVar21 = (uint *)(ulong)*puVar25;
                    bVar15 = 0;
                    if ((*puVar25 == 0) || (puVar25 == puVar21)) goto LAB_020032ac;
                    lVar24 = 0xc;
                    if (*(char *)((long)puVar25 + (10 - (long)puVar21)) != '\0') {
                      lVar24 = 0x1c;
                    }
                    lVar24 = (long)puVar25 + (lVar24 - (long)puVar21);
                    if (lVar24 == 0) goto LAB_020032a8;
                    uVar11 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar21));
                    *(undefined4 *)(puVar13 + 0x14) = 0xfffffffe;
                    bVar15 = 0;
                    if (uVar11 == 0) goto LAB_020032ac;
                    piVar20 = (int *)(lVar24 + 4);
                    while (piVar20[-1] != 0x430dbf65) {
                      piVar20 = piVar20 + 2;
                      uVar11 = uVar11 - 1;
                      if (uVar11 == 0) {
                        bVar15 = 0;
                        goto LAB_020032ac;
                      }
                    }
                    iVar10 = 0;
                    if (*piVar20 != -1) {
                      iVar10 = *piVar20;
                    }
                    *(int *)(puVar13 + 0x14) = iVar10;
                  } while (*puVar25 != 0);
                  bVar15 = 0;
                }
LAB_020032ac:
                local_6c = 0;
                local_d8 = (undefined *)((ulong)local_d8._4_4_ << 0x20);
                if ((bVar15 & 1) != 0) {
                  pcStack_d0 = "EnableConvTalkDaysCount";
                  local_d8 = puVar2;
                  iVar10 = FUN_027490f0(*(undefined4 *)
                                         (*(long *)(*(long *)(param_1 + 0x38b0) + 8) + 0x508),
                                        &local_d8);
                  pcVar22 = PTR_DAT_04bc1570;
                  if (iVar10 != 0) goto LAB_02003120;
                }
                if (*puVar25 != 0) {
                  cVar12 = *pcVar22;
                  do {
                    if (cVar12 == '\0') {
                      cVar12 = '\x01';
                      *(undefined8 *)puVar13 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                      *pcVar22 = '\x01';
                      *(undefined8 *)(puVar13 + 0x60) = 0xffffffffffffffff;
                      *(undefined4 *)(puVar13 + 0x68) = 0xffffffff;
                      *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 0x50) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar13 + 0x58) = 0xffffffffffffffff;
                    }
                    else {
                      uVar17 = *(uint *)(puVar13 + 100);
                      if (-1 < (int)uVar17) {
                        if (((byte *)((ulong)uVar17 + (long)puVar25) != (byte *)0x0) &&
                           (bVar15 = *(byte *)((ulong)uVar17 + (long)puVar25),
                           local_6c = (uint)bVar15, bVar15 < 5)) goto LAB_02003408;
                        break;
                      }
                      if (uVar17 != 0xffffffff) break;
                    }
                    puVar21 = (uint *)(ulong)*puVar25;
                    local_6c = 1;
                    if ((*puVar25 == 0) || (puVar25 == puVar21)) goto LAB_02003408;
                    lVar24 = 0xc;
                    if (*(char *)((long)puVar25 + (10 - (long)puVar21)) != '\0') {
                      lVar24 = 0x1c;
                    }
                    lVar24 = (long)puVar25 + (lVar24 - (long)puVar21);
                    if (lVar24 == 0) break;
                    uVar11 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar21));
                    *(undefined4 *)(puVar13 + 100) = 0xfffffffe;
                    if (uVar11 == 0) break;
                    piVar20 = (int *)(lVar24 + 4);
                    while (piVar20[-1] != -0x11f69e06) {
                      piVar20 = piVar20 + 2;
                      uVar11 = uVar11 - 1;
                      if (uVar11 == 0) goto LAB_02003404;
                    }
                    iVar10 = 0;
                    if (*piVar20 != -1) {
                      iVar10 = *piVar20;
                    }
                    *(int *)(puVar13 + 100) = iVar10;
                    if (*puVar25 == 0) break;
                  } while( true );
                }
LAB_02003404:
                local_6c = 1;
LAB_02003408:
                if ((int)local_6c <= *(int *)(*(long *)PTR_DAT_04bb3968 + 0x11b8)) {
                  bVar15 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
                  local_dc = 5;
                  if (4 < bVar15) {
                    if (bVar15 < 8) {
                      local_dc = 0;
                    }
                    else {
                      iVar10 = 3;
                      if (0x12 < bVar15) {
                        iVar10 = 4;
                      }
                      iVar3 = 2;
                      if (0xf < bVar15) {
                        iVar3 = iVar10;
                      }
                      local_dc = 1;
                      if (0xb < bVar15) {
                        local_dc = iVar3;
                      }
                    }
                  }
                  sVar5 = *(short *)PTR_DAT_04bb6298;
                  if (sVar5 == -1) {
                    ppuVar14 = &PTR_LAB_04a71c18;
                  }
                  else {
                    local_d8 = (undefined *)CONCAT44(local_d8._4_4_,1);
                    puVar21 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
                    if (0xff < (uint)(int)sVar5) {
                      puVar21 = (uint *)PTR_DAT_04bc39f8;
                    }
                    ppuVar14 = &PTR_LAB_04a71c18;
                    if ((*puVar21 & 2) != 0) {
                      ppuVar14 = &PTR_LAB_04a71bb8;
                    }
                  }
                  iVar10 = (*(code *)ppuVar14[(long)local_dc * 2])(puVar25);
                  pcVar22 = PTR_DAT_04bc1570;
                  if (iVar10 == 0) {
                    uVar17 = *puVar25;
                    if ((*(byte *)(*(long *)(param_1 + 0x38b0) + 0xad54) >> 2 & 1) != 0) {
                      if (uVar17 != 0) {
                        cVar12 = *PTR_DAT_04bc1570;
                        do {
                          if (cVar12 == '\0') {
                            cVar12 = '\x01';
                            *(undefined8 *)puVar13 = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                            *pcVar22 = 1;
                            *(undefined8 *)(puVar13 + 0x60) = 0xffffffffffffffff;
                            *(undefined4 *)(puVar13 + 0x68) = 0xffffffff;
                            *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x50) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x58) = 0xffffffffffffffff;
                          }
                          else {
                            uVar17 = *(uint *)(puVar13 + 0x30);
                            if (-1 < (int)uVar17) {
                              if ((byte *)((ulong)uVar17 + (long)puVar25) != (byte *)0x0) {
                                bVar15 = *(byte *)((ulong)uVar17 + (long)puVar25);
                                goto LAB_02003620;
                              }
                              break;
                            }
                            if (uVar17 != 0xffffffff) break;
                          }
                          puVar21 = (uint *)(ulong)*puVar25;
                          bVar15 = 2;
                          if ((*puVar25 == 0) || (puVar25 == puVar21)) goto LAB_02003620;
                          lVar24 = 0xc;
                          if (*(char *)((long)puVar25 + (10 - (long)puVar21)) != '\0') {
                            lVar24 = 0x1c;
                          }
                          lVar24 = (long)puVar25 + (lVar24 - (long)puVar21);
                          if (lVar24 == 0) break;
                          uVar11 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar21));
                          *(undefined4 *)(puVar13 + 0x30) = 0xfffffffe;
                          if (uVar11 == 0) break;
                          piVar20 = (int *)(lVar24 + 4);
                          while (piVar20[-1] != -0x5621fc7c) {
                            piVar20 = piVar20 + 2;
                            uVar11 = uVar11 - 1;
                            if (uVar11 == 0) goto LAB_0200361c;
                          }
                          iVar10 = 0;
                          if (*piVar20 != -1) {
                            iVar10 = *piVar20;
                          }
                          *(int *)(puVar13 + 0x30) = iVar10;
                          if (*puVar25 == 0) break;
                        } while( true );
                      }
LAB_0200361c:
                      bVar15 = 2;
LAB_02003620:
                      if (1 < bVar15) {
                        bVar15 = 2;
                      }
                      if (bVar15 != 0) goto LAB_02003120;
                      uVar17 = *puVar25;
                    }
                    if (uVar17 != 0) {
                      cVar12 = *pcVar22;
                      do {
                        if (cVar12 == '\0') {
                          cVar12 = '\x01';
                          *(undefined8 *)puVar13 = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                          *pcVar22 = 1;
                          *(undefined8 *)(puVar13 + 0x60) = 0xffffffffffffffff;
                          *(undefined4 *)(puVar13 + 0x68) = 0xffffffff;
                          *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x50) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar13 + 0x58) = 0xffffffffffffffff;
                        }
                        else {
                          uVar17 = *(uint *)(puVar13 + 0x10);
                          if (-1 < (int)uVar17) {
                            if ((byte *)((ulong)uVar17 + (long)puVar25) != (byte *)0x0) {
                              local_e0 = (uint)*(byte *)((ulong)uVar17 + (long)puVar25);
                              goto LAB_02003700;
                            }
                            break;
                          }
                          if (uVar17 != 0xffffffff) break;
                        }
                        lVar24 = (long)puVar25 - (ulong)*puVar25;
                        if (*puVar25 == 0) break;
                        local_e0 = 0xb;
                        if (lVar24 == 0) goto LAB_02003700;
                        lVar4 = 0xc;
                        if (*(char *)(lVar24 + 10) != '\0') {
                          lVar4 = 0x1c;
                        }
                        if (lVar4 + lVar24 == 0) break;
                        uVar11 = (ulong)*(ushort *)(lVar24 + 8);
                        *(undefined4 *)(puVar13 + 0x10) = 0xfffffffe;
                        if (uVar11 == 0) break;
                        piVar20 = (int *)(lVar4 + lVar24 + 4);
                        while (piVar20[-1] != -0x579bbb8e) {
                          piVar20 = piVar20 + 2;
                          uVar11 = uVar11 - 1;
                          if (uVar11 == 0) goto LAB_020036fc;
                        }
                        iVar10 = 0;
                        if (*piVar20 != -1) {
                          iVar10 = *piVar20;
                        }
                        *(int *)(puVar13 + 0x10) = iVar10;
                        if (*puVar25 == 0) break;
                      } while( true );
                    }
LAB_020036fc:
                    local_e0 = 0xb;
LAB_02003700:
                    if (10 < local_e0) {
                      local_e0 = 0xb;
                    }
                    local_e4 = uVar9;
                    uVar11 = (*(code *)(&PTR_FUN_04a6dac0)[(long)(int)local_e0 * 2])
                                       (param_1,&local_e4,&local_c8);
                    puVar7 = PTR_DAT_04bc1570;
                    pcVar22 = PTR_DAT_04bc1570;
                    if ((uVar11 & 1) != 0) {
                      if (*puVar25 != 0) {
                        cVar12 = *PTR_DAT_04bc1570;
                        do {
                          if (cVar12 == '\0') {
                            cVar12 = '\x01';
                            *(undefined8 *)puVar13 = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                            *puVar7 = 1;
                            *(undefined8 *)(puVar13 + 0x60) = 0xffffffffffffffff;
                            *(undefined4 *)(puVar13 + 0x68) = 0xffffffff;
                            *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x50) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x58) = 0xffffffffffffffff;
                          }
                          else {
                            uVar17 = *(uint *)(puVar13 + 0x28);
                            if (-1 < (int)uVar17) {
                              if ((byte *)((ulong)uVar17 + (long)puVar25) != (byte *)0x0) {
                                uVar17 = (uint)*(byte *)((ulong)uVar17 + (long)puVar25);
                                goto LAB_02003830;
                              }
                              break;
                            }
                            if (uVar17 != 0xffffffff) break;
                          }
                          puVar21 = (uint *)(ulong)*puVar25;
                          uVar17 = 6;
                          if ((*puVar25 == 0) || (puVar25 == puVar21)) goto LAB_02003830;
                          lVar24 = 0xc;
                          if (*(char *)((long)puVar25 + (10 - (long)puVar21)) != '\0') {
                            lVar24 = 0x1c;
                          }
                          lVar24 = (long)puVar25 + (lVar24 - (long)puVar21);
                          if (lVar24 == 0) break;
                          uVar11 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar21));
                          *(undefined4 *)(puVar13 + 0x28) = 0xfffffffe;
                          if (uVar11 == 0) break;
                          piVar20 = (int *)(lVar24 + 4);
                          while (piVar20[-1] != -0x5f105254) {
                            piVar20 = piVar20 + 2;
                            uVar11 = uVar11 - 1;
                            if (uVar11 == 0) goto LAB_0200382c;
                          }
                          iVar10 = 0;
                          if (*piVar20 != -1) {
                            iVar10 = *piVar20;
                          }
                          *(int *)(puVar13 + 0x28) = iVar10;
                          if (*puVar25 == 0) break;
                        } while( true );
                      }
LAB_0200382c:
                      uVar17 = 6;
LAB_02003830:
                      if (5 < uVar17) {
                        uVar17 = 6;
                      }
                      uVar11 = (**(code **)((long)(int)uVar17 * 0x10 + 0x4a6db80))
                                         (param_1,&local_c8);
                      pcVar22 = PTR_DAT_04bc1570;
                      if ((uVar11 & 1) != 0) {
                        if (*puVar25 == 0) {
                          uVar17 = 0xb;
                        }
                        else {
                          cVar12 = *PTR_DAT_04bc1570;
LAB_02003890:
                          if (cVar12 == '\0') {
                            cVar12 = '\x01';
                            *(undefined8 *)puVar13 = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                            *pcVar22 = 1;
                            *(undefined8 *)(puVar13 + 0x60) = 0xffffffffffffffff;
                            *(undefined4 *)(puVar13 + 0x68) = 0xffffffff;
                            *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x50) = 0xffffffffffffffff;
                            *(undefined8 *)(puVar13 + 0x58) = 0xffffffffffffffff;
LAB_020038d8:
                            lVar24 = (long)puVar25 - (ulong)*puVar25;
                            if (*puVar25 == 0) goto LAB_0200396c;
                            uVar17 = 0xb;
                            if (lVar24 == 0) goto LAB_02003970;
                            lVar4 = 0xc;
                            if (*(char *)(lVar24 + 10) != '\0') {
                              lVar4 = 0x1c;
                            }
                            if (lVar4 + lVar24 == 0) goto LAB_0200396c;
                            uVar11 = (ulong)*(ushort *)(lVar24 + 8);
                            *(undefined4 *)(puVar13 + 0x10) = 0xfffffffe;
                            if (uVar11 == 0) goto LAB_0200396c;
                            piVar20 = (int *)(lVar4 + lVar24 + 4);
                            while (piVar20[-1] != -0x579bbb8e) {
                              piVar20 = piVar20 + 2;
                              uVar11 = uVar11 - 1;
                              if (uVar11 == 0) goto LAB_0200396c;
                            }
                            iVar10 = 0;
                            if (*piVar20 != -1) {
                              iVar10 = *piVar20;
                            }
                            *(int *)(puVar13 + 0x10) = iVar10;
                            if (*puVar25 == 0) goto LAB_0200396c;
                            goto LAB_02003890;
                          }
                          uVar17 = *(uint *)(puVar13 + 0x10);
                          if ((int)uVar17 < 0) {
                            if (uVar17 != 0xffffffff) goto LAB_0200396c;
                            goto LAB_020038d8;
                          }
                          if ((byte *)((ulong)uVar17 + (long)puVar25) != (byte *)0x0) {
                            uVar17 = (uint)*(byte *)((ulong)uVar17 + (long)puVar25);
                            goto LAB_02003970;
                          }
LAB_0200396c:
                          uVar17 = 0xb;
                        }
LAB_02003970:
                        if (10 < uVar17) {
                          uVar17 = 0xb;
                        }
                        local_d8 = (undefined *)CONCAT44(local_d8._4_4_,uVar17);
                        if (uVar17 != 10) {
                          if (*puVar25 != 0) {
                            cVar12 = *pcVar22;
                            do {
                              if (cVar12 == '\0') {
                                cVar12 = '\x01';
                                *(undefined8 *)puVar13 = 0xffffffffffffffff;
                                *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                                *pcVar22 = 1;
                                *(undefined8 *)(puVar13 + 0x60) = 0xffffffffffffffff;
                                *(undefined4 *)(puVar13 + 0x68) = 0xffffffff;
                                *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                                *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                                *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                                *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
                                *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
                                *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
                                *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
                                *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
                                *(undefined8 *)(puVar13 + 0x50) = 0xffffffffffffffff;
                                *(undefined8 *)(puVar13 + 0x58) = 0xffffffffffffffff;
                              }
                              else {
                                uVar17 = *(uint *)(puVar13 + 0x10);
                                if (-1 < (int)uVar17) {
                                  if ((byte *)((ulong)uVar17 + (long)puVar25) != (byte *)0x0) {
                                    local_6c = (uint)*(byte *)((ulong)uVar17 + (long)puVar25);
                                    goto LAB_02003a60;
                                  }
                                  break;
                                }
                                if (uVar17 != 0xffffffff) break;
                              }
                              lVar24 = (long)puVar25 - (ulong)*puVar25;
                              if (*puVar25 == 0) break;
                              local_6c = 0xb;
                              if (lVar24 == 0) goto LAB_02003a60;
                              lVar4 = 0xc;
                              if (*(char *)(lVar24 + 10) != '\0') {
                                lVar4 = 0x1c;
                              }
                              if (lVar4 + lVar24 == 0) break;
                              uVar11 = (ulong)*(ushort *)(lVar24 + 8);
                              *(undefined4 *)(puVar13 + 0x10) = 0xfffffffe;
                              if (uVar11 == 0) break;
                              piVar20 = (int *)(lVar4 + lVar24 + 4);
                              while (piVar20[-1] != -0x579bbb8e) {
                                piVar20 = piVar20 + 2;
                                uVar11 = uVar11 - 1;
                                if (uVar11 == 0) goto LAB_02003a5c;
                              }
                              iVar10 = 0;
                              if (*piVar20 != -1) {
                                iVar10 = *piVar20;
                              }
                              *(int *)(puVar13 + 0x10) = iVar10;
                              if (*puVar25 == 0) break;
                            } while( true );
                          }
LAB_02003a5c:
                          local_6c = 0xb;
LAB_02003a60:
                          if (10 < local_6c) {
                            local_6c = 0xb;
                          }
                          if (local_6c != 0xb) {
                            local_d8 = (undefined *)CONCAT44(local_d8._4_4_,uVar9);
                            FUN_02004690(&local_d8,&local_c8,param_2);
                            bVar16 = 0;
                            pcVar22 = PTR_DAT_04bc1570;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
LAB_02003120:
            uVar17 = 0x15;
            if ((int)uVar9 < 0x15) {
              uVar17 = uVar9 + 1;
            }
            uVar9 = uVar17;
          } while (uVar17 != 0x15);
          FUN_02002260(param_1,&local_c8);
          lVar26 = *(long *)(lVar26 + 8);
          lVar24 = lVar26 + -0x58;
        } while (lVar24 != lVar27);
        goto LAB_02003b3c;
      }
    }
    else {
      if (lVar24 == lVar27) {
        return;
      }
      puVar13 = PTR_DAT_04bbc1a0 + 0x10;
      puVar1 = PTR_DAT_04bb2010 + 0x10;
      do {
        local_98 = *(undefined8 *)(lVar24 + 0x30);
        local_c8 = *(undefined8 *)(lVar26 + -0x58);
        local_b0 = *(undefined8 *)(lVar24 + 0x18);
        local_a0 = *(undefined8 *)(lVar24 + 0x28);
        local_88 = *(undefined8 *)(lVar24 + 0x40);
        local_80 = *(undefined8 *)(lVar24 + 0x48);
        local_78 = *(undefined4 *)(lVar24 + 0x50);
        local_90 = *(undefined8 *)(lVar24 + 0x38);
        local_c0 = puVar13;
        local_b8 = puVar1;
        local_a8 = puVar1;
        FUN_020040d0(&local_c8);
        FUN_02002260(param_1,&local_c8);
        lVar26 = *(long *)(lVar26 + 8);
        lVar24 = lVar26 + -0x58;
      } while (lVar24 != lVar27);
    }
  }
  else {
    while (lVar24 != lVar27) {
      FUN_02002260(param_1);
      lVar26 = *(long *)(lVar26 + 8);
      lVar24 = lVar26 + -0x58;
    }
  }
  bVar16 = 1;
LAB_02003b3c:
  puVar13 = PTR_DAT_04bc1578;
  if ((bool)(bVar6 & bVar16)) {
    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
    puVar19 = PTR_DAT_04bb2010 + 0x10;
    pcVar22 = PTR_DAT_04bc1570;
    uVar9 = 0;
    do {
      local_c8 = CONCAT44(local_c8._4_4_,uVar9);
      if ((int)*(uint *)(lVar18 + 0x16ca0) < 1) {
        lVar24 = *(long *)(lVar18 + 0x16b90);
        if ((((lVar24 != 0) && (puVar25 = *(uint **)(lVar24 + 8), puVar25 != (uint *)0x0)) &&
            ((*(uint *)(lVar18 + 0x16ba8) <= uVar9 ||
             (*(char *)(*(long *)(lVar18 + 0x16bb0) + (long)(int)uVar9) != '\0')))) &&
           (((uVar9 < *puVar25 && (puVar25[1] != 0)) && ((ushort)puVar25[2] != 0)))) {
          iVar10 = 0xc;
          if (*(char *)((long)puVar25 + 10) != '\0') {
            iVar10 = 0x1c;
          }
          puVar25 = (uint *)((ulong)(puVar25[1] * uVar9 + (uint)(ushort)puVar25[2] * 8 + iVar10) +
                            (long)puVar25);
          goto joined_r0x02003d80;
        }
      }
      else if (uVar9 < *(uint *)(lVar18 + 0x16ca0)) {
        uVar17 = uVar9;
        if (*(uint *)(lVar18 + 0x16c90) <= uVar9) {
          uVar17 = 0;
        }
        puVar25 = *(uint **)(*(long *)(lVar18 + 0x16c98) + (ulong)uVar17 * 8);
joined_r0x02003d80:
        if (puVar25 != (uint *)0x0) {
          if (*puVar25 != 0) {
            cVar12 = *pcVar22;
            do {
              if (cVar12 == '\0') {
                cVar12 = '\x01';
                *(undefined8 *)puVar13 = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                *pcVar22 = '\x01';
                *(undefined8 *)(puVar13 + 0x60) = 0xffffffffffffffff;
                *(undefined4 *)(puVar13 + 0x68) = 0xffffffff;
                *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar13 + 0x58) = 0xffffffffffffffff;
              }
              else {
                uVar17 = *(uint *)(puVar13 + 0x10);
                if (-1 < (int)uVar17) {
                  if ((byte *)((ulong)uVar17 + (long)puVar25) != (byte *)0x0) {
                    bVar16 = *(byte *)((ulong)uVar17 + (long)puVar25);
                    goto LAB_02003da4;
                  }
                  break;
                }
                if (uVar17 != 0xffffffff) break;
              }
              lVar24 = (long)puVar25 - (ulong)*puVar25;
              if (*puVar25 == 0) break;
              bVar16 = 0xb;
              if (lVar24 == 0) goto LAB_02003da4;
              lVar26 = 0xc;
              if (*(char *)(lVar24 + 10) != '\0') {
                lVar26 = 0x1c;
              }
              if (lVar26 + lVar24 == 0) break;
              uVar11 = (ulong)*(ushort *)(lVar24 + 8);
              *(undefined4 *)(puVar13 + 0x10) = 0xfffffffe;
              if (uVar11 == 0) break;
              piVar20 = (int *)(lVar26 + lVar24 + 4);
              while (piVar20[-1] != -0x579bbb8e) {
                piVar20 = piVar20 + 2;
                uVar11 = uVar11 - 1;
                if (uVar11 == 0) goto LAB_02003da0;
              }
              iVar10 = 0;
              if (*piVar20 != -1) {
                iVar10 = *piVar20;
              }
              *(int *)(puVar13 + 0x10) = iVar10;
              if (*puVar25 == 0) break;
            } while( true );
          }
LAB_02003da0:
          bVar16 = 0xb;
LAB_02003da4:
          if (10 < bVar16) {
            bVar16 = 0xb;
          }
          if (bVar16 == 10) {
            if (*puVar25 != 0) {
              cVar12 = *pcVar22;
              do {
                if (cVar12 == '\0') {
                  cVar12 = '\x01';
                  *(undefined8 *)puVar13 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                  *pcVar22 = '\x01';
                  *(undefined8 *)(puVar13 + 0x60) = 0xffffffffffffffff;
                  *(undefined4 *)(puVar13 + 0x68) = 0xffffffff;
                  *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar13 + 0x50) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar13 + 0x58) = 0xffffffffffffffff;
                }
                else {
                  uVar17 = *(uint *)(puVar13 + 100);
                  if (-1 < (int)uVar17) {
                    if (((byte *)((ulong)uVar17 + (long)puVar25) != (byte *)0x0) &&
                       (bVar16 = *(byte *)((ulong)uVar17 + (long)puVar25), uVar17 = (uint)bVar16,
                       bVar16 < 5)) goto LAB_02003e98;
                    break;
                  }
                  if (uVar17 != 0xffffffff) break;
                }
                puVar21 = (uint *)(ulong)*puVar25;
                uVar17 = 1;
                if ((*puVar25 == 0) || (puVar25 == puVar21)) goto LAB_02003e98;
                lVar24 = 0xc;
                if (*(char *)((long)puVar25 + (10 - (long)puVar21)) != '\0') {
                  lVar24 = 0x1c;
                }
                lVar24 = (long)puVar25 + (lVar24 - (long)puVar21);
                if (lVar24 == 0) break;
                uVar11 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar21));
                *(undefined4 *)(puVar13 + 100) = 0xfffffffe;
                if (uVar11 == 0) break;
                piVar20 = (int *)(lVar24 + 4);
                while (piVar20[-1] != -0x11f69e06) {
                  piVar20 = piVar20 + 2;
                  uVar11 = uVar11 - 1;
                  if (uVar11 == 0) goto LAB_02003e94;
                }
                iVar10 = 0;
                if (*piVar20 != -1) {
                  iVar10 = *piVar20;
                }
                *(int *)(puVar13 + 100) = iVar10;
                if (*puVar25 == 0) break;
              } while( true );
            }
LAB_02003e94:
            uVar17 = 1;
LAB_02003e98:
            local_d8 = (undefined *)CONCAT44(local_d8._4_4_,uVar17);
            if ((int)uVar17 <= *(int *)(*(long *)PTR_DAT_04bb3968 + 0x11b8)) {
              bVar16 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
              local_6c = 5;
              if (4 < bVar16) {
                if (bVar16 < 8) {
                  local_6c = 0;
                }
                else {
                  iVar10 = 3;
                  if (0x12 < bVar16) {
                    iVar10 = 4;
                  }
                  iVar3 = 2;
                  if (0xf < bVar16) {
                    iVar3 = iVar10;
                  }
                  local_6c = 1;
                  if (0xb < bVar16) {
                    local_6c = iVar3;
                  }
                }
              }
              sVar5 = *(short *)PTR_DAT_04bb6298;
              if (sVar5 == -1) {
                ppuVar14 = &PTR_LAB_04a71c18;
              }
              else {
                local_c8 = CONCAT44(local_c8._4_4_,1);
                puVar21 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
                if (0xff < (uint)(int)sVar5) {
                  puVar21 = (uint *)PTR_DAT_04bc39f8;
                }
                ppuVar14 = &PTR_LAB_04a71c18;
                if ((*puVar21 & 2) != 0) {
                  ppuVar14 = &PTR_LAB_04a71bb8;
                }
              }
              iVar10 = (*(code *)ppuVar14[(long)(int)local_6c * 2])(puVar25);
              pcVar22 = PTR_DAT_04bc1570;
              if (iVar10 == 0) {
                if ((*(byte *)(*(long *)(param_1 + 0x38b0) + 0xad54) >> 2 & 1) != 0) {
                  if (*puVar25 != 0) {
                    cVar12 = *PTR_DAT_04bc1570;
                    do {
                      if (cVar12 == '\0') {
                        cVar12 = '\x01';
                        *(undefined8 *)puVar13 = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
                        *pcVar22 = 1;
                        *(undefined8 *)(puVar13 + 0x60) = 0xffffffffffffffff;
                        *(undefined4 *)(puVar13 + 0x68) = 0xffffffff;
                        *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 0x50) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar13 + 0x58) = 0xffffffffffffffff;
                      }
                      else {
                        uVar17 = *(uint *)(puVar13 + 0x30);
                        if (-1 < (int)uVar17) {
                          if ((byte *)((ulong)uVar17 + (long)puVar25) != (byte *)0x0) {
                            bVar16 = *(byte *)((ulong)uVar17 + (long)puVar25);
                            goto LAB_0200409c;
                          }
                          break;
                        }
                        if (uVar17 != 0xffffffff) break;
                      }
                      puVar21 = (uint *)(ulong)*puVar25;
                      bVar16 = 2;
                      if ((*puVar25 == 0) || (puVar25 == puVar21)) goto LAB_0200409c;
                      lVar24 = 0xc;
                      if (*(char *)((long)puVar25 + (10 - (long)puVar21)) != '\0') {
                        lVar24 = 0x1c;
                      }
                      lVar24 = (long)puVar25 + (lVar24 - (long)puVar21);
                      if (lVar24 == 0) break;
                      uVar11 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar21));
                      *(undefined4 *)(puVar13 + 0x30) = 0xfffffffe;
                      if (uVar11 == 0) break;
                      piVar20 = (int *)(lVar24 + 4);
                      while (piVar20[-1] != -0x5621fc7c) {
                        piVar20 = piVar20 + 2;
                        uVar11 = uVar11 - 1;
                        if (uVar11 == 0) goto LAB_02004098;
                      }
                      iVar10 = 0;
                      if (*piVar20 != -1) {
                        iVar10 = *piVar20;
                      }
                      *(int *)(puVar13 + 0x30) = iVar10;
                      if (*puVar25 == 0) break;
                    } while( true );
                  }
LAB_02004098:
                  bVar16 = 2;
LAB_0200409c:
                  if (1 < bVar16) {
                    bVar16 = 2;
                  }
                  if (bVar16 != 0) goto LAB_02003c14;
                }
                local_d8 = (undefined *)CONCAT44(local_d8._4_4_,uVar9);
                local_88 = 0xffffffffffffffff;
                uVar11 = (ulong)local_80 >> 0x20;
                local_78 = 0;
                local_c8 = 0;
                local_b0 = 0;
                local_a0 = 0;
                local_98 = 0;
                local_90 = 0;
                local_80 = CONCAT44((uint)uVar11 & 0xffff0000,0xbf800000);
                local_c0 = puVar1;
                local_b8 = puVar19;
                local_a8 = puVar19;
                FUN_02004690(&local_d8,&local_c8,param_2);
                pcVar22 = PTR_DAT_04bc1570;
              }
            }
          }
        }
      }
LAB_02003c14:
      uVar17 = 0x15;
      if ((int)uVar9 < 0x15) {
        uVar17 = uVar9 + 1;
      }
      uVar9 = uVar17;
    } while (uVar17 != 0x15);
  }
  return;
}

