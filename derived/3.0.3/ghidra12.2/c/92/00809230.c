
void FUN_00809230(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  long lVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  byte bVar13;
  byte bVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *local_1a8;
  long local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 local_184;
  undefined4 uStack_180;
  undefined4 local_17c;
  undefined4 uStack_178;
  uint local_174;
  undefined **local_170;
  undefined8 *puStack_168;
  undefined4 local_160;
  undefined1 local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined *local_140;
  undefined1 *puStack_138;
  undefined4 local_130;
  undefined1 local_12c [63];
  undefined1 local_ed;
  undefined *local_e8;
  undefined1 *puStack_e0;
  undefined4 local_d8;
  undefined1 local_d4 [63];
  undefined1 local_95;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50 [2];
  long local_48;
  
  if ((param_1 != 0) && (*(byte *)(param_2 + 0x69) - 0xc < 0xfffffffd)) {
    *(undefined8 *)(param_1 + 8) = 0;
    local_ed = 0;
    local_160 = 0x20;
    puStack_138 = local_12c;
    local_130 = 0x40;
    local_140 = PTR_DAT_04bb2bc0 + 0x10;
    local_d8 = 0x40;
    puStack_e0 = local_d4;
    local_50[0] = 0x14;
    local_95 = 0;
    local_170 = &PTR_LAB_049173e0;
    puVar5 = local_50;
    if (local_50 <= (undefined4 *)((long)&local_90 + 2U)) {
      puVar5 = (undefined4 *)((long)&local_90 + 2U);
    }
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    puStack_168 = &local_90;
    local_e8 = local_140;
    local_48 = param_2;
    memset(&local_90,0,(long)puVar5 + (-0xe0 - (long)&local_170));
    memset(&local_90,0,((long)puVar5 + ~(ulong)&local_90 & 0xfffffffffffffffe) + 2);
    local_15c = 0;
    local_158 = 0xffffffff;
    uStack_150 = 0xffffffff00000000;
    local_148 = 0xffffffff;
    local_12c[0] = 0;
    local_d4[0] = 0;
    local_198 = 0;
    uStack_180 = CONCAT31(uStack_180._1_3_,1);
    local_17c = 0;
    local_190 = 0;
    uStack_18c = 0;
    uStack_188 = 0;
    local_184 = 0;
    local_1a8 = PTR_DAT_04bc0cd8 + 0x10;
    local_1a0 = 0;
    FUN_02906b00(&local_1a8,&local_170,local_50);
    local_1a0 = param_1 + 0x10;
    local_1a8 = (undefined *)CONCAT44(local_1a8._4_4_,0x14);
    FUN_02906c90(&local_1a8,&local_170);
    FUN_00808d60(&local_1a8,param_2);
    *(undefined **)(param_1 + 0x38) = local_1a8;
    *(long *)(param_1 + 0x40) = local_1a0;
    *(undefined8 *)(param_1 + 0x48) = local_198;
    *(undefined1 *)(param_1 + 0x50) = (undefined1)local_190;
    *(ulong *)(param_1 + 0x54) = CONCAT44(uStack_188,uStack_18c);
    *(ulong *)(param_1 + 0x5c) = CONCAT44(uStack_180,local_184);
    *(ulong *)(param_1 + 100) = CONCAT44(uStack_178,local_17c);
    if (1 < local_174) {
      local_174 = 0;
    }
    *(uint *)(param_1 + 0x6c) = local_174;
    *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) | 8;
    uVar9 = FUN_00808f00(param_2);
    *(undefined1 *)(param_1 + 0x71) = uVar9;
    uVar6 = *(undefined4 *)(&DAT_0414d7d0 + (ulong)*(byte *)(param_2 + 0x58) * 4);
    *(char *)(param_1 + 0x78) = (char)((uint)uVar6 >> 0x18);
    *(char *)(param_1 + 0x79) = (char)((uint)uVar6 >> 0x10);
    *(char *)(param_1 + 0x7a) = (char)((uint)uVar6 >> 8);
    uVar6 = *(undefined4 *)(&DAT_0414d7d0 + (ulong)*(byte *)(param_2 + 0x59) * 4);
    *(char *)(param_1 + 0x7b) = (char)((uint)uVar6 >> 0x18);
    *(char *)(param_1 + 0x7c) = (char)((uint)uVar6 >> 0x10);
    *(char *)(param_1 + 0x7d) = (char)((uint)uVar6 >> 8);
    uVar6 = *(undefined4 *)(&DAT_0414d7d0 + (ulong)*(byte *)(param_2 + 0x5a) * 4);
    *(char *)(param_1 + 0x7e) = (char)((uint)uVar6 >> 0x18);
    *(char *)(param_1 + 0x7f) = (char)((uint)uVar6 >> 0x10);
    *(char *)(param_1 + 0x80) = (char)((uint)uVar6 >> 8);
    uVar6 = *(undefined4 *)(&DAT_0414d7d0 + (ulong)*(byte *)(param_2 + 0x5b) * 4);
    *(char *)(param_1 + 0x81) = (char)((uint)uVar6 >> 0x18);
    *(char *)(param_1 + 0x82) = (char)((uint)uVar6 >> 0x10);
    *(char *)(param_1 + 0x83) = (char)((uint)uVar6 >> 8);
    uVar6 = *(undefined4 *)(&DAT_0414d7d0 + (ulong)*(byte *)(param_2 + 0x5c) * 4);
    *(char *)(param_1 + 0x84) = (char)((uint)uVar6 >> 0x18);
    *(char *)(param_1 + 0x85) = (char)((uint)uVar6 >> 0x10);
    *(char *)(param_1 + 0x86) = (char)((uint)uVar6 >> 8);
    uVar6 = *(undefined4 *)(&DAT_0414d7d0 + (ulong)*(byte *)(param_2 + 0x5d) * 4);
    *(char *)(param_1 + 0x87) = (char)((uint)uVar6 >> 0x18);
    *(char *)(param_1 + 0x88) = (char)((uint)uVar6 >> 0x10);
    *(char *)(param_1 + 0x89) = (char)((uint)uVar6 >> 8);
    uVar6 = *(undefined4 *)(&DAT_0414d7d0 + (ulong)*(byte *)(param_2 + 0x5e) * 4);
    *(char *)(param_1 + 0x8a) = (char)((uint)uVar6 >> 0x18);
    *(char *)(param_1 + 0x8b) = (char)((uint)uVar6 >> 0x10);
    *(char *)(param_1 + 0x8c) = (char)((uint)uVar6 >> 8);
    uVar6 = *(undefined4 *)(&DAT_0414d7d0 + (ulong)*(byte *)(param_2 + 0x5f) * 4);
    *(char *)(param_1 + 0x8d) = (char)((uint)uVar6 >> 0x18);
    *(char *)(param_1 + 0x8e) = (char)((uint)uVar6 >> 0x10);
    *(char *)(param_1 + 0x8f) = (char)((uint)uVar6 >> 8);
    uVar6 = *(undefined4 *)(&DAT_0414d7d0 + (ulong)*(byte *)(param_2 + 0x60) * 4);
    *(char *)(param_1 + 0x90) = (char)((uint)uVar6 >> 0x18);
    *(char *)(param_1 + 0x91) = (char)((uint)uVar6 >> 0x10);
    *(char *)(param_1 + 0x92) = (char)((uint)uVar6 >> 8);
    uVar6 = *(undefined4 *)(&DAT_0414d7d0 + (ulong)*(byte *)(param_2 + 0x61) * 4);
    *(char *)(param_1 + 0x93) = (char)((uint)uVar6 >> 0x18);
    *(char *)(param_1 + 0x94) = (char)((uint)uVar6 >> 0x10);
    *(char *)(param_1 + 0x95) = (char)((uint)uVar6 >> 8);
    uVar6 = *(undefined4 *)(&DAT_0414d7d0 + (ulong)*(byte *)(param_2 + 0x62) * 4);
    *(char *)(param_1 + 0x96) = (char)((uint)uVar6 >> 0x18);
    *(char *)(param_1 + 0x97) = (char)((uint)uVar6 >> 0x10);
    *(char *)(param_1 + 0x98) = (char)((uint)uVar6 >> 8);
    uVar6 = *(undefined4 *)(&DAT_0414d7d0 + (ulong)*(byte *)(param_2 + 99) * 4);
    *(char *)(param_1 + 0x99) = (char)((uint)uVar6 >> 0x18);
    *(char *)(param_1 + 0x9a) = (char)((uint)uVar6 >> 0x10);
    *(char *)(param_1 + 0x9b) = (char)((uint)uVar6 >> 8);
    uVar6 = *(undefined4 *)(&DAT_0414d7d0 + (ulong)*(byte *)(param_2 + 100) * 4);
    *(char *)(param_1 + 0x9c) = (char)((uint)uVar6 >> 0x18);
    *(char *)(param_1 + 0x9d) = (char)((uint)uVar6 >> 0x10);
    *(char *)(param_1 + 0x9e) = (char)((uint)uVar6 >> 8);
    uVar6 = *(undefined4 *)(&DAT_0414d7d0 + (ulong)*(byte *)(param_2 + 0x65) * 4);
    *(char *)(param_1 + 0x9f) = (char)((uint)uVar6 >> 0x18);
    *(char *)(param_1 + 0xa0) = (char)((uint)uVar6 >> 0x10);
    *(char *)(param_1 + 0xa1) = (char)((uint)uVar6 >> 8);
    uVar6 = *(undefined4 *)(&DAT_0414d7d0 + (ulong)*(byte *)(param_2 + 0x66) * 4);
    *(char *)(param_1 + 0xa2) = (char)((uint)uVar6 >> 0x18);
    *(char *)(param_1 + 0xa3) = (char)((uint)uVar6 >> 0x10);
    *(char *)(param_1 + 0xa4) = (char)((uint)uVar6 >> 8);
    if (*(byte *)(param_2 + 0x69) < 6) {
      uVar12 = 0;
      lVar2 = param_1 + 0xa5;
      do {
        uVar10 = 0;
        uVar15 = (uint)(uVar12 >> 4) & 0x7fffffe;
        do {
          uVar1 = uVar10 + 0x20;
          uVar3 = uVar15 + (uVar10 >> 5);
          uVar17 = (ulong)((uVar10 & 0x1e | (int)uVar12 << 5) >> 1);
          lVar4 = lVar2 + (ulong)uVar3 * 0x200;
          if (3 < uVar3) {
            lVar4 = lVar2;
          }
          bVar8 = (uVar10 & 1) != 0;
          uVar10 = uVar10 + 1;
          bVar13 = 0xf;
          if (bVar8) {
            bVar13 = 0xf0;
          }
          bVar14 = 0xf0;
          if (bVar8) {
            bVar14 = 0xf;
          }
          *(byte *)(lVar4 + uVar17) =
               *(byte *)(lVar4 + uVar17) & bVar14 |
               *(byte *)(param_2 + (ulong)(uVar15 + (uVar1 >> 5)) * 0x200 + uVar17 + 0x6c) & bVar13;
        } while (uVar10 != 0x20);
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar10;
      } while (uVar10 != 0x20);
      uVar12 = 0;
      do {
        uVar10 = (uint)uVar12;
        uVar17 = uVar12 >> 1 & 0xf;
        lVar4 = lVar2 + (ulong)((uVar10 >> 5) + 2) * 0x200;
        bVar8 = (uVar12 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar12 = (ulong)(uVar10 + 1);
        *(byte *)(lVar4 + uVar17) =
             *(byte *)(lVar4 + uVar17) & bVar14 |
             *(byte *)(param_2 + (ulong)((uVar10 + 0x20 >> 5) + 2) * 0x200 + uVar17 + 0x16c) &
             bVar13;
      } while (uVar10 + 1 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = uVar10 + 0x20;
        uVar1 = uVar10 >> 5;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf);
        bVar8 = (uVar10 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = uVar10 + 1;
        lVar4 = lVar2 + (ulong)(uVar1 + 2) * 0x200 + uVar12;
        *(byte *)(lVar4 + 0x10) =
             *(byte *)(lVar4 + 0x10) & bVar14 |
             *(byte *)(param_2 + (ulong)((uVar15 >> 5) + 2) * 0x200 + uVar12 + 0x17c) & bVar13;
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = uVar10 + 0x20;
        uVar1 = uVar10 >> 5;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf);
        bVar8 = (uVar10 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = uVar10 + 1;
        lVar4 = lVar2 + (ulong)(uVar1 + 2) * 0x200 + uVar12;
        *(byte *)(lVar4 + 0x20) =
             *(byte *)(lVar4 + 0x20) & bVar14 |
             *(byte *)(param_2 + (ulong)((uVar15 >> 5) + 2) * 0x200 + uVar12 + 0x18c) & bVar13;
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = uVar10 + 0x20;
        uVar1 = uVar10 >> 5;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf);
        bVar8 = (uVar10 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = uVar10 + 1;
        lVar4 = lVar2 + (ulong)(uVar1 + 2) * 0x200 + uVar12;
        *(byte *)(lVar4 + 0x30) =
             *(byte *)(lVar4 + 0x30) & bVar14 |
             *(byte *)(param_2 + (ulong)((uVar15 >> 5) + 2) * 0x200 + uVar12 + 0x19c) & bVar13;
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = uVar10 + 0x20;
        uVar1 = uVar10 >> 5;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf);
        bVar8 = (uVar10 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = uVar10 + 1;
        lVar4 = lVar2 + (ulong)(uVar1 + 2) * 0x200 + uVar12;
        *(byte *)(lVar4 + 0x40) =
             *(byte *)(lVar4 + 0x40) & bVar14 |
             *(byte *)(param_2 + (ulong)((uVar15 >> 5) + 2) * 0x200 + uVar12 + 0x1ac) & bVar13;
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = uVar10 + 0x20;
        uVar1 = uVar10 >> 5;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf);
        bVar8 = (uVar10 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = uVar10 + 1;
        lVar4 = lVar2 + (ulong)(uVar1 + 2) * 0x200 + uVar12;
        *(byte *)(lVar4 + 0x50) =
             *(byte *)(lVar4 + 0x50) & bVar14 |
             *(byte *)(param_2 + (ulong)((uVar15 >> 5) + 2) * 0x200 + uVar12 + 0x1bc) & bVar13;
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = uVar10 + 0x20;
        uVar1 = uVar10 >> 5;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf);
        bVar8 = (uVar10 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = uVar10 + 1;
        lVar4 = lVar2 + (ulong)(uVar1 + 2) * 0x200 + uVar12;
        *(byte *)(lVar4 + 0x60) =
             *(byte *)(lVar4 + 0x60) & bVar14 |
             *(byte *)(param_2 + (ulong)((uVar15 >> 5) + 2) * 0x200 + uVar12 + 0x1cc) & bVar13;
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = uVar10 + 0x20;
        uVar1 = uVar10 >> 5;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf);
        bVar8 = (uVar10 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = uVar10 + 1;
        lVar4 = lVar2 + (ulong)(uVar1 + 2) * 0x200 + uVar12;
        *(byte *)(lVar4 + 0x70) =
             *(byte *)(lVar4 + 0x70) & bVar14 |
             *(byte *)(param_2 + (ulong)((uVar15 >> 5) + 2) * 0x200 + uVar12 + 0x1dc) & bVar13;
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = uVar10 + 0x20;
        uVar1 = uVar10 >> 5;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf);
        bVar8 = (uVar10 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = uVar10 + 1;
        lVar4 = lVar2 + (ulong)(uVar1 + 2) * 0x200 + uVar12;
        *(byte *)(lVar4 + 0x80) =
             *(byte *)(lVar4 + 0x80) & bVar14 |
             *(byte *)(param_2 + (ulong)((uVar15 >> 5) + 2) * 0x200 + uVar12 + 0x1ec) & bVar13;
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = uVar10 + 0x20;
        uVar1 = uVar10 >> 5;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf);
        bVar8 = (uVar10 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = uVar10 + 1;
        lVar4 = lVar2 + (ulong)(uVar1 + 2) * 0x200 + uVar12;
        *(byte *)(lVar4 + 0x90) =
             *(byte *)(lVar4 + 0x90) & bVar14 |
             *(byte *)(param_2 + (ulong)((uVar15 >> 5) + 2) * 0x200 + uVar12 + 0x1fc) & bVar13;
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = uVar10 + 0x20;
        uVar1 = uVar10 >> 5;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf);
        bVar8 = (uVar10 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = uVar10 + 1;
        lVar4 = lVar2 + (ulong)(uVar1 + 2) * 0x200 + uVar12;
        *(byte *)(lVar4 + 0xa0) =
             *(byte *)(lVar4 + 0xa0) & bVar14 |
             *(byte *)(param_2 + (ulong)((uVar15 >> 5) + 2) * 0x200 + uVar12 + 0x20c) & bVar13;
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = uVar10 + 0x20;
        uVar1 = uVar10 >> 5;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf);
        bVar8 = (uVar10 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = uVar10 + 1;
        lVar4 = lVar2 + (ulong)(uVar1 + 2) * 0x200 + uVar12;
        *(byte *)(lVar4 + 0xb0) =
             *(byte *)(lVar4 + 0xb0) & bVar14 |
             *(byte *)(param_2 + (ulong)((uVar15 >> 5) + 2) * 0x200 + uVar12 + 0x21c) & bVar13;
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = uVar10 + 0x20;
        uVar1 = uVar10 >> 5;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf);
        bVar8 = (uVar10 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = uVar10 + 1;
        lVar4 = lVar2 + (ulong)(uVar1 + 2) * 0x200 + uVar12;
        *(byte *)(lVar4 + 0xc0) =
             *(byte *)(lVar4 + 0xc0) & bVar14 |
             *(byte *)(param_2 + (ulong)((uVar15 >> 5) + 2) * 0x200 + uVar12 + 0x22c) & bVar13;
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = uVar10 + 0x20;
        uVar1 = uVar10 >> 5;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf);
        bVar8 = (uVar10 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = uVar10 + 1;
        lVar4 = lVar2 + (ulong)(uVar1 + 2) * 0x200 + uVar12;
        *(byte *)(lVar4 + 0xd0) =
             *(byte *)(lVar4 + 0xd0) & bVar14 |
             *(byte *)(param_2 + (ulong)((uVar15 >> 5) + 2) * 0x200 + uVar12 + 0x23c) & bVar13;
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = uVar10 + 0x20;
        uVar1 = uVar10 >> 5;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf);
        bVar8 = (uVar10 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = uVar10 + 1;
        lVar4 = lVar2 + (ulong)(uVar1 + 2) * 0x200 + uVar12;
        *(byte *)(lVar4 + 0xe0) =
             *(byte *)(lVar4 + 0xe0) & bVar14 |
             *(byte *)(param_2 + (ulong)((uVar15 >> 5) + 2) * 0x200 + uVar12 + 0x24c) & bVar13;
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = uVar10 + 0x20;
        uVar1 = uVar10 >> 5;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf);
        bVar8 = (uVar10 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = uVar10 + 1;
        lVar4 = lVar2 + (ulong)(uVar1 + 2) * 0x200 + uVar12;
        *(byte *)(lVar4 + 0xf0) =
             *(byte *)(lVar4 + 0xf0) & bVar14 |
             *(byte *)(param_2 + (ulong)((uVar15 >> 5) + 2) * 0x200 + uVar12 + 0x25c) & bVar13;
      } while (uVar10 != 0x20);
      uVar12 = 0;
      do {
        uVar10 = 0;
        uVar15 = (uint)(uVar12 >> 4) & 0x7fffffe;
        do {
          uVar1 = uVar10 >> 5;
          uVar3 = uVar15 + (uVar10 + 0x20 >> 5);
          uVar17 = (ulong)((uVar10 & 0x1e | (int)uVar12 << 5) >> 1);
          lVar4 = lVar2 + (ulong)uVar3 * 0x200;
          if (3 < uVar3) {
            lVar4 = lVar2;
          }
          bVar8 = (uVar10 & 1) != 0;
          uVar10 = uVar10 + 1;
          bVar13 = 0xf;
          if (bVar8) {
            bVar13 = 0xf0;
          }
          bVar14 = 0xf0;
          if (bVar8) {
            bVar14 = 0xf;
          }
          *(byte *)(lVar4 + uVar17) =
               *(byte *)(lVar4 + uVar17) & bVar14 |
               *(byte *)(param_2 + (ulong)(uVar15 + uVar1) * 0x200 + uVar17 + 0x6c) & bVar13;
        } while (uVar10 != 0x20);
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar10;
      } while (uVar10 != 0x20);
      uVar12 = 0;
      do {
        iVar11 = (int)uVar12;
        uVar17 = uVar12 >> 1 & 0xf;
        bVar8 = (uVar12 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = iVar11 + 1;
        uVar12 = (ulong)uVar10;
        lVar7 = (ulong)((iVar11 + 0x20U >> 5) + 2) * 0x200;
        lVar4 = lVar2 + lVar7;
        *(byte *)(lVar4 + uVar17) =
             bVar14 & *(byte *)(lVar4 + uVar17) |
             bVar13 & *(byte *)(param_2 + uVar17 + lVar7 + 0x6c);
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        bVar8 = (uVar10 & 1) != 0;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf) | 0x10;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        lVar7 = (ulong)((uVar10 + 0x20 >> 5) + 2) * 0x200;
        uVar10 = uVar10 + 1;
        lVar4 = lVar2 + lVar7;
        *(byte *)(lVar4 + uVar12) =
             bVar14 & *(byte *)(lVar4 + uVar12) |
             bVar13 & *(byte *)(param_2 + uVar12 + lVar7 + 0x6c);
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        bVar8 = (uVar10 & 1) != 0;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf) | 0x20;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        lVar7 = (ulong)((uVar10 + 0x20 >> 5) + 2) * 0x200;
        uVar10 = uVar10 + 1;
        lVar4 = lVar2 + lVar7;
        *(byte *)(lVar4 + uVar12) =
             bVar14 & *(byte *)(lVar4 + uVar12) |
             bVar13 & *(byte *)(param_2 + uVar12 + lVar7 + 0x6c);
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        bVar8 = (uVar10 & 1) != 0;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf) | 0x30;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        lVar7 = (ulong)((uVar10 + 0x20 >> 5) + 2) * 0x200;
        uVar10 = uVar10 + 1;
        lVar4 = lVar2 + lVar7;
        *(byte *)(lVar4 + uVar12) =
             bVar14 & *(byte *)(lVar4 + uVar12) |
             bVar13 & *(byte *)(param_2 + uVar12 + lVar7 + 0x6c);
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        bVar8 = (uVar10 & 1) != 0;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf) | 0x40;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        lVar7 = (ulong)((uVar10 + 0x20 >> 5) + 2) * 0x200;
        uVar10 = uVar10 + 1;
        lVar4 = lVar2 + lVar7;
        *(byte *)(lVar4 + uVar12) =
             bVar14 & *(byte *)(lVar4 + uVar12) |
             bVar13 & *(byte *)(param_2 + uVar12 + lVar7 + 0x6c);
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        bVar8 = (uVar10 & 1) != 0;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf) | 0x50;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        lVar7 = (ulong)((uVar10 + 0x20 >> 5) + 2) * 0x200;
        uVar10 = uVar10 + 1;
        lVar4 = lVar2 + lVar7;
        *(byte *)(lVar4 + uVar12) =
             bVar14 & *(byte *)(lVar4 + uVar12) |
             bVar13 & *(byte *)(param_2 + uVar12 + lVar7 + 0x6c);
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        bVar8 = (uVar10 & 1) != 0;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf) | 0x60;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        lVar7 = (ulong)((uVar10 + 0x20 >> 5) + 2) * 0x200;
        uVar10 = uVar10 + 1;
        lVar4 = lVar2 + lVar7;
        *(byte *)(lVar4 + uVar12) =
             bVar14 & *(byte *)(lVar4 + uVar12) |
             bVar13 & *(byte *)(param_2 + uVar12 + lVar7 + 0x6c);
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        bVar8 = (uVar10 & 1) != 0;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf) | 0x70;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        lVar7 = (ulong)((uVar10 + 0x20 >> 5) + 2) * 0x200;
        uVar10 = uVar10 + 1;
        lVar4 = lVar2 + lVar7;
        *(byte *)(lVar4 + uVar12) =
             bVar14 & *(byte *)(lVar4 + uVar12) |
             bVar13 & *(byte *)(param_2 + uVar12 + lVar7 + 0x6c);
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        bVar8 = (uVar10 & 1) != 0;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf) | 0x80;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        lVar7 = (ulong)((uVar10 + 0x20 >> 5) + 2) * 0x200;
        uVar10 = uVar10 + 1;
        lVar4 = lVar2 + lVar7;
        *(byte *)(lVar4 + uVar12) =
             bVar14 & *(byte *)(lVar4 + uVar12) |
             bVar13 & *(byte *)(param_2 + uVar12 + lVar7 + 0x6c);
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        bVar8 = (uVar10 & 1) != 0;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf) | 0x90;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        lVar7 = (ulong)((uVar10 + 0x20 >> 5) + 2) * 0x200;
        uVar10 = uVar10 + 1;
        lVar4 = lVar2 + lVar7;
        *(byte *)(lVar4 + uVar12) =
             bVar14 & *(byte *)(lVar4 + uVar12) |
             bVar13 & *(byte *)(param_2 + uVar12 + lVar7 + 0x6c);
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        bVar8 = (uVar10 & 1) != 0;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf) | 0xa0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        lVar7 = (ulong)((uVar10 + 0x20 >> 5) + 2) * 0x200;
        uVar10 = uVar10 + 1;
        lVar4 = lVar2 + lVar7;
        *(byte *)(lVar4 + uVar12) =
             bVar14 & *(byte *)(lVar4 + uVar12) |
             bVar13 & *(byte *)(param_2 + uVar12 + lVar7 + 0x6c);
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        bVar8 = (uVar10 & 1) != 0;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf) | 0xb0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        lVar7 = (ulong)((uVar10 + 0x20 >> 5) + 2) * 0x200;
        uVar10 = uVar10 + 1;
        lVar4 = lVar2 + lVar7;
        *(byte *)(lVar4 + uVar12) =
             bVar14 & *(byte *)(lVar4 + uVar12) |
             bVar13 & *(byte *)(param_2 + uVar12 + lVar7 + 0x6c);
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        bVar8 = (uVar10 & 1) != 0;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf) | 0xc0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        lVar7 = (ulong)((uVar10 + 0x20 >> 5) + 2) * 0x200;
        uVar10 = uVar10 + 1;
        lVar4 = lVar2 + lVar7;
        *(byte *)(lVar4 + uVar12) =
             bVar14 & *(byte *)(lVar4 + uVar12) |
             bVar13 & *(byte *)(param_2 + uVar12 + lVar7 + 0x6c);
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        bVar8 = (uVar10 & 1) != 0;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf) | 0xd0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        lVar7 = (ulong)((uVar10 + 0x20 >> 5) + 2) * 0x200;
        uVar10 = uVar10 + 1;
        lVar4 = lVar2 + lVar7;
        *(byte *)(lVar4 + uVar12) =
             bVar14 & *(byte *)(lVar4 + uVar12) |
             bVar13 & *(byte *)(param_2 + uVar12 + lVar7 + 0x6c);
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        bVar8 = (uVar10 & 1) != 0;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf) | 0xe0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        lVar7 = (ulong)((uVar10 + 0x20 >> 5) + 2) * 0x200;
        uVar10 = uVar10 + 1;
        lVar4 = lVar2 + lVar7;
        *(byte *)(lVar4 + uVar12) =
             bVar14 & *(byte *)(lVar4 + uVar12) |
             bVar13 & *(byte *)(param_2 + uVar12 + lVar7 + 0x6c);
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        bVar8 = (uVar10 & 1) != 0;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf) | 0xf0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        lVar7 = (ulong)((uVar10 + 0x20 >> 5) + 2) * 0x200;
        uVar10 = uVar10 + 1;
        lVar4 = lVar2 + lVar7;
        *(byte *)(lVar4 + uVar12) =
             bVar14 & *(byte *)(lVar4 + uVar12) |
             bVar13 & *(byte *)(param_2 + uVar12 + lVar7 + 0x6c);
      } while (uVar10 != 0x20);
      uVar12 = 0;
      do {
        bVar8 = (uVar12 & 1) != 0;
        uVar17 = uVar12 >> 1;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        lVar7 = (ulong)((int)(uVar12 >> 5) + 2) * 0x200;
        uVar16 = uVar17 | 0x100;
        lVar4 = lVar2 + lVar7;
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar10;
        *(byte *)(lVar4 + uVar16) =
             *(byte *)(lVar4 + uVar16) & bVar14 |
             *(byte *)(param_2 + uVar17 + lVar7 + 0x6c) & bVar13;
      } while (uVar10 != 0x20);
      uVar12 = 0;
      do {
        uVar17 = uVar12 >> 1;
        bVar8 = (uVar12 & 1) != 0;
        uVar16 = uVar17 | 0x110;
        lVar4 = (ulong)((int)(uVar12 >> 5) + 2) * 0x200;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        lVar7 = lVar2 + lVar4;
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar10;
        *(byte *)(lVar7 + uVar16) =
             *(byte *)(lVar7 + uVar16) & bVar14 |
             *(byte *)(param_2 + lVar4 + (uVar17 | 0x10) + 0x6c) & bVar13;
      } while (uVar10 != 0x20);
      uVar12 = 0;
      do {
        uVar17 = uVar12 >> 1;
        bVar8 = (uVar12 & 1) != 0;
        uVar16 = uVar17 | 0x120;
        lVar4 = (ulong)((int)(uVar12 >> 5) + 2) * 0x200;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        lVar7 = lVar2 + lVar4;
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar10;
        *(byte *)(lVar7 + uVar16) =
             *(byte *)(lVar7 + uVar16) & bVar14 |
             *(byte *)(param_2 + lVar4 + (uVar17 | 0x20) + 0x6c) & bVar13;
      } while (uVar10 != 0x20);
      uVar12 = 0;
      do {
        uVar17 = uVar12 >> 1;
        bVar8 = (uVar12 & 1) != 0;
        uVar16 = uVar17 | 0x130;
        lVar4 = (ulong)((int)(uVar12 >> 5) + 2) * 0x200;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        lVar7 = lVar2 + lVar4;
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar10;
        *(byte *)(lVar7 + uVar16) =
             *(byte *)(lVar7 + uVar16) & bVar14 |
             *(byte *)(param_2 + lVar4 + (uVar17 | 0x30) + 0x6c) & bVar13;
      } while (uVar10 != 0x20);
      uVar12 = 0;
      do {
        uVar17 = uVar12 >> 1;
        bVar8 = (uVar12 & 1) != 0;
        uVar16 = uVar17 | 0x140;
        lVar4 = (ulong)((int)(uVar12 >> 5) + 2) * 0x200;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        lVar7 = lVar2 + lVar4;
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar10;
        *(byte *)(lVar7 + uVar16) =
             *(byte *)(lVar7 + uVar16) & bVar14 |
             *(byte *)(param_2 + lVar4 + (uVar17 | 0x40) + 0x6c) & bVar13;
      } while (uVar10 != 0x20);
      uVar12 = 0;
      do {
        uVar17 = uVar12 >> 1;
        bVar8 = (uVar12 & 1) != 0;
        uVar16 = uVar17 | 0x150;
        lVar4 = (ulong)((int)(uVar12 >> 5) + 2) * 0x200;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        lVar7 = lVar2 + lVar4;
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar10;
        *(byte *)(lVar7 + uVar16) =
             *(byte *)(lVar7 + uVar16) & bVar14 |
             *(byte *)(param_2 + lVar4 + (uVar17 | 0x50) + 0x6c) & bVar13;
      } while (uVar10 != 0x20);
      uVar12 = 0;
      do {
        uVar17 = uVar12 >> 1;
        bVar8 = (uVar12 & 1) != 0;
        uVar16 = uVar17 | 0x160;
        lVar4 = (ulong)((int)(uVar12 >> 5) + 2) * 0x200;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        lVar7 = lVar2 + lVar4;
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar10;
        *(byte *)(lVar7 + uVar16) =
             *(byte *)(lVar7 + uVar16) & bVar14 |
             *(byte *)(param_2 + lVar4 + (uVar17 | 0x60) + 0x6c) & bVar13;
      } while (uVar10 != 0x20);
      uVar12 = 0;
      do {
        uVar17 = (ulong)((uint)uVar12 >> 1 & 0xf);
        bVar8 = (uVar12 & 1) != 0;
        lVar4 = (ulong)((int)(uVar12 >> 5) + 2) * 0x200;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        lVar7 = lVar2 + uVar17 + lVar4;
        uVar10 = (uint)uVar12 + 1;
        uVar12 = (ulong)uVar10;
        *(byte *)(lVar7 + 0x170) =
             *(byte *)(lVar7 + 0x170) & bVar14 | *(byte *)(param_2 + uVar17 + lVar4 + 0xdc) & bVar13
        ;
      } while (uVar10 != 0x20);
      uVar12 = 0;
      do {
        uVar17 = uVar12 >> 1;
        bVar8 = (uVar12 & 1) != 0;
        uVar16 = uVar17 | 0x180;
        lVar4 = (ulong)((int)(uVar12 >> 5) + 2) * 0x200;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        lVar7 = lVar2 + lVar4;
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar10;
        *(byte *)(lVar7 + uVar16) =
             *(byte *)(lVar7 + uVar16) & bVar14 |
             *(byte *)(param_2 + lVar4 + (uVar17 | 0x80) + 0x6c) & bVar13;
      } while (uVar10 != 0x20);
      uVar12 = 0;
      do {
        uVar17 = uVar12 >> 1;
        bVar8 = (uVar12 & 1) != 0;
        uVar16 = uVar17 | 400;
        lVar4 = (ulong)((int)(uVar12 >> 5) + 2) * 0x200;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        lVar7 = lVar2 + lVar4;
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar10;
        *(byte *)(lVar7 + uVar16) =
             *(byte *)(lVar7 + uVar16) & bVar14 |
             *(byte *)(param_2 + lVar4 + (uVar17 | 0x90) + 0x6c) & bVar13;
      } while (uVar10 != 0x20);
      uVar12 = 0;
      do {
        uVar17 = uVar12 >> 1;
        bVar8 = (uVar12 & 1) != 0;
        uVar16 = uVar17 | 0x1a0;
        lVar4 = (ulong)((int)(uVar12 >> 5) + 2) * 0x200;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        lVar7 = lVar2 + lVar4;
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar10;
        *(byte *)(lVar7 + uVar16) =
             *(byte *)(lVar7 + uVar16) & bVar14 |
             *(byte *)(param_2 + lVar4 + (uVar17 | 0xa0) + 0x6c) & bVar13;
      } while (uVar10 != 0x20);
      uVar12 = 0;
      do {
        uVar17 = uVar12 >> 1;
        bVar8 = (uVar12 & 1) != 0;
        uVar16 = uVar17 | 0x1b0;
        lVar4 = (ulong)((int)(uVar12 >> 5) + 2) * 0x200;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        lVar7 = lVar2 + lVar4;
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar10;
        *(byte *)(lVar7 + uVar16) =
             *(byte *)(lVar7 + uVar16) & bVar14 |
             *(byte *)(param_2 + lVar4 + (uVar17 | 0xb0) + 0x6c) & bVar13;
      } while (uVar10 != 0x20);
      uVar12 = 0;
      do {
        uVar17 = uVar12 >> 1;
        bVar8 = (uVar12 & 1) != 0;
        uVar16 = uVar17 | 0x1c0;
        lVar4 = (ulong)((int)(uVar12 >> 5) + 2) * 0x200;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        lVar7 = lVar2 + lVar4;
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar10;
        *(byte *)(lVar7 + uVar16) =
             *(byte *)(lVar7 + uVar16) & bVar14 |
             *(byte *)(param_2 + lVar4 + (uVar17 | 0xc0) + 0x6c) & bVar13;
      } while (uVar10 != 0x20);
      uVar12 = 0;
      do {
        uVar17 = uVar12 >> 1;
        bVar8 = (uVar12 & 1) != 0;
        uVar16 = uVar17 | 0x1d0;
        lVar4 = (ulong)((int)(uVar12 >> 5) + 2) * 0x200;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        lVar7 = lVar2 + lVar4;
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar10;
        *(byte *)(lVar7 + uVar16) =
             *(byte *)(lVar7 + uVar16) & bVar14 |
             *(byte *)(param_2 + lVar4 + (uVar17 | 0xd0) + 0x6c) & bVar13;
      } while (uVar10 != 0x20);
      uVar12 = 0;
      do {
        uVar17 = uVar12 >> 1;
        bVar8 = (uVar12 & 1) != 0;
        uVar16 = uVar17 | 0x1e0;
        lVar4 = (ulong)((int)(uVar12 >> 5) + 2) * 0x200;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        lVar7 = lVar2 + lVar4;
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar10;
        *(byte *)(lVar7 + uVar16) =
             *(byte *)(lVar7 + uVar16) & bVar14 |
             *(byte *)(param_2 + lVar4 + (uVar17 | 0xe0) + 0x6c) & bVar13;
      } while (uVar10 != 0x20);
      uVar12 = 0;
      do {
        uVar17 = uVar12 >> 1;
        bVar8 = (uVar12 & 1) != 0;
        uVar16 = uVar17 | 0x1f0;
        lVar4 = (ulong)((int)(uVar12 >> 5) + 2) * 0x200;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        lVar7 = lVar2 + lVar4;
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar10;
        *(byte *)(lVar7 + uVar16) =
             *(byte *)(lVar7 + uVar16) & bVar14 |
             *(byte *)(param_2 + lVar4 + (uVar17 | 0xf0) + 0x6c) & bVar13;
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = uVar10 >> 5;
        lVar4 = lVar2 + (ulong)((uVar10 + 0x20 >> 5) + 2) * 0x200;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf) | 0x100;
        bVar8 = (uVar10 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = uVar10 + 1;
        *(byte *)(lVar4 + uVar12) =
             *(byte *)(lVar4 + uVar12) & bVar14 |
             *(byte *)(param_2 + (ulong)(uVar15 + 2) * 0x200 + uVar12 + 0x6c) & bVar13;
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = uVar10 >> 5;
        lVar4 = lVar2 + (ulong)((uVar10 + 0x20 >> 5) + 2) * 0x200;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf) | 0x110;
        bVar8 = (uVar10 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = uVar10 + 1;
        *(byte *)(lVar4 + uVar12) =
             *(byte *)(lVar4 + uVar12) & bVar14 |
             *(byte *)(param_2 + (ulong)(uVar15 + 2) * 0x200 + uVar12 + 0x6c) & bVar13;
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = uVar10 >> 5;
        lVar4 = lVar2 + (ulong)((uVar10 + 0x20 >> 5) + 2) * 0x200;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf) | 0x120;
        bVar8 = (uVar10 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = uVar10 + 1;
        *(byte *)(lVar4 + uVar12) =
             *(byte *)(lVar4 + uVar12) & bVar14 |
             *(byte *)(param_2 + (ulong)(uVar15 + 2) * 0x200 + uVar12 + 0x6c) & bVar13;
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = uVar10 >> 5;
        lVar4 = lVar2 + (ulong)((uVar10 + 0x20 >> 5) + 2) * 0x200;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf) | 0x130;
        bVar8 = (uVar10 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = uVar10 + 1;
        *(byte *)(lVar4 + uVar12) =
             *(byte *)(lVar4 + uVar12) & bVar14 |
             *(byte *)(param_2 + (ulong)(uVar15 + 2) * 0x200 + uVar12 + 0x6c) & bVar13;
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = uVar10 >> 5;
        lVar4 = lVar2 + (ulong)((uVar10 + 0x20 >> 5) + 2) * 0x200;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf) | 0x140;
        bVar8 = (uVar10 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = uVar10 + 1;
        *(byte *)(lVar4 + uVar12) =
             *(byte *)(lVar4 + uVar12) & bVar14 |
             *(byte *)(param_2 + (ulong)(uVar15 + 2) * 0x200 + uVar12 + 0x6c) & bVar13;
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = uVar10 >> 5;
        lVar4 = lVar2 + (ulong)((uVar10 + 0x20 >> 5) + 2) * 0x200;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf) | 0x150;
        bVar8 = (uVar10 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = uVar10 + 1;
        *(byte *)(lVar4 + uVar12) =
             *(byte *)(lVar4 + uVar12) & bVar14 |
             *(byte *)(param_2 + (ulong)(uVar15 + 2) * 0x200 + uVar12 + 0x6c) & bVar13;
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = uVar10 >> 5;
        lVar4 = lVar2 + (ulong)((uVar10 + 0x20 >> 5) + 2) * 0x200;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf) | 0x160;
        bVar8 = (uVar10 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = uVar10 + 1;
        *(byte *)(lVar4 + uVar12) =
             *(byte *)(lVar4 + uVar12) & bVar14 |
             *(byte *)(param_2 + (ulong)(uVar15 + 2) * 0x200 + uVar12 + 0x6c) & bVar13;
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = uVar10 >> 5;
        lVar4 = lVar2 + (ulong)((uVar10 + 0x20 >> 5) + 2) * 0x200;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf) | 0x170;
        bVar8 = (uVar10 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = uVar10 + 1;
        *(byte *)(lVar4 + uVar12) =
             *(byte *)(lVar4 + uVar12) & bVar14 |
             *(byte *)(param_2 + (ulong)(uVar15 + 2) * 0x200 + uVar12 + 0x6c) & bVar13;
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = uVar10 >> 5;
        lVar4 = lVar2 + (ulong)((uVar10 + 0x20 >> 5) + 2) * 0x200;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf) | 0x180;
        bVar8 = (uVar10 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = uVar10 + 1;
        *(byte *)(lVar4 + uVar12) =
             *(byte *)(lVar4 + uVar12) & bVar14 |
             *(byte *)(param_2 + (ulong)(uVar15 + 2) * 0x200 + uVar12 + 0x6c) & bVar13;
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = uVar10 >> 5;
        lVar4 = lVar2 + (ulong)((uVar10 + 0x20 >> 5) + 2) * 0x200;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf) | 400;
        bVar8 = (uVar10 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = uVar10 + 1;
        *(byte *)(lVar4 + uVar12) =
             *(byte *)(lVar4 + uVar12) & bVar14 |
             *(byte *)(param_2 + (ulong)(uVar15 + 2) * 0x200 + uVar12 + 0x6c) & bVar13;
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = uVar10 >> 5;
        lVar4 = lVar2 + (ulong)((uVar10 + 0x20 >> 5) + 2) * 0x200;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf) | 0x1a0;
        bVar8 = (uVar10 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = uVar10 + 1;
        *(byte *)(lVar4 + uVar12) =
             *(byte *)(lVar4 + uVar12) & bVar14 |
             *(byte *)(param_2 + (ulong)(uVar15 + 2) * 0x200 + uVar12 + 0x6c) & bVar13;
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = uVar10 >> 5;
        lVar4 = lVar2 + (ulong)((uVar10 + 0x20 >> 5) + 2) * 0x200;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf) | 0x1b0;
        bVar8 = (uVar10 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = uVar10 + 1;
        *(byte *)(lVar4 + uVar12) =
             *(byte *)(lVar4 + uVar12) & bVar14 |
             *(byte *)(param_2 + (ulong)(uVar15 + 2) * 0x200 + uVar12 + 0x6c) & bVar13;
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = uVar10 >> 5;
        lVar4 = lVar2 + (ulong)((uVar10 + 0x20 >> 5) + 2) * 0x200;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf) | 0x1c0;
        bVar8 = (uVar10 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = uVar10 + 1;
        *(byte *)(lVar4 + uVar12) =
             *(byte *)(lVar4 + uVar12) & bVar14 |
             *(byte *)(param_2 + (ulong)(uVar15 + 2) * 0x200 + uVar12 + 0x6c) & bVar13;
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = uVar10 >> 5;
        lVar4 = lVar2 + (ulong)((uVar10 + 0x20 >> 5) + 2) * 0x200;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf) | 0x1d0;
        bVar8 = (uVar10 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = uVar10 + 1;
        *(byte *)(lVar4 + uVar12) =
             *(byte *)(lVar4 + uVar12) & bVar14 |
             *(byte *)(param_2 + (ulong)(uVar15 + 2) * 0x200 + uVar12 + 0x6c) & bVar13;
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = uVar10 >> 5;
        lVar4 = lVar2 + (ulong)((uVar10 + 0x20 >> 5) + 2) * 0x200;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf) | 0x1e0;
        bVar8 = (uVar10 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = uVar10 + 1;
        *(byte *)(lVar4 + uVar12) =
             *(byte *)(lVar4 + uVar12) & bVar14 |
             *(byte *)(param_2 + (ulong)(uVar15 + 2) * 0x200 + uVar12 + 0x6c) & bVar13;
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = uVar10 >> 5;
        lVar4 = lVar2 + (ulong)((uVar10 + 0x20 >> 5) + 2) * 0x200;
        uVar12 = (ulong)(uVar10 >> 1 & 0xf) | 0x1f0;
        bVar8 = (uVar10 & 1) != 0;
        bVar13 = 0xf;
        if (bVar8) {
          bVar13 = 0xf0;
        }
        bVar14 = 0xf0;
        if (bVar8) {
          bVar14 = 0xf;
        }
        uVar10 = uVar10 + 1;
        *(byte *)(lVar4 + uVar12) =
             *(byte *)(lVar4 + uVar12) & bVar14 |
             *(byte *)(param_2 + (ulong)(uVar15 + 2) * 0x200 + uVar12 + 0x6c) & bVar13;
      } while (uVar10 != 0x20);
    }
    else if (*(byte *)(param_2 + 0x69) == 8) {
      uVar12 = 0;
      lVar2 = param_1 + 0xa5;
      do {
        uVar10 = 0;
        do {
          uVar15 = ((uint)(uVar12 >> 4) & 0x7fffffe) + (uVar10 >> 5);
          lVar7 = (ulong)uVar15 * 0x200;
          uVar17 = (ulong)((uVar10 & 0x1e | (int)uVar12 << 5) >> 1);
          lVar4 = lVar2 + lVar7;
          if (3 < uVar15) {
            lVar4 = lVar2;
          }
          bVar8 = (uVar10 & 1) != 0;
          bVar13 = 0xf;
          if (bVar8) {
            bVar13 = 0xf0;
          }
          bVar14 = 0xf0;
          if (bVar8) {
            bVar14 = 0xf;
          }
          uVar10 = uVar10 + 1;
          *(byte *)(lVar4 + uVar17) =
               bVar14 & *(byte *)(lVar4 + uVar17) |
               bVar13 & *(byte *)(param_2 + lVar7 + uVar17 + 0x6c);
        } while (uVar10 != 0x20);
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar10;
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = 0;
        do {
          uVar1 = uVar15 >> 5;
          uVar3 = (uVar10 >> 4 & 0x7fffffe) + (uVar15 + 0x20 >> 5);
          uVar12 = (ulong)((uVar15 & 0x1e | uVar10 << 5) >> 1);
          lVar4 = lVar2 + (ulong)uVar3 * 0x200;
          if (3 < uVar3) {
            lVar4 = lVar2;
          }
          bVar8 = (uVar15 & 1) != 0;
          uVar15 = uVar15 + 1;
          bVar13 = 0xf;
          if (bVar8) {
            bVar13 = 0xf0;
          }
          bVar14 = 0xf0;
          if (bVar8) {
            bVar14 = 0xf;
          }
          *(byte *)(lVar4 + uVar12) =
               *(byte *)(lVar4 + uVar12) & bVar14 |
               *(byte *)(param_2 + (ulong)((uVar10 + 0x20 >> 4 & 0x7fffffe) + uVar1) * 0x200 +
                         uVar12 + 0x6c) & bVar13;
        } while (uVar15 != 0x20);
        uVar10 = uVar10 + 1;
      } while (uVar10 != 0x20);
      uVar10 = 0;
      do {
        uVar15 = 0;
        do {
          uVar1 = uVar15 + 0x20;
          uVar3 = (uVar10 + 0x20 >> 4 & 0x7fffffe) + (uVar15 >> 5);
          uVar12 = (ulong)((uVar15 & 0x1e | uVar10 << 5) >> 1);
          lVar4 = lVar2 + (ulong)uVar3 * 0x200;
          if (3 < uVar3) {
            lVar4 = lVar2;
          }
          bVar8 = (uVar15 & 1) != 0;
          uVar15 = uVar15 + 1;
          bVar13 = 0xf;
          if (bVar8) {
            bVar13 = 0xf0;
          }
          bVar14 = 0xf0;
          if (bVar8) {
            bVar14 = 0xf;
          }
          *(byte *)(lVar4 + uVar12) =
               *(byte *)(lVar4 + uVar12) & bVar14 |
               *(byte *)(param_2 + (ulong)((uVar10 >> 4 & 0x7fffffe) + (uVar1 >> 5)) * 0x200 +
                         uVar12 + 0x6c) & bVar13;
        } while (uVar15 != 0x20);
        uVar10 = uVar10 + 1;
      } while (uVar10 != 0x20);
      iVar11 = 0;
      do {
        uVar10 = 0;
        do {
          uVar15 = (iVar11 + 0x20U >> 4 & 0x7fffffe) + (uVar10 + 0x20 >> 5);
          uVar12 = (ulong)((uVar10 & 0x1e | iVar11 << 5) >> 1);
          lVar7 = (ulong)uVar15 * 0x200;
          lVar4 = lVar2 + lVar7;
          if (3 < uVar15) {
            lVar4 = lVar2;
          }
          bVar8 = (uVar10 & 1) != 0;
          uVar10 = uVar10 + 1;
          bVar13 = 0xf;
          if (bVar8) {
            bVar13 = 0xf0;
          }
          bVar14 = 0xf0;
          if (bVar8) {
            bVar14 = 0xf;
          }
          *(byte *)(lVar4 + uVar12) =
               bVar14 & *(byte *)(lVar4 + uVar12) |
               bVar13 & *(byte *)(param_2 + lVar7 + uVar12 + 0x6c);
        } while (uVar10 != 0x20);
        iVar11 = iVar11 + 1;
      } while (iVar11 != 0x20);
    }
    else {
      uVar12 = 0;
      do {
        uVar10 = 0;
        do {
          uVar15 = ((uint)(uVar12 >> 4) & 0x7fffffe) + (uVar10 >> 5);
          lVar4 = (ulong)uVar15 * 0x200;
          uVar17 = (ulong)((uVar10 & 0x1e | ((uint)uVar12 & 0x1f) << 5) >> 1);
          lVar2 = param_1 + 0xa5 + lVar4;
          if (3 < uVar15) {
            lVar2 = param_1 + 0xa5;
          }
          bVar8 = (uVar10 & 1) != 0;
          bVar13 = 0xf;
          if (bVar8) {
            bVar13 = 0xf0;
          }
          bVar14 = 0xf0;
          if (bVar8) {
            bVar14 = 0xf;
          }
          uVar10 = uVar10 + 1;
          *(byte *)(lVar2 + uVar17) =
               bVar14 & *(byte *)(lVar2 + uVar17) |
               bVar13 & *(byte *)(param_2 + lVar4 + uVar17 + 0x6c);
        } while (uVar10 != 0x40);
        uVar10 = (uint)uVar12 + 1;
        uVar12 = (ulong)uVar10;
      } while (uVar10 != 0x40);
    }
    uVar10 = (uint)*(byte *)(param_2 + 0x69);
    local_170 = (undefined **)CONCAT44(local_170._4_4_,uVar10);
    if (uVar10 < 0xc) {
      uVar9 = (&DAT_04166c34)[(int)uVar10];
    }
    else {
      uVar9 = 0;
    }
    *(undefined1 *)(param_1 + 0x8a5) = uVar9;
    FUN_027c1b80(param_1);
  }
  return;
}

