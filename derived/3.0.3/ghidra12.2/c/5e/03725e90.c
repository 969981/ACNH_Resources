
undefined8
FUN_03725e90(undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
            long param_6)

{
  undefined *__dest;
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  short sVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  bool bVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  ulong uVar18;
  uint *puVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  byte *pbVar23;
  undefined *__src;
  ushort *puVar24;
  char cVar25;
  uint *puVar26;
  int *piVar27;
  short sVar28;
  char *pcVar29;
  char *__dest_00;
  char *pcVar30;
  undefined8 *puVar31;
  int iVar32;
  long *plVar33;
  int iVar34;
  undefined4 *puVar35;
  undefined *puVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined8 local_208;
  char *local_200;
  int local_1f8;
  undefined4 uStack_1f4;
  undefined8 local_1f0;
  int local_1e8;
  int iStack_1e4;
  undefined4 uStack_1e0;
  char local_1dc [8];
  char local_1d4 [8];
  char local_1cc [8];
  char local_1c4 [8];
  ulong local_1bc;
  undefined1 local_1b4;
  undefined1 local_175;
  undefined8 local_130;
  char *local_128;
  int local_120;
  char local_11c [7];
  undefined1 local_115;
  undefined1 local_fd;
  undefined4 local_d8;
  undefined8 local_d4;
  float local_cc;
  undefined *local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined1 local_ad;
  undefined *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined1 local_8d;
  
  puVar11 = PTR_DAT_04bb2720;
  lVar21 = *(long *)PTR_DAT_04bb2720;
  if (lVar21 == 0) {
    puVar31 = &DAT_055c04a0;
  }
  else {
    puVar31 = &DAT_055c04a0;
    if (*(long *)(lVar21 + 0x330) != 0) {
      puVar31 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar21 + 0x338));
      iVar14 = FUN_006bd550(*puVar31,0);
      puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar14 != 0x758f7eaf) {
        puVar31 = &DAT_055c04a0;
      }
    }
  }
  puVar1 = PTR_DAT_04bb59d8;
  puVar36 = PTR_DAT_04bb2020;
  uVar7 = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7._24_8_;
  uVar20 = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7._16_8_;
  if (*(long *)PTR_DAT_04bb59d8 == 0) {
    return 0;
  }
  iVar14 = *(int *)(puVar31 + 7);
  uVar5 = *(ushort *)(param_6 + 0x114);
  uVar16 = (uint)uVar5;
  if ((((uVar5 >> 5 & 1) != 0) && (*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0)) &&
     ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0)) {
    local_115 = 0;
    plVar33 = (long *)(param_6 + 0x10);
    local_120 = 8;
    local_130 = PTR_DAT_04bb6a30 + 0x10;
    local_128 = local_11c;
    (**(code **)(*plVar33 + 0x18))(plVar33);
    pcVar29 = *(char **)(param_6 + 0x18);
    if (local_11c != pcVar29) {
      (**(code **)(*(long *)(param_6 + 0x10) + 0x18))(plVar33);
      lVar21 = 0;
      do {
        if (*(char *)(*(long *)(param_6 + 0x18) + lVar21) == '\0') goto LAB_03726750;
        lVar22 = *(long *)(param_6 + 0x18) + lVar21;
        if (*(char *)(lVar22 + 1) == '\0') {
          lVar21 = lVar21 + 1;
          goto LAB_03726750;
        }
        if (*(char *)(lVar22 + 2) == '\0') {
          lVar21 = lVar21 + 2;
          goto LAB_03726750;
        }
        lVar21 = lVar21 + 3;
      } while (lVar21 != 0x80001);
      lVar21 = 0;
LAB_03726750:
      iVar14 = (int)lVar21;
      if (local_120 <= (int)lVar21) {
        iVar14 = local_120 + -1;
      }
      memcpy(local_11c,pcVar29,(long)iVar14);
      local_11c[iVar14] = '\0';
    }
    local_a0 = (undefined *)((long)&local_98 + 4);
    local_8d = 0;
    local_130 = PTR_DAT_04bb3768 + 0x10;
    local_98 = 0x6e614d00000008;
    lVar21 = *(long *)puVar11;
    local_a8 = local_130;
    if (lVar21 == 0) {
      puVar31 = &DAT_055c04a0;
    }
    else {
      puVar31 = &DAT_055c04a0;
      if (*(long *)(lVar21 + 0x330) != 0) {
        puVar31 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar21 + 0x338));
        iVar14 = FUN_006bd550(*puVar31,0);
        puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar14 != 0x758f7eaf) {
          puVar31 = &DAT_055c04a0;
        }
      }
    }
    local_1f8 = 0;
    uStack_1f4 = 0;
    local_208 = PTR_DAT_04bbc1a0 + 0x10;
    local_200 = PTR_DAT_04bb2010 + 0x10;
    iVar14 = *(int *)(puVar31 + 7);
    local_1e8 = 0;
    iStack_1e4 = 0;
    local_1f0 = local_200;
    if (((*(byte *)(param_6 + 0x114) >> 3 & 1) == 0) ||
       (*(int *)(PTR_DAT_04bc3a80 + 0x38) != *(int *)(param_6 + 0x100))) {
      if (iVar14 == -0x17df00c3) {
        lVar21 = *(long *)puVar1;
        local_1f8 = *(int *)(lVar21 + 0x50);
        uStack_1f4 = *(int *)(lVar21 + 0x54);
        local_1e8 = *(int *)(lVar21 + 0x60);
        iStack_1e4 = *(int *)(lVar21 + 100);
      }
      else {
        if (DAT_05ac0a90 == iVar14) {
          lVar21 = 0;
        }
        else if (DAT_05ac0aa0 == iVar14) {
          lVar21 = 1;
        }
        else if (DAT_05ac0ab0 == iVar14) {
          lVar21 = 2;
        }
        else if (DAT_05ac0ac0 == iVar14) {
          lVar21 = 3;
        }
        else if (DAT_05ac0ad0 == iVar14) {
          lVar21 = 4;
        }
        else if (DAT_05ac0ae0 == iVar14) {
          lVar21 = 5;
        }
        else if (DAT_05ac0af0 == iVar14) {
          lVar21 = 6;
        }
        else if (DAT_05ac0b00 == iVar14) {
          lVar21 = 7;
        }
        else if (DAT_05ac0b10 == iVar14) {
          lVar21 = 8;
        }
        else {
          if (DAT_05ac0b20 != iVar14) {
            return 0;
          }
          lVar21 = 9;
        }
        local_c8 = (undefined *)CONCAT44(local_c8._4_4_,(&DAT_05ac0a98)[lVar21 * 4]);
        if ((&DAT_05ac0a98)[lVar21 * 4] != 0) {
          return 0;
        }
        FUN_01811430(&local_208);
      }
      fVar37 = (float)local_1e8 * 5.0;
      fVar40 = (float)iStack_1e4 * 5.0 + -10.0;
      uVar17 = FUN_006f0400(((float)local_1f8 * 5.0 + 5.0) - fVar37,
                            ((float)uStack_1f4 * 5.0 + 5.0 + 5.0) - fVar40);
      uVar43 = 0;
    }
    else {
      fVar37 = *(float *)(param_6 + 0xf0);
      uVar43 = *(undefined4 *)(param_6 + 0xf4);
      fVar40 = *(float *)(param_6 + 0xf8);
      uVar17 = *(undefined4 *)(param_6 + 0xfc);
    }
    (**(code **)(local_130 + 0x18))(&local_130);
    pcVar29 = local_128;
    (**(code **)(local_a8 + 0x18))(&local_a8);
    FUN_0074fda4(&local_208,"%s/AIC:WherearenInspect/AIF:AI_NPC_%s_WherearenGarden",pcVar29,local_a0
                );
    *(float *)(param_5 + 8) = fVar37;
    *(undefined4 *)(param_5 + 0xc) = uVar43;
    *(float *)(param_5 + 0x10) = fVar40;
    *(undefined4 *)(param_5 + 0x18) = uVar17;
    __dest_00 = *(char **)(param_5 + 0x38);
    (**(code **)(local_208 + 0x18))(&local_208);
    pcVar30 = local_200;
    pcVar29 = local_1f0;
    if (__dest_00 != local_200) {
      (**(code **)(local_208 + 0x18))(&local_208);
      lVar21 = 0;
      do {
        if (local_200[lVar21] == '\0') goto LAB_037283cc;
        if (local_200[lVar21 + 1] == '\0') {
          lVar21 = lVar21 + 1;
          goto LAB_037283cc;
        }
        if (local_200[lVar21 + 2] == '\0') {
          lVar21 = lVar21 + 2;
          goto LAB_037283cc;
        }
        lVar21 = lVar21 + 3;
      } while (lVar21 != 0x80001);
      lVar21 = 0;
LAB_037283cc:
      iVar14 = (int)lVar21;
      if (*(int *)(param_5 + 0x40) <= (int)lVar21) {
        iVar14 = *(int *)(param_5 + 0x40) + -1;
      }
      memcpy(__dest_00,pcVar30,(long)iVar14);
      __dest_00[iVar14] = '\0';
      pcVar29 = local_1f0;
    }
    goto LAB_03728864;
  }
  if (*(int *)(param_6 + 0x3c) == 2) {
    if ((uVar5 & 1) != 0) {
      local_1f8 = 0x40;
      pcVar29 = *(char **)(param_5 + 0x38);
      local_200 = (char *)&uStack_1f4;
      *(undefined8 *)(param_5 + 8) = 0;
      *(undefined4 *)(param_5 + 0x10) = 0;
      uVar10 = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7._40_8_;
      uVar9 = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7._32_8_;
      uVar8 = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7._24_8_;
      s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x18] = (char)uVar7;
      s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x19] = SUB81(uVar7,1);
      s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x1a] = SUB81(uVar7,2);
      s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x1b] = SUB81(uVar7,3);
      s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x1c] = SUB81(uVar7,4);
      s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x1d] = SUB81(uVar7,5);
      s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x1e] = SUB81(uVar7,6);
      s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x1f] = SUB81(uVar7,7);
      local_1dc[0] = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x18];
      local_1dc[1] = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x19];
      local_1dc[2] = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x1a];
      local_1dc[3] = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x1b];
      local_1dc[4] = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x1c];
      local_1dc[5] = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x1d];
      local_1dc[6] = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x1e];
      local_1dc[7] = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x1f];
      s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7._24_8_ = uVar8;
      *(undefined4 *)(param_5 + 0x18) = 0;
      uVar8 = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7._40_8_;
      uVar7 = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7._32_8_;
      iStack_1e4 = (int)uVar20;
      uStack_1e0 = SUB84(uVar20,4);
      local_1bc = CONCAT35(local_1bc._5_3_,0x72657961);
      s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x20] = (char)uVar9;
      s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x21] = SUB81(uVar9,1);
      s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x22] = SUB81(uVar9,2);
      s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x23] = SUB81(uVar9,3);
      s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x24] = SUB81(uVar9,4);
      s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x25] = SUB81(uVar9,5);
      s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x26] = SUB81(uVar9,6);
      s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x27] = SUB81(uVar9,7);
      local_1d4[0] = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x20];
      local_1d4[1] = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x21];
      local_1d4[2] = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x22];
      local_1d4[3] = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x23];
      local_1d4[4] = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x24];
      local_1d4[5] = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x25];
      local_1d4[6] = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x26];
      local_1d4[7] = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x27];
      s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x28] = (char)uVar10;
      s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x29] = SUB81(uVar10,1);
      s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x2a] = SUB81(uVar10,2);
      s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x2b] = SUB81(uVar10,3);
      s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x2c] = SUB81(uVar10,4);
      s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x2d] = SUB81(uVar10,5);
      s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x2e] = SUB81(uVar10,6);
      s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x2f] = SUB81(uVar10,7);
      local_1cc[0] = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x28];
      local_1cc[1] = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x29];
      local_1cc[2] = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x2a];
      local_1cc[3] = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x2b];
      local_1cc[4] = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x2c];
      local_1cc[5] = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x2d];
      local_1cc[6] = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x2e];
      local_1cc[7] = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x2f];
      local_1c4[0] = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x30];
      local_1c4[1] = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x31];
      local_1c4[2] = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x32];
      local_1c4[3] = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x33];
      local_1c4[4] = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x34];
      local_1c4[5] = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x35];
      local_1c4[6] = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x36];
      local_1c4[7] = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7[0x37];
      uStack_1f4 = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7._0_4_;
      local_1f0._0_4_ = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7._4_4_;
      local_1f0._4_4_ = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7._8_4_;
      local_1e8 = s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7._12_4_;
      s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7._32_8_ = uVar7;
      s_NpcPlayer_AIC_WherearenEditPlaye_040b7cb7._40_8_ = uVar8;
      if (pcVar29 != local_200) {
        lVar21 = 0;
        local_1bc = local_1bc & 0xffffffffffffff;
        do {
          if (local_1dc[lVar21 + -0x18] == '\0') goto LAB_03726624;
          if (local_1dc[lVar21 + -0x17] == '\0') {
            lVar21 = lVar21 + 1;
            goto LAB_03726624;
          }
          if (local_1dc[lVar21 + -0x16] == '\0') {
            lVar21 = lVar21 + 2;
            goto LAB_03726624;
          }
          lVar21 = lVar21 + 3;
        } while (lVar21 != 0x80001);
        lVar21 = 0;
LAB_03726624:
        iVar14 = (int)lVar21;
        if (*(int *)(param_5 + 0x40) <= (int)lVar21) {
          iVar14 = *(int *)(param_5 + 0x40) + -1;
        }
        memcpy(pcVar29,local_200,(long)iVar14);
        pcVar29[iVar14] = '\0';
      }
      lVar21 = *(long *)PTR_DAT_04bb39b0;
      pbVar23 = PTR_DAT_04bb32e0;
      if (lVar21 == 0) {
LAB_037266a8:
        if (*pbVar23 < 8) goto LAB_03726720;
LAB_037266b4:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_03726718:
          pbVar23 = PTR_DAT_04bb5038;
          goto LAB_03726720;
        }
        lVar21 = **(long **)PTR_DAT_04bb27d0;
        bVar13 = *(byte *)(lVar21 + 0x473);
        pbVar23 = PTR_DAT_04bb5038;
        if ((long)(char)bVar13 != 0xffffffffffffffff) {
          puVar19 = (uint *)(lVar21 + 0x48) + ((long)(char)bVar13 & 0xffffffffU) * 0x20;
          if (7 < bVar13) {
            puVar19 = (uint *)(lVar21 + 0x48);
          }
          if ((*puVar19 & 8) != 0) {
            pbVar23 = (byte *)(lVar21 + 0x471);
          }
        }
        bVar13 = *pbVar23;
        bVar12 = 7 < bVar13;
        if (bVar12) {
          bVar13 = 0xff;
        }
        local_208 = (undefined *)CONCAT71(local_208._1_7_,bVar13);
        if (bVar12) goto LAB_03726718;
      }
      else {
        if (*(int *)(lVar21 + 0x15c) != 0) {
          pbVar23 = (byte *)(lVar21 + 0x158);
        }
        if (7 < *pbVar23) {
          if ((*(int *)(lVar21 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar23 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_037266a8;
          }
          goto LAB_037266b4;
        }
LAB_03726720:
        bVar13 = *pbVar23;
        if (7 < bVar13) {
          bVar13 = 0xff;
        }
        local_208 = (undefined *)CONCAT71(local_208._1_7_,bVar13);
      }
      uVar17 = FUN_02582fe0(&local_208);
      *(undefined4 *)(param_5 + 0x1c) = 0;
      *(undefined4 *)(param_5 + 0x20) = uVar17;
      pcVar29 = (char *)CONCAT44(local_1f0._4_4_,(uint)local_1f0);
      goto LAB_03728864;
    }
    lVar21 = *(long *)puVar11;
    local_128 = (char *)((ulong)local_128 & 0xffffffff00000000);
    local_130 = (undefined *)0x0;
    if (lVar21 == 0) {
      puVar31 = &DAT_055c04a0;
    }
    else {
      puVar31 = &DAT_055c04a0;
      if (*(long *)(lVar21 + 0x330) != 0) {
        puVar31 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar21 + 0x338));
        iVar14 = FUN_006bd550(*puVar31,0);
        puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar14 != 0x758f7eaf) {
          puVar31 = &DAT_055c04a0;
        }
        uVar16 = (uint)*(ushort *)(param_6 + 0x114);
      }
    }
    local_1e8 = 0;
    iStack_1e4 = 0;
    local_208 = PTR_DAT_04bbc1a0 + 0x10;
    local_200 = PTR_DAT_04bb2010 + 0x10;
    iVar14 = *(int *)(puVar31 + 7);
    local_1f8 = 0;
    uStack_1f4 = 0;
    if (((uVar16 >> 3 & 1) == 0) || (*(int *)(PTR_DAT_04bc3a80 + 0x38) != *(int *)(param_6 + 0x100))
       ) {
      local_1f0 = local_200;
      if (iVar14 == -0x17df00c3) {
        lVar21 = *(long *)puVar1;
        iVar14 = *(int *)(lVar21 + 0x50);
        iVar32 = *(int *)(lVar21 + 0x54);
        iVar15 = *(int *)(lVar21 + 0x60);
        iVar34 = *(int *)(lVar21 + 100);
        local_1f8 = iVar14;
        uStack_1f4 = iVar32;
        local_1e8 = iVar15;
        iStack_1e4 = iVar34;
        uVar18 = FUN_0371c590(param_4,&local_130,1);
        if ((uVar18 & 1) == 0) goto LAB_03728048;
        fVar37 = (float)local_130;
        fVar40 = local_128._0_4_;
      }
      else {
        if (DAT_05ac0a90 == iVar14) {
          lVar21 = 0;
        }
        else if (DAT_05ac0aa0 == iVar14) {
          lVar21 = 1;
        }
        else if (DAT_05ac0ab0 == iVar14) {
          lVar21 = 2;
        }
        else if (DAT_05ac0ac0 == iVar14) {
          lVar21 = 3;
        }
        else if (DAT_05ac0ad0 == iVar14) {
          lVar21 = 4;
        }
        else if (DAT_05ac0ae0 == iVar14) {
          lVar21 = 5;
        }
        else if (DAT_05ac0af0 == iVar14) {
          lVar21 = 6;
        }
        else if (DAT_05ac0b00 == iVar14) {
          lVar21 = 7;
        }
        else if (DAT_05ac0b10 == iVar14) {
          lVar21 = 8;
        }
        else {
          if (DAT_05ac0b20 != iVar14) {
            return 0;
          }
          lVar21 = 9;
        }
        local_a8 = (undefined *)CONCAT44(local_a8._4_4_,(&DAT_05ac0a98)[lVar21 * 4]);
        if ((&DAT_05ac0a98)[lVar21 * 4] != 0) {
          return 0;
        }
        FUN_01811430(&local_208);
        iVar14 = local_1f8;
        iVar32 = uStack_1f4;
        iVar15 = local_1e8;
        iVar34 = iStack_1e4;
LAB_03728048:
        fVar37 = (float)iVar15 * 5.0;
        fVar40 = (float)iVar34 * 5.0;
        local_130 = (undefined *)CONCAT44(local_130._4_4_,fVar37);
        local_128 = (char *)CONCAT44(local_128._4_4_,fVar40);
      }
      uVar17 = FUN_006f0400(((float)iVar14 * 5.0 + 5.0) - fVar37,
                            ((float)iVar32 * 5.0 + 5.0 + 5.0) - fVar40);
      uVar43 = (float)local_130;
      uVar41 = local_130._4_4_;
      uVar42 = local_128._0_4_;
    }
    else {
      local_130 = *(undefined **)(param_6 + 0xf0);
      uVar17 = *(undefined4 *)(param_6 + 0xfc);
      local_128 = (char *)CONCAT44(local_128._4_4_,*(undefined4 *)(param_6 + 0xf8));
      uVar43 = *(undefined4 *)(param_6 + 0xf0);
      uVar41 = *(undefined4 *)(param_6 + 0xf4);
      uVar42 = *(undefined4 *)(param_6 + 0xf8);
    }
    uVar8 = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7._40_8_;
    uVar20 = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7._32_8_;
    local_1f8 = 0x80;
    pcVar29 = *(char **)(param_5 + 0x38);
    local_200 = (char *)&uStack_1f4;
    *(undefined4 *)(param_5 + 8) = uVar43;
    *(undefined4 *)(param_5 + 0xc) = uVar41;
    *(undefined4 *)(param_5 + 0x10) = uVar42;
    *(undefined4 *)(param_5 + 0x18) = uVar17;
    uVar9 = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7._40_8_;
    uVar7 = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7._32_8_;
    local_1b4 = 0;
    s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x20] = (char)uVar20;
    s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x21] = SUB81(uVar20,1);
    s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x22] = SUB81(uVar20,2);
    s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x23] = SUB81(uVar20,3);
    s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x24] = SUB81(uVar20,4);
    s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x25] = SUB81(uVar20,5);
    s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x26] = SUB81(uVar20,6);
    s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x27] = SUB81(uVar20,7);
    local_1d4[0] = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x20];
    local_1d4[1] = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x21];
    local_1d4[2] = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x22];
    local_1d4[3] = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x23];
    local_1d4[4] = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x24];
    local_1d4[5] = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x25];
    local_1d4[6] = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x26];
    local_1d4[7] = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x27];
    s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x28] = (char)uVar8;
    s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x29] = SUB81(uVar8,1);
    s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x2a] = SUB81(uVar8,2);
    s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x2b] = SUB81(uVar8,3);
    s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x2c] = SUB81(uVar8,4);
    s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x2d] = SUB81(uVar8,5);
    s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x2e] = SUB81(uVar8,6);
    s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x2f] = SUB81(uVar8,7);
    local_1cc[0] = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x28];
    local_1cc[1] = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x29];
    local_1cc[2] = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x2a];
    local_1cc[3] = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x2b];
    local_1cc[4] = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x2c];
    local_1cc[5] = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x2d];
    local_1cc[6] = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x2e];
    local_1cc[7] = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x2f];
    local_1c4[0] = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x30];
    local_1c4[1] = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x31];
    local_1c4[2] = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x32];
    local_1c4[3] = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x33];
    local_1c4[4] = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x34];
    local_1c4[5] = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x35];
    local_1c4[6] = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x36];
    local_1c4[7] = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x37];
    local_1bc._0_1_ = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x38];
    local_1bc._1_1_ = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x39];
    local_1bc._2_1_ = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x3a];
    local_1bc._3_1_ = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x3b];
    local_1bc._4_1_ = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x3c];
    local_1bc._5_1_ = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x3d];
    local_1bc._6_1_ = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x3e];
    local_1bc._7_1_ = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x3f];
    uStack_1f4 = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7._0_4_;
    local_1f0._0_4_ = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7._4_4_;
    local_1f0._4_4_ = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7._8_4_;
    local_1e8 = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7._12_4_;
    iStack_1e4 = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7._16_4_;
    uStack_1e0 = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7._20_4_;
    local_1dc[0] = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x18];
    local_1dc[1] = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x19];
    local_1dc[2] = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x1a];
    local_1dc[3] = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x1b];
    local_1dc[4] = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x1c];
    local_1dc[5] = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x1d];
    local_1dc[6] = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x1e];
    local_1dc[7] = s_NpcPlayer_AIC_WherearenInspect_A_040c70f7[0x1f];
    s_NpcPlayer_AIC_WherearenInspect_A_040c70f7._32_8_ = uVar7;
    s_NpcPlayer_AIC_WherearenInspect_A_040c70f7._40_8_ = uVar9;
    if (pcVar29 != local_200) {
      lVar21 = 0;
      local_175 = 0;
      do {
        if (local_1dc[lVar21 + -0x18] == '\0') goto LAB_0372814c;
        if (local_1dc[lVar21 + -0x17] == '\0') {
          lVar21 = lVar21 + 1;
          goto LAB_0372814c;
        }
        if (local_1dc[lVar21 + -0x16] == '\0') {
          lVar21 = lVar21 + 2;
          goto LAB_0372814c;
        }
        lVar21 = lVar21 + 3;
      } while (lVar21 != 0x80001);
      lVar21 = 0;
LAB_0372814c:
      iVar14 = (int)lVar21;
      if (*(int *)(param_5 + 0x40) <= (int)lVar21) {
        iVar14 = *(int *)(param_5 + 0x40) + -1;
      }
      memcpy(pcVar29,local_200,(long)iVar14);
      pcVar29[iVar14] = '\0';
    }
    lVar21 = *(long *)PTR_DAT_04bb39b0;
    pbVar23 = PTR_DAT_04bb32e0;
    if (lVar21 == 0) {
LAB_037281d0:
      if (*pbVar23 < 8) goto LAB_03728248;
LAB_037281dc:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_03728240:
        pbVar23 = PTR_DAT_04bb5038;
        goto LAB_03728248;
      }
      lVar21 = **(long **)PTR_DAT_04bb27d0;
      bVar13 = *(byte *)(lVar21 + 0x473);
      pbVar23 = PTR_DAT_04bb5038;
      if ((long)(char)bVar13 != 0xffffffffffffffff) {
        puVar19 = (uint *)(lVar21 + 0x48) + ((long)(char)bVar13 & 0xffffffffU) * 0x20;
        if (7 < bVar13) {
          puVar19 = (uint *)(lVar21 + 0x48);
        }
        if ((*puVar19 & 8) != 0) {
          pbVar23 = (byte *)(lVar21 + 0x471);
        }
      }
      bVar13 = *pbVar23;
      bVar12 = 7 < bVar13;
      if (bVar12) {
        bVar13 = 0xff;
      }
      local_208 = (undefined *)CONCAT71(local_208._1_7_,bVar13);
      if (bVar12) goto LAB_03728240;
    }
    else {
      if (*(int *)(lVar21 + 0x15c) != 0) {
        pbVar23 = (byte *)(lVar21 + 0x158);
      }
      if (7 < *pbVar23) {
        if ((*(int *)(lVar21 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar23 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_037281d0;
        }
        goto LAB_037281dc;
      }
LAB_03728248:
      bVar13 = *pbVar23;
      if (7 < bVar13) {
        bVar13 = 0xff;
      }
      local_208 = (undefined *)CONCAT71(local_208._1_7_,bVar13);
    }
    iVar14 = FUN_02582fe0(&local_208);
    *(undefined4 *)(param_5 + 0x1c) = 5;
    *(uint *)(param_5 + 0x20) = (uint)(iVar14 == 0);
    pcVar29 = (char *)CONCAT44(local_1f0._4_4_,(uint)local_1f0);
    goto LAB_03728864;
  }
  if (((iVar14 != -0x7975b8e8) && (iVar14 != -0x17df00c3)) && (iVar14 != -0x3e092032)) {
    if ((uVar5 >> 6 & 1) != 0) {
      lVar21 = *(long *)puVar11;
      iVar14 = 0;
      if (lVar21 != 0) {
        if (*(long *)(lVar21 + 0x330) == 0) {
          iVar14 = 0;
        }
        else {
          puVar31 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar21 + 0x338));
          iVar15 = FUN_006bd550(*puVar31,0);
          iVar14 = 0;
          if (iVar15 == 0x758f7eaf) {
            iVar14 = 0;
            if (*(long *)puVar11 != 0) {
              lVar21 = *(long *)(*(long *)puVar11 + 0x330);
              iVar14 = 0;
              if (lVar21 != 0) {
                iVar14 = *(int *)(lVar21 + 0x248);
              }
            }
          }
        }
      }
      puVar11 = PTR_DAT_04bb2020;
      if (iVar14 != *(int *)(param_6 + 0xe8)) {
        return 0;
      }
      if ((*(ushort *)(param_6 + 0x114) >> 6 & 1) == 0) {
        return 0;
      }
      iVar14 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
      if (((iVar14 == -0x74938232) || (iVar14 == -0xea9e7e3)) ||
         (pcVar29 = (char *)CONCAT44(local_1f0._4_4_,(uint)local_1f0), iVar14 == -0x2c3fb610)) {
        local_208 = PTR_DAT_04bb2020 + 0x10;
        local_200 = "BoaHospitalEvent";
        iVar14 = FUN_02758850(&local_208);
        pcVar29 = (char *)CONCAT44(local_1f0._4_4_,(uint)local_1f0);
        if (iVar14 != 0) {
          lVar22 = *(long *)(param_5 + 0x38);
          (**(code **)(*(long *)(param_5 + 0x30) + 0x18))((long *)(param_5 + 0x30));
          lVar21 = 0;
          do {
            if (*(char *)(*(long *)(param_5 + 0x38) + lVar21) == '\0') goto LAB_0372704c;
            lVar2 = *(long *)(param_5 + 0x38) + lVar21;
            if (*(char *)(lVar2 + 1) == '\0') {
              lVar21 = lVar21 + 1;
              goto LAB_0372704c;
            }
            if (*(char *)(lVar2 + 2) == '\0') {
              lVar21 = lVar21 + 2;
              goto LAB_0372704c;
            }
            lVar21 = lVar21 + 3;
          } while (lVar21 != 0x80001);
          lVar21 = 0;
LAB_0372704c:
          uVar16 = (uint)lVar21 & ((int)(uint)lVar21 >> 0x1f ^ 0xffffffffU);
          uVar3 = 0x2f;
          if ((int)(*(int *)(param_5 + 0x40) - uVar16) < 0x30) {
            uVar3 = *(int *)(param_5 + 0x40) + ~uVar16;
          }
          if (0 < (int)uVar3) {
            memcpy((void *)(lVar22 + (ulong)uVar16),
                   "/AIC:WherearenFacility/AIF:AI_NPC_Boa_Wherearen",(ulong)uVar3);
            *(undefined1 *)(lVar22 + (ulong)uVar3 + (ulong)uVar16) = 0;
          }
          local_1f8 = 0;
          uStack_1f4 = 0;
          local_208 = PTR_DAT_04bbc1a0 + 0x10;
          local_200 = PTR_DAT_04bb2010 + 0x10;
          local_1e8 = 0;
          iStack_1e4 = 0;
          local_1f0 = local_200;
          FUN_01811430(&local_208);
          *(undefined4 *)(param_5 + 0x18) = 0;
          lVar21 = 0;
          *(float *)(param_5 + 8) = ((float)local_1f8 * 5.0 + (float)local_1e8 * 5.0 + 5.0) * 0.5;
          *(float *)(param_5 + 0x10) =
               ((float)uStack_1f4 * 5.0 + (float)iStack_1e4 * 5.0 + 5.0) * 0.5;
          if (*(short *)(param_6 + 0x38) != -1) {
            uVar16 = *(uint *)(param_4 + 0xe0);
            if (uVar16 != 0) {
              lVar21 = 0;
              lVar22 = (long)(int)uVar16 << 3;
              do {
                if (*(short *)(*(long *)(*(long *)(param_4 + 0xe8) + lVar21 * 8) + 0x38) ==
                    *(short *)(param_6 + 0x38)) {
                  if ((uint)lVar21 < uVar16) {
                    lVar21 = *(long *)(*(long *)(param_4 + 0xe8) + lVar21 * 8);
                    goto LAB_037271bc;
                  }
                  break;
                }
                lVar21 = lVar21 + 1;
                lVar22 = lVar22 + -8;
              } while (lVar22 != 0);
            }
            lVar21 = 0;
          }
LAB_037271bc:
          local_130 = puVar11 + 0x10;
          local_128 = "BoaGetTurnipToday";
          iVar14 = FUN_02758850(&local_130);
          pcVar29 = local_1f0;
          if (iVar14 == 0) {
            if (*(int *)(lVar21 + 0xe4) != 6) goto LAB_03728864;
          }
          else if (*(int *)(lVar21 + 0xe4) != 7) goto LAB_03728864;
          FUN_037289d0(param_4,param_6 + 0x10,0);
          *(ushort *)(lVar21 + 0x114) = *(ushort *)(lVar21 + 0x114) & 0xfff7;
          pcVar29 = local_1f0;
        }
      }
      goto LAB_03728864;
    }
    if ((uVar5 >> 4 & 1) == 0) {
      return 0;
    }
    lVar21 = *(long *)PTR_DAT_04bb4960;
    if (0x14 < (*(uint *)(param_6 + 0xd8) & 0xffff)) {
      return 0;
    }
    uVar17 = FUN_006bd550(*(undefined8 *)
                           (PTR_DAT_04bc2558 + (ulong)(ushort)*(uint *)(param_6 + 0xd8) * 8 + 0x150)
                          ,0);
    local_208 = (undefined *)CONCAT44(local_208._4_4_,uVar17);
    puVar19 = (uint *)FUN_036c67d0(lVar21 + 0x800,&local_208);
    if (puVar19 == (uint *)0x0) {
      return 0;
    }
    lVar21 = *(long *)puVar11;
    iVar14 = 0;
    if (lVar21 != 0) {
      if (*(long *)(lVar21 + 0x330) == 0) {
        iVar14 = 0;
      }
      else {
        puVar31 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar21 + 0x338));
        iVar15 = FUN_006bd550(*puVar31,0);
        iVar14 = 0;
        if (iVar15 == 0x758f7eaf) {
          iVar14 = 0;
          if (*(long *)puVar11 != 0) {
            lVar21 = *(long *)(*(long *)puVar11 + 0x330);
            iVar14 = 0;
            if (lVar21 != 0) {
              iVar14 = *(int *)(lVar21 + 0x248);
            }
          }
        }
      }
    }
    if ((iVar14 != *(int *)(param_6 + 0xe8)) && (*(int *)(param_6 + 0xd8) != 0)) {
      if (*(int *)(param_6 + 0x3c) == 0) {
        return 0;
      }
      if (*(int *)(param_6 + 0x3c) == 1) {
        return 0;
      }
    }
    FUN_0252d11c(&local_130);
    puVar36 = PTR_DAT_04bb2020;
    local_208 = PTR_DAT_04bb2020 + 0x10;
    local_200 = "WHEREAREN_LessonEventStart";
    iVar14 = FUN_02753180(&local_130,&local_208);
    if ((iVar14 != 0) && (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x5c2fda8c)) {
      local_208 = puVar36 + 0x10;
      local_200 = "mnc";
      (**(code **)(DAT_0545c410 + 0x18))(&DAT_0545c410);
      (**(code **)(DAT_0545c410 + 0x18))(&DAT_0545c410);
      pcVar29 = DAT_0545c418;
      (**(code **)(local_208 + 0x18))(&local_208);
      if (pcVar29 == local_200) {
        return 0;
      }
      uVar18 = 0;
      bVar12 = true;
      do {
        if (DAT_0545c418[uVar18] != local_200[uVar18]) break;
        if (DAT_0545c418[uVar18] == '\0') {
          if (bVar12) {
            return 0;
          }
          break;
        }
        bVar12 = uVar18 < 0x80000;
        uVar18 = uVar18 + 1;
      } while (uVar18 != 0x80001);
    }
    if ((*(ushort *)(param_6 + 0x114) >> 5 & 1) == 0) {
      lVar21 = *(long *)PTR_DAT_04bb27f8;
      if (((lVar21 != 0) && (*(int *)(lVar21 + 0x14) != 0)) &&
         ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0 ||
          ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)))) {
        local_208 = (undefined *)
                    (CONCAT44(local_208._4_4_,(uint)*(ushort *)(lVar21 + 0xdc)) & 0xffffffff0000000f
                    );
        if (((float)local_208 != 0.0) && (*(int *)(lVar21 + 0x18) != 1)) {
          return 0;
        }
      }
      if ((((*(int *)(param_6 + 0xd8) == 6) &&
           ((puVar24 = *(ushort **)PTR_DAT_04bc3a48, puVar24 == (ushort *)0x0 ||
            ((*puVar24 & 1) == 0)))) &&
          ((lVar21 == 0 ||
           ((*(int *)(lVar21 + 0x14) == 0 || ((puVar24 != (ushort *)0x0 && ((*puVar24 & 1) != 0)))))
           ))) && (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x74938232)) {
        local_200 = "DoctorEventStart";
        local_208 = puVar36 + 0x10;
        iVar14 = FUN_02758850(&local_208);
        if (iVar14 != 0) {
          local_128 = "GetMedicalEquipToday";
          local_130 = puVar36 + 0x10;
          uVar20 = FUN_02758850(&local_130);
          if ((int)uVar20 == 0) {
            return uVar20;
          }
        }
      }
      puVar1 = PTR_DAT_04bc11f0;
      puVar36 = PTR_DAT_04bc11e8;
      uVar16 = *puVar19;
      if (uVar16 != 0) {
        cVar25 = *PTR_DAT_04bc11e8;
        do {
          if (cVar25 == '\0') {
            cVar25 = '\x01';
            *(undefined8 *)puVar1 = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
            *puVar36 = 1;
            *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar1 + 0x78) = 0xffffffffffffffff;
            uVar16 = *puVar19;
          }
          else {
            uVar3 = *(uint *)(puVar1 + 0x60);
            if (-1 < (int)uVar3) {
              pcVar29 = (char *)((ulong)uVar3 + (long)puVar19);
              goto LAB_03727794;
            }
            if (uVar3 != 0xffffffff) break;
          }
          puVar26 = (uint *)(ulong)uVar16;
          pcVar29 = (char *)0x0;
          if ((puVar26 == (uint *)0x0) || (puVar19 == puVar26)) goto LAB_03727794;
          lVar21 = 0xc;
          if (*(char *)((long)puVar19 + (10 - (long)puVar26)) != '\0') {
            lVar21 = 0x1c;
          }
          lVar21 = (long)puVar19 + (lVar21 - (long)puVar26);
          pcVar29 = (char *)0x0;
          if (lVar21 == 0) goto LAB_03727794;
          uVar18 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar26));
          *(undefined4 *)(puVar1 + 0x60) = 0xfffffffe;
          if (uVar18 == 0) break;
          piVar27 = (int *)(lVar21 + 4);
          while (piVar27[-1] != -0x531b8447) {
            piVar27 = piVar27 + 2;
            uVar18 = uVar18 - 1;
            if (uVar18 == 0) goto LAB_03727790;
          }
          iVar14 = 0;
          if (*piVar27 != -1) {
            iVar14 = *piVar27;
          }
          *(int *)(puVar1 + 0x60) = iVar14;
          uVar16 = *puVar19;
          if (uVar16 == 0) break;
        } while( true );
      }
