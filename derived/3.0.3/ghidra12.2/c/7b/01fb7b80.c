
undefined8 FUN_01fb7b80(undefined8 *param_1,long param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  ushort uVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  float *pfVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint *puVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined8 uVar17;
  uint local_ec;
  undefined *local_e8;
  float local_e0;
  float local_dc;
  uint *local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  long local_c8;
  long local_c0;
  undefined *local_b8;
  int local_b0;
  int local_ac;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined *puStack_80;
  undefined8 local_78;
  
  puVar8 = PTR_DAT_04bb43c0;
  local_c0 = param_3 + 0x18;
  local_78 = 0;
  local_b8 = PTR_DAT_04bb2010 + 0x10;
  local_88 = 0;
  uVar17 = *param_1;
  local_98 = 0;
  local_a8 = PTR_DAT_04bbc1a0 + 0x10;
  local_c8 = param_3 + 8;
  iVar4 = *(int *)(param_3 + 0x10);
  local_ac = *(int *)(param_3 + 0x14);
  iVar1 = *(int *)(param_3 + 0x24) + 1;
  if (iVar1 != local_ac) {
    puVar2 = PTR_DAT_04bc0510 + 0x10;
    local_b0 = iVar4;
    puStack_a0 = local_b8;
    puStack_90 = local_b8;
    puStack_80 = local_b8;
    do {
      local_e0 = (float)local_ac * 5.0 + 2.5;
      local_e8 = (undefined *)(ulong)(uint)((float)local_b0 * 5.0 + 2.5);
      iVar9 = FUN_01318f40(param_1[1],&local_e8);
      if (iVar9 == 0) {
        local_d0 = 0;
        uStack_cc = 1;
        pfVar11 = (float *)FUN_01a5190c(param_1[2],1,&local_b8,&puStack_80);
        uVar12 = FUN_0277d7b4(pfVar11,param_1[3]);
        if (((uVar12 & 1) == 0) && (uVar12 = FUN_0277e294(pfVar11), (uVar12 & 1) != 0)) {
          local_e8 = (undefined *)CONCAT44(local_e8._4_4_,1);
          uVar12 = FUN_01fa981c(uVar17,pfVar11,&puStack_80,&local_e8);
          if ((uVar12 & 1) != 0) {
            lVar16 = *(long *)puVar8;
            local_e8 = PTR_DAT_04bc0510 + 0x10;
            local_e0 = *pfVar11;
            local_dc = pfVar11[1];
            local_d8 = (uint *)0x0;
            uVar10 = FUN_0277d6c4(&local_e0);
            if (*(long *)puVar8 != 0) {
              lVar16 = *(long *)(lVar16 + 0x57e58);
              uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
              if ((uVar10 < *(uint *)(lVar16 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                lVar16 = *(long *)PTR_DAT_04bc0428;
                uVar10 = FUN_0277d6c4(pfVar11);
                uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
                if ((uVar10 < *(uint *)(lVar16 + 0x1d8)) &&
                   (puVar14 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar10 * 8),
                   puVar14 != (uint *)0x0)) {
                  local_d8 = puVar14;
                }
              }
            }
            uVar13 = FUN_01afb480(&local_e8,&local_a8);
            local_88 = CONCAT44(local_88._4_4_ + local_78._4_4_,(int)local_88 + (int)local_78);
            local_98 = CONCAT44(local_98._4_4_ + local_78._4_4_,(int)local_98 + (int)local_78);
            if (local_d8 == (uint *)0x0) {
LAB_01fb7e34:
              local_ec = 0;
            }
            else {
              uVar10 = *local_d8;
              local_ec = 0;
              if ((uVar10 != 0) && (local_d8 != (uint *)(ulong)uVar10)) {
                puVar14 = (uint *)((long)local_d8 - (long)(ulong)uVar10);
                local_ec = 0;
                if (*puVar14 != 0) {
                  uVar10 = puVar14[1];
                  if ((uVar10 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
                    lVar16 = 0xc;
                    if (*(char *)((long)puVar14 + 10) != '\0') {
                      lVar16 = 0x1c;
                    }
                    lVar16 = (long)puVar14 + lVar16 + (ulong)(ushort)puVar14[2] * 8;
                    if (lVar16 != 0) {
                      uVar3 = 0;
                      if ((ulong)uVar10 != 0) {
                        uVar3 = (uint)((ulong)((long)local_d8 - lVar16) / (ulong)uVar10);
                      }
                      if (*puVar14 <= uVar3) {
                        uVar3 = 0xffffffff;
                      }
                      if ((uVar3 < *(uint *)PTR_DAT_04bc0110) &&
                         (uVar7 = *(ushort *)
                                   (*(long *)(PTR_DAT_04bc0110 + 8) + (long)(int)uVar3 * 2),
                         local_ec = (uint)uVar7, uVar7 < 9)) goto LAB_01fb7e38;
                    }
                  }
                  goto LAB_01fb7e34;
                }
              }
            }
LAB_01fb7e38:
            uVar12 = FUN_01fb0064(uVar13,param_1[1],pfVar11,&local_a8,&local_ec);
            if ((uVar12 & 1) != 0) {
              puVar15 = &uStack_cc;
              goto LAB_01fb80ac;
            }
          }
        }
        pfVar11 = (float *)FUN_01a5190c(param_1[2],0,&local_b8,&puStack_80);
        uVar12 = FUN_0277d7b4(pfVar11,param_1[3]);
        if (((uVar12 & 1) == 0) && (uVar12 = FUN_0277e294(pfVar11), (uVar12 & 1) != 0)) {
          local_e8 = (undefined *)((ulong)local_e8 & 0xffffffff00000000);
          uVar12 = FUN_01fa981c(uVar17,pfVar11,&puStack_80,&local_e8);
          if ((uVar12 & 1) != 0) {
            lVar16 = *(long *)puVar8;
            local_e0 = *pfVar11;
            local_dc = pfVar11[1];
            local_d8 = (uint *)0x0;
            local_e8 = puVar2;
            uVar10 = FUN_0277d6c4(&local_e0);
            if (*(long *)puVar8 != 0) {
              lVar16 = *(long *)(lVar16 + 0x57e58);
              uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
              if ((uVar10 < *(uint *)(lVar16 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                lVar16 = *(long *)PTR_DAT_04bc0428;
                uVar10 = FUN_0277d6c4(pfVar11);
                uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
                if ((uVar10 < *(uint *)(lVar16 + 0x1d8)) &&
                   (puVar14 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar10 * 8),
                   puVar14 != (uint *)0x0)) {
                  local_d8 = puVar14;
                }
              }
            }
            uVar13 = FUN_01afb480(&local_e8,&local_a8);
            local_88 = CONCAT44(local_88._4_4_ + local_78._4_4_,(int)local_88 + (int)local_78);
            local_98 = CONCAT44(local_98._4_4_ + local_78._4_4_,(int)local_98 + (int)local_78);
            if (local_d8 == (uint *)0x0) {
LAB_01fb800c:
              local_ec = 0;
            }
            else {
              uVar10 = *local_d8;
              local_ec = 0;
              if ((uVar10 != 0) && (local_d8 != (uint *)(ulong)uVar10)) {
                puVar14 = (uint *)((long)local_d8 - (long)(ulong)uVar10);
                local_ec = 0;
                if (*puVar14 != 0) {
                  uVar10 = puVar14[1];
                  if ((uVar10 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
                    lVar16 = 0xc;
                    if (*(char *)((long)puVar14 + 10) != '\0') {
                      lVar16 = 0x1c;
                    }
                    lVar16 = (long)puVar14 + lVar16 + (ulong)(ushort)puVar14[2] * 8;
                    if (lVar16 != 0) {
                      uVar3 = 0;
                      if ((ulong)uVar10 != 0) {
                        uVar3 = (uint)((ulong)((long)local_d8 - lVar16) / (ulong)uVar10);
                      }
                      if (*puVar14 <= uVar3) {
                        uVar3 = 0xffffffff;
                      }
                      if ((uVar3 < *(uint *)PTR_DAT_04bc0110) &&
                         (uVar7 = *(ushort *)
                                   (*(long *)(PTR_DAT_04bc0110 + 8) + (long)(int)uVar3 * 2),
                         local_ec = (uint)uVar7, uVar7 < 9)) goto LAB_01fb8010;
                    }
                  }
                  goto LAB_01fb800c;
                }
              }
            }
LAB_01fb8010:
            uVar12 = FUN_01fb0064(uVar13,param_1[1],pfVar11,&local_a8,&local_ec);
            if ((uVar12 & 1) != 0) {
              puVar15 = &local_d0;
LAB_01fb80ac:
              *(undefined4 *)(param_2 + 4) = 1;
              uVar5 = *puVar15;
              *(undefined2 *)(param_2 + 0xc) = *(undefined2 *)pfVar11;
              *(undefined1 *)(param_2 + 0xe) = *(undefined1 *)((long)pfVar11 + 2);
              *(undefined1 *)(param_2 + 0xf) = *(undefined1 *)((long)pfVar11 + 3);
              fVar6 = pfVar11[1];
              *(undefined4 *)(param_2 + 0x40) = uVar5;
              *(int *)(param_2 + 0x28) = (int)local_98;
              *(int *)(param_2 + 0x2c) = local_98._4_4_;
              *(float *)(param_2 + 0x10) = fVar6;
              *(int *)(param_2 + 0x38) = (int)local_88;
              *(int *)(param_2 + 0x3c) = local_88._4_4_;
              return 1;
            }
          }
        }
      }
      if (local_b0 < *(int *)(local_c0 + 8)) {
        local_b0 = local_b0 + 1;
      }
      else {
        local_b0 = *(int *)(local_c8 + 8);
        local_ac = local_ac + 1;
      }
    } while ((iVar4 != local_b0) || (iVar1 != local_ac));
  }
  return 0;
}

