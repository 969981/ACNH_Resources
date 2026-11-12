
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008853f0(long param_1,long *param_2)

{
  undefined *puVar1;
  byte *pbVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  uint *puVar8;
  undefined *__s;
  ushort uVar9;
  byte bVar10;
  byte bVar11;
  bool bVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  ulong uVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined2 uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 *puVar26;
  long *plVar27;
  ulong *puVar28;
  int *piVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  char *pcVar34;
  CalendarTime *pCVar35;
  uint uVar36;
  char cVar37;
  uint uVar38;
  uint uVar39;
  undefined *puVar40;
  uint *puVar41;
  undefined8 local_138;
  char *pcStack_130;
  ulong local_128;
  undefined *local_120;
  uint *local_118;
  undefined4 local_110;
  uint uStack_10c;
  uint uStack_108;
  undefined8 local_104;
  undefined5 local_fc;
  undefined3 uStack_f7;
  undefined5 uStack_f4;
  undefined1 local_ef;
  undefined1 local_cd;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  char local_b4 [8];
  undefined7 local_ac;
  char cStack_a5;
  undefined7 local_a4;
  uint uStack_9d;
  undefined1 local_99;
  undefined1 local_95;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  puVar40 = PTR_DAT_04bb2020;
  local_120 = PTR_DAT_04bb2020 + 0x10;
  local_118 = (uint *)0x40ba957;
  FUN_0273f3c4(&local_120,0);
  pCVar35 = (CalendarTime *)(param_2 + 2);
  local_138 = *(undefined **)pCVar35;
  do {
    if (local_138._2_1_ != '\v') goto LAB_00885500;
    lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_138);
    local_120 = (undefined *)(lVar17 + -0x15180);
    puVar18 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_120);
    local_120 = puVar40 + 0x10;
    local_118 = (uint *)0x408bf35;
    local_138 = puVar18;
    if ((char)((ulong)puVar18 >> 0x20) < '\x05') {
      local_90 = puVar18;
      lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
      local_c8 = (undefined *)(lVar17 + -0x15180);
      puVar18 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c8);
    }
    local_90._0_4_ = SUB84(puVar18,0);
    local_90._0_6_ = CONCAT24(5,(undefined4)local_90);
    local_90._7_1_ = (undefined1)((ulong)puVar18 >> 0x38);
    local_90._0_7_ = (uint7)(uint6)local_90;
    uVar16 = FUN_00879dd0(param_1,&local_120,puVar18,(ulong)puVar18 >> 0x10,(ulong)puVar18 >> 0x18,0
                         );
  } while ((uVar16 & 1) == 0);
  local_120 = puVar40 + 0x10;
  local_118 = (uint *)0x40ba957;
  FUN_0273f3c4(&local_120,1);
LAB_00885500:
  puVar18 = puVar40 + 0x10;
  local_118 = (uint *)0x40f3e17;
  local_120 = puVar18;
  iVar13 = FUN_0273ea30(&local_120);
  if (iVar13 == 0) {
    local_138 = *(undefined **)pCVar35;
    local_c0 = "HarvestFestival";
    local_c8 = puVar18;
    if ((char)((ulong)local_138 >> 0x20) < '\x05') {
      lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_138);
      local_90 = (undefined *)(lVar17 + -0x15180);
      local_138 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_90);
    }
    uVar16 = (ulong)local_138;
    local_138._0_6_ = CONCAT24(5,(uint)local_138);
    local_138._7_1_ = SUB81(uVar16,7);
    local_138._0_7_ = (uint7)(uint6)local_138;
    uVar16 = FUN_00879dd0(param_1,&local_c8,uVar16,uVar16 >> 0x10,uVar16 >> 0x18,0);
    puVar18 = PTR_DAT_04bb57f8;
    if ((uVar16 & 1) != 0) {
      uVar38 = *(uint *)(param_1 + 0x1488);
      if ((0 < (int)uVar38) ||
         (((*(long *)(param_1 + 0x1378) != 0 &&
           (puVar41 = *(uint **)(*(long *)(param_1 + 0x1378) + 8), puVar41 != (uint *)0x0)) &&
          (uVar38 = *puVar41, uVar38 != 0)))) {
        uVar36 = 0;
        uVar31 = 0;
        uVar30 = 0;
        uVar33 = 0;
        uVar32 = 0;
        uVar39 = 0;
        pcVar34 = PTR_DAT_04bb57f0;
LAB_008875bc:
        if ((int)*(uint *)(param_1 + 0x1488) < 1) {
          if (((((*(long *)(param_1 + 0x1378) != 0) &&
                (puVar41 = *(uint **)(*(long *)(param_1 + 0x1378) + 8), puVar41 != (uint *)0x0)) &&
               ((*(uint *)(param_1 + 0x1390) <= uVar36 ||
                (*(char *)(*(long *)(param_1 + 0x1398) + (long)(int)uVar36) != '\0')))) &&
              ((uVar36 < *puVar41 && (puVar41[1] != 0)))) && ((ushort)puVar41[2] != 0)) {
            iVar13 = 0xc;
            if (*(char *)((long)puVar41 + 10) != '\0') {
              iVar13 = 0x1c;
            }
            puVar41 = (uint *)((ulong)(puVar41[1] * uVar36 + (uint)(ushort)puVar41[2] * 8 + iVar13)
                              + (long)puVar41);
            goto joined_r0x00887700;
          }
        }
        else if (uVar36 < *(uint *)(param_1 + 0x1488)) {
          uVar3 = uVar36;
          if (*(uint *)(param_1 + 0x1478) <= uVar36) {
            uVar3 = 0;
          }
          puVar41 = *(uint **)(*(long *)(param_1 + 0x1480) + (ulong)uVar3 * 8);
joined_r0x00887700:
          if (puVar41 != (uint *)0x0) {
            uVar3 = *puVar41;
            if (uVar3 != 0) {
              cVar37 = *pcVar34;
              do {
                uVar16 = (ulong)uVar3;
                if (cVar37 != '\0') {
                  uVar3 = *(uint *)(puVar18 + 0x2c);
                  if ((int)uVar3 < 0) {
                    if ((uVar3 == 0xffffffff) && (uVar16 != 0)) goto LAB_0088763c;
                  }
                  else if ((char *)((ulong)uVar3 + (long)puVar41) != (char *)0x0) {
                    if (*(char *)((ulong)uVar3 + (long)puVar41) != '\0') {
                      uVar16 = FUN_00885050(uVar36);
                      if ((uVar16 & 1) != 0) {
                        uVar30 = uVar30 | 1 << (ulong)(uVar36 & 0x1f);
                      }
                      pcVar34 = PTR_DAT_04bb57f0;
                      uVar31 = uVar30;
                    }
                  }
LAB_00887778:
                  uVar3 = *puVar41;
                  if (uVar3 != 0) {
                    cVar37 = *pcVar34;
                    goto LAB_00887784;
                  }
                  break;
                }
                *(undefined8 *)puVar18 = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 8) = 0xffffffffffffffff;
                cVar37 = '\x01';
                *(undefined4 *)(puVar18 + 0x40) = 0xffffffff;
                *pcVar34 = '\x01';
                *(undefined8 *)(puVar18 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar18 + 0x38) = 0xffffffffffffffff;
                uVar16 = (ulong)*puVar41;
                if (uVar16 == 0) goto LAB_00887778;
LAB_0088763c:
                lVar17 = (long)puVar41 - uVar16;
                if (lVar17 == 0) goto LAB_00887778;
                lVar19 = 0xc;
                if (*(char *)(lVar17 + 10) != '\0') {
                  lVar19 = 0x1c;
                }
                if (lVar19 + lVar17 == 0) goto LAB_00887778;
                uVar16 = (ulong)*(ushort *)(lVar17 + 8);
                *(undefined4 *)(puVar18 + 0x2c) = 0xfffffffe;
                if (uVar16 == 0) goto LAB_00887778;
                piVar29 = (int *)(lVar19 + lVar17 + 4);
                while (piVar29[-1] != 0x6278197b) {
                  piVar29 = piVar29 + 2;
                  uVar16 = uVar16 - 1;
                  if (uVar16 == 0) goto LAB_00887778;
                }
                iVar13 = 0;
                if (*piVar29 != -1) {
                  iVar13 = *piVar29;
                }
                *(int *)(puVar18 + 0x2c) = iVar13;
                uVar3 = *puVar41;
              } while (uVar3 != 0);
            }
          }
        }
        goto LAB_008875b0;
      }
      uVar39 = 0;
      uVar32 = 0;
      uVar33 = 0;
      uVar30 = 0;