LAB_03727790:
      pcVar29 = (char *)0x0;
LAB_03727794:
      local_fd = 0;
      pcVar30 = "";
      if (pcVar29 != (char *)0x0) {
        pcVar30 = pcVar29;
      }
      local_120 = 0x20;
      local_128 = local_11c;
      if (local_11c != pcVar30) {
        lVar21 = 0;
        do {
          if (pcVar30[lVar21] == '\0') {
LAB_03727918:
            iVar14 = (int)lVar21;
            if (0x1f < iVar14) {
              iVar14 = 0x1f;
            }
            goto LAB_03727924;
          }
          if (pcVar30[lVar21 + 1] == '\0') {
            lVar21 = lVar21 + 1;
            goto LAB_03727918;
          }
          if (pcVar30[lVar21 + 2] == '\0') {
            lVar21 = lVar21 + 2;
            goto LAB_03727918;
          }
          lVar21 = lVar21 + 3;
        } while (lVar21 != 0x80001);
        iVar14 = 0;
LAB_03727924:
        memcpy(local_11c,pcVar30,(long)iVar14);
        local_11c[iVar14] = '\0';
      }
      plVar33 = (long *)(param_5 + 0x30);
      lVar22 = *(long *)(param_5 + 0x38);
      local_130 = PTR_DAT_04bb2028 + 0x10;
      (**(code **)(*plVar33 + 0x18))(plVar33);
      lVar21 = 0;
      do {
        if (*(char *)(*(long *)(param_5 + 0x38) + lVar21) == '\0') goto LAB_037279a0;
        lVar2 = *(long *)(param_5 + 0x38) + lVar21;
        if (*(char *)(lVar2 + 1) == '\0') {
          lVar21 = lVar21 + 1;
          goto LAB_037279a0;
        }
        if (*(char *)(lVar2 + 2) == '\0') {
          lVar21 = lVar21 + 2;
          goto LAB_037279a0;
        }
        lVar21 = lVar21 + 3;
      } while (lVar21 != 0x80001);
      lVar21 = 0;
