
undefined8 FUN_03720710(long param_1)

{
  short *psVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined2 *puVar15;
  ulong uVar16;
  byte bVar17;
  long lVar18;
  ushort *puVar19;
  undefined2 *puVar20;
  byte *pbVar21;
  long *plVar22;
  undefined2 uVar23;
  undefined8 *puVar24;
  long lVar25;
  short sVar26;
  short sVar27;
  long lVar28;
  char *pcVar29;
  undefined *puVar30;
  undefined4 *puVar31;
  undefined8 local_1d0;
  undefined4 *local_1c8;
  undefined8 local_1c0;
  uint local_1b8;
  undefined1 local_1b4 [15];
  undefined1 local_1a5;
  undefined8 local_1a0;
  ulong uStack_198;
  undefined1 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined2 local_170;
  undefined2 uStack_16e;
  undefined4 local_16c;
  undefined2 uStack_168;
  undefined2 uStack_166;
  undefined1 local_164;
  undefined1 uStack_163;
  undefined2 uStack_162;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined2 local_148;
  undefined2 local_146;
  undefined4 local_144;
  ushort local_140;
  undefined1 local_13e;
  undefined1 local_13d;
  undefined4 local_13c;
  ushort local_138;
  undefined1 local_136;
  undefined1 local_135;
  undefined4 local_134;
  ushort local_130;
  undefined1 local_12e;
  undefined1 local_12d;
  undefined4 local_12c;
  ushort local_128;
  undefined1 local_126;
  undefined1 local_125;
  undefined4 local_124;
  ushort local_120;
  undefined1 local_11e;
  undefined1 local_11d;
  undefined4 local_11c;
  ushort local_118;
  undefined1 local_116;
  undefined1 local_115;
  undefined4 local_114;
  ushort local_110;
  undefined1 local_10e;
  undefined1 local_10d;
  undefined4 local_10c;
  ushort local_108;
  undefined1 local_106;
  undefined1 local_105;
  undefined4 local_104;
  ushort local_100;
  undefined1 local_fe;
  undefined1 local_fd;
  undefined4 local_fc;
  ushort local_f8;
  undefined1 local_f6;
  undefined1 local_f5;
  undefined4 local_f4;
  ushort local_f0;
  undefined1 local_ee;
  undefined1 local_ed;
  undefined4 local_ec;
  ushort local_e8;
  undefined1 local_e6;
  undefined1 local_e5;
  undefined4 local_e4;
  ushort local_e0;
  undefined1 local_de;
  undefined1 local_dd;
  undefined4 local_dc;
  ushort local_d8;
  undefined1 local_d6;
  undefined1 local_d5;
  undefined4 local_d4;
  ushort local_d0;
  undefined1 local_ce;
  undefined1 local_cd;
  undefined4 local_cc;
  ushort local_c8;
  undefined1 local_c6;
  undefined1 local_c5;
  undefined4 local_c4;
  ushort local_c0;
  undefined1 local_be;
  undefined1 local_bd;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined2 local_74;
  undefined8 local_70;
  
  sVar26 = *(short *)PTR_DAT_04bb6298;
  if (sVar26 == -1) {
    return 0;
  }
  puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar26 * 8);
  if (0xff < (uint)(int)sVar26) {
    puVar2 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar2 >> 0x1b & 1) != 0) {
    return 0;
  }
  local_188 = (undefined *)CONCAT44(local_188._4_4_,0x1a);
  puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar26 * 8);
  if (0xff < (uint)(int)sVar26) {
    puVar2 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar2 >> 0x1a & 1) == 0) {
    return 0;
  }
  uVar11 = *(uint *)(&DAT_00001230 + param_1);
  if ((uVar11 >> 1 & 1) != 0) {
    *(uint *)(&DAT_00001230 + param_1) = uVar11 & 0xfffffffd;
    FUN_037203a0(param_1);
    uVar11 = *(uint *)(&DAT_00001230 + param_1);
  }
  if ((uVar11 & 1) != 0) {
    return 1;
  }
  local_188 = (undefined *)CONCAT26(local_188._6_2_,1);
  *(uint *)(&DAT_00001230 + param_1) = uVar11 | 1;
  puVar30 = PTR_DAT_04bb2ab0;
  local_178 = &local_16c;
  local_160._0_4_ = (uint)(uint3)local_160;
  local_180 = PTR_DAT_04bb2ab0 + 0x10;
  local_170 = 0x10;
  uStack_16e = 0;
  local_148 = (ushort)local_148._1_1_ << 8;
  local_144 = 0;
  local_164 = 0x72;
  uStack_163 = 0;
  local_158 = (undefined8 *)&DAT_ffffffff;
  local_150 = 0xffffffff00000000;
  local_16c = s_NpcPlayer_040bf633._0_4_;
  uVar5 = local_16c;
  uStack_168 = s_NpcPlayer_040bf633._4_2_;
  uVar6 = uStack_168;
  uStack_166 = s_NpcPlayer_040bf633._6_2_;
  uVar7 = uStack_166;
  FUN_03724440(param_1,&local_188);
  puVar14 = (undefined8 *)PTR_DAT_04bc3a48;
  puVar3 = PTR_DAT_04bb2720;
  if ((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) && ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0))
  {
    lVar18 = *(long *)PTR_DAT_04bb2720;
    if (lVar18 == 0) {
      puVar24 = &DAT_055c04a0;
    }
    else {
      puVar24 = &DAT_055c04a0;
      if (*(long *)(lVar18 + 0x330) != 0) {
        puVar24 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
        iVar9 = FUN_006bd550(*puVar24,0);
        puVar24 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar9 != 0x758f7eaf) {
          puVar24 = &DAT_055c04a0;
        }
      }
    }
    local_188._2_6_ = (uint6)((ulong)local_188 >> 0x10) & 0xffff00000000;
    local_188 = (undefined *)CONCAT62(local_188._2_6_,0x101);
    iVar9 = *(int *)(puVar24 + 7);
    local_178 = &local_16c;
    local_170 = 0x10;
    uStack_16e = 0;
    local_16c = 0x6e616d;
    local_180 = puVar30 + 0x10;
    local_160._0_4_ = (uint)(uint3)local_160;
    local_148 = local_148 & 0xff00;
    local_144 = 0;
    local_158 = (undefined8 *)&DAT_ffffffff;
    local_150 = 0xffffffff00000000;
    if (((iVar9 == -0x7975b8e8) || (iVar9 == -0x17df00c3)) || (iVar9 == -0x3e092032)) {
      local_1b8 = local_1b8 & 0xffffff;
      local_1c0 = (undefined1 *)CONCAT35(local_1c0._5_3_,8);
      local_1c8 = (undefined4 *)((long)&local_1c0 + 4);
      local_1d0 = PTR_DAT_04bb3768 + 0x10;
      if ((((ushort *)*puVar14 == (ushort *)0x0) || ((*(ushort *)*puVar14 & 1) == 0)) ||
         ((*(long *)PTR_DAT_04bc1530 == 0 ||
          (lVar18 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar18 == 0)))) {
        uVar23 = *(undefined2 *)(*(long *)PTR_DAT_04bb27f8 + 0x2a);
      }
      else if ((*(long **)(lVar18 + 0x60) == (long *)0x0) ||
              (puVar24 = (undefined8 *)**(long **)(lVar18 + 0x60), puVar24 == (undefined8 *)0x0)) {
        uVar23 = *(undefined2 *)(*(long *)(lVar18 + 0x48) + *(long *)(lVar18 + 0x40) + 2);
      }
      else {
        uVar13 = (**(code **)*puVar24)();
        uVar23 = *(undefined2 *)(*(long *)(lVar18 + 0x48) + *(long *)(lVar18 + 0x40) + 2);
        if ((((uVar13 & 1) != 0) && (*(long *)(lVar18 + 0x60) != 0)) &&
           (puVar24 = *(undefined8 **)(*(long *)(lVar18 + 0x60) + 8), puVar24 != (undefined8 *)0x0))
        {
          (**(code **)*puVar24)();
        }
      }
      uVar13 = FUN_0376b510(&local_1d0,uVar23);
      if ((uVar13 & 1) != 0) {
        (**(code **)(local_1d0 + 0x18))(&local_1d0);
        (**(code **)(local_1d0 + 0x18))(&local_1d0);
        puVar31 = local_1c8;
        (**(code **)(local_180 + 0x18))(&local_180);
        puVar4 = local_178;
        if (puVar31 == local_178) {
          if (puVar31 != (undefined4 *)&DAT_0409b647) {
LAB_03720ac8:
            iVar9 = 3;
            if (CONCAT22(uStack_16e,local_170) < 4) {
              iVar9 = CONCAT22(uStack_16e,local_170) + -1;
            }
            memcpy(local_178,&DAT_0409b647,(long)iVar9);
            *(undefined1 *)((long)puVar4 + (long)iVar9) = 0;
          }
        }
        else {
          uVar13 = 0;
          bVar8 = true;
          do {
            if (*(char *)((long)local_1c8 + uVar13) != *(char *)((long)local_178 + uVar13)) break;
            if (*(char *)((long)local_1c8 + uVar13) == '\0') {
              if ((bool)(local_178 != (undefined4 *)&DAT_0409b647 & bVar8)) goto LAB_03720ac8;
              break;
            }
            bVar8 = uVar13 < 0x80000;
            uVar13 = uVar13 + 1;
          } while (uVar13 != 0x80001);
        }
      }
    }
    FUN_03724440(param_1,&local_188);
  }
  local_188 = PTR_DAT_04bb2020 + 0x10;
  local_180 = "IsParty";
  iVar9 = FUN_02758850(&local_188);
  lVar18 = *(long *)puVar3;
  if (lVar18 == 0) {
    puVar24 = &DAT_055c04a0;
  }
  else {
    puVar24 = &DAT_055c04a0;
    if (*(long *)(lVar18 + 0x330) != 0) {
      puVar24 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
      iVar10 = FUN_006bd550(*puVar24,0);
      puVar24 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar10 != 0x758f7eaf) {
        puVar24 = &DAT_055c04a0;
      }
    }
  }
  iVar10 = *(int *)(puVar24 + 7);
  if (((iVar10 == -0x7975b8e8) || (iVar10 == -0x17df00c3)) || (iVar10 == -0x3e092032)) {
    puVar19 = (ushort *)*puVar14;
    if ((puVar19 == (ushort *)0x0) || ((*puVar19 & 1) == 0)) {
      local_178 = &local_16c;
      local_188 = (undefined *)CONCAT26(local_188._6_2_,1);
      local_170 = 0x10;
      uStack_16e = 0;
      local_16c = 0x636e6d;
      local_180 = puVar30 + 0x10;
      local_160._0_4_ = (uint)(uint3)local_160;
      local_148 = (ushort)local_148._1_1_ << 8;
      local_144 = 0;
      local_158 = (undefined8 *)&DAT_ffffffff;
      local_150 = 0xffffffff00000000;
      local_1c8 = (undefined4 *)((long)&local_1c0 + 4);
      local_1d0 = PTR_DAT_04bb3768 + 0x10;
      local_1b8 = local_1b8 & 0xffffff;
      local_1c0 = (undefined1 *)CONCAT35(local_1c0._5_3_,8);
      if ((puVar19 == (ushort *)0x0) ||
         ((((*puVar19 & 1) == 0 || (*(long *)PTR_DAT_04bc1530 == 0)) ||
          (lVar18 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar18 == 0)))) {
        uVar23 = *(undefined2 *)(*(long *)PTR_DAT_04bb27f8 + 0x2a);
      }
      else if ((*(long **)(lVar18 + 0x60) == (long *)0x0) ||
              (puVar24 = (undefined8 *)**(long **)(lVar18 + 0x60), puVar24 == (undefined8 *)0x0)) {
        uVar23 = *(undefined2 *)(*(long *)(lVar18 + 0x48) + *(long *)(lVar18 + 0x40) + 2);
      }
      else {
        uVar13 = (**(code **)*puVar24)();
        uVar23 = *(undefined2 *)(*(long *)(lVar18 + 0x48) + *(long *)(lVar18 + 0x40) + 2);
        if ((((uVar13 & 1) != 0) && (*(long *)(lVar18 + 0x60) != 0)) &&
           (puVar24 = *(undefined8 **)(*(long *)(lVar18 + 0x60) + 8), puVar24 != (undefined8 *)0x0))
        {
          (**(code **)*puVar24)();
        }
      }
      uVar13 = FUN_0376b510(&local_1d0,uVar23);
      if ((uVar13 & 1) != 0) {
        (**(code **)(local_1d0 + 0x18))(&local_1d0);
        (**(code **)(local_1d0 + 0x18))(&local_1d0);
        puVar31 = local_1c8;
        (**(code **)(local_180 + 0x18))(&local_180);
        puVar4 = local_178;
        if (puVar31 == local_178) {
          if (puVar31 != (undefined4 *)&DAT_040a033e) {
LAB_03720df0:
            iVar10 = 3;
            if (CONCAT22(uStack_16e,local_170) < 4) {
              iVar10 = CONCAT22(uStack_16e,local_170) + -1;
            }
            memcpy(local_178,&DAT_040a033e,(long)iVar10);
            *(undefined1 *)((long)puVar4 + (long)iVar10) = 0;
          }
        }
        else {
          uVar13 = 0;
          bVar8 = true;
          do {
            if (*(char *)((long)local_1c8 + uVar13) != *(char *)((long)local_178 + uVar13)) break;
            if (*(char *)((long)local_1c8 + uVar13) == '\0') {
              if ((bool)(local_178 != (undefined4 *)&DAT_040a033e & bVar8)) goto LAB_03720df0;
              break;
            }
            bVar8 = uVar13 < 0x80000;
            uVar13 = uVar13 + 1;
          } while (uVar13 != 0x80001);
        }
      }
      local_188._0_2_ = CONCAT11(1,(undefined1)local_188);
      FUN_03724440(param_1,&local_188);
    }
    lVar18 = *(long *)PTR_DAT_04bb27f8;
    if (lVar18 != 0) {
      local_160 = &local_158;
      local_178 = (undefined4 *)&uStack_168;
      uStack_168 = SUB82(&local_160,0);
      uStack_166 = (undefined2)((ulong)&local_160 >> 0x10);
      local_164 = (undefined1)((ulong)&local_160 >> 0x20);
      uStack_163 = (undefined1)((ulong)&local_160 >> 0x28);
      uStack_162 = (undefined2)((ulong)&local_160 >> 0x30);
      local_158 = &local_150;
      local_188 = (undefined *)0x0;
      local_180 = (char *)0x0;
      local_150 = 0;
      local_170 = SUB82(local_178,0);
      uStack_16e = (undefined2)((ulong)local_178 >> 0x10);
      local_16c = (undefined4)((ulong)local_178 >> 0x20);
      if ((char *)&local_148 != (char *)0x0) {
        local_188 = (undefined *)0x400000000;
        local_180 = (char *)&local_148;
      }
      if (((((ushort *)*puVar14 == (ushort *)0x0) || ((*(ushort *)*puVar14 & 1) == 0)) ||
          (*(long *)PTR_DAT_04bc1530 == 0)) ||
         (lVar25 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar25 == 0)) {
        puVar20 = (undefined2 *)(lVar18 + 0x2c);
        if ((*(ushort *)(lVar18 + 0x28) & 0x40) != 0) {
          puVar20 = (undefined2 *)(lVar18 + 0x2a);
        }
        uVar23 = *puVar20;
      }
      else if ((*(long **)(lVar25 + 0x60) == (long *)0x0) ||
              (puVar24 = (undefined8 *)**(long **)(lVar25 + 0x60), puVar24 == (undefined8 *)0x0)) {
        uVar23 = *(undefined2 *)(*(long *)(lVar25 + 0x48) + *(long *)(lVar25 + 0x40) + 2);
      }
      else {
        uVar13 = (**(code **)*puVar24)();
        uVar23 = *(undefined2 *)(*(long *)(lVar25 + 0x48) + *(long *)(lVar25 + 0x40) + 2);
        if ((((uVar13 & 1) != 0) && (*(long *)(lVar25 + 0x60) != 0)) &&
           (puVar24 = *(undefined8 **)(*(long *)(lVar25 + 0x60) + 8), puVar24 != (undefined8 *)0x0))
        {
          (**(code **)*puVar24)();
        }
      }
      local_1d0 = (undefined *)CONCAT62(local_1d0._2_6_,uVar23);
      uVar13 = FUN_03770770(&local_1d0,&local_188);
      if ((uVar13 & 1) == 0) {
        if (((((ushort *)*puVar14 == (ushort *)0x0) || ((*(ushort *)*puVar14 & 1) == 0)) ||
            (*(long *)PTR_DAT_04bc1530 == 0)) ||
           (lVar25 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar25 == 0)) {
          psVar1 = (short *)(lVar18 + 0x2c);
          if ((*(ushort *)(lVar18 + 0x28) & 0x40) != 0) {
            psVar1 = (short *)(lVar18 + 0x2a);
          }
          sVar26 = *psVar1;
LAB_03721050:
          puVar19 = (ushort *)*puVar14;
          if (puVar19 != (ushort *)0x0) goto LAB_03721058;
LAB_03721168:
          psVar1 = (short *)(lVar18 + 0x2a);
          if ((*(ushort *)(lVar18 + 0x28) & 0x40) != 0) {
            psVar1 = (short *)(lVar18 + 0x2c);
          }
          sVar27 = *psVar1;
        }
        else {
          if ((*(long **)(lVar25 + 0x60) == (long *)0x0) ||
             (puVar24 = (undefined8 *)**(long **)(lVar25 + 0x60), puVar24 == (undefined8 *)0x0)) {
            sVar26 = *(short *)(*(long *)(lVar25 + 0x48) + *(long *)(lVar25 + 0x40) + 2);
            puVar19 = (ushort *)*puVar14;
          }
          else {
            uVar13 = (**(code **)*puVar24)();
            sVar26 = *(short *)(*(long *)(lVar25 + 0x48) + *(long *)(lVar25 + 0x40) + 2);
            if ((((uVar13 & 1) == 0) || (*(long *)(lVar25 + 0x60) == 0)) ||
               (puVar24 = *(undefined8 **)(*(long *)(lVar25 + 0x60) + 8),
               puVar24 == (undefined8 *)0x0)) goto LAB_03721050;
            (**(code **)*puVar24)();
            puVar19 = (ushort *)*puVar14;
          }
          if (puVar19 == (ushort *)0x0) goto LAB_03721168;
LAB_03721058:
          if (((*puVar19 & 1) == 0) || (*(long *)PTR_DAT_04bc1530 == 0)) goto LAB_03721168;
          lVar18 = *(long *)(*(long *)PTR_DAT_04bc1530 + 0x10);
          if ((*(long **)(lVar18 + 0x11b0) == (long *)0x0) ||
             (puVar14 = (undefined8 *)**(long **)(lVar18 + 0x11b0), puVar14 == (undefined8 *)0x0)) {
            sVar27 = *(short *)(*(long *)(lVar18 + 0x1198) + *(long *)(lVar18 + 0x1190) + 2);
          }
          else {
            uVar13 = (**(code **)*puVar14)();
            sVar27 = *(short *)(*(long *)(lVar18 + 0x1198) + *(long *)(lVar18 + 0x1190) + 2);
            if ((((uVar13 & 1) != 0) && (*(long *)(lVar18 + 0x11b0) != 0)) &&
               (puVar14 = *(undefined8 **)(*(long *)(lVar18 + 0x11b0) + 8),
               puVar14 != (undefined8 *)0x0)) {
              (**(code **)*puVar14)();
            }
          }
        }
        puVar31 = (undefined4 *)((ulong)&local_1d0 | 1);
        if (sVar26 != -1) {
          *puVar31 = 0;
          local_1b8 = 0x10;
          local_1c8 = (undefined4 *)(puVar30 + 0x10);
          local_1d0 = (undefined *)CONCAT71(local_1d0._1_7_,1);
          *(undefined1 *)(puVar31 + 1) = 0;
          local_1a5 = 0;
          local_1b4[0] = 0;
          local_190 = 0;
          local_18c = 0;
          local_1a0 = 0xffffffff;
          uStack_198 = 0xffffffff00000000;
          local_1c0 = local_1b4;
          FUN_0376b510(&local_1c8,sVar26);
          uStack_198 = uStack_198 & 0xffffffff;
          local_1d0._0_6_ = CONCAT15(1,(undefined5)local_1d0);
          FUN_03724440(param_1,&local_1d0);
        }
        if (sVar27 != -1) {
          *puVar31 = 0;
          local_1d0 = (undefined *)CONCAT71(local_1d0._1_7_,1);
          *(undefined1 *)(puVar31 + 1) = 0;
          local_1b8 = 0x10;
          local_1a5 = 0;
          local_1b4[0] = 0;
          local_1c8 = (undefined4 *)(PTR_DAT_04bb2ab0 + 0x10);
          local_190 = 0;
          local_18c = 0;
          local_1a0 = 0xffffffff;
          uStack_198 = 0xffffffff00000000;
          local_1c0 = local_1b4;
          FUN_0376b510(&local_1c8,sVar27);
          uStack_198 = uStack_198 & 0xffffffff;
          local_1d0._0_6_ = CONCAT15(1,(undefined5)local_1d0);
          FUN_03724440(param_1,&local_1d0);
        }
      }
      else if ((int)local_188 != 0) {
        lVar18 = (long)(int)local_188 << 3;
        puVar31 = (undefined4 *)(PTR_DAT_04bb2ab0 + 0x10);
        pcVar29 = local_180;
        do {
          puVar20 = *(undefined2 **)pcVar29;
          local_1d0 = (undefined *)CONCAT71(local_1d0._1_7_,1);
          *(undefined4 *)((ulong)&local_1d0 | 1) = 0;
          *(undefined1 *)((undefined4 *)((ulong)&local_1d0 | 1) + 1) = 0;
          local_1b8 = 0x10;
          local_1a5 = 0;
          local_1b4[0] = 0;
          local_190 = 0;
          local_18c = 0;
          local_1a0 = 0xffffffff;
          uStack_198 = 0xffffffff00000000;
          local_1c8 = puVar31;
          local_1c0 = local_1b4;
          FUN_0376b510(&local_1c8,*puVar20);
          uStack_198 = uStack_198 & 0xffffffff;
          local_1d0._0_6_ = CONCAT15(1,(undefined5)local_1d0);
          FUN_03724440(param_1,&local_1d0);
          lVar18 = lVar18 + -8;
          pcVar29 = pcVar29 + 8;
        } while (lVar18 != 0);
      }
      puVar30 = PTR_DAT_04bb2ab0;
      puVar14 = (undefined8 *)PTR_DAT_04bc3a48;
    }
  }
  else if (iVar9 == 0) {
    lVar18 = *(long *)PTR_DAT_04bb27f8;
    if (((lVar18 != 0) && (*(int *)(lVar18 + 0x14) != 0)) &&
       (((ushort *)*puVar14 == (ushort *)0x0 || ((*(ushort *)*puVar14 & 1) == 0)))) {
      uVar11 = local_188._4_4_;
      local_188 = (undefined *)
                  (CONCAT44(local_188._4_4_,(uint)*(ushort *)(lVar18 + 0xdc)) & 0xffffffff0000000f);
      if ((int)local_188 != 0) {
        local_188 = (undefined *)((ulong)(uVar11 >> 0x10) << 0x30);
        local_188 = (undefined *)CONCAT62(local_188._2_6_,0x101);
        local_178 = &local_16c;
        local_160._0_4_ = (uint)(uint3)local_160;
        local_170 = 0x10;
        uStack_16e = 0;
        local_16c = 0x67746f;
        local_180 = puVar30 + 0x10;
        local_148 = (ushort)local_148._1_1_ << 8;
        local_144 = 0;
        local_158 = (undefined8 *)&DAT_ffffffff;
        local_150 = 0xffffffff00000000;
        FUN_03724440(param_1,&local_188);
        goto LAB_03721288;
      }
    }
    FUN_03721d10(param_1);
    FUN_03722418(param_1);
  }
