
undefined8
FUN_024282d0(long param_1,undefined8 *param_2,undefined2 *param_3,undefined4 *param_4,uint param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  char *__dest;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  void *__src;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  ushort uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  void *pvVar21;
  uint *puVar22;
  uint *puVar23;
  long lVar24;
  long lVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  uint *puVar29;
  uint local_1e4;
  undefined *local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  long local_1d0;
  undefined1 auStack_188 [8];
  char *local_180;
  int local_178;
  void *local_128;
  int local_120;
  undefined1 local_d8;
  undefined1 local_d0;
  undefined4 local_cc;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined4 local_98;
  byte local_8c [4];
  undefined *local_88;
  char *local_80;
  uint *local_78;
  uint local_6c;
  
  puVar7 = PTR_DAT_04bb43c0;
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  uVar15 = *(ushort *)PTR_DAT_04bb6298;
  uVar16 = (ulong)(short)uVar15;
  if (uVar16 == 0xffffffffffffffff) {
    bVar9 = false;
    local_1e4 = 0;
  }
  else {
    puVar29 = (uint *)(PTR_DAT_04bc39f8 + (uVar16 & 0xffffffff) * 8);
    if (0xff < uVar15) {
      puVar29 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar29 >> 0x19 & 1) == 0) || (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x6efba09b)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    local_1e0 = (undefined *)((ulong)local_1e0 & 0xffffffff00000000);
    puVar29 = (uint *)(PTR_DAT_04bc39f8 + (uVar16 & 0xffffffff) * 8);
    if (0xff < uVar15) {
      puVar29 = (uint *)PTR_DAT_04bc39f8;
    }
    local_1e4 = *puVar29 & 1;
  }
  lVar25 = *(long *)PTR_DAT_04bb43c0;
  uVar13 = FUN_0277d6c4(param_2);
  puVar8 = PTR_DAT_04bc0510;
  lVar24 = *(long *)puVar7;
  if (lVar24 == 0) {
LAB_024285dc:
    lVar24 = *(long *)PTR_DAT_04bbbc68;
    if ((lVar24 != 0) &&
       (((((*(long *)(lVar24 + 0xb0) != 0 && (*(long *)(*(long *)(lVar24 + 0xb0) + 8) != 0)) &&
          (*(long *)(lVar24 + 0x488) != 0)) &&
         ((*(long *)(*(long *)(lVar24 + 0x488) + 8) != 0 && (*(long *)(lVar24 + 0x2b0) != 0)))) &&
        (*(long *)(*(long *)(lVar24 + 0x2b0) + 8) != 0)))) {
      uVar13 = FUN_0277d6c4(param_2);
      uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if ((uVar13 < *(uint *)(lVar24 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
        FUN_0124c030(&local_1e0,param_2);
        iVar14 = FUN_0123db50(&local_1d8,local_1d0);
        if (iVar14 - 0x12U < 6) {
          if (local_1d0 != 0) {
            local_88 = (undefined *)((ulong)local_88 & 0xffffffff00000000);
            lVar24 = FUN_01246470(local_1d0,0x16,0x623dc307,*(undefined8 *)PTR_DAT_04bbbc98);
            if (lVar24 != 0) {
              uVar13 = (uint)local_88 + 7;
              if (-1 < (int)(uint)local_88) {
                uVar13 = (uint)local_88;
              }
              if ((*(byte *)(lVar24 + (ulong)(uint)((int)uVar13 >> 3)) >>
                   (ulong)((uint)local_88 & 7) & 1) != 0) goto LAB_024286c8;
            }
          }
          bVar28 = true;
        }
        else {
LAB_024286c8:
          bVar28 = false;
        }
        iVar14 = FUN_0123db50(&local_1d8,local_1d0);
        if (iVar14 - 0x23U < 9) {
          if (local_1d0 != 0) {
            local_88 = (undefined *)((ulong)local_88 & 0xffffffff00000000);
            lVar24 = FUN_01246470(local_1d0,0x16,0x623dc307,*(undefined8 *)PTR_DAT_04bbbc98);
            if (lVar24 != 0) {
              uVar13 = (uint)local_88 + 7;
              if (-1 < (int)(uint)local_88) {
                uVar13 = (uint)local_88;
              }
              if ((*(byte *)(lVar24 + (ulong)(uint)((int)uVar13 >> 3)) >>
                   (ulong)((uint)local_88 & 7) & 1) != 0) goto LAB_02428e78;
            }
          }
          bVar20 = 1;
        }
        else {
LAB_02428e78:
          bVar20 = 0;
        }
        iVar14 = FUN_0123db50(&local_1d8,local_1d0);
        if (iVar14 - 0xbU < 7) {
          if (local_1d0 != 0) {
            local_88 = (undefined *)((ulong)local_88 & 0xffffffff00000000);
            lVar24 = FUN_01246470(local_1d0,0x16,0x623dc307,*(undefined8 *)PTR_DAT_04bbbc98);
            if (lVar24 != 0) {
              uVar13 = (uint)local_88 + 7;
              if (-1 < (int)(uint)local_88) {
                uVar13 = (uint)local_88;
              }
              if ((*(byte *)(lVar24 + (ulong)(uint)((int)uVar13 >> 3)) >>
                   (ulong)((uint)local_88 & 7) & 1) != 0) goto LAB_02428ef0;
            }
          }
          bVar26 = true;
        }
        else {
LAB_02428ef0:
          bVar26 = false;
        }
        iVar14 = FUN_0123db50(&local_1d8,local_1d0);
        bVar11 = iVar14 == 0x22;
        iVar14 = FUN_0123db50(&local_1d8,local_1d0);
        bVar12 = iVar14 == 0x21;
        iVar14 = FUN_0123db50(&local_1d8,local_1d0);
        bVar10 = false;
        bVar6 = false;
        bVar27 = false;
        bVar4 = false;
        bVar5 = false;
        if (iVar14 == 0x1f) {
          bVar5 = bVar9;
        }
        goto LAB_0242870c;
      }
    }
    bVar6 = false;
    bVar28 = false;
    bVar26 = false;
    bVar20 = 0;
    bVar10 = false;
    bVar11 = false;
    bVar12 = false;
    bVar27 = false;
    bVar4 = false;
    bVar5 = false;
  }
  else {
    lVar25 = *(long *)(lVar25 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
    if ((*(uint *)(lVar25 + 0x1d8) <= uVar13) ||
       (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_024285dc;
    local_78 = (uint *)0x0;
    local_80 = (char *)*param_2;
    local_88 = PTR_DAT_04bc0510 + 0x10;
    uVar13 = FUN_0277d6c4(&local_80);
    if (*(long *)puVar7 == 0) {
LAB_02428850:
      puVar29 = (uint *)0x0;
      local_1e0 = (undefined *)CONCAT44(local_1e0._4_4_,0x86);
      uVar15 = 0xbc;
      local_6c = 0xbc;
    }
    else {
      lVar24 = *(long *)(lVar24 + 0x57e58);
      uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if ((*(uint *)(lVar24 + 0x1d8) <= uVar13) ||
         (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_02428850;
      lVar24 = *(long *)PTR_DAT_04bc0428;
      uVar13 = FUN_0277d6c4(param_2);
      uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if ((*(uint *)(lVar24 + 0x1d8) <= uVar13) ||
         (puVar29 = *(uint **)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar13 * 8),
         puVar29 == (uint *)0x0)) goto LAB_02428850;
      uVar15 = 0;
      uVar13 = *puVar29;
      if ((uVar13 != 0) && (puVar29 != (uint *)(ulong)uVar13)) {
        puVar22 = (uint *)((long)puVar29 - (long)(ulong)uVar13);
        uVar15 = 0;
        if (*puVar22 != 0) {
          uVar13 = puVar22[1];
          if ((uVar13 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
            lVar24 = 0xc;
            if (*(char *)((long)puVar22 + 10) != '\0') {
              lVar24 = 0x1c;
            }
            lVar24 = (long)puVar22 + lVar24 + (ulong)(ushort)puVar22[2] * 8;
            if (lVar24 != 0) {
              uVar3 = 0;
              if ((ulong)uVar13 != 0) {
                uVar3 = (uint)((ulong)((long)puVar29 - lVar24) / (ulong)uVar13);
              }
              if (*puVar22 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                 (uVar15 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                 uVar15 < 0xbd)) goto LAB_02428548;
            }
          }
          uVar15 = 0;
        }
      }
LAB_02428548:
      local_1e0 = (undefined *)CONCAT44(local_1e0._4_4_,0x86);
      local_6c = 0;
      uVar13 = *puVar29;
      local_78 = puVar29;
      if ((uVar13 != 0) && (puVar29 != (uint *)(ulong)uVar13)) {
        puVar22 = (uint *)((long)puVar29 - (long)(ulong)uVar13);
        local_6c = 0;
        if (*puVar22 != 0) {
          uVar13 = puVar22[1];
          if ((uVar13 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
            lVar24 = 0xc;
            if (*(char *)((long)puVar22 + 10) != '\0') {
              lVar24 = 0x1c;
            }
            lVar24 = (long)puVar22 + lVar24 + (ulong)(ushort)puVar22[2] * 8;
            if (lVar24 != 0) {
              uVar3 = 0;
              if ((ulong)uVar13 != 0) {
                uVar3 = (uint)((ulong)((long)puVar29 - lVar24) / (ulong)uVar13);
              }
              if (*puVar22 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                 (local_6c = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                 local_6c < 0xbd)) goto LAB_02428864;
            }
          }
          local_6c = 0;
        }
      }
    }
LAB_02428864:
    bVar6 = false;
    bVar10 = local_6c == (uint)local_1e0;
    if (uVar15 == 0x8f) {
      bVar27 = false;
      if (*(char *)((long)param_2 + 0x15) != '\0') {
        local_8c[0] = *pbVar1;
        if (7 < local_8c[0]) {
          local_8c[0] = 0xff;
        }
        uVar16 = FUN_02669430(local_8c);
        if ((uVar16 & 1) == 0) {
          bVar6 = false;
          bVar27 = true;
        }
        else {
          lVar25 = *(long *)puVar7;
          uVar13 = FUN_0277d6c4(param_2);
          lVar24 = *(long *)puVar7;
          bVar6 = false;
          if (lVar24 != 0) {
            lVar25 = *(long *)(lVar25 + 0x57e58);
            uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
            if ((uVar13 < *(uint *)(lVar25 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
              local_1e0 = puVar8 + 0x10;
              local_1d0 = 0;
              local_1d8 = *(undefined4 *)param_2;
              uStack_1d4 = *(undefined4 *)((long)param_2 + 4);
              uVar13 = FUN_0277d6c4(&local_1d8);
              if (*(long *)puVar7 != 0) {
                lVar24 = *(long *)(lVar24 + 0x57e58);
                uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                if ((uVar13 < *(uint *)(lVar24 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
                  lVar24 = *(long *)PTR_DAT_04bc0428;
                  uVar13 = FUN_0277d6c4(param_2);
                  uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                  if ((uVar13 < *(uint *)(lVar24 + 0x1d8)) &&
                     (((puVar22 = *(uint **)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar13 * 8),
                       puVar22 != (uint *)0x0 && (uVar13 = *puVar22, uVar13 != 0)) &&
                      (puVar22 != (uint *)(ulong)uVar13)))) {
                    puVar23 = (uint *)((long)puVar22 - (long)(ulong)uVar13);
                    if (((*puVar23 != 0) && (uVar13 = puVar23[1], uVar13 != 0)) &&
                       ((ulong)(ushort)puVar23[2] != 0)) {
                      lVar24 = 0xc;
                      if (*(char *)((long)puVar23 + 10) != '\0') {
                        lVar24 = 0x1c;
                      }
                      lVar24 = (long)puVar23 + lVar24 + (ulong)(ushort)puVar23[2] * 8;
                      if (lVar24 != 0) {
                        uVar3 = 0;
                        if ((ulong)uVar13 != 0) {
                          uVar3 = (uint)((ulong)((long)puVar22 - lVar24) / (ulong)uVar13);
                        }
                        if (*puVar23 <= uVar3) {
                          uVar3 = 0xffffffff;
                        }
                        if (((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                            (uVar15 = *(ushort *)
                                       (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                            uVar15 < 0xbd)) && (uVar15 == 0x8f)) {
                          bVar20 = *pbVar1;
                          if (7 < bVar20) {
                            bVar20 = 0xff;
                          }
                          local_1e0 = (undefined *)CONCAT71(local_1e0._1_7_,bVar20);
                          uVar16 = FUN_02669430(&local_1e0);
                          if (((uVar16 & 1) != 0) &&
                             (lVar24 = *(long *)PTR_DAT_04bb46b0, lVar24 != 0)) {
                            puVar17 = *(undefined8 **)(lVar24 + 0x10);
                            if ((*(byte *)(lVar24 + 0x453) & 1) == 0) {
                              lVar24 = (**(code **)(*(long *)*puVar17 + 0x38))();
                              if (lVar24 != 0) {
                                lVar24 = lVar24 + 0x70;
                                goto LAB_0242902c;
                              }
                            }
                            else if (((puVar17 != (undefined8 *)0x0) &&
                                     ((long *)puVar17[0x26] != (long *)0x0)) &&
                                    (lVar24 = (**(code **)(*(long *)puVar17[0x26] + 0x38))(),
                                    lVar24 != 0)) {
LAB_0242902c:
                              if ((*(long **)(lVar24 + 0xe6ce0) == (long *)0x0) ||
                                 (puVar17 = (undefined8 *)**(long **)(lVar24 + 0xe6ce0),
                                 puVar17 == (undefined8 *)0x0)) {
                                uVar13 = 1;
                              }
                              else {
                                uVar13 = (**(code **)*puVar17)();
                                uVar13 = uVar13 ^ 1;
                              }
                              iVar14 = FUN_028478d0(*(long *)(lVar24 + 0xe6cc8) +
                                                    *(long *)(lVar24 + 0xe6cc0),pbVar1);
                              if ((((uVar13 & 1) == 0) && (*(long *)(lVar24 + 0xe6ce0) != 0)) &&
                                 (puVar17 = *(undefined8 **)(*(long *)(lVar24 + 0xe6ce0) + 8),
                                 puVar17 != (undefined8 *)0x0)) {
                                (**(code **)*puVar17)();
                              }
                              if (iVar14 == 2) {
                                bVar6 = true;
                                goto LAB_024290a8;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            bVar6 = false;
          }
LAB_024290a8:
          bVar27 = false;
        }
      }
    }
    else {
      bVar27 = false;
    }
    local_1e0 = (undefined *)CONCAT44(local_1e0._4_4_,0x7f);
    if (puVar29 == (uint *)0x0) {
      local_6c = 0xbc;
    }
    else {
      uVar13 = *puVar29;
      local_6c = 0;
      if ((uVar13 != 0) && (puVar29 != (uint *)(ulong)uVar13)) {
        puVar22 = (uint *)((long)puVar29 - (long)(ulong)uVar13);
        local_6c = 0;
        if (*puVar22 != 0) {
          uVar13 = puVar22[1];
          if ((uVar13 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
            lVar24 = 0xc;
            if (*(char *)((long)puVar22 + 10) != '\0') {
              lVar24 = 0x1c;
            }
            lVar24 = (long)puVar22 + lVar24 + (ulong)(ushort)puVar22[2] * 8;
            if (lVar24 != 0) {
              uVar3 = 0;
              if ((ulong)uVar13 != 0) {
                uVar3 = (uint)((ulong)((long)puVar29 - lVar24) / (ulong)uVar13);
              }
              if (*puVar22 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                 (local_6c = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                 local_6c < 0xbd)) goto LAB_02429150;
            }
          }
          local_6c = 0;
        }
      }
    }
LAB_02429150:
    bVar28 = false;
    bVar20 = 0;
    bVar26 = false;
    bVar11 = false;
    bVar12 = false;
    bVar5 = false;
    bVar4 = false;
    if (local_6c == 0x7f) {
      bVar4 = bVar9;
    }
  }
LAB_0242870c:
  lVar24 = *(long *)PTR_DAT_04bb39b0;
  bVar9 = false;
  if (lVar24 != 0) {
    if (*(int *)(lVar24 + 0x15c) == 0) {
      bVar9 = false;
    }
    else {
      pbVar2 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar24 + 0x15c) != 0) {
        pbVar2 = (byte *)(lVar24 + 0x158);
      }
      bVar18 = *pbVar2;
      bVar19 = *pbVar1;
      if (7 < bVar18) {
        bVar18 = 0xff;
      }
      if (7 < bVar19) {
        bVar19 = 0xff;
      }
      bVar9 = bVar18 != bVar19;
    }
  }
  if ((!bVar4 && !bVar5) &&
      ((!bVar12 && (!bVar11 && (!bVar6 && (param_5 & 1) == 0))) &&
      (!(bool)(bVar27 | bVar10 | bVar28) && ((local_1e4 == 0 && !bVar26) && !(bool)(bVar20 | bVar9))
      ))) {
    return 0;
  }
  local_1e0 = (undefined *)((ulong)local_1e0 & 0xffffffff00000000);
  uVar13 = FUN_0232697c(pbVar1,param_2,&local_1e0);
  if ((!bVar6 && (!bVar27 && ((uVar13 ^ 0xffffffff) & 1) == 0)) && ((param_5 & 1) == 0)) {
    return 0;
  }
  if (*(char *)((long)param_2 + 0x14) != '\0') {
    if (param_3 != (undefined2 *)0x0) {
      *param_3 = *(undefined2 *)param_2;
      *(undefined1 *)(param_3 + 1) = *(undefined1 *)((long)param_2 + 2);
      *(undefined1 *)((long)param_3 + 3) = *(undefined1 *)((long)param_2 + 3);
      *(undefined4 *)(param_3 + 2) = *(undefined4 *)((long)param_2 + 4);
    }
    if (param_4 == (undefined4 *)0x0) {
      return 1;
    }
    *param_4 = *(undefined4 *)(param_2 + 1);
    param_4[1] = *(undefined4 *)((long)param_2 + 0xc);
    param_4[2] = *(undefined4 *)(param_2 + 2);
    return 1;
  }
  FUN_0257a010(&local_1e0);
  puVar7 = PTR_PTR_04bb2238;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  pvVar21 = *(void **)(puVar7 + 8);
  if (local_128 != pvVar21) {
    (**(code **)(*(long *)puVar7 + 0x18))(puVar7);
    lVar24 = 0;
    do {
      if (*(char *)(*(long *)(puVar7 + 8) + lVar24) == '\0') goto LAB_02428b48;
      lVar25 = *(long *)(puVar7 + 8) + lVar24;
      if (*(char *)(lVar25 + 1) == '\0') {
        lVar24 = lVar24 + 1;
        goto LAB_02428b48;
      }
      if (*(char *)(lVar25 + 2) == '\0') {
        lVar24 = lVar24 + 2;
        goto LAB_02428b48;
      }
      lVar24 = lVar24 + 3;
    } while (lVar24 != 0x80001);
    lVar24 = 0;
LAB_02428b48:
    iVar14 = (int)lVar24;
    if (local_120 <= (int)lVar24) {
      iVar14 = local_120 + -1;
    }
    memcpy(local_128,pvVar21,(long)iVar14);
    *(undefined1 *)((long)local_128 + (long)iVar14) = 0;
  }
  pvVar21 = (void *)CONCAT44(uStack_1d4,local_1d8);
  (**(code **)(DAT_054c2648 + 0x18))(&DAT_054c2648);
  __src = DAT_054c2650;
  if (pvVar21 != DAT_054c2650) {
    (**(code **)(DAT_054c2648 + 0x18))(&DAT_054c2648);
    lVar24 = 0;
    do {
      if (*(char *)((long)DAT_054c2650 + lVar24) == '\0') goto LAB_02428c00;
      if (*(char *)((long)DAT_054c2650 + lVar24 + 1) == '\0') {
        lVar24 = lVar24 + 1;
        goto LAB_02428c00;
      }
      if (*(char *)((long)DAT_054c2650 + lVar24 + 2) == '\0') {
        lVar24 = lVar24 + 2;
        goto LAB_02428c00;
      }
      lVar24 = lVar24 + 3;
    } while (lVar24 != 0x80001);
    lVar24 = 0;
LAB_02428c00:
    iVar14 = (int)lVar24;
    if ((int)local_1d0 <= (int)lVar24) {
      iVar14 = (int)local_1d0 + -1;
    }
    memcpy(pvVar21,__src,(long)iVar14);
    *(undefined1 *)((long)pvVar21 + (long)iVar14) = 0;
  }
  puVar7 = PTR_DAT_04bb2020;
  local_d8 = 0;
  local_d0 = 0;
  local_bc = *(undefined4 *)param_2;
  local_b8 = *(undefined4 *)((long)param_2 + 4);
  if (local_1e4 != 0) {
    if (local_180 != "PickupFtr_FullItem") {
      iVar14 = 0x12;
      if (local_178 < 0x13) {
        iVar14 = local_178 + -1;
      }
      memcpy(local_180,"PickupFtr_FullItem",(long)iVar14);
      local_180[iVar14] = '\0';
    }
    local_cc = 0xb;
    goto LAB_02428de0;
  }
  if (bVar27) {
    __dest = (char *)CONCAT44(uStack_1d4,local_1d8);
    if (__dest != "Player_GetDemo") {
      iVar14 = 0xe;
      if ((int)local_1d0 < 0xf) {
        iVar14 = (int)local_1d0 + -1;
      }
      memcpy(__dest,"Player_GetDemo",(long)iVar14);
      __dest[iVar14] = '\0';
    }
    if (local_180 != "LostQuest_OtherVillage") {
      iVar14 = 0x16;
      if (local_178 < 0x17) {
        iVar14 = local_178 + -1;
      }
      memcpy(local_180,"LostQuest_OtherVillage",(long)iVar14);
      local_180[iVar14] = '\0';
    }
LAB_02428d20:
    local_cc = 0xc;
  }
  else {
    if (bVar6) {
      local_88 = PTR_DAT_04bb2020 + 0x10;
      local_80 = "Player_GetDemo";
      FUN_006e43a0(&local_1e0,&local_88);
      local_80 = "LostQuest_Cant_Receive";
    }
    else {
      if (bVar10) {
        local_88 = PTR_DAT_04bb2020 + 0x10;
        local_80 = "PickupBell_FullItem";
        FUN_006e43a0(auStack_188,&local_88);
        local_cc = 10;
        goto LAB_02428de0;
      }
      if (bVar28) {
        local_88 = PTR_DAT_04bb2020 + 0x10;
        local_80 = "PickupVegetable_FullItem";
        FUN_006e43a0(auStack_188,&local_88);
        local_cc = 8;
        goto LAB_02428de0;
      }
      if (!bVar11) {
        if (bVar12) {
          local_80 = "PickupVine_FullItem";
        }
        else if (bVar5) {
          local_80 = "PickupWeedLightWherearenMain_FullItem";
        }
        else {
          if (!bVar4) {
            local_88 = PTR_DAT_04bb2020 + 0x10;
            local_80 = "PickupFlower_FullItem";
            FUN_006e43a0(auStack_188,&local_88);
            local_cc = 7;
            goto LAB_02428de0;
          }
          local_80 = "PickupFieldIconWherearenMain_FullItem";
        }
        local_88 = PTR_DAT_04bb2020 + 0x10;
        FUN_006e43a0(auStack_188,&local_88);
        goto LAB_02428d20;
      }
      local_80 = "PickupFixLadder_FullItem";
    }
    local_88 = puVar7 + 0x10;
    FUN_006e43a0(auStack_188,&local_88);
    local_cc = 0xc;
  }
LAB_02428de0:
  local_a8 = 1;
  local_a4 = 1;
  local_98 = 0x3c;
  FUN_024480f0(param_1,&local_1e0);
  return 1;
}