LAB_037279a0:
      uVar16 = (uint)lVar21 & ((int)(uint)lVar21 >> 0x1f ^ 0xffffffffU);
      uVar3 = 0x16;
      if ((int)(*(int *)(param_5 + 0x40) - uVar16) < 0x17) {
        uVar3 = *(int *)(param_5 + 0x40) + ~uVar16;
      }
      if (0 < (int)uVar3) {
        memcpy((void *)(lVar22 + (ulong)uVar16),"/AIC:WherearenFacility",(ulong)uVar3);
        *(undefined1 *)(lVar22 + (ulong)uVar3 + (ulong)uVar16) = 0;
      }
      if (*local_128 != '\0') {
        (**(code **)(local_130 + 0x18))(&local_130);
        FUN_0071b954(&local_208,"/AIF:%s",local_128);
        lVar22 = *(long *)(param_5 + 0x38);
        (**(code **)(*(long *)(param_5 + 0x30) + 0x18))(plVar33);
        lVar21 = 0;
        do {
          if (*(char *)(*(long *)(param_5 + 0x38) + lVar21) == '\0') goto LAB_03727a68;
          lVar2 = *(long *)(param_5 + 0x38) + lVar21;
          if (*(char *)(lVar2 + 1) == '\0') {
            lVar21 = lVar21 + 1;
            goto LAB_03727a68;
          }
          if (*(char *)(lVar2 + 2) == '\0') {
            lVar21 = lVar21 + 2;
            goto LAB_03727a68;
          }
          lVar21 = lVar21 + 3;
        } while (lVar21 != 0x80001);
        lVar21 = 0;
LAB_03727a68:
        uVar16 = (uint)lVar21 & ((int)(uint)lVar21 >> 0x1f ^ 0xffffffffU);
        (**(code **)(local_208 + 0x18))(&local_208);
        lVar21 = 0;
        do {
          if (local_200[lVar21] == '\0') goto LAB_03727ac0;
          if (local_200[lVar21 + 1] == '\0') {
            lVar21 = lVar21 + 1;
            goto LAB_03727ac0;
          }
          if (local_200[lVar21 + 2] == '\0') {
            lVar21 = lVar21 + 2;
            goto LAB_03727ac0;
          }
          lVar21 = lVar21 + 3;
        } while (lVar21 != 0x80001);
        lVar21 = 0;
LAB_03727ac0:
        uVar3 = (uint)lVar21;
        if ((int)(*(int *)(param_5 + 0x40) - uVar16) <= (int)(uint)lVar21) {
          uVar3 = *(int *)(param_5 + 0x40) + ~uVar16;
        }
        if (0 < (int)uVar3) {
          (**(code **)(local_208 + 0x18))(&local_208);
          memcpy((void *)(lVar22 + (ulong)uVar16),local_200,(ulong)uVar3);
          *(undefined1 *)(lVar22 + (int)(uVar3 + uVar16)) = 0;
        }
      }
      pcVar29 = (char *)CONCAT44(local_1f0._4_4_,(uint)local_1f0);
      if (*(long *)PTR_DAT_04bb5ce0 != 0) {
        lVar21 = *(long *)puVar11;
        pcVar29 = (char *)CONCAT44(local_1f0._4_4_,(uint)local_1f0);
        if ((lVar21 != 0) &&
           (pcVar29 = (char *)CONCAT44(local_1f0._4_4_,(uint)local_1f0),
           *(long *)(lVar21 + 0x330) != 0)) {
          puVar31 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar21 + 0x338));
          iVar14 = FUN_006bd550(*puVar31,0);
          pcVar29 = (char *)CONCAT44(local_1f0._4_4_,(uint)local_1f0);
          if (iVar14 == 0x758f7eaf) {
            pcVar29 = (char *)CONCAT44(local_1f0._4_4_,(uint)local_1f0);
            if (*(long *)puVar11 != 0) {
              lVar21 = *(long *)(*(long *)puVar11 + 0x330);
              pcVar29 = (char *)CONCAT44(local_1f0._4_4_,(uint)local_1f0);
              if ((lVar21 != 0) &&
                 (pcVar29 = (char *)CONCAT44(local_1f0._4_4_,(uint)local_1f0),
                 *(int *)(lVar21 + 0x244) != 0)) {
                local_1f8 = 0;
                uStack_1f4 = 0;
                local_208 = PTR_DAT_04bbc1a0 + 0x10;
                local_200 = PTR_DAT_04bb2010 + 0x10;
                local_1e8 = 0;
                iStack_1e4 = 0;
                local_1f0 = local_200;
                FUN_01811430(&local_208);
                *(float *)(param_5 + 0x10) =
                     ((float)uStack_1f4 * 5.0 + (float)iStack_1e4 * 5.0 + 5.0) * 0.5;
                *(float *)(param_5 + 8) =
                     ((float)local_1f8 * 5.0 + (float)local_1e8 * 5.0 + 5.0) * 0.5;
                puVar19 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
                uVar16 = *puVar19 ^ *puVar19 << 0xb;
                uVar4 = puVar19[3];
                *puVar19 = puVar19[1];
                puVar19[1] = puVar19[2];
                uVar3 = uVar16 ^ uVar4;
                puVar19[2] = uVar4;
                puVar19[3] = uVar16 >> 8 ^ uVar4 >> 0x13 ^ uVar3;
                *(int *)(param_5 + 0x18) = (int)(long)((float)(uVar3 >> 0x1d) * 45.0 * 11930465.0);
                pcVar29 = local_1f0;
              }
            }
          }
        }
      }
      goto LAB_03728864;
    }
    local_208 = puVar36 + 0x10;
    local_200 = "IsParty";
    iVar14 = FUN_02758850(&local_208);
    puVar11 = PTR_DAT_04bb3768;
    if (iVar14 == 0) {
      lVar22 = *(long *)(param_5 + 0x38);
      (**(code **)(*(long *)(param_5 + 0x30) + 0x18))((long *)(param_5 + 0x30));
      lVar21 = 0;
      do {
        if (*(char *)(*(long *)(param_5 + 0x38) + lVar21) == '\0') goto LAB_03727f00;
        lVar2 = *(long *)(param_5 + 0x38) + lVar21;
        if (*(char *)(lVar2 + 1) == '\0') {
          lVar21 = lVar21 + 1;
          goto LAB_03727f00;
        }
        if (*(char *)(lVar2 + 2) == '\0') {
          lVar21 = lVar21 + 2;
          goto LAB_03727f00;
        }
        lVar21 = lVar21 + 3;
      } while (lVar21 != 0x80001);
      lVar21 = 0;
LAB_03727f00:
      uVar16 = (uint)lVar21 & ((int)(uint)lVar21 >> 0x1f ^ 0xffffffffU);
      uVar3 = 0x37;
      if ((int)(*(int *)(param_5 + 0x40) - uVar16) < 0x38) {
        uVar3 = *(int *)(param_5 + 0x40) + ~uVar16;
      }
      if (0 < (int)uVar3) {
        memcpy((void *)(lVar22 + (ulong)uVar16),
               "/AIC:WherearenFacility/AIF:AI_NPC_Otg_WherearenFacility",(ulong)uVar3);
        *(undefined1 *)(lVar22 + (ulong)uVar3 + (ulong)uVar16) = 0;
      }
    }
    else {
      local_115 = 0;
      local_120 = 8;
      local_128 = local_11c;
      local_11c[0] = '\0';
      puVar1 = PTR_DAT_04bb3768 + 0x10;
      local_130 = puVar1;
      (**(code **)(*(long *)(param_6 + 0x10) + 0x18))((long *)(param_6 + 0x10));
      local_1f8 = 8;
      pcVar29 = *(char **)(param_6 + 0x18);
      local_1f0._0_4_ = (uint)local_1f0 & 0xffffff;
      local_208 = PTR_DAT_04bb6a30 + 0x10;
      local_200 = (char *)&uStack_1f4;
      if ((char *)&uStack_1f4 != pcVar29) {
        lVar21 = 0;
        do {
          if (pcVar29[lVar21] == '\0') {
LAB_03727c80:
            iVar14 = (int)lVar21;
            if (7 < iVar14) {
              iVar14 = 7;
            }
            goto LAB_03727c8c;
          }
          if (pcVar29[lVar21 + 1] == '\0') {
            lVar21 = lVar21 + 1;
            goto LAB_03727c80;
          }
          if (pcVar29[lVar21 + 2] == '\0') {
            lVar21 = lVar21 + 2;
            goto LAB_03727c80;
          }
          lVar21 = lVar21 + 3;
        } while (lVar21 != 0x80001);
        iVar14 = 0;
LAB_03727c8c:
        memcpy(&uStack_1f4,pcVar29,(long)iVar14);
        *(char *)((long)&uStack_1f4 + (long)iVar14) = '\0';
        pcVar29 = local_200;
      }
      pcVar30 = local_128;
      local_208 = puVar1;
      if (((*pcVar29 == 'o') && (pcVar29[1] == 't')) && (pcVar29[2] == 'g')) {
        if (local_128 != "Otg") {
          iVar14 = 3;
          if (local_120 < 4) {
            iVar14 = local_120 + -1;
          }
          memcpy(local_128,&DAT_04098a0b,(long)iVar14);
          pcVar30[iVar14] = '\0';
        }
      }
      else {
        pcVar29[(long)local_1f8 + -1] = '\0';
        (**(code **)(puVar11 + 0x28))(&local_208);
        if (local_200 == "mnc") {
LAB_03727d7c:
          local_a0 = &DAT_0408e79c;
        }
        else {
          uVar18 = 0;
          bVar12 = true;
          do {
            if (local_200[uVar18] != (&DAT_0409b647)[uVar18]) break;
            if (local_200[uVar18] == '\0') {
              if (bVar12) goto LAB_03727d7c;
              break;
            }
            bVar12 = uVar18 < 0x80000;
            uVar18 = uVar18 + 1;
          } while (uVar18 != 0x80001);
          local_a8 = puVar36 + 0x10;
          local_a0 = &DAT_040ee9d7;
          uVar18 = FUN_00710cb0(&local_208,&local_a8);
          if ((uVar18 & 1) == 0) goto LAB_03727dd0;
          local_a0 = &DAT_040f13a7;
        }
        local_a8 = puVar36 + 0x10;
        FUN_008aa0a0(&local_130,&local_a8,0xffffffff);
      }
LAB_03727dd0:
      (**(code **)(local_130 + 0x18))(&local_130);
      FUN_0071b954(&local_208,"/AIC:WherearenParty/AIF:AI_NPC_%s_WherearenParty",local_128);
      lVar22 = *(long *)(param_5 + 0x38);
      (**(code **)(*(long *)(param_5 + 0x30) + 0x18))((long *)(param_5 + 0x30));
      lVar21 = 0;
      do {
        if (*(char *)(*(long *)(param_5 + 0x38) + lVar21) == '\0') goto LAB_03727e4c;
        lVar2 = *(long *)(param_5 + 0x38) + lVar21;
        if (*(char *)(lVar2 + 1) == '\0') {
          lVar21 = lVar21 + 1;
          goto LAB_03727e4c;
        }
        if (*(char *)(lVar2 + 2) == '\0') {
          lVar21 = lVar21 + 2;
          goto LAB_03727e4c;
        }
        lVar21 = lVar21 + 3;
      } while (lVar21 != 0x80001);
      lVar21 = 0;
LAB_03727e4c:
      uVar16 = (uint)lVar21 & ((int)(uint)lVar21 >> 0x1f ^ 0xffffffffU);
      (**(code **)(local_208 + 0x18))(&local_208);
      lVar21 = 0;
      do {
        if (local_200[lVar21] == '\0') goto LAB_03727ea4;
        if (local_200[lVar21 + 1] == '\0') {
          lVar21 = lVar21 + 1;
          goto LAB_03727ea4;
        }
        if (local_200[lVar21 + 2] == '\0') {
          lVar21 = lVar21 + 2;
          goto LAB_03727ea4;
        }
        lVar21 = lVar21 + 3;
      } while (lVar21 != 0x80001);
      lVar21 = 0;
LAB_03727ea4:
      uVar3 = (uint)lVar21;
      if ((int)(*(int *)(param_5 + 0x40) - uVar16) <= (int)(uint)lVar21) {
        uVar3 = *(int *)(param_5 + 0x40) + ~uVar16;
      }
      if (0 < (int)uVar3) {
        (**(code **)(local_208 + 0x18))(&local_208);
        memcpy((void *)(lVar22 + (ulong)uVar16),local_200,(ulong)uVar3);
        *(undefined1 *)(lVar22 + (int)(uVar3 + uVar16)) = 0;
      }
    }
    fVar40 = (float)FUN_03771210();
    fVar37 = param_3;
    fVar38 = (float)FUN_037715a0();
    local_130 = (undefined *)CONCAT44(param_2,fVar38);
    local_128 = (char *)CONCAT44(local_128._4_4_,fVar37);
    uVar17 = FUN_006f0400(fVar40 - fVar38,param_3 - fVar37);
    local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar17);
    local_208 = puVar36 + 0x10;
    local_200 = "IsParty";
    iVar14 = FUN_02758850(&local_208);
    if (iVar14 == 0) {
      uVar17 = 0x80000000;
LAB_03727fd0:
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar17);
    }
    else {
      uVar18 = FUN_037398f8(&local_130,&local_a8,param_6);
      if ((((uVar18 & 1) == 0) && ((*(ushort *)(param_6 + 0x114) >> 3 & 1) != 0)) &&
         (*(int *)(PTR_DAT_04bc3a80 + 0x38) == *(int *)(param_6 + 0x100))) {
        local_130 = *(undefined **)(param_6 + 0xf0);
        uVar17 = *(undefined4 *)(param_6 + 0xfc);
        local_128 = (char *)CONCAT44(local_128._4_4_,*(undefined4 *)(param_6 + 0xf8));
        goto LAB_03727fd0;
      }
    }
    *(undefined **)(param_5 + 8) = local_130;
    *(float *)(param_5 + 0x10) = local_128._0_4_;
    *(int *)(param_5 + 0x18) = (int)local_a8;
    pcVar29 = (char *)CONCAT44(local_1f0._4_4_,(uint)local_1f0);
    goto LAB_03728864;
  }
  if ((uVar5 >> 5 & 1) == 0) {
    lVar21 = *(long *)PTR_DAT_04bb27f8;
    if (iVar14 == -0x17df00c3) {
      if (lVar21 == 0) {
        return 0;
      }
      iVar14 = FUN_0371ccb4(param_6);
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,iVar14);
      if ((*(ushort *)(param_6 + 0x114) & 0x180) == 0) {
        return 0;
      }
      if ((iVar14 == 3) &&
         ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0 ||
          ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)))) {
        if (*(int *)(lVar21 + 0x14) == 4) {
          return 0;
        }
        if (*(int *)(lVar21 + 0x14) == 5) {
          return 0;
        }
      }
      local_130 = (undefined *)0x0;
      local_128 = (char *)((ulong)local_128 & 0xffffffff00000000);
      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,0xc0000000);
      uVar18 = FUN_036e4924(lVar21);
      if (((uVar18 & 1) == 0) || (uVar18 = FUN_036e49f0(lVar21), (uVar18 & 1) != 0)) {
LAB_037272c0:
        uVar18 = FUN_037398f8(&local_130,&local_c8,param_6);
        if ((uVar18 & 1) == 0) {
          if (((*(ushort *)(param_6 + 0x114) >> 3 & 1) != 0) &&
             (*(int *)(PTR_DAT_04bc3a80 + 0x38) == *(int *)(param_6 + 0x100))) {
            local_130 = *(undefined **)(param_6 + 0xf0);
            uVar17 = *(undefined4 *)(param_6 + 0xfc);
            local_128 = (char *)CONCAT44(local_128._4_4_,*(undefined4 *)(param_6 + 0xf8));
            goto LAB_037284c0;
          }
          uVar18 = FUN_0371c590(param_4,&local_130,0);
          if ((uVar18 & 1) == 0) {
            if (((*(ushort *)(param_6 + 0x114) >> 7 & 1) != 0) || ((int)local_a8 == 3)) {
              return 0;
            }
            uVar17 = FUN_03771b40((int)local_a8 == 1,param_6 + 0x10);
            local_130 = (undefined *)CONCAT44(param_2,uVar17);
            local_128 = (char *)CONCAT44(local_128._4_4_,param_3);
          }
          if (((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
              ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) &&
             ((*(int *)(lVar21 + 0x14) == 4 || (*(int *)(lVar21 + 0x14) == 5)))) {
            local_200 = (char *)((ulong)local_200 & 0xffffffff00000000);
            local_208 = (undefined *)0x0;
            uVar18 = FUN_021d9820(&local_208,1);
            if ((uVar18 & 1) != 0) {
              iVar14 = (int)((float)(int)((float)local_208 + -10.0) / 5.0) -
                       (uint)((float)local_208 + -10.0 < 0.0);
              iVar15 = (int)((float)(int)(local_200._0_4_ + -5.0) / 5.0) -
                       (uint)(local_200._0_4_ + -5.0 < 0.0);
              uVar17 = FUN_006f0400(((float)iVar14 * 5.0 + (float)(iVar14 + 3) * 5.0 + 5.0) * 0.5 -
                                    (float)local_130,
                                    ((float)iVar15 * 5.0 + (float)(iVar15 + 2) * 5.0 + 5.0) * 0.5 -
                                    local_128._0_4_);
              local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar17);
            }
          }
          else {
            local_130 = (undefined *)0x0;
            local_128 = (char *)((ulong)local_128 & 0xffffffff00000000);
            local_c8 = (undefined *)((ulong)local_c8 & 0xffffffff00000000);
            *(uint *)(&DAT_00001230 + param_4) = *(uint *)(&DAT_00001230 + param_4) | 0x800;
          }
        }
      }
      else {
        local_1f0._0_4_ = (uint)local_1f0 & 0xffffff;
        plVar33 = (long *)(param_6 + 0x10);
        local_1f8 = 8;
        local_208 = PTR_DAT_04bb6a30 + 0x10;
        local_200 = (char *)&uStack_1f4;
        (**(code **)(*plVar33 + 0x18))(plVar33);
        pcVar29 = *(char **)(param_6 + 0x18);
        if ((char *)&uStack_1f4 != pcVar29) {
          (**(code **)(*(long *)(param_6 + 0x10) + 0x18))(plVar33);
          lVar22 = 0;
          do {
            if (*(char *)(*(long *)(param_6 + 0x18) + lVar22) == '\0') goto LAB_0372726c;
            lVar2 = *(long *)(param_6 + 0x18) + lVar22;
            if (*(char *)(lVar2 + 1) == '\0') {
              lVar22 = lVar22 + 1;
              goto LAB_0372726c;
            }
            if (*(char *)(lVar2 + 2) == '\0') {
              lVar22 = lVar22 + 2;
              goto LAB_0372726c;
            }
            lVar22 = lVar22 + 3;
          } while (lVar22 != 0x80001);
          lVar22 = 0;
LAB_0372726c:
          iVar14 = (int)lVar22;
          if (local_1f8 <= (int)lVar22) {
            iVar14 = local_1f8 + -1;
          }
          memcpy(&uStack_1f4,pcVar29,(long)iVar14);
          *(char *)((long)&uStack_1f4 + (long)iVar14) = '\0';
        }
        puVar36 = PTR_DAT_04bb3768;
        local_208 = PTR_DAT_04bb3768 + 0x10;
        uVar18 = FUN_036e4cd0(lVar21,&local_208);
        if (((uVar18 & 1) == 0) || ((int)local_a8 == 3)) goto LAB_037272c0;
        if (*(int *)(lVar21 + 0x1a48) == 3) {
          bVar13 = (int)local_a8 == 1;
        }
        else if (*(int *)(lVar21 + 0x1a48) == 2) {
          local_1f0._0_4_ = (uint)local_1f0 & 0xffffff;
          local_1f8 = 8;
          local_208 = PTR_DAT_04bb6a30 + 0x10;
          local_200 = (char *)&uStack_1f4;
          (**(code **)(*(long *)(param_6 + 0x10) + 0x18))(plVar33);
          puVar35 = *(undefined4 **)(param_6 + 0x18);
          if (&uStack_1f4 != puVar35) {
            (**(code **)(*(long *)(param_6 + 0x10) + 0x18))(plVar33);
            lVar22 = 0;
            do {
              if (*(char *)(*(long *)(param_6 + 0x18) + lVar22) == '\0') goto LAB_03728404;
              lVar2 = *(long *)(param_6 + 0x18) + lVar22;
              if (*(char *)(lVar2 + 1) == '\0') {
                lVar22 = lVar22 + 1;
                goto LAB_03728404;
              }
              if (*(char *)(lVar2 + 2) == '\0') {
                lVar22 = lVar22 + 2;
                goto LAB_03728404;
              }
              lVar22 = lVar22 + 3;
            } while (lVar22 != 0x80001);
            lVar22 = 0;
LAB_03728404:
            iVar14 = (int)lVar22;
            if (local_1f8 <= (int)lVar22) {
              iVar14 = local_1f8 + -1;
            }
            memcpy(&uStack_1f4,puVar35,(long)iVar14);
            *(undefined1 *)((long)&uStack_1f4 + (long)iVar14) = 0;
          }
          local_208 = puVar36 + 0x10;
          bVar13 = FUN_036e4cd0(lVar21,&local_208);
          bVar13 = bVar13 ^ 1;
        }
        else {
          bVar13 = 0;
        }
        local_208 = PTR_DAT_04bb2020 + 0x10;
        local_200 = "";
        fVar38 = (float)FUN_03771b40(bVar13 & 1,&local_208);
        fVar37 = param_2;
        fVar40 = param_3;
        fVar39 = (float)FUN_03771fd0();
        local_130 = (undefined *)CONCAT44(param_2 + fVar37,fVar38 + fVar39);
        local_128 = (char *)CONCAT44(local_128._4_4_,param_3 + fVar40);
        FUN_006d8678(&local_208,&DAT_0407ebb1);
        (**(code **)(*(long *)(param_6 + 0x10) + 0x18))(plVar33);
        FUN_038d1270(&local_208,"Debug.%s",*(undefined8 *)(param_6 + 0x18));
        uVar17 = 0x80000000;
LAB_037284c0:
        local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar17);
      }
      *(undefined **)(param_5 + 8) = local_130;
      *(float *)(param_5 + 0x10) = local_128._0_4_;
      *(undefined4 *)(param_5 + 0x18) = local_c8._0_4_;
      (**(code **)(*(long *)(param_6 + 0x10) + 0x18))((long *)(param_6 + 0x10));
      FUN_0071b954(&local_208,"%s/AIC:WherearenGarden/AIF:AI_NPC_WherearenGarden",
                   *(undefined8 *)(param_6 + 0x18));
      pcVar30 = *(char **)(param_5 + 0x38);
      (**(code **)(local_208 + 0x18))(&local_208);
      pcVar29 = local_200;
      if (pcVar30 != local_200) {
        (**(code **)(local_208 + 0x18))(&local_208);
        lVar21 = 0;
        do {
          if (local_200[lVar21] == '\0') goto LAB_03728580;
          if (local_200[lVar21 + 1] == '\0') goto LAB_03728574;
          if (local_200[lVar21 + 2] == '\0') goto LAB_0372857c;
          lVar21 = lVar21 + 3;
        } while (lVar21 != 0x80001);
        goto LAB_0372856c;
      }
    }
    else {
      if (lVar21 == 0) {
        return 0;
      }
      iVar14 = FUN_0371ccb4(param_6);
      puVar36 = PTR_DAT_04bb2020;
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,iVar14);
      if ((*(ushort *)(param_6 + 0x114) & 0x180) == 0) {
        return 0;
      }
      if ((iVar14 == 3) &&
         ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0 ||
          ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)))) {
        if (*(int *)(lVar21 + 0x14) == 4) {
          return 0;
        }
        if (*(int *)(lVar21 + 0x14) == 5) {
          return 0;
        }
      }
      local_208 = PTR_DAT_04bb2020 + 0x10;
      local_200 = "";
      uVar17 = FUN_03771b40(iVar14 == 1,&local_208);
      local_130 = (undefined *)CONCAT44(param_2,uVar17);
      local_128 = (char *)CONCAT44(local_128._4_4_,param_3);
      local_c8 = (undefined *)
                 CONCAT44(local_c8._4_4_,(*(uint *)(&DAT_00001230 + param_4) & 0x1000) << 0x13);
      uVar18 = FUN_037398f8(&local_130,&local_c8,param_6);
      if ((uVar18 & 1) == 0) {
        if (((*(ushort *)(param_6 + 0x114) >> 3 & 1) == 0) ||
           (*(int *)(PTR_DAT_04bc3a80 + 0x38) != *(int *)(param_6 + 0x100))) {
          if (((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) &&
              ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0)) ||
             ((*(int *)(lVar21 + 0x14) != 4 && (*(int *)(lVar21 + 0x14) != 5)))) {
            if (*(int *)(lVar21 + 0x14) == 6) {
              FUN_0252d11c(&local_d4);
              local_208 = puVar36 + 0x10;
              local_200 = "WHEREAREN_MncTalkReserve_AfterCompleteDemo";
              iVar14 = FUN_02753180(&local_d4,&local_208);
              if (iVar14 == 0) goto LAB_03726adc;
            }
            uVar18 = FUN_0371c590(param_4,&local_130,0);
            if ((uVar18 & 1) == 0) {
              if ((*(ushort *)(param_6 + 0x114) >> 7 & 1) != 0) {
                return 0;
              }
              if ((int)local_a8 == 3) {
                return 0;
              }
              local_208 = puVar36 + 0x10;
              local_200 = "";
              uVar17 = FUN_03771b40((int)local_a8 == 1,&local_208);
              local_130 = (undefined *)CONCAT44(param_2,uVar17);
              local_128 = (char *)CONCAT44(local_128._4_4_,param_3);
            }
            puVar19 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
            uVar16 = *puVar19 ^ *puVar19 << 0xb;
            uVar4 = puVar19[3];
            *puVar19 = puVar19[1];
            puVar19[1] = puVar19[2];
            uVar3 = uVar16 ^ uVar4;
            puVar19[2] = uVar4;
            puVar19[3] = uVar16 >> 8 ^ uVar4 >> 0x13 ^ uVar3;
            local_c8 = (undefined *)
                       CONCAT44(local_c8._4_4_,
                                (int)(long)((float)(uVar3 >> 0x1d) * 45.0 * 11930465.0));
          }
        }
        else {
          local_130 = *(undefined **)(param_6 + 0xf0);
          local_128 = (char *)CONCAT44(local_128._4_4_,*(undefined4 *)(param_6 + 0xf8));
          local_c8 = (undefined *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_6 + 0xfc));
        }
      }
