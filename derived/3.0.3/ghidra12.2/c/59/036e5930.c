
void FUN_036e5930(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  int *piVar7;
  undefined *puVar8;
  undefined8 ***pppuVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  uint *puVar16;
  uint *puVar17;
  undefined8 *puVar18;
  int iVar19;
  int iVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined2 uVar24;
  long lVar25;
  long *plVar26;
  undefined4 *puVar27;
  int iVar28;
  long lVar29;
  long lVar30;
  undefined *local_198;
  int local_190;
  int iStack_18c;
  uint *local_188;
  undefined *puStack_180;
  undefined8 local_178;
  undefined *local_170;
  undefined8 local_168;
  undefined *local_160;
  undefined4 local_158;
  undefined4 local_154;
  long local_150;
  undefined8 local_148;
  uint *local_140;
  undefined8 local_138;
  uint *local_130;
  undefined8 local_128;
  undefined8 **local_120;
  undefined8 *local_118;
  undefined8 local_110;
  uint local_108 [8];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 ***local_d8;
  undefined8 ***pppuStack_d0;
  undefined8 **local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0 [3];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  local_148 = PTR_DAT_04bb2020 + 0x10;
  local_140 = (uint *)0x40b1260;
  iVar10 = FUN_02758850(&local_148);
  puVar4 = PTR_DAT_04bc0510;
  puVar8 = PTR_DAT_04bb43c0;
  if (iVar10 == 0) {
    local_98 = 0xfffffffa;
    local_90 = 0x3fffffffa;
    local_88 = 0;
    uStack_80 = 0x1fffffffa;
    local_78 = 0xfffffff8;
    uStack_70 = 0x200000000;
  }
  else {
    local_98 = 0xfffffff9;
    local_90 = 0x1fffffff8;
    local_88 = 1;
    uStack_80 = 0x3fffffff8;
    local_78 = 0xfffffff9;
    uStack_70 = 0xfffffffe;
    local_188 = (uint *)0x3189;
    FUN_0277d4ac(&local_188);
    lVar25 = *(long *)puVar8;
    local_148 = puVar4 + 0x10;
    local_138 = (uint *)0x0;
    local_140 = local_188;
    uVar11 = FUN_0277d6c4(&local_140);
    if (*(long *)puVar8 != 0) {
      lVar25 = *(long *)(lVar25 + 0x57e58);
      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
      if ((uVar11 < *(uint *)(lVar25 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
        lVar25 = *(long *)PTR_DAT_04bc0428;
        uVar11 = FUN_0277d6c4(&local_188);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
        if (uVar11 < *(uint *)(lVar25 + 0x1d8)) {
          lVar25 = *(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar11 * 8);
          if (lVar25 != 0) {
            local_138 = (uint *)lVar25;
          }
        }
      }
    }
    FUN_01afade0(&local_148,1);
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    local_e0 = (undefined8 *)CONCAT44(DAT_05ab5e4c + -8,DAT_05ab5e48);
    local_e8 = puVar2;
    local_160._0_4_ = FUN_01ae98d0(&local_148);
    FUN_01afb8e8(&local_148);
    FUN_036e7000(&local_188,&local_e8,&local_160);
    local_e0 = (undefined8 *)CONCAT44(DAT_05ab5e4c + -4,DAT_05ab5e48);
    local_e8 = puVar2;
    uVar12 = FUN_01ae98d0(&local_148);
    local_160 = (undefined *)CONCAT44(local_160._4_4_,uVar12);
    FUN_01afb8e8(&local_148);
    FUN_036e7000(&local_188,&local_e8,&local_160);
  }
  local_e8 = (undefined *)0x0;
  local_e0 = (undefined8 *)0x0;
  local_d8 = &local_c8;
  local_c8 = &local_c0;
  local_c0 = &local_b8;
  local_b8 = 0;
  pppuStack_d0 = local_d8;
  if (local_b0 != (undefined8 *)0x0) {
    local_e8 = (undefined *)0x300000000;
    local_e0 = local_b0;
    if (*(int *)(param_1 + 0x40) != 0) {
      plVar26 = *(long **)(param_1 + 0x48);
      lVar25 = (long)*(int *)(param_1 + 0x40) << 3;
      do {
        if ((int)local_e8 < local_e8._4_4_) {
          lVar29 = *plVar26;
          lVar30 = *(long *)puVar8;
          uVar11 = FUN_0277d6c4(lVar29 + 8);
          if (*(long *)puVar8 != 0) {
            lVar30 = *(long *)(lVar30 + 0x57e58);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
            if (((uVar11 < *(uint *)(lVar30 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) &&
               ((*(byte *)(lVar29 + 0x10) >> 2 & 1) == 0)) {
              local_148 = (undefined *)0xfffe;
              FUN_0277d4ac(&local_148);
              local_148 = *(undefined **)(lVar29 + 8);
              uVar15 = FUN_01b0a694(&local_148);
              pppuVar9 = local_d8;
              if ((uVar15 & 1) != 0) {
                if ((int)local_e8 < local_e8._4_4_) {
                  if (local_d8 != (undefined8 ***)0x0) {
                    local_d8 = (undefined8 ***)*local_d8;
                  }
                  *(undefined2 *)pppuVar9 = (undefined2)local_148;
                  *(undefined1 *)((long)pppuVar9 + 2) = local_148._2_1_;
                  *(undefined1 *)((long)pppuVar9 + 3) = local_148._3_1_;
                  *(uint *)((long)pppuVar9 + 4) = local_148._4_4_;
                  if ((int)local_e8 < local_e8._4_4_) {
                    local_e0[(int)local_e8] = pppuVar9;
                    local_e8 = (undefined *)CONCAT44(local_e8._4_4_,(int)local_e8 + 1);
                  }
                }
              }
            }
          }
        }
        puVar18 = local_e0;
        plVar26 = plVar26 + 1;
        lVar25 = lVar25 + -8;
      } while (lVar25 != 0);
      if (1 < (int)local_e8) {
        uVar13 = 0;
        uVar11 = (int)local_e8 - 1;
        do {
          if ((int)uVar11 <= (int)uVar13) break;
          uVar21 = (ulong)uVar13;
          uVar22 = (ulong)uVar11;
          uVar15 = uVar21;
          uVar11 = uVar13;
          do {
            puVar6 = puVar18 + uVar15;
            iVar14 = FUN_036e7114(*puVar6,puVar6[1]);
            if (0 < iVar14) {
              uVar23 = puVar6[1];
              uVar11 = (uint)uVar15;
              puVar6[1] = puVar18[uVar15];
              puVar18[uVar15] = uVar23;
            }
            uVar15 = uVar15 + 1;
          } while (uVar22 != uVar15);
          if ((int)uVar11 <= (int)uVar13) break;
          uVar15 = (ulong)uVar11;
          uVar13 = uVar11;
          do {
            puVar6 = puVar18 + uVar15;
            iVar14 = FUN_036e7114(*puVar6,puVar6[-1]);
            if (iVar14 < 0) {
              uVar23 = puVar6[-1];
              uVar13 = (uint)uVar15;
              puVar6[-1] = puVar18[uVar15];
              puVar18[uVar15] = uVar23;
            }
            uVar15 = uVar15 - 1;
          } while ((long)uVar21 < (long)uVar15);
        } while (uVar13 != uVar11);
      }
    }
  }
  local_148 = (undefined *)0x0;
  local_140 = (uint *)0x0;
  local_128 = &local_120;
  local_120 = &local_118;
  local_138 = (uint *)&local_128;
  local_118 = &local_110;
  local_110 = 0;
  if (local_108 != (uint *)0x0) {
    local_148 = (undefined *)0x400000000;
    local_140 = local_108;
  }
  if ((int)local_e8 != 0) {
    iVar14 = 0;
    iVar28 = 0;
    puVar6 = local_e0 + (int)local_e8;
    puVar3 = (uint *)(PTR_DAT_04bbc1a0 + 0x10);
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    puVar18 = local_e0;
    local_130 = local_138;
    do {
      puVar27 = (undefined4 *)*puVar18;
      lVar25 = *(long *)puVar8;
      local_158 = *puVar27;
      local_154 = puVar27[1];
      local_150 = 0;
      local_160 = puVar4 + 0x10;
      uVar11 = FUN_0277d6c4(&local_158);
      if (*(long *)puVar8 != 0) {
        lVar25 = *(long *)(lVar25 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
        if ((uVar11 < *(uint *)(lVar25 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
          lVar25 = *(long *)PTR_DAT_04bc0428;
          uVar11 = FUN_0277d6c4(puVar27);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
          if (uVar11 < *(uint *)(lVar25 + 0x1d8)) {
            lVar25 = *(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar11 * 8);
            if (lVar25 != 0) {
              local_150 = lVar25;
            }
          }
        }
      }
      local_178 = 0;
      local_168 = 0;
      local_188 = puVar3;
      puStack_180 = puVar2;
      local_170 = puVar2;
      FUN_01afb480(&local_160,&local_188);
      iVar19 = ((int)local_168 - (int)local_178) + 1;
      iVar20 = (local_168._4_4_ - local_178._4_4_) + 1;
      if (iVar14 == iVar19) {
        if (iVar28 != iVar20) goto LAB_036e5e10;
LAB_036e60e4:
        iVar19 = (int)local_148;
      }
      else {
LAB_036e5e10:
        uVar11 = local_148._4_4_;
        iVar14 = iVar19;
        iVar28 = iVar20;
        if ((iVar19 == 2) && (iVar20 == 2)) {
          if (0 < (int)local_148) {
            lVar25 = 0;
            puVar16 = local_138;
            do {
              local_138 = *(uint **)(local_140 + lVar25 * 2);
              lVar25 = lVar25 + 1;
              *(uint **)local_138 = puVar16;
              puVar16 = local_138;
            } while (lVar25 < (int)local_148);
          }
          local_148 = (undefined *)((ulong)local_148._4_4_ << 0x20);
LAB_036e5eac:
          puVar16 = local_138;
          iVar19 = local_148._4_4_;
          if ((int)local_148._4_4_ < 1) {
            iVar20 = 0;
            if ((int)local_148._4_4_ < 1) goto LAB_036e5ee0;
LAB_036e5fb0:
            puVar16 = local_138;
            if (local_138 != (uint *)0x0) {
              local_138 = *(uint **)local_138;
            }
            *puVar16 = 1;
            iVar19 = local_148._4_4_;
            if ((int)local_148 < (int)local_148._4_4_) {
              *(uint **)(local_140 + (long)(int)local_148 * 2) = puVar16;
              iVar20 = (int)local_148 + 1;
              local_148 = (undefined *)CONCAT44(local_148._4_4_,iVar20);
              if (iVar20 < (int)local_148._4_4_) goto LAB_036e6004;
              goto LAB_036e5ee8;
            }
            iVar20 = (int)local_148;
            if ((int)local_148._4_4_ <= (int)local_148) goto LAB_036e5ee8;
LAB_036e6004:
            puVar16 = local_138;
            if (local_138 != (uint *)0x0) {
              local_138 = *(uint **)local_138;
            }
            *puVar16 = 2;
            if ((int)local_148._4_4_ <= (int)local_148) {
              if ((int)local_148._4_4_ <= (int)local_148) goto LAB_036e6060;
              goto LAB_036e5ef0;
            }
            *(uint **)(local_140 + (long)(int)local_148 * 2) = puVar16;
            local_148._0_4_ = (int)local_148 + 1;
            if ((int)local_148 < (int)local_148._4_4_) goto LAB_036e5ef0;
          }
          else {
            if (local_138 != (uint *)0x0) {
              local_138 = *(uint **)local_138;
            }
            *puVar16 = 0;
            iVar20 = 0;
            if (0 < (int)local_148._4_4_) {
              *(uint **)local_140 = puVar16;
              iVar20 = 1;
              local_148 = (undefined *)CONCAT44(local_148._4_4_,1);
              if ((int)local_148._4_4_ < 2) goto LAB_036e5ee0;
              goto LAB_036e5fb0;
            }
            if (0 < (int)local_148._4_4_) goto LAB_036e5fb0;
LAB_036e5ee0:
            if (iVar20 < iVar19) goto LAB_036e6004;
LAB_036e5ee8:
            if (iVar20 < iVar19) {
LAB_036e5ef0:
              puVar16 = local_138;
              if (local_138 != (uint *)0x0) {
                local_138 = *(uint **)local_138;
              }
              *puVar16 = 3;
              if ((int)local_148 < (int)local_148._4_4_) {
                *(uint **)(local_140 + (long)(int)local_148 * 2) = puVar16;
                local_148 = (undefined *)CONCAT44(local_148._4_4_,(int)local_148 + 1);
              }
            }
          }
LAB_036e6060:
          puVar16 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
          uVar15 = (ulong)local_148 & 0xffffffff;
          if (1 < (int)local_148) {
            do {
              uVar13 = puVar16[3];
              uVar11 = *puVar16 ^ *puVar16 << 0xb;
              *puVar16 = puVar16[1];
              puVar16[1] = puVar16[2];
              uVar11 = uVar11 >> 8 ^ uVar13 >> 0x13 ^ uVar11 ^ uVar13;
              puVar16[2] = uVar13;
              puVar16[3] = uVar11;
              uVar22 = uVar15 - 1 & 0xffffffff;
              uVar23 = *(undefined8 *)(local_140 + uVar22 * 2);
              uVar21 = uVar15 * uVar11 >> 0x1d & 0x7fffffff8;
              *(undefined8 *)(local_140 + uVar22 * 2) = *(undefined8 *)((long)local_140 + uVar21);
              *(undefined8 *)((long)local_140 + uVar21) = uVar23;
              bVar1 = 2 < uVar15;
              uVar15 = uVar15 - 1;
            } while (bVar1);
          }
          goto LAB_036e60e4;
        }
        if (0 < (int)local_148) {
          lVar25 = 0;
          puVar16 = local_138;
          do {
            local_138 = *(uint **)(local_140 + lVar25 * 2);
            lVar25 = lVar25 + 1;
            *(uint **)local_138 = puVar16;
            puVar16 = local_138;
          } while (lVar25 < (int)local_148);
        }
        puVar16 = local_138;
        local_148 = (undefined *)((ulong)local_148._4_4_ << 0x20);
        if (iVar19 == 6 && iVar20 == 6) goto LAB_036e5eac;
        if ((int)uVar11 < 1) {
          if (0 < (int)uVar11) goto LAB_036e6144;
        }
        else {
          if (local_138 != (uint *)0x0) {
            local_138 = *(uint **)local_138;
          }
          *puVar16 = 0;
          if (0 < (int)uVar11) {
            *(uint **)local_140 = puVar16;
            local_148 = (undefined *)CONCAT44(uVar11,1);
          }
          if ((int)(uint)(0 < (int)uVar11) < (int)uVar11) {
LAB_036e6144:
            puVar16 = local_138;
            if (local_138 != (uint *)0x0) {
              local_138 = *(uint **)local_138;
            }
            *puVar16 = 2;
            if ((int)local_148 < (int)local_148._4_4_) {
              *(uint **)(local_140 + (long)(int)local_148 * 2) = puVar16;
              local_148 = (undefined *)CONCAT44(local_148._4_4_,(int)local_148 + 1);
            }
          }
        }
        puVar16 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar15 = (ulong)local_148 & 0xffffffff;
        if (1 < (int)local_148) {
          do {
            uVar13 = puVar16[3];
            uVar11 = *puVar16 ^ *puVar16 << 0xb;
            *puVar16 = puVar16[1];
            puVar16[1] = puVar16[2];
            uVar11 = uVar11 >> 8 ^ uVar13 >> 0x13 ^ uVar11 ^ uVar13;
            puVar16[2] = uVar13;
            puVar16[3] = uVar11;
            uVar22 = uVar15 - 1 & 0xffffffff;
            uVar23 = *(undefined8 *)(local_140 + uVar22 * 2);
            uVar21 = uVar15 * uVar11 >> 0x1d & 0x7fffffff8;
            *(undefined8 *)(local_140 + uVar22 * 2) = *(undefined8 *)((long)local_140 + uVar21);
            *(undefined8 *)((long)local_140 + uVar21) = uVar23;
            bVar1 = 2 < uVar15;
            uVar15 = uVar15 - 1;
          } while (bVar1);
        }
        puVar17 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        puVar16 = local_138;
        uVar11 = *puVar17 ^ *puVar17 << 0xb;
        uVar13 = puVar17[3];
        *puVar17 = puVar17[1];
        puVar17[1] = puVar17[2];
        uVar11 = uVar11 >> 8 ^ uVar13 >> 0x13 ^ uVar11 ^ uVar13;
        puVar17[2] = uVar13;
        puVar17[3] = uVar11;
        iVar19 = (int)local_148;
        if ((int)local_148 < (int)local_148._4_4_) {
          if (local_138 != (uint *)0x0) {
            local_138 = *(uint **)local_138;
          }
          *puVar16 = (uVar11 << 1 ^ 0xffffffff) & 2;
          if ((int)local_148 < (int)local_148._4_4_) {
            *(uint **)(local_140 + (long)(int)local_148 * 2) = puVar16;
            iVar19 = (int)local_148 + 1;
            local_148 = (undefined *)CONCAT44(local_148._4_4_,iVar19);
          }
        }
      }
      if (iVar19 != 0) {
        FUN_01afade0(&local_160,**(undefined4 **)local_140);
        if (0 < (int)local_148) {
          puVar16 = *(uint **)local_140;
          *(uint **)puVar16 = local_138;
          local_138 = puVar16;
          if (0 < (int)local_148) {
            if ((int)local_148 - 1U == 0) {
              iVar19 = 1;
            }
            else {
              memmove(local_140,local_140 + 2,(ulong)((int)local_148 - 1U) << 3);
              iVar19 = (int)local_148;
            }
            local_148 = (undefined *)CONCAT44(local_148._4_4_,iVar19 + -1);
          }
        }
        *puVar27 = local_158;
        puVar27[1] = local_154;
      }
      puVar18 = puVar18 + 1;
    } while (puVar18 != puVar6);
    if ((int)local_e8 != 0) {
      lVar25 = (long)(int)local_e8 << 3;
      uVar15 = 0;
      puVar4 = PTR_DAT_04bb2010 + 0x10;
      puVar2 = PTR_DAT_04bc0510 + 0x10;
      puVar5 = PTR_DAT_04bbc1a0 + 0x10;
      puVar18 = local_e0;
      do {
        uVar11 = (uint)uVar15;
        puVar27 = (undefined4 *)*puVar18;
        piVar7 = (int *)((long)&local_98 + uVar15 * 4 * 4);
        if (2 < uVar11) {
          piVar7 = (int *)&local_98;
        }
        local_190 = *piVar7 + DAT_05ab5e48;
        iStack_18c = piVar7[2] + DAT_05ab5e4c;
        local_198 = puVar4;
        if ((iVar10 == 0) && (uVar11 == 2)) {
          lVar29 = *(long *)puVar8;
          local_158 = *puVar27;
          local_154 = puVar27[1];
          local_150 = 0;
          local_160 = puVar2;
          uVar13 = FUN_0277d6c4(&local_158);
          if (*(long *)puVar8 != 0) {
            lVar29 = *(long *)(lVar29 + 0x57e58);
            uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
            if ((uVar13 < *(uint *)(lVar29 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
              lVar29 = *(long *)PTR_DAT_04bc0428;
              uVar13 = FUN_0277d6c4(puVar27);
              uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
              if (uVar13 < *(uint *)(lVar29 + 0x1d8)) {
                lVar29 = *(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar13 * 8);
                if (lVar29 != 0) {
                  local_150 = lVar29;
                }
              }
            }
          }
          local_138 = (uint *)0x0;
          local_140 = (uint *)(PTR_DAT_04bb2010 + 0x10);
          local_128 = (undefined8 ***)0x0;
          local_148 = puVar5;
          local_130 = local_140;
          FUN_01afb480(&local_160,&local_148);
          if (4 < (int)(((uint)local_128 - (int)local_138) + 1)) {
LAB_036e6474:
            local_170._0_4_ = (uint)(uint3)local_170;
            puStack_180 = (undefined *)((long)&local_178 + 4);
            local_178 = CONCAT35(local_178._5_3_,8);
            local_188 = (uint *)(PTR_DAT_04bb3768 + 0x10);
            if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
                 ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
               (lVar25 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar25 == 0)) {
              uVar24 = *(undefined2 *)(param_1 + 0x2a);
            }
            else if ((*(long **)(lVar25 + 0x60) == (long *)0x0) ||
                    (puVar18 = (undefined8 *)**(long **)(lVar25 + 0x60),
                    puVar18 == (undefined8 *)0x0)) {
              uVar24 = *(undefined2 *)(*(long *)(lVar25 + 0x48) + *(long *)(lVar25 + 0x40) + 2);
            }
            else {
              uVar15 = (**(code **)*puVar18)();
              uVar24 = *(undefined2 *)(*(long *)(lVar25 + 0x48) + *(long *)(lVar25 + 0x40) + 2);
              if ((((uVar15 & 1) != 0) && (*(long *)(lVar25 + 0x60) != 0)) &&
                 (puVar18 = *(undefined8 **)(*(long *)(lVar25 + 0x60) + 8),
                 puVar18 != (undefined8 *)0x0)) {
                (**(code **)*puVar18)();
              }
            }
            FUN_0376b510(&local_188,uVar24);
            return;
          }
          if (4 < (local_128._4_4_ - local_138._4_4_) + 1) goto LAB_036e6474;
        }
        lVar29 = (long)&local_90 + uVar15 * 0x10 + 4;
        if (2 < uVar11) {
          lVar29 = (long)&local_90 + 4;
        }
        uVar13 = FUN_036e7344(puVar27,&local_198,lVar29);
        puVar18 = puVar18 + 1;
        lVar25 = lVar25 + -8;
        uVar15 = (ulong)(uVar11 + (uVar13 & 1));
      } while (lVar25 != 0);
    }
  }
  return;
}

