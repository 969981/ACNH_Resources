
void FUN_0288d740(long param_1,long *param_2,int param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined2 *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  uint *puVar15;
  int iVar16;
  uint local_cc;
  uint uStack_c8;
  uint local_c4;
  uint uStack_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  uint local_b4;
  undefined **local_b0;
  uint *puStack_a8;
  undefined4 local_a0;
  undefined1 local_9c [31];
  undefined1 local_7d;
  undefined *local_78;
  undefined2 local_70;
  undefined2 local_6e;
  undefined4 local_6c;
  undefined8 local_68;
  
  puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar7 = *puVar8 ^ *puVar8 << 0xb;
  uVar13 = puVar8[3];
  *puVar8 = puVar8[1];
  puVar8[1] = puVar8[2];
  uVar5 = uVar7 ^ uVar13;
  uVar7 = uVar7 >> 8 ^ uVar13 >> 0x13 ^ uVar5;
  puVar8[2] = uVar13;
  puVar8[3] = uVar7;
  puVar4 = PTR_DAT_04bb43c0;
  local_cc = (uVar7 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
  uStack_c8 = (local_cc ^ local_cc >> 0x1e) * 0x6c078965 + 2;
  local_c4 = (uStack_c8 ^ uStack_c8 >> 0x1e) * 0x6c078965 + 3;
  uStack_c0 = (local_c4 ^ local_c4 >> 0x1e) * 0x6c078965 + 4;
  if (param_2 != (long *)0x0) {
    iVar16 = 0;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    ppuVar2 = (undefined **)(PTR_DAT_04bb2028 + 0x10);
    do {
      lVar9 = (**(code **)(*param_2 + 0x20))(param_2);
      lVar14 = 0;
      iVar12 = 0;
      do {
        puVar8 = (uint *)(lVar9 + lVar14);
        lVar14 = lVar14 + 4;
        uVar7 = *puVar8 - (*puVar8 >> 1 & 0x55555555);
        uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
        uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
        uVar7 = uVar7 + (uVar7 >> 8);
        iVar12 = (uVar7 + (uVar7 >> 0x10) & 0x3f) + iVar12;
      } while (lVar14 != 0x754);
      if (iVar12 == 0) {
        return;
      }
      uVar7 = 0;
      do {
        lVar9 = *(long *)puVar4;
        puVar3 = (undefined2 *)(param_1 + ((long)((ulong)uVar7 << 0x20) >> 0x1d));
        uVar5 = FUN_0277d6c4(puVar3);
        lVar14 = *(long *)puVar4;
        if (lVar14 != 0) {
          lVar9 = *(long *)(lVar9 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            lVar9 = param_1 + (long)(int)uVar7 * 8;
            local_70 = *puVar3;
            local_68 = 0;
            local_78 = PTR_DAT_04bc0510 + 0x10;
            local_6e = *(undefined2 *)(lVar9 + 2);
            local_6c = *(undefined4 *)(lVar9 + 4);
            uVar5 = FUN_0277d6c4(&local_70);
            if (*(long *)puVar4 != 0) {
              lVar14 = *(long *)(lVar14 + 0x57e58);
              uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
              if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
                lVar14 = *(long *)PTR_DAT_04bc0428;
                uVar5 = FUN_0277d6c4(puVar3);
                uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
                if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
                   (puVar8 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8),
                   puVar8 != (uint *)0x0)) {
                  uVar5 = *puVar8;
                  uVar13 = 0;
                  if ((uVar5 != 0) && (puVar8 != (uint *)(ulong)uVar5)) {
                    puVar15 = (uint *)((long)puVar8 - (long)(ulong)uVar5);
                    uVar13 = 0;
                    if (*puVar15 != 0) {
                      uVar5 = puVar15[1];
                      if ((uVar5 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
                        lVar14 = 0xc;
                        if (*(char *)((long)puVar15 + 10) != '\0') {
                          lVar14 = 0x1c;
                        }
                        lVar14 = (long)puVar15 + lVar14 + (ulong)(ushort)puVar15[2] * 8;
                        if (lVar14 != 0) {
                          uVar13 = 0;
                          if ((ulong)uVar5 != 0) {
                            uVar13 = (uint)((ulong)((long)puVar8 - lVar14) / (ulong)uVar5);
                          }
                          if (*puVar15 <= uVar13) {
                            uVar13 = 0xffffffff;
                          }
                          if ((uVar13 < *(uint *)PTR_DAT_04bc0020) &&
                             (uVar13 = (uint)*(ushort *)
                                              (*(long *)(PTR_DAT_04bc0020 + 8) +
                                              (long)(int)uVar13 * 2), uVar13 < 0x5b6))
                          goto LAB_0288da60;
                        }
                      }
                      uVar13 = 0;
                    }
                  }
LAB_0288da60:
                  local_b0 = (undefined **)CONCAT44(local_b0._4_4_,uVar13);
                  if (uVar13 == 0) goto LAB_0288d8d0;
                  uVar5 = *puVar8;
                  local_b4 = 0;
                  if ((uVar5 != 0) && (puVar8 != (uint *)(ulong)uVar5)) {
                    puVar15 = (uint *)((long)puVar8 - (long)(ulong)uVar5);
                    local_b4 = 0;
                    if (*puVar15 != 0) {
                      uVar5 = puVar15[1];
                      if ((uVar5 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
                        lVar14 = 0xc;
                        if (*(char *)((long)puVar15 + 10) != '\0') {
                          lVar14 = 0x1c;
                        }
                        lVar14 = (long)puVar15 + lVar14 + (ulong)(ushort)puVar15[2] * 8;
                        if (lVar14 != 0) {
                          uVar13 = 0;
                          if ((ulong)uVar5 != 0) {
                            uVar13 = (uint)((ulong)((long)puVar8 - lVar14) / (ulong)uVar5);
                          }
                          if (*puVar15 <= uVar13) {
                            uVar13 = 0xffffffff;
                          }
                          if ((uVar13 < *(uint *)PTR_DAT_04bc0020) &&
                             (local_b4 = (uint)*(ushort *)
                                                (*(long *)(PTR_DAT_04bc0020 + 8) +
                                                (long)(int)uVar13 * 2), local_b4 < 0x5b6))
                          goto LAB_0288db08;
                        }
                      }
                      local_b4 = 0;
                    }
                  }
LAB_0288db08:
                  uVar5 = 0;
                  puStack_a8 = &local_b4;
                  local_b0 = &PTR_FUN_049ff858;
                  do {
                    (**(code **)(*param_2 + 0x10))(&local_bc,param_2,uVar5);
                    lVar14 = (**(code **)(*param_2 + 0x20))(param_2);
                    uVar13 = 1 << (ulong)(uVar5 & 0x1f);
                    if ((*(uint *)(lVar14 + (ulong)(uVar5 >> 5) * 4) & uVar13) != 0) {
                      lVar14 = *(long *)puVar4;
                      uVar6 = FUN_0277d6c4(&local_bc);
                      if (*(long *)puVar4 != 0) {
                        lVar14 = *(long *)(lVar14 + 0x57e58);
                        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
                        if (((uVar6 < *(uint *)(lVar14 + 0x1d8)) &&
                            (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) &&
                           (uVar10 = (*(code *)*local_b0)(&local_b0,&local_bc), (uVar10 & 1) == 0))
                        goto LAB_0288db44;
                      }
                      lVar14 = (**(code **)(*param_2 + 0x18))(param_2);
                      lVar9 = (ulong)(uVar5 >> 5) * 4;
                      *(uint *)(lVar14 + lVar9) = *(uint *)(lVar14 + lVar9) & (uVar13 ^ 0xffffffff);
                    }
LAB_0288db44:
                    uVar5 = uVar5 + 1;
                  } while (uVar5 != 15000);
                  goto LAB_0288d8d0;
                }
              }
            }
            local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
          }
        }
LAB_0288d8d0:
        uVar7 = uVar7 + 1;
      } while (uVar7 != 0x20);
      lVar9 = (**(code **)(*param_2 + 0x20))(param_2);
      lVar14 = 0;
      iVar12 = 0;
      do {
        puVar8 = (uint *)(lVar9 + lVar14);
        lVar14 = lVar14 + 4;
        uVar7 = *puVar8 - (*puVar8 >> 1 & 0x55555555);
        uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
        uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
        uVar7 = uVar7 + (uVar7 >> 8);
        iVar12 = (uVar7 + (uVar7 >> 0x10) & 0x3f) + iVar12;
      } while (lVar14 != 0x754);
      if (iVar12 == 0) {
        local_bc = *(undefined4 *)PTR_DAT_04bb37e0;
        local_b8 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      }
      else {
        lVar9 = (**(code **)(*param_2 + 0x20))(param_2);
        lVar14 = 0;
        uVar7 = 0;
        do {
          puVar8 = (uint *)(lVar9 + lVar14);
          lVar14 = lVar14 + 4;
          uVar5 = *puVar8 - (*puVar8 >> 1 & 0x55555555);
          uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
          uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
          uVar5 = uVar5 + (uVar5 >> 8);
          uVar7 = (uVar5 + (uVar5 >> 0x10) & 0x3f) + uVar7;
        } while (lVar14 != 0x754);
        uVar5 = local_cc ^ local_cc << 0xb;
        local_cc = uStack_c8;
        uStack_c8 = local_c4;
        uVar5 = uVar5 >> 8 ^ uStack_c0 >> 0x13 ^ uVar5 ^ uStack_c0;
        local_c4 = uStack_c0;
        uStack_c0 = uVar5;
        FUN_00889f80(&local_bc,param_2,(int)((ulong)uVar5 * (ulong)uVar7 >> 0x20) + 1);
        FUN_01a4c66c(&local_cc,&local_bc);
      }
      lVar9 = *(long *)puVar4;
      uVar7 = FUN_0277d6c4(&local_bc);
      lVar14 = *(long *)puVar4;
      if (lVar14 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          uVar10 = 0;
          do {
            if (*(short *)(param_1 + (-(uVar10 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3)) == -2)
            {
              lVar9 = (long)(int)uVar10;
LAB_0288dda4:
              puVar3 = (undefined2 *)(param_1 + lVar9 * 8);
              local_68 = 0;
              *puVar3 = (undefined2)local_bc;
              *(undefined1 *)((long)puVar3 + 3) = local_bc._3_1_;
              *(undefined4 *)(puVar3 + 2) = local_b8;
              local_70 = (undefined2)local_bc;
              local_6c = local_b8;
              *(undefined1 *)(puVar3 + 1) = local_bc._2_1_;
              local_6e = (undefined2)((uint)local_bc >> 0x10);
              local_78 = puVar1;
              uVar7 = FUN_0277d6c4(&local_70);
              if (*(long *)puVar4 == 0) {
LAB_0288df14:
                local_b4 = 0xbc;
                local_b0 = ppuVar2;
              }
              else {
                lVar14 = *(long *)(lVar14 + 0x57e58);
                uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
                if ((*(uint *)(lVar14 + 0x1d8) <= uVar7) ||
                   (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) == 0))
                goto LAB_0288df14;
                lVar14 = *(long *)PTR_DAT_04bc0428;
                uVar7 = FUN_0277d6c4(puVar3);
                uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
                if (*(uint *)(lVar14 + 0x1d8) <= uVar7) goto LAB_0288df14;
                puVar8 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8);
                local_b0 = (undefined **)(PTR_DAT_04bb2028 + 0x10);
                if (puVar8 == (uint *)0x0) {
                  local_b4 = 0xbc;
                }
                else {
                  uVar7 = *puVar8;
                  local_b4 = 0;
                  if ((uVar7 != 0) && (puVar8 != (uint *)(ulong)uVar7)) {
                    puVar15 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
                    local_b4 = 0;
                    if (*puVar15 != 0) {
                      uVar7 = puVar15[1];
                      if ((uVar7 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
                        lVar14 = 0xc;
                        if (*(char *)((long)puVar15 + 10) != '\0') {
                          lVar14 = 0x1c;
                        }
                        lVar14 = (long)puVar15 + lVar14 + (ulong)(ushort)puVar15[2] * 8;
                        if (lVar14 != 0) {
                          uVar5 = 0;
                          if ((ulong)uVar7 != 0) {
                            uVar5 = (uint)((ulong)((long)puVar8 - lVar14) / (ulong)uVar7);
                          }
                          if (*puVar15 <= uVar5) {
                            uVar5 = 0xffffffff;
                          }
                          if ((uVar5 < *(uint *)PTR_DAT_04bc00c8) &&
                             (local_b4 = (uint)*(ushort *)
                                                (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                (long)(int)uVar5 * 2), local_b4 < 0xbd))
                          goto LAB_0288df38;
                        }
                      }
                      local_b4 = 0;
                    }
                  }
                }
              }
LAB_0288df38:
              local_7d = 0;
              local_9c[0] = 0;
              local_a0 = 0x20;
              puVar11 = &DAT_0407ebb1;
              if (local_b4 < 0xbd) {
                puVar11 = *(undefined8 **)(PTR_DAT_04bb8f90 + (ulong)local_b4 * 8 + 0x830);
              }
              puStack_a8 = (uint *)local_9c;
              FUN_038d1270(&local_b0,"Shop.CommuneShoes.%s",puVar11);
              break;
            }
            lVar9 = (uVar10 << 0x20) + 0x100000000;
            if (*(short *)(param_1 + (lVar9 >> 0x1d)) == -2) {
              lVar9 = lVar9 >> 0x20;
              goto LAB_0288dda4;
            }
            uVar7 = (int)uVar10 + 2;
            uVar10 = (ulong)uVar7;
          } while (uVar7 != 0x20);
        }
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 != param_3);
  }
  return;
}