LAB_00885604:
      local_90 = (undefined *)((long)&local_80 + 4);
      local_88 = (char *)&local_80;
      local_128 = CONCAT44(local_128._4_4_,uVar39);
      local_80 = 0;
      local_b8 = 0x20;
      local_70 = CONCAT44(local_70._4_4_,uVar33);
      local_b4[0] = s_HarvestTukIngredient2_2_040f3e17[0];
      local_b4[1] = s_HarvestTukIngredient2_2_040f3e17[1];
      local_b4[2] = s_HarvestTukIngredient2_2_040f3e17[2];
      local_b4[3] = s_HarvestTukIngredient2_2_040f3e17[3];
      local_b4[4] = s_HarvestTukIngredient2_2_040f3e17[4];
      local_b4[5] = s_HarvestTukIngredient2_2_040f3e17[5];
      local_b4[6] = s_HarvestTukIngredient2_2_040f3e17[6];
      local_b4[7] = s_HarvestTukIngredient2_2_040f3e17[7];
      local_78 = CONCAT44(local_78._4_4_,uVar32);
      local_95 = 0;
      local_ac._0_1_ = s_HarvestTukIngredient2_2_040f3e17[8];
      local_ac._1_1_ = s_HarvestTukIngredient2_2_040f3e17[9];
      local_ac._2_1_ = s_HarvestTukIngredient2_2_040f3e17[10];
      local_ac._3_1_ = s_HarvestTukIngredient2_2_040f3e17[0xb];
      local_ac._4_1_ = s_HarvestTukIngredient2_2_040f3e17[0xc];
      local_ac._5_1_ = s_HarvestTukIngredient2_2_040f3e17[0xd];
      local_ac._6_1_ = s_HarvestTukIngredient2_2_040f3e17[0xe];
      uStack_9d = uStack_9d & 0xffffff00;
      cStack_a5 = s_HarvestTukIngredient2_2_040f3e17[0xf];
      local_a4._0_1_ = s_HarvestTukIngredient2_2_040f3e17[0x10];
      local_a4._1_1_ = s_HarvestTukIngredient2_2_040f3e17[0x11];
      local_a4._2_1_ = s_HarvestTukIngredient2_2_040f3e17[0x12];
      local_a4._3_1_ = s_HarvestTukIngredient2_2_040f3e17[0x13];
      local_a4._4_1_ = s_HarvestTukIngredient2_2_040f3e17[0x14];
      local_a4._5_1_ = s_HarvestTukIngredient2_2_040f3e17[0x15];
      local_a4._6_1_ = s_HarvestTukIngredient2_2_040f3e17[0x16];
      puVar40 = PTR_DAT_04bb2028 + 0x10;
      local_cd = 0;
      local_ef = 0;
      uStack_10c = (uint)DAT_0409b351;
      uStack_108 = (uint)((ulong)DAT_0409b351 >> 0x20);
      local_104 = DAT_0409b359;
      local_110 = 0x40;
      local_fc = (undefined5)DAT_0409b361;
      uStack_f7 = DAT_0409b361._5_3_;
      uStack_f4 = _UNK_0409b369;
      puVar18 = PTR_DAT_04bb2bc0 + 0x10;
      local_120 = puVar18;
      local_118 = &uStack_10c;
      local_c8 = puVar40;
      local_c0 = local_b4;
      local_138._0_4_ = uVar30;
      FUN_00887ac0(&local_90,&local_138,&local_c8);
      local_95 = 0;
      local_b8 = 0x20;
      local_99 = 0;
      local_b4[0] = s_HarvestTukHideIngredient2_1_040ba968[0];
      local_b4[1] = s_HarvestTukHideIngredient2_1_040ba968[1];
      local_b4[2] = s_HarvestTukHideIngredient2_1_040ba968[2];
      local_b4[3] = s_HarvestTukHideIngredient2_1_040ba968[3];
      local_b4[4] = s_HarvestTukHideIngredient2_1_040ba968[4];
      local_b4[5] = s_HarvestTukHideIngredient2_1_040ba968[5];
      local_b4[6] = s_HarvestTukHideIngredient2_1_040ba968[6];
      local_b4[7] = s_HarvestTukHideIngredient2_1_040ba968[7];
      local_ac = s_HarvestTukHideIngredient2_1_040ba968._8_7_;
      cStack_a5 = s_HarvestTukHideIngredient2_1_040ba968[0xf];
      local_a4 = s_HarvestTukHideIngredient2_1_040ba968._16_7_;
      uStack_9d._0_1_ = s_HarvestTukHideIngredient2_1_040ba968[0x17];
      uStack_9d = CONCAT31(0x315f32,(char)uStack_9d);
      local_cd = 0;
      local_ef = 0;
      uStack_10c = (uint)DAT_040bf740;
      uStack_108 = (uint)((ulong)DAT_040bf740 >> 0x20);
      local_104 = DAT_040bf748;
      uVar30 = uVar30 & (1 << (ulong)((uint)local_80 & 0x1f) ^ 0xffffffffU);
      local_110 = 0x40;
      local_fc = (undefined5)DAT_040bf750;
      uStack_f7 = DAT_040bf750._5_3_;
      uStack_f4 = _UNK_040bf758;
      local_120 = puVar18;
      local_118 = &uStack_10c;
      local_c8 = puVar40;
      local_c0 = local_b4;
      local_138._0_4_ = uVar30;
      FUN_00887ac0(&local_90,&local_138,&local_c8);
      local_b8 = 0x20;
      local_95 = 0;
      local_99 = 0;
      local_cd = 0;
      local_ef = 0;
      local_138 = (undefined *)
                  CONCAT44(local_138._4_4_,
                           uVar30 & (1 << (ulong)((uint)local_80 & 0x1f) ^ 0xffffffffU));
      local_110 = 0x40;
      local_b4[0] = s_HarvestTukHideIngredient2_2_040912eb[0];
      local_b4[1] = s_HarvestTukHideIngredient2_2_040912eb[1];
      local_b4[2] = s_HarvestTukHideIngredient2_2_040912eb[2];
      local_b4[3] = s_HarvestTukHideIngredient2_2_040912eb[3];
      local_b4[4] = s_HarvestTukHideIngredient2_2_040912eb[4];
      local_b4[5] = s_HarvestTukHideIngredient2_2_040912eb[5];
      local_b4[6] = s_HarvestTukHideIngredient2_2_040912eb[6];
      local_b4[7] = s_HarvestTukHideIngredient2_2_040912eb[7];
      local_ac = s_HarvestTukHideIngredient2_2_040912eb._8_7_;
      cStack_a5 = s_HarvestTukHideIngredient2_2_040912eb[0xf];
      local_a4 = s_HarvestTukHideIngredient2_2_040912eb._16_7_;
      uStack_9d._0_1_ = s_HarvestTukHideIngredient2_2_040912eb[0x17];
      uStack_9d._1_3_ = 0x325f32;
      uStack_10c = (uint)DAT_040d43bb;
      uStack_108 = (uint)((ulong)DAT_040d43bb >> 0x20);
      local_104 = DAT_040d43c3;
      local_fc = (undefined5)DAT_040d43cb;
      uStack_f7 = DAT_040d43cb._5_3_;
      uStack_f4 = _UNK_040d43d3;
      local_120 = puVar18;
      local_118 = &uStack_10c;
      local_c8 = puVar40;
      local_c0 = local_b4;
      FUN_00887ac0(&local_90,&local_138,&local_c8);
      local_b8 = 0x20;
      local_95 = 0;
      uStack_9d = (uint)uStack_9d._1_3_ << 8;
      local_110 = 0x40;
      local_cd = 0;
      local_ac._0_1_ = s_HarvestTukIngredient3_1_040aaee4[8];
      local_ac._1_1_ = s_HarvestTukIngredient3_1_040aaee4[9];
      local_ac._2_1_ = s_HarvestTukIngredient3_1_040aaee4[10];
      local_ac._3_1_ = s_HarvestTukIngredient3_1_040aaee4[0xb];
      local_ac._4_1_ = s_HarvestTukIngredient3_1_040aaee4[0xc];
      local_ac._5_1_ = s_HarvestTukIngredient3_1_040aaee4[0xd];
      local_ac._6_1_ = s_HarvestTukIngredient3_1_040aaee4[0xe];
      cStack_a5 = s_HarvestTukIngredient3_1_040aaee4[0xf];
      local_a4._0_1_ = s_HarvestTukIngredient3_1_040aaee4[0x10];
      local_a4._1_1_ = s_HarvestTukIngredient3_1_040aaee4[0x11];
      local_a4._2_1_ = s_HarvestTukIngredient3_1_040aaee4[0x12];
      local_a4._3_1_ = s_HarvestTukIngredient3_1_040aaee4[0x13];
      local_a4._4_1_ = s_HarvestTukIngredient3_1_040aaee4[0x14];
      local_a4._5_1_ = s_HarvestTukIngredient3_1_040aaee4[0x15];
      local_a4._6_1_ = s_HarvestTukIngredient3_1_040aaee4[0x16];
      local_b4[0] = s_HarvestTukIngredient3_1_040aaee4[0];
      local_b4[1] = s_HarvestTukIngredient3_1_040aaee4[1];
      local_b4[2] = s_HarvestTukIngredient3_1_040aaee4[2];
      local_b4[3] = s_HarvestTukIngredient3_1_040aaee4[3];
      local_b4[4] = s_HarvestTukIngredient3_1_040aaee4[4];
      local_b4[5] = s_HarvestTukIngredient3_1_040aaee4[5];
      local_b4[6] = s_HarvestTukIngredient3_1_040aaee4[6];
      local_b4[7] = s_HarvestTukIngredient3_1_040aaee4[7];
      local_ef = 0;
      uStack_10c = (uint)DAT_0408bf51;
      uStack_108 = (uint)((ulong)DAT_0408bf51 >> 0x20);
      local_104 = DAT_0408bf59;
      local_fc = (undefined5)DAT_0408bf61;
      uStack_f7 = DAT_0408bf61._5_3_;
      uStack_f4 = _UNK_0408bf69;
      local_120 = puVar18;
      local_118 = &uStack_10c;
      local_c8 = puVar40;
      local_c0 = local_b4;
      FUN_00887ac0(&local_90,&local_70,&local_c8);
      local_b8 = 0x20;
      local_95 = 0;
      uStack_9d = uStack_9d & 0xffffff00;
      local_110 = 0x40;
      local_cd = 0;
      local_ac._0_1_ = s_HarvestTukIngredient3_2_040c98d8[8];
      local_ac._1_1_ = s_HarvestTukIngredient3_2_040c98d8[9];
      local_ac._2_1_ = s_HarvestTukIngredient3_2_040c98d8[10];
      local_ac._3_1_ = s_HarvestTukIngredient3_2_040c98d8[0xb];
      local_ac._4_1_ = s_HarvestTukIngredient3_2_040c98d8[0xc];
      local_ac._5_1_ = s_HarvestTukIngredient3_2_040c98d8[0xd];
      local_ac._6_1_ = s_HarvestTukIngredient3_2_040c98d8[0xe];
      cStack_a5 = s_HarvestTukIngredient3_2_040c98d8[0xf];
      local_a4._0_1_ = s_HarvestTukIngredient3_2_040c98d8[0x10];
      local_a4._1_1_ = s_HarvestTukIngredient3_2_040c98d8[0x11];
      local_a4._2_1_ = s_HarvestTukIngredient3_2_040c98d8[0x12];
      local_a4._3_1_ = s_HarvestTukIngredient3_2_040c98d8[0x13];
      local_a4._4_1_ = s_HarvestTukIngredient3_2_040c98d8[0x14];
      local_a4._5_1_ = s_HarvestTukIngredient3_2_040c98d8[0x15];
      local_a4._6_1_ = s_HarvestTukIngredient3_2_040c98d8[0x16];
      local_b4[0] = s_HarvestTukIngredient3_2_040c98d8[0];
      local_b4[1] = s_HarvestTukIngredient3_2_040c98d8[1];
      local_b4[2] = s_HarvestTukIngredient3_2_040c98d8[2];
      local_b4[3] = s_HarvestTukIngredient3_2_040c98d8[3];
      local_b4[4] = s_HarvestTukIngredient3_2_040c98d8[4];
      local_b4[5] = s_HarvestTukIngredient3_2_040c98d8[5];
      local_b4[6] = s_HarvestTukIngredient3_2_040c98d8[6];
      local_b4[7] = s_HarvestTukIngredient3_2_040c98d8[7];
      local_ef = 0;
      uStack_10c = (uint)DAT_0407bc70;
      uStack_108 = (uint)((ulong)DAT_0407bc70 >> 0x20);
      local_104 = DAT_0407bc78;
      local_fc = (undefined5)DAT_0407bc80;
      uStack_f7 = DAT_0407bc80._5_3_;
      uStack_f4 = _UNK_0407bc88;
      local_120 = puVar18;
      local_118 = &uStack_10c;
      local_c8 = puVar40;
      local_c0 = local_b4;
      FUN_00887ac0(&local_90,&local_78,&local_c8);
      local_b8 = 0x20;
      local_95 = 0;
      uStack_9d = uStack_9d & 0xffffff00;
      local_110 = 0x40;
      local_cd = 0;
      local_ac._0_1_ = s_HarvestTukIngredient4_2_04061b1e[8];
      local_ac._1_1_ = s_HarvestTukIngredient4_2_04061b1e[9];
      local_ac._2_1_ = s_HarvestTukIngredient4_2_04061b1e[10];
      local_ac._3_1_ = s_HarvestTukIngredient4_2_04061b1e[0xb];
      local_ac._4_1_ = s_HarvestTukIngredient4_2_04061b1e[0xc];
      local_ac._5_1_ = s_HarvestTukIngredient4_2_04061b1e[0xd];
      local_ac._6_1_ = s_HarvestTukIngredient4_2_04061b1e[0xe];
      cStack_a5 = s_HarvestTukIngredient4_2_04061b1e[0xf];
      local_a4._0_1_ = s_HarvestTukIngredient4_2_04061b1e[0x10];
      local_a4._1_1_ = s_HarvestTukIngredient4_2_04061b1e[0x11];
      local_a4._2_1_ = s_HarvestTukIngredient4_2_04061b1e[0x12];
      local_a4._3_1_ = s_HarvestTukIngredient4_2_04061b1e[0x13];
      local_a4._4_1_ = s_HarvestTukIngredient4_2_04061b1e[0x14];
      local_a4._5_1_ = s_HarvestTukIngredient4_2_04061b1e[0x15];
      local_a4._6_1_ = s_HarvestTukIngredient4_2_04061b1e[0x16];
      local_b4[0] = s_HarvestTukIngredient4_2_04061b1e[0];
      local_b4[1] = s_HarvestTukIngredient4_2_04061b1e[1];
      local_b4[2] = s_HarvestTukIngredient4_2_04061b1e[2];
      local_b4[3] = s_HarvestTukIngredient4_2_04061b1e[3];
      local_b4[4] = s_HarvestTukIngredient4_2_04061b1e[4];
      local_b4[5] = s_HarvestTukIngredient4_2_04061b1e[5];
      local_b4[6] = s_HarvestTukIngredient4_2_04061b1e[6];
      local_b4[7] = s_HarvestTukIngredient4_2_04061b1e[7];
      local_ef = 0;
      uStack_10c = (uint)DAT_04080e30;
      uStack_108 = (uint)((ulong)DAT_04080e30 >> 0x20);
      local_104 = DAT_04080e38;
      local_fc = (undefined5)DAT_04080e40;
      uStack_f7 = DAT_04080e40._5_3_;
      uStack_f4 = _UNK_04080e48;
      local_120 = puVar18;
      local_118 = &uStack_10c;
      local_c8 = puVar40;
      local_c0 = local_b4;
      FUN_00887ac0(&local_90,&local_128,&local_c8);
      puVar40 = PTR_DAT_04bb2020;
    }
  }
  if ((*param_2 != 0) || ((char)param_2[5] != '\0')) {
    puVar18 = puVar40 + 0x10;
    local_118 = (uint *)0x40a599e;
    local_120 = puVar18;
    uVar16 = FUN_0273f0a0(&local_120);
    if ((uVar16 & 1) != 0) {
      local_118 = (uint *)0x407bc8e;
      local_120 = puVar18;
      FUN_0273f3c4(&local_120,1);
    }
    local_118 = (uint *)0x40c98f0;
    local_120 = puVar18;
    uVar16 = FUN_0273f0a0(&local_120);
    if ((uVar16 & 1) != 0) {
      local_120 = puVar40 + 0x10;
      local_118 = (uint *)0x4080e1b;
      FUN_0273f3c4(&local_120,1);
    }
    local_118 = (uint *)0x40716be;
    local_120 = puVar40 + 0x10;
    uVar16 = FUN_0273f0a0(&local_120);
    if ((uVar16 & 1) != 0) {
      local_118 = (uint *)0x40c98f0;
      local_120 = puVar40 + 0x10;
      FUN_0273f3c4(&local_120,1);
    }
    if (0 < *param_2) {
      local_128 = param_2[3];
      do {
        local_118 = (uint *)0x40f3e2f;
        local_120 = puVar40 + 0x10;
        uVar16 = FUN_0273f0a0(&local_120);
        if ((uVar16 & 1) == 0) {
          local_120 = puVar40 + 0x10;
          local_118 = (uint *)0x4066f3c;
          local_90 = (undefined *)local_128;
          if ((char)(local_128 >> 0x20) < '\x05') {
            lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
            local_c8 = (undefined *)(lVar17 + -0x15180);
            local_90 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c8);
          }
          uVar21 = (ulong)local_90;
          uVar16 = (ulong)local_90 >> 0x30;
          local_90._0_6_ = CONCAT24(5,(undefined4)local_90);
          local_90 = (undefined *)(CONCAT26((short)uVar16,(uint6)local_90) & 0xff00ffffffffffff);
          uVar16 = FUN_00879dd0(param_1,&local_120,uVar21,uVar21 >> 0x10,uVar21 >> 0x18,0);
          if ((uVar16 & 1) == 0) {
            local_c8 = puVar40 + 0x10;
            local_c0 = "InsectConvention2";
            local_138 = (undefined *)local_128;
            if ((char)(local_128 >> 0x20) < '\x05') {
              lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_138);
              local_90 = (undefined *)(lVar17 + -0x15180);
              local_138 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_90);
            }
            uVar21 = (ulong)local_138;
            uVar16 = (ulong)local_138 >> 0x30;
            local_138._0_6_ = CONCAT24(5,(uint)local_138);
            local_138 = (undefined *)(CONCAT26((short)uVar16,(uint6)local_138) & 0xff00ffffffffffff)
            ;
            uVar16 = FUN_00879dd0(param_1,&local_c8,uVar21,uVar21 >> 0x10,uVar21 >> 0x18,0);
            if ((uVar16 & 1) == 0) {
              local_90 = puVar40 + 0x10;
              local_88 = "InsectConvention3";
              local_70 = local_128;
              if ((char)(local_128 >> 0x20) < '\x05') {
                lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
                local_138 = (undefined *)(lVar17 + -0x15180);
                local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_138);
              }
              uVar21 = local_70;
              uVar16 = local_70 >> 0x30;
              local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
              local_70 = CONCAT26((short)uVar16,(undefined6)local_70) & 0xff00ffffffffffff;
              uVar16 = FUN_00879dd0(param_1,&local_90,uVar21,uVar21 >> 0x10,uVar21 >> 0x18,0);
              if ((uVar16 & 1) == 0) {
                local_138 = puVar40 + 0x10;
                pcStack_130 = "InsectConvention4";
                local_78 = local_128;
                if ((char)(local_128 >> 0x20) < '\x05') {
                  lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
                  local_70 = lVar17 - 0x15180;
                  local_78 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_70);
                }
                uVar21 = local_78;
                uVar16 = local_78 >> 0x30;
                local_78._0_6_ = CONCAT24(5,(undefined4)local_78);
                local_78 = CONCAT26((short)uVar16,(undefined6)local_78) & 0xff00ffffffffffff;
                uVar16 = FUN_00879dd0(param_1,&local_138,uVar21,uVar21 >> 0x10,uVar21 >> 0x18,0);
                if ((uVar16 & 1) == 0) goto LAB_00885c04;
              }
            }
          }
          local_120 = puVar40 + 0x10;
          local_118 = (uint *)0x40f3e2f;
          FUN_0273f3c4(&local_120,1);
        }
