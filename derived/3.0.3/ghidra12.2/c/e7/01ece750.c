
undefined8 FUN_01ece750(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  long *plVar20;
  uint uVar21;
  uint uVar22;
  undefined4 uVar23;
  long lVar24;
  undefined8 *puVar25;
  long lVar26;
  uint uVar27;
  long *plVar28;
  undefined8 uVar29;
  uint uVar30;
  ulong uVar31;
  int iVar32;
  long lVar33;
  uint local_704;
  undefined8 local_700;
  uint local_6ec;
  uint local_6e4;
  undefined *local_6c0;
  undefined4 local_6b8;
  undefined4 uStack_6b4;
  long local_6b0;
  undefined4 local_6a4;
  undefined4 local_6a0;
  float local_69c;
  undefined4 local_698;
  float local_694;
  undefined *local_690;
  undefined8 uStack_688;
  undefined1 *local_680;
  undefined8 uStack_678;
  undefined4 local_670;
  undefined1 auStack_66c [1500];
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  long local_80;
  int local_68;
  
  lVar24 = *(long *)PTR_DAT_04bb46b0;
  if (lVar24 == 0) {
LAB_01ece7d4:
    lVar24 = 0;
  }
  else {
    puVar25 = *(undefined8 **)(lVar24 + 0x10);
    if ((*(byte *)(lVar24 + 0x453) & 1) == 0) {
      lVar19 = (**(code **)(*(long *)*puVar25 + 0x38))();
      lVar24 = 0;
      if (lVar19 != 0) {
        lVar24 = lVar19 + 0x70;
      }
    }
    else {
      if ((puVar25 == (undefined8 *)0x0) || ((long *)puVar25[0x26] == (long *)0x0))
      goto LAB_01ece7d4;
      lVar24 = (**(code **)(*(long *)puVar25[0x26] + 0x38))();
    }
  }
  puVar10 = PTR_DAT_04bb27c0;
  lVar19 = *(long *)PTR_DAT_04bb27c0;
  if (lVar19 == 0) {
    plVar28 = (long *)0x0;
    uVar31 = 0;
joined_r0x01ece89c:
    bVar12 = false;
  }
  else {
    uVar30 = *(uint *)PTR_DAT_04bb3958;
    if ((((uVar30 == 0) ||
         (plVar28 = *(long **)(*(long *)(*(long *)(lVar19 + 0x1c0) + 8) +
                              ((ulong)(uVar30 >> 0x11) & 0x7ff8)), plVar28 == (long *)0x0)) ||
        ((*(uint *)(plVar28 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar28 + 0x46) != uVar30)) {
      plVar28 = (long *)0x0;
    }
    if (*(int *)(lVar19 + 0x288) == 1 || *(int *)(lVar19 + 0x288) == -1) {
      plVar20 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar19 = *(long *)puVar10;
      iVar13 = (**(code **)(*plVar20 + 0x60))();
      if (iVar13 < 0x11) {
        uVar31 = 1;
        uVar30 = 1;
      }
      else {
        if (4 < *(uint *)(lVar19 + 0x5e8)) goto LAB_01ece8a4;
        uVar31 = 0x101000100 >> (((ulong)*(uint *)(lVar19 + 0x5e8) & 7) << 3);
        uVar30 = (uint)uVar31;
      }
    }
    else {
LAB_01ece8a4:
      uVar31 = 0;
      uVar30 = 0;
    }
    if (plVar28 == (long *)0x0) goto joined_r0x01ece89c;
    bVar12 = (int)plVar28[0x2a] == 1;
    if (((*PTR_DAT_04bb3930 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb3930), iVar13 != 0)) {
      *(undefined **)PTR_DAT_04bb3928 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3930);
    }
    uVar31 = (**(code **)(*plVar28 + 0x20))(plVar28,PTR_DAT_04bb3928);
    if ((uVar31 & 1) == 0) {
      uVar30 = 0;
    }
    uVar31 = (ulong)uVar30;
  }
  if (lVar24 == 0) {
    return 0;
  }
  if (plVar28 == (long *)0x0) {
    return 0;
  }
  if (!bVar12) {
    return 0;
  }
  if ((uVar31 & 0xff) == 0) {
    return 0;
  }
  if ((*(long **)(lVar24 + 0x1a3d88) == (long *)0x0) ||
     (puVar25 = (undefined8 *)**(long **)(lVar24 + 0x1a3d88), puVar25 == (undefined8 *)0x0)) {
    local_6e4 = 0;
  }
  else {
    local_6e4 = (**(code **)*puVar25)();
  }
  if (*(long **)(lVar24 + 0x1a0b70) == (long *)0x0) {
    uVar31 = 0;
  }
  else {
    puVar25 = (undefined8 *)**(long **)(lVar24 + 0x1a0b70);
    uVar31 = 0;
    if (puVar25 != (undefined8 *)0x0) {
      uVar31 = (**(code **)*puVar25)();
    }
  }
  iVar13 = *(int *)(*(long *)(lVar24 + 0x1a0b58) + *(long *)(lVar24 + 0x1a0b50));
  if ((((uVar31 & 1) != 0) && (*(long *)(lVar24 + 0x1a0b70) != 0)) &&
     (puVar25 = *(undefined8 **)(*(long *)(lVar24 + 0x1a0b70) + 8), puVar25 != (undefined8 *)0x0)) {
    (**(code **)*puVar25)();
  }
  local_90 = (undefined *)((ulong)local_90._4_4_ << 0x20);
  FUN_0291e130(&local_690,&local_90,0);
  lVar26 = *(long *)(param_1 + 8);
  local_680 = auStack_66c;
  uVar30 = *(uint *)(plVar28 + 0xb0b);
  uStack_678 = 0x1fffffffff;
  local_670 = 0x1f;
  iVar11 = (uint)local_90;
  local_690 = PTR_DAT_04bb7f30 + 0x10;
  uStack_688 = 0x1f000003c1;
  local_90 = (undefined *)CONCAT44(local_90._4_4_,*(undefined4 *)(lVar26 + 0x230));
  FUN_021454d0(&local_690,&local_90);
  iVar3 = *(int *)(param_1 + 0xaf38);
  lVar19 = FUN_0265c2a0(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508));
  if (lVar19 == 0) {
    uVar15 = 0;
  }
  else {
    if ((*(long **)(lVar19 + 0x28) == (long *)0x0) ||
       (puVar25 = (undefined8 *)**(long **)(lVar19 + 0x28), puVar25 == (undefined8 *)0x0)) {
      uVar14 = 1;
    }
    else {
      uVar14 = (**(code **)*puVar25)();
      uVar14 = uVar14 ^ 1;
    }
    uVar15 = FUN_020fd7d8(*(long *)(lVar19 + 0x10) + *(long *)(lVar19 + 8));
    if ((((uVar14 & 1) == 0) && (*(long *)(lVar19 + 0x28) != 0)) &&
       (puVar25 = *(undefined8 **)(*(long *)(lVar19 + 0x28) + 8), puVar25 != (undefined8 *)0x0)) {
      (**(code **)*puVar25)();
    }
  }
  puVar10 = PTR_DAT_04bb43c0;
  local_90 = (undefined *)(CONCAT44(local_90._4_4_,uVar15) & 0xffffffff000000ff);
  if ((uint)local_90 < 8) {
    local_68 = *(int *)(&DAT_04058760 + (long)(int)(uint)local_90 * 4);
  }
  else {
    local_68 = 1;
  }
  if (iVar11 != 0) {
    local_700 = 0;
    local_6ec = 0;
    iVar32 = 0;
    local_704 = 0;
    uVar14 = 0;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    do {
      if (iVar32 != iVar3) {
        FUN_028b411c(&local_6a4,*(long *)(lVar24 + 0x1a3d70) + *(long *)(lVar24 + 0x1a3d68),
                     &local_69c,iVar32);
        lVar19 = *(long *)puVar10;
        uVar16 = FUN_0277d6c4(&local_6a4);
        lVar33 = *(long *)puVar10;
        if (lVar33 != 0) {
          lVar19 = *(long *)(lVar19 + 0x57e58);
          uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if ((uVar16 < *(uint *)(lVar19 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
            local_6b0 = 0;
            local_6b8 = local_6a4;
            uStack_6b4 = local_6a0;
            local_6c0 = puVar1;
            uVar16 = FUN_0277d6c4(&local_6b8);
            if (*(long *)puVar10 != 0) {
              lVar19 = *(long *)(lVar33 + 0x57e58);
              uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
              if ((uVar16 < *(uint *)(lVar19 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
                lVar19 = *(long *)PTR_DAT_04bc0428;
                uVar16 = FUN_0277d6c4(&local_6a4);
                uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                if (uVar16 < *(uint *)(lVar19 + 0x1d8)) {
                  lVar19 = *(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar16 * 8);
                  if (lVar19 != 0) {
                    local_6b0 = lVar19;
                  }
                }
              }
            }
            iVar17 = FUN_01ae58b0(&local_6c0);
            if ((iVar17 != local_68) && (iVar17 = FUN_02076ae0(&local_6a4), iVar17 < 7)) {
              iVar17 = 1;
              if (1 < iVar32) {
                iVar17 = 2;
              }
              iVar18 = 2;
              if ((iVar13 != 2) && (1 < iVar32)) {
                if (iVar32 == 2) {
                  lVar33 = *(long *)puVar10;
                  uVar16 = FUN_0277d6c4(&local_6a4);
                  lVar19 = *(long *)puVar10;
                  if (lVar19 != 0) {
                    lVar33 = *(long *)(lVar33 + 0x57e58);
                    uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
                    if ((uVar16 < *(uint *)(lVar33 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
                      local_80 = 0;
                      local_90 = PTR_DAT_04bc0510 + 0x10;
                      local_88 = local_6a4;
                      uStack_84 = local_6a0;
                      uVar16 = FUN_0277d6c4(&local_88);
                      if (*(long *)puVar10 != 0) {
                        lVar19 = *(long *)(lVar19 + 0x57e58);
                        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                        if ((uVar16 < *(uint *)(lVar19 + 0x1d8)) &&
                           (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
                          lVar19 = *(long *)PTR_DAT_04bc0428;
                          uVar16 = FUN_0277d6c4(&local_6a4);
                          uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                          if (uVar16 < *(uint *)(lVar19 + 0x1d8)) {
                            lVar19 = *(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar16 * 8);
                            if (lVar19 != 0) {
                              local_80 = lVar19;
                            }
                          }
                        }
                      }
                      iVar18 = FUN_01aee3b4(&local_90);
                      iVar17 = 2;
                      if (iVar18 - 3U < 3) {
                        iVar17 = 3;
                      }
                      iVar18 = iVar17 + 1;
                      goto LAB_01eced98;
                    }
                  }
                }
                iVar17 = 3;
                iVar18 = 4;
              }
LAB_01eced98:
              iVar6 = (int)((float)(int)local_69c / 5.0) - (uint)(local_69c < 0.0);
              iVar7 = (int)((float)(int)local_694 / 5.0) - (uint)(local_694 < 0.0);
              uVar8 = iVar6 - (iVar17 + 1);
              uVar16 = iVar6 + iVar17 + 1;
              uVar9 = iVar7 - iVar18;
              uVar27 = iVar7 + iVar18;
              uVar2 = uVar8;
              if ((int)uVar16 <= (int)uVar8) {
                uVar2 = uVar16;
              }
              if ((int)uVar8 <= (int)uVar16) {
                uVar8 = uVar16;
              }
              uVar16 = uVar9;
              if ((int)uVar27 <= (int)uVar9) {
                uVar16 = uVar27;
              }
              if ((int)uVar9 <= (int)uVar27) {
                uVar9 = uVar27;
              }
              if (uVar9 + 1 != uVar16) {
                bVar12 = false;
                uVar27 = uVar2;
                do {
                  uVar4 = (ushort)*(uint *)(plVar28 + 0xb0b);
                  if ((uint)uVar4 <= (uVar27 & 0xffff)) {
                    if ((uVar27 & 0xffff) <=
                        (((uint)uVar4 + (uint)*(ushort *)((long)plVar28 + 0x5864)) - 1 & 0xffff)) {
                      uVar5 = *(ushort *)((long)plVar28 + 0x585a);
                      if ((uint)uVar5 <= (uVar16 & 0xffff)) {
                        if ((((uVar16 & 0xffff) <=
                              (((uint)uVar5 + (uint)*(ushort *)(plVar28 + 0xb0d)) - 1 & 0xffff)) &&
                            (uVar22 = (uVar27 - uVar4) +
                                      *(int *)(plVar28[0xb13] + 0x1c) * (uVar16 - uVar5),
                            (*(uint *)(*(long *)(plVar28[0xb13] + 0x10) +
                                      (long)((int)uVar22 >> 5) * 4) >> (ulong)(uVar22 & 0x1f) & 1)
                            != 0)) &&
                           (uVar22 = (uVar27 - (uVar30 & 0xffff)) +
                                     uStack_678._4_4_ * (uVar16 - (uVar30 >> 0x10)),
                           (*(uint *)(local_680 + (long)((int)uVar22 >> 5) * 4) >>
                            (ulong)(uVar22 & 0x1f) & 1) == 0)) {
                          uVar22 = *(uint *)(lVar26 + 0x288);
                          uVar15 = *(undefined4 *)(lVar26 + 0x28c);
                          uVar23 = *(undefined4 *)(lVar26 + 0x290);
                          uVar21 = *(uint *)(lVar26 + 0x294);
                          if (!bVar12) {
                            uVar22 = uVar22 ^ uVar22 << 0xb;
                            *(undefined4 *)(lVar26 + 0x288) = uVar15;
                            *(undefined4 *)(lVar26 + 0x28c) = uVar23;
                            *(uint *)(lVar26 + 0x290) = uVar21;
                            local_704 = local_704 + 1;
                            uVar22 = uVar22 >> 8 ^ uVar21 >> 0x13 ^ uVar22 ^ uVar21;
                            *(uint *)(lVar26 + 0x294) = uVar22;
                            if (((ulong)uVar22 * (ulong)local_704 & 0xffffffff00000000) != 0) break;
                            uVar14 = 0;
                            *(int *)(param_1 + 0xaf38) = iVar32;
                            *(undefined2 *)(param_1 + 0xaf3c) = (undefined2)local_6a4;
                            *(undefined1 *)(param_1 + 0xaf3e) = local_6a4._2_1_;
                            *(undefined1 *)(param_1 + 0xaf3f) = local_6a4._3_1_;
                            *(undefined4 *)(param_1 + 0xaf40) = local_6a0;
                            *(float *)(param_1 + 0xaf5c) = local_69c;
                            *(undefined4 *)(param_1 + 0xaf60) = local_698;
                            *(float *)(param_1 + 0xaf64) = local_694;
                            uVar22 = *(uint *)(lVar26 + 0x288);
                            uVar15 = *(undefined4 *)(lVar26 + 0x28c);
                            uVar23 = *(undefined4 *)(lVar26 + 0x290);
                            uVar21 = *(uint *)(lVar26 + 0x294);
                          }
                          uVar22 = uVar22 ^ uVar22 << 0xb;
                          uVar14 = uVar14 + 1;
                          *(undefined4 *)(lVar26 + 0x288) = uVar15;
                          *(undefined4 *)(lVar26 + 0x28c) = uVar23;
                          *(uint *)(lVar26 + 0x290) = uVar21;
                          uVar22 = uVar22 >> 8 ^ uVar21 >> 0x13 ^ uVar22 ^ uVar21;
                          *(uint *)(lVar26 + 0x294) = uVar22;
                          if (((ulong)uVar22 * (ulong)uVar14 & 0xffffffff00000000) == 0) {
                            bVar12 = true;
                            local_700 = CONCAT44(uVar16,uVar27);
                            local_6ec = uVar27;
                          }
                          else {
                            bVar12 = true;
                          }
                        }
                      }
                    }
                  }
                  if ((int)uVar27 < (int)uVar8) {
                    uVar27 = uVar27 + 1;
                  }
                  else {
                    uVar16 = uVar16 + 1;
                    uVar27 = uVar2;
                  }
                } while ((uVar2 != uVar27) || (uVar9 + 1 != uVar16));
              }
            }
          }
        }
      }
      iVar32 = iVar32 + 1;
    } while (iVar32 != iVar11);
    if (local_6ec != 0) {
      *(float *)(param_1 + 0x56ec) = (float)(int)local_700 * 5.0;
      *(float *)(param_1 + 0x56f4) = (float)local_700._4_4_ * 5.0;
      uVar15 = FUN_006f0400(*(float *)(param_1 + 0xaf5c) - (float)(int)local_700 * 5.0,
                            *(float *)(param_1 + 0xaf64) - (float)local_700._4_4_ * 5.0);
      *(undefined4 *)(param_1 + 0xaf50) = uVar15;
      if (((local_6e4 & 1) == 0) || (*(long *)(lVar24 + 0x1a3d88) == 0)) {
        return 1;
      }
      puVar25 = *(undefined8 **)(*(long *)(lVar24 + 0x1a3d88) + 8);
      uVar29 = 1;
      goto joined_r0x01ecf034;
    }
  }
  if (((local_6e4 & 1) == 0) || (*(long *)(lVar24 + 0x1a3d88) == 0)) {
    return 0;
  }
  puVar25 = *(undefined8 **)(*(long *)(lVar24 + 0x1a3d88) + 8);
  uVar29 = 0;
joined_r0x01ecf034:
  if (puVar25 != (undefined8 *)0x0) {
    (**(code **)*puVar25)();
  }
  return uVar29;
}

