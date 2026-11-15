
/* WARNING: Removing unreachable block (ram,0x021f2c0c) */

undefined8
FUN_021f2630(undefined8 *param_1,long param_2,float *param_3,ushort *param_4,float *param_5,
            undefined1 *param_6,ulong param_7)

{
  undefined ***pppuVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  undefined8 *puVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint local_12c;
  undefined **local_128 [2];
  long local_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 local_f0;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  byte local_d8;
  byte local_cc [4];
  undefined *local_c8;
  undefined *puStack_c0;
  uint local_b8;
  uint uStack_b4;
  undefined *local_b0;
  int local_a8;
  int local_a4;
  uint local_9c;
  
  puVar6 = PTR_DAT_04bb43c0;
  puVar5 = PTR_DAT_04bb2010;
  local_b8 = 0;
  uStack_b4 = 0;
  local_cc[0] = 0;
  local_c8 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_c0 = PTR_DAT_04bb2010 + 0x10;
  local_a8 = 0;
  local_a4 = 0;
  lVar17 = *(long *)PTR_DAT_04bb43c0;
  local_b0 = puStack_c0;
  uVar8 = FUN_0277d6c4();
  if (*(long *)puVar6 != 0) {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar17 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      uVar10 = FUN_01517328(&local_c8,local_cc,param_2 + 8,param_1);
      puVar7 = PTR_DAT_04bc0510;
      iVar9 = (local_a8 - local_b8) + 1;
      if (iVar9 + iVar9 * (local_a4 - uStack_b4) == 8) {
        fVar23 = (float)local_a8;
        fVar24 = (float)local_a4;
        local_128[0] = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        fVar21 = (float)(int)local_b8;
        fVar22 = (float)(int)uStack_b4;
        fVar25 = *param_3;
        fVar26 = param_3[2];
        local_118 = 0;
        local_128[1] = (undefined **)*param_1;
        lVar17 = *(long *)puVar6;
        uVar8 = FUN_0277d6c4(local_128 + 1);
        if (*(long *)puVar6 != 0) {
          lVar17 = *(long *)(lVar17 + 0x57e58);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar17 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
            lVar17 = *(long *)PTR_DAT_04bc0428;
            uVar8 = FUN_0277d6c4(param_1);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if (uVar8 < *(uint *)(lVar17 + 0x1d8)) {
              lVar17 = *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8);
              if (lVar17 != 0) {
                local_118 = lVar17;
              }
            }
          }
        }
        fVar21 = (fVar21 * 5.0 + fVar23 * 5.0 + 5.0) * 0.5;
        fVar22 = (fVar22 * 5.0 + fVar24 * 5.0 + 5.0) * 0.5;
        uVar8 = FUN_01ae98d0(local_128);
        if ((uVar8 | 2) == 2) {
          fVar25 = fVar25 - fVar21;
          fVar23 = 0.0;
          fVar26 = SQRT(fVar25 * fVar25 + 0.0);
          if (0.0 < fVar26) {
            fVar26 = 5.0 / fVar26;
            fVar25 = fVar25 * fVar26;
            fVar23 = fVar26 * 0.0;
          }
          if (5.0 <= SQRT(fVar23 * fVar23 + fVar25 * fVar25)) {
            fVar21 = fVar21 + fVar25;
            fVar22 = fVar22 + fVar23;
          }
        }
        else {
          fVar26 = fVar26 - fVar22;
          fVar25 = 0.0;
          fVar23 = SQRT(fVar26 * fVar26 + 0.0);
          if (0.0 < fVar23) {
            fVar23 = 5.0 / fVar23;
            fVar25 = fVar23 * 0.0;
            fVar26 = fVar26 * fVar23;
          }
          if (5.0 <= SQRT(fVar26 * fVar26 + fVar25 * fVar25)) {
            fVar21 = fVar21 + fVar25;
            fVar22 = fVar22 + fVar26;
          }
        }
        local_b8 = (int)((float)(int)(fVar21 + -2.5) / 5.0) - (uint)(fVar21 + -2.5 < 0.0);
        uStack_b4 = (int)((float)(int)(fVar22 + -2.5) / 5.0) - (uint)(fVar22 + -2.5 < 0.0);
        local_a8 = local_b8 + 1;
        local_a4 = uStack_b4 + 1;
      }
      local_128[1] = (undefined **)*param_1;
      lVar17 = *(long *)puVar6;
      local_128[0] = (undefined **)(puVar7 + 0x10);
      local_118 = 0;
      uVar8 = FUN_0277d6c4(local_128 + 1);
      if (*(long *)puVar6 != 0) {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar17 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
          lVar17 = *(long *)PTR_DAT_04bc0428;
          uVar8 = FUN_0277d6c4(param_1);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if (uVar8 < *(uint *)(lVar17 + 0x1d8)) {
            lVar17 = *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8);
            if (lVar17 != 0) {
              local_118 = lVar17;
            }
          }
        }
      }
      iVar9 = FUN_01ae7550(local_128);
      local_e8 = (undefined *)CONCAT44(local_e8._4_4_,iVar9);
      if (iVar9 - 1U < 6) {
        local_e0 = 0;
        lVar17 = *(long *)PTR_DAT_04bb2720;
        if (lVar17 == 0) {
          puVar19 = &DAT_055c04a0;
        }
        else {
          puVar19 = &DAT_055c04a0;
          if (*(long *)(lVar17 + 0x330) != 0) {
            puVar19 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
            iVar9 = FUN_006bd550(*puVar19,0);
            puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar9 != 0x758f7eaf) {
              puVar19 = &DAT_055c04a0;
            }
          }
        }
        local_dc = *(undefined4 *)(puVar19 + 7);
        local_d8 = FUN_017baf44();
        local_d8 = local_d8 & 1;
        local_e8 = PTR_DAT_04bb3140 + 0x10;
        uVar11 = FUN_01a4fafc(&local_e8,1,&local_c8);
        uVar8 = local_b8;
        if ((uVar11 & 1) == 0) {
          return 0;
        }
        local_128[0] = &puStack_c0;
        local_128[1] = &local_b0;
        local_118 = (long)(puVar5 + 0x10);
        local_110._0_4_ = local_b8;
        local_110._4_4_ = uStack_b4;
        uVar15 = local_a4 + 1;
        if (uVar15 != uStack_b4) {
          do {
            uVar11 = FUN_01a4fd6c(&local_e8,1,&local_118,1);
            if ((uVar11 & 1) == 0) {
              return 0;
            }
            if ((int)(uint)local_110 < *(int *)(local_128[1] + 1)) {
              local_110._0_4_ = (uint)local_110 + 1;
            }
            else {
              local_110._4_4_ = local_110._4_4_ + 1;
              local_110._0_4_ = *(uint *)(local_128[0] + 1);
            }
          } while (uVar8 != (uint)local_110 || uVar15 != local_110._4_4_);
        }
      }
      if ((uVar10 & 1) == 0) {
        return 0;
      }
      goto LAB_021f2884;
    }
  }
  uVar10 = FUN_016d948c(param_1);
  if ((uVar10 & 1) == 0) {
    return 0;
  }
  local_b8 = *(uint *)(param_2 + 0x10);
  uStack_b4 = *(uint *)(param_2 + 0x14);
  local_a8 = *(int *)(param_2 + 0x20);
  local_a4 = *(int *)(param_2 + 0x24);
  local_cc[0] = 0xff;