LAB_03721288:
  if (((byte)(&DAT_00001230)[param_1] >> 6 & 1) != 0) goto LAB_03721c08;
  puVar20 = (undefined2 *)(param_1 + 0x11d2);
  if ((*(long *)PTR_DAT_04bb27f8 == 0) ||
     ((*(byte *)(*(long *)PTR_DAT_04bb27f8 + 0x1a71) >> 1 & 1) == 0)) {
    lVar18 = *(long *)PTR_DAT_04bb39b0;
    pbVar21 = PTR_DAT_04bb32e0;
    if (lVar18 == 0) {
LAB_0372130c:
      if (*pbVar21 < 8) goto LAB_03721378;
LAB_03721318:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_03721370:
        pbVar21 = PTR_DAT_04bb5038;
        goto LAB_03721378;
      }
      lVar18 = **(long **)PTR_DAT_04bb27d0;
      bVar17 = *(byte *)(lVar18 + 0x473);
      pbVar21 = PTR_DAT_04bb5038;
      if ((long)(char)bVar17 != 0xffffffffffffffff) {
        puVar2 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar17 & 0xffffffffU) * 0x20;
        if (7 < bVar17) {
          puVar2 = (uint *)(lVar18 + 0x48);
        }
        if ((*puVar2 & 8) != 0) {
          pbVar21 = (byte *)(lVar18 + 0x471);
        }
      }
      bVar17 = *pbVar21;
      if (7 < bVar17) goto LAB_03721370;
    }
    else {
      if (*(int *)(lVar18 + 0x15c) != 0) {
        pbVar21 = (byte *)(lVar18 + 0x158);
      }
      if (7 < *pbVar21) {
        if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar21 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_0372130c;
        }
        goto LAB_03721318;
      }
