
void FUN_00222540(uint *param_1,uint *param_2,undefined8 param_3,uint *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint *puVar14;
  uint uVar15;
  
  uVar11 = (ulong)(*param_1 ^ *param_4);
  uVar9 = (ulong)(param_1[1] ^ param_4[1]);
  uVar7 = (ulong)(param_1[2] ^ param_4[2]);
  uVar13 = (ulong)(param_1[3] ^ param_4[3]);
  puVar14 = param_1 + 7;
  uVar15 = 0xb;
  do {
    uVar10 = (uint)uVar11;
    uVar8 = (uint)uVar9;
    uVar6 = (uint)uVar7;
    uVar15 = uVar15 - 1;
    uVar12 = (uint)uVar13;
    uVar2 = *(uint *)(&DAT_0410d54c + (ulong)(uVar10 & 0xff) * 4) ^
            (*(uint *)(&DAT_0410d54c + (ulong)(uVar8 >> 8 & 0xff) * 4) >> 0x18 |
            *(uint *)(&DAT_0410d54c + (ulong)(uVar8 >> 8 & 0xff) * 4) << 8) ^
            (*(uint *)(&DAT_0410d54c + (ulong)(uVar6 >> 0x10 & 0xff) * 4) >> 0x10 |
            *(uint *)(&DAT_0410d54c + (ulong)(uVar6 >> 0x10 & 0xff) * 4) << 0x10) ^
            (*(uint *)(&DAT_0410d54c + (uVar13 >> 0x18) * 4) >> 8 |
            *(uint *)(&DAT_0410d54c + (uVar13 >> 0x18) * 4) << 0x18) ^ puVar14[-3];
    uVar11 = (ulong)uVar2;
    puVar1 = puVar14 + -1;
    uVar5 = *puVar14;
    uVar3 = *(uint *)(&DAT_0410d54c + (ulong)(uVar8 & 0xff) * 4) ^
            (*(uint *)(&DAT_0410d54c + (ulong)(uVar6 >> 8 & 0xff) * 4) >> 0x18 |
            *(uint *)(&DAT_0410d54c + (ulong)(uVar6 >> 8 & 0xff) * 4) << 8) ^
            (*(uint *)(&DAT_0410d54c + (ulong)(uVar12 >> 0x10 & 0xff) * 4) >> 0x10 |
            *(uint *)(&DAT_0410d54c + (ulong)(uVar12 >> 0x10 & 0xff) * 4) << 0x10) ^
            (*(uint *)(&DAT_0410d54c + (ulong)(uVar10 >> 0x18) * 4) >> 8 |
            *(uint *)(&DAT_0410d54c + (ulong)(uVar10 >> 0x18) * 4) << 0x18) ^ puVar14[-2];
    uVar9 = (ulong)uVar3;
    puVar14 = puVar14 + 4;
    uVar4 = *(uint *)(&DAT_0410d54c + (ulong)(uVar6 & 0xff) * 4) ^
            (*(uint *)(&DAT_0410d54c + (ulong)(uVar12 >> 8 & 0xff) * 4) >> 0x18 |
            *(uint *)(&DAT_0410d54c + (ulong)(uVar12 >> 8 & 0xff) * 4) << 8) ^
            (*(uint *)(&DAT_0410d54c + (ulong)(uVar10 >> 0x10 & 0xff) * 4) >> 0x10 |
            *(uint *)(&DAT_0410d54c + (ulong)(uVar10 >> 0x10 & 0xff) * 4) << 0x10) ^
            (*(uint *)(&DAT_0410d54c + (ulong)(uVar8 >> 0x18) * 4) >> 8 |
            *(uint *)(&DAT_0410d54c + (ulong)(uVar8 >> 0x18) * 4) << 0x18) ^ *puVar1;
    uVar7 = (ulong)uVar4;
    uVar5 = *(uint *)(&DAT_0410d54c + (ulong)(uVar12 & 0xff) * 4) ^
            (*(uint *)(&DAT_0410d54c + (ulong)(uVar10 >> 8 & 0xff) * 4) >> 0x18 |
            *(uint *)(&DAT_0410d54c + (ulong)(uVar10 >> 8 & 0xff) * 4) << 8) ^
            (*(uint *)(&DAT_0410d54c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) >> 0x10 |
            *(uint *)(&DAT_0410d54c + (ulong)(uVar8 >> 0x10 & 0xff) * 4) << 0x10) ^
            (*(uint *)(&DAT_0410d54c + (ulong)(uVar6 >> 0x18) * 4) >> 8 |
            *(uint *)(&DAT_0410d54c + (ulong)(uVar6 >> 0x18) * 4) << 0x18) ^ uVar5;
    uVar13 = (ulong)uVar5;
  } while (2 < uVar15);
  *param_2 = CONCAT13((&DAT_0410d449)[uVar5 >> 0x18],
                      CONCAT12((&DAT_0410d449)[(ulong)(uVar4 >> 0x10) & 0xff],
                               CONCAT11((&DAT_0410d449)[(ulong)(uVar3 >> 8) & 0xff],
                                        (&DAT_0410d449)[uVar11 & 0xff]))) ^ param_1[0x28];
  param_2[1] = CONCAT13((&DAT_0410d449)[uVar2 >> 0x18],
                        CONCAT12((&DAT_0410d449)[(ulong)(uVar5 >> 0x10) & 0xff],
                                 CONCAT11((&DAT_0410d449)[(ulong)(uVar4 >> 8) & 0xff],
                                          (&DAT_0410d449)[uVar9 & 0xff]))) ^ param_1[0x29];
  param_2[2] = CONCAT13((&DAT_0410d449)[uVar3 >> 0x18],
                        CONCAT12((&DAT_0410d449)[(ulong)(uVar2 >> 0x10) & 0xff],
                                 CONCAT11((&DAT_0410d449)[(ulong)(uVar5 >> 8) & 0xff],
                                          (&DAT_0410d449)[uVar7 & 0xff]))) ^ param_1[0x2a];
  param_2[3] = CONCAT13((&DAT_0410d449)[uVar4 >> 0x18],
                        CONCAT12((&DAT_0410d449)[(ulong)(uVar3 >> 0x10) & 0xff],
                                 CONCAT11((&DAT_0410d449)[(ulong)(uVar2 >> 8) & 0xff],
                                          (&DAT_0410d449)[uVar13 & 0xff]))) ^ param_1[0x2b];
  return;
}