LAB_00885c04:
        puVar18 = puVar40 + 0x10;
        local_118 = (uint *)0x40c9901;
        local_120 = puVar18;
        uVar16 = FUN_0273f0a0(&local_120);
        if ((uVar16 & 1) == 0) {
          local_118 = (uint *)0x40ceb86;
          local_90 = (undefined *)local_128;
          local_120 = puVar18;
          if ((char)(local_128 >> 0x20) < '\x05') {
            lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
            local_c8 = (undefined *)(lVar17 + -0x15180);
            local_90 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c8);
          }
          uVar21 = (ulong)local_90;
          uVar16 = (ulong)local_90 >> 0x30;
          local_90._0_6_ = CONCAT24(5,(undefined4)local_90);
          local_90 = (undefined *)(CONCAT26((short)uVar16,(uint6)local_90) & 0xff00ffffffffffff);
          uVar16 = FUN_00879dd0(param_1,&local_120,uVar21,uVar21 >> 0x10,uVar21 >> 0x18,0);
          if ((uVar16 & 1) == 0) {
            local_c8 = puVar40 + 0x10;
            local_c0 = "FishingConventionSummer";
            local_138 = (undefined *)local_128;
            if ((char)(local_128 >> 0x20) < '\x05') {
              lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_138);
              local_90 = (undefined *)(lVar17 + -0x15180);
              local_138 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_90);
            }
            uVar21 = (ulong)local_138;
            uVar16 = (ulong)local_138 >> 0x30;
            local_138._0_6_ = CONCAT24(5,(uint)local_138);
            local_138 = (undefined *)(CONCAT26((short)uVar16,(uint6)local_138) & 0xff00ffffffffffff)
            ;
            uVar16 = FUN_00879dd0(param_1,&local_c8,uVar21,uVar21 >> 0x10,uVar21 >> 0x18,0);
            if ((uVar16 & 1) == 0) {
              local_90 = puVar40 + 0x10;
              local_88 = "FishingConventionAutumn";
              local_70 = local_128;
              if ((char)(local_128 >> 0x20) < '\x05') {
                lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
                local_138 = (undefined *)(lVar17 + -0x15180);
                local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_138);
              }
              uVar21 = local_70;
              uVar16 = local_70 >> 0x30;
              local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
              local_70 = CONCAT26((short)uVar16,(undefined6)local_70) & 0xff00ffffffffffff;
              uVar16 = FUN_00879dd0(param_1,&local_90,uVar21,uVar21 >> 0x10,uVar21 >> 0x18,0);
              if ((uVar16 & 1) == 0) {
                local_138 = puVar40 + 0x10;
                pcStack_130 = "FishingConventionWinter";
                local_78 = local_128;
                if ((char)(local_128 >> 0x20) < '\x05') {
                  lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
                  local_70 = lVar17 - 0x15180;
                  local_78 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_70);
                }
                uVar21 = local_78;
                uVar16 = local_78 >> 0x30;
                local_78._0_6_ = CONCAT24(5,(undefined4)local_78);
                local_78 = CONCAT26((short)uVar16,(undefined6)local_78) & 0xff00ffffffffffff;
                uVar16 = FUN_00879dd0(param_1,&local_138,uVar21,uVar21 >> 0x10,uVar21 >> 0x18,0);
                if ((uVar16 & 1) == 0) goto LAB_00885dd8;
              }
            }
          }
          local_120 = puVar40 + 0x10;
          local_118 = (uint *)0x40c9901;
          FUN_0273f3c4(&local_120,1);
        }