LAB_021f2884:
  local_128[1] = (undefined **)0x300000001;
  local_110 = &DAT_100000003;
  local_100 = 0xffffffff00000001;
  local_f0 = 0x1ffffffff;
  uVar8 = local_a4 + 1;
  if (uVar8 == uStack_b4) {
    uVar14 = 0;
    uVar13 = 0;
    local_12c._0_1_ = 0;
  }
  else {
    local_12c = 0;
    uVar2 = param_4[1];
    uVar13 = 0;
    uVar14 = 0;
    uVar3 = *param_4;
    fVar21 = 3.4028235e+38;
    lVar17 = *(long *)PTR_DAT_04bb3968;
    uVar16 = uStack_b4 - 1;
    uVar15 = local_b8;
LAB_021f29e0:
    do {
      if ((int)uVar16 < (int)uStack_b4) {
        uVar20 = 0;
        local_9c = 0;
        do {
          if (local_9c < 4) {
            local_e8 = (undefined *)CONCAT44(local_e8._4_4_,local_9c);
            if ((local_9c + 7 < 0xf) &&
               (local_e8 = (undefined *)CONCAT44(local_e8._4_4_,local_9c),
               (local_cc[0] >> (ulong)(local_9c & 7) & 1) != 0)) {
              local_e8 = (undefined *)CONCAT44(local_e8._4_4_,local_9c);
              pppuVar1 = local_128 + (ulong)local_9c * 2;
              if (3 < local_9c) {
                pppuVar1 = local_128;
              }
              uVar12 = *(int *)(pppuVar1 + 1) + uVar15;
              if (((uint)uVar3 < (uVar12 & 0xffff) || (uint)uVar3 == (uVar12 & 0xffff)) &&
                 ((uVar12 & 0xffff) <= (((uint)uVar3 + (uint)param_4[6]) - 1 & 0xffff))) {
                uVar18 = *(int *)((long)pppuVar1 + 0xc) + uStack_b4;
                if ((((uint)uVar2 < (uVar18 & 0xffff) || (uint)uVar2 == (uVar18 & 0xffff)) &&
                    (((uVar18 & 0xffff) <= (((uint)uVar2 + (uint)param_4[8]) - 1 & 0xffff) &&
                     (uVar4 = (uVar12 - uVar3) +
                              *(int *)(*(long *)(param_4 + 0x20) + 0x1c) * (uVar18 - uVar2),
                     (*(uint *)(*(long *)(*(long *)(param_4 + 0x20) + 0x10) +
                               (long)((int)uVar4 >> 5) * 4) >> (ulong)(uVar4 & 0x1f) & 1) != 0))))
                   && (((param_7 & 1) == 0 ||
                       (((((int)uVar12 < *(int *)(lVar17 + 0x2e18) ||
                          (*(int *)(lVar17 + 0x2e28) < (int)uVar12)) ||
                         ((int)uVar18 < *(int *)(lVar17 + 0x2e1c))) ||
                        (*(int *)(lVar17 + 0x2e2c) < (int)uVar18)))))) {
                  local_e8 = (undefined *)CONCAT44(local_e8._4_4_,local_9c);
                  uVar20 = uVar20 | 1 << (ulong)(local_9c & 0x1f) & 0xffU;
                }
              }
            }
          }
          uVar12 = 4;
          if ((int)local_9c < 4) {
            uVar12 = local_9c + 1;
          }
          local_9c = uVar12;
        } while (uVar12 != 4);
        uVar12 = uVar20 - (uVar20 >> 1 & 0x55);
        uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
        uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
        uVar12 = uVar12 + (uVar12 >> 8);
        if ((uVar12 + (uVar12 >> 0x10) & 0x3f) != 0) {
          uVar12 = uStack_b4;
          uVar18 = uVar15;
          do {
            if ((uVar12 < 0x100) && (uVar18 < 0x120)) {
              if ((*(uint *)(PTR_DAT_04bbcc10 + (ulong)(uVar18 + uVar12 * 0x120 >> 5) * 4 + 8) >>
                   (ulong)(uVar18 & 0x1f) & 1) != 0) goto LAB_021f2bc4;
            }
            if ((int)uVar18 < (int)(uVar15 + 1)) {
              uVar18 = uVar18 + 1;
            }
            else {
              uVar12 = uVar12 + 1;
              uVar18 = uVar15;
            }
          } while ((uVar15 != uVar18) || (uStack_b4 + 2 != uVar12));
          fVar25 = *param_3 - ((float)(int)uVar15 * 5.0 + 5.0);
          fVar26 = param_3[2] - ((float)(int)uStack_b4 * 5.0 + 5.0);
          fVar25 = fVar26 * fVar26 + fVar25 * fVar25;
          if (fVar25 < fVar21) {
            fVar21 = fVar25;
            uVar14 = uVar15;
            uVar13 = uStack_b4;
            local_12c = uVar20;
          }
        }
      }
LAB_021f2bc4:
      if ((int)uVar15 < local_a8) {
        uVar20 = uVar15 + 1;
      }
      else {
        uStack_b4 = uStack_b4 + 1;
        uVar20 = local_b8;
      }
      if ((local_b8 == uVar20) && (uVar8 == uStack_b4)) {
LAB_021f2bfc:
        uStack_b4 = uVar8;
        uVar12 = uVar16;
        uVar15 = local_b8;
      }
      else {
        if ((int)uVar20 < local_a8) {
          uVar15 = uVar20 + 1;
        }
        else {
          uStack_b4 = uStack_b4 + 1;
          uVar15 = local_b8;
        }
        if ((local_b8 == uVar15) && (uVar8 == uStack_b4)) goto LAB_021f2bfc;
        uVar12 = uStack_b4;
        if (uStack_b4 != uVar16 + 2 || (int)uVar20 < local_a8) {
          uVar12 = uVar16;
        }
        uVar16 = uVar12;
        if (local_b8 != uVar15) goto LAB_021f29e0;
      }
      uVar16 = uVar12;
    } while (uVar8 != uStack_b4);
  }
  if ((uVar14 == *(uint *)(PTR_DAT_04bb5d40 + 8)) && (uVar13 == *(uint *)(PTR_DAT_04bb5d40 + 0xc)))
  {
    return 0;
  }
  if (param_5 != (float *)0x0) {
    *param_5 = (float)(int)uVar14 * 5.0 + 5.0;
    param_5[2] = (float)(int)uVar13 * 5.0 + 5.0;
  }
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = (undefined1)local_12c;
  }
  return 1;
}