LAB_03726adc:
      *(undefined **)(param_5 + 8) = local_130;
      *(float *)(param_5 + 0x10) = local_128._0_4_;
      *(undefined4 *)(param_5 + 0x18) = local_c8._0_4_;
      (**(code **)(*(long *)(param_6 + 0x10) + 0x18))((long *)(param_6 + 0x10));
      FUN_0071b954(&local_208,"%s/AIC:WherearenHouse/AIF:AI_NPC_WherearenHouse",
                   *(undefined8 *)(param_6 + 0x18));
      pcVar30 = *(char **)(param_5 + 0x38);
      (**(code **)(local_208 + 0x18))(&local_208);
      pcVar29 = local_200;
      if (pcVar30 != local_200) {
        (**(code **)(local_208 + 0x18))(&local_208);
        lVar21 = 0;
        do {
          if (local_200[lVar21] == '\0') goto LAB_03728580;
          if (local_200[lVar21 + 1] == '\0') goto LAB_03728574;
          if (local_200[lVar21 + 2] == '\0') goto LAB_0372857c;
          lVar21 = lVar21 + 3;
        } while (lVar21 != 0x80001);
LAB_0372856c:
        lVar21 = 0;
        goto LAB_03728580;
      }
    }
    goto LAB_037285a8;
  }
  lVar21 = *(long *)PTR_DAT_04bb27f8;
  if (lVar21 == 0) {
    return 0;
  }
  if ((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) && ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0))
  {
    return 0;
  }
  local_208 = PTR_DAT_04bb2020 + 0x10;
  local_200 = "RequestEndShareHouseDemo";
  iVar14 = FUN_02758850(&local_208);
  if (iVar14 != 0) {
    return 0;
  }
  if ((*(ushort *)(param_6 + 0x114) >> 5 & 1) == 0) {
    return 0;
  }
  lVar22 = *(long *)puVar11;
  if (lVar22 == 0) {
    puVar31 = &DAT_055c04a0;
  }
  else {
    puVar31 = &DAT_055c04a0;
    if (*(long *)(lVar22 + 0x330) != 0) {
      puVar31 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar22 + 0x338));
      iVar14 = FUN_006bd550(*puVar31,0);
      puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar14 != 0x758f7eaf) {
        puVar31 = &DAT_055c04a0;
      }
    }
  }
  iVar14 = *(int *)(puVar31 + 7);
  local_8d = 0;
  plVar33 = (long *)(param_6 + 0x10);
  __dest = (undefined *)((long)&local_98 + 4);
  local_98 = CONCAT44(local_98._4_4_,8);
  local_a8 = PTR_DAT_04bb6a30 + 0x10;
  local_a0 = __dest;
  (**(code **)(*plVar33 + 0x18))(plVar33);
  __src = *(undefined **)(param_6 + 0x18);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_6 + 0x10) + 0x18))(plVar33);
    puVar36 = PTR_DAT_04bb2020;
    lVar22 = 0;
    do {
      if (*(char *)(*(long *)(param_6 + 0x18) + lVar22) == '\0') goto LAB_03726ca0;
      lVar2 = *(long *)(param_6 + 0x18) + lVar22;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar22 = lVar22 + 1;
        goto LAB_03726ca0;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar22 = lVar22 + 2;
        goto LAB_03726ca0;
      }
      lVar22 = lVar22 + 3;
    } while (lVar22 != 0x80001);
    lVar22 = 0;
