
void FUN_020d4a30(long param_1,byte *param_2)

{
  undefined *puVar1;
  ushort *puVar2;
  uint *puVar3;
  void *__s;
  uint uVar4;
  uint uVar5;
  long lVar6;
  uint *puVar7;
  ushort *puVar8;
  byte bVar9;
  ushort uVar10;
  byte bVar11;
  uint uVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long lVar24;
  char *pcVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  byte *pbVar29;
  undefined *puVar30;
  long lVar31;
  uint local_a4;
  byte local_8c;
  byte local_8b;
  undefined8 local_88;
  uint local_80;
  undefined8 local_78;
  char *pcStack_70;
  undefined8 local_68;
  
  puVar30 = PTR_DAT_04bc2a20;
  puVar13 = PTR_DAT_04bc27f0;
  bVar9 = *param_2;
  if (bVar9 == 0xff) {
    return;
  }
  lVar21 = *(long *)PTR_DAT_04bb46b0;
  if (lVar21 != 0) {
    puVar22 = *(undefined8 **)(lVar21 + 0x10);
    if ((*(byte *)(lVar21 + 0x453) & 1) == 0) {
      lVar21 = (**(code **)(*(long *)*puVar22 + 0x38))();
      if (lVar21 != 0) {
        lVar21 = lVar21 + 0x70;
        goto LAB_020d4acc;
      }
    }
    else if (((puVar22 != (undefined8 *)0x0) && ((long *)puVar22[0x26] != (long *)0x0)) &&
            (lVar21 = (**(code **)(*(long *)puVar22[0x26] + 0x38))(), lVar21 != 0)) {
LAB_020d4acc:
      if ((*(long **)(lVar21 + 0xd0) == (long *)0x0) ||
         (puVar22 = (undefined8 *)**(long **)(lVar21 + 0xd0), puVar22 == (undefined8 *)0x0)) {
        local_a4 = 0;
      }
      else {
        local_a4 = (**(code **)*puVar22)();
      }
      puVar14 = PTR_DAT_04bb5038;
      lVar31 = 0;
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      do {
        lVar24 = *(long *)(lVar21 + 0xb8) + *(long *)(lVar21 + 0xb0);
        pbVar29 = (byte *)(lVar24 + lVar31 * 0x13230);
        uVar23 = (ulong)*pbVar29;
        if (uVar23 < 0x23) {
          if ((pbVar29[1] <= (byte)puVar13[uVar23]) &&
             ((*(uint *)(puVar30 + uVar23 * 4) >> (ulong)(pbVar29[1] & 0x1f) & 1) != 0)) {
            pcStack_70 = "AbandonedHouse";
            local_78 = puVar1;
            iVar15 = FUN_02749340(lVar24 + lVar31 * 0x13230 + 0x1267c,&local_78);
            if (iVar15 != 0) {
              FUN_02507c6c(&local_88,7,1,0,0);
              if ((byte)local_88 < 8) {
                lVar24 = lVar24 + lVar31 * 0x13230 + 0x2f84;
                do {
                  uVar16 = FUN_026b3660(pbVar29,&local_88);
                  if (-1 < (int)uVar16) {
                    lVar6 = lVar24 + (ulong)uVar16 * 0x158;
                    if (0x9f < uVar16) {
                      lVar6 = lVar24;
                    }
                    local_78 = PTR_DAT_04bb2020 + 0x10;
                    pcStack_70 = "InducementAtMovingDay";
                    iVar15 = FUN_02746e10(lVar6 + 0x38,&local_78);
                    if ((iVar15 != 0) &&
                       (pbVar18 = (byte *)FUN_02582a24(&local_88,1), *pbVar18 == *param_2)) {
                      if ((local_a4 & 1) == 0) {
                        return;
                      }
                      if (*(long *)(lVar21 + 0xd0) == 0) {
                        return;
                      }
                      puVar22 = *(undefined8 **)(*(long *)(lVar21 + 0xd0) + 8);
                      if (puVar22 == (undefined8 *)0x0) {
                        return;
                      }
                      (**(code **)*puVar22)();
                      return;
                    }
                  }
                  bVar9 = (byte)local_88;
                  uVar23 = local_88 & 0xff;
                  if ((7 < (byte)local_88) || (uVar23 + 1 == 8)) break;
                  pbVar18 = puVar14 + uVar23 + 1;
                  uVar19 = FUN_02507924(&local_88,pbVar18);
                  if ((uVar19 & 1) == 0) {
                    if (uVar23 + 2 == 8) break;
                    pbVar18 = puVar14 + uVar23 + 2;
                    uVar19 = FUN_02507924(&local_88,pbVar18);
                    if ((uVar19 & 1) == 0) {
                      if (uVar23 + 3 == 8) break;
                      pbVar18 = puVar14 + uVar23 + 3;
                      uVar19 = FUN_02507924(&local_88,pbVar18);
                      if ((uVar19 & 1) == 0) {
                        if (uVar23 + 4 == 8) break;
                        pbVar18 = puVar14 + uVar23 + 4;
                        uVar19 = FUN_02507924(&local_88,pbVar18);
                        if ((uVar19 & 1) == 0) {
                          if (uVar23 + 5 == 8) break;
                          pbVar18 = puVar14 + uVar23 + 5;
                          uVar19 = FUN_02507924(&local_88,pbVar18);
                          if ((uVar19 & 1) == 0) {
                            if (uVar23 + 6 == 8) break;
                            pbVar18 = puVar14 + uVar23 + 6;
                            uVar19 = FUN_02507924(&local_88,pbVar18);
                            if ((uVar19 & 1) == 0) {
                              if (uVar23 + 7 == 8) break;
                              pbVar18 = puVar14 + uVar23 + 7;
                              uVar19 = FUN_02507924(&local_88,pbVar18);
                              if ((uVar19 & 1) == 0) {
                                if (bVar9 == 0) break;
                                pbVar18 = puVar14 + uVar23 + 8;
                                FUN_02507924(&local_88,pbVar18);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  if (7 < *pbVar18) break;
                  local_88 = CONCAT71(local_88._1_7_,*pbVar18);
                } while( true );
              }
              puVar30 = PTR_DAT_04bc2a20;
            }
          }
        }
        lVar31 = lVar31 + 1;
      } while (lVar31 != 10);
      if ((((local_a4 & 1) != 0) && (*(long *)(lVar21 + 0xd0) != 0)) &&
         (puVar22 = *(undefined8 **)(*(long *)(lVar21 + 0xd0) + 8), puVar22 != (undefined8 *)0x0)) {
        (**(code **)*puVar22)();
      }
    }
    bVar9 = *param_2;
  }
  uVar16 = (uint)(char)bVar9;
  uVar17 = nn::os::GetSystemTick();
  puVar2 = (ushort *)(param_1 + 8);
  puVar8 = puVar2 + (ulong)uVar16 * 0x18;
  if (7 < bVar9) {
    puVar8 = puVar2;
  }
  local_78 = (undefined *)CONCAT53(local_78._3_5_,0x80023);
  uVar10 = puVar8[0x14];
  if ((byte)(uVar10 >> 8) < 0x23) {
    FUN_020fd218(&local_78,uVar10 >> 8,uVar10 & 0xff);
    uVar23 = (ulong)local_78 & 0xff;
    if (((uVar23 < 0x23) && (local_78._1_1_ <= (byte)puVar13[uVar23])) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar23 * 4) >> (ulong)(local_78._1_1_ & 0x1f) & 1) != 0)) {
      local_78 = (undefined *)CONCAT53(local_78._3_5_,0x80023);
      uVar10 = puVar8[0x15];
      if ((byte)(uVar10 >> 8) < 0x23) {
        FUN_020fd218(&local_78,uVar10 >> 8,uVar10 & 0xff);
        uVar23 = (ulong)local_78 & 0xff;
        if (((uVar23 < 0x23) && (local_78._1_1_ <= (byte)puVar13[uVar23])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar23 * 4) >> (ulong)(local_78._1_1_ & 0x1f) & 1) != 0))
        {
          local_78 = (undefined *)CONCAT53(local_78._3_5_,0x80023);
          uVar10 = puVar8[0x16];
          if ((byte)(uVar10 >> 8) < 0x23) {
            FUN_020fd218(&local_78,uVar10 >> 8,uVar10 & 0xff);
            uVar23 = (ulong)local_78 & 0xff;
            if (((uVar23 < 0x23) && (local_78._1_1_ <= (byte)puVar13[uVar23])) &&
               ((*(uint *)(PTR_DAT_04bc2a20 + uVar23 * 4) >> (ulong)(local_78._1_1_ & 0x1f) & 1) !=
                0)) {
              local_78 = (undefined *)CONCAT53(local_78._3_5_,0x80023);
              uVar10 = puVar8[0x17];
              if ((byte)(uVar10 >> 8) < 0x23) {
                FUN_020fd218(&local_78,uVar10 >> 8,uVar10 & 0xff);
                uVar23 = (ulong)local_78 & 0xff;
                if (((uVar23 < 0x23) && (local_78._1_1_ <= (byte)puVar13[uVar23])) &&
                   ((*(uint *)(PTR_DAT_04bc2a20 + uVar23 * 4) >> (ulong)(local_78._1_1_ & 0x1f) & 1)
                    != 0)) {
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  puVar30 = PTR_DAT_04bc1220;
  puVar13 = PTR_DAT_04bb27d0;
  local_80 = 0;
  uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 1;
  lVar21 = 0;
  uVar23 = 0;
  param_1 = param_1 + 0x1c;
  local_88 = 0;
  uVar26 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 2;
  uVar26 = (uVar26 ^ uVar26 >> 0x1e) * 0x6c078965 + 3;
  uVar26 = (uVar26 ^ uVar26 >> 0x1e) * 0x6c078965 + 4;
  do {
    if (uVar23 != uVar16) {
      lVar31 = **(long **)puVar13;
      bVar11 = *(byte *)(lVar31 + 0x473);
      if ((long)(char)bVar11 == 0xffffffffffffffff) {
        if (uVar23 == ((long)(char)*puVar30 & 0xffffffffU)) goto LAB_020d5030;
      }
      else {
        puVar3 = (uint *)(lVar31 + 0x48);
        puVar7 = puVar3 + ((long)(char)bVar11 & 0xffffffffU) * 0x20;
        if (7 < bVar11) {
          puVar7 = puVar3;
        }
        pcVar25 = puVar30;
        if ((*puVar7 & 8) != 0) {
          pcVar25 = (char *)(lVar31 + 0x472);
        }
        if (uVar23 == ((long)*pcVar25 & 0xffffffffU)) {
LAB_020d5030:
          lVar31 = 0;
          do {
            uVar10 = *(ushort *)(param_1 + lVar31 * 2);
            if (((((((-1 < (short)uVar10) && (*puVar8 != uVar10)) && (puVar8[1] != uVar10)) &&
                  ((puVar8[2] != uVar10 && (puVar8[3] != uVar10)))) &&
                 ((puVar8[4] != uVar10 && ((puVar8[5] != uVar10 && (puVar8[6] != uVar10)))))) &&
                ((puVar8[7] != uVar10 &&
                 (((((puVar8[8] != uVar10 && (puVar8[9] != uVar10)) && (puVar8[10] != uVar10)) &&
                   (((puVar8[0xb] != uVar10 && (puVar8[0xc] != uVar10)) &&
                    ((puVar8[0xd] != uVar10 && ((puVar8[0xe] != uVar10 && (puVar8[0xf] != uVar10))))
                    )))) && (puVar8[0x10] != uVar10)))))) &&
               ((((puVar8[0x11] != uVar10 && (puVar8[0x12] != uVar10)) && (puVar8[0x13] != uVar10))
                && (((puVar8[0x14] != uVar10 && (puVar8[0x15] != uVar10)) &&
                    ((puVar8[0x16] != uVar10 && (puVar8[0x17] != uVar10)))))))) {
              local_78 = (undefined *)CONCAT53(local_78._3_5_,0x80000);
              local_78 = (undefined *)CONCAT62(local_78._2_6_,0x23);
              if (uVar10 >> 8 < 0x23) {
                FUN_020fd218(&local_78,uVar10 >> 8,uVar10 & 0xff);
                uVar19 = (ulong)local_78 & 0xff;
                if (((uVar19 < 0x23) && (local_78._1_1_ <= (byte)PTR_DAT_04bc27f0[uVar19])) &&
                   ((*(uint *)(PTR_DAT_04bc2a20 + uVar19 * 4) >> (ulong)(local_78._1_1_ & 0x1f) & 1)
                    != 0)) {
                  lVar24 = ((ulong)(lVar21 + lVar31) >> 5 & 0x7ffffff) * 4;
                  *(uint *)((long)&local_88 + lVar24) =
                       *(uint *)((long)&local_88 + lVar24) |
                       1 << (ulong)((uint)(lVar21 + lVar31) & 0x1f);
                }
              }
            }
            lVar31 = lVar31 + 1;
          } while (lVar31 != 10);
        }
        else {
          uVar28 = (uint)uVar23 & 0xff;
          uVar5 = *puVar7 & 8;
          pbVar29 = puVar30;
          if (uVar5 != 0) {
            pbVar29 = (byte *)(lVar31 + 0x473);
          }
          if ((uVar28 != 0xff) && (*pbVar29 != uVar28 && uVar5 != 0)) {
            puVar7 = (uint *)((long)puVar3 + ((long)(uVar23 << 0x38) >> 0x31));
            if (7 < uVar28) {
              puVar7 = puVar3;
            }
            if (((byte)*puVar7 >> 3 & 1) != 0) goto LAB_020d5030;
          }
        }
      }
    }
    uVar23 = uVar23 + 1;
    lVar21 = lVar21 + 10;
    param_1 = param_1 + 0x30;
  } while (uVar23 != 8);
  uVar28 = (uint)local_88 - ((uint)local_88 >> 1 & 0x55555555);
  uVar5 = local_88._4_4_ - (local_88._4_4_ >> 1 & 0x55555555);
  uVar12 = local_80 - (local_80 >> 1 & 0x55555555);
  uVar28 = (uVar28 >> 2 & 0x33333333) + (uVar28 & 0x33333333);
  uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
  uVar28 = uVar28 + (uVar28 >> 4) & 0xf0f0f0f;
  uVar28 = uVar28 + (uVar28 >> 8);
  uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
  uVar5 = uVar5 + (uVar5 >> 8);
  uVar4 = uVar28 + (uVar28 >> 0x10) & 0x3f;
  uVar28 = (uVar5 + (uVar5 >> 0x10) & 0x3f) + uVar4;
  uVar5 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
  uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
  uVar5 = uVar5 + (uVar5 >> 8);
  uVar5 = uVar28 + (uVar5 + (uVar5 >> 0x10) & 0x3f);
  if (uVar5 == 0) {
    return;
  }
  uVar23 = (ulong)local_78 >> 0x30;
  local_78._0_6_ = CONCAT15(*param_2,0x400000000);
  local_78 = (undefined *)(CONCAT26((short)uVar23,(undefined6)local_78) & 0xff00ffffffffffff);
  if (-1 < DAT_053d0a40) {
    FUN_01db1df0(**(long **)puVar13 + 0x480,DAT_053d0a40,&local_78,&local_8c,1,0);
  }
  uVar17 = uVar17 ^ uVar17 * 0x800;
  uVar17 = (uint)((ulong)uVar5 * (ulong)(uVar17 >> 8 ^ uVar26 >> 0x13 ^ uVar17 ^ uVar26) >> 0x20);
  if (uVar17 < uVar4) {
    lVar21 = 0;
    uVar28 = 0;
LAB_020d534c:
    uVar26 = *(uint *)((long)&local_88 + lVar21 * 4);
    iVar15 = (int)lVar21;
    if (uVar26 == 0) {
      uVar17 = iVar15 * 0x20 - 1;
    }
    else {
      iVar27 = (uVar17 - uVar28) + 2;
      do {
        iVar27 = iVar27 + -1;
        if (iVar27 < 2) {
          uVar17 = uVar26 - 1 & (uVar26 ^ 0xffffffff);
          uVar17 = uVar17 - (uVar17 >> 1 & 0x55555555);
          uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
          uVar17 = uVar17 + (uVar17 >> 4) & 0xf0f0f0f;
          uVar17 = uVar17 + (uVar17 >> 8);
          uVar17 = (uVar17 + (uVar17 >> 0x10) & 0x3f) + iVar15 * 0x20;
          goto LAB_020d53d8;
        }
        uVar26 = uVar26 - 1 & uVar26;
      } while (uVar26 != 0);
      uVar17 = iVar15 * 0x20 - 1;
    }
  }
  else {
    if (uVar17 < uVar28) {
      lVar21 = 1;
      uVar28 = uVar4;
      goto LAB_020d534c;
    }
    if (uVar17 < uVar5) {
      lVar21 = 2;
      goto LAB_020d534c;
    }
    uVar17 = 0xffffffff;
  }
LAB_020d53d8:
  uVar26 = uVar17 % 10;
  lVar21 = **(long **)puVar13;
  bVar11 = *(byte *)(lVar21 + 0x473);
  pcVar25 = PTR_DAT_04bc1220;
  if ((long)(char)bVar11 != 0xffffffffffffffff) {
    puVar3 = (uint *)(lVar21 + 0x48) + ((long)(char)bVar11 & 0xffffffffU) * 0x20;
    if (7 < bVar11) {
      puVar3 = (uint *)(lVar21 + 0x48);
    }
    if ((*puVar3 & 8) != 0) {
      pcVar25 = (char *)(lVar21 + 0x472);
    }
  }
  bVar11 = (byte)uVar26;
  if (uVar17 / 10 != (int)*pcVar25) {
    local_8c = *param_2;
    local_78 = (undefined *)
               CONCAT35(CONCAT21((short)((ulong)local_78 >> 0x30),(char)(uVar17 / 10)) & 0xff00ff,
                        0x400000000);
    if (-1 < DAT_053d09e0) {
      local_8b = bVar11;
      FUN_01db1df0(**(long **)puVar13 + 0x480,DAT_053d09e0,&local_78,&local_8c,2,0);
    }
    if (bVar9 < 8) {
      DAT_05453f08 = DAT_05453f08 | 1 << (ulong)(uVar16 & 0x1f);
    }
    goto LAB_020d550c;
  }
  if ((((*(long *)PTR_DAT_04bb46b0 == 0) ||
       (lVar21 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x10), lVar21 == 0)) ||
      (lVar21 = *(long *)(lVar21 + (ulong)uVar26 * 8 + 0x10), lVar21 == 0)) ||
     (lVar21 = *(long *)(lVar21 + 0x18), lVar21 == 0)) goto LAB_020d550c;
  lVar31 = *(long *)(lVar21 + 0x28);
  if (lVar31 == 0) {
    uVar23 = 0;
    lVar24 = *(long *)PTR_DAT_04bb6c70;
  }
  else {
    if (*(undefined8 **)(lVar31 + 0x10) == (undefined8 *)0x0) {
      uVar23 = 0;
      lVar24 = *(long *)PTR_DAT_04bb6c70;
    }
    else {
      uVar23 = (**(code **)**(undefined8 **)(lVar31 + 0x10))();
      lVar31 = *(long *)(lVar21 + 0x28);
      uVar23 = uVar23 & 0xffffffff;
      lVar24 = *(long *)PTR_DAT_04bb6c70;
      if (lVar31 == 0) goto LAB_020d55c4;
    }
    plVar20 = *(long **)(lVar31 + 0x20);
    if (plVar20 != (long *)0x0) {
      local_78 = *(undefined **)(lVar21 + 8);
      pcStack_70 = *(char **)(lVar21 + 0x10);
      local_68 = 0x13230;
      (**(code **)(*plVar20 + 0x20))(plVar20,&local_78);
    }
  }
LAB_020d55c4:
  bVar9 = *param_2;
  lVar31 = lVar24 + (ulong)(uint)(int)(char)bVar9 * 0x13298;
  if (7 < (uint)(int)(char)bVar9) {
    lVar31 = lVar24;
  }
  if (*(char *)(lVar31 + 0x13270) == '\0') {
    FUN_026b1890(lVar31,*(long *)(lVar21 + 0x10) + *(long *)(lVar21 + 8));
    FUN_02699290(lVar31);
    FUN_026b26a0(lVar31);
    *(undefined4 *)(lVar31 + 0x13238) = 0;
    *(byte *)(lVar31 + 0x1323d) = bVar9;
    *(undefined1 *)(lVar31 + 0x1323c) = 4;
    *(undefined1 *)(lVar31 + 0x1323e) = 0;
    *(undefined4 *)(lVar31 + 0x13264) = 0;
    *(long *)(lVar31 + 0x13240) = lVar31;
    *(undefined8 *)(lVar31 + 0x13248) = 0x13230;
    *(undefined1 *)(lVar31 + 0x13270) = 1;
  }
  if ((*(long *)(lVar21 + 0x28) != 0) &&
     (plVar20 = *(long **)(*(long *)(lVar21 + 0x28) + 0x20), plVar20 != (long *)0x0)) {
    local_78 = *(undefined **)(lVar21 + 8);
    pcStack_70 = *(char **)(lVar21 + 0x10);
    local_68 = 0x13230;
    (**(code **)(*plVar20 + 0x20))(plVar20,&local_78);
  }
  __s = (void *)(*(long *)(lVar21 + 0x10) + *(long *)(lVar21 + 8));
  memset(__s,0,0x13230);
  FUN_0268abb0(__s);
  uVar19 = (ulong)local_78 >> 0x30;
  local_78 = (undefined *)CONCAT26((ushort)uVar19 & 0xff00,0xff0000000000);
  local_8c = bVar11;
  if (-1 < DAT_053d1160) {
    FUN_01db1df0(**(long **)puVar13 + 0x480,DAT_053d1160,&local_78,&local_8c,1,0);
  }
  if ((((uVar23 & 1) != 0) && (*(long *)(lVar21 + 0x28) != 0)) &&
     (puVar22 = *(undefined8 **)(*(long *)(lVar21 + 0x28) + 0x18), puVar22 != (undefined8 *)0x0)) {
    (**(code **)*puVar22)();
  }
LAB_020d550c:
  puVar8 = puVar2 + (ulong)(uVar17 / 10) * 0x18;
  if (0x4f < uVar17) {
    puVar8 = puVar2;
  }
  puVar8[(ulong)uVar26 + 10] = 0xffff;
  return;
}

