
void FUN_014b4dd0(long param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined *puVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  uint uVar28;
  ulong uVar29;
  uint uVar30;
  long lVar31;
  uint uVar32;
  long lVar33;
  float fVar34;
  float fVar35;
  undefined *local_c8;
  int local_c0;
  int local_bc;
  undefined **local_b8;
  uint local_b0;
  undefined4 uStack_ac;
  byte local_a8;
  undefined **local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  long local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined **local_80;
  uint local_78;
  undefined4 uStack_74;
  byte local_70;
  
  uVar23 = (ulong)param_2;
  if (uVar23 == 0x32) {
    uVar25 = *(uint *)(param_1 + 8);
    uVar29 = (ulong)uVar25;
    if ((int)uVar25 < 1) goto LAB_014b4eec;
    puVar24 = (uint *)(param_1 + 0x10);
    if (uVar25 == 1) {
LAB_014b4e94:
      uVar27 = 0;
    }
    else {
      lVar31 = 0;
      uVar27 = 0;
      do {
        uVar27 = uVar27 + 2;
        *(undefined8 *)(*(long *)puVar24 + lVar31 + 8) = 0xffffffffffffffff;
        lVar33 = *(long *)puVar24 + lVar31;
        lVar31 = lVar31 + 0x20;
        *(undefined8 *)(lVar33 + 0x18) = 0xffffffffffffffff;
      } while ((uVar29 & 0xfffffffe) != uVar27);
    }
  }
  else {
    puVar24 = (uint *)(param_1 + 0x18) + (ulong)param_3 * 4;
    if (5 < param_3) {
      puVar24 = (uint *)(param_1 + 0x18);
    }
    uVar25 = *puVar24;
    uVar29 = (ulong)uVar25;
    if ((int)uVar25 < 1) goto LAB_014b4eec;
    puVar24 = puVar24 + 2;
    if (uVar25 == 1) goto LAB_014b4e94;
    lVar31 = 0;
    uVar27 = 0;
    do {
      uVar27 = uVar27 + 2;
      *(undefined8 *)(*(long *)puVar24 + lVar31 + 8) = 0xffffffffffffffff;
      lVar33 = *(long *)puVar24 + lVar31;
      lVar31 = lVar31 + 0x20;
      *(undefined8 *)(lVar33 + 0x18) = 0xffffffffffffffff;
    } while ((uVar29 & 0xfffffffe) != uVar27);
  }
  if ((uVar29 & 1) != 0) {
    *(undefined8 *)(*(long *)puVar24 + uVar27 * 0x10 + 8) = 0xffffffffffffffff;
  }
LAB_014b4eec:
  local_b8 = &PTR_LAB_049ffa38;
  puVar6 = &DAT_0516b108 + uVar23;
  if (0x38 < param_2) {
    puVar6 = &DAT_0516b108;
  }
  uStack_ac = *puVar6;
  local_b0 = param_2;
  local_a8 = FUN_017baf44();
  local_a8 = local_a8 & 1;
  lVar31 = FUN_01a4fa00(&local_b8);
  iVar11 = *(int *)(lVar31 + 0x10);
  iVar13 = *(int *)(lVar31 + 0x14);
  iVar12 = *(int *)(lVar31 + 0x20);
  iVar14 = *(int *)(lVar31 + 0x24);
  uVar15 = *(uint *)(param_1 + 0x84);
  uVar30 = *(uint *)(param_1 + 0x80) ^ *(uint *)(param_1 + 0x80) << 0xb;
  uVar25 = *(uint *)(param_1 + 0x78) ^ *(uint *)(param_1 + 0x78) << 0xb;
  uVar8 = *(uint *)(param_1 + 0x7c) ^ *(uint *)(param_1 + 0x7c) << 0xb;
  uVar9 = uVar15 ^ uVar15 << 0xb;
  fVar34 = (float)((iVar12 - iVar11) + 1) / (float)(int)param_4;
  uVar15 = uVar25 >> 8 ^ uVar15 >> 0x13 ^ uVar25 ^ uVar15;
  fVar35 = (float)((iVar14 - iVar13) + 1) / (float)(int)param_5;
  uVar25 = 0;
  if (fVar34 != (float)(int)fVar34) {
    uVar25 = (uint)(0.0 <= fVar34);
  }
  uVar8 = uVar8 >> 8 ^ uVar15 >> 0x13 ^ uVar8 ^ uVar15;
  *(uint *)(param_1 + 0x78) = uVar15;
  *(uint *)(param_1 + 0x7c) = uVar8;
  uVar10 = uVar30 >> 8 ^ uVar8 >> 0x13 ^ uVar30 ^ uVar8;
  uVar30 = 0;
  if (fVar35 != (float)(int)fVar35) {
    uVar30 = (uint)(0.0 <= fVar35);
  }
  uVar30 = uVar30 + (int)fVar35;
  uVar9 = uVar9 >> 8 ^ uVar10 >> 0x13 ^ uVar9 ^ uVar10;
  *(uint *)(param_1 + 0x80) = uVar10;
  *(uint *)(param_1 + 0x84) = uVar9;
  if (0 < (int)uVar30) {
    puVar24 = (uint *)(param_1 + 0x18) + (ulong)param_3 * 4;
    if (5 < param_3) {
      puVar24 = (uint *)(param_1 + 0x18);
    }
    if (((0 < (int)param_5) && (0 < (int)param_4)) &&
       (uVar25 = uVar25 + (int)fVar34, 0 < (int)uVar25)) {
      uVar21 = 0;
      puVar1 = PTR_DAT_04bb2010 + 0x10;
      do {
        uVar28 = 0;
        do {
          iVar2 = uVar28 + (int)((ulong)uVar10 * (ulong)uVar25 >> 0x20);
          iVar16 = 0;
          if (uVar25 != 0) {
            iVar16 = iVar2 / (int)uVar25;
          }
          iVar3 = uVar21 + (int)((ulong)uVar9 * (ulong)uVar30 >> 0x20) + iVar16;
          iVar17 = 0;
          if (uVar30 != 0) {
            iVar17 = iVar3 / (int)uVar30;
          }
          uVar26 = 0;
          do {
            uVar32 = 0;
            do {
              iVar4 = (int)((ulong)uVar8 * (ulong)param_5 >> 0x20) + uVar32;
              iVar18 = 0;
              if (param_5 != 0) {
                iVar18 = iVar4 / (int)param_5;
              }
              iVar5 = uVar26 + (int)((ulong)uVar15 * (ulong)param_4 >> 0x20) + iVar18;
              iVar19 = 0;
              if (param_4 != 0) {
                iVar19 = iVar5 / (int)param_4;
              }
              local_bc = (iVar3 - iVar17 * uVar30) + iVar13 + (iVar4 - iVar18 * param_5) * uVar30;
              local_c0 = (iVar2 - iVar16 * uVar25) + iVar11 + (iVar5 - iVar19 * param_4) * uVar25;
              if (local_c0 < iVar12 && local_bc < iVar14) {
                local_80 = &PTR_LAB_049ffa38;
                uStack_74 = *puVar6;
                local_c8 = puVar1;
                local_78 = param_2;
                local_70 = FUN_017baf44();
                local_70 = local_70 & 1;
                FUN_01a50240(&local_88,&local_80,0,&local_c8);
                puVar20 = PTR_DAT_04bb43c0;
                lVar33 = *(long *)PTR_DAT_04bb43c0;
                uVar22 = FUN_0277d6c4(&local_88);
                lVar31 = *(long *)puVar20;
                if (lVar31 != 0) {
                  lVar33 = *(long *)(lVar33 + 0x57e58);
                  uVar22 = (uVar22 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
                  if ((uVar22 < *(uint *)(lVar33 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar22 * 8) != 0)) {
                    local_90 = 0;
                    local_a0 = &PTR_FUN_04a36b50;
                    local_98 = local_88;
                    uStack_94 = uStack_84;
                    uVar22 = FUN_0277d6c4(&local_98);
                    if (DAT_053274a0 != 0) {
                      lVar31 = *(long *)(lVar31 + 0x57e58);
                      uVar22 = (uVar22 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
                      if ((uVar22 < *(uint *)(lVar31 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar22 * 8) != 0)) {
                        lVar31 = *(long *)PTR_DAT_04bc0428;
                        uVar22 = FUN_0277d6c4(&local_88);
                        uVar22 = (uVar22 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
                        if ((uVar22 < *(uint *)(lVar31 + 0x1d8)) &&
                           (lVar31 = *(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar22 * 8),
                           lVar31 != 0)) {
                          local_90 = lVar31;
                        }
                      }
                    }
                    uVar29 = FUN_01b0140c(&local_a0);
                    if ((uVar29 & 1) != 0) {
                      if (uVar23 == 0x32) {
                        uVar29 = FUN_014b5418(param_1,&local_c8);
                        if ((uVar29 & 1) == 0) {
                          return;
                        }
                      }
                      else {
                        lVar31 = *(long *)(puVar24 + 2);
                        if (-1 < *(int *)(lVar31 + 8)) {
                          uVar22 = *puVar24;
                          lVar33 = lVar31 + (ulong)(1 < uVar22) * 0x10;
                          if ((-1 < *(int *)(lVar33 + 8)) &&
                             (lVar33 = lVar31 + (ulong)(2 < uVar22) * 0x20,
                             -1 < *(int *)(lVar33 + 8))) {
                            lVar7 = 0x30;
                            if (uVar22 < 4) {
                              lVar7 = 0;
                            }
                            lVar33 = lVar31 + lVar7;
                            if ((-1 < *(int *)(lVar31 + lVar7 + 8)) &&
                               (lVar33 = lVar31 + (ulong)(4 < uVar22) * 0x40,
                               -1 < *(int *)(lVar33 + 8))) {
                              lVar7 = 0x50;
                              if (uVar22 < 6) {
                                lVar7 = 0;
                              }
                              lVar33 = lVar31 + lVar7;
                              if (-1 < *(int *)(lVar31 + lVar7 + 8)) {
                                lVar7 = 0x60;
                                if (uVar22 < 7) {
                                  lVar7 = 0;
                                }
                                lVar33 = lVar31 + lVar7;
                                if (-1 < *(int *)(lVar31 + lVar7 + 8)) {
                                  lVar7 = 0x70;
                                  if (uVar22 < 8) {
                                    lVar7 = 0;
                                  }
                                  lVar33 = lVar31 + lVar7;
                                  if ((-1 < *(int *)(lVar31 + lVar7 + 8)) &&
                                     (lVar33 = lVar31 + (ulong)(8 < uVar22) * 0x80,
                                     -1 < *(int *)(lVar33 + 8))) {
                                    lVar33 = 0x90;
                                    if (uVar22 < 10) {
                                      lVar33 = 0;
                                    }
                                    lVar31 = lVar31 + lVar33;
                                    if (-1 < *(int *)(lVar31 + 8)) {
                                      return;
                                    }
                                    goto LAB_014b53d0;
                                  }
                                }
                              }
                            }
                          }
                          lVar31 = lVar33;
                        }
LAB_014b53d0:
                        *(int *)(lVar31 + 8) = local_c0;
                        *(int *)(lVar31 + 0xc) = local_bc;
                      }
                    }
                  }
                }
              }
              uVar32 = uVar32 + 1;
            } while (param_5 != uVar32);
            uVar26 = uVar26 + 1;
          } while (uVar26 != param_4);
          uVar28 = uVar28 + 1;
        } while (uVar28 != uVar25);
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar30);
    }
  }
  return;
}