LAB_03726ca0:
    iVar15 = (int)lVar22;
    if ((int)local_98 <= (int)lVar22) {
      iVar15 = (int)local_98 + -1;
    }
    memcpy(__dest,__src,(long)iVar15);
    __dest[iVar15] = 0;
  }
  local_ad = 0;
  local_b8 = 0x636e4d00000008;
  local_c0 = (long)&local_b8 + 4;
  local_c8 = PTR_DAT_04bb3768 + 0x10;
  local_a8 = local_c8;
  uVar17 = FUN_037715a0();
  local_d4 = CONCAT44(param_2,uVar17);
  local_d8 = 0x80000000;
  local_cc = param_3;
  if (iVar14 == -0x17df00c3) {
    uVar18 = FUN_037398f8(&local_d4,&local_d8,param_6);
    if ((uVar18 & 1) == 0) {
      if (((*(ushort *)(param_6 + 0x114) >> 3 & 1) == 0) ||
         (*(int *)(PTR_DAT_04bc3a80 + 0x38) != *(int *)(param_6 + 0x100))) {
        fVar37 = (float)FUN_03771fd0();
        uVar17 = 0x80000000;
        local_d4 = CONCAT44(param_2 + local_d4._4_4_,(float)local_d4 + fVar37);
        local_cc = param_3 + local_cc;
      }
      else {
        local_cc = *(float *)(param_6 + 0xf8);
        local_d4 = *(undefined8 *)(param_6 + 0xf0);
        uVar17 = *(undefined4 *)(param_6 + 0xfc);
      }
    }
    else {
      uVar17 = local_d8;
    }
    (**(code **)(local_a8 + 0x18))(&local_a8);
    puVar36 = local_a0;
    (**(code **)(local_c8 + 0x18))(&local_c8);
    FUN_0071b954(&local_208,"%s/AIC:WherearenGarden/AIF:AI_NPC_%s_WherearenGarden",puVar36,local_c0)
    ;
    *(undefined4 *)(param_5 + 0x18) = uVar17;
    *(undefined8 *)(param_5 + 8) = local_d4;
    pcVar30 = *(char **)(param_5 + 0x38);
    *(float *)(param_5 + 0x10) = local_cc;
    (**(code **)(local_208 + 0x18))(&local_208);
    pcVar29 = local_200;
    if (pcVar30 != local_200) {
      (**(code **)(local_208 + 0x18))(&local_208);
      lVar21 = 0;
      do {
        if (local_200[lVar21] == '\0') goto LAB_0372717c;
        if (local_200[lVar21 + 1] == '\0') {
          lVar21 = lVar21 + 1;
          goto LAB_0372717c;
        }
        if (local_200[lVar21 + 2] == '\0') {
          lVar21 = lVar21 + 2;
          goto LAB_0372717c;
        }
        lVar21 = lVar21 + 3;
      } while (lVar21 != 0x80001);
      lVar21 = 0;
LAB_0372717c:
      iVar14 = (int)lVar21;
      if (*(int *)(param_5 + 0x40) <= (int)lVar21) {
        iVar14 = *(int *)(param_5 + 0x40) + -1;
      }
      memcpy(pcVar30,pcVar29,(long)iVar14);
      pcVar30[iVar14] = '\0';
    }
  }
  else {
    if ((iVar14 != -0x7975b8e8) && (iVar14 != -0x3e092032)) {
      return 0;
    }
    FUN_0252d11c(&local_130);
    local_208 = puVar36 + 0x10;
    local_200 = "WHEREAREN_MncTalkReserve_House";
    iVar14 = FUN_02753180(&local_130,&local_208);
    if (((iVar14 == 0) &&
        ((*(int *)(lVar21 + 0x14) == 0 ||
         ((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0 &&
          ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0)))))) &&
       ((*(uint *)(&DAT_00001230 + param_4) >> 0xf & 1) == 0)) {
      return 0;
    }
    uVar18 = FUN_037398f8(&local_d4,&local_d8,param_6);
    if ((uVar18 & 1) == 0) {
      if (*(char *)(param_4 + 0x1231) < '\0') {
        if (((*(ushort *)(param_6 + 0x114) >> 3 & 1) == 0) ||
           (*(int *)(PTR_DAT_04bc3a80 + 0x38) != *(int *)(param_6 + 0x100))) {
          uVar17 = FUN_037715a0();
          local_d4 = CONCAT44(param_2,uVar17);
          uVar17 = 0x80000000;
          local_cc = param_3;
        }
        else {
          local_cc = *(float *)(param_6 + 0xf8);
          local_d4 = *(undefined8 *)(param_6 + 0xf0);
          uVar17 = *(undefined4 *)(param_6 + 0xfc);
        }
      }
      else {
        uVar17 = 0;
        local_d4 = 0x42c80000c0a00000;
        local_cc = -5.0;
      }
    }
    else {
      uVar17 = local_d8;
    }
    (**(code **)(local_a8 + 0x18))(&local_a8);
    puVar36 = local_a0;
    (**(code **)(local_c8 + 0x18))(&local_c8);
    FUN_0071b954(&local_130,"%s/AIC:WherearenHouse/AIF:AI_NPC_%s_WherearenHouse",puVar36,local_c0);
    FUN_007091b4(&local_208);
    *(undefined4 *)(param_5 + 0x18) = uVar17;
    *(undefined8 *)(param_5 + 8) = local_d4;
    *(float *)(param_5 + 0x10) = local_cc;
    FUN_00709380(param_5,&local_130);
  }
  goto LAB_037285b0;
