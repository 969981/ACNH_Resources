
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006780a0(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,long *param_4,
                 undefined4 param_5,uint param_6,undefined1 (*param_7) [12],
                 undefined1 (*param_8) [12])

{
  uint uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [15];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  ulong uVar16;
  long lVar17;
  byte *pbVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined1 auVar23 [16];
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 uVar32;
  float fVar33;
  float fVar43;
  float fVar44;
  undefined1 auVar40 [16];
  undefined1 auVar39 [16];
  undefined1 auVar38 [16];
  undefined1 auVar37 [16];
  undefined1 auVar36 [16];
  undefined1 auVar35 [16];
  undefined1 auVar34 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  byte local_f0;
  undefined1 uStack_ef;
  undefined1 uStack_ee;
  undefined1 auStack_ec [12];
  uint local_e0 [4];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  byte bStack_b8;
  undefined7 uStack_b7;
  byte abStack_b0 [64];
  undefined1 auStack_70 [32];
  undefined8 local_48;
  
  uVar32 = param_2._8_8_;
  uVar1 = param_6 & 0xff;
  local_48 = 0;
  if ((param_6 & 0xf0) == 0) {
    iVar12 = 0;
    local_48 = 0;
  }
  else {
    iVar12 = FUN_00677f50(param_4,&local_48,(long)&local_48 + 4,param_5,auStack_70);
  }
  local_c0 = 0;
  bStack_b8 = 0;
  uStack_b7 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_e0[0] = 0;
  local_e0[1] = 0;
  local_e0[2] = 0;
  local_e0[3] = 0;
  puVar13 = (uint *)(*param_4 + 3U & 0xfffffffffffffffc);
  *param_4 = (long)puVar13;
  if ((param_6 & 1) == 0) {
    puVar14 = puVar13;
    if ((uVar1 >> 4 & 1) != 0) {
      *param_4 = (long)(puVar13 + 1);
      puVar14 = puVar13 + 2;
      local_d0 = (ulong)*puVar13;
      puVar15 = local_e0;
      *param_4 = (long)puVar14;
      puVar13 = puVar13 + 1;
      goto LAB_00678154;
    }
  }
  else {
    puVar14 = puVar13 + 1;
    *param_4 = (long)puVar14;
    puVar15 = (uint *)&local_c0;
LAB_00678154:
    *puVar15 = *puVar13;
  }
  if ((uVar1 >> 1 & 1) == 0) {
    if ((uVar1 >> 5 & 1) != 0) {
      *param_4 = (long)(puVar14 + 1);
      local_d0 = CONCAT44(*puVar14,(undefined4)local_d0);
      puVar13 = local_e0;
      lVar17 = 2;
      puVar15 = puVar14 + 1;
      goto LAB_0067818c;
    }
  }
  else {
    puVar13 = (uint *)&local_c0;
    lVar17 = 1;
    puVar15 = puVar14;
LAB_0067818c:
    puVar14 = puVar14 + lVar17;
    *param_4 = (long)puVar14;
    puVar13[1] = *puVar15;
  }
  if ((uVar1 >> 2 & 1) == 0) {
    if ((uVar1 >> 6 & 1) == 0) goto LAB_006781dc;
    *param_4 = (long)(puVar14 + 1);
    local_c8 = CONCAT44(local_c8._4_4_,*puVar14);
    puVar13 = local_e0;
    lVar17 = 2;
    puVar15 = puVar14 + 1;
  }
  else {
    puVar13 = (uint *)&local_c0;
    lVar17 = 1;
    puVar15 = puVar14;
  }
  puVar14 = puVar14 + lVar17;
  *param_4 = (long)puVar14;
  puVar13[2] = *puVar15;
LAB_006781dc:
  auVar3 = *(undefined1 (*) [16])(&DAT_04c32b20 + (ulong)(param_6 & 0xf) * 0x10);
  bVar24 = (byte)((uint7)uStack_b7 >> 8);
  bVar25 = (byte)((uint7)uStack_b7 >> 0x10);
  bVar26 = (byte)((uint7)uStack_b7 >> 0x18);
  bVar27 = (byte)((uint7)uStack_b7 >> 0x20);
  bVar28 = (byte)((uint7)uStack_b7 >> 0x28);
  bVar29 = (byte)((uint7)uStack_b7 >> 0x30);
  auVar31[8] = bStack_b8;
  auVar31._0_8_ = local_c0;
  auVar19 = *(undefined1 (*) [16])
             (&DAT_04c32b20 + (ulong)(~param_6 & (uVar1 >> 4 ^ 0xffffffff) & 0xf) * 0x10);
  if ((param_6 & 0xf0) == 0) {
    uVar22 = (undefined4)((ulong)*(undefined8 *)(*param_8 + 8) >> 0x20);
    auVar42._12_4_ = uVar22;
    auVar42._0_12_ = *param_8;
    auVar31[9] = (byte)uStack_b7;
    auVar31[10] = bVar24;
    auVar31[0xb] = bVar25;
    auVar31[0xc] = bVar26;
    auVar31[0xd] = bVar27;
    auVar31[0xe] = bVar28;
    auVar31[0xf] = bVar29;
    auVar30._12_4_ = uVar22;
    auVar30._0_12_ = *param_8;
    auVar30 = auVar30 ^ (auVar42 ^ auVar31) & auVar3;
    *(long *)(*param_8 + 8) = auVar30._8_8_;
    *(long *)*param_8 = auVar30._0_8_;
    auVar3._12_4_ = (int)((ulong)*(undefined8 *)(*param_7 + 8) >> 0x20);
    auVar3._0_12_ = *param_7;
    auVar30 = auVar30 ^ (auVar30 ^ auVar3) & auVar19;
    *(long *)(*param_8 + 8) = auVar30._8_8_;
    *(long *)*param_8 = auVar30._0_8_;
  }
  else {
    fVar21 = (float)((ulong)local_c8 >> 0x20);
    fVar20 = (float)(local_d0 >> 0x20);
    iVar2 = *(int *)(&DAT_040576e0 + (ulong)(uVar1 >> 4 & 7) * 4);
    *param_4 = (long)puVar14;
    iVar11 = local_48._4_4_;
    lVar17 = (long)local_48._4_4_;
    local_f0 = 0;
    uStack_ef = 0;
    uStack_ee = 0;
    if (-1 < local_48) {
      auVar23._8_8_ = _DAT_0413f4b8;
      auVar23._0_8_ = _DAT_0413f4b0;
      puVar14 = (uint *)((long)puVar14 + (long)(iVar12 - local_48._4_4_) * (long)iVar2);
      uVar16 = (ulong)(local_48._4_4_ + 1);
      auVar31 = NEON_ext(auVar23,auVar23,8,1);
      auVar31 = NEON_ext(auVar31,auVar23,8,1);
      pbVar18 = abStack_b0;
      do {
        puVar13 = puVar14;
        if ((uVar1 >> 4 & 1) != 0) {
          local_f0 = (byte)*puVar14;
          puVar13 = (uint *)((long)puVar14 + 1);
        }
        if ((uVar1 >> 5 & 1) != 0) {
          uStack_ef = (undefined1)*puVar13;
          puVar13 = (uint *)((long)puVar13 + 1);
        }
        puVar14 = puVar13;
        if ((uVar1 >> 6 & 1) != 0) {
          puVar14 = (uint *)((long)puVar13 + 1);
          uStack_ee = (undefined1)*puVar13;
        }
        uVar47 = *(undefined8 *)(*param_7 + 8);
        uVar46 = *(undefined8 *)*param_7;
        auVar34._0_8_ = auStack_ec._3_8_ << 0x38;
        auVar34._9_7_ = auStack_ec._5_7_;
        auVar34[8] = auStack_ec[0];
        auVar36._11_5_ = auStack_ec._7_5_;
        auVar36._0_10_ = auVar34._0_10_;
        auVar36[10] = auStack_ec[1];
        auVar38._13_3_ = auStack_ec._9_3_;
        auVar38._0_12_ = auVar36._0_12_;
        auVar38[0xc] = auStack_ec[2];
        auVar40[0xf] = auStack_ec[0xb];
        auVar40._0_14_ = auVar38._0_14_;
        auVar40[0xe] = auStack_ec[3];
        auVar4[1] = 0;
        auVar4[0] = local_f0;
        auVar35._0_9_ = (unkuint9)auVar40._8_8_ << 0x40;
        auVar35._10_6_ = auVar40._10_6_;
        auVar35[9] = 0;
        auVar37._12_4_ = auVar40._12_4_;
        auVar37._0_11_ = auVar35._0_11_;
        auVar37[0xb] = 0;
        auVar39._14_2_ = auVar40._14_2_;
        auVar39._0_13_ = auVar37._0_13_;
        auVar39[0xd] = 0;
        auVar4._2_13_ = auVar39._2_13_;
        auVar5[4] = uStack_ef;
        auVar5._0_4_ = auVar4._0_4_;
        auVar5[5] = 0;
        auVar5._6_9_ = auVar39._6_9_;
        auVar6[8] = uStack_ee;
        auVar6._0_8_ = auVar5._0_8_;
        auVar6[9] = 0;
        auVar6._10_5_ = auVar39._10_5_;
        auVar7._12_2_ = 0;
        auVar7._0_12_ = auVar6._0_12_;
        auVar7[0xe] = auStack_ec[3];
        auVar8._4_11_ = auVar7._4_11_;
        auVar8._0_4_ = auVar4._0_4_;
        auVar9._6_2_ = 0;
        auVar9._0_6_ = auVar8._0_6_;
        auVar9._8_7_ = auVar7._8_7_;
        auVar10._10_2_ = 0;
        auVar10._0_10_ = auVar9._0_10_;
        auVar10._12_3_ = auVar7._12_3_;
        auVar41._0_14_ = auVar10._0_14_;
        auVar41._14_2_ = 0;
        auVar42 = NEON_scvtf(auVar41,4);
        uVar16 = uVar16 - 1;
        fVar33 = (float)local_d0 + (local_e0[0] - (float)local_d0) * auVar31._0_4_ * auVar42._0_4_;
        fVar43 = fVar20 + (local_e0[1] - fVar20) * auVar31._4_4_ * auVar42._4_4_;
        fVar44 = (float)local_c8 + (local_e0[2] - (float)local_c8) * auVar31._8_4_ * auVar42._8_4_;
        fVar45 = fVar21 + (local_e0[3] - fVar21) * auVar31._12_4_ * auVar42._12_4_;
        pbVar18[8] = (SUB41(fVar44,0) & ~auVar3[8] | auVar3[8] & bStack_b8) & ~auVar19[8] |
                     (byte)uVar47 & auVar19[8];
        pbVar18[9] = ((byte)((uint)fVar44 >> 8) & ~auVar3[9] | auVar3[9] & (byte)uStack_b7) &
                     ~auVar19[9] | (byte)((ulong)uVar47 >> 8) & auVar19[9];
        pbVar18[10] = ((byte)((uint)fVar44 >> 0x10) & ~auVar3[10] | auVar3[10] & bVar24) &
                      ~auVar19[10] | (byte)((ulong)uVar47 >> 0x10) & auVar19[10];
        pbVar18[0xb] = ((byte)((uint)fVar44 >> 0x18) & ~auVar3[0xb] | auVar3[0xb] & bVar25) &
                       ~auVar19[0xb] | (byte)((ulong)uVar47 >> 0x18) & auVar19[0xb];
        pbVar18[0xc] = (SUB41(fVar45,0) & ~auVar3[0xc] | auVar3[0xc] & bVar26) & ~auVar19[0xc] |
                       (byte)((ulong)uVar47 >> 0x20) & auVar19[0xc];
        pbVar18[0xd] = ((byte)((uint)fVar45 >> 8) & ~auVar3[0xd] | auVar3[0xd] & bVar27) &
                       ~auVar19[0xd] | (byte)((ulong)uVar47 >> 0x28) & auVar19[0xd];
        pbVar18[0xe] = ((byte)((uint)fVar45 >> 0x10) & ~auVar3[0xe] | auVar3[0xe] & bVar28) &
                       ~auVar19[0xe] | (byte)((ulong)uVar47 >> 0x30) & auVar19[0xe];
        pbVar18[0xf] = ((byte)((uint)fVar45 >> 0x18) & ~auVar3[0xf] | auVar3[0xf] & bVar29) &
                       ~auVar19[0xf] | (byte)((ulong)uVar47 >> 0x38) & auVar19[0xf];
        *pbVar18 = (SUB41(fVar33,0) & ~auVar3[0] | auVar3[0] & (byte)local_c0) & ~auVar19[0] |
                   (byte)uVar46 & auVar19[0];
        pbVar18[1] = ((byte)((uint)fVar33 >> 8) & ~auVar3[1] |
                     auVar3[1] & (byte)((ulong)local_c0 >> 8)) & ~auVar19[1] |
                     (byte)((ulong)uVar46 >> 8) & auVar19[1];
        pbVar18[2] = ((byte)((uint)fVar33 >> 0x10) & ~auVar3[2] |
                     auVar3[2] & (byte)((ulong)local_c0 >> 0x10)) & ~auVar19[2] |
                     (byte)((ulong)uVar46 >> 0x10) & auVar19[2];
        pbVar18[3] = ((byte)((uint)fVar33 >> 0x18) & ~auVar3[3] |
                     auVar3[3] & (byte)((ulong)local_c0 >> 0x18)) & ~auVar19[3] |
                     (byte)((ulong)uVar46 >> 0x18) & auVar19[3];
        pbVar18[4] = (SUB41(fVar43,0) & ~auVar3[4] | auVar3[4] & (byte)((ulong)local_c0 >> 0x20)) &
                     ~auVar19[4] | (byte)((ulong)uVar46 >> 0x20) & auVar19[4];
        pbVar18[5] = ((byte)((uint)fVar43 >> 8) & ~auVar3[5] |
                     auVar3[5] & (byte)((ulong)local_c0 >> 0x28)) & ~auVar19[5] |
                     (byte)((ulong)uVar46 >> 0x28) & auVar19[5];
        pbVar18[6] = ((byte)((uint)fVar43 >> 0x10) & ~auVar3[6] |
                     auVar3[6] & (byte)((ulong)local_c0 >> 0x30)) & ~auVar19[6] |
                     (byte)((ulong)uVar46 >> 0x30) & auVar19[6];
        pbVar18[7] = ((byte)((uint)fVar43 >> 0x18) & ~auVar3[7] |
                     auVar3[7] & (byte)((ulong)local_c0 >> 0x38)) & ~auVar19[7] |
                     (byte)((ulong)uVar46 >> 0x38) & auVar19[7];
        pbVar18 = pbVar18 + 0x10;
      } while (uVar16 != 0);
    }
    auVar19._8_8_ = uVar32;
    auVar19._0_8_ = param_2._0_8_;
    (**(code **)(&DAT_04c3ac40 + lVar17 * 8))(auVar19,iVar11,auStack_70,abStack_b0,param_8);
    *param_4 = *param_4 + ((long)(int)local_48 + 1) * (long)iVar2;
  }
  return;
}

