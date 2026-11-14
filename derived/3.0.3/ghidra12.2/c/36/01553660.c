
void FUN_01553660(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined *puVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  uint *puVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  ulong uVar30;
  long lVar31;
  uint uVar32;
  long lVar33;
  uint uVar34;
  float fVar35;
  float fVar36;
  undefined *local_d0;
  int local_c8;
  int local_c4;
  undefined **local_c0;
  uint local_b8;
  undefined4 uStack_b4;
  byte local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
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
  
  uVar24 = (ulong)param_2;
  if (uVar24 == 1) {
    uVar26 = *(uint *)(param_1 + 8);
    uVar30 = (ulong)uVar26;
    if ((int)uVar26 < 1) goto LAB_0155378c;
    puVar25 = (uint *)(param_1 + 0x10);
    if (uVar26 == 1) {
LAB_01553734:
      uVar28 = 0;
    }
    else {
      lVar31 = 0;
      uVar28 = 0;
      do {
        uVar28 = uVar28 + 2;
        *(undefined8 *)(*(long *)puVar25 + lVar31 + 8) = 0xffffffffffffffff;
        lVar33 = *(long *)puVar25 + lVar31;
        lVar31 = lVar31 + 0x20;
        *(undefined8 *)(lVar33 + 0x18) = 0xffffffffffffffff;
      } while ((uVar30 & 0xfffffffe) != uVar28);
    }
  }
  else {
    puVar7 = (uint *)(param_1 + 0x18) + (ulong)param_3 * 0x18;
    if (7 < param_3) {
      puVar7 = (uint *)(param_1 + 0x18);
    }
    puVar25 = puVar7 + (ulong)param_4 * 4;
    if (5 < param_4) {
      puVar25 = puVar7;
    }
    uVar26 = *puVar25;
    uVar30 = (ulong)uVar26;
    if ((int)uVar26 < 1) goto LAB_0155378c;
    puVar25 = puVar25 + 2;
    if (uVar26 == 1) goto LAB_01553734;
    lVar31 = 0;
    uVar28 = 0;
    do {
      uVar28 = uVar28 + 2;
      *(undefined8 *)(*(long *)puVar25 + lVar31 + 8) = 0xffffffffffffffff;
      lVar33 = *(long *)puVar25 + lVar31;
      lVar31 = lVar31 + 0x20;
      *(undefined8 *)(lVar33 + 0x18) = 0xffffffffffffffff;
    } while ((uVar30 & 0xfffffffe) != uVar28);
  }
  if ((uVar30 & 1) != 0) {
    *(undefined8 *)(*(long *)puVar25 + uVar28 * 0x10 + 8) = 0xffffffffffffffff;
  }
LAB_0155378c:
  local_c0 = &PTR_LAB_049ffa38;
  puVar6 = &DAT_0516b108 + uVar24;
  if (0x38 < param_2) {
    puVar6 = &DAT_0516b108;
  }
  uStack_b4 = *puVar6;
  local_b8 = param_2;
  local_b0 = FUN_017baf44();
  local_b0 = local_b0 & 1;
  lVar31 = FUN_01a4fa00(&local_c0);
  iVar12 = *(int *)(lVar31 + 0x10);
  iVar14 = *(int *)(lVar31 + 0x14);
  uVar32 = *(uint *)(param_1 + 0x31c) ^ *(uint *)(param_1 + 0x31c) << 0xb;
  iVar13 = *(int *)(lVar31 + 0x20);
  iVar15 = *(int *)(lVar31 + 0x24);
  uVar16 = *(uint *)(param_1 + 0x324);
  uVar9 = *(uint *)(param_1 + 800) ^ *(uint *)(param_1 + 800) << 0xb;
  fVar35 = (float)((iVar13 - iVar12) + 1) / (float)(int)param_5;
  fVar36 = (float)((iVar15 - iVar14) + 1) / (float)(int)param_6;
  uVar26 = *(uint *)(param_1 + 0x318) ^ *(uint *)(param_1 + 0x318) << 0xb;
  uVar10 = uVar26 >> 8 ^ uVar16 >> 0x13 ^ uVar26 ^ uVar16;
  uVar16 = uVar16 ^ uVar16 << 0xb;
  *(uint *)(param_1 + 0x318) = uVar10;
  uVar26 = 0;
  if (fVar35 != (float)(int)fVar35) {
    uVar26 = (uint)(0.0 <= fVar35);
  }
  uVar11 = uVar32 >> 8 ^ uVar10 >> 0x13 ^ uVar32 ^ uVar10;
  *(uint *)(param_1 + 0x31c) = uVar11;
  uVar9 = uVar9 >> 8 ^ uVar11 >> 0x13 ^ uVar9 ^ uVar11;
  *(uint *)(param_1 + 800) = uVar9;
  uVar32 = 0;
  if (fVar36 != (float)(int)fVar36) {
    uVar32 = (uint)(0.0 <= fVar36);
  }
  uVar32 = uVar32 + (int)fVar36;
  uVar16 = uVar16 >> 8 ^ uVar9 >> 0x13 ^ uVar16 ^ uVar9;
  *(uint *)(param_1 + 0x324) = uVar16;
  if (0 < (int)uVar32) {
    puVar7 = (uint *)(param_1 + 0x18) + (ulong)param_3 * 0x18;
    if (7 < param_3) {
      puVar7 = (uint *)(param_1 + 0x18);
    }
    puVar25 = puVar7 + (ulong)param_4 * 4;
    if (5 < param_4) {
      puVar25 = puVar7;
    }
    if (((0 < (int)param_6) && (0 < (int)param_5)) &&
       (uVar26 = uVar26 + (int)fVar35, 0 < (int)uVar26)) {
      uVar22 = 0;
      puVar1 = PTR_DAT_04bb2010 + 0x10;
      do {
        uVar29 = 0;
        do {
          iVar2 = uVar29 + (int)((ulong)uVar9 * (ulong)uVar26 >> 0x20);
          iVar17 = 0;
          if (uVar26 != 0) {
            iVar17 = iVar2 / (int)uVar26;
          }
          iVar3 = uVar22 + (int)((ulong)uVar16 * (ulong)uVar32 >> 0x20) + iVar17;
          iVar18 = 0;
          if (uVar32 != 0) {
            iVar18 = iVar3 / (int)uVar32;
          }
          uVar27 = 0;
          do {
            uVar34 = 0;
            do {
              iVar4 = (int)((ulong)uVar11 * (ulong)param_6 >> 0x20) + uVar34;
              iVar19 = 0;
              if (param_6 != 0) {
                iVar19 = iVar4 / (int)param_6;
              }
              iVar5 = uVar27 + (int)((ulong)uVar10 * (ulong)param_5 >> 0x20) + iVar19;
              iVar20 = 0;
              if (param_5 != 0) {
                iVar20 = iVar5 / (int)param_5;
              }
              local_c4 = (iVar3 - iVar18 * uVar32) + iVar14 + (iVar4 - iVar19 * param_6) * uVar32;
              local_c8 = (iVar2 - iVar17 * uVar26) + iVar12 + (iVar5 - iVar20 * param_5) * uVar26;
              if (local_c8 < iVar13 && local_c4 < iVar15) {
                local_80 = &PTR_LAB_049ffa38;
                uStack_74 = *puVar6;
                local_d0 = puVar1;
                local_78 = param_2;
                local_70 = FUN_017baf44();
                local_70 = local_70 & 1;
                FUN_01a50240(&local_88,&local_80,0,&local_d0);
                puVar21 = PTR_DAT_04bb43c0;
                lVar33 = *(long *)PTR_DAT_04bb43c0;
                uVar23 = FUN_0277d6c4(&local_88);
                lVar31 = *(long *)puVar21;
                if (lVar31 == 0) {
LAB_01553b80:
                  FUN_01a50240(&local_a8,&local_80,1,&local_d0);
                  puVar21 = PTR_DAT_04bb43c0;
                  lVar33 = *(long *)PTR_DAT_04bb43c0;
                  uVar23 = FUN_0277d6c4(&local_a8);
                  lVar31 = *(long *)puVar21;
                  if (lVar31 != 0) {
                    lVar33 = *(long *)(lVar33 + 0x57e58);
                    uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
                    if ((uVar23 < *(uint *)(lVar33 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar23 * 8) != 0)) {
                      local_90 = 0;
                      local_a0 = &PTR_FUN_04a36b50;
                      local_98 = local_a8;
                      uStack_94 = uStack_a4;
                      uVar23 = FUN_0277d6c4(&local_98);
                      if (DAT_053274a0 != 0) {
                        lVar31 = *(long *)(lVar31 + 0x57e58);
                        uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
                        if ((uVar23 < *(uint *)(lVar31 + 0x1d8)) &&
                           (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar23 * 8) != 0)) {
                          lVar31 = *(long *)PTR_DAT_04bc0428;
                          uVar23 = FUN_0277d6c4(&local_a8);
                          uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
                          if ((uVar23 < *(uint *)(lVar31 + 0x1d8)) &&
                             (lVar31 = *(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar23 * 8),
                             lVar31 != 0)) {
                            local_90 = lVar31;
                          }
                        }
                      }
                      uVar30 = FUN_01b0140c(&local_a0);
                      if ((uVar30 & 1) != 0) goto LAB_01553c88;
                    }
                  }
                }
                else {
                  lVar33 = *(long *)(lVar33 + 0x57e58);
                  uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
                  if ((*(uint *)(lVar33 + 0x1d8) <= uVar23) ||
                     (*(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar23 * 8) == 0))
                  goto LAB_01553b80;
                  local_90 = 0;
                  local_a0 = &PTR_FUN_04a36b50;
                  local_98 = local_88;
                  uStack_94 = uStack_84;
                  uVar23 = FUN_0277d6c4(&local_98);
                  if (DAT_053274a0 != 0) {
                    lVar31 = *(long *)(lVar31 + 0x57e58);
                    uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
                    if ((uVar23 < *(uint *)(lVar31 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar23 * 8) != 0)) {
                      lVar31 = *(long *)PTR_DAT_04bc0428;
                      uVar23 = FUN_0277d6c4(&local_88);
                      uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
                      if ((uVar23 < *(uint *)(lVar31 + 0x1d8)) &&
                         (lVar31 = *(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar23 * 8),
                         lVar31 != 0)) {
                        local_90 = lVar31;
                      }
                    }
                  }
                  uVar30 = FUN_01b0140c(&local_a0);
                  if ((uVar30 & 1) == 0) goto LAB_01553b80;
LAB_01553c88:
                  if (uVar24 == 1) {
                    uVar30 = FUN_015543d8(param_1,&local_d0);
                    if ((uVar30 & 1) == 0) {
                      return;
                    }
                  }
                  else {
                    lVar31 = *(long *)(puVar25 + 2);
                    if (-1 < *(int *)(lVar31 + 8)) {
                      uVar23 = *puVar25;
                      lVar33 = lVar31 + (ulong)(1 < uVar23) * 0x10;
                      if ((-1 < *(int *)(lVar33 + 8)) &&
                         (lVar33 = lVar31 + (ulong)(2 < uVar23) * 0x20, -1 < *(int *)(lVar33 + 8)))
                      {
                        lVar8 = 0x30;
                        if (uVar23 < 4) {
                          lVar8 = 0;
                        }
                        lVar33 = lVar31 + lVar8;
                        if ((-1 < *(int *)(lVar31 + lVar8 + 8)) &&
                           (lVar33 = lVar31 + (ulong)(4 < uVar23) * 0x40, -1 < *(int *)(lVar33 + 8))
                           ) {
                          lVar8 = 0x50;
                          if (uVar23 < 6) {
                            lVar8 = 0;
                          }
                          lVar33 = lVar31 + lVar8;
                          if (-1 < *(int *)(lVar31 + lVar8 + 8)) {
                            lVar8 = 0x60;
                            if (uVar23 < 7) {
                              lVar8 = 0;
                            }
                            lVar33 = lVar31 + lVar8;
                            if (-1 < *(int *)(lVar31 + lVar8 + 8)) {
                              lVar8 = 0x70;
                              if (uVar23 < 8) {
                                lVar8 = 0;
                              }
                              lVar33 = lVar31 + lVar8;
                              if ((-1 < *(int *)(lVar31 + lVar8 + 8)) &&
                                 (lVar33 = lVar31 + (ulong)(8 < uVar23) * 0x80,
                                 -1 < *(int *)(lVar33 + 8))) {
                                lVar33 = 0x90;
                                if (uVar23 < 10) {
                                  lVar33 = 0;
                                }
                                lVar31 = lVar31 + lVar33;
                                if (-1 < *(int *)(lVar31 + 8)) {
                                  return;
                                }
                                goto LAB_01553d8c;
                              }
                            }
                          }
                        }
                      }
                      lVar31 = lVar33;
                    }
LAB_01553d8c:
                    *(int *)(lVar31 + 8) = local_c8;
                    *(int *)(lVar31 + 0xc) = local_c4;
                  }
                }
              }
              uVar34 = uVar34 + 1;
            } while (param_6 != uVar34);
            uVar27 = uVar27 + 1;
          } while (uVar27 != param_5);
          uVar29 = uVar29 + 1;
        } while (uVar29 != uVar26);
        uVar22 = uVar22 + 1;
      } while (uVar22 != uVar32);
    }
  }
  return;
}