LAB_03728574:
  lVar21 = lVar21 + 1;
  goto LAB_03728580;
LAB_0372857c:
  lVar21 = lVar21 + 2;
LAB_03728580:
  iVar14 = (int)lVar21;
  if (*(int *)(param_5 + 0x40) <= (int)lVar21) {
    iVar14 = *(int *)(param_5 + 0x40) + -1;
  }
  memcpy(pcVar30,pcVar29,(long)iVar14);
  pcVar30[iVar14] = '\0';
LAB_037285a8:
  *(undefined4 *)(param_5 + 0x1c) = 0xffffffff;
LAB_037285b0:
  lVar21 = *(long *)puVar11;
  if (lVar21 == 0) {
    puVar31 = &DAT_055c04a0;
  }
  else {
    puVar31 = &DAT_055c04a0;
    if (*(long *)(lVar21 + 0x330) != 0) {
      puVar31 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar21 + 0x338));
      iVar14 = FUN_006bd550(*puVar31,0);
      puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar14 != 0x758f7eaf) {
        puVar31 = &DAT_055c04a0;
      }
    }
  }
  pcVar29 = (char *)CONCAT44(local_1f0._4_4_,(uint)local_1f0);
  if (*(int *)(puVar31 + 7) != -0x17df00c3) goto LAB_03728864;
  lVar21 = *(long *)PTR_DAT_04bb27f8;
  pcVar29 = (char *)CONCAT44(local_1f0._4_4_,(uint)local_1f0);
  if (lVar21 == 0) goto LAB_03728864;
  FUN_0252d11c(&local_130);
  local_208 = PTR_DAT_04bb2020 + 0x10;
  local_200 = "WHEREAREN_CameraDemoReserve";
  iVar14 = FUN_02753180(&local_130,&local_208);
  puVar11 = PTR_DAT_04bc3a48;
  pcVar29 = (char *)CONCAT44(local_1f0._4_4_,(uint)local_1f0);
  if (iVar14 == 0) goto LAB_03728864;
  fVar37 = (float)*(int *)(*(long *)puVar1 + 0x50) * 5.0 + 2.5;
  fVar40 = (float)*(int *)(*(long *)puVar1 + 0x54) * 5.0 + 2.5;
  local_208 = (undefined *)(ulong)(uint)fVar37;
  local_200 = (char *)CONCAT44(local_200._4_4_,fVar40);
  if ((*(byte *)(param_6 + 0x114) >> 5 & 1) == 0) {
    sVar6 = *(short *)(param_6 + 0x38);
    if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
         ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
       (lVar22 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar22 == 0)) {
      sVar28 = *(short *)(lVar21 + 0x2a);
    }
    else if ((*(long **)(lVar22 + 0x60) == (long *)0x0) ||
            (puVar31 = (undefined8 *)**(long **)(lVar22 + 0x60), puVar31 == (undefined8 *)0x0)) {
      sVar28 = *(short *)(*(long *)(lVar22 + 0x48) + *(long *)(lVar22 + 0x40) + 2);
    }
    else {
      uVar18 = (**(code **)*puVar31)();
      sVar28 = *(short *)(*(long *)(lVar22 + 0x48) + *(long *)(lVar22 + 0x40) + 2);
      if ((((uVar18 & 1) != 0) && (*(long *)(lVar22 + 0x60) != 0)) &&
         (puVar31 = *(undefined8 **)(*(long *)(lVar22 + 0x60) + 8), puVar31 != (undefined8 *)0x0)) {
        (**(code **)*puVar31)();
      }
    }
    if (sVar6 != sVar28) {
      pcVar29 = (char *)CONCAT44(local_1f0._4_4_,(uint)local_1f0);
      sVar6 = *(short *)(param_6 + 0x38);
      if (((*(ushort **)puVar11 == (ushort *)0x0) || ((**(ushort **)puVar11 & 1) == 0)) ||
         (*(long *)PTR_DAT_04bc1530 == 0)) {
        sVar28 = *(short *)(lVar21 + 0x2c);
        if ((*(ushort *)(lVar21 + 0x28) & 0x80) != 0) {
          sVar28 = -1;
        }
LAB_03728808:
        pcVar29 = (char *)CONCAT44(local_1f0._4_4_,(uint)local_1f0);
      }
      else {
        lVar21 = *(long *)(*(long *)PTR_DAT_04bc1530 + 0x10);
        if ((*(long **)(lVar21 + 0x11b0) == (long *)0x0) ||
           (puVar31 = (undefined8 *)**(long **)(lVar21 + 0x11b0), puVar31 == (undefined8 *)0x0)) {
          sVar28 = *(short *)(*(long *)(lVar21 + 0x1198) + *(long *)(lVar21 + 0x1190) + 2);
        }
        else {
          uVar18 = (**(code **)*puVar31)();
          sVar28 = *(short *)(*(long *)(lVar21 + 0x1198) + *(long *)(lVar21 + 0x1190) + 2);
          if ((((uVar18 & 1) == 0) || (*(long *)(lVar21 + 0x11b0) == 0)) ||
             (puVar31 = *(undefined8 **)(*(long *)(lVar21 + 0x11b0) + 8),
             puVar31 == (undefined8 *)0x0)) goto LAB_03728808;
          (**(code **)*puVar31)();
          pcVar29 = (char *)CONCAT44(local_1f0._4_4_,(uint)local_1f0);
        }
      }
      if (sVar6 != sVar28) goto LAB_03728864;
      fVar37 = fVar37 + 10.0;
      local_208._4_4_ = (undefined4)((ulong)local_208 >> 0x20);
      local_208 = (undefined *)CONCAT44(local_208._4_4_,fVar37);
    }
    lVar21 = *(long *)PTR_DAT_04bb27c8;
    if (((lVar21 == 0) || (*(long *)(lVar21 + 0xa8) == 0)) || (*(char *)(lVar21 + 0x11c8) != '\0'))
    {
      puVar35 = (undefined4 *)PTR_DAT_04bb2ce8;
      goto LAB_03728848;
    }
    uVar17 = FUN_0093a950(lVar21 + 0x28,&local_208,0);
    puVar35 = (undefined4 *)PTR_DAT_04bb2ce8;