LAB_03721378:
      bVar17 = *pbVar21;
      if (7 < bVar17) {
        bVar17 = 0xff;
      }
    }
    if (7 < bVar17) {
      bVar17 = 0xff;
    }
    local_188 = (undefined *)CONCAT71(local_188._1_7_,bVar17);
    lVar25 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_188,1);
    lVar18 = 0;
    if (lVar25 != 0) {
      lVar18 = lVar25 + 0xa8;
    }
    if ((*(long **)(lVar18 + 0x28) == (long *)0x0) ||
       (puVar14 = (undefined8 *)**(long **)(lVar18 + 0x28), puVar14 == (undefined8 *)0x0)) {
      uVar13 = 0;
    }
    else {
      uVar13 = (**(code **)*puVar14)();
      uVar13 = uVar13 & 0xffffffff;
    }
    lVar25 = *(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8);
    if ((*(char *)(lVar25 + 0xaf89) == '\0') || (7 < *(byte *)(lVar25 + 0xaf88))) {
      lVar28 = lVar25;
      if ((*(char *)(lVar25 + 0xaf8a) != '\0') &&
         ((uVar16 = FUN_016e5e90(), (uVar16 & 1) != 0 &&
          (lVar28 = lVar25 + 0xaf90, (*(byte *)(lVar25 + 0xaf8b) & 0xfe) != 0)))) {
        lVar28 = lVar25;
      }
    }
    else {
      lVar28 = lVar25 + (ulong)*(byte *)(lVar25 + 0xaf88) * 0x11f8 + 0x1fc8;
    }
    puVar15 = (undefined2 *)FUN_026e85f0(lVar28);
    *(undefined2 *)(param_1 + 0x11d0) = *puVar15;
    *(undefined1 *)puVar20 = *(undefined1 *)(puVar15 + 1);
    *(undefined1 *)(param_1 + 0x11d3) = *(undefined1 *)((long)puVar15 + 3);
    *(undefined4 *)(param_1 + 0x11d4) = *(undefined4 *)(puVar15 + 2);
    lVar25 = *(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8);
    if ((*(char *)(lVar25 + 0xaf89) == '\0') || (7 < *(byte *)(lVar25 + 0xaf88))) {
      lVar28 = lVar25;
      if ((*(char *)(lVar25 + 0xaf8a) != '\0') &&
         ((uVar16 = FUN_016e5e90(), (uVar16 & 1) != 0 &&
          (lVar28 = lVar25 + 0xaf90, (*(byte *)(lVar25 + 0xaf8b) & 0xfe) != 0)))) {
        lVar28 = lVar25;
      }
    }
    else {
      lVar28 = lVar25 + (ulong)*(byte *)(lVar25 + 0xaf88) * 0x11f8 + 0x1fc8;
    }
    puVar15 = (undefined2 *)FUN_026ea320(lVar28);
    *(undefined2 *)(param_1 + 0x11d8) = *puVar15;
    *(undefined1 *)(param_1 + 0x11da) = *(undefined1 *)(puVar15 + 1);
    *(undefined1 *)(param_1 + 0x11db) = *(undefined1 *)((long)puVar15 + 3);
    *(undefined4 *)(param_1 + 0x11dc) = *(undefined4 *)(puVar15 + 2);
    lVar25 = *(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8);
    if ((*(char *)(lVar25 + 0xaf89) == '\0') || (7 < *(byte *)(lVar25 + 0xaf88))) {
      lVar28 = lVar25;
      if ((*(char *)(lVar25 + 0xaf8a) != '\0') &&
         ((uVar16 = FUN_016e5e90(), (uVar16 & 1) != 0 &&
          (lVar28 = lVar25 + 0xaf90, (*(byte *)(lVar25 + 0xaf8b) & 0xfe) != 0)))) {
        lVar28 = lVar25;
      }
    }
    else {
      lVar28 = lVar25 + (ulong)*(byte *)(lVar25 + 0xaf88) * 0x11f8 + 0x1fc8;
    }
    puVar15 = (undefined2 *)FUN_026ea720(lVar28);
    *(undefined2 *)(param_1 + 0x11e0) = *puVar15;
    *(undefined1 *)(param_1 + 0x11e2) = *(undefined1 *)(puVar15 + 1);
    *(undefined1 *)(param_1 + 0x11e3) = *(undefined1 *)((long)puVar15 + 3);
    *(undefined4 *)(param_1 + 0x11e4) = *(undefined4 *)(puVar15 + 2);
    lVar25 = *(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8);
    if ((*(char *)(lVar25 + 0xaf89) == '\0') || (7 < *(byte *)(lVar25 + 0xaf88))) {
      lVar28 = lVar25;
      if ((*(char *)(lVar25 + 0xaf8a) != '\0') &&
         ((uVar16 = FUN_016e5e90(), (uVar16 & 1) != 0 &&
          (lVar28 = lVar25 + 0xaf90, (*(byte *)(lVar25 + 0xaf8b) & 0xfe) != 0)))) {
        lVar28 = lVar25;
      }
    }
    else {
      lVar28 = lVar25 + (ulong)*(byte *)(lVar25 + 0xaf88) * 0x11f8 + 0x1fc8;
    }
    puVar15 = (undefined2 *)FUN_026e9240(lVar28);
    *(undefined2 *)(param_1 + 0x11f8) = *puVar15;
    *(undefined1 *)(param_1 + 0x11fa) = *(undefined1 *)(puVar15 + 1);
    *(undefined1 *)(param_1 + 0x11fb) = *(undefined1 *)((long)puVar15 + 3);
    *(undefined4 *)(param_1 + 0x11fc) = *(undefined4 *)(puVar15 + 2);
    lVar25 = *(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8);
    if ((*(char *)(lVar25 + 0xaf89) == '\0') || (7 < *(byte *)(lVar25 + 0xaf88))) {
      lVar28 = lVar25;
      if ((*(char *)(lVar25 + 0xaf8a) != '\0') &&
         ((uVar16 = FUN_016e5e90(), (uVar16 & 1) != 0 &&
          (lVar28 = lVar25 + 0xaf90, (*(byte *)(lVar25 + 0xaf8b) & 0xfe) != 0)))) {
        lVar28 = lVar25;
      }
    }
    else {
      lVar28 = lVar25 + (ulong)*(byte *)(lVar25 + 0xaf88) * 0x11f8 + 0x1fc8;
    }
    puVar15 = (undefined2 *)FUN_026e9470(lVar28);
    *(undefined2 *)(param_1 + 0x1200) = *puVar15;
    *(undefined1 *)(param_1 + 0x1202) = *(undefined1 *)(puVar15 + 1);
    *(undefined1 *)(param_1 + 0x1203) = *(undefined1 *)((long)puVar15 + 3);
    *(undefined4 *)(param_1 + 0x1204) = *(undefined4 *)(puVar15 + 2);
    lVar25 = *(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8);
    if ((*(char *)(lVar25 + 0xaf89) == '\0') || (7 < *(byte *)(lVar25 + 0xaf88))) {
      lVar28 = lVar25;
      if ((*(char *)(lVar25 + 0xaf8a) != '\0') &&
         ((uVar16 = FUN_016e5e90(), (uVar16 & 1) != 0 &&
          (lVar28 = lVar25 + 0xaf90, (*(byte *)(lVar25 + 0xaf8b) & 0xfe) != 0)))) {
        lVar28 = lVar25;
      }
    }
    else {
      lVar28 = lVar25 + (ulong)*(byte *)(lVar25 + 0xaf88) * 0x11f8 + 0x1fc8;
    }
    puVar15 = (undefined2 *)FUN_026e96a0(lVar28);
    *(undefined2 *)(param_1 + 0x1208) = *puVar15;
    *(undefined1 *)(param_1 + 0x120a) = *(undefined1 *)(puVar15 + 1);
    *(undefined1 *)(param_1 + 0x120b) = *(undefined1 *)((long)puVar15 + 3);
    *(undefined4 *)(param_1 + 0x120c) = *(undefined4 *)(puVar15 + 2);
    lVar25 = *(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8);
    if (((*(char *)(lVar25 + 0xaf89) == '\0') || (7 < *(byte *)(lVar25 + 0xaf88))) &&
       ((*(char *)(lVar25 + 0xaf8a) == '\0' ||
        ((uVar16 = FUN_016e5e90(), (uVar16 & 1) == 0 || (1 < *(byte *)(lVar25 + 0xaf8b))))))) {
      puVar15 = (undefined2 *)FUN_02814c00(lVar25);
    }
    else {
      puVar15 = (undefined2 *)PTR_DAT_04bb37e0;
    }
    *(undefined2 *)(param_1 + 0x1210) = *puVar15;
    *(undefined1 *)(param_1 + 0x1212) = *(undefined1 *)(puVar15 + 1);
    *(undefined1 *)(param_1 + 0x1213) = *(undefined1 *)((long)puVar15 + 3);
    *(undefined4 *)(param_1 + 0x1214) = *(undefined4 *)(puVar15 + 2);
    puVar3 = PTR_DAT_04bb43c0;
    lVar25 = *(long *)PTR_DAT_04bb43c0;
    uVar11 = FUN_0277d6c4(param_1 + 0x1210);
    if (*(long *)puVar3 == 0) {
LAB_03721928:
      puVar15 = (undefined2 *)FUN_028078d8(*(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8));
      *(undefined2 *)(param_1 + 0x11e8) = *puVar15;
      *(undefined1 *)(param_1 + 0x11ea) = *(undefined1 *)(puVar15 + 1);
      *(undefined1 *)(param_1 + 0x11eb) = *(undefined1 *)((long)puVar15 + 3);
      *(undefined4 *)(param_1 + 0x11ec) = *(undefined4 *)(puVar15 + 2);
      puVar15 = (undefined2 *)FUN_02807b30(*(long *)(lVar18 + 0x10) + *(long *)(lVar18 + 8));
      *(undefined2 *)(param_1 + 0x11f0) = *puVar15;
      *(undefined1 *)(param_1 + 0x11f2) = *(undefined1 *)(puVar15 + 1);
      *(undefined1 *)(param_1 + 0x11f3) = *(undefined1 *)((long)puVar15 + 3);
      *(undefined4 *)(param_1 + 0x11f4) = *(undefined4 *)(puVar15 + 2);
    }
    else {
      lVar25 = *(long *)(lVar25 + 0x57e58);
      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
      if ((*(uint *)(lVar25 + 0x1d8) <= uVar11) ||
         (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar11 * 8) == 0)) goto LAB_03721928;
      if ((*(long **)(lVar18 + 0x98) == (long *)0x0) ||
         (puVar14 = (undefined8 *)**(long **)(lVar18 + 0x98), puVar14 == (undefined8 *)0x0)) {
        uVar11 = 1;
      }
      else {
        uVar11 = (**(code **)*puVar14)();
        uVar11 = uVar11 ^ 1;
      }
      puVar15 = (undefined2 *)FUN_026e8d10(*(long *)(lVar18 + 0x80) + *(long *)(lVar18 + 0x78));
      *(undefined2 *)(param_1 + 0x11e8) = *puVar15;
      *(undefined1 *)(param_1 + 0x11ea) = *(undefined1 *)(puVar15 + 1);
      *(undefined1 *)(param_1 + 0x11eb) = *(undefined1 *)((long)puVar15 + 3);
      *(undefined4 *)(param_1 + 0x11ec) = *(undefined4 *)(puVar15 + 2);
      puVar15 = (undefined2 *)FUN_026e9010(*(long *)(lVar18 + 0x80) + *(long *)(lVar18 + 0x78));
      *(undefined2 *)(param_1 + 0x11f0) = *puVar15;
      *(undefined1 *)(param_1 + 0x11f2) = *(undefined1 *)(puVar15 + 1);
      *(undefined1 *)(param_1 + 0x11f3) = *(undefined1 *)((long)puVar15 + 3);
      *(undefined4 *)(param_1 + 0x11f4) = *(undefined4 *)(puVar15 + 2);
      if ((((uVar11 & 1) == 0) && (*(long *)(lVar18 + 0x98) != 0)) &&
         (puVar14 = *(undefined8 **)(*(long *)(lVar18 + 0x98) + 8), puVar14 != (undefined8 *)0x0)) {
        (**(code **)*puVar14)();
      }
    }
    if ((((uVar13 & 1) != 0) && (*(long *)(lVar18 + 0x28) != 0)) &&
       (puVar14 = *(undefined8 **)(*(long *)(lVar18 + 0x28) + 8), puVar14 != (undefined8 *)0x0)) {
      (**(code **)*puVar14)();
    }
  }
  else {
    FUN_0254180c(&local_188);
    *(undefined2 *)(param_1 + 0x11d0) = (undefined2)local_188;
    *puVar20 = local_188._2_2_;
    *(uint *)(param_1 + 0x11d4) = local_188._4_4_;
    *(undefined2 *)(param_1 + 0x11d8) = (undefined2)local_180;
    *(undefined2 *)(param_1 + 0x11da) = local_180._2_2_;
    *(undefined4 *)(param_1 + 0x11dc) = local_180._4_4_;
    *(undefined2 *)(param_1 + 0x11e0) = (undefined2)local_178;
    *(undefined2 *)(param_1 + 0x11e2) = local_178._2_2_;
    *(undefined4 *)(param_1 + 0x11e4) = local_178._4_4_;
    *(undefined2 *)(param_1 + 0x11e8) = local_170;
    *(undefined2 *)(param_1 + 0x11ea) = uStack_16e;
    *(undefined4 *)(param_1 + 0x11ec) = local_16c;
    *(undefined2 *)(param_1 + 0x11f0) = uStack_168;
    *(undefined2 *)(param_1 + 0x11f2) = uStack_166;
    *(uint *)(param_1 + 0x11f4) = CONCAT22(uStack_162,CONCAT11(uStack_163,local_164));
    *(undefined2 *)(param_1 + 0x11f8) = (undefined2)local_160;
    *(undefined2 *)(param_1 + 0x11fa) = local_160._2_2_;
    *(undefined4 *)(param_1 + 0x11fc) = local_160._4_4_;
    *(undefined2 *)(param_1 + 0x1200) = (undefined2)local_158;
    *(undefined2 *)(param_1 + 0x1202) = local_158._2_2_;
    *(undefined4 *)(param_1 + 0x1204) = local_158._4_4_;
    *(undefined2 *)(param_1 + 0x1208) = (undefined2)local_150;
    *(undefined2 *)(param_1 + 0x120a) = local_150._2_2_;
    *(undefined4 *)(param_1 + 0x120c) = local_150._4_4_;
    *(ushort *)(param_1 + 0x1210) = local_148;
    *(undefined2 *)(param_1 + 0x1212) = local_146;
    *(undefined4 *)(param_1 + 0x1214) = local_144;
  }
  if (iVar9 != 0) {
    local_188 = (undefined *)0x3955;
    FUN_0277d4ac(&local_188);
    *(undefined2 *)(param_1 + 0x11d0) = (undefined2)local_188;
    *puVar20 = local_188._2_2_;
    *(uint *)(param_1 + 0x11d4) = local_188._4_4_;
  }
  puVar14 = (undefined8 *)PTR_DAT_04bc3a48;
  local_158._0_4_ = (uint)(uint3)local_158;
  local_164 = 0;
  uStack_168 = 0x10;
  uStack_166 = 0;
  local_150 = CONCAT62(local_150._2_6_,0xffff);
  local_150 = CONCAT44(3,(undefined4)local_150);
  local_178 = (undefined4 *)(puVar30 + 0x10);
  local_170 = SUB82(&local_164,0);
  uStack_16e = (undefined2)((ulong)&local_164 >> 0x10);
  local_16c = (undefined4)((ulong)&local_164 >> 0x20);
  local_188 = PTR_DAT_04bcacd8 + 0x10;
  local_148 = *(ushort *)PTR_DAT_04bb37e0;
  local_13e = PTR_DAT_04bb37e0[2];
  local_13d = PTR_DAT_04bb37e0[3];
  local_146 = *(undefined2 *)(PTR_DAT_04bb37e0 + 2);
  local_144 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_98 = 0;
  uStack_90 = 0;
  local_180 = (char *)CONCAT44(local_180._4_4_,*(undefined4 *)PTR_DAT_04bb3238);
  local_70 = 0;
  local_74 = 0;
  local_b8 = 0xffffffff;
  uStack_b0 = 0xffffffff00000000;
  local_a8 = 0xffffffff;
  uStack_a0 = 0xffffffffffffffff;
  local_88 = 0x244db4da;
  local_84 = 0;
  uStack_7c = 0;
  local_140 = local_148;
  local_13c = local_144;
  local_138 = local_148;
  local_136 = local_13e;
  local_135 = local_13d;
  local_134 = local_144;
  local_130 = local_148;
  local_12e = local_13e;
  local_12d = local_13d;
  local_12c = local_144;
  local_128 = local_148;
  local_126 = local_13e;
  local_125 = local_13d;
  local_124 = local_144;
  local_120 = local_148;
  local_11e = local_13e;
  local_11d = local_13d;
  local_11c = local_144;
  local_118 = local_148;
  local_116 = local_13e;
  local_115 = local_13d;
  local_114 = local_144;
  local_110 = local_148;
  local_10e = local_13e;
  local_10d = local_13d;
  local_10c = local_144;
  local_108 = local_148;
  local_106 = local_13e;
  local_105 = local_13d;
  local_104 = local_144;
  local_100 = local_148;
  local_fe = local_13e;
  local_fd = local_13d;
  local_fc = local_144;
  local_f8 = local_148;
  local_f6 = local_13e;
  local_f5 = local_13d;
  local_f4 = local_144;
  local_f0 = local_148;
  local_ee = local_13e;
  local_ed = local_13d;
  local_ec = local_144;
  local_e8 = local_148;
  local_e6 = local_13e;
  local_e5 = local_13d;
  local_e4 = local_144;
  local_e0 = local_148;
  local_de = local_13e;
  local_dd = local_13d;
  local_dc = local_144;
  local_d8 = local_148;
  local_d6 = local_13e;
  local_d5 = local_13d;
  local_d4 = local_144;
  local_d0 = local_148;
  local_ce = local_13e;
  local_cd = local_13d;
  local_cc = local_144;
  local_c8 = local_148;
  local_c6 = local_13e;
  local_c5 = local_13d;
  local_c4 = local_144;
  local_c0 = local_148;
  local_be = local_13e;
  local_bd = local_13d;
  local_bc = local_144;
  if (*(int *)(param_1 + 0xe0) != 0) {
    plVar22 = *(long **)(param_1 + 0xe8);
    lVar18 = (long)*(int *)(param_1 + 0xe0) << 3;
    do {
      if ((*(ushort *)(*plVar22 + 0x114) & 1) != 0) {
        FUN_0373b290(&local_188);
        local_1c8 = (undefined4 *)((ulong)local_1c8 & 0xffffffffffff0000);
        local_1d0 = (undefined *)CONCAT44(local_1d0._4_4_,(undefined4)local_b8);
        uVar12 = FUN_0252d29c();
        local_1d0 = (undefined *)CONCAT44(uVar12,(undefined4)local_1d0);
        FUN_021283a0(param_1 + 0x11d0,&local_1d0);
        break;
      }
      plVar22 = plVar22 + 1;
      lVar18 = lVar18 + -8;
    } while (lVar18 != 0);
  }
  *(uint *)(&DAT_00001230 + param_1) = *(uint *)(&DAT_00001230 + param_1) | 0x40;
LAB_03721c08:
  if (((ushort *)*puVar14 == (ushort *)0x0) || ((*(ushort *)*puVar14 & 1) == 0)) {
    return 1;
  }
  uVar13 = FUN_03784ec0();
  if ((uVar13 & 1) == 0) {
    local_180 = puVar30 + 0x10;
    local_170 = 0x10;
    uStack_16e = 0;
    local_178 = &local_16c;
    local_188 = (undefined *)CONCAT26(local_188._6_2_,1);
    local_160._0_4_ = (uint)(uint3)local_160;
    local_148 = local_148 & 0xff00;
    local_144 = 0;
    local_164 = 0x72;
    uStack_163 = 0;
    local_188 = (undefined *)CONCAT44(local_188._4_4_,0x1000001);
    local_158 = (undefined8 *)0xffffffff;
    local_150 = 0xffffffff00000000;
    local_16c = uVar5;
    uStack_168 = uVar6;
    uStack_166 = uVar7;
    FUN_03724440(param_1,&local_188);
    return 1;
  }
  return 1;
}

