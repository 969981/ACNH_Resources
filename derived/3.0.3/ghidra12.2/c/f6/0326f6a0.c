
void FUN_0326f6a0(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  ushort *puVar15;
  uint uVar16;
  undefined4 uVar17;
  byte bVar18;
  uint *puVar19;
  uint *puVar20;
  long lVar21;
  ulong uVar22;
  byte *pbVar23;
  long lVar24;
  long lVar25;
  long *plVar26;
  long *plVar27;
  float fVar28;
  float fVar29;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  long local_a0;
  uint local_94;
  int local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  
  lVar21 = *(long *)(*(long *)(param_1 + 0x210) + 0x588);
  if ((*(int *)(param_1 + 0x220) == 1) && (*(long *)PTR_DAT_04bbbc38 != 0)) {
    uVar10 = FUN_014e4978();
  }
  else {
    uVar10 = 0;
  }
  puVar7 = PTR_DAT_04bc4d90;
  uVar6 = *(uint *)(lVar21 + 0x2f8);
  if (0 < (int)uVar6) {
    uVar22 = 0;
    puVar1 = PTR_DAT_04bc4da0 + 0x10;
    puVar2 = PTR_DAT_04bc4f00 + 0x10;
    puVar3 = PTR_DAT_04bc0510 + 0x10;
    pbVar23 = PTR_DAT_04bc4d98;
    do {
      if ((long)uVar22 < (long)(int)*(uint *)(lVar21 + 0x208) && uVar22 < *(uint *)(lVar21 + 0x208))
      {
        plVar26 = *(long **)(*(long *)(lVar21 + 0x210) + uVar22 * 8);
      }
      else {
        plVar26 = (long *)0x0;
      }
      if (((*pbVar23 & 1) == 0) && (iVar12 = __cxa_guard_acquire(pbVar23), iVar12 != 0)) {
        *(undefined **)puVar7 = puVar1;
        __cxa_guard_release(pbVar23);
      }
      if (plVar26 != (long *)0x0) {
        uVar14 = (**(code **)*plVar26)(plVar26,puVar7);
        if ((uVar14 & 1) == 0) goto LAB_0326f7a8;
        FUN_03264a78(&local_8c,param_1 + 0x228,param_2 + (int)uVar22);
        puVar4 = PTR_DAT_04bb43c0;
        bVar8 = false;
        if ((local_8c < 9) && ((1 << (ulong)(local_8c & 0x1f) & 0x1eaU) != 0)) {
          lVar24 = *(long *)PTR_DAT_04bb43c0;
          uVar11 = FUN_0277d6c4(&local_88);
          if (*(long *)puVar4 != 0) {
            lVar24 = *(long *)(lVar24 + 0x57e58);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
            if (uVar11 < *(uint *)(lVar24 + 0x1d8)) {
              bVar8 = *(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar11 * 8) != 0;
              goto LAB_0326f88c;
            }
          }
          bVar8 = false;
        }
LAB_0326f88c:
        uVar11 = local_8c;
        bVar9 = bVar8;
        if (local_8c == 4) {
          bVar9 = true;
        }
        (**(code **)(*plVar26 + 0x140))(plVar26,bVar9,0);
        iVar12 = FUN_03457ed0(&local_88,uVar10);
        puVar4 = PTR_DAT_04bb43c0;
        lVar24 = *(long *)PTR_DAT_04bb43c0;
        local_90 = iVar12;
        uVar13 = FUN_0277d6c4(&local_88);
        lVar25 = *(long *)puVar4;
        if (lVar25 == 0) {
LAB_0326fa40:
          bVar9 = false;
        }
        else {
          lVar24 = *(long *)(lVar24 + 0x57e58);
          uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
          if (*(uint *)(lVar24 + 0x1d8) <= uVar13) goto LAB_0326fa40;
          bVar9 = false;
          if (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar13 * 8) != 0) {
            local_a0 = 0;
            local_b0 = PTR_DAT_04bc0510 + 0x10;
            local_a8 = local_88;
            uStack_a4 = uStack_84;
            uVar13 = FUN_0277d6c4(&local_a8);
            if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_0326fa48:
              uVar16 = 0xbc;
            }
            else {
              lVar24 = *(long *)(lVar25 + 0x57e58);
              uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
              uVar16 = 0xbc;
              if (uVar13 < *(uint *)(lVar24 + 0x1d8)) {
                if (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar13 * 8) == 0)
                goto LAB_0326fa48;
                lVar24 = *(long *)PTR_DAT_04bc0428;
                uVar13 = FUN_0277d6c4(&local_88);
                uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                uVar16 = 0xbc;
                if (uVar13 < *(uint *)(lVar24 + 0x1d8)) {
                  puVar19 = *(uint **)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar13 * 8);
                  if (puVar19 == (uint *)0x0) goto LAB_0326fa48;
                  uVar13 = *puVar19;
                  uVar16 = 0;
                  if ((uVar13 != 0) && (puVar19 != (uint *)(ulong)uVar13)) {
                    puVar20 = (uint *)((long)puVar19 - (long)(ulong)uVar13);
                    uVar16 = 0;
                    if (*puVar20 != 0) {
                      uVar13 = puVar20[1];
                      if ((uVar13 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
                        lVar24 = 0xc;
                        if (*(char *)((long)puVar20 + 10) != '\0') {
                          lVar24 = 0x1c;
                        }
                        lVar24 = (long)puVar20 + lVar24 + (ulong)(ushort)puVar20[2] * 8;
                        if (lVar24 != 0) {
                          uVar16 = 0;
                          if ((ulong)uVar13 != 0) {
                            uVar16 = (uint)((ulong)((long)puVar19 - lVar24) / (ulong)uVar13);
                          }
                          if (*puVar20 <= uVar16) {
                            uVar16 = 0xffffffff;
                          }
                          if ((uVar16 < *(uint *)PTR_DAT_04bc00c8) &&
                             (uVar16 = (uint)*(ushort *)
                                              (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                              (long)(int)uVar16 * 2), uVar16 < 0xbd))
                          goto LAB_0326fa4c;
                        }
                      }
                      uVar16 = 0;
                    }
                  }
                }
              }
            }
LAB_0326fa4c:
            bVar9 = (uVar16 & 0xfffffffe) == 4;
            local_94 = uVar16;
          }
        }
        bVar5 = false;
        if (iVar12 == 0) {
          bVar5 = bVar8;
        }
        bVar18 = 0;
        if (uVar11 != 4) {
          bVar18 = bVar9 ^ 1;
        }
        uVar17 = 0;
        if ((bVar5 & bVar18) == 0) {
          uVar17 = 2;
        }
        local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar17);
        switch(uVar17) {
        case 0:
          bVar18 = *(byte *)(plVar26 + 0x58) & 0xf8 | 2;
          break;
        case 2:
          bVar18 = *(byte *)(plVar26 + 0x58) & 0xf8 | 1;
          break;
        default:
          goto switchD_0326faa8_default;
        }
        *(byte *)(plVar26 + 0x58) = bVar18;
