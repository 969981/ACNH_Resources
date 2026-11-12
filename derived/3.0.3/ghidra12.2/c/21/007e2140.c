
void FUN_007e2140(undefined4 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined *puVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  uint *puVar19;
  undefined *local_f8;
  uint local_f0;
  undefined4 uStack_ec;
  uint *local_e8;
  uint local_e0;
  undefined4 uStack_dc;
  undefined **local_d8;
  undefined **local_d0;
  undefined *puStack_c8;
  int local_c0;
  int local_bc;
  undefined *local_b8;
  undefined *puStack_b0;
  int local_a8;
  int iStack_a4;
  undefined *local_a0;
  undefined4 local_98;
  int iStack_94;
  undefined *local_90;
  uint local_88;
  undefined4 uStack_84;
  byte local_80;
  undefined4 local_74;
  uint local_70;
  undefined4 local_6c;
  
  local_74 = 0;
  uVar12 = FUN_02b5e950(&local_74,*param_1);
  if ((uVar12 & 1) != 0) {
    uVar12 = FUN_01383880(local_74);
    puVar10 = PTR_DAT_04bb43c0;
    uVar14 = (uint)(uVar12 >> 0x20);
    if ((uint)uVar12 != uVar14) {
      puVar2 = PTR_DAT_04bbfe68 + 0x10;
      puVar3 = (undefined4 *)(PTR_DAT_04bbbf90 + 8);
      puVar4 = PTR_DAT_04bbc1a0 + 0x10;
      puVar5 = PTR_DAT_04bb2010 + 0x10;
      puVar6 = PTR_DAT_04bc0510 + 0x10;
      do {
        uVar16 = (uint)uVar12;
        puVar7 = puVar3 + (uVar12 & 0xffffffff);
        if (0x38 < uVar16) {
          puVar7 = puVar3;
        }
        uStack_84 = *puVar7;
        local_90 = puVar2;
        local_88 = uVar16;
        local_80 = FUN_017baf44();
        local_80 = local_80 & 1;
        lVar13 = FUN_01a4fa00(&local_90);
        local_98 = *(undefined4 *)(lVar13 + 0x20);
        iStack_94 = *(int *)(lVar13 + 0x24);
        iVar1 = iStack_94 + 1;
        iVar9 = *(int *)(lVar13 + 0x10);
        local_bc = *(int *)(lVar13 + 0x14);
        local_d8 = &puStack_b0;
        local_d0 = &local_a0;
        puStack_c8 = puVar5;
        local_c0 = iVar9;
        local_b8 = puVar4;
        puStack_b0 = puVar5;
        local_a8 = iVar9;
        iStack_a4 = local_bc;
        local_a0 = puVar5;
        if (iVar1 != local_bc) {
          lVar13 = 0;
          do {
            do {
              FUN_01a50240(&local_e0,&local_90,lVar13,&puStack_c8);
              if (1 < ((local_e0 & 0xffff) + 3 & 0xffff)) {
                lVar17 = *(long *)puVar10;
                uVar11 = FUN_0277d6c4(&local_e0);
                lVar18 = *(long *)puVar10;
                if (lVar18 != 0) {
                  lVar17 = *(long *)(lVar17 + 0x57e58);
                  uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
                  if ((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
                    local_e8 = (uint *)0x0;
                    local_f0 = local_e0;
                    uStack_ec = uStack_dc;
                    local_f8 = puVar6;
                    uVar11 = FUN_0277d6c4(&local_f0);
                    if (*(long *)puVar10 == 0) {
LAB_007e23ac:
                      puVar19 = (uint *)0x0;
                    }
                    else {
                      lVar17 = *(long *)(lVar18 + 0x57e58);
                      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
                      if ((*(uint *)(lVar17 + 0x1d8) <= uVar11) ||
                         (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) == 0))
                      goto LAB_007e23ac;
                      lVar17 = *(long *)PTR_DAT_04bc0428;
                      uVar11 = FUN_0277d6c4(&local_e0);
                      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
                      if (*(uint *)(lVar17 + 0x1d8) <= uVar11) goto LAB_007e23ac;
                      puVar19 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8);
                      if (puVar19 != (uint *)0x0) {
                        local_e8 = puVar19;
                      }
                    }
                    uVar12 = FUN_01ae89e0(&local_f8);
                    if ((uVar12 & 1) == 0) {
                      local_6c = 0xac;
                      if (puVar19 == (uint *)0x0) {
                        local_70 = 0xbc;
                      }
                      else {
                        uVar11 = *puVar19;
                        local_70 = 0;
                        if ((uVar11 != 0) && (puVar19 != (uint *)(ulong)uVar11)) {
                          puVar15 = (uint *)((long)puVar19 - (long)(ulong)uVar11);
                          local_70 = 0;
                          if (*puVar15 != 0) {
                            uVar11 = puVar15[1];
                            if ((uVar11 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
                              lVar17 = 0xc;
                              if (*(char *)((long)puVar15 + 10) != '\0') {
                                lVar17 = 0x1c;
                              }
                              lVar17 = (long)puVar15 + lVar17 + (ulong)(ushort)puVar15[2] * 8;
                              if (lVar17 != 0) {
                                uVar8 = 0;
                                if ((ulong)uVar11 != 0) {
                                  uVar8 = (uint)((ulong)((long)puVar19 - lVar17) / (ulong)uVar11);
                                }
                                if (*puVar15 <= uVar8) {
                                  uVar8 = 0xffffffff;
                                }
                                if ((uVar8 < *(uint *)PTR_DAT_04bc00c8) &&
                                   (local_70 = (uint)*(ushort *)
                                                      (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                      (long)(int)uVar8 * 2), local_70 < 0xbd))
                                goto LAB_007e245c;
                              }
                            }
                            local_70 = 0;
                          }
                        }
                      }
LAB_007e245c:
                      if (local_70 != 0xac) {
                        uVar12 = FUN_01b01270(&local_e0);
                        if ((uVar12 & 1) != 0) {
                          FUN_01a50cb0(&local_90,lVar13,&puStack_c8);
                          FUN_01a50970(&local_90,lVar13,&local_e0,&puStack_c8);
                        }
                        goto LAB_007e2480;
                      }
                    }
                    FUN_01a50cb0(&local_90,lVar13,&puStack_c8);
                  }
                }
              }
LAB_007e2480:
              lVar13 = lVar13 + 1;
            } while (lVar13 != 8);
            if (local_c0 < *(int *)(local_d0 + 1)) {
              local_c0 = local_c0 + 1;
            }
            else {
              local_c0 = *(int *)(local_d8 + 1);
              local_bc = local_bc + 1;
            }
            lVar13 = 0;
          } while ((iVar9 != local_c0) || (iVar1 != local_bc));
        }
        uVar11 = 0x39;
        if ((int)uVar16 < 0x39) {
          uVar11 = uVar16 + 1;
        }
        uVar12 = (ulong)uVar11;
      } while (uVar11 != uVar14);
    }
  }
  return;
}