LAB_00885dd8:
        local_118 = (uint *)0x4076954;
        local_120 = puVar18;
        uVar16 = FUN_0273f0a0(&local_120);
        if (((uVar16 & 1) == 0) &&
           (uVar16 = FUN_00873540(param_1,&local_128,1,0), (uVar16 & 1) != 0)) {
          local_120 = puVar40 + 0x10;
          local_118 = (uint *)0x4076954;
          FUN_0273f3c4(&local_120,1);
        }
        lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_128);
        local_120 = (undefined *)(lVar17 + 0x15180);
        local_128 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_120);
        lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_128);
        lVar19 = nn::time::ToPosixTimeFromUtc(pCVar35);
      } while ((lVar17 <= lVar19) &&
              (lVar19 = nn::time::ToPosixTimeFromUtc(pCVar35), lVar19 != lVar17));
    }
  }
  puVar18 = PTR_DAT_04bb46b0;
  uVar16 = 0;
  lVar17 = 0x1e33b8;
  do {
    lVar19 = *(long *)puVar18;
    if (lVar19 == 0) {
LAB_00885f20:
      lVar19 = 0;
      plVar27 = _DAT_00000028;
      if (_DAT_00000028 != (long *)0x0) goto LAB_00885f2c;
LAB_00885ee8:
      uVar21 = 0;
    }
    else {
      puVar26 = *(undefined8 **)(lVar19 + 0x10);
      if ((*(byte *)(lVar19 + 0x453) & 1) == 0) {
        lVar20 = (**(code **)(*(long *)*puVar26 + 0x38))();
        lVar19 = 0;
        if (lVar20 != 0) {
          lVar19 = lVar20 + 0x70;
        }
        plVar27 = *(long **)(lVar19 + 0x28);
      }
      else {
        if ((puVar26 == (undefined8 *)0x0) || ((long *)puVar26[0x26] == (long *)0x0))
        goto LAB_00885f20;
        lVar19 = (**(code **)(*(long *)puVar26[0x26] + 0x38))();
        plVar27 = *(long **)(lVar19 + 0x28);
      }
      if (plVar27 == (long *)0x0) goto LAB_00885ee8;
LAB_00885f2c:
      uVar21 = 0;
      if ((undefined8 *)*plVar27 != (undefined8 *)0x0) {
        uVar21 = (*(code *)**(undefined8 **)*plVar27)();
      }
    }
    plVar27 = (long *)(*(long *)(lVar19 + 0x10) + *(long *)(lVar19 + 8) + lVar17);
    lVar20 = plVar27[-1];
    lVar4 = *plVar27;
    if ((((uVar21 & 1) != 0) && (*(long *)(lVar19 + 0x28) != 0)) &&
       (puVar26 = *(undefined8 **)(*(long *)(lVar19 + 0x28) + 8), puVar26 != (undefined8 *)0x0)) {
      (**(code **)*puVar26)();
    }
    if ((lVar20 != 0 || lVar4 != 0) &&
       (lVar19 = FUN_026eec4c(*(undefined8 *)puVar18,uVar16 & 0xffffffff), lVar19 != 0)) {
      lVar20 = *(long *)(lVar19 + 0x28);
      if (lVar20 == 0) {
        FUN_027ef890(*(long *)(lVar19 + 0x10) + *(long *)(lVar19 + 8),param_2,uVar16 & 0xffffffff);
      }
      else {
        if (*(undefined8 **)(lVar20 + 0x10) == (undefined8 *)0x0) {
          uVar21 = 0;
          plVar27 = *(long **)(lVar20 + 0x20);
joined_r0x00886024:
          if (plVar27 != (long *)0x0) {
            local_120 = *(undefined **)(lVar19 + 8);
            local_118 = *(uint **)(lVar19 + 0x10);
            local_110 = 0x37ad0;
            uStack_10c = 0;
            (**(code **)(*plVar27 + 0x20))(plVar27,&local_120);
          }
        }
        else {
          uVar21 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
          uVar21 = uVar21 & 0xffffffff;
          if (*(long *)(lVar19 + 0x28) != 0) {
            plVar27 = *(long **)(*(long *)(lVar19 + 0x28) + 0x20);
            goto joined_r0x00886024;
          }
        }
        FUN_027ef890(*(long *)(lVar19 + 0x10) + *(long *)(lVar19 + 8),param_2,uVar16 & 0xffffffff);
        if ((((uVar21 & 1) != 0) && (*(long *)(lVar19 + 0x28) != 0)) &&
           (puVar26 = *(undefined8 **)(*(long *)(lVar19 + 0x28) + 0x18),
           puVar26 != (undefined8 *)0x0)) {
          (**(code **)*puVar26)();
        }
      }
    }
    uVar16 = uVar16 + 1;
    lVar17 = lVar17 + 0x48;
  } while (uVar16 != 8);
  local_118 = (uint *)0x4061837;
  local_120 = puVar40 + 0x10;
  uVar14 = FUN_02743000(&local_120);
  local_118 = (uint *)0x4061837;
  local_120 = puVar40 + 0x10;
  FUN_02743234(&local_120,0);
  puVar28 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)puVar28 == 0) {
    local_c8 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)((ulong)local_c8 >> 0x20) < '\x05') {
      lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_c8);
      local_120 = (undefined *)(lVar17 + -0x15180);
      local_c8 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_120);
    }
    puVar28 = &local_c8;
    uVar16 = (ulong)local_c8 >> 0x30;
    local_c8._0_6_ = CONCAT24(5,(undefined4)local_c8);
    local_c8 = (undefined *)(CONCAT26((short)uVar16,(uint6)local_c8) & 0xff00ffffffffffff);
  }
  local_138 = (undefined *)*puVar28;
  uVar16 = FUN_00873540(param_1,&local_138,1,0);
  if ((uVar16 & 1) == 0) {
    local_120 = puVar40 + 0x10;
    local_118 = (uint *)0x4076941;
    FUN_0273f3c4(&local_120,0xffff);
  }
  else {
    FUN_00873ad0(&local_120,param_1,&local_138,1);
    (**(code **)(local_120 + 0x18))(&local_120);
    uVar15 = FUN_006bd550(local_118,0);
    local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar15);
    puVar41 = (uint *)FUN_0088c0d0(param_1 + 8,&local_c8);
    __s = PTR_DAT_04bb3250;
    puVar1 = PTR_DAT_04bb3248;
    if (puVar41 != (uint *)0x0) {
      uVar38 = *puVar41;
      if (uVar38 != 0) {
        cVar37 = *PTR_DAT_04bb3248;
        do {
          if (cVar37 == '\0') {
            cVar37 = '\x01';
            *puVar1 = 1;
            memset(__s,0xff,0x288);
            uVar38 = *puVar41;
          }
          else {
            uVar36 = *(uint *)(__s + 0x28);
            if (-1 < (int)uVar36) {
              if ((undefined2 *)((ulong)uVar36 + (long)puVar41) != (undefined2 *)0x0) {
                uVar23 = *(undefined2 *)((ulong)uVar36 + (long)puVar41);
                goto LAB_0088623c;
              }
              break;
            }
            if (uVar36 != 0xffffffff) break;
          }
          puVar8 = (uint *)(ulong)uVar38;
          uVar23 = 0;
          if ((puVar8 == (uint *)0x0) || (uVar23 = 0, puVar41 == puVar8)) goto LAB_0088623c;
          lVar17 = 0xc;
          if (*(char *)((long)puVar41 + (10 - (long)puVar8)) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)puVar41 + (lVar17 - (long)puVar8);
          if (lVar17 == 0) break;
          uVar16 = (ulong)*(ushort *)((long)puVar41 + (8 - (long)puVar8));
          *(undefined4 *)(__s + 0x28) = 0xfffffffe;
          if (uVar16 == 0) break;
          piVar29 = (int *)(lVar17 + 4);
          while (piVar29[-1] != 0x54706054) {
            piVar29 = piVar29 + 2;
            uVar16 = uVar16 - 1;
            if (uVar16 == 0) goto LAB_00886238;
          }
          iVar13 = 0;
          if (*piVar29 != -1) {
            iVar13 = *piVar29;
          }
          *(int *)(__s + 0x28) = iVar13;
          uVar38 = *puVar41;
          if (uVar38 == 0) break;
        } while( true );
      }
LAB_00886238:
      uVar23 = 0;
LAB_0088623c:
      local_c8 = puVar40 + 0x10;
      local_c0 = "TodayGlobalEventId";
      FUN_0273f3c4(&local_c8,uVar23);
    }
  }
  local_118 = (uint *)0x40aaefc;
  local_120 = puVar40 + 0x10;
  uVar16 = FUN_0273f3c4(&local_120,0xffff);
  if ((*param_2 != 0) || ((char)param_2[5] != '\0')) {
    iVar13 = 0;
    do {
      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,iVar13);
      if (*(long *)puVar18 != 0) {
        lVar17 = FUN_026eec4c(*(long *)puVar18,iVar13);
        uVar16 = (ulong)local_138;
        if ((lVar17 != 0) && (*(long *)puVar18 != 0)) {
          uVar9 = (ushort)local_138;
          bVar10 = local_138._2_1_;
          bVar11 = local_138._3_1_;
          lVar17 = FUN_026eec4c(*(long *)puVar18,iVar13);
          if (lVar17 != 0) {
            if (*(long **)(lVar17 + 0x18390) == (long *)0x0) {
              uVar21 = 0;
            }
            else {
              puVar26 = (undefined8 *)**(long **)(lVar17 + 0x18390);
              uVar21 = 0;
              if (puVar26 != (undefined8 *)0x0) {
                uVar21 = (**(code **)*puVar26)();
              }
            }
            pbVar2 = (byte *)(*(long *)(lVar17 + 0x18378) + *(long *)(lVar17 + 0x18370));
            bVar6 = *pbVar2;
            if ((bVar6 - 1 < 0xc) &&
               (bVar7 = pbVar2[1], (byte)(bVar7 - 1) < (byte)(&DAT_0417b531)[bVar6 - 1])) {
              if ((bVar6 == 2 && bVar7 == 0x1d) &&
                 (((uVar16 & 3) != 0 ||
                  ((((uint)uVar9 * -0x3d70a3d7 >> 2 | (uint)uVar9 * 0x40000000) < 0x28f5c29 &&
                   ((uVar16 & 0xf) != 0)))))) {
                bVar12 = bVar10 == 2 && bVar11 == 0x1c;
              }
              else {
                bVar12 = bVar6 == bVar10 && bVar7 == bVar11;
              }
            }
            else {
              bVar12 = false;
            }
            if ((((uVar21 & 1) != 0) && (*(long *)(lVar17 + 0x18390) != 0)) &&
               (puVar26 = *(undefined8 **)(*(long *)(lVar17 + 0x18390) + 8),
               puVar26 != (undefined8 *)0x0)) {
              (**(code **)*puVar26)();
            }
            if (bVar12) {
              local_118 = (uint *)0x40960ea;
              local_120 = puVar40 + 0x10;
              FUN_01b5dea0(&local_120,&local_c8);
            }
          }
        }
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 != 8);
    uVar16 = FUN_021eacf0(0,&local_138,1);
    plVar27 = (long *)PTR_DAT_04bb49a0;
    puVar18 = PTR_DAT_04bb3768;
    if ((uVar16 & 1) != 0) {
      uStack_108 = uStack_108 & 0xffffff;
      local_110 = 8;
      local_120 = PTR_DAT_04bb3768 + 0x10;
      uStack_10c = uStack_10c & 0xffffff00;
      local_118 = &uStack_10c;
      FUN_021d7c00(&local_120,0);
      local_c8 = puVar40 + 0x10;
      local_c0 = "LE_TodayIs_NnpcBirthday";
      uVar16 = FUN_01b61690(&local_70,&local_78,&local_120);
      if ((uVar16 & 1) != 0) {
        lVar17 = *plVar27;
        uVar16 = local_78 & 0xff;
        uVar21 = local_70 & 0xffff;
        (**(code **)(local_c8 + 0x18))(&local_c8);
        uVar15 = FUN_006bd550(local_c0,0);
        local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar15);
        uVar22 = FUN_01b5b650(lVar17 + 0x238,&local_90);
        FUN_01b60bc0(&local_c8,uVar21,uVar16,uVar22,0,0);
      }
    }
    uVar16 = FUN_021eacf0(1,&local_138,1);
    if ((uVar16 & 1) != 0) {
      uStack_108 = uStack_108 & 0xffffff;
      local_110 = 8;
      local_120 = puVar18 + 0x10;
      uStack_10c = uStack_10c & 0xffffff00;
      local_118 = &uStack_10c;
      FUN_021d7c00(&local_120,1);
      local_c8 = puVar40 + 0x10;
      local_c0 = "LE_TodayIs_NnpcBirthday";
      uVar16 = FUN_01b61690(&local_70,&local_78,&local_120);
      if ((uVar16 & 1) != 0) {
        lVar17 = *plVar27;
        uVar16 = local_78 & 0xff;
        uVar21 = local_70 & 0xffff;
        (**(code **)(local_c8 + 0x18))(&local_c8);
        uVar15 = FUN_006bd550(local_c0,0);
        local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar15);
        uVar22 = FUN_01b5b650(lVar17 + 0x238,&local_90);
        FUN_01b60bc0(&local_c8,uVar21,uVar16,uVar22,0,0);
      }
    }
    uVar16 = FUN_021eacf0(2,&local_138,1);
    if ((uVar16 & 1) != 0) {
      uStack_108 = uStack_108 & 0xffffff;
      local_110 = 8;
      local_120 = puVar18 + 0x10;
      uStack_10c = uStack_10c & 0xffffff00;
      local_118 = &uStack_10c;
      FUN_021d7c00(&local_120,2);
      local_c8 = puVar40 + 0x10;
      local_c0 = "LE_TodayIs_NnpcBirthday";
      uVar16 = FUN_01b61690(&local_70,&local_78,&local_120);
      if ((uVar16 & 1) != 0) {
        lVar17 = *plVar27;
        uVar16 = local_78 & 0xff;
        uVar21 = local_70 & 0xffff;
        (**(code **)(local_c8 + 0x18))(&local_c8);
        uVar15 = FUN_006bd550(local_c0,0);
        local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar15);
        uVar22 = FUN_01b5b650(lVar17 + 0x238,&local_90);
        FUN_01b60bc0(&local_c8,uVar21,uVar16,uVar22,0,0);
      }
    }
    uVar16 = FUN_021eacf0(3,&local_138,1);
    if ((uVar16 & 1) != 0) {
      uStack_108 = uStack_108 & 0xffffff;
      local_110 = 8;
      local_120 = puVar18 + 0x10;
      uStack_10c = uStack_10c & 0xffffff00;
      local_118 = &uStack_10c;
      FUN_021d7c00(&local_120,3);
      local_c8 = puVar40 + 0x10;
      local_c0 = "LE_TodayIs_NnpcBirthday";
      uVar16 = FUN_01b61690(&local_70,&local_78,&local_120);
      if ((uVar16 & 1) != 0) {
        lVar17 = *plVar27;
        uVar16 = local_78 & 0xff;
        uVar21 = local_70 & 0xffff;
        (**(code **)(local_c8 + 0x18))(&local_c8);
        uVar15 = FUN_006bd550(local_c0,0);
        local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar15);
        uVar22 = FUN_01b5b650(lVar17 + 0x238,&local_90);
        FUN_01b60bc0(&local_c8,uVar21,uVar16,uVar22,0,0);
      }
    }
    uVar16 = FUN_021eacf0(4,&local_138,1);
    if ((uVar16 & 1) != 0) {
      uStack_108 = uStack_108 & 0xffffff;
      local_110 = 8;
      local_120 = puVar18 + 0x10;
      uStack_10c = uStack_10c & 0xffffff00;
      local_118 = &uStack_10c;
      FUN_021d7c00(&local_120,4);
      local_c8 = puVar40 + 0x10;
      local_c0 = "LE_TodayIs_NnpcBirthday";
      uVar16 = FUN_01b61690(&local_70,&local_78,&local_120);
      if ((uVar16 & 1) != 0) {
        lVar17 = *plVar27;
        uVar16 = local_78 & 0xff;
        uVar21 = local_70 & 0xffff;
        (**(code **)(local_c8 + 0x18))(&local_c8);
        uVar15 = FUN_006bd550(local_c0,0);
        local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar15);
        uVar22 = FUN_01b5b650(lVar17 + 0x238,&local_90);
        FUN_01b60bc0(&local_c8,uVar21,uVar16,uVar22,0,0);
      }
    }
    uVar16 = FUN_021eacf0(5,&local_138,1);
    if ((uVar16 & 1) != 0) {
      uStack_108 = uStack_108 & 0xffffff;
      local_110 = 8;
      local_120 = puVar18 + 0x10;
      uStack_10c = uStack_10c & 0xffffff00;
      local_118 = &uStack_10c;
      FUN_021d7c00(&local_120,5);
      local_c8 = puVar40 + 0x10;
      local_c0 = "LE_TodayIs_NnpcBirthday";
      uVar16 = FUN_01b61690(&local_70,&local_78,&local_120);
      if ((uVar16 & 1) != 0) {
        lVar17 = *plVar27;
        uVar16 = local_78 & 0xff;
        uVar21 = local_70 & 0xffff;
        (**(code **)(local_c8 + 0x18))(&local_c8);
        uVar15 = FUN_006bd550(local_c0,0);
        local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar15);
        uVar22 = FUN_01b5b650(lVar17 + 0x238,&local_90);
        plVar27 = (long *)PTR_DAT_04bb49a0;
        FUN_01b60bc0(&local_c8,uVar21,uVar16,uVar22,0,0);
      }
    }
    uVar16 = FUN_021eacf0(6,&local_138,1);
    if ((uVar16 & 1) != 0) {
      uStack_108 = uStack_108 & 0xffffff;
      local_110 = 8;
      local_120 = puVar18 + 0x10;
      uStack_10c = uStack_10c & 0xffffff00;
      local_118 = &uStack_10c;
      FUN_021d7c00(&local_120,6);
      local_c8 = puVar40 + 0x10;
      local_c0 = "LE_TodayIs_NnpcBirthday";
      uVar16 = FUN_01b61690(&local_70,&local_78,&local_120);
      if ((uVar16 & 1) != 0) {
        lVar17 = *plVar27;
        uVar16 = local_78 & 0xff;
        uVar21 = local_70 & 0xffff;
        (**(code **)(local_c8 + 0x18))(&local_c8);
        uVar15 = FUN_006bd550(local_c0,0);
        local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar15);
        uVar22 = FUN_01b5b650(lVar17 + 0x238,&local_90);
        plVar27 = (long *)PTR_DAT_04bb49a0;
        FUN_01b60bc0(&local_c8,uVar21,uVar16,uVar22,0,0);
      }
    }
    uVar16 = FUN_021eacf0(7,&local_138,1);
    if ((uVar16 & 1) != 0) {
      uStack_108 = uStack_108 & 0xffffff;
      local_110 = 8;
      local_120 = puVar18 + 0x10;
      uStack_10c = uStack_10c & 0xffffff00;
      local_118 = &uStack_10c;
      FUN_021d7c00(&local_120,7);
      local_c8 = puVar40 + 0x10;
      local_c0 = "LE_TodayIs_NnpcBirthday";
      uVar16 = FUN_01b61690(&local_70,&local_78,&local_120);
      if ((uVar16 & 1) != 0) {
        lVar17 = *plVar27;
        uVar16 = local_78 & 0xff;
        uVar21 = local_70 & 0xffff;
        (**(code **)(local_c8 + 0x18))(&local_c8);
        uVar15 = FUN_006bd550(local_c0,0);
        local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar15);
        uVar22 = FUN_01b5b650(lVar17 + 0x238,&local_90);
        plVar27 = (long *)PTR_DAT_04bb49a0;
        FUN_01b60bc0(&local_c8,uVar21,uVar16,uVar22,0,0);
      }
    }
    uVar16 = FUN_021eacf0(8,&local_138,1);
    if ((uVar16 & 1) != 0) {
      local_120 = puVar18 + 0x10;
      local_110 = 8;
      uStack_108 = uStack_108 & 0xffffff;
      uStack_10c = uStack_10c & 0xffffff00;
      local_118 = &uStack_10c;
      FUN_021d7c00(&local_120,8);
      local_c8 = puVar40 + 0x10;
      local_c0 = "LE_TodayIs_NnpcBirthday";
      uVar16 = FUN_01b61690(&local_70,&local_78,&local_120);
      if ((uVar16 & 1) != 0) {
        lVar17 = *plVar27;
        uVar16 = local_78 & 0xff;
        uVar21 = local_70 & 0xffff;
        (**(code **)(local_c8 + 0x18))(&local_c8);
        uVar15 = FUN_006bd550(local_c0,0);
        local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar15);
        uVar22 = FUN_01b5b650(lVar17 + 0x238,&local_90);
        plVar27 = (long *)PTR_DAT_04bb49a0;
        FUN_01b60bc0(&local_c8,uVar21,uVar16,uVar22,0,0);
      }
    }
    uVar16 = FUN_021eacf0(9,&local_138,1);
    if ((uVar16 & 1) != 0) {
      uStack_108 = uStack_108 & 0xffffff;
      local_110 = 8;
      local_120 = puVar18 + 0x10;
      uStack_10c = uStack_10c & 0xffffff00;
      local_118 = &uStack_10c;
      FUN_021d7c00(&local_120,9);
      local_c8 = puVar40 + 0x10;
      local_c0 = "LE_TodayIs_NnpcBirthday";
      uVar16 = FUN_01b61690(&local_70,&local_78,&local_120);
      if ((uVar16 & 1) != 0) {
        lVar17 = *plVar27;
        uVar16 = local_78 & 0xff;
        uVar21 = local_70 & 0xffff;
        (**(code **)(local_c8 + 0x18))(&local_c8);
        uVar15 = FUN_006bd550(local_c0,0);
        local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar15);
        uVar22 = FUN_01b5b650(lVar17 + 0x238,&local_90);
        plVar27 = (long *)PTR_DAT_04bb49a0;
        FUN_01b60bc0(&local_c8,uVar21,uVar16,uVar22,0,0);
      }
    }
    local_120 = puVar40 + 0x10;
    local_118 = (uint *)0x40716ad;
    local_90 = local_138;
    if ((char)((ulong)local_138 >> 0x20) < '\x05') {
      lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
      local_c8 = (undefined *)(lVar17 + -0x15180);
      local_90 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c8);
    }
    uVar16 = (ulong)local_90;
    local_90._0_6_ = CONCAT24(5,(undefined4)local_90);
    local_90._7_1_ = SUB81(uVar16,7);
    local_90._0_7_ = (uint7)(uint6)local_90;
    uVar16 = FUN_00879dd0(param_1,&local_120,uVar16,uVar16 >> 0x10,uVar16 >> 0x18,0);
    if ((uVar16 & 1) != 0) {
      local_120 = puVar40 + 0x10;
      local_118 = (uint *)0x4096104;
      lVar17 = *plVar27;
      uVar15 = FUN_006bd550("LE_TodayIs_CatchInsectFes",0);
      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar15);
      uVar22 = FUN_01b5b650(lVar17 + 0x238,&local_c8);
      FUN_01b5cf20(&local_120,uVar22,0,0,0);
    }
    local_120 = puVar40 + 0x10;
    local_118 = (uint *)0x40ceb9e;
    local_90 = local_138;
    if ((char)((ulong)local_138 >> 0x20) < '\x05') {
      lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
      local_c8 = (undefined *)(lVar17 + -0x15180);
      local_90 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c8);
    }
    uVar16 = (ulong)local_90;
    local_90._0_6_ = CONCAT24(5,(undefined4)local_90);
    local_90._7_1_ = SUB81(uVar16,7);
    local_90._0_7_ = (uint7)(uint6)local_90;
    uVar16 = FUN_00879dd0(param_1,&local_120,uVar16,uVar16 >> 0x10,uVar16 >> 0x18,0);
    if ((uVar16 & 1) != 0) {
      local_120 = puVar40 + 0x10;
      local_118 = (uint *)0x40d43d9;
      lVar17 = *plVar27;
      uVar15 = FUN_006bd550("LE_TodayIs_CatchFishFes",0);
      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar15);
      uVar22 = FUN_01b5b650(lVar17 + 0x238,&local_c8);
      FUN_01b5cf20(&local_120,uVar22,0,0,0);
    }
    local_120 = puVar40 + 0x10;
    local_118 = (uint *)0x40d4383;
    local_90 = local_138;
    if ((char)((ulong)local_138 >> 0x20) < '\x05') {
      lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
      local_c8 = (undefined *)(lVar17 + -0x15180);
      local_90 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c8);
    }
    uVar16 = (ulong)local_90;
    local_90._0_6_ = CONCAT24(5,(undefined4)local_90);
    local_90._7_1_ = SUB81(uVar16,7);
    local_90._0_7_ = (uint7)(uint6)local_90;
    uVar16 = FUN_00879dd0(param_1,&local_120,uVar16,uVar16 >> 0x10,uVar16 >> 0x18,0);
    if ((uVar16 & 1) != 0) {
      local_120 = puVar40 + 0x10;
      local_118 = (uint *)0x40d43f1;
      lVar17 = *plVar27;
      uVar15 = FUN_006bd550("LE_TodayIs_Halloween",0);
      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar15);
      uVar22 = FUN_01b5b650(lVar17 + 0x238,&local_c8);
      FUN_01b5cf20(&local_120,uVar22,0,0,0);
    }
    local_120 = puVar40 + 0x10;
    local_118 = (uint *)0x40f9046;
    local_90 = local_138;
    if ((char)((ulong)local_138 >> 0x20) < '\x05') {
      lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
      local_c8 = (undefined *)(lVar17 + -0x15180);
      local_90 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c8);
    }
    uVar16 = (ulong)local_90;
    local_90._0_6_ = CONCAT24(5,(undefined4)local_90);
    local_90._7_1_ = SUB81(uVar16,7);
    local_90._0_7_ = (uint7)(uint6)local_90;
    uVar16 = FUN_00879dd0(param_1,&local_120,uVar16,uVar16 >> 0x10,uVar16 >> 0x18,0);
    if ((uVar16 & 1) != 0) {
      local_120 = puVar40 + 0x10;
      local_118 = (uint *)0x4080e4e;
      lVar17 = *plVar27;
      uVar15 = FUN_006bd550("LE_TodayIs_ChristmasEve",0);
      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar15);
      uVar22 = FUN_01b5b650(lVar17 + 0x238,&local_c8);
      FUN_01b5cf20(&local_120,uVar22,0,0,0);
    }
    local_120 = puVar40 + 0x10;
    local_118 = (uint *)0x405bdc2;
    local_90 = local_138;
    if ((char)((ulong)local_138 >> 0x20) < '\x05') {
      lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
      local_c8 = (undefined *)(lVar17 + -0x15180);
      local_90 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c8);
    }
    uVar16 = (ulong)local_90;
    local_90._0_6_ = CONCAT24(5,(undefined4)local_90);
    local_90._7_1_ = SUB81(uVar16,7);
    local_90._0_7_ = (uint7)(uint6)local_90;
    uVar16 = FUN_00879dd0(param_1,&local_120,uVar16,uVar16 >> 0x10,uVar16 >> 0x18,0);
    if ((uVar16 & 1) != 0) {
      local_120 = puVar40 + 0x10;
      local_118 = (uint *)0x40a59b7;
      lVar17 = *plVar27;
      uVar15 = FUN_006bd550("LE_TodayIs_NewYearEve",0);
      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar15);
      uVar22 = FUN_01b5b650(lVar17 + 0x238,&local_c8);
      FUN_01b5cf20(&local_120,uVar22,0,0,0);
    }
    local_120 = puVar40 + 0x10;
    local_118 = (uint *)0x40d9875;
    local_90 = local_138;
    if ((char)((ulong)local_138 >> 0x20) < '\x05') {
      lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
      local_c8 = (undefined *)(lVar17 + -0x15180);
      local_90 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c8);
    }
    uVar16 = (ulong)local_90;
    local_90._0_6_ = CONCAT24(5,(undefined4)local_90);
    local_90._7_1_ = SUB81(uVar16,7);
    local_90._0_7_ = (uint7)(uint6)local_90;
    uVar16 = FUN_00879dd0(param_1,&local_120,uVar16,uVar16 >> 0x10,uVar16 >> 0x18,0);
    if ((uVar16 & 1) != 0) {
      local_120 = puVar40 + 0x10;
      local_118 = (uint *)0x40c9911;
      lVar17 = *plVar27;
      uVar15 = FUN_006bd550("LE_TodayIs_Easter",0);
      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar15);
      uVar22 = FUN_01b5b650(lVar17 + 0x238,&local_c8);
      FUN_01b5cf20(&local_120,uVar22,0,0,0);
    }
    local_120 = puVar40 + 0x10;
    local_118 = (uint *)0x4061849;
    local_90 = local_138;
    if ((char)((ulong)local_138 >> 0x20) < '\x05') {
      lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
      local_c8 = (undefined *)(lVar17 + -0x15180);
      local_90 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c8);
    }
    uVar16 = (ulong)local_90;
    local_90._0_6_ = CONCAT24(5,(undefined4)local_90);
    local_90._7_1_ = SUB81(uVar16,7);
    local_90._0_7_ = (uint7)(uint6)local_90;
    uVar16 = FUN_00879dd0(param_1,&local_120,uVar16,uVar16 >> 0x10,uVar16 >> 0x18,0);
    if ((uVar16 & 1) != 0) {
      local_120 = puVar40 + 0x10;
      local_118 = (uint *)0x407bc9e;
      lVar17 = *plVar27;
      uVar15 = FUN_006bd550("LE_TodayIs_FireworksFes",0);
      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar15);
      uVar22 = FUN_01b5b650(lVar17 + 0x238,&local_c8);
      FUN_01b5cf20(&local_120,uVar22,0,0,0);
    }
    local_120 = puVar40 + 0x10;
    local_118 = (uint *)0x40e90fb;
    local_90 = local_138;
    if ((char)((ulong)local_138 >> 0x20) < '\x05') {
      lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
      local_c8 = (undefined *)(lVar17 + -0x15180);
      local_90 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c8);
    }
    uVar16 = (ulong)local_90;
    local_90._0_6_ = CONCAT24(5,(undefined4)local_90);
    local_90._7_1_ = SUB81(uVar16,7);
    local_90._0_7_ = (uint7)(uint6)local_90;
    uVar16 = FUN_00879dd0(param_1,&local_120,uVar16,uVar16 >> 0x10,uVar16 >> 0x18,0);
    if ((uVar16 & 1) != 0) {
      local_120 = puVar40 + 0x10;
      local_118 = (uint *)0x40e3de6;
      lVar17 = *plVar27;
      uVar15 = FUN_006bd550("LE_TodayIs_Carnival",0);
      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar15);
      uVar22 = FUN_01b5b650(lVar17 + 0x238,&local_c8);
      FUN_01b5cf20(&local_120,uVar22,0,0,0);
    }
    local_120 = puVar40 + 0x10;
    local_90 = local_138;
    local_118 = (uint *)0x408bf35;
    if ((char)((ulong)local_138 >> 0x20) < '\x05') {
      lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
      local_c8 = (undefined *)(lVar17 + -0x15180);
      local_90 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c8);
    }
    uVar16 = (ulong)local_90;
    local_90._0_6_ = CONCAT24(5,(undefined4)local_90);
    local_90._7_1_ = SUB81(uVar16,7);
    local_90._0_7_ = (uint7)(uint6)local_90;
    uVar16 = FUN_00879dd0(param_1,&local_120,uVar16,uVar16 >> 0x10,uVar16 >> 0x18,0);
    if ((uVar16 & 1) != 0) {
      local_120 = puVar40 + 0x10;
      local_118 = (uint *)0x40d4406;
      lVar17 = *plVar27;
      uVar15 = FUN_006bd550("LE_TodayIs_ThanksGivingDay",0);
      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar15);
      uVar22 = FUN_01b5b650(lVar17 + 0x238,&local_c8);
      uVar16 = FUN_01b5cf20(&local_120,uVar22,0,0,0);
    }
  }
  local_c8 = local_138;
  if ((char)((ulong)local_138 >> 0x20) < '\x05') {
    lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_c8);
    local_120 = (undefined *)(lVar17 + -0x15180);
    uVar16 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_120);
    local_c8 = (undefined *)uVar16;
  }
  uVar25 = (ulong)local_c8;
  uVar24 = (ulong)local_c8 >> 0x10;
  uVar21 = (ulong)local_c8 >> 0x30;
  local_c8._0_6_ = CONCAT24(5,(undefined4)local_c8);
  local_c8 = (undefined *)(CONCAT26((short)uVar21,(uint6)local_c8) & 0xff00ffffffffffff);
  uVar16 = FUN_008727d0(uVar16,uVar25,uVar24,uVar25 >> 0x18);
  puVar18 = PTR_DAT_04bb32e8;
  if ((uVar16 & 1) != 0) {
    uVar15 = FUN_006bd550("PlayerBirthday",0);
    local_120 = (undefined *)CONCAT44(local_120._4_4_,uVar15);
    uVar16 = FUN_0088c0d0(param_1 + 8,&local_120);
  }
  local_c8 = local_138;
  if ((char)((ulong)local_138 >> 0x20) < '\x05') {
    lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_c8);
    local_120 = (undefined *)(lVar17 + -0x15180);
    uVar16 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_120);
    local_c8 = (undefined *)uVar16;
  }
  uVar21 = (ulong)local_c8;
  uVar25 = (ulong)local_c8 >> 0x10;
  local_c8._0_6_ = CONCAT24(5,(undefined4)local_c8);
  local_c8._7_1_ = SUB81(uVar21,7);
  local_c8._0_7_ = (uint7)(uint6)local_c8;
  uVar16 = FUN_0087312c(uVar16,uVar21,uVar25,uVar21 >> 0x18);
  if ((uVar16 & 1) != 0) {
    uVar15 = FUN_006bd550("NpcBirthday",0);
    local_120 = (undefined *)CONCAT44(local_120._4_4_,uVar15);
    FUN_0088c0d0(param_1 + 8,&local_120);
  }
  puVar1 = puVar40 + 0x10;
  local_118 = (uint *)0x4061837;
  local_120 = puVar1;
  FUN_02743234(&local_120,uVar14);
  local_118 = (uint *)0x4061837;
  local_120 = puVar1;
  uVar14 = FUN_02743000(&local_120);
  local_118 = (uint *)0x4061837;
  local_120 = puVar1;
  FUN_02743234(&local_120,0);
  uVar22 = DAT_04cea100;
  local_90 = *(undefined **)(*(long *)puVar18 + 0x4060);
  local_118 = (uint *)0x40d4383;
  local_120 = puVar1;
  local_70 = (ulong)local_90;
  if ((char)((ulong)local_90 >> 0x20) < '\x05') {
    lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
    local_c8 = (undefined *)(lVar17 - 0x15180);
    local_90 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c8);
  }
  uVar16 = (ulong)local_90;
  local_90._0_6_ = CONCAT24(5,(undefined4)local_90);
  local_90._7_1_ = SUB81(uVar16,7);
  local_90._0_7_ = (uint7)(uint6)local_90;
  uVar16 = FUN_00879dd0(uVar22,&local_120,uVar16,uVar16 >> 0x10,uVar16 >> 0x18,0);
  if ((uVar16 & 1) == 0) {
    lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
    local_120 = (undefined *)(lVar17 + 0x15180);
    local_90 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_120);
    uVar22 = DAT_04cea100;
    local_120 = puVar40 + 0x10;
    local_118 = (uint *)0x40d4383;
    local_70 = (ulong)local_90;
    if ((char)((ulong)local_90 >> 0x20) < '\x05') {
      lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
      local_c8 = (undefined *)(lVar17 - 0x15180);
      local_90 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c8);
    }
    uVar16 = (ulong)local_90;
    local_90._0_6_ = CONCAT24(5,(undefined4)local_90);
    local_90._7_1_ = SUB81(uVar16,7);
    local_90._0_7_ = (uint7)(uint6)local_90;
    uVar16 = FUN_00879dd0(uVar22,&local_120,uVar16,uVar16 >> 0x10,uVar16 >> 0x18,0);
    if ((uVar16 & 1) == 0) {
      lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
      local_120 = (undefined *)(lVar17 + 0x15180);
      local_90 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_120);
      uVar22 = DAT_04cea100;
      local_120 = puVar40 + 0x10;
      local_118 = (uint *)0x40d4383;
      local_70 = (ulong)local_90;
      if ((char)((ulong)local_90 >> 0x20) < '\x05') {
        lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
        local_c8 = (undefined *)(lVar17 - 0x15180);
        local_90 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c8);
      }
      uVar16 = (ulong)local_90;
      local_90._0_6_ = CONCAT24(5,(undefined4)local_90);
      local_90._7_1_ = SUB81(uVar16,7);
      local_90._0_7_ = (uint7)(uint6)local_90;
      uVar16 = FUN_00879dd0(uVar22,&local_120,uVar16,uVar16 >> 0x10,uVar16 >> 0x18,0);
      if ((uVar16 & 1) == 0) {
        lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
        local_120 = (undefined *)(lVar17 + 0x15180);
        local_90 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_120);
        uVar22 = DAT_04cea100;
        local_120 = puVar40 + 0x10;
        local_118 = (uint *)0x40d4383;
        local_70 = (ulong)local_90;
        if ((char)((ulong)local_90 >> 0x20) < '\x05') {
          lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
          local_c8 = (undefined *)(lVar17 - 0x15180);
          local_90 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c8);
        }
        uVar16 = (ulong)local_90;
        local_90._0_6_ = CONCAT24(5,(undefined4)local_90);
        local_90._7_1_ = SUB81(uVar16,7);
        local_90._0_7_ = (uint7)(uint6)local_90;
        uVar16 = FUN_00879dd0(uVar22,&local_120,uVar16,uVar16 >> 0x10,uVar16 >> 0x18,0);
        if ((uVar16 & 1) == 0) {
          lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
          local_120 = (undefined *)(lVar17 + 0x15180);
          local_90 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_120);
          uVar22 = DAT_04cea100;
          local_120 = puVar40 + 0x10;
          local_118 = (uint *)0x40d4383;
          local_70 = (ulong)local_90;
          if ((char)((ulong)local_90 >> 0x20) < '\x05') {
            lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
            local_c8 = (undefined *)(lVar17 - 0x15180);
            local_90 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c8);
          }
          uVar16 = (ulong)local_90;
          local_90._0_6_ = CONCAT24(5,(undefined4)local_90);
          local_90._7_1_ = SUB81(uVar16,7);
          local_90._0_7_ = (uint7)(uint6)local_90;
          uVar16 = FUN_00879dd0(uVar22,&local_120,uVar16,uVar16 >> 0x10,uVar16 >> 0x18,0);
          if ((uVar16 & 1) == 0) {
            lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
            local_120 = (undefined *)(lVar17 + 0x15180);
            local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_120);
          }
          uVar22 = 0;
          goto LAB_00887480;
        }
      }
    }
  }
  uVar22 = 1;
