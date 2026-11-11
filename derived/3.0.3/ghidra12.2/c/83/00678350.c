
void FUN_00678350(undefined1 param_1 [16],undefined1 param_2 [16],undefined8 param_3,long *param_4,
                 undefined4 param_5,uint param_6,undefined1 (*param_7) [12],
                 undefined1 (*param_8) [12])

{
  uint uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined2 *puVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  undefined2 *puVar11;
  uint *puVar12;
  ulong uVar13;
  long lVar14;
  byte *pbVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  undefined1 auVar26 [16];
  float fVar27;
  float fVar30;
  float fVar31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 local_f0;
  uint local_e0 [4];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  byte bStack_b8;
  undefined7 uStack_b7;
  byte abStack_b0 [64];
  undefined1 auStack_70 [32];
  undefined8 local_48;
  
  uVar33 = param_2._8_8_;
  uVar1 = param_6 & 0xff;
  local_48 = 0;
  if ((param_6 & 0xf0) == 0) {
    iVar8 = 0;
    local_48 = 0;
  }
  else {
    iVar8 = FUN_00677f50(param_4,&local_48,(long)&local_48 + 4,param_5,auStack_70);
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
  puVar9 = (uint *)(*param_4 + 3U & 0xfffffffffffffffc);
  *param_4 = (long)puVar9;
  if ((param_6 & 1) == 0) {
    puVar10 = puVar9;
    if ((uVar1 >> 4 & 1) != 0) {
      *param_4 = (long)(puVar9 + 1);
      puVar10 = puVar9 + 2;
      local_d0 = (ulong)*puVar9;
      puVar12 = local_e0;
      *param_4 = (long)puVar10;
      puVar9 = puVar9 + 1;
      goto LAB_00678404;
    }
  }
  else {
    puVar10 = puVar9 + 1;
    *param_4 = (long)puVar10;
    puVar12 = (uint *)&local_c0;
LAB_00678404:
    *puVar12 = *puVar9;
  }
  if ((uVar1 >> 1 & 1) == 0) {
    if ((uVar1 >> 5 & 1) != 0) {
      *param_4 = (long)(puVar10 + 1);
      local_d0 = CONCAT44(*puVar10,(undefined4)local_d0);
      puVar9 = local_e0;
      lVar14 = 2;
      puVar12 = puVar10 + 1;
      goto LAB_0067843c;
    }
  }
  else {
    puVar9 = (uint *)&local_c0;
    lVar14 = 1;
    puVar12 = puVar10;
LAB_0067843c:
    puVar10 = puVar10 + lVar14;
    *param_4 = (long)puVar10;
    puVar9[1] = *puVar12;
  }
  if ((uVar1 >> 2 & 1) == 0) {
    if ((uVar1 >> 6 & 1) == 0) goto LAB_0067848c;
    *param_4 = (long)(puVar10 + 1);
    local_c8 = CONCAT44(local_c8._4_4_,*puVar10);
    puVar9 = local_e0;
    lVar14 = 2;
    puVar12 = puVar10 + 1;
  }
  else {
    puVar9 = (uint *)&local_c0;
    lVar14 = 1;
    puVar12 = puVar10;
  }
  puVar10 = puVar10 + lVar14;
  *param_4 = (long)puVar10;
  puVar9[2] = *puVar12;
LAB_0067848c:
  auVar4 = *(undefined1 (*) [16])(&DAT_04c32b20 + (ulong)(param_6 & 0xf) * 0x10);
  bVar20 = (byte)((uint7)uStack_b7 >> 8);
  bVar21 = (byte)((uint7)uStack_b7 >> 0x10);
  bVar22 = (byte)((uint7)uStack_b7 >> 0x18);
  bVar23 = (byte)((uint7)uStack_b7 >> 0x20);
  bVar24 = (byte)((uint7)uStack_b7 >> 0x28);
  bVar25 = (byte)((uint7)uStack_b7 >> 0x30);
  auVar29[8] = bStack_b8;
  auVar29._0_8_ = local_c0;
  auVar16 = *(undefined1 (*) [16])
             (&DAT_04c32b20 + (ulong)(~param_6 & (uVar1 >> 4 ^ 0xffffffff) & 0xf) * 0x10);
  if ((param_6 & 0xf0) == 0) {
    uVar19 = (undefined4)((ulong)*(undefined8 *)(*param_8 + 8) >> 0x20);
    auVar3._12_4_ = uVar19;
    auVar3._0_12_ = *param_8;
    auVar29[9] = (byte)uStack_b7;
    auVar29[10] = bVar20;
    auVar29[0xb] = bVar21;
    auVar29[0xc] = bVar22;
    auVar29[0xd] = bVar23;
    auVar29[0xe] = bVar24;
    auVar29[0xf] = bVar25;
    auVar26._12_4_ = uVar19;
    auVar26._0_12_ = *param_8;
    auVar26 = auVar26 ^ (auVar3 ^ auVar29) & auVar4;
    *(long *)(*param_8 + 8) = auVar26._8_8_;
    *(long *)*param_8 = auVar26._0_8_;
    auVar4._12_4_ = (int)((ulong)*(undefined8 *)(*param_7 + 8) >> 0x20);
    auVar4._0_12_ = *param_7;
    auVar26 = auVar26 ^ (auVar26 ^ auVar4) & auVar16;
    *(long *)(*param_8 + 8) = auVar26._8_8_;
    *(long *)*param_8 = auVar26._0_8_;
  }
  else {
    fVar18 = (float)((ulong)local_c8 >> 0x20);
    fVar17 = (float)(local_d0 >> 0x20);
    *param_4 = (long)puVar10;
    iVar2 = *(int *)(&DAT_040576e0 + (ulong)(uVar1 >> 4 & 7) * 4);
    iVar7 = local_48._4_4_;
    lVar14 = (long)local_48._4_4_;
    local_f0 = 0;
    if (-1 < local_48) {
      puVar11 = (undefined2 *)((long)puVar10 + (long)(iVar2 * 2 * (iVar8 - local_48._4_4_)));
      uVar13 = (ulong)(local_48._4_4_ + 1);
      pbVar15 = abStack_b0;
      do {
        puVar5 = puVar11;
        uVar6 = local_f0;
        if ((uVar1 >> 4 & 1) != 0) {
          local_f0 = CONCAT62(local_f0._2_6_,*puVar11);
          puVar5 = puVar11 + 1;
          uVar6 = local_f0;
        }
        local_f0 = uVar6;
        if ((uVar1 >> 5 & 1) != 0) {
          local_f0._4_4_ = (undefined4)(uVar6 >> 0x20);
          local_f0._0_2_ = (ushort)uVar6;
          local_f0._0_4_ = CONCAT22(*puVar5,(ushort)local_f0);
          puVar5 = puVar5 + 1;
        }
        puVar11 = puVar5;
        if ((uVar1 >> 6 & 1) != 0) {
          puVar11 = puVar5 + 1;
          local_f0 = (ulong)CONCAT24(*puVar5,(undefined4)local_f0);
        }
        auVar28._2_2_ = 0;
        auVar28._0_2_ = (ushort)local_f0;
        auVar28._4_2_ = local_f0._2_2_;
        auVar28._6_2_ = 0;
        auVar28._8_2_ = local_f0._4_2_;
        auVar28._10_6_ = 0;
        uVar35 = *(undefined8 *)(*param_7 + 8);
        uVar34 = *(undefined8 *)*param_7;
        auVar29 = NEON_ucvtf(auVar28,4);
        uVar13 = uVar13 - 1;
        fVar27 = (float)local_d0 + (local_e0[0] - (float)local_d0) * auVar29._0_4_ * 1.5259022e-05;
        fVar30 = fVar17 + (local_e0[1] - fVar17) * auVar29._4_4_ * 1.5259022e-05;
        fVar31 = (float)local_c8 + (local_e0[2] - (float)local_c8) * auVar29._8_4_ * 1.5259022e-05;
        fVar32 = fVar18 + (local_e0[3] - fVar18) * auVar29._12_4_ * 1.5259022e-05;
        pbVar15[8] = (SUB41(fVar31,0) & ~auVar4[8] | auVar4[8] & bStack_b8) & ~auVar16[8] |
                     (byte)uVar35 & auVar16[8];
        pbVar15[9] = ((byte)((uint)fVar31 >> 8) & ~auVar4[9] | auVar4[9] & (byte)uStack_b7) &
                     ~auVar16[9] | (byte)((ulong)uVar35 >> 8) & auVar16[9];
        pbVar15[10] = ((byte)((uint)fVar31 >> 0x10) & ~auVar4[10] | auVar4[10] & bVar20) &
                      ~auVar16[10] | (byte)((ulong)uVar35 >> 0x10) & auVar16[10];
        pbVar15[0xb] = ((byte)((uint)fVar31 >> 0x18) & ~auVar4[0xb] | auVar4[0xb] & bVar21) &
                       ~auVar16[0xb] | (byte)((ulong)uVar35 >> 0x18) & auVar16[0xb];
        pbVar15[0xc] = (SUB41(fVar32,0) & ~auVar4[0xc] | auVar4[0xc] & bVar22) & ~auVar16[0xc] |
                       (byte)((ulong)uVar35 >> 0x20) & auVar16[0xc];
        pbVar15[0xd] = ((byte)((uint)fVar32 >> 8) & ~auVar4[0xd] | auVar4[0xd] & bVar23) &
                       ~auVar16[0xd] | (byte)((ulong)uVar35 >> 0x28) & auVar16[0xd];
        pbVar15[0xe] = ((byte)((uint)fVar32 >> 0x10) & ~auVar4[0xe] | auVar4[0xe] & bVar24) &
                       ~auVar16[0xe] | (byte)((ulong)uVar35 >> 0x30) & auVar16[0xe];
        pbVar15[0xf] = ((byte)((uint)fVar32 >> 0x18) & ~auVar4[0xf] | auVar4[0xf] & bVar25) &
                       ~auVar16[0xf] | (byte)((ulong)uVar35 >> 0x38) & auVar16[0xf];
        *pbVar15 = (SUB41(fVar27,0) & ~auVar4[0] | auVar4[0] & (byte)local_c0) & ~auVar16[0] |
                   (byte)uVar34 & auVar16[0];
        pbVar15[1] = ((byte)((uint)fVar27 >> 8) & ~auVar4[1] |
                     auVar4[1] & (byte)((ulong)local_c0 >> 8)) & ~auVar16[1] |
                     (byte)((ulong)uVar34 >> 8) & auVar16[1];
        pbVar15[2] = ((byte)((uint)fVar27 >> 0x10) & ~auVar4[2] |
                     auVar4[2] & (byte)((ulong)local_c0 >> 0x10)) & ~auVar16[2] |
                     (byte)((ulong)uVar34 >> 0x10) & auVar16[2];
        pbVar15[3] = ((byte)((uint)fVar27 >> 0x18) & ~auVar4[3] |
                     auVar4[3] & (byte)((ulong)local_c0 >> 0x18)) & ~auVar16[3] |
                     (byte)((ulong)uVar34 >> 0x18) & auVar16[3];
        pbVar15[4] = (SUB41(fVar30,0) & ~auVar4[4] | auVar4[4] & (byte)((ulong)local_c0 >> 0x20)) &
                     ~auVar16[4] | (byte)((ulong)uVar34 >> 0x20) & auVar16[4];
        pbVar15[5] = ((byte)((uint)fVar30 >> 8) & ~auVar4[5] |
                     auVar4[5] & (byte)((ulong)local_c0 >> 0x28)) & ~auVar16[5] |
                     (byte)((ulong)uVar34 >> 0x28) & auVar16[5];
        pbVar15[6] = ((byte)((uint)fVar30 >> 0x10) & ~auVar4[6] |
                     auVar4[6] & (byte)((ulong)local_c0 >> 0x30)) & ~auVar16[6] |
                     (byte)((ulong)uVar34 >> 0x30) & auVar16[6];
        pbVar15[7] = ((byte)((uint)fVar30 >> 0x18) & ~auVar4[7] |
                     auVar4[7] & (byte)((ulong)local_c0 >> 0x38)) & ~auVar16[7] |
                     (byte)((ulong)uVar34 >> 0x38) & auVar16[7];
        pbVar15 = pbVar15 + 0x10;
      } while (uVar13 != 0);
    }
    auVar16._8_8_ = uVar33;
    auVar16._0_8_ = param_2._0_8_;
    (**(code **)(&DAT_04c3ac40 + lVar14 * 8))(auVar16,iVar7,auStack_70,abStack_b0,param_8);
    *param_4 = *param_4 + (long)(iVar2 * 2 * ((int)local_48 + 1));
  }
  return;
}

