
/* WARNING: Removing unreachable block (ram,0x01365c44) */
/* WARNING: Removing unreachable block (ram,0x01365c5c) */
/* WARNING: Removing unreachable block (ram,0x01365c78) */
/* WARNING: Type propagation algorithm not settling */

void FUN_01364c00(undefined8 *******param_1,int param_2)

{
  undefined8 ******ppppppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  wchar16 *pwVar4;
  undefined8 ******ppppppuVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  undefined *puVar11;
  bool bVar12;
  byte bVar13;
  undefined1 uVar14;
  int iVar15;
  uint uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  ushort uVar20;
  int iVar21;
  long lVar22;
  byte *pbVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  ulong uVar27;
  undefined8 *******pppppppuVar28;
  long lVar29;
  undefined2 uVar30;
  undefined8 ******ppppppuVar31;
  ulong uVar32;
  ushort *puVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined *local_188;
  int local_180;
  int local_17c;
  byte local_178;
  undefined8 local_170;
  undefined8 *******pppppppuStack_168;
  ushort local_160;
  undefined4 local_15e;
  undefined1 local_15a;
  undefined **local_158;
  undefined8 *******local_150;
  undefined1 local_148 [8];
  undefined1 local_140 [8];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c5;
  undefined8 *******local_a0;
  undefined8 *******local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined4 local_7c;
  undefined2 local_76;
  undefined2 local_74;
  byte local_72;
  uint local_6c;
  
  puVar33 = (ushort *)PTR_DAT_04bb6298;
  if (param_1 == (undefined8 *******)0x0) {
    return;
  }
  sVar10 = *(short *)PTR_DAT_04bb6298;
  if (sVar10 == -1) {
LAB_01364cdc:
    if (param_2 == -0x10e0fba8) {
      uVar18 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_148 = (undefined1  [8])0x0;
      local_140 = (undefined1  [8])0x0;
      local_158 = (undefined **)0x0;
      local_150 = (undefined8 *******)0x0;
      do {
        lVar22 = uVar18 << 0x20;
        uVar32 = uVar18 << 1;
        uVar27 = uVar18 >> 0x1f;
        uVar16 = (int)uVar18 + 2;
        uVar18 = (ulong)uVar16;
        *(undefined2 *)(local_140 + ((-uVar27 & 0xfffffffe00000000 | uVar32) - 0x18)) = 0;
        *(undefined2 *)(local_140 + (lVar22 + 0x100000000 >> 0x1f) + -0x18) = 0;
      } while (uVar16 != 0x48);
      lVar22 = 0;
      ppppppuVar31 = (undefined8 ******)(PTR_DAT_04bb2020 + 0x10);
      do {
        local_98 = (undefined8 *******)0x40eeccf;
        local_a0 = (undefined8 *******)ppppppuVar31;
        uVar18 = FUN_0273f0a0(&local_a0);
        pwVar4 = L",+++++++-.}pppppj0.\x14";
        if ((uVar18 & 1) == 0) {
          pwVar4 = L",+++-";
        }
        *(undefined2 *)(local_140 + lVar22 + -0x18) = *(undefined2 *)((long)pwVar4 + lVar22);
        lVar22 = lVar22 + 2;
      } while (lVar22 != 0x90);
      ppppppuVar31 = param_1[0x17];
      if (ppppppuVar31 != (undefined8 ******)0x0) {
        uVar32 = 9;
        iVar15 = 0;
        ppppppuVar31[1] = (undefined8 *****)0x800000009;
        uVar16 = 0;
        ppppppuVar1 = ppppppuVar31 + 2;
        uVar24 = 8;
        uVar18 = 9;
        do {
          if (uVar18 != 0) {
            uVar27 = 0;
            uVar18 = uVar32;
            do {
              if ((uVar16 < 9) && (uVar24 = (uint)uVar27, uVar24 < 10)) {
                uVar25 = iVar15 + uVar24;
                uVar18 = (ulong)uVar25;
                if (0x47 < uVar25) {
                  uVar18 = 0;
                }
                uVar30 = *(undefined2 *)(local_140 + uVar18 * 2 + -0x18);
                ppppppuVar5 = ppppppuVar1 + (ulong)uVar25 * 3;
                if (0x47 < uVar25) {
                  ppppppuVar5 = ppppppuVar1;
                }
                *(uint *)((long)ppppppuVar5 + 0xc) = uVar24;
                *(uint *)(ppppppuVar5 + 2) = uVar16;
                uVar18 = (ulong)*(uint *)(ppppppuVar31 + 1);
                *(undefined2 *)(ppppppuVar5 + 1) = uVar30;
              }
              uVar27 = uVar27 + 1;
            } while (uVar27 < uVar18);
            uVar24 = *(uint *)((long)ppppppuVar31 + 0xc);
            uVar32 = uVar18;
          }
          uVar16 = uVar16 + 1;
          iVar15 = iVar15 + 9;
        } while (uVar16 < uVar24);
        *(undefined4 *)(ppppppuVar31 + 0xda) = 0;
        puVar3 = PTR_DAT_04bb2720;
        if ((0 < (int)uVar24) && (0 < (int)uVar32)) {
          iVar15 = 0;
          uVar16 = 0;
          do {
            uVar18 = 0;
            do {
              uVar25 = iVar15 + (int)uVar18;
              ppppppuVar31 = ppppppuVar1 + (ulong)uVar25 * 3;
              if (0x47 < uVar25) {
                ppppppuVar31 = ppppppuVar1;
              }
              local_a0 = (undefined8 *******)0x0;
              if (*(long *)puVar3 != 0) {
                lVar22 = *(long *)(*(long *)puVar3 + 0x330);
                local_a0 = (undefined8 *******)0x0;
                if (lVar22 != 0) {
                  local_a0 = *(undefined8 ********)(lVar22 + 0xd0);
                }
              }
              local_98 = (undefined8 *******)CONCAT44(uVar16,(int)uVar18);
              local_90 = (undefined *)CONCAT62(local_90._2_6_,*(undefined2 *)(ppppppuVar31 + 1));
              local_88 = param_1;
              FUN_0133bcb0(&local_170,&local_a0);
              uVar18 = uVar18 + 1;
            } while (uVar32 != uVar18);
            uVar16 = uVar16 + 1;
            iVar15 = iVar15 + 9;
          } while (uVar16 != uVar24);
        }
      }
      puVar33 = (ushort *)PTR_DAT_04bb6298;
      if (*(long *)PTR_DAT_04bb2720 == 0) {
        pppppppuVar28 = (undefined8 *******)0x0;
      }
      else {
        lVar22 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330);
        if (lVar22 == 0) {
          pppppppuVar28 = (undefined8 *******)0x0;
        }
        else {
          pppppppuVar28 = *(undefined8 ********)(lVar22 + 0xd0);
        }
      }
      local_a0 = pppppppuVar28;
      local_98 = param_1;
      FUN_0132e70c(&local_158);
      if (pppppppuVar28 != (undefined8 *******)0x0) {
        FUN_0132e920(&local_158,&local_a0);
        FUN_0132fa94(&local_158,&local_a0);
      }
      lVar22 = *(long *)PTR_DAT_04bb27c8;
      if (lVar22 != 0) {
        iVar15 = *(int *)(param_1 + 6);
        iVar7 = *(int *)((long)param_1 + 0x34);
        iVar21 = *(int *)(param_1 + 4);
        iVar8 = *(int *)((long)param_1 + 0x24);
        *(undefined1 *)(lVar22 + 0x1181) = 1;
        *(int *)(lVar22 + 0x1184) = (iVar15 - iVar21) + 1;
        *(int *)(lVar22 + 0x1188) = (iVar7 - iVar8) + 1;
      }
    }
  }
  else {
    local_158 = (undefined **)CONCAT44(local_158._4_4_,0x11);
    puVar6 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar10 * 8);
    if (0xff < (uint)(int)sVar10) {
      puVar6 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar6 >> 0x11 & 1) == 0) goto LAB_01364cdc;
    local_158 = (undefined **)0x0;
    if (*(long *)PTR_DAT_04bb2720 != 0) {
      lVar22 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330);
      local_158 = (undefined **)0x0;
      if (lVar22 != 0) {
        local_158 = *(undefined ***)(lVar22 + 0xd0);
      }
    }
    local_150 = (undefined8 *******)
                CONCAT62(local_150._2_6_,*(undefined2 *)(*(long *)PTR_DAT_04bb4928 + 8));
    local_140._0_2_ = *(undefined2 *)(*(long *)PTR_DAT_04bb4928 + 10);
    local_a0 = (undefined8 *******)(PTR_DAT_04bbc388 + 0x10);
    local_148 = (undefined1  [8])param_1;
    FUN_01321ef0(&local_a0,&local_158);
  }
  uVar20 = *puVar33;
  if (uVar20 != 0xffff) {
    local_158 = (undefined **)CONCAT44(local_158._4_4_,0x1e);
    puVar6 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar20 * 8);
    if (0xff < uVar20) {
      puVar6 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar6 >> 0x1e & 1) != 0) && (lVar22 = *(long *)PTR_DAT_04bb27c8, lVar22 != 0)) {
      iVar15 = *(int *)(param_1 + 6);
      iVar7 = *(int *)((long)param_1 + 0x34);
      iVar21 = *(int *)(param_1 + 4);
      iVar8 = *(int *)((long)param_1 + 0x24);
      *(undefined1 *)(lVar22 + 0x1181) = 1;
      *(int *)(lVar22 + 0x1184) = (iVar15 - iVar21) + 1;
      *(int *)(lVar22 + 0x1188) = (iVar7 - iVar8) + 1;
    }
  }
  if (param_2 == 0x10cdc40c) {
    lVar22 = *(long *)PTR_DAT_04bb39b0;
    pbVar23 = PTR_DAT_04bb32e0;
    if (lVar22 == 0) {
LAB_0136507c:
      if (*pbVar23 < 8) goto LAB_013650f4;
LAB_01365088:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_013650ec:
        pbVar23 = PTR_DAT_04bb5038;
        goto LAB_013650f4;
      }
      lVar22 = **(long **)PTR_DAT_04bb27d0;
      bVar13 = *(byte *)(lVar22 + 0x473);
      pbVar23 = PTR_DAT_04bb5038;
      if ((long)(char)bVar13 != 0xffffffffffffffff) {
        puVar6 = (uint *)(lVar22 + 0x48) + ((long)(char)bVar13 & 0xffffffffU) * 0x20;
        if (7 < bVar13) {
          puVar6 = (uint *)(lVar22 + 0x48);
        }
        if ((*puVar6 & 8) != 0) {
          pbVar23 = (byte *)(lVar22 + 0x471);
        }
      }
      bVar13 = *pbVar23;
      bVar12 = 7 < bVar13;
      if (bVar12) {
        bVar13 = 0xff;
      }
      local_a0 = (undefined8 *******)CONCAT71(local_a0._1_7_,bVar13);
      if (bVar12) goto LAB_013650ec;
    }
    else {
      if (*(int *)(lVar22 + 0x15c) != 0) {
        pbVar23 = (byte *)(lVar22 + 0x158);
      }
      if (7 < *pbVar23) {
        if ((*(int *)(lVar22 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar23 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_0136507c;
        }
        goto LAB_01365088;
      }
LAB_013650f4:
      bVar13 = *pbVar23;
      if (7 < bVar13) {
        bVar13 = 0xff;
      }
      local_a0 = (undefined8 *******)CONCAT71(local_a0._1_7_,bVar13);
    }
    ppuVar2 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_150 = (undefined8 *******)0x40bfdcc;
    local_158 = ppuVar2;
    iVar15 = FUN_02753180(&local_a0,&local_158);
    if (iVar15 != 0) {
      FUN_036eb7b0();
      local_150 = (undefined8 *******)0x40bfdcc;
      local_158 = ppuVar2;
      FUN_027533a8(&local_a0,&local_158,0);
    }
    FUN_013661b0(param_1,0);
    local_158 = &PTR_FUN_04993488;
    local_150 = &local_a0;
    local_a0 = param_1;
    lVar22 = FUN_03776f00();
    if (lVar22 != 0) {
      if ((*(long **)(lVar22 + 0xd0) == (long *)0x0) ||
         (puVar17 = (undefined8 *)**(long **)(lVar22 + 0xd0), puVar17 == (undefined8 *)0x0)) {
        uVar18 = 0;
      }
      else {
        uVar18 = (**(code **)*puVar17)();
        uVar18 = uVar18 & 0xffffffff;
      }
      puVar3 = PTR_DAT_04bbc1c0;
      lVar29 = *(long *)(lVar22 + 0xb0);
      lVar34 = *(long *)(lVar22 + 0xb8);
      iVar15 = 0;
      do {
        if (*(short *)(lVar34 + lVar29 + (long)iVar15 * 6) == *(short *)puVar3) break;
        (*(code *)*local_158)(&local_158);
        iVar15 = iVar15 + 1;
      } while (iVar15 != 300);
      if ((((uVar18 & 1) != 0) && (*(long *)(lVar22 + 0xd0) != 0)) &&
         (puVar17 = *(undefined8 **)(*(long *)(lVar22 + 0xd0) + 8), puVar17 != (undefined8 *)0x0)) {
        (**(code **)*puVar17)();
      }
    }
    uVar20 = *puVar33;
  }
  if (uVar20 == 0xffff) {
    uVar16 = 0;
  }
  else {
    local_158 = (undefined **)CONCAT44(local_158._4_4_,0x19);
    puVar6 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar20 & 0xffffffffU) * 8);
    if (0xff < uVar20) {
      puVar6 = (uint *)PTR_DAT_04bc39f8;
    }
    uVar16 = *puVar6 >> 0x19 & 1;
  }
  iVar15 = 0x4e32b7a;
  if (((param_2 == 0x4e32b7a) || (uVar16 != 0)) && (lVar22 = *(long *)PTR_DAT_04bb27c8, lVar22 != 0)
     ) {
    iVar21 = *(int *)(param_1 + 6);
    iVar8 = *(int *)((long)param_1 + 0x34);
    iVar7 = *(int *)(param_1 + 4);
    iVar9 = *(int *)((long)param_1 + 0x24);
    *(undefined1 *)(lVar22 + 0x1181) = 1;
    *(int *)(lVar22 + 0x1184) = (iVar21 - iVar7) + 1;
    *(int *)(lVar22 + 0x1188) = (iVar8 - iVar9) + 1;
  }
  puVar3 = PTR_DAT_04bb59d8;
  if (param_2 < -0x3e092032) {
    if (param_2 == -0x7975b8e8) goto LAB_013653ec;
    iVar15 = -0x6efba09b;
LAB_013653a0:
    if (param_2 == iVar15) {
      local_148 = (undefined1  [8])((ulong)local_148 & 0xffffffffffffff00);
      local_158 = (undefined **)0x0;
      if (*(long *)PTR_DAT_04bb2720 != 0) {
        lVar22 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330);
        local_158 = (undefined **)0x0;
        if (lVar22 != 0) {
          local_158 = *(undefined ***)(lVar22 + 0xd0);
        }
      }
      local_a0 = (undefined8 *******)(PTR_DAT_04bbc510 + 0x10);
      local_150 = param_1;
      FUN_0134dd00(&local_a0,&local_158);
    }
    else if (((DAT_05ac0a90 == param_2) || (DAT_05ac0aa0 == param_2)) ||
            ((((DAT_05ac0ab0 == param_2 || ((DAT_05ac0ac0 == param_2 || (DAT_05ac0ad0 == param_2))))
              || (DAT_05ac0ae0 == param_2)) ||
             ((((DAT_05ac0af0 == param_2 || (DAT_05ac0b00 == param_2)) || (DAT_05ac0b10 == param_2))
              || (DAT_05ac0b20 == param_2)))))) {
      lVar22 = FUN_03776f00();
      if (lVar22 != 0) {
        if ((*(long **)(lVar22 + 0x28) == (long *)0x0) ||
           (puVar17 = (undefined8 *)**(long **)(lVar22 + 0x28), puVar17 == (undefined8 *)0x0)) {
          uVar16 = 1;
        }
        else {
          uVar16 = (**(code **)*puVar17)();
          uVar16 = uVar16 ^ 1;
        }
        local_158 = (undefined **)CONCAT44(local_158._4_4_,1);
        uVar20 = *(ushort *)(*(long *)(lVar22 + 0x10) + *(long *)(lVar22 + 8) + 0x153c);
        if ((((uVar16 & 1) == 0) && (*(long *)(lVar22 + 0x28) != 0)) &&
           (puVar17 = *(undefined8 **)(*(long *)(lVar22 + 0x28) + 8), puVar17 != (undefined8 *)0x0))
        {
          (**(code **)*puVar17)();
        }
        if ((uVar20 & 2) == 0) {
          uVar19 = FUN_029156e0();
          local_a0 = (undefined8 *******)0x0;
          if (*(long *)PTR_DAT_04bb2720 != 0) {
            lVar22 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330);
            local_a0 = (undefined8 *******)0x0;
            if (lVar22 != 0) {
              local_a0 = *(undefined8 ********)(lVar22 + 0xd0);
            }
          }
          local_98 = param_1;
          FUN_01353460(&local_158,uVar19);
          FUN_013535e0(&local_158,&local_a0);
        }
      }
      FUN_013661b0(param_1,0);
      local_150 = (undefined8 *******)&local_170;
      local_158 = &PTR_FUN_04993488;
      local_170 = param_1;
      lVar22 = FUN_03776f00();
      if (lVar22 != 0) {
        local_98 = (undefined8 *******)(lVar22 + 0xa8);
        local_90 = (undefined *)CONCAT71(local_90._1_7_,1);
        if (*(long **)(lVar22 + 0xd0) == (long *)0x0) {
          uVar14 = 0;
        }
        else {
          puVar17 = (undefined8 *)**(long **)(lVar22 + 0xd0);
          uVar14 = 0;
          if (puVar17 != (undefined8 *)0x0) {
            uVar14 = (**(code **)*puVar17)();
          }
        }
        puVar3 = PTR_DAT_04bbc1c0;
        lVar29 = *(long *)(lVar22 + 0xb0);
        lVar22 = *(long *)(lVar22 + 0xb8);
        local_90 = (undefined *)
                   (CONCAT62(local_90._2_6_,CONCAT11(uVar14,local_90._0_1_)) & 0xffffffffffff01ff);
        iVar15 = 0;
        local_a0 = (undefined8 *******)(PTR_DAT_04bbc1b8 + 0x10);
        do {
          if (*(short *)(lVar22 + lVar29 + (long)iVar15 * 6) == *(short *)puVar3) break;
          (*(code *)*local_158)(&local_158);
          iVar15 = iVar15 + 1;
        } while (iVar15 != 300);
        goto LAB_01365d14;
      }
    }
  }
  else if (param_2 == -0x3e092032) {
LAB_013653ec:
    if (*PTR_DAT_04bbe508 == '\0') {
      lVar22 = FUN_03776f00();
      if (lVar22 != 0) {
        if ((*(long **)(lVar22 + 0x28) == (long *)0x0) ||
           (puVar17 = (undefined8 *)**(long **)(lVar22 + 0x28), puVar17 == (undefined8 *)0x0)) {
          uVar16 = 1;
        }
        else {
          uVar16 = (**(code **)*puVar17)();
          uVar16 = uVar16 ^ 1;
        }
        local_158 = (undefined **)CONCAT44(local_158._4_4_,1);
        uVar20 = *(ushort *)(*(long *)(lVar22 + 0x10) + *(long *)(lVar22 + 8) + 0x153c);
        if ((((uVar16 & 1) == 0) && (*(long *)(lVar22 + 0x28) != 0)) &&
           (puVar17 = *(undefined8 **)(*(long *)(lVar22 + 0x28) + 8), puVar17 != (undefined8 *)0x0))
        {
          (**(code **)*puVar17)();
        }
        if ((uVar20 & 2) == 0) {
          uVar19 = FUN_029156e0();
          local_a0 = (undefined8 *******)0x0;
          if (*(long *)PTR_DAT_04bb2720 != 0) {
            lVar22 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330);
            local_a0 = (undefined8 *******)0x0;
            if (lVar22 != 0) {
              local_a0 = *(undefined8 ********)(lVar22 + 0xd0);
            }
          }
          local_98 = param_1;
          FUN_01353460(&local_158,uVar19);
          FUN_013535e0(&local_158,&local_a0);
        }
      }
      FUN_013661b0(param_1,0);
      local_150 = (undefined8 *******)&local_170;
      local_158 = &PTR_FUN_04993488;
      local_170 = param_1;
      lVar22 = FUN_03776f00();
      if (lVar22 != 0) {
        local_98 = (undefined8 *******)(lVar22 + 0xa8);
        local_90 = (undefined *)CONCAT71(local_90._1_7_,1);
        if (*(long **)(lVar22 + 0xd0) == (long *)0x0) {
          uVar14 = 0;
        }
        else {
          puVar17 = (undefined8 *)**(long **)(lVar22 + 0xd0);
          uVar14 = 0;
          if (puVar17 != (undefined8 *)0x0) {
            uVar14 = (**(code **)*puVar17)();
          }
        }
        puVar3 = PTR_DAT_04bbc1c0;
        lVar29 = *(long *)(lVar22 + 0xb0);
        lVar22 = *(long *)(lVar22 + 0xb8);
        local_90 = (undefined *)
                   (CONCAT62(local_90._2_6_,CONCAT11(uVar14,local_90._0_1_)) & 0xffffffffffff01ff);
        iVar15 = 0;
        local_a0 = (undefined8 *******)(PTR_DAT_04bbc1b8 + 0x10);
        do {
          if (*(short *)(lVar22 + lVar29 + (long)iVar15 * 6) == *(short *)puVar3) break;
          (*(code *)*local_158)(&local_158);
          iVar15 = iVar15 + 1;
        } while (iVar15 != 300);
LAB_01365d14:
        FUN_02640184(&local_a0);
      }
    }
  }
  else {
    if (param_2 != -0x17df00c3) goto LAB_013653a0;
    bVar13 = FUN_0375f040(*(undefined8 *)PTR_DAT_04bb59d8);
    lVar22 = *(long *)PTR_DAT_04bb27f8;
    if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
         ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) && ((*(byte *)(lVar22 + 0x1a71) >> 2 & 1) == 0)
        ) || ((*(long *)PTR_DAT_04bc1530 == 0 ||
              (lVar29 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar29 == 0)))) {
LAB_01365710:
      uVar30 = *(undefined2 *)(lVar22 + 2);
    }
    else {
      if ((*(long **)(lVar29 + 0x1790) == (long *)0x0) ||
         (puVar17 = (undefined8 *)**(long **)(lVar29 + 0x1790), puVar17 == (undefined8 *)0x0)) {
        lVar22 = *(long *)(lVar29 + 0x1778) + *(long *)(lVar29 + 6000);
        goto LAB_01365710;
      }
      uVar18 = (**(code **)*puVar17)();
      uVar30 = *(undefined2 *)(*(long *)(lVar29 + 0x1778) + *(long *)(lVar29 + 6000) + 2);
      if ((((uVar18 & 1) != 0) && (*(long *)(lVar29 + 0x1790) != 0)) &&
         (puVar17 = *(undefined8 **)(*(long *)(lVar29 + 0x1790) + 8), puVar17 != (undefined8 *)0x0))
      {
        (**(code **)*puVar17)();
      }
    }
    puVar11 = PTR_DAT_04bb2720;
    local_15e = 0x1010101;
    local_15a = 1;
    local_170 = (undefined8 *******)0x0;
    if (*(long *)PTR_DAT_04bb2720 != 0) {
      lVar22 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330);
      local_170 = (undefined8 *******)0x0;
      if (lVar22 != 0) {
        local_170 = *(undefined8 ********)(lVar22 + 0xd0);
      }
    }
    local_148 = (undefined1  [8])(local_140 + 4);
    local_160 = (ushort)(bVar13 & 1);
    uStack_120._0_4_ = (uint)(uint3)uStack_120;
    local_158 = (undefined **)(PTR_DAT_04bbc518 + 0x10);
    local_140._0_5_ = 0x20;
    local_150 = (undefined8 *******)(PTR_DAT_04bb2028 + 0x10);
    pppppppuStack_168 = param_1;
    FUN_038d1270(&local_150,"WherearenNpcGardenPreset%d",uVar30);
    FUN_01350790(&local_158,&local_170);
    local_180 = 0;
    local_188 = PTR_DAT_04bbfe68 + 0x10;
    lVar22 = *(long *)puVar11;
    if (lVar22 == 0) {
      puVar17 = &DAT_055c04a0;
    }
    else {
      puVar17 = &DAT_055c04a0;
      if (*(long *)(lVar22 + 0x330) != 0) {
        puVar17 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar22 + 0x338));
        iVar15 = FUN_006bd550(*puVar17,0);
        puVar17 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar15 != 0x758f7eaf) {
          puVar17 = &DAT_055c04a0;
        }
      }
    }
    local_17c = *(int *)(puVar17 + 7);
    local_178 = FUN_017baf44();
    lVar22 = *(long *)puVar3;
    local_178 = local_178 & 1;
    if ((bVar13 & 1) == 0) {
      local_7c = 1;
      local_a0._0_4_ = 0;
      puVar3 = PTR_DAT_04bb2010 + 0x10;
      iVar15 = (int)local_a0;
      do {
        iVar21 = *(int *)(lVar22 + 0x28);
        local_88 = *(undefined8 ********)(lVar22 + 0x28);
        uVar16 = *(int *)(lVar22 + 0x3c) + 1;
        local_a0 = (undefined8 *******)(lVar22 + 0x20);
        local_98 = (undefined8 *******)(lVar22 + 0x30);
        local_90 = puVar3;
        if (uVar16 != *(uint *)(lVar22 + 0x2c)) {
          do {
            FUN_01a50cb0(&local_188,iVar15,&local_90);
            if ((int)local_88 < *(int *)((long)local_98 + 8)) {
              iVar7 = (int)local_88 + 1;
              uVar24 = local_88._4_4_;
            }
            else {
              uVar24 = local_88._4_4_ + 1;
              iVar7 = *(int *)(local_a0 + 1);
              local_88 = (undefined8 *******)((ulong)uVar24 << 0x20);
            }
            local_88 = (undefined8 *******)CONCAT44(local_88._4_4_,iVar7);
          } while (iVar21 != iVar7 || uVar16 != uVar24);
        }
        iVar21 = 8;
        if (iVar15 < 8) {
          iVar21 = iVar15 + 1;
        }
        iVar15 = iVar21;
      } while (iVar21 != 2);
      lVar22 = *(long *)PTR_DAT_04bb59d8;
    }
    local_7c = 1;
    puVar3 = PTR_DAT_04bb2010 + 0x10;
    iVar15 = 0;
    do {
      iVar21 = *(int *)(lVar22 + 0x50);
      local_88 = *(undefined8 ********)(lVar22 + 0x50);
      uVar16 = *(int *)(lVar22 + 100) + 1;
      local_a0 = (undefined8 *******)(lVar22 + 0x48);
      local_98 = (undefined8 *******)(lVar22 + 0x58);
      local_90 = puVar3;
      if (uVar16 != *(uint *)(lVar22 + 0x54)) {
        do {
          FUN_01a50cb0(&local_188,iVar15,&local_90);
          if ((int)local_88 < *(int *)(local_98 + 1)) {
            iVar7 = (int)local_88 + 1;
            uVar24 = local_88._4_4_;
          }
          else {
            uVar24 = local_88._4_4_ + 1;
            iVar7 = *(int *)(local_a0 + 1);
            local_88 = (undefined8 *******)((ulong)uVar24 << 0x20);
          }
          local_88 = (undefined8 *******)CONCAT44(local_88._4_4_,iVar7);
        } while (iVar21 != iVar7 || uVar16 != uVar24);
      }
      iVar21 = 8;
      if (iVar15 < 8) {
        iVar21 = iVar15 + 1;
      }
      iVar15 = iVar21;
    } while (iVar21 != 2);
    FUN_013661b0(param_1,0);
    if (((bVar13 & 1) == 0) &&
       (ppppppuVar31 = param_1[0x15], ppppppuVar31 != (undefined8 ******)0x0)) {
      local_a0 = (undefined8 *******)(PTR_DAT_04bb7648 + 0x10);
      local_98 = (undefined8 *******)CONCAT62(local_98._2_6_,**(undefined2 **)PTR_DAT_04bb27f8);
      lVar22 = FUN_03775a30(&local_a0);
      if (lVar22 != 0) {
        lVar29 = *(long *)PTR_DAT_04bb59d8;
        fVar38 = (float)*(int *)(lVar29 + 0x2c) * 0.5;
        fVar37 = (float)*(int *)(lVar29 + 0x28) * 0.5;
        fVar40 = (float)*(int *)(lVar29 + 0x38) * 0.5;
        fVar39 = (float)*(int *)(lVar29 + 0x3c) * 0.5;
        uVar16 = 0;
        if (fVar37 != (float)(int)fVar37) {
          uVar16 = (uint)(fVar37 < 0.0);
        }
        uVar24 = 0;
        if (fVar38 != (float)(int)fVar38) {
          uVar24 = (uint)(fVar38 < 0.0);
        }
        uVar25 = 0;
        if (fVar40 != (float)(int)fVar40) {
          uVar25 = (uint)(fVar40 < 0.0);
        }
        uVar26 = 0;
        if (fVar39 != (float)(int)fVar39) {
          uVar26 = (uint)(fVar39 < 0.0);
        }
        iVar15 = (int)fVar37 - uVar16;
        if ((int)((int)fVar40 - uVar25) <= (int)((int)fVar37 - uVar16)) {
          iVar15 = (int)fVar40 - uVar25;
        }
        iVar21 = (int)fVar38 - uVar24;
        if ((int)((int)fVar39 - uVar26) <= (int)((int)fVar38 - uVar24)) {
          iVar21 = (int)fVar39 - uVar26;
        }
        if ((*(long **)(lVar22 + 0x108) == (long *)0x0) ||
           (puVar17 = (undefined8 *)**(long **)(lVar22 + 0x108), puVar17 == (undefined8 *)0x0)) {
          uVar16 = 1;
        }
        else {
          uVar16 = (**(code **)*puVar17)();
          uVar16 = uVar16 ^ 1;
        }
        lVar29 = 0;
        lVar34 = 0x4244;
        puVar3 = PTR_DAT_04bb2018 + 0x10;
        do {
          lVar36 = 0;
          iVar7 = iVar21 + -3 + (int)lVar29;
          lVar35 = lVar34;
          do {
            local_180 = iVar15 + -1 + (int)lVar36;
            local_188 = puVar3;
            local_17c = iVar7;
            if (((*(int *)(ppppppuVar31 + 3) <= local_180 && local_180 <= *(int *)(ppppppuVar31 + 5)
                 ) && (*(int *)((long)ppppppuVar31 + 0x1c) <= iVar7)) &&
               (iVar7 <= *(int *)((long)ppppppuVar31 + 0x2c))) {
              pbVar23 = (byte *)(*(long *)(lVar22 + 0xf0) + *(long *)(lVar22 + 0xe8) + lVar35);
              FUN_01309ec4(&local_7c,ppppppuVar31,&local_188);
              local_76 = *(undefined2 *)(pbVar23 + -4);
              local_74 = *(undefined2 *)(pbVar23 + -2);
              local_72 = *pbVar23;
              local_6c = (uint)local_72;
              FUN_01309ff0(ppppppuVar31,&local_7c,&local_188);
            }
            lVar36 = lVar36 + 1;
            lVar35 = lVar35 + 6;
          } while (lVar36 != 0x10);
          lVar29 = lVar29 + 1;
          lVar34 = lVar34 + 0x60;
        } while (lVar29 != 0x10);
        if ((((uVar16 & 1) == 0) && (*(long *)(lVar22 + 0x108) != 0)) &&
           (puVar17 = *(undefined8 **)(*(long *)(lVar22 + 0x108) + 8), puVar17 != (undefined8 *)0x0)
           ) {
          (**(code **)*puVar17)();
        }
      }
    }
  }
  if (0x25b43b88 < param_2) {
    if (param_2 < 0x340da5a5) {
      if (param_2 < 0x2aefed47) {
        if (param_2 != 0x25b43b89) {
          iVar15 = 0x2633946a;
          goto LAB_01365e68;
        }
      }
      else if (param_2 != 0x2aefed47) {
        iVar15 = 0x302056e3;
        goto LAB_01365e68;
      }
    }
    else if (param_2 < 0x6043fd87) {
      if (param_2 != 0x340da5a5) {
        iVar15 = 0x356323a8;
        goto LAB_01365e68;
      }
    }
    else if (param_2 != 0x7dfa9ed2) {
      iVar15 = 0x6043fd87;
      goto LAB_01365e68;
    }
    goto LAB_01365e70;
  }
  if (param_2 < -0x63176d3) {
    if (param_2 < -0x214773f9) {
      if (param_2 != -0x7a4d7ddc) {
        iVar15 = -0x3e25491c;
        goto LAB_01365e68;
      }
    }
    else if (param_2 != -0x214773f9) {
      iVar15 = -0xe5efd5a;
      goto LAB_01365e68;
    }
  }
  else if (param_2 < 0x91dc718) {
    if (param_2 != -0x63176d3) {
      iVar15 = 0x68001ae;
      goto LAB_01365e68;
    }
  }
  else if (param_2 != 0x91dc718) {
    iVar15 = 0x1a13a2ea;
LAB_01365e68:
    if (param_2 != iVar15) {
      return;
    }
  }