switchD_0326faa8_default:
        *(undefined4 *)(plVar26 + 0x56) = uVar17;
        FUN_03421d30(*(undefined8 *)plVar26[0x5c],
                     *(undefined8 *)(plVar26[0x5e] + (ulong)(1 < *(uint *)(plVar26 + 0x5d)) * 8),
                     &local_88);
        plVar27 = *(long **)(plVar26[0x5e] + (ulong)(4 < *(uint *)(plVar26 + 0x5d)) * 0x20);
        if (plVar27 != (long *)0x0) {
          fVar29 = (float)local_90;
          puVar4 = PTR_DAT_04bc4f00 + 0x10;
          local_a8 = 7;
          local_b0 = puVar4;
          (**(code **)(*plVar27 + 0x20))(plVar27,&local_b0);
          fVar28 = (float)(**(code **)(plVar27[3] + 0x90))(plVar27[1]);
          if (fVar28 != fVar29) {
            local_a8 = 0x14;
            local_b0 = puVar4;
            (**(code **)(*plVar27 + 0x18))(plVar27,&local_b0);
            (**(code **)(plVar27[3] + 0x158))(fVar29,plVar27[1]);
          }
        }
        puVar4 = PTR_DAT_04bb43c0;
        lVar24 = 0x18;
        if (*(uint *)(plVar26 + 0x5d) < 4) {
          lVar24 = 0;
        }
        plVar27 = *(long **)(plVar26[0x5e] + lVar24);
        if (plVar27 != (long *)0x0) {
          lVar25 = *(long *)PTR_DAT_04bb43c0;
          uVar11 = FUN_0277d6c4(&local_88);
          lVar24 = *(long *)puVar4;
          fVar28 = 0.0;
          if (lVar24 != 0) {
            lVar25 = *(long *)(lVar25 + 0x57e58);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
            if ((uVar11 < *(uint *)(lVar25 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
              local_a0 = 0;
              local_a8 = local_88;
              uStack_a4 = uStack_84;
              local_b0 = puVar3;
              uVar11 = FUN_0277d6c4(&local_a8);
              if (*(long *)PTR_DAT_04bb43c0 != 0) {
                lVar24 = *(long *)(lVar24 + 0x57e58);
                uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                if ((uVar11 < *(uint *)(lVar24 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
                  lVar24 = *(long *)PTR_DAT_04bc0428;
                  uVar11 = FUN_0277d6c4(&local_88);
                  uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                  if (uVar11 < *(uint *)(lVar24 + 0x1d8)) {
                    lVar24 = *(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar11 * 8);
                    if (lVar24 != 0) {
                      local_a0 = lVar24;
                    }
                  }
                }
              }
              iVar12 = FUN_01afcfa0(&local_b0);
              if ((iVar12 == 0) ||
                 (puVar15 = (ushort *)FUN_01afd600(&local_b0), puVar15 == (ushort *)0x0)) {
                local_94 = 0;
              }
              else {
                uVar11 = *puVar15 >> 3 & 3;
                local_94 = 0;
                if (uVar11 != 3) {
                  local_94 = uVar11;
                }
              }
              fVar29 = 2.0;
              if (local_94 != 2) {
                fVar29 = 0.0;
              }
              fVar28 = 1.0;
              if (local_94 != 1) {
                fVar28 = fVar29;
              }
            }
          }
          puVar4 = PTR_DAT_04bc4f00 + 0x10;
          local_a8 = 7;
          local_b0 = puVar4;
          (**(code **)(*plVar27 + 0x20))(plVar27,&local_b0);
          fVar29 = (float)(**(code **)(plVar27[3] + 0x90))(plVar27[1]);
          if (fVar28 != fVar29) {
            local_a8 = 0x14;
            local_b0 = puVar4;
            (**(code **)(*plVar27 + 0x18))(plVar27,&local_b0);
            (**(code **)(plVar27[3] + 0x158))(fVar28,plVar27[1]);
          }
        }
        lVar24 = 0x30;
        if (*(uint *)(plVar26 + 0x5d) < 7) {
          lVar24 = 0;
        }
        plVar26 = *(long **)(plVar26[0x5e] + lVar24);
        if (plVar26 != (long *)0x0) {
          uVar17 = 0x3f800000;
          if (local_8c != 4) {
            uVar17 = 0;
          }
          local_a8 = 0x14;
          local_b0 = puVar2;
          (**(code **)(*plVar26 + 0x18))(plVar26,&local_b0);
          (**(code **)(plVar26[3] + 0x158))(uVar17,plVar26[1]);
        }
        pbVar23 = PTR_DAT_04bc4d98;
      }
LAB_0326f7a8:
      uVar22 = uVar22 + 1;
    } while (uVar6 != uVar22);
  }
  FUN_0326fe40(param_1,param_2,0);
  return;
}

