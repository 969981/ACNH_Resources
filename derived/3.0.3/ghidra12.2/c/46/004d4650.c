
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d4650(undefined8 *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  fVar4 = param_2[1] * 1.0000163;
  fVar6 = param_2[2] * 1.0000163;
  auVar11._8_2_ = 0;
  auVar11._0_8_ =
       CONCAT17((char)((uint)fVar4 >> 0x18),
                CONCAT16((char)((uint)fVar4 >> 0x10),
                         (uint6)((ushort)((uint)(*param_2 * 1.0000163) >> 0x10) & 0x7f80) << 0x10))
       & 0x7f80ffffffffffff;
  auVar11[10] = (byte)((uint)fVar6 >> 0x10) & 0x80;
  auVar11[0xb] = (byte)((uint)fVar6 >> 0x18) & 0x7f;
  auVar11._12_2_ = 0;
  auVar11[0xe] = (byte)((uint)(DAT_0413f530 * 1.0000163) >> 0x10) & 0x80;
  auVar11[0xf] = (byte)((uint)(DAT_0413f530 * 1.0000163) >> 0x18) & 0x7f;
  iVar3 = NEON_fmaxnmv(auVar11,4);
  iVar5 = iVar3 + -0x4e800000;
  uVar12 = (undefined1)((uint)iVar5 >> 8);
  uVar13 = (undefined1)((uint)iVar5 >> 0x10);
  uVar14 = (undefined1)((uint)iVar5 >> 0x18);
  iVar7 = iVar3 + -0x4e800000;
  uVar15 = (undefined1)((uint)iVar7 >> 8);
  uVar16 = (undefined1)((uint)iVar7 >> 0x10);
  uVar17 = (undefined1)((uint)iVar7 >> 0x18);
  iVar8 = iVar3 + -0x4e800000;
  uVar18 = (undefined1)((uint)iVar8 >> 8);
  uVar19 = (undefined1)((uint)iVar8 >> 0x10);
  uVar20 = (undefined1)((uint)iVar8 >> 0x18);
  auVar9._0_4_ = (int)(float)(((int)*param_2 + 0x4e800000) - iVar3);
  auVar9._4_4_ = (int)(float)(((int)param_2[1] + 0x4e800000) - iVar3);
  auVar9._8_4_ = (int)(float)(((int)param_2[2] + 0x4e800000) - iVar3);
  auVar9._12_4_ = (int)(float)(((int)param_2[3] + 0x4e800000) - iVar3);
  auVar21._8_8_ = uRam0000000004c247b8;
  auVar21._0_8_ = _DAT_04c247b0;
  auVar1[4] = (char)iVar5;
  auVar1._0_4_ = iVar3 + -0x4e800000;
  auVar1[5] = uVar12;
  auVar1[6] = uVar13;
  auVar1[7] = uVar14;
  auVar1[8] = (char)iVar7;
  auVar1[9] = uVar15;
  auVar1[10] = uVar16;
  auVar1[0xb] = uVar17;
  auVar1[0xc] = (char)iVar8;
  auVar1[0xd] = uVar18;
  auVar1[0xe] = uVar19;
  auVar1[0xf] = uVar20;
  auVar22[4] = (char)iVar5;
  auVar22._0_4_ = iVar3 + -0x4e800000;
  auVar22[5] = uVar12;
  auVar22[6] = uVar13;
  auVar22[7] = uVar14;
  auVar22[8] = (char)iVar7;
  auVar22[9] = uVar15;
  auVar22[10] = uVar16;
  auVar22[0xb] = uVar17;
  auVar22[0xc] = (char)iVar8;
  auVar22[0xd] = uVar18;
  auVar22[0xe] = uVar19;
  auVar22[0xf] = uVar20;
  auVar22 = auVar22 ^ (auVar1 ^ auVar9) & auVar21;
  auVar10._0_4_ = auVar22._0_4_ + (int)_DAT_04102420;
  auVar10._4_4_ = auVar22._4_4_ + (int)((ulong)_DAT_04102420 >> 0x20);
  auVar10._8_4_ = auVar22._8_4_ + (int)_UNK_04102428;
  auVar10._12_4_ = auVar22._12_4_ + (int)((ulong)_UNK_04102428 >> 0x20);
  auVar2[8] = (char)_UNK_04101dd8;
  auVar2._0_8_ = _DAT_04101dd0;
  auVar2[9] = (char)((ulong)_UNK_04101dd8 >> 8);
  auVar2[10] = (char)((ulong)_UNK_04101dd8 >> 0x10);
  auVar2[0xb] = (char)((ulong)_UNK_04101dd8 >> 0x18);
  auVar2[0xc] = (char)((ulong)_UNK_04101dd8 >> 0x20);
  auVar2[0xd] = (char)((ulong)_UNK_04101dd8 >> 0x28);
  auVar2[0xe] = (char)((ulong)_UNK_04101dd8 >> 0x30);
  auVar2[0xf] = (char)((ulong)_UNK_04101dd8 >> 0x38);
  auVar11 = a64_TBL(ZEXT816(0),auVar10,auVar2);
  *param_1 = auVar11._0_8_;
  return;
}