LAB_00887480:
  local_120 = puVar40 + 0x10;
  local_118 = (uint *)0x40f904e;
  FUN_0273f3c4(&local_120,uVar22);
  local_120 = puVar40 + 0x10;
  local_118 = (uint *)0x4061837;
  FUN_02743234(&local_120,uVar14);
  return;
LAB_00887784:
  do {
    uVar16 = (ulong)uVar3;
    if (cVar37 != '\0') {
      uVar3 = *(uint *)(puVar18 + 0x30);
      if ((int)uVar3 < 0) {
        if ((uVar3 == 0xffffffff) && (uVar16 != 0)) goto LAB_008877cc;
      }
      else if ((char *)((ulong)uVar3 + (long)puVar41) != (char *)0x0) {
        if (*(char *)((ulong)uVar3 + (long)puVar41) != '\0') {
          uVar16 = FUN_00885050(uVar36);
          if ((uVar16 & 1) != 0) {
            uVar33 = uVar33 | 1 << (ulong)(uVar36 & 0x1f);
          }
          pcVar34 = PTR_DAT_04bb57f0;
          uVar31 = uVar30;
        }
      }
LAB_008878a4:
      uVar3 = *puVar41;
      if (uVar3 != 0) {
        cVar37 = *pcVar34;
        goto LAB_008878b0;
      }
      break;
    }
    *(undefined8 *)puVar18 = 0xffffffffffffffff;
    *(undefined8 *)(puVar18 + 8) = 0xffffffffffffffff;
    cVar37 = '\x01';
    *(undefined4 *)(puVar18 + 0x40) = 0xffffffff;
    *pcVar34 = '\x01';
    *(undefined8 *)(puVar18 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar18 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar18 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar18 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar18 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar18 + 0x38) = 0xffffffffffffffff;
    uVar16 = (ulong)*puVar41;
    if (uVar16 == 0) goto LAB_008878a4;
LAB_008877cc:
    lVar17 = (long)puVar41 - uVar16;
    if (lVar17 == 0) goto LAB_008878a4;
    lVar19 = 0xc;
    if (*(char *)(lVar17 + 10) != '\0') {
      lVar19 = 0x1c;
    }
    if (lVar19 + lVar17 == 0) goto LAB_008878a4;
    uVar16 = (ulong)*(ushort *)(lVar17 + 8);
    *(undefined4 *)(puVar18 + 0x30) = 0xfffffffe;
    if (uVar16 == 0) goto LAB_008878a4;
    piVar29 = (int *)(lVar19 + lVar17 + 4);
    while (piVar29[-1] != -0x446e9ad0) {
      piVar29 = piVar29 + 2;
      uVar16 = uVar16 - 1;
      if (uVar16 == 0) goto LAB_008878a4;
    }
    iVar13 = 0;
    if (*piVar29 != -1) {
      iVar13 = *piVar29;
    }
    *(int *)(puVar18 + 0x30) = iVar13;
    uVar3 = *puVar41;
  } while (uVar3 != 0);
  goto LAB_008875b0;