LAB_01365e70:
  uVar16 = (uint)local_170;
  local_170 = (undefined8 *******)CONCAT44(0xffffffff,uVar16 & 0xffffff00);
  FUN_016cfd70(&local_170);
  lVar22 = FUN_016c6c00(&local_170);
  if (lVar22 != 0) {
    if ((*(long **)(lVar22 + 0x28) == (long *)0x0) ||
       (puVar17 = (undefined8 *)**(long **)(lVar22 + 0x28), puVar17 == (undefined8 *)0x0)) {
      bVar13 = *(byte *)(*(long *)(lVar22 + 0x10) + *(long *)(lVar22 + 8));
    }
    else {
      uVar18 = (**(code **)*puVar17)();
      bVar13 = *(byte *)(*(long *)(lVar22 + 0x10) + *(long *)(lVar22 + 8));
      if ((((uVar18 & 1) != 0) && (*(long *)(lVar22 + 0x28) != 0)) &&
         (puVar17 = *(undefined8 **)(*(long *)(lVar22 + 0x28) + 8), puVar17 != (undefined8 *)0x0)) {
        (**(code **)*puVar17)();
      }
    }
    if ((bVar13 & 1) != 0) {
      lVar22 = FUN_016c7938(&local_170);
      if (lVar22 == 0) {
        return;
      }
      if ((*(long **)(lVar22 + 0x60) == (long *)0x0) ||
         (puVar17 = (undefined8 *)**(long **)(lVar22 + 0x60), puVar17 == (undefined8 *)0x0)) {
        uVar16 = 1;
        local_a0 = param_1;
      }
      else {
        local_a0 = param_1;
        uVar16 = (**(code **)*puVar17)();
        uVar16 = uVar16 ^ 1;
      }
      lVar29 = *(long *)(lVar22 + 0x40);
      lVar34 = *(long *)(lVar22 + 0x48);
      iVar15 = 0;
      local_150 = &local_a0;
      local_158 = &PTR_FUN_04993500;
      do {
        if (*(short *)(lVar34 + lVar29 + (long)iVar15 * 0xc) == -2) break;
        (*(code *)*local_158)(&local_158);
        iVar15 = iVar15 + 1;
      } while (iVar15 != 300);
      if ((((uVar16 & 1) == 0) && (*(long *)(lVar22 + 0x60) != 0)) &&
         (puVar17 = *(undefined8 **)(*(long *)(lVar22 + 0x60) + 8), puVar17 != (undefined8 *)0x0)) {
        (**(code **)*puVar17)();
      }
      if ((*(long **)(lVar22 + 0xd0) == (long *)0x0) ||
         (puVar17 = (undefined8 *)**(long **)(lVar22 + 0xd0), puVar17 == (undefined8 *)0x0)) {
        uVar16 = 1;
      }
      else {
        uVar16 = (**(code **)*puVar17)();
        uVar16 = uVar16 ^ 1;
      }
      puVar3 = PTR_DAT_04bbc1c0;
      local_150 = &local_a0;
      lVar29 = *(long *)(lVar22 + 0xb0);
      lVar34 = *(long *)(lVar22 + 0xb8);
      local_158 = &PTR_FUN_04993528;
      iVar15 = 0;
      do {
        if (*(short *)(lVar34 + lVar29 + (long)iVar15 * 6) == *(short *)puVar3) break;
        (*(code *)*local_158)(&local_158);
        iVar15 = iVar15 + 1;
      } while (iVar15 != 300);
      if ((uVar16 & 1) != 0) {
        return;
      }
      if (*(long *)(lVar22 + 0xd0) == 0) {
        return;
      }
      puVar17 = *(undefined8 **)(*(long *)(lVar22 + 0xd0) + 8);
      if (puVar17 == (undefined8 *)0x0) {
        return;
      }
      (**(code **)*puVar17)();
      return;
    }
  }
  local_c5 = 0;
  local_148._0_5_ = 0x80;
  lVar22 = *(long *)PTR_DAT_04bb4938;
  local_150 = (undefined8 *******)(local_148 + 4);
  local_158 = (undefined **)(PTR_DAT_04bb2d88 + 0x10);
  if (*(int *)(lVar22 + 0x98) != 0) {
    FUN_0252d11c(&local_188);
    local_a0 = (undefined8 *******)(PTR_DAT_04bb2020 + 0x10);
    local_98 = (undefined8 *******)0x40a0ed9;
    iVar15 = FUN_02753180(&local_188,&local_a0);
    if (iVar15 != 0) {
      *(undefined1 *)local_150 = 0;
      pppppppuVar28 = local_150;
      (*(code *)local_158[3])(&local_158);
      lVar22 = 0;
      do {
        if (*(char *)((long)local_150 + lVar22) == '\0') goto LAB_01366120;
        if (*(char *)((long)local_150 + lVar22 + 1) == '\0') {
          lVar22 = lVar22 + 1;
          goto LAB_01366120;
        }
        if (*(char *)((long)local_150 + lVar22 + 2) == '\0') {
          lVar22 = lVar22 + 2;
          goto LAB_01366120;
        }
        lVar22 = lVar22 + 3;
      } while (lVar22 != 0x80001);
      lVar22 = 0;
LAB_01366120:
      uVar16 = (uint)lVar22 & ((int)(uint)lVar22 >> 0x1f ^ 0xffffffffU);
      uVar24 = 0x15;
      if ((int)(local_148._0_4_ - uVar16) < 0x16) {
        uVar24 = local_148._0_4_ + ~uVar16;
      }
      if (0 < (int)uVar24) {
        memcpy((undefined1 *)((long)pppppppuVar28 + (ulong)uVar16),"IdrHotelRoom_Tutorial",
               (ulong)uVar24);
        *(undefined1 *)((long)pppppppuVar28 + (ulong)uVar24 + (ulong)uVar16) = 0;
      }
      goto LAB_01366164;
    }
  }
  FUN_01332320(&local_158,lVar22 + 0x10);
LAB_01366164:
  local_a0 = (undefined8 *******)0x0;
  if (*(long *)PTR_DAT_04bb2720 != 0) {
    lVar22 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330);
    local_a0 = (undefined8 *******)0x0;
    if (lVar22 != 0) {
      local_a0 = *(undefined8 ********)(lVar22 + 0xd0);
    }
  }
  local_98 = param_1;
  FUN_01332564(&local_158,&local_a0);
  return;
}

