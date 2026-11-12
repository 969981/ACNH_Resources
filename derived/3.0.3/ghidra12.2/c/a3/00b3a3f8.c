
int FUN_00b3a3f8(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  
  uVar2 = *param_1 - (*param_1 >> 1 & 0x55555555);
  uVar3 = param_1[1] - (param_1[1] >> 1 & 0x55555555);
  uVar4 = param_1[2] - (param_1[2] >> 1 & 0x55555555);
  uVar5 = param_1[3] - (param_1[3] >> 1 & 0x55555555);
  uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
  uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
  uVar1 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
  uVar2 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
  uVar1 = uVar1 + (uVar1 >> 8);
  uVar4 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
  uVar3 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
  uVar4 = uVar4 + (uVar4 >> 8);
  uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
  uVar2 = uVar2 + (uVar2 >> 8);
  uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
  uVar3 = uVar3 + (uVar3 >> 8);
  uVar5 = param_1[4] - (param_1[4] >> 1 & 0x55555555);
  uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
  uVar6 = param_1[5] - (param_1[5] >> 1 & 0x55555555);
  uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
  uVar5 = uVar5 + (uVar5 >> 8);
  uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
  uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
  uVar6 = uVar6 + (uVar6 >> 8);
  uVar7 = param_1[6] - (param_1[6] >> 1 & 0x55555555);
  uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
  uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
  uVar7 = uVar7 + (uVar7 >> 8);
  uVar8 = param_1[7] - (param_1[7] >> 1 & 0x55555555);
  uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
  uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
  uVar8 = uVar8 + (uVar8 >> 8);
  uVar9 = param_1[8] - (param_1[8] >> 1 & 0x55555555);
  uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
  uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
  uVar9 = uVar9 + (uVar9 >> 8);
  uVar10 = param_1[9] - (param_1[9] >> 1 & 0x55555555);
  uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
  uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
  uVar10 = uVar10 + (uVar10 >> 8);
  uVar11 = param_1[10] - (param_1[10] >> 1 & 0x55555555);
  uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
  uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
  uVar11 = uVar11 + (uVar11 >> 8);
  uVar12 = param_1[0xb] - (param_1[0xb] >> 1 & 0x55555555);
  uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
  uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
  uVar12 = uVar12 + (uVar12 >> 8);
  uVar13 = param_1[0xc] - (param_1[0xc] >> 1 & 0x55555555);
  uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
  uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
  uVar13 = uVar13 + (uVar13 >> 8);
  uVar14 = param_1[0xd] - (param_1[0xd] >> 1 & 0x55555555);
  uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
  uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
  uVar14 = uVar14 + (uVar14 >> 8);
  uVar15 = param_1[0xe] - (param_1[0xe] >> 1 & 0x55555555);
  uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
  uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
  uVar15 = uVar15 + (uVar15 >> 8);
  uVar16 = param_1[0xf] - (param_1[0xf] >> 1 & 0x55555555);
  uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
  uVar16 = uVar16 + (uVar16 >> 4) & 0xf0f0f0f;
  uVar16 = uVar16 + (uVar16 >> 8);
  uVar17 = param_1[0x10] - (param_1[0x10] >> 1 & 0x55555555);
  uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
  uVar18 = param_1[0x11] - (param_1[0x11] >> 1 & 0x55555555);
  uVar17 = uVar17 + (uVar17 >> 4) & 0xf0f0f0f;
  uVar17 = uVar17 + (uVar17 >> 8);
  uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
  uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
  uVar18 = uVar18 + (uVar18 >> 8);
  uVar19 = param_1[0x12] - (param_1[0x12] >> 1 & 0x55555555);
  uVar19 = (uVar19 >> 2 & 0x33333333) + (uVar19 & 0x33333333);
  uVar19 = uVar19 + (uVar19 >> 4) & 0xf0f0f0f;
  uVar19 = uVar19 + (uVar19 >> 8);
  uVar20 = param_1[0x13] - (param_1[0x13] >> 1 & 0x55555555);
  uVar20 = (uVar20 >> 2 & 0x33333333) + (uVar20 & 0x33333333);
  uVar20 = uVar20 + (uVar20 >> 4) & 0xf0f0f0f;
  uVar20 = uVar20 + (uVar20 >> 8);
  uVar21 = param_1[0x14] - (param_1[0x14] >> 1 & 0x55555555);
  uVar21 = (uVar21 >> 2 & 0x33333333) + (uVar21 & 0x33333333);
  uVar21 = uVar21 + (uVar21 >> 4) & 0xf0f0f0f;
  uVar21 = uVar21 + (uVar21 >> 8);
  uVar22 = param_1[0x15] - (param_1[0x15] >> 1 & 0x55555555);
  uVar22 = (uVar22 >> 2 & 0x33333333) + (uVar22 & 0x33333333);
  uVar22 = uVar22 + (uVar22 >> 4) & 0xf0f0f0f;
  uVar22 = uVar22 + (uVar22 >> 8);
  uVar23 = param_1[0x16] - (param_1[0x16] >> 1 & 0x55555555);
  uVar23 = (uVar23 >> 2 & 0x33333333) + (uVar23 & 0x33333333);
  uVar24 = param_1[0x17] - (param_1[0x17] >> 1 & 0x55555555);
  uVar23 = uVar23 + (uVar23 >> 4) & 0xf0f0f0f;
  uVar23 = uVar23 + (uVar23 >> 8);
  uVar24 = (uVar24 >> 2 & 0x33333333) + (uVar24 & 0x33333333);
  uVar24 = uVar24 + (uVar24 >> 4) & 0xf0f0f0f;
  uVar24 = uVar24 + (uVar24 >> 8);
  uVar25 = param_1[0x18] - (param_1[0x18] >> 1 & 0x55555555);
  uVar25 = (uVar25 >> 2 & 0x33333333) + (uVar25 & 0x33333333);
  uVar25 = uVar25 + (uVar25 >> 4) & 0xf0f0f0f;
  uVar25 = uVar25 + (uVar25 >> 8);
  uVar26 = param_1[0x19] - (param_1[0x19] >> 1 & 0x55555555);
  uVar26 = (uVar26 >> 2 & 0x33333333) + (uVar26 & 0x33333333);
  uVar26 = uVar26 + (uVar26 >> 4) & 0xf0f0f0f;
  uVar26 = uVar26 + (uVar26 >> 8);
  uVar27 = param_1[0x1a] - (param_1[0x1a] >> 1 & 0x55555555);
  uVar27 = (uVar27 >> 2 & 0x33333333) + (uVar27 & 0x33333333);
  uVar27 = uVar27 + (uVar27 >> 4) & 0xf0f0f0f;
  uVar27 = uVar27 + (uVar27 >> 8);
  uVar28 = param_1[0x1b] - (param_1[0x1b] >> 1 & 0x55555555);
  uVar28 = (uVar28 >> 2 & 0x33333333) + (uVar28 & 0x33333333);
  uVar28 = uVar28 + (uVar28 >> 4) & 0xf0f0f0f;
  uVar28 = uVar28 + (uVar28 >> 8);
  uVar29 = param_1[0x1c] - (param_1[0x1c] >> 1 & 0x55555555);
  uVar29 = (uVar29 >> 2 & 0x33333333) + (uVar29 & 0x33333333);
  uVar29 = uVar29 + (uVar29 >> 4) & 0xf0f0f0f;
  uVar29 = uVar29 + (uVar29 >> 8);
  uVar30 = param_1[0x1d] - (param_1[0x1d] >> 1 & 0x55555555);
  uVar30 = (uVar30 >> 2 & 0x33333333) + (uVar30 & 0x33333333);
  uVar30 = uVar30 + (uVar30 >> 4) & 0xf0f0f0f;
  uVar30 = uVar30 + (uVar30 >> 8);
  uVar31 = param_1[0x1e] - (param_1[0x1e] >> 1 & 0x55555555);
  uVar31 = (uVar31 >> 2 & 0x33333333) + (uVar31 & 0x33333333);
  uVar31 = uVar31 + (uVar31 >> 4) & 0xf0f0f0f;
  uVar31 = uVar31 + (uVar31 >> 8);
  uVar32 = param_1[0x1f] - (param_1[0x1f] >> 1 & 0x55555555);
  uVar32 = (uVar32 >> 2 & 0x33333333) + (uVar32 & 0x33333333);
  uVar32 = uVar32 + (uVar32 >> 4) & 0xf0f0f0f;
  uVar32 = uVar32 + (uVar32 >> 8);
  return (uVar4 + (uVar4 >> 0x10) & 0x3f) + (uVar1 + (uVar1 >> 0x10) & 0x3f) +
         (uVar2 + (uVar2 >> 0x10) & 0x3f) + (uVar3 + (uVar3 >> 0x10) & 0x3f) +
         (uVar5 + (uVar5 >> 0x10) & 0x3f) + (uVar6 + (uVar6 >> 0x10) & 0x3f) +
         (uVar7 + (uVar7 >> 0x10) & 0x3f) +
         (uVar8 + (uVar8 >> 0x10) & 0x3f) + (uVar9 + (uVar9 >> 0x10) & 0x3f) +
         (uVar10 + (uVar10 >> 0x10) & 0x3f) + (uVar11 + (uVar11 >> 0x10) & 0x3f) +
         (uVar12 + (uVar12 >> 0x10) & 0x3f) + (uVar13 + (uVar13 >> 0x10) & 0x3f) +
         (uVar14 + (uVar14 >> 0x10) & 0x3f) + (uVar15 + (uVar15 >> 0x10) & 0x3f) +
         (uVar16 + (uVar16 >> 0x10) & 0x3f) +
         (uVar17 + (uVar17 >> 0x10) & 0x3f) + (uVar18 + (uVar18 >> 0x10) & 0x3f) +
         (uVar19 + (uVar19 >> 0x10) & 0x3f) + (uVar20 + (uVar20 >> 0x10) & 0x3f) +
         (uVar21 + (uVar21 >> 0x10) & 0x3f) + (uVar22 + (uVar22 >> 0x10) & 0x3f) +
         (uVar23 + (uVar23 >> 0x10) & 0x3f) + (uVar24 + (uVar24 >> 0x10) & 0x3f) +
         (uVar25 + (uVar25 >> 0x10) & 0x3f) + (uVar26 + (uVar26 >> 0x10) & 0x3f) +
         (uVar27 + (uVar27 >> 0x10) & 0x3f) + (uVar28 + (uVar28 >> 0x10) & 0x3f) +
         (uVar29 + (uVar29 >> 0x10) & 0x3f) +
         (uVar30 + (uVar30 >> 0x10) & 0x3f) + (uVar31 + (uVar31 >> 0x10) & 0x3f) +
         (uVar32 + (uVar32 >> 0x10) & 0x3f);
}

