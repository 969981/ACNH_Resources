
/* WARNING: Type propagation algorithm not settling */

byte FUN_011bf0b0(byte *param_1,undefined **param_2,int param_3,uint param_4,undefined1 param_5,
                 uint param_6,uint param_7)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  byte bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  undefined4 *puVar14;
  undefined **ppuVar15;
  undefined2 *puVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  char *pcVar21;
  float fVar22;
  undefined2 local_1dc;
  undefined1 local_1da;
  undefined1 local_1d9;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  byte local_1cc;
  byte local_1cb;
  undefined *local_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined *local_1b8;
  int local_1b0;
  int iStack_1ac;
  undefined *local_1a8;
  int local_1a0;
  int iStack_19c;
  undefined *local_198;
  int local_190;
  int iStack_18c;
  undefined *local_188;
  int local_180;
  int iStack_17c;
  undefined *local_178;
  int local_170;
  int iStack_16c;
  undefined *local_168;
  int local_160;
  int iStack_15c;
  undefined *local_158;
  int local_150;
  int iStack_14c;
  undefined *local_148;
  int local_140;
  int iStack_13c;
  undefined *local_138;
  int local_130;
  int iStack_12c;
  undefined *local_128;
  undefined8 local_120;
  undefined *local_118;
  undefined8 local_110;
  undefined *local_108;
  undefined8 local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined *local_b8;
  int local_b0;
  int local_ac;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 local_98;
  uint local_90;
  int iStack_8c;
  undefined *local_88;
  uint local_80;
  int iStack_7c;
  
  local_c0 = 0;
  local_c8 = 0;
  local_128 = PTR_DAT_04bb2010 + 0x10;
  local_120 = (undefined *)0xffffffffffffffff;
  local_110 = 0xffffffffffffffff;
  local_100 = 0xffffffffffffffff;
  local_f0 = 0xffffffffffffffff;
  local_e0 = 0xffffffffffffffff;
  local_d0 = 0xffffffffffffffff;
  local_118 = local_128;
  local_108 = local_128;
  local_f8 = local_128;
  local_e8 = local_128;
  local_d8 = local_128;
  if (param_3 == 1) {
    switch(param_5) {
    case 0:
      uVar11 = param_6 & 0xff;
      bVar1 = (param_6 & 1) != 0;
      if (bVar1) {
        iVar12 = *(int *)(param_2 + 1);
        iVar9 = *(int *)((long)param_2 + 0xc) + -2;
        local_138 = PTR_DAT_04bb2010 + 0x10;
        local_130 = iVar12 + -2;
        iStack_12c = iVar9;
        bVar7 = FUN_011c0ee0(&local_138,param_4);
        bVar6 = bVar7 & 1;
        local_120 = (undefined *)CONCAT44(iVar9,iVar12 + -2);
        local_c8 = CONCAT71(local_c8._1_7_,bVar7) & 0xffffffffffffff01;
      }
      else {
        bVar6 = 1;
      }
      uVar13 = (ulong)bVar1;
      if ((uVar11 >> 1 & 1) != 0) {
        iVar12 = *(int *)(param_2 + 1);
        iVar9 = *(int *)((long)param_2 + 0xc) + -2;
        local_138 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
        local_130 = iVar12;
        iStack_12c = iVar9;
        bVar7 = FUN_011c0ee0(&local_138,param_4);
        *(byte *)((ulong)&local_c8 | uVar13) = bVar7 & 1;
        bVar6 = bVar6 & bVar7 & 1;
        *(int *)(&local_120 + uVar13 * 2) = iVar12;
        *(int *)((long)&local_120 + uVar13 * 0x10 + 4) = iVar9;
        uVar13 = (ulong)(bVar1 + 1);
      }
      if ((uVar11 >> 2 & 1) != 0) {
        iVar12 = *(int *)(param_2 + 1);
        iVar9 = *(int *)((long)param_2 + 0xc) + -2;
        local_138 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
        local_130 = iVar12 + 2;
        iStack_12c = iVar9;
        bVar7 = FUN_011c0ee0(&local_138,param_4);
        *(byte *)((ulong)&local_c8 | uVar13) = bVar7 & 1;
        bVar6 = bVar6 & bVar7 & 1;
        *(int *)(&local_120 + uVar13 * 2) = iVar12 + 2;
        *(int *)((long)&local_120 + uVar13 * 0x10 + 4) = iVar9;
        uVar13 = (ulong)((int)uVar13 + 1);
      }
      if ((uVar11 >> 3 & 1) != 0) {
        iVar12 = *(int *)(param_2 + 1);
        iVar9 = *(int *)((long)param_2 + 0xc);
        local_138 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
        local_130 = iVar12 + -2;
        iStack_12c = iVar9;
        bVar7 = FUN_011c0ee0(&local_138,param_4);
        *(byte *)((ulong)&local_c8 | uVar13) = bVar7 & 1;
        bVar6 = bVar6 & bVar7 & 1;
        *(int *)(&local_120 + uVar13 * 2) = iVar12 + -2;
        *(int *)((long)&local_120 + uVar13 * 0x10 + 4) = iVar9;
        uVar13 = (ulong)((int)uVar13 + 1);
      }
      if ((param_7 & 1) != 0) {
        iVar12 = *(int *)(param_2 + 1);
        iVar9 = *(int *)((long)param_2 + 0xc);
        local_138 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
        local_130 = iVar12;
        iStack_12c = iVar9;
        bVar7 = FUN_011c0ee0(&local_138,param_4);
        *(byte *)((long)&local_c8 + uVar13) = bVar7 & 1;
        bVar6 = bVar6 & bVar7 & 1;
        *(int *)(&local_120 + uVar13 * 2) = iVar12;
        *(int *)((long)&local_120 + uVar13 * 0x10 + 4) = iVar9;
        uVar13 = (ulong)((int)uVar13 + 1);
      }
      if ((uVar11 >> 4 & 1) != 0) {
        ppuVar15 = &local_138;
        iVar9 = *(int *)((long)param_2 + 0xc);
        iVar12 = *(int *)(param_2 + 1) + 2;
        local_138 = PTR_DAT_04bb2010 + 0x10;
        local_130 = iVar12;
        iStack_12c = iVar9;
LAB_011c0890:
        bVar7 = FUN_011c0ee0(ppuVar15,param_4);
        *(byte *)((long)&local_c8 + uVar13) = bVar7 & 1;
        bVar6 = bVar6 & bVar7 & 1;
LAB_011c08ac:
        *(int *)(&local_120 + uVar13 * 2) = iVar12;
        *(int *)((long)&local_120 + uVar13 * 0x10 + 4) = iVar9;
      }
      break;
    case 1:
      bVar1 = (param_6 & 1) != 0;
      if (bVar1) {
        iVar12 = *(int *)(param_2 + 1);
        iVar9 = *(int *)((long)param_2 + 0xc) + -2;
        local_148 = PTR_DAT_04bb2010 + 0x10;
        local_140 = iVar12 + -2;
        iStack_13c = iVar9;
        bVar7 = FUN_011c0ee0(&local_148,param_4);
        bVar6 = bVar7 & 1;
        local_120 = (undefined *)CONCAT44(iVar9,iVar12 + -2);
        local_c8 = CONCAT71(local_c8._1_7_,bVar7) & 0xffffffffffffff01;
      }
      else {
        bVar6 = 1;
      }
      uVar13 = (ulong)bVar1;
      if (((param_6 & 0xff) >> 1 & 1) != 0) {
        iVar12 = *(int *)(param_2 + 1);
        iVar9 = *(int *)((long)param_2 + 0xc) + -2;
        local_148 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
        local_140 = iVar12;
        iStack_13c = iVar9;
        bVar7 = FUN_011c0ee0(&local_148,param_4);
        *(byte *)((ulong)&local_c8 | uVar13) = bVar7 & 1;
        bVar6 = bVar6 & bVar7 & 1;
        *(int *)(&local_120 + uVar13 * 2) = iVar12;
        *(int *)((long)&local_120 + uVar13 * 0x10 + 4) = iVar9;
        uVar13 = (ulong)(bVar1 + 1);
      }
      if (((param_6 & 0xff) >> 3 & 1) != 0) {
        iVar12 = *(int *)(param_2 + 1);
        iVar9 = *(int *)((long)param_2 + 0xc);
        local_148 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
        local_140 = iVar12 + -2;
        iStack_13c = iVar9;
        bVar7 = FUN_011c0ee0(&local_148,param_4);
        *(byte *)((ulong)&local_c8 | uVar13) = bVar7 & 1;
        bVar6 = bVar6 & bVar7 & 1;
        *(int *)(&local_120 + uVar13 * 2) = iVar12 + -2;
        *(int *)((long)&local_120 + uVar13 * 0x10 + 4) = iVar9;
        uVar13 = (ulong)((int)uVar13 + 1);
      }
      if ((param_7 & 1) != 0) {
        ppuVar15 = &local_148;
        iVar12 = *(int *)(param_2 + 1);
        iVar9 = *(int *)((long)param_2 + 0xc);
        local_148 = PTR_DAT_04bb2010 + 0x10;
        local_140 = iVar12;
        iStack_13c = iVar9;
LAB_011c0840:
        bVar7 = FUN_011c0ee0(ppuVar15,param_4);
        *(byte *)((ulong)&local_c8 | uVar13) = bVar7 & 1;
        bVar6 = bVar6 & bVar7 & 1;
        goto LAB_011c08ac;
      }
      break;
    case 2:
      uVar11 = param_6 & 0xff;
      bVar1 = (param_6 & 1) != 0;
      if (bVar1) {
        iVar12 = *(int *)(param_2 + 1);
        iVar9 = *(int *)((long)param_2 + 0xc) + -2;
        local_158 = PTR_DAT_04bb2010 + 0x10;
        local_150 = iVar12 + -2;
        iStack_14c = iVar9;
        bVar7 = FUN_011c0ee0(&local_158,param_4);
        bVar6 = bVar7 & 1;
        local_120 = (undefined *)CONCAT44(iVar9,iVar12 + -2);
        local_c8 = CONCAT71(local_c8._1_7_,bVar7) & 0xffffffffffffff01;
      }
      else {
        bVar6 = 1;
      }
      uVar13 = (ulong)bVar1;
      if ((uVar11 >> 1 & 1) != 0) {
        iVar12 = *(int *)(param_2 + 1);
        iVar9 = *(int *)((long)param_2 + 0xc) + -2;
        local_158 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
        local_150 = iVar12;
        iStack_14c = iVar9;
        bVar7 = FUN_011c0ee0(&local_158,param_4);
        *(byte *)((ulong)&local_c8 | uVar13) = bVar7 & 1;
        bVar6 = bVar6 & bVar7 & 1;
        *(int *)(&local_120 + uVar13 * 2) = iVar12;
        *(int *)((long)&local_120 + uVar13 * 0x10 + 4) = iVar9;
        uVar13 = (ulong)(bVar1 + 1);
      }
      if ((uVar11 >> 3 & 1) != 0) {
        iVar12 = *(int *)(param_2 + 1);
        iVar9 = *(int *)((long)param_2 + 0xc);
        local_158 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
        local_150 = iVar12 + -2;
        iStack_14c = iVar9;
        bVar7 = FUN_011c0ee0(&local_158,param_4);
        *(byte *)((ulong)&local_c8 | uVar13) = bVar7 & 1;
        bVar6 = bVar6 & bVar7 & 1;
        *(int *)(&local_120 + uVar13 * 2) = iVar12 + -2;
        *(int *)((long)&local_120 + uVar13 * 0x10 + 4) = iVar9;
        uVar13 = (ulong)((int)uVar13 + 1);
      }
      if ((param_7 & 1) != 0) {
        iVar12 = *(int *)(param_2 + 1);
        iVar9 = *(int *)((long)param_2 + 0xc);
        local_158 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
        local_150 = iVar12;
        iStack_14c = iVar9;
        bVar7 = FUN_011c0ee0(&local_158,param_4);
        *(byte *)((ulong)&local_c8 | uVar13) = bVar7 & 1;
        bVar6 = bVar6 & bVar7 & 1;
        *(int *)(&local_120 + uVar13 * 2) = iVar12;
        *(int *)((long)&local_120 + uVar13 * 0x10 + 4) = iVar9;
        uVar13 = (ulong)((int)uVar13 + 1);
      }
      if ((uVar11 >> 5 & 1) != 0) {
        iVar9 = *(int *)(param_2 + 1);
        iVar12 = *(int *)((long)param_2 + 0xc) + 2;
        local_158 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
        local_150 = iVar9 + -2;
        iStack_14c = iVar12;
        bVar7 = FUN_011c0ee0(&local_158,param_4);
        *(byte *)((long)&local_c8 + uVar13) = bVar7 & 1;
        bVar6 = bVar6 & bVar7 & 1;
        *(int *)(&local_120 + uVar13 * 2) = iVar9 + -2;
        *(int *)((long)&local_120 + uVar13 * 0x10 + 4) = iVar12;
        uVar13 = (ulong)((int)uVar13 + 1);
      }
      if ((uVar11 >> 6 & 1) != 0) {
        ppuVar15 = &local_158;
        iVar12 = *(int *)(param_2 + 1);
        iVar9 = *(int *)((long)param_2 + 0xc) + 2;
        local_158 = PTR_DAT_04bb2010 + 0x10;
        local_150 = iVar12;
        iStack_14c = iVar9;
        goto LAB_011c0890;
      }
      break;
    case 3:
      bVar1 = (param_6 >> 3 & 1) != 0;
      if (bVar1) {
        iVar12 = *(int *)(param_2 + 1);
        iVar9 = *(int *)((long)param_2 + 0xc);
        local_168 = PTR_DAT_04bb2010 + 0x10;
        local_160 = iVar12 + -2;
        iStack_15c = iVar9;
        bVar7 = FUN_011c0ee0(&local_168,param_4);
        bVar6 = bVar7 & 1;
        local_120 = (undefined *)CONCAT44(iVar9,iVar12 + -2);
        local_c8 = CONCAT71(local_c8._1_7_,bVar7) & 0xffffffffffffff01;
      }
      else {
        bVar6 = 1;
      }
      uVar13 = (ulong)bVar1;
      if ((param_7 & 1) != 0) {
        iVar12 = *(int *)(param_2 + 1);
        iVar9 = *(int *)((long)param_2 + 0xc);
        local_168 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
        local_160 = iVar12;
        iStack_15c = iVar9;
        bVar7 = FUN_011c0ee0(&local_168,param_4);
        *(byte *)((ulong)&local_c8 | uVar13) = bVar7 & 1;
        bVar6 = bVar6 & bVar7 & 1;
        *(int *)(&local_120 + uVar13 * 2) = iVar12;
        *(int *)((long)&local_120 + uVar13 * 0x10 + 4) = iVar9;
        uVar13 = (ulong)(bVar1 + 1);
      }
      if (((param_6 & 0xff) >> 5 & 1) != 0) {
        iVar9 = *(int *)(param_2 + 1);
        iVar12 = *(int *)((long)param_2 + 0xc) + 2;
        local_168 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
        local_160 = iVar9 + -2;
        iStack_15c = iVar12;
        bVar7 = FUN_011c0ee0(&local_168,param_4);
        *(byte *)((ulong)&local_c8 | uVar13) = bVar7 & 1;
        bVar6 = bVar6 & bVar7 & 1;
        *(int *)(&local_120 + uVar13 * 2) = iVar9 + -2;
        *(int *)((long)&local_120 + uVar13 * 0x10 + 4) = iVar12;
        uVar13 = (ulong)((int)uVar13 + 1);
      }
      if (((param_6 & 0xff) >> 6 & 1) != 0) {
        ppuVar15 = &local_168;
        iVar12 = *(int *)(param_2 + 1);
        iVar9 = *(int *)((long)param_2 + 0xc) + 2;
        local_168 = PTR_DAT_04bb2010 + 0x10;
        local_160 = iVar12;
        iStack_15c = iVar9;
        goto LAB_011c0840;
      }
      break;
    case 4:
      uVar11 = param_6 & 0xff;
      bVar1 = (param_6 >> 3 & 1) != 0;
      if (bVar1) {
        iVar12 = *(int *)(param_2 + 1);
        iVar9 = *(int *)((long)param_2 + 0xc);
        local_178 = PTR_DAT_04bb2010 + 0x10;
        local_170 = iVar12 + -2;
        iStack_16c = iVar9;
        bVar7 = FUN_011c0ee0(&local_178,param_4);
        bVar6 = bVar7 & 1;
        local_120 = (undefined *)CONCAT44(iVar9,iVar12 + -2);
        local_c8 = CONCAT71(local_c8._1_7_,bVar7) & 0xffffffffffffff01;
      }
      else {
        bVar6 = 1;
      }
      uVar13 = (ulong)bVar1;
      if ((param_7 & 1) != 0) {
        iVar12 = *(int *)(param_2 + 1);
        iVar9 = *(int *)((long)param_2 + 0xc);
        local_178 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
        local_170 = iVar12;
        iStack_16c = iVar9;
        bVar7 = FUN_011c0ee0(&local_178,param_4);
        *(byte *)((ulong)&local_c8 | uVar13) = bVar7 & 1;
        bVar6 = bVar6 & bVar7 & 1;
        *(int *)(&local_120 + uVar13 * 2) = iVar12;
        *(int *)((long)&local_120 + uVar13 * 0x10 + 4) = iVar9;
        uVar13 = (ulong)(bVar1 + 1);
      }
      if ((uVar11 >> 4 & 1) != 0) {
        iVar12 = *(int *)(param_2 + 1);
        iVar9 = *(int *)((long)param_2 + 0xc);
        local_178 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
        local_170 = iVar12 + 2;
        iStack_16c = iVar9;
        bVar7 = FUN_011c0ee0(&local_178,param_4);
        *(byte *)((ulong)&local_c8 | uVar13) = bVar7 & 1;
        bVar6 = bVar6 & bVar7 & 1;
        *(int *)(&local_120 + uVar13 * 2) = iVar12 + 2;
        *(int *)((long)&local_120 + uVar13 * 0x10 + 4) = iVar9;
        uVar13 = (ulong)((int)uVar13 + 1);
      }
      if ((uVar11 >> 5 & 1) != 0) {
        iVar9 = *(int *)(param_2 + 1);
        iVar12 = *(int *)((long)param_2 + 0xc) + 2;
        local_178 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
        local_170 = iVar9 + -2;
        iStack_16c = iVar12;
        bVar7 = FUN_011c0ee0(&local_178,param_4);
        *(byte *)((ulong)&local_c8 | uVar13) = bVar7 & 1;
        bVar6 = bVar6 & bVar7 & 1;
        *(int *)(&local_120 + uVar13 * 2) = iVar9 + -2;
        *(int *)((long)&local_120 + uVar13 * 0x10 + 4) = iVar12;
        uVar13 = (ulong)((int)uVar13 + 1);
      }
      if ((uVar11 >> 6 & 1) != 0) {
        iVar9 = *(int *)(param_2 + 1);
        iVar12 = *(int *)((long)param_2 + 0xc) + 2;
        local_178 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
        local_170 = iVar9;
        iStack_16c = iVar12;
        bVar7 = FUN_011c0ee0(&local_178,param_4);
        *(byte *)((long)&local_c8 + uVar13) = bVar7 & 1;
        bVar6 = bVar6 & bVar7 & 1;
        *(int *)(&local_120 + uVar13 * 2) = iVar9;
        *(int *)((long)&local_120 + uVar13 * 0x10 + 4) = iVar12;
        uVar13 = (ulong)((int)uVar13 + 1);
      }
      if ((param_6 >> 7 & 1) != 0) {
        ppuVar15 = &local_178;
        iVar12 = *(int *)(param_2 + 1) + 2;
        iVar9 = *(int *)((long)param_2 + 0xc) + 2;
        local_178 = PTR_DAT_04bb2010 + 0x10;
        local_170 = iVar12;
        iStack_16c = iVar9;
        goto LAB_011c0890;
      }
      break;
    case 5:
      bVar1 = (param_7 & 1) == 0;
      if (bVar1) {
        bVar6 = 1;
      }
      else {
        local_180 = *(int *)(param_2 + 1);
        iStack_17c = *(int *)((long)param_2 + 0xc);
        puVar5 = param_2[1];
        local_188 = PTR_DAT_04bb2010 + 0x10;
        bVar7 = FUN_011c0ee0(&local_188,param_4);
        bVar6 = bVar7 & 1;
        local_c8 = CONCAT71(local_c8._1_7_,bVar7) & 0xffffffffffffff01;
        local_120 = puVar5;
      }
      uVar8 = !bVar1;
      uVar13 = (ulong)(byte)uVar8;
      if ((param_6 >> 4 & 1) != 0) {
        iVar12 = *(int *)(param_2 + 1);
        iVar9 = *(int *)((long)param_2 + 0xc);
        local_188 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
        local_180 = iVar12 + 2;
        iStack_17c = iVar9;
        bVar7 = FUN_011c0ee0(&local_188,param_4);
        *(byte *)((ulong)&local_c8 | uVar13) = bVar7 & 1;
        bVar6 = bVar6 & bVar7 & 1;
        *(int *)(&local_120 + uVar13 * 2) = iVar12 + 2;
        *(int *)((long)&local_120 + uVar13 * 0x10 + 4) = iVar9;
        uVar13 = (ulong)((byte)uVar8 + 1);
      }
      if (((param_6 & 0xff) >> 6 & 1) != 0) {
        iVar9 = *(int *)(param_2 + 1);
        iVar12 = *(int *)((long)param_2 + 0xc) + 2;
        local_188 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
        local_180 = iVar9;
        iStack_17c = iVar12;
        bVar7 = FUN_011c0ee0(&local_188,param_4);
        *(byte *)((ulong)&local_c8 | uVar13) = bVar7 & 1;
        bVar6 = bVar6 & bVar7 & 1;
        *(int *)(&local_120 + uVar13 * 2) = iVar9;
        *(int *)((long)&local_120 + uVar13 * 0x10 + 4) = iVar12;
        uVar13 = (ulong)((int)uVar13 + 1);
      }
      if ((param_6 >> 7 & 1) != 0) {
        ppuVar15 = &local_188;
        iVar12 = *(int *)(param_2 + 1) + 2;
        iVar9 = *(int *)((long)param_2 + 0xc) + 2;
        local_188 = PTR_DAT_04bb2010 + 0x10;
        local_180 = iVar12;
        iStack_17c = iVar9;
        goto LAB_011c0840;
      }
      break;
    case 6:
      uVar11 = param_6 & 0xff;
      bVar1 = (param_6 >> 1 & 1) != 0;
      if (bVar1) {
        iVar12 = *(int *)(param_2 + 1);
        iVar9 = *(int *)((long)param_2 + 0xc) + -2;
        local_198 = PTR_DAT_04bb2010 + 0x10;
        local_190 = iVar12;
        iStack_18c = iVar9;
        bVar7 = FUN_011c0ee0(&local_198,param_4);
        bVar6 = bVar7 & 1;
        local_120 = (undefined *)CONCAT44(iVar9,iVar12);
        local_c8 = CONCAT71(local_c8._1_7_,bVar7) & 0xffffffffffffff01;
      }
      else {
        bVar6 = 1;
      }
      uVar13 = (ulong)bVar1;
      if ((uVar11 >> 2 & 1) != 0) {
        iVar12 = *(int *)(param_2 + 1);
        iVar9 = *(int *)((long)param_2 + 0xc) + -2;
        local_198 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
        local_190 = iVar12 + 2;
        iStack_18c = iVar9;
        bVar7 = FUN_011c0ee0(&local_198,param_4);
        *(byte *)((ulong)&local_c8 | uVar13) = bVar7 & 1;
        bVar6 = bVar6 & bVar7 & 1;
        *(int *)(&local_120 + uVar13 * 2) = iVar12 + 2;
        *(int *)((long)&local_120 + uVar13 * 0x10 + 4) = iVar9;
        uVar13 = (ulong)(bVar1 + 1);
      }
      if ((param_7 & 1) != 0) {
        iVar12 = *(int *)(param_2 + 1);
        iVar9 = *(int *)((long)param_2 + 0xc);
        local_198 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
        local_190 = iVar12;
        iStack_18c = iVar9;
        bVar7 = FUN_011c0ee0(&local_198,param_4);
        *(byte *)((ulong)&local_c8 | uVar13) = bVar7 & 1;
        bVar6 = bVar6 & bVar7 & 1;
        *(int *)(&local_120 + uVar13 * 2) = iVar12;
        *(int *)((long)&local_120 + uVar13 * 0x10 + 4) = iVar9;
        uVar13 = (ulong)((int)uVar13 + 1);
      }
      if ((uVar11 >> 4 & 1) != 0) {
        iVar12 = *(int *)(param_2 + 1);
        iVar9 = *(int *)((long)param_2 + 0xc);
        local_198 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
        local_190 = iVar12 + 2;
        iStack_18c = iVar9;
        bVar7 = FUN_011c0ee0(&local_198,param_4);
        *(byte *)((ulong)&local_c8 | uVar13) = bVar7 & 1;
        bVar6 = bVar6 & bVar7 & 1;
        *(int *)(&local_120 + uVar13 * 2) = iVar12 + 2;
        *(int *)((long)&local_120 + uVar13 * 0x10 + 4) = iVar9;
        uVar13 = (ulong)((int)uVar13 + 1);
      }
      if ((uVar11 >> 6 & 1) != 0) {
        iVar9 = *(int *)(param_2 + 1);
        iVar12 = *(int *)((long)param_2 + 0xc) + 2;
        local_198 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
        local_190 = iVar9;
        iStack_18c = iVar12;
        bVar7 = FUN_011c0ee0(&local_198,param_4);
        *(byte *)((long)&local_c8 + uVar13) = bVar7 & 1;
        bVar6 = bVar6 & bVar7 & 1;
        *(int *)(&local_120 + uVar13 * 2) = iVar9;
        *(int *)((long)&local_120 + uVar13 * 0x10 + 4) = iVar12;
        uVar13 = (ulong)((int)uVar13 + 1);
      }
      if ((param_6 >> 7 & 1) != 0) {
        ppuVar15 = &local_198;
        iVar12 = *(int *)(param_2 + 1) + 2;
        iVar9 = *(int *)((long)param_2 + 0xc) + 2;
        local_198 = PTR_DAT_04bb2010 + 0x10;
        local_190 = iVar12;
        iStack_18c = iVar9;
        goto LAB_011c0890;
      }
      break;
    case 7:
      bVar1 = (param_6 >> 1 & 1) != 0;
      if (bVar1) {
        iVar12 = *(int *)(param_2 + 1);
        iVar9 = *(int *)((long)param_2 + 0xc) + -2;
        local_1a8 = PTR_DAT_04bb2010 + 0x10;
        local_1a0 = iVar12;
        iStack_19c = iVar9;
        bVar7 = FUN_011c0ee0(&local_1a8,param_4);
        bVar6 = bVar7 & 1;
        local_120 = (undefined *)CONCAT44(iVar9,iVar12);
        local_c8 = CONCAT71(local_c8._1_7_,bVar7) & 0xffffffffffffff01;
      }
      else {
        bVar6 = 1;
      }
      uVar13 = (ulong)bVar1;
      if (((param_6 & 0xff) >> 2 & 1) != 0) {
        iVar12 = *(int *)(param_2 + 1);
        iVar9 = *(int *)((long)param_2 + 0xc) + -2;
        local_1a8 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
        local_1a0 = iVar12 + 2;
        iStack_19c = iVar9;
        bVar7 = FUN_011c0ee0(&local_1a8,param_4);
        *(byte *)((ulong)&local_c8 | uVar13) = bVar7 & 1;
        bVar6 = bVar6 & bVar7 & 1;
        *(int *)(&local_120 + uVar13 * 2) = iVar12 + 2;
        *(int *)((long)&local_120 + uVar13 * 0x10 + 4) = iVar9;
        uVar13 = (ulong)(bVar1 + 1);
      }
      if ((param_7 & 1) != 0) {
        iVar12 = *(int *)(param_2 + 1);
        iVar9 = *(int *)((long)param_2 + 0xc);
        local_1a8 = (undefined *)((long)PTR_DAT_04bb2010 + 0x10);
        local_1a0 = iVar12;
        iStack_19c = iVar9;
        bVar7 = FUN_011c0ee0(&local_1a8,param_4);
        *(byte *)((ulong)&local_c8 | uVar13) = bVar7 & 1;
        bVar6 = bVar6 & bVar7 & 1;
        *(int *)(&local_120 + uVar13 * 2) = iVar12;
        *(int *)((long)&local_120 + uVar13 * 0x10 + 4) = iVar9;
        uVar13 = (ulong)((int)uVar13 + 1);
      }
      if (((param_6 & 0xff) >> 4 & 1) != 0) {
        ppuVar15 = &local_1a8;
        iVar9 = *(int *)((long)param_2 + 0xc);
        iVar12 = *(int *)(param_2 + 1) + 2;
        local_1a8 = PTR_DAT_04bb2010 + 0x10;
        local_1a0 = iVar12;
        iStack_19c = iVar9;
        goto LAB_011c0840;
      }
      break;
    default:
      bVar6 = 1;
    }
    bVar6 = bVar6 != 0;
  }
  else if (param_3 == 0) {
    local_1c0 = *(undefined4 *)(param_2 + 1);
    uStack_1bc = *(undefined4 *)((long)param_2 + 0xc);
    local_1c8 = PTR_DAT_04bb2010 + 0x10;
    bVar6 = FUN_011c0ee0(&local_1c8,param_4);
  }
  else if (param_3 == 2) {
    lVar19 = 0;
    uVar11 = param_6 & 0xff;
    bVar6 = 1;
    puVar5 = PTR_DAT_04bb2010 + 0x10;
    puVar2 = PTR_DAT_04bb6268 + 0x10;
    puVar3 = PTR_DAT_04bbc5d8 + 0x10;
    puVar4 = PTR_DAT_04bb2018 + 0x10;
    iVar12 = -2;
    do {
      uVar10 = param_6;
      if (iVar12 == -2) {
joined_r0x011bf3b0:
        if ((uVar10 & 1) == 0) {
          if (iVar12 != 0) goto LAB_011bf354;
LAB_011bf67c:
          if ((param_7 & 1) == 0) goto LAB_011bf950;
LAB_011bf684:
          local_1b0 = *(int *)(param_2 + 1);
          iStack_1ac = *(int *)((long)param_2 + 0xc) + iVar12;
          if (DAT_055c1b60 != &DAT_055c1b58) {
            uVar10 = 0;
            puVar20 = DAT_055c1b60;
            do {
              if (*(int *)(puVar20 + -1) == 0x6622bd46) goto LAB_011bf6d4;
              puVar20 = (undefined8 *)puVar20[1];
              uVar10 = uVar10 + 1;
            } while (puVar20 != &DAT_055c1b58);
          }
          uVar10 = 0xffff;
LAB_011bf6d4:
          local_1b8 = puVar5;
          if ((uVar10 & 0xffff) == (param_4 & 0xffff)) {
            uVar17 = 0;
          }
          else {
            uVar13 = FUN_0122a4e0(param_4);
            uVar17 = 1;
            if ((uVar13 & 1) == 0) {
              uVar17 = 2;
            }
          }
          bVar7 = FUN_0122a7f0(&local_1b8,uVar17);
          if ((uint)*(ushort *)PTR_DAT_04bb6298 == (param_4 & 0xffff)) {
            local_98 = (undefined *)((ulong)local_98 & 0xffffffff00000000);
            lVar18 = *(long *)PTR_DAT_04bb2720;
            if ((lVar18 == 0) || (*(long *)(lVar18 + 0x330) == 0)) {
              puVar20 = &DAT_055c04a0;
            }
            else {
              puVar20 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
              iVar9 = FUN_006bd550(*puVar20,0);
              puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
              if (iVar9 != 0x758f7eaf) {
                puVar20 = &DAT_055c04a0;
              }
            }
            local_98 = (undefined *)CONCAT44(*(undefined4 *)(puVar20 + 7),(undefined4)local_98);
            uVar8 = FUN_017baf44();
            local_90 = CONCAT31(local_90._1_3_,uVar8) & 0xffffff01;
            local_a0 = puVar2;
            puVar14 = (undefined4 *)FUN_01a5190c(&local_a0,0,&local_1b8,0);
            local_1d4 = *puVar14;
            local_1d0 = puVar14[1];
            lVar18 = *(long *)PTR_DAT_04bbbc68;
            if ((((lVar18 != 0) && (*(long *)(lVar18 + 0xb0) != 0)) &&
                (*(long *)(*(long *)(lVar18 + 0xb0) + 8) != 0)) &&
               (((*(long *)(lVar18 + 0x488) != 0 && (*(long *)(*(long *)(lVar18 + 0x488) + 8) != 0))
                && ((*(long *)(lVar18 + 0x2b0) != 0 &&
                    (*(long *)(*(long *)(lVar18 + 0x2b0) + 8) != 0)))))) {
              uVar10 = FUN_0277d6c4(&local_1d4);
              uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
              if ((uVar10 < *(uint *)(lVar18 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                FUN_0124c030(&local_b8,&local_1d4);
                iVar9 = FUN_0123db50(&local_b0,local_a8);
                if (iVar9 == 0x2d) goto LAB_011bf920;
              }
            }
            if (*(char *)(*(long *)PTR_DAT_04bb4910 + 0x88) == '\0') {
              fVar22 = (float)local_1b0 * 0.5;
              local_90 = 0;
              if (fVar22 != (float)(int)fVar22) {
                local_90 = (uint)(fVar22 < 0.0);
              }
              local_90 = (int)fVar22 - local_90;
              fVar22 = (float)iStack_1ac * 0.5;
              uVar10 = 0;
              if (fVar22 != (float)(int)fVar22) {
                uVar10 = (uint)(fVar22 < 0.0);
              }
              iStack_8c = (int)fVar22 - uVar10;
              local_a0 = puVar3;
              local_98 = puVar4;
              local_88 = puVar4;
              local_80 = local_90;
              iStack_7c = iStack_8c;
              FUN_036833e0(*(long *)PTR_DAT_04bb4910,&local_a0);
            }
            FUN_011dbc54(&local_1b8,0);
          }
LAB_011bf920:
          bVar6 = bVar6 & bVar7 & 1;
          *(byte *)((long)&local_c8 + lVar19 + 1) = bVar7 & 1;
        }
        else {
          local_1b0 = *(int *)(param_2 + 1) + -2;
          iStack_1ac = *(int *)((long)param_2 + 0xc) + iVar12;
          local_1b8 = PTR_DAT_04bb2010 + 0x10;
          if (DAT_055c1b60 != &DAT_055c1b58) {
            uVar10 = 0;
            puVar20 = DAT_055c1b60;
            do {
              if (*(int *)(puVar20 + -1) == 0x6622bd46) goto LAB_011bf414;
              puVar20 = (undefined8 *)puVar20[1];
              uVar10 = uVar10 + 1;
            } while (puVar20 != &DAT_055c1b58);
          }
          uVar10 = 0xffff;
LAB_011bf414:
          if ((uVar10 & 0xffff) == (param_4 & 0xffff)) {
            uVar17 = 0;
          }
          else {
            uVar13 = FUN_0122a4e0(param_4);
            uVar17 = 1;
            if ((uVar13 & 1) == 0) {
              uVar17 = 2;
            }
          }
          bVar7 = FUN_0122a7f0(&local_1b8,uVar17);
          if ((uint)*(ushort *)PTR_DAT_04bb6298 == (param_4 & 0xffff)) {
            local_98 = (undefined *)((ulong)local_98 & 0xffffffff00000000);
            lVar18 = *(long *)PTR_DAT_04bb2720;
            if ((lVar18 == 0) || (*(long *)(lVar18 + 0x330) == 0)) {
              puVar20 = &DAT_055c04a0;
            }
            else {
              puVar20 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
              iVar9 = FUN_006bd550(*puVar20,0);
              puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
              if (iVar9 != 0x758f7eaf) {
                puVar20 = &DAT_055c04a0;
              }
            }
            local_98 = (undefined *)CONCAT44(*(undefined4 *)(puVar20 + 7),(undefined4)local_98);
            uVar8 = FUN_017baf44();
            local_90 = CONCAT31(local_90._1_3_,uVar8) & 0xffffff01;
            local_a0 = PTR_DAT_04bb6268 + 0x10;
            puVar14 = (undefined4 *)FUN_01a5190c(&local_a0,0,&local_1b8,0);
            local_1d4 = *puVar14;
            local_1d0 = puVar14[1];
            lVar18 = *(long *)PTR_DAT_04bbbc68;
            if (((((lVar18 != 0) && (*(long *)(lVar18 + 0xb0) != 0)) &&
                 (*(long *)(*(long *)(lVar18 + 0xb0) + 8) != 0)) &&
                ((*(long *)(lVar18 + 0x488) != 0 && (*(long *)(*(long *)(lVar18 + 0x488) + 8) != 0))
                )) && ((*(long *)(lVar18 + 0x2b0) != 0 &&
                       (*(long *)(*(long *)(lVar18 + 0x2b0) + 8) != 0)))) {
              uVar10 = FUN_0277d6c4(&local_1d4);
              uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
              if ((uVar10 < *(uint *)(lVar18 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                FUN_0124c030(&local_b8,&local_1d4);
                iVar9 = FUN_0123db50(&local_b0,local_a8);
                if (iVar9 == 0x2d) goto LAB_011bf668;
              }
            }
            if (*(char *)(*(long *)PTR_DAT_04bb4910 + 0x88) == '\0') {
              fVar22 = (float)local_1b0 * 0.5;
              local_90 = 0;
              if (fVar22 != (float)(int)fVar22) {
                local_90 = (uint)(fVar22 < 0.0);
              }
              local_90 = (int)fVar22 - local_90;
              local_a0 = PTR_DAT_04bbc5d8 + 0x10;
              local_98 = PTR_DAT_04bb2018 + 0x10;
              fVar22 = (float)iStack_1ac * 0.5;
              uVar10 = 0;
              if (fVar22 != (float)(int)fVar22) {
                uVar10 = (uint)(fVar22 < 0.0);
              }
              iStack_8c = (int)fVar22 - uVar10;
              local_88 = local_98;
              local_80 = local_90;
              iStack_7c = iStack_8c;
              FUN_036833e0(*(long *)PTR_DAT_04bb4910,&local_a0);
            }
            FUN_011dbc54(&local_1b8,0);
          }
LAB_011bf668:
          bVar6 = bVar6 & bVar7 & 1;
          *(byte *)((long)&local_c8 + lVar19) = bVar7 & 1;
          if (iVar12 == 0) goto LAB_011bf67c;
LAB_011bf354:
          if (iVar12 == -2) {
            uVar10 = uVar11 >> 1;
          }
          else {
            if (iVar12 != 2) goto LAB_011bf950;
            uVar10 = uVar11 >> 6;
          }
          if ((uVar10 & 1) != 0) goto LAB_011bf684;
        }
        if (iVar12 != -2) goto LAB_011bf950;
        uVar10 = uVar11 >> 2;
joined_r0x011bf978:
        uVar10 = uVar10 & 1;
joined_r0x011bf964:
        if (uVar10 != 0) {
          local_1b0 = *(int *)(param_2 + 1) + 2;
          iStack_1ac = *(int *)((long)param_2 + 0xc) + iVar12;
          local_1b8 = PTR_DAT_04bb2010 + 0x10;
          if (DAT_055c1b60 != &DAT_055c1b58) {
            uVar10 = 0;
            puVar20 = DAT_055c1b60;
            do {
              if (*(int *)(puVar20 + -1) == 0x6622bd46) goto LAB_011bf9d4;
              puVar20 = (undefined8 *)puVar20[1];
              uVar10 = uVar10 + 1;
            } while (puVar20 != &DAT_055c1b58);
          }
          uVar10 = 0xffff;
LAB_011bf9d4:
          if ((uVar10 & 0xffff) == (param_4 & 0xffff)) {
            uVar17 = 0;
          }
          else {
            uVar13 = FUN_0122a4e0(param_4);
            uVar17 = 1;
            if ((uVar13 & 1) == 0) {
              uVar17 = 2;
            }
          }
          bVar7 = FUN_0122a7f0(&local_1b8,uVar17);
          if ((uint)*(ushort *)PTR_DAT_04bb6298 == (param_4 & 0xffff)) {
            local_98 = (undefined *)((ulong)local_98 & 0xffffffff00000000);
            lVar18 = *(long *)PTR_DAT_04bb2720;
            if ((lVar18 == 0) || (*(long *)(lVar18 + 0x330) == 0)) {
              puVar20 = &DAT_055c04a0;
            }
            else {
              puVar20 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
              iVar9 = FUN_006bd550(*puVar20,0);
              puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
              if (iVar9 != 0x758f7eaf) {
                puVar20 = &DAT_055c04a0;
              }
            }
            local_98 = (undefined *)CONCAT44(*(undefined4 *)(puVar20 + 7),(undefined4)local_98);
            uVar8 = FUN_017baf44();
            local_90 = CONCAT31(local_90._1_3_,uVar8) & 0xffffff01;
            local_a0 = PTR_DAT_04bb6268 + 0x10;
            puVar14 = (undefined4 *)FUN_01a5190c(&local_a0,0,&local_1b8,0);
            local_1d4 = *puVar14;
            local_1d0 = puVar14[1];
            lVar18 = *(long *)PTR_DAT_04bbbc68;
            if ((((lVar18 != 0) && (*(long *)(lVar18 + 0xb0) != 0)) &&
                (*(long *)(*(long *)(lVar18 + 0xb0) + 8) != 0)) &&
               (((*(long *)(lVar18 + 0x488) != 0 && (*(long *)(*(long *)(lVar18 + 0x488) + 8) != 0))
                && ((*(long *)(lVar18 + 0x2b0) != 0 &&
                    (*(long *)(*(long *)(lVar18 + 0x2b0) + 8) != 0)))))) {
              uVar10 = FUN_0277d6c4(&local_1d4);
              uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
              if ((uVar10 < *(uint *)(lVar18 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                FUN_0124c030(&local_b8,&local_1d4);
                iVar9 = FUN_0123db50(&local_b0,local_a8);
                if (iVar9 == 0x2d) goto LAB_011bf31c;
              }
            }
            if (*(char *)(*(long *)PTR_DAT_04bb4910 + 0x88) == '\0') {
              fVar22 = (float)local_1b0 * 0.5;
              local_90 = 0;
              if (fVar22 != (float)(int)fVar22) {
                local_90 = (uint)(fVar22 < 0.0);
              }
              local_90 = (int)fVar22 - local_90;
              local_a0 = PTR_DAT_04bbc5d8 + 0x10;
              local_98 = PTR_DAT_04bb2018 + 0x10;
              fVar22 = (float)iStack_1ac * 0.5;
              uVar10 = 0;
              if (fVar22 != (float)(int)fVar22) {
                uVar10 = (uint)(fVar22 < 0.0);
              }
              iStack_8c = (int)fVar22 - uVar10;
              local_88 = local_98;
              local_80 = local_90;
              iStack_7c = iStack_8c;
              FUN_036833e0(*(long *)PTR_DAT_04bb4910,&local_a0);
            }
            FUN_011dbc54(&local_1b8,0);
          }
LAB_011bf31c:
          bVar6 = bVar6 & bVar7 & 1;
          *(byte *)((long)&local_c8 + lVar19 + 2) = bVar7 & 1;
        }
      }
      else {
        if (iVar12 == 0) {
          uVar10 = uVar11 >> 3;
          goto joined_r0x011bf3b0;
        }
        if (iVar12 == 2) {
          uVar10 = uVar11 >> 5;
          goto joined_r0x011bf3b0;
        }
LAB_011bf950:
        if (iVar12 == 0) {
          uVar10 = uVar11 >> 4;
          goto joined_r0x011bf978;
        }
        if (iVar12 == 2) {
          uVar10 = uVar11 >> 7;
          goto joined_r0x011bf964;
        }
      }
      lVar19 = lVar19 + 3;
      bVar1 = iVar12 < 1;
      iVar12 = iVar12 + 2;
    } while (bVar1);
  }
  else {
    bVar6 = 1;
  }
  bVar7 = *param_1;
  local_1cc = bVar7;
  if (7 < bVar7) {
    local_1cc = 0xff;
  }
  local_1d4 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_1d0 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_1cb = bVar6 & 1;
  if (bVar7 < 8) {
    uVar11 = FUN_02582d8c(&local_1cc,1);
    if ((((uVar11 < 8) &&
         (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar11 * 0x13f0 + 0x13d4) != '\0')) &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar11 * 0x13f0 + 0x13d6) != '\0')) &&
       (local_1cb == 0)) {
      FUN_02556920(&local_a0,&local_1cc,1);
    }
  }
  if (((*param_1 < 8) && (uVar11 = FUN_02582d8c(param_1,1), uVar11 < 8)) &&
     ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar11 * 0x13f0 + 0x13d4) != '\0' &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar11 * 0x13f0 + 0x13d6) != '\0' &&
       (bVar6 & 1) == 0)))) {
    local_98 = (undefined *)((ulong)local_98 & 0xffffffff00000000);
    lVar19 = *(long *)PTR_DAT_04bb2720;
    if (lVar19 == 0) {
      puVar20 = &DAT_055c04a0;
    }
    else {
      puVar20 = &DAT_055c04a0;
      if (*(long *)(lVar19 + 0x330) != 0) {
        puVar20 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
        iVar12 = FUN_006bd550(*puVar20,0);
        puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar12 != 0x758f7eaf) {
          puVar20 = &DAT_055c04a0;
        }
      }
    }
    local_98 = (undefined *)CONCAT44(*(undefined4 *)(puVar20 + 7),(undefined4)local_98);
    uVar8 = FUN_017baf44();
    local_90 = CONCAT31(local_90._1_3_,uVar8) & 0xffffff01;
    local_a0 = PTR_DAT_04bb6268 + 0x10;
    if (param_3 == 2) {
      uVar11 = param_6 & 0xff;
      pcVar21 = (char *)((ulong)&local_c8 | 2);
      puVar5 = PTR_DAT_04bb2010 + 0x10;
      iVar12 = -2;
      do {
        if (pcVar21[-2] == '\0') {
          uVar10 = param_6;
          if (iVar12 != -2) {
            if (iVar12 == 0) {
              uVar10 = uVar11 >> 3;
            }
            else {
              if (iVar12 != 2) goto LAB_011c0bc0;
              uVar10 = uVar11 >> 5;
            }
          }
          if ((uVar10 & 1) != 0) {
            local_b0 = *(int *)(param_2 + 1) + -2;
            local_ac = iVar12 + *(int *)((long)param_2 + 0xc);
            local_b8 = puVar5;
            puVar16 = (undefined2 *)FUN_01a5190c(&local_a0,0,&local_b8,0);
            local_1dc = *puVar16;
            local_1da = *(undefined1 *)(puVar16 + 1);
            local_1d9 = *(undefined1 *)((long)puVar16 + 3);
            local_1d8 = *(undefined4 *)(puVar16 + 2);
            FUN_011c11b0(param_1,&local_1dc);
          }
        }
LAB_011c0bc0:
        if (pcVar21[-1] == '\0') {
          local_b0 = *(int *)(param_2 + 1);
          local_b8 = PTR_DAT_04bb2010 + 0x10;
          if (iVar12 == -2) {
            uVar10 = uVar11 >> 1;
          }
          else {
            uVar10 = param_7;
            if (iVar12 != 0) {
              if (iVar12 != 2) goto LAB_011c0c60;
              uVar10 = uVar11 >> 6;
            }
          }
          if ((uVar10 & 1) != 0) {
            local_ac = iVar12 + *(int *)((long)param_2 + 0xc);
            puVar16 = (undefined2 *)FUN_01a5190c(&local_a0,0,&local_b8,0);
            local_1dc = *puVar16;
            local_1da = *(undefined1 *)(puVar16 + 1);
            local_1d9 = *(undefined1 *)((long)puVar16 + 3);
            local_1d8 = *(undefined4 *)(puVar16 + 2);
            FUN_011c11b0(param_1,&local_1dc);
          }
        }
LAB_011c0c60:
        if (*pcVar21 == '\0') {
          local_b8 = PTR_DAT_04bb2010 + 0x10;
          if (iVar12 == -2) {
            uVar10 = uVar11 >> 2 & 1;
          }
          else if (iVar12 == 0) {
            uVar10 = uVar11 >> 4 & 1;
          }
          else {
            if (iVar12 != 2) goto LAB_011c0b10;
            uVar10 = uVar11 >> 7;
          }
          if (uVar10 != 0) {
            local_b0 = *(int *)(param_2 + 1) + 2;
            local_ac = iVar12 + *(int *)((long)param_2 + 0xc);
            puVar16 = (undefined2 *)FUN_01a5190c(&local_a0,0,&local_b8,0);
            local_1dc = *puVar16;
            local_1da = *(undefined1 *)(puVar16 + 1);
            local_1d9 = *(undefined1 *)((long)puVar16 + 3);
            local_1d8 = *(undefined4 *)(puVar16 + 2);
            FUN_011c11b0(param_1,&local_1dc);
          }
        }
LAB_011c0b10:
        pcVar21 = pcVar21 + 3;
        bVar1 = iVar12 < 1;
        iVar12 = iVar12 + 2;
      } while (bVar1);
    }
    else {
      if (param_3 == 1) {
        if (((int)local_120 != -1) && ((char)local_c8 == '\0')) {
          puVar20 = (undefined8 *)FUN_01a5190c(&local_a0,0,&local_128,0);
          local_b8 = (undefined *)*puVar20;
          FUN_011c11b0(param_1,&local_b8);
        }
        if (((int)local_110 != -1) && (local_c8._1_1_ == '\0')) {
          puVar20 = (undefined8 *)FUN_01a5190c(&local_a0,0,&local_118,0);
          local_b8 = (undefined *)*puVar20;
          FUN_011c11b0(param_1,&local_b8);
        }
        if (((int)local_100 != -1) && (local_c8._2_1_ == '\0')) {
          puVar20 = (undefined8 *)FUN_01a5190c(&local_a0,0,&local_108,0);
          local_b8 = (undefined *)*puVar20;
          FUN_011c11b0(param_1,&local_b8);
        }
        if (((int)local_f0 != -1) && (local_c8._3_1_ == '\0')) {
          puVar20 = (undefined8 *)FUN_01a5190c(&local_a0,0,&local_f8,0);
          local_b8 = (undefined *)*puVar20;
          FUN_011c11b0(param_1,&local_b8);
        }
        if (((int)local_e0 != -1) && (local_c8._4_1_ == '\0')) {
          puVar20 = (undefined8 *)FUN_01a5190c(&local_a0,0,&local_e8,0);
          local_b8 = (undefined *)*puVar20;
          FUN_011c11b0(param_1,&local_b8);
        }
        if (((int)local_d0 == -1) || (local_c8._5_1_ != '\0')) goto LAB_011c09c8;
        param_2 = &local_d8;
      }
      else if (param_3 != 0) goto LAB_011c09c8;
      puVar20 = (undefined8 *)FUN_01a5190c(&local_a0,0,param_2,0);
      local_b8 = (undefined *)*puVar20;
      FUN_011c11b0(param_1,&local_b8);
    }
  }
LAB_011c09c8:
  return (bVar6 ^ 0xff) & 1;
}