LAB_0372898c:
    fVar37 = (float)local_208;
  }
  else {
    fVar37 = fVar37 + 10.0;
    local_208 = (undefined *)(ulong)(uint)fVar37;
    local_200 = (char *)CONCAT44(local_200._4_4_,fVar40 + 20.0);
    lVar21 = *(long *)PTR_DAT_04bb27c8;
    if (((lVar21 != 0) && (*(long *)(lVar21 + 0xa8) != 0)) && (*(char *)(lVar21 + 0x11c8) == '\0'))
    {
      uVar17 = FUN_0093a950(lVar21 + 0x28,&local_208,0);
      puVar35 = (undefined4 *)PTR_DAT_04bb2cf0;
      goto LAB_0372898c;
    }
    puVar35 = (undefined4 *)PTR_DAT_04bb2cf0;
LAB_03728848:
    uVar17 = 0xc3fa0000;
  }
  *(float *)(param_5 + 8) = fVar37;
  *(undefined4 *)(param_5 + 0xc) = uVar17;
  *(undefined4 *)(param_5 + 0x18) = *puVar35;
  *(float *)(param_5 + 0x10) = local_200._0_4_;
  pcVar29 = (char *)CONCAT44(local_1f0._4_4_,(uint)local_1f0);
LAB_03728864:
  local_1f0 = pcVar29;
  uVar16 = FUN_006bd550(&DAT_040aacdf,0);
  iVar14 = 0;
  iVar15 = 0xeb;
  do {
    uVar3 = iVar14 + iVar15 >> 1;
    if (*(uint *)(PTR_DAT_04bb3858 +
                 (-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3)) == uVar16) {
      uVar17 = *(undefined4 *)
                (PTR_DAT_04bb3858 + ((long)((ulong)(uint)(iVar14 + iVar15) << 0x20) >> 0x21) * 8 + 4
                );
      goto LAB_037288d4;
    }
    iVar32 = uVar3 - 1;
    if (*(uint *)(PTR_DAT_04bb3858 +
                 (-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3)) < uVar16) {
      iVar14 = uVar3 + 1;
      iVar32 = iVar15;
    }
    iVar15 = iVar32;
  } while (iVar14 <= iVar32);
  uVar17 = 0xffffffff;
LAB_037288d4:
  *(undefined4 *)(param_5 + 4) = uVar17;
  iVar14 = FUN_021d5df0(param_6 + 0x10);
  local_208 = (undefined *)CONCAT44(local_208._4_4_,iVar14);
  if (iVar14 == 0) {
    local_130 = (undefined *)CONCAT53(local_130._3_5_,0x80023);
    FUN_020fd3a0(&local_130,param_6 + 0x10);
    uVar17 = FUN_021d7d60(&local_130);
    *(undefined4 *)(param_5 + 0x1c) = uVar17;
  }
  else if (iVar14 != 2) {
    *(undefined4 *)(param_5 + 0x1c) = 0xffffffff;
  }
  *(undefined4 *)(param_5 + 0x28) = 1;
  return 1;
}

