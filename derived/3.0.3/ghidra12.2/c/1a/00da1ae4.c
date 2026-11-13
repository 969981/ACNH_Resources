
int FUN_00da1ae4(uint *param_1)

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
  return (uVar4 + (uVar4 >> 0x10) & 0x3f) + (uVar1 + (uVar1 >> 0x10) & 0x3f) +
         (uVar2 + (uVar2 >> 0x10) & 0x3f) + (uVar3 + (uVar3 >> 0x10) & 0x3f) +
         (uVar5 + (uVar5 >> 0x10) & 0x3f) + (uVar6 + (uVar6 >> 0x10) & 0x3f) +
         (uVar7 + (uVar7 >> 0x10) & 0x3f) +
         (uVar8 + (uVar8 >> 0x10) & 0x3f) + (uVar9 + (uVar9 >> 0x10) & 0x3f) +
         (uVar10 + (uVar10 >> 0x10) & 0x3f) + (uVar11 + (uVar11 >> 0x10) & 0x3f) +
         (uVar12 + (uVar12 >> 0x10) & 0x3f) + (uVar13 + (uVar13 >> 0x10) & 0x3f) +
         (uVar14 + (uVar14 >> 0x10) & 0x3f) + (uVar15 + (uVar15 >> 0x10) & 0x3f) +
         (uVar16 + (uVar16 >> 0x10) & 0x3f);
}