LAB_008878b0:
  do {
    uVar16 = (ulong)uVar3;
    if (cVar37 != '\0') {
      uVar3 = *(uint *)(puVar18 + 0x34);
      if ((int)uVar3 < 0) {
        if ((uVar3 == 0xffffffff) && (uVar16 != 0)) goto LAB_008878f8;
      }
      else if ((char *)((ulong)uVar3 + (long)puVar41) != (char *)0x0) {
        if (*(char *)((ulong)uVar3 + (long)puVar41) != '\0') {
          uVar16 = FUN_00885050(uVar36);
          if ((uVar16 & 1) != 0) {
            uVar32 = uVar32 | 1 << (ulong)(uVar36 & 0x1f);
          }
          pcVar34 = PTR_DAT_04bb57f0;
          uVar31 = uVar30;
        }
      }
LAB_008879d4:
      uVar3 = *puVar41;
      if (uVar3 != 0) {
        cVar37 = *pcVar34;
        goto LAB_008879e0;
      }
      break;
    }
    *(undefined8 *)puVar18 = 0xffffffffffffffff;
    *(undefined8 *)(puVar18 + 8) = 0xffffffffffffffff;
    cVar37 = '\x01';
    *(undefined4 *)(puVar18 + 0x40) = 0xffffffff;
    *pcVar34 = '\x01';
    *(undefined8 *)(puVar18 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar18 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar18 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar18 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar18 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar18 + 0x38) = 0xffffffffffffffff;
    uVar16 = (ulong)*puVar41;
    if (uVar16 == 0) goto LAB_008879d4;
LAB_008878f8:
    lVar17 = (long)puVar41 - uVar16;
    if (lVar17 == 0) goto LAB_008879d4;
    lVar19 = 0xc;
    if (*(char *)(lVar17 + 10) != '\0') {
      lVar19 = 0x1c;
    }
    if (lVar19 + lVar17 == 0) goto LAB_008879d4;
    uVar16 = (ulong)*(ushort *)(lVar17 + 8);
    *(undefined4 *)(puVar18 + 0x34) = 0xfffffffe;
    if (uVar16 == 0) goto LAB_008879d4;
    piVar29 = (int *)(lVar19 + lVar17 + 4);
    while (piVar29[-1] != -0x56db3522) {
      piVar29 = piVar29 + 2;
      uVar16 = uVar16 - 1;
      if (uVar16 == 0) goto LAB_008879d4;
    }
    iVar13 = 0;
    if (*piVar29 != -1) {
      iVar13 = *piVar29;
    }
    *(int *)(puVar18 + 0x34) = iVar13;
    uVar3 = *puVar41;
  } while (uVar3 != 0);
LAB_008875b0:
  uVar36 = uVar36 + 1;
  if (uVar36 == uVar38) goto LAB_00885604;
  goto LAB_008875bc;
LAB_008879e0:
  if (cVar37 == '\0') {
    *(undefined8 *)puVar18 = 0xffffffffffffffff;
    *(undefined8 *)(puVar18 + 8) = 0xffffffffffffffff;
    cVar37 = '\x01';
    *(undefined4 *)(puVar18 + 0x40) = 0xffffffff;
    *pcVar34 = '\x01';
    *(undefined8 *)(puVar18 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar18 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar18 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar18 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar18 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar18 + 0x38) = 0xffffffffffffffff;
    uVar3 = *puVar41;
  }
  else {
    uVar5 = *(uint *)(puVar18 + 0x3c);
    if (-1 < (int)uVar5) {
      if ((char *)((ulong)uVar5 + (long)puVar41) != (char *)0x0) {
        if (*(char *)((ulong)uVar5 + (long)puVar41) != '\0') {
          uVar16 = FUN_00885050(uVar36);
          if ((uVar16 & 1) != 0) {
            uVar39 = uVar39 | 1 << (ulong)(uVar36 & 0x1f);
          }
          pcVar34 = PTR_DAT_04bb57f0;
          uVar30 = uVar31;
        }
      }
      goto LAB_008875b0;
    }
    if (uVar5 != 0xffffffff) goto LAB_008875b0;
  }
  if ((ulong)uVar3 == 0) goto LAB_008875b0;
  lVar17 = (long)puVar41 - (ulong)uVar3;
  if (lVar17 == 0) goto LAB_008875b0;
  lVar19 = 0xc;
  if (*(char *)(lVar17 + 10) != '\0') {
    lVar19 = 0x1c;
  }
  if (lVar19 + lVar17 == 0) goto LAB_008875b0;
  uVar16 = (ulong)*(ushort *)(lVar17 + 8);
  *(undefined4 *)(puVar18 + 0x3c) = 0xfffffffe;
  if (uVar16 == 0) goto LAB_008875b0;
  piVar29 = (int *)(lVar19 + lVar17 + 4);
  while (piVar29[-1] != -0x4bde059a) {
    piVar29 = piVar29 + 2;
    uVar16 = uVar16 - 1;
    if (uVar16 == 0) goto LAB_008875b0;
  }
  iVar13 = 0;
  if (*piVar29 != -1) {
    iVar13 = *piVar29;
  }
  *(int *)(puVar18 + 0x3c) = iVar13;
  uVar3 = *puVar41;
  if (uVar3 == 0) goto LAB_008875b0;
  goto LAB_008879e0;
}

