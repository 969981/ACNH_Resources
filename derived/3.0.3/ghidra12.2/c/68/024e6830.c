
/* WARNING: Removing unreachable block (ram,0x024e6be8) */
/* WARNING: Removing unreachable block (ram,0x024e6d28) */
/* WARNING: Removing unreachable block (ram,0x024e696c) */
/* WARNING: Removing unreachable block (ram,0x024e6b48) */
/* WARNING: Removing unreachable block (ram,0x024e6974) */
/* WARNING: Removing unreachable block (ram,0x024e69ec) */
/* WARNING: Removing unreachable block (ram,0x024e6c88) */
/* WARNING: Removing unreachable block (ram,0x024e6aa8) */
/* WARNING: Removing unreachable block (ram,0x024e7de4) */

void FUN_024e6830(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined *puVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  short *psVar18;
  long lVar19;
  undefined8 *puVar20;
  int *piVar21;
  short sVar22;
  undefined *puVar23;
  long lVar24;
  undefined8 *puVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  long *plVar31;
  ulong uVar32;
  undefined *local_320;
  undefined *puStack_318;
  int local_310;
  int iStack_30c;
  undefined *local_308;
  int local_300;
  int iStack_2fc;
  uint local_2f4;
  undefined *local_2f0;
  undefined *puStack_2e8;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined *local_2d8;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined *local_2c0;
  undefined *puStack_2b8;
  undefined8 local_2b0;
  undefined *local_2a8;
  undefined8 uStack_2a0;
  char local_298 [8];
  undefined *local_290;
  undefined *puStack_288;
  undefined4 local_27c;
  undefined *local_278;
  undefined4 local_26c;
  undefined *local_260;
  undefined *puStack_258;
  undefined4 local_24c;
  undefined *local_248;
  undefined4 local_23c;
  undefined *local_230;
  undefined *puStack_228;
  undefined4 local_21c;
  undefined *local_218;
  undefined4 local_20c;
  undefined *local_200;
  undefined *puStack_1f8;
  undefined4 local_1ec;
  undefined *local_1e8;
  undefined4 local_1dc;
  undefined *local_1d0;
  undefined *puStack_1c8;
  undefined4 local_1bc;
  undefined *local_1b8;
  undefined4 local_1ac;
  undefined *local_1a0;
  undefined *puStack_198;
  undefined4 local_18c;
  undefined *local_188;
  undefined4 local_17c;
  undefined *local_170;
  undefined *local_168;
  undefined4 local_15c;
  undefined *local_158;
  undefined4 local_14c;
  undefined *local_140;
  undefined *local_138;
  undefined8 local_130;
  undefined *local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined *puStack_110;
  undefined8 local_108;
  undefined *local_100;
  undefined8 local_f8;
  short local_f0;
  undefined1 local_ee;
  undefined1 local_ed;
  undefined4 local_ec;
  undefined *local_e8;
  int local_e0;
  int local_dc;
  undefined *local_d8;
  int local_d0;
  undefined4 uStack_cc;
  byte local_c8;
  undefined *local_c0;
  int local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  uint local_6c;
  
  puVar11 = PTR_DAT_04bb27a8;
  local_80 = 0;
  local_78 = 0;
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = 0;
  local_a8 = 0;
  DAT_054e8e48 = 0xffffffff;
  lVar19 = *(long *)PTR_DAT_04bb4c80;
  uVar14 = *(uint *)(lVar19 + 0x2548);
  if (uVar14 == 0) {
    uVar15 = 0;
  }
  else {
    lVar24 = *(long *)(lVar19 + 0x2550);
    uVar15 = 0;
    uVar26 = 0;
    do {
      lVar5 = lVar24 + ((long)((ulong)uVar26 << 0x20) >> 0x1c);
      if (((*(int *)(lVar5 + 8) != -1) && (*(int *)(lVar5 + 0xc) != -1)) && (uVar15 < 0x1fe)) {
        *(uint *)((long)&local_b0 + (ulong)(uVar15 >> 5) * 4) =
             *(uint *)((long)&local_b0 + (ulong)(uVar15 >> 5) * 4) | 1 << (ulong)(uVar15 & 0x1f);
      }
      uVar26 = uVar26 + 1;
      uVar15 = uVar15 + 1;
    } while (uVar14 != uVar26);
  }
  puVar6 = (uint *)(lVar19 + 0x2558);
  uVar32 = 0;
  lVar19 = *(long *)PTR_DAT_04bb27a8;
  puVar1 = PTR_DAT_04bc43f8 + 0x10;
  do {
    uVar14 = (uint)uVar32;
    local_320 = (undefined *)CONCAT44(local_320._4_4_,uVar14);
    local_2c8 = (undefined *)CONCAT44(local_2c8._4_4_,1);
    puVar20 = &DAT_05636dd8;
    if (*(long *)(lVar19 + 0x38) != 0) {
      puVar20 = (undefined8 *)(*(long *)(lVar19 + 0x38) + 0x148);
    }
    if (puVar20[1] == 0) {
LAB_024e6a60:
      if ((uint)local_320 < 8) {
        DAT_054e8e48 = DAT_054e8e48 & (1 << (ulong)((uint)local_320 & 0x1f) ^ 0xffffffffU);
      }
    }
    else {
      local_2c0 = (undefined *)((ulong)local_2c0 & 0xffffffff00000000);
      local_118 = (undefined *)((ulong)local_118 & 0xffffffff00000000);
      local_2c8 = puVar1;
      uVar17 = FUN_02b674f0(&local_118,uVar32);
      if ((uVar17 & 1) != 0) {
        local_2c0 = (undefined *)CONCAT44(local_2c0._4_4_,(undefined4)local_118);
      }
      uVar17 = FUN_02a59140(puVar20,&local_2c8);
      lVar19 = *(long *)puVar11;
      if ((uVar17 & 1) == 0) goto LAB_024e6a60;
      uVar10 = (undefined4)((ulong)local_118 >> 0x20);
      local_118 = (undefined *)((ulong)local_118 & 0xffffffff00000000);
      puVar7 = puVar6 + (uVar32 & 0xffffffff) * 0x18;
      if (7 < uVar14) {
        puVar7 = puVar6;
      }
      uVar26 = *puVar7;
      if (uVar26 != 0) {
        lVar24 = *(long *)(puVar7 + 2);
        uVar27 = 0;
        do {
          lVar5 = lVar24 + ((long)((ulong)uVar27 << 0x20) >> 0x1c);
          if (((*(int *)(lVar5 + 8) != -1) && (*(int *)(lVar5 + 0xc) != -1)) && (uVar15 < 0x1fe)) {
            *(uint *)((long)&local_b0 + (ulong)(uVar15 >> 5) * 4) =
                 *(uint *)((long)&local_b0 + (ulong)(uVar15 >> 5) * 4) | 1 << (ulong)(uVar15 & 0x1f)
            ;
          }
          uVar27 = uVar27 + 1;
          uVar15 = uVar15 + 1;
        } while (uVar26 != uVar27);
      }
      local_118 = (undefined *)CONCAT44(uVar10,1);
      puVar7 = puVar6 + (uVar32 & 0xffffffff) * 0x18;
      if (7 < uVar14) {
        puVar7 = puVar6;
      }
      uVar26 = puVar7[4];
      if (uVar26 != 0) {
        lVar24 = *(long *)(puVar7 + 6);
        uVar27 = 0;
        do {
          lVar5 = lVar24 + ((long)((ulong)uVar27 << 0x20) >> 0x1c);
          if (((*(int *)(lVar5 + 8) != -1) && (*(int *)(lVar5 + 0xc) != -1)) && (uVar15 < 0x1fe)) {
            *(uint *)((long)&local_b0 + (ulong)(uVar15 >> 5) * 4) =
                 *(uint *)((long)&local_b0 + (ulong)(uVar15 >> 5) * 4) | 1 << (ulong)(uVar15 & 0x1f)
            ;
          }
          uVar27 = uVar27 + 1;
          uVar15 = uVar15 + 1;
        } while (uVar26 != uVar27);
      }
      local_118 = (undefined *)CONCAT44(uVar10,2);
      puVar7 = puVar6 + (uVar32 & 0xffffffff) * 0x18;
      if (7 < uVar14) {
        puVar7 = puVar6;
      }
      uVar26 = puVar7[8];
      if (uVar26 != 0) {
        lVar24 = *(long *)(puVar7 + 10);
        uVar27 = 0;
        do {
          lVar5 = lVar24 + ((long)((ulong)uVar27 << 0x20) >> 0x1c);
          if (((*(int *)(lVar5 + 8) != -1) && (*(int *)(lVar5 + 0xc) != -1)) && (uVar15 < 0x1fe)) {
            *(uint *)((long)&local_b0 + (ulong)(uVar15 >> 5) * 4) =
                 *(uint *)((long)&local_b0 + (ulong)(uVar15 >> 5) * 4) | 1 << (ulong)(uVar15 & 0x1f)
            ;
          }
          uVar27 = uVar27 + 1;
          uVar15 = uVar15 + 1;
        } while (uVar26 != uVar27);
      }
      local_118 = (undefined *)CONCAT44(uVar10,3);
      puVar7 = puVar6 + (uVar32 & 0xffffffff) * 0x18;
      if (7 < uVar14) {
        puVar7 = puVar6;
      }
      uVar26 = puVar7[0xc];
      if (uVar26 != 0) {
        lVar24 = *(long *)(puVar7 + 0xe);
        uVar27 = 0;
        do {
          lVar5 = lVar24 + ((long)((ulong)uVar27 << 0x20) >> 0x1c);
          if (((*(int *)(lVar5 + 8) != -1) && (*(int *)(lVar5 + 0xc) != -1)) && (uVar15 < 0x1fe)) {
            *(uint *)((long)&local_b0 + (ulong)(uVar15 >> 5) * 4) =
                 *(uint *)((long)&local_b0 + (ulong)(uVar15 >> 5) * 4) | 1 << (ulong)(uVar15 & 0x1f)
            ;
          }
          uVar27 = uVar27 + 1;
          uVar15 = uVar15 + 1;
        } while (uVar26 != uVar27);
      }
      local_118 = (undefined *)CONCAT44(uVar10,4);
      puVar7 = puVar6 + (uVar32 & 0xffffffff) * 0x18;
      if (7 < uVar14) {
        puVar7 = puVar6;
      }
      uVar26 = puVar7[0x10];
      if (uVar26 != 0) {
        lVar24 = *(long *)(puVar7 + 0x12);
        uVar27 = 0;
        do {
          lVar5 = lVar24 + ((long)((ulong)uVar27 << 0x20) >> 0x1c);
          if (((*(int *)(lVar5 + 8) != -1) && (*(int *)(lVar5 + 0xc) != -1)) && (uVar15 < 0x1fe)) {
            *(uint *)((long)&local_b0 + (ulong)(uVar15 >> 5) * 4) =
                 *(uint *)((long)&local_b0 + (ulong)(uVar15 >> 5) * 4) | 1 << (ulong)(uVar15 & 0x1f)
            ;
          }
          uVar27 = uVar27 + 1;
          uVar15 = uVar15 + 1;
        } while (uVar26 != uVar27);
      }
      local_2c8 = (undefined *)CONCAT44(local_2c8._4_4_,uVar14);
      local_118 = (undefined *)CONCAT44(uVar10,5);
      puVar7 = puVar6 + (uVar32 & 0xffffffff) * 0x18;
      if (7 < uVar14) {
        puVar7 = puVar6;
      }
      uVar14 = puVar7[0x14];
      if (uVar14 != 0) {
        lVar24 = *(long *)(puVar7 + 0x16);
        uVar26 = 0;
        do {
          lVar5 = lVar24 + ((long)((ulong)uVar26 << 0x20) >> 0x1c);
          if (((*(int *)(lVar5 + 8) != -1) && (*(int *)(lVar5 + 0xc) != -1)) && (uVar15 < 0x1fe)) {
            *(uint *)((long)&local_b0 + (ulong)(uVar15 >> 5) * 4) =
                 *(uint *)((long)&local_b0 + (ulong)(uVar15 >> 5) * 4) | 1 << (ulong)(uVar15 & 0x1f)
            ;
          }
          uVar26 = uVar26 + 1;
          uVar15 = uVar15 + 1;
        } while (uVar14 != uVar26);
      }
    }
    uVar32 = uVar32 + 1;
  } while (uVar32 != 8);
  iVar13 = FUN_024f0528(&local_b0);
  puVar1 = PTR_DAT_04bbfe68;
  puVar11 = PTR_DAT_04bb5d40;
  if (iVar13 < 2) {
    *(undefined2 *)(param_1 + 0x1916) = 0;
    *(ushort *)(param_1 + 0x1922) = *(ushort *)(param_1 + 0xd5a) ^ 0x8000;
    iVar13 = (int)((float)(int)*(short *)(param_1 + 0x1910) * 0.25 * 4.0);
    *(int *)(param_1 + 0x1924) = (int)((float)*(int *)(param_1 + 0x190c) * 0.001 * 999.99994);
    *(int *)(param_1 + 0x191e) =
         (int)(((float)*(int *)(param_1 + 0xd44) * 5.0 +
               (float)*(int *)(param_1 + 0xd54) * 5.0 + 5.0) * 0.5 * 999.99994);
    if (0x7ffe < iVar13) {
      iVar13 = 0x7fff;
    }
    if (iVar13 < -0x7fff) {
      iVar13 = -0x8000;
    }
    *(short *)(param_1 + 0x1928) = (short)iVar13;
    *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x1900);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(int *)(param_1 + 0x1918) =
         (int)(((float)*(int *)(param_1 + 0xd40) * 5.0 +
               (float)*(int *)(param_1 + 0xd50) * 5.0 + 5.0) * 0.5 * 999.99994);
    *(undefined8 *)(param_1 + 0x1988) = *(undefined8 *)(param_1 + 0x1908);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1990) = *(undefined8 *)(param_1 + 0x1910);
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(int *)(param_1 + 0x192a) = (int)((float)*(int *)(param_1 + 0x1912) * 0.001 * 999.99994);
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x19ae) = 0;
    *(undefined8 *)(param_1 + 0x19b6) = 0;
    *(undefined8 *)(param_1 + 0x19be) = 0;
    *(undefined8 *)(param_1 + 0x19c6) = 0;
    *(undefined8 *)(param_1 + 0x19ce) = 0;
    *(undefined4 *)(param_1 + 0x19d6) = 0;
    *(undefined8 *)(param_1 + 0x1998) = *(undefined8 *)(param_1 + 0x1918);
    *(undefined8 *)(param_1 + 0x19a6) = *(undefined8 *)(param_1 + 0x1926);
    *(undefined8 *)(param_1 + 0x19a0) = *(undefined8 *)(param_1 + 0x1920);
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
    *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
    lVar19 = *(long *)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
LAB_024e7ffc:
    local_2c8 = (undefined *)CONCAT44(local_2c8._4_4_,0x129);
    lVar24 = 0;
    if (lVar19 != 0) {
      lVar24 = lVar19 + 0x278;
    }
    FUN_03ebb160(lVar24,0x129);
  }
  else {
    iVar13 = 0;
    puVar6 = (uint *)(param_1 + 0xcf0);
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    puVar3 = PTR_DAT_04bbc1a0 + 0x10;
    plVar31 = (long *)PTR_DAT_04bb4c80;
    do {
      uVar14 = FUN_024f0528(&local_b0);
      if ((int)uVar14 < 1) {
        *(undefined2 *)(param_1 + 0x1916) = 0;
        *(ushort *)(param_1 + 0x1922) = *(ushort *)(param_1 + 0xd5a) ^ 0x8000;
        iVar13 = (int)((float)(int)*(short *)(param_1 + 0x1910) * 0.25 * 4.0);
        *(int *)(param_1 + 0x1924) = (int)((float)*(int *)(param_1 + 0x190c) * 0.001 * 999.99994);
        *(int *)(param_1 + 0x191e) =
             (int)(((float)*(int *)(param_1 + 0xd44) * 5.0 +
                   (float)*(int *)(param_1 + 0xd54) * 5.0 + 5.0) * 0.5 * 999.99994);
        if (0x7ffe < iVar13) {
          iVar13 = 0x7fff;
        }
        if (iVar13 < -0x7fff) {
          iVar13 = -0x8000;
        }
        *(short *)(param_1 + 0x1928) = (short)iVar13;
        *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x1900);
        *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
        *(int *)(param_1 + 0x1918) =
             (int)(((float)*(int *)(param_1 + 0xd40) * 5.0 +
                   (float)*(int *)(param_1 + 0xd50) * 5.0 + 5.0) * 0.5 * 999.99994);
        *(undefined8 *)(param_1 + 0x1988) = *(undefined8 *)(param_1 + 0x1908);
        *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
        *(undefined8 *)(param_1 + 0x1990) = *(undefined8 *)(param_1 + 0x1910);
        *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
        *(int *)(param_1 + 0x192a) = (int)((float)*(int *)(param_1 + 0x1912) * 0.001 * 999.99994);
        *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
        *(undefined8 *)(param_1 + 0x19ae) = 0;
        *(undefined8 *)(param_1 + 0x19b6) = 0;
        *(undefined8 *)(param_1 + 0x19be) = 0;
        *(undefined8 *)(param_1 + 0x19c6) = 0;
        *(undefined8 *)(param_1 + 0x19ce) = 0;
        *(undefined4 *)(param_1 + 0x19d6) = 0;
        *(undefined8 *)(param_1 + 0x1998) = *(undefined8 *)(param_1 + 0x1918);
        *(undefined8 *)(param_1 + 0x19a6) = *(undefined8 *)(param_1 + 0x1926);
        *(undefined8 *)(param_1 + 0x19a0) = *(undefined8 *)(param_1 + 0x1920);
        *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
        *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
        *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
        *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
        *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
        *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
        *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
        *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
        *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
        *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
        *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
        *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
        *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
        *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
        *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
        lVar19 = *(long *)(param_1 + 0x70);
        *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
        goto LAB_024e7ffc;
      }
      uVar15 = nn::os::GetSystemTick();
      puVar20 = DAT_055c1b60;
      uVar15 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 1;
      uVar26 = uVar15 ^ uVar15 * 0x800;
      uVar15 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 2;
      uVar15 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 3;
      uVar27 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 4;
      uVar15 = (uint)local_b0 - ((uint)local_b0 >> 1 & 0x55555555);
      uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
      uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
      uVar15 = uVar15 + (uVar15 >> 8);
      uVar15 = uVar15 + (uVar15 >> 0x10) & 0x3f;
      uVar14 = (uint)((ulong)(uVar26 >> 8 ^ uVar27 >> 0x13 ^ uVar26 ^ uVar27) * (ulong)uVar14 >>
                     0x20);
      if (uVar14 < uVar15) {
        iVar28 = 0;
        uVar27 = (uint)local_b0;
        uVar15 = 0;
LAB_024e74e0:
        if (uVar27 != 0) {
          iVar16 = (uVar14 - uVar15) + 2;
          do {
            iVar16 = iVar16 + -1;
            if (iVar16 < 2) {
              uVar14 = uVar27 - 1 & (uVar27 ^ 0xffffffff);
              uVar14 = uVar14 - (uVar14 >> 1 & 0x55555555);
              uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
              uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
              uVar14 = uVar14 + (uVar14 >> 8);
              uVar27 = uVar14 + (uVar14 >> 0x10) & 0x3f;
              goto LAB_024e7548;
            }
            uVar27 = uVar27 - 1 & uVar27;
          } while (uVar27 != 0);
        }
        uVar27 = 0xffffffff;
LAB_024e7548:
        uVar27 = uVar27 + iVar28;
      }
      else {
        uVar26 = local_b0._4_4_ - (local_b0._4_4_ >> 1 & 0x55555555);
        uVar26 = (uVar26 >> 2 & 0x33333333) + (uVar26 & 0x33333333);
        uVar26 = uVar26 + (uVar26 >> 4) & 0xf0f0f0f;
        uVar26 = uVar26 + (uVar26 >> 8);
        uVar26 = (uVar26 + (uVar26 >> 0x10) & 0x3f) + uVar15;
        if (uVar14 < uVar26) {
          iVar28 = 0x20;
          uVar27 = local_b0._4_4_;
          goto LAB_024e74e0;
        }
        uVar15 = (uint)local_a8 - ((uint)local_a8 >> 1 & 0x55555555);
        uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
        uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
        uVar15 = uVar15 + (uVar15 >> 8);
        uVar15 = (uVar15 + (uVar15 >> 0x10) & 0x3f) + uVar26;
        if (uVar14 < uVar15) {
          iVar28 = 0x40;
          uVar27 = (uint)local_a8;
          uVar15 = uVar26;
          goto LAB_024e74e0;
        }
        uVar26 = local_a8._4_4_ - (local_a8._4_4_ >> 1 & 0x55555555);
        uVar26 = (uVar26 >> 2 & 0x33333333) + (uVar26 & 0x33333333);
        uVar26 = uVar26 + (uVar26 >> 4) & 0xf0f0f0f;
        uVar26 = uVar26 + (uVar26 >> 8);
        uVar26 = (uVar26 + (uVar26 >> 0x10) & 0x3f) + uVar15;
        if (uVar14 < uVar26) {
          iVar28 = 0x60;
          uVar27 = local_a8._4_4_;
          goto LAB_024e74e0;
        }
        uVar15 = (uint)local_a0 - ((uint)local_a0 >> 1 & 0x55555555);
        uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
        uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
        uVar15 = uVar15 + (uVar15 >> 8);
        uVar15 = (uVar15 + (uVar15 >> 0x10) & 0x3f) + uVar26;
        if (uVar14 < uVar15) {
          iVar28 = 0x80;
          uVar27 = (uint)local_a0;
          uVar15 = uVar26;
          goto LAB_024e74e0;
        }
        uVar26 = local_a0._4_4_ - (local_a0._4_4_ >> 1 & 0x55555555);
        uVar26 = (uVar26 >> 2 & 0x33333333) + (uVar26 & 0x33333333);
        uVar26 = uVar26 + (uVar26 >> 4) & 0xf0f0f0f;
        uVar26 = uVar26 + (uVar26 >> 8);
        uVar26 = (uVar26 + (uVar26 >> 0x10) & 0x3f) + uVar15;
        if (uVar14 < uVar26) {
          iVar28 = 0xa0;
          uVar27 = local_a0._4_4_;
          goto LAB_024e74e0;
        }
        uVar15 = (uint)local_98 - ((uint)local_98 >> 1 & 0x55555555);
        uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
        uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
        uVar15 = uVar15 + (uVar15 >> 8);
        uVar15 = (uVar15 + (uVar15 >> 0x10) & 0x3f) + uVar26;
        if (uVar14 < uVar15) {
          iVar28 = 0xc0;
          uVar27 = (uint)local_98;
          uVar15 = uVar26;
          goto LAB_024e74e0;
        }
        uVar26 = local_98._4_4_ - (local_98._4_4_ >> 1 & 0x55555555);
        uVar26 = (uVar26 >> 2 & 0x33333333) + (uVar26 & 0x33333333);
        uVar26 = uVar26 + (uVar26 >> 4) & 0xf0f0f0f;
        uVar26 = uVar26 + (uVar26 >> 8);
        uVar26 = (uVar26 + (uVar26 >> 0x10) & 0x3f) + uVar15;
        if (uVar14 < uVar26) {
          iVar28 = 0xe0;
          uVar27 = local_98._4_4_;
          goto LAB_024e74e0;
        }
        uVar15 = (uint)local_90 - ((uint)local_90 >> 1 & 0x55555555);
        uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
        uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
        uVar15 = uVar15 + (uVar15 >> 8);
        uVar15 = (uVar15 + (uVar15 >> 0x10) & 0x3f) + uVar26;
        if (uVar14 < uVar15) {
          iVar28 = 0x100;
          uVar27 = (uint)local_90;
          uVar15 = uVar26;
          goto LAB_024e74e0;
        }
        uVar26 = local_90._4_4_ - (local_90._4_4_ >> 1 & 0x55555555);
        uVar26 = (uVar26 >> 2 & 0x33333333) + (uVar26 & 0x33333333);
        uVar26 = uVar26 + (uVar26 >> 4) & 0xf0f0f0f;
        uVar26 = uVar26 + (uVar26 >> 8);
        uVar26 = (uVar26 + (uVar26 >> 0x10) & 0x3f) + uVar15;
        if (uVar14 < uVar26) {
          iVar28 = 0x120;
          uVar27 = local_90._4_4_;
          goto LAB_024e74e0;
        }
        uVar15 = (uint)local_88 - ((uint)local_88 >> 1 & 0x55555555);
        uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
        uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
        uVar15 = uVar15 + (uVar15 >> 8);
        uVar15 = (uVar15 + (uVar15 >> 0x10) & 0x3f) + uVar26;
        if (uVar14 < uVar15) {
          iVar28 = 0x140;
          uVar27 = (uint)local_88;
          uVar15 = uVar26;
          goto LAB_024e74e0;
        }
        uVar26 = local_88._4_4_ - (local_88._4_4_ >> 1 & 0x55555555);
        uVar26 = (uVar26 >> 2 & 0x33333333) + (uVar26 & 0x33333333);
        uVar26 = uVar26 + (uVar26 >> 4) & 0xf0f0f0f;
        uVar26 = uVar26 + (uVar26 >> 8);
        uVar26 = (uVar26 + (uVar26 >> 0x10) & 0x3f) + uVar15;
        if (uVar14 < uVar26) {
          iVar28 = 0x160;
          uVar27 = local_88._4_4_;
          goto LAB_024e74e0;
        }
        uVar15 = (uint)local_80 - ((uint)local_80 >> 1 & 0x55555555);
        uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
        uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
        uVar15 = uVar15 + (uVar15 >> 8);
        uVar15 = (uVar15 + (uVar15 >> 0x10) & 0x3f) + uVar26;
        if (uVar14 < uVar15) {
          iVar28 = 0x180;
          uVar27 = (uint)local_80;
          uVar15 = uVar26;
          goto LAB_024e74e0;
        }
        uVar26 = local_80._4_4_ - (local_80._4_4_ >> 1 & 0x55555555);
        uVar26 = (uVar26 >> 2 & 0x33333333) + (uVar26 & 0x33333333);
        uVar26 = uVar26 + (uVar26 >> 4) & 0xf0f0f0f;
        uVar26 = uVar26 + (uVar26 >> 8);
        uVar26 = (uVar26 + (uVar26 >> 0x10) & 0x3f) + uVar15;
        if (uVar14 < uVar26) {
          iVar28 = 0x1a0;
          uVar27 = local_80._4_4_;
          goto LAB_024e74e0;
        }
        uVar15 = (uint)local_78 - ((uint)local_78 >> 1 & 0x55555555);
        uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
        uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
        uVar15 = uVar15 + (uVar15 >> 8);
        uVar15 = (uVar15 + (uVar15 >> 0x10) & 0x3f) + uVar26;
        if (uVar14 < uVar15) {
          iVar28 = 0x1c0;
          uVar27 = (uint)local_78;
          uVar15 = uVar26;
          goto LAB_024e74e0;
        }
        uVar26 = local_78._4_4_ - (local_78._4_4_ >> 1 & 0x55555555);
        uVar26 = (uVar26 >> 2 & 0x33333333) + (uVar26 & 0x33333333);
        uVar26 = uVar26 + (uVar26 >> 4) & 0xf0f0f0f;
        uVar27 = 0xffffffff;
        uVar26 = uVar26 + (uVar26 >> 8);
        if (uVar14 < (uVar26 + (uVar26 >> 0x10) & 0x3f) + uVar15) {
          iVar28 = 0x1e0;
          uVar27 = local_78._4_4_;
          goto LAB_024e74e0;
        }
      }
      local_b8 = *(int *)(puVar11 + 8);
      local_b4 = *(int *)(puVar11 + 0xc);
      lVar19 = *plVar31;
      local_c0 = puVar2;
      if ((int)uVar27 < 0x1e) {
        iVar28 = 0x6622bd46;
        uVar14 = uVar27;
        if (*(uint *)(lVar19 + 0x2548) <= uVar27) {
          uVar14 = 0;
        }
        lVar19 = *(long *)(lVar19 + 0x2550) + (long)(int)uVar14 * 0x10;
        local_b8 = *(int *)(lVar19 + 8);
        local_b4 = *(int *)(lVar19 + 0xc);
LAB_024e7730:
        *(int *)(param_1 + 0xd60) = iVar28;
        if (puVar20 == &DAT_055c1b58) {
LAB_024e77b8:
          puVar25 = &DAT_055c04a0;
        }
        else {
          puVar25 = puVar20 + -8;
          sVar22 = 0;
          puVar29 = puVar20;
          puVar30 = puVar25;
          do {
            if (*(int *)(puVar30 + 7) == iVar28) {
              if (sVar22 == 0) goto LAB_024e77c0;
              goto LAB_024e7790;
            }
            puVar29 = (undefined8 *)puVar29[1];
            sVar22 = sVar22 + 1;
            puVar30 = puVar29 + -8;
          } while (puVar29 != &DAT_055c1b58);
          sVar22 = -1;
LAB_024e7790:
          do {
            puVar20 = (undefined8 *)puVar20[1];
            sVar22 = sVar22 + -1;
          } while (puVar20 != &DAT_055c1b58 && sVar22 != 0);
          puVar25 = puVar20 + -8;
          if (puVar25 == &DAT_055c1b18) goto LAB_024e77b8;
        }
LAB_024e77c0:
        uVar32 = 0;
        iVar16 = *(int *)(puVar25 + 7);
        piVar21 = (int *)(PTR_DAT_04bbbf90 + 0x10);
        do {
          local_d0 = (int)uVar32;
          if (piVar21[-2] == iVar16) {
LAB_024e784c:
            puVar23 = PTR_DAT_04bbbf90 + uVar32 * 4;
            local_d8 = puVar1;
            goto LAB_024e7860;
          }
          if (piVar21[-1] == iVar16) {
            uVar32 = (ulong)(local_d0 + 1);
            local_d0 = local_d0 + 1;
            goto LAB_024e784c;
          }
          if (*piVar21 == iVar16) {
            uVar32 = (ulong)(local_d0 + 2);
            local_d0 = local_d0 + 2;
            goto LAB_024e784c;
          }
          uVar32 = uVar32 + 3;
          piVar21 = piVar21 + 3;
        } while ((int)uVar32 - 3U < 0x36);
        local_d0 = 0;
        uVar32 = 0;
        puVar23 = PTR_DAT_04bbbf90;
        local_d8 = PTR_DAT_04bbfe68;
LAB_024e7860:
        local_d8 = local_d8 + 0x10;
        uStack_cc = *(undefined4 *)(puVar23 + 8);
        local_c8 = FUN_017baf44();
        local_c8 = local_c8 & 1;
        local_e0 = *(int *)(puVar11 + 8);
        local_dc = *(int *)(puVar11 + 0xc);
        local_e8 = PTR_DAT_04bb2010 + 0x10;
        psVar18 = (short *)FUN_01a5190c(&local_d8,0,&local_c0,&local_e8);
        local_ee = (char)psVar18[1];
        local_f0 = *psVar18;
        local_ed = *(undefined1 *)((long)psVar18 + 3);
        local_ec = *(undefined4 *)(psVar18 + 2);
        if (((*psVar18 != -2) && (local_e0 == local_b8)) &&
           ((local_dc == local_b4 &&
            ((iVar16 = FUN_0277d6c4(&local_f0), iVar16 == 0x35ff &&
             (uVar17 = FUN_0277e294(&local_f0), (uVar17 & 1) != 0)))))) {
          lVar19 = *(long *)PTR_DAT_04bb2720;
          if ((lVar19 == 0) || (*(long *)(lVar19 + 0x330) == 0)) {
            puVar20 = &DAT_055c04a0;
          }
          else {
            puVar20 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
            iVar16 = FUN_006bd550(*puVar20,0);
            puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar16 != 0x758f7eaf) {
              puVar20 = &DAT_055c04a0;
            }
          }
          if (((*(int *)(puVar20 + 7) != *(int *)(param_1 + 0xd60)) ||
              (*(int *)(param_1 + 0xd18) != local_b8)) || (*(int *)(param_1 + 0xd1c) != local_b4)) {
            local_2c8 = (undefined *)0x35ff;
            FUN_0277d4ac(&local_2c8);
            local_108 = 0;
            puVar23 = PTR_DAT_04bb2010 + 0x10;
            local_f8 = 0;
            local_118 = puVar3;
            puStack_110 = puVar23;
            local_100 = puVar23;
            FUN_0277f02c(&local_2c8,&local_118);
            local_108 = CONCAT44(local_108._4_4_ + local_b4,(int)local_108 + local_b8);
            local_f8 = CONCAT44(local_f8._4_4_ + local_b4,(int)local_f8 + local_b8);
            uVar17 = FUN_024e4f80(&local_118,iVar28);
            if ((uVar17 & 1) == 0) {
              plVar31 = (long *)PTR_DAT_04bb4c80;
              goto LAB_024e7044;
            }
            FUN_024e5c00(&local_118,iVar28);
            local_2c8 = (undefined *)((ulong)local_2c8 & 0xffffffffffffff00);
            uStack_2a0 = 0;
            puVar4 = PTR_DAT_04bbc1a0 + 0x10;
            local_2b0 = 0;
            local_2c0 = puVar4;
            puStack_2b8 = puVar23;
            local_2a8 = puVar23;
            memset(local_298,0,0x158);
            local_27c = 0;
            local_26c = 0;
            local_24c = 0;
            local_23c = 0;
            local_21c = 0;
            local_20c = 0;
            local_1ec = 0;
            local_1dc = 0;
            local_1bc = 0;
            local_1ac = 0;
            local_18c = 0;
            local_17c = 0;
            local_15c = 0;
            local_14c = 0;
            local_120 = 0;
            local_130 = 0;
            local_290 = puVar4;
            puStack_288 = puVar23;
            local_278 = puVar23;
            local_260 = puVar4;
            puStack_258 = puVar23;
            local_248 = puVar23;
            local_230 = puVar4;
            puStack_228 = puVar23;
            local_218 = puVar23;
            local_200 = puVar4;
            puStack_1f8 = puVar23;
            local_1e8 = puVar23;
            local_1d0 = puVar4;
            puStack_1c8 = puVar23;
            local_1b8 = puVar23;
            local_1a0 = puVar4;
            puStack_198 = puVar23;
            local_188 = puVar23;
            local_170 = puVar4;
            local_168 = puVar23;
            local_158 = puVar23;
            local_140 = puVar4;
            local_138 = puVar23;
            local_128 = puVar23;
            uVar17 = FUN_017baf44(iVar28);
            if ((uVar17 & 1) == 0) {
LAB_024e7b84:
              FUN_024e8030();
              lVar19 = 0;
              do {
                local_2f4 = *(uint *)((long)&DAT_054e8e4c + lVar19);
                local_310 = (int)local_108;
                iStack_30c = local_108._4_4_;
                local_320 = PTR_DAT_04bbc1a0 + 0x10;
                puStack_318 = PTR_DAT_04bb2010 + 0x10;
                local_300 = (int)local_f8;
                iStack_2fc = local_f8._4_4_;
                switch(local_2f4) {
                case 0:
                  goto LAB_024e7cc4;
                case 1:
                  local_310 = (int)local_108 + 2;
                  local_300 = (int)local_f8 + 2;
                  goto LAB_024e7cc4;
                case 2:
                  local_310 = (int)local_108 + 2;
                  local_300 = (int)local_f8 + 2;
                  break;
                case 3:
                  local_310 = (int)local_108 + 2;
                  iStack_30c = local_108._4_4_ + -2;
                  local_300 = (int)local_f8 + 2;
                  iStack_2fc = local_f8._4_4_ + -2;
                  break;
                case 4:
                  iStack_30c = local_108._4_4_ + -2;
                  iStack_2fc = local_f8._4_4_ + -2;
                  break;
                case 5:
                  local_310 = (int)local_108 + -2;
                  iStack_30c = local_108._4_4_ + -2;
                  iStack_2fc = local_f8._4_4_ + -2;
                  local_300 = (int)local_f8 + -2;
                  break;
                case 6:
                  local_310 = (int)local_108 + -2;
                  local_300 = (int)local_f8 + -2;
                  break;
                case 7:
                  local_310 = (int)local_108 + -2;
                  local_300 = (int)local_f8 + -2;
LAB_024e7cc4:
                  iStack_30c = local_108._4_4_ + 2;
                  iStack_2fc = local_f8._4_4_ + 2;
                }
                local_308 = puStack_318;
                local_6c = local_2f4;
                uVar32 = FUN_017baf44(iVar28);
                if ((uVar32 & 1) == 0) {
LAB_024e7cd8:
                  uVar32 = FUN_024e5df0(&local_320,&local_118,iVar28,1);
                  if ((((uVar32 & 1) != 0) &&
                      (uVar32 = FUN_024e5350(&local_320,&local_118,iVar28), (uVar32 & 1) != 0)) &&
                     (uVar32 = FUN_024e85e0(&local_320,iVar28,param_1 + 0x1ee8,
                                            *(undefined4 *)(param_1 + 0x230)), (uVar32 & 1) == 0)) {
                    *(int *)(param_1 + 0xd70) = local_b8;
                    *(int *)(param_1 + 0xd74) = local_b4;
                    *(int *)(param_1 + 0xd88) = local_310;
                    *(int *)(param_1 + 0xd8c) = iStack_30c;
                    *(int *)(param_1 + 0xd98) = local_300;
                    *(int *)(param_1 + 0xd9c) = iStack_2fc;
                    *(int *)(param_1 + 0xda0) =
                         (int)(long)((float)(int)local_2f4 * 45.0 * 11930465.0);
                    local_6c = 5;
                    *puVar6 = *puVar6 | 0x20;
                    break;
                  }
                }
                else {
                  pcVar9 = local_298 + (ulong)local_2f4 * 0x30;
                  if (7 < local_2f4) {
                    pcVar9 = local_298;
                  }
                  if (*pcVar9 == '\0') goto LAB_024e7cd8;
                }
                lVar19 = lVar19 + 4;
              } while (lVar19 != 0x20);
              local_320 = (undefined *)CONCAT44(local_320._4_4_,5);
              if ((*puVar6 >> 5 & 1) != 0) {
                return;
              }
            }
            else {
              local_2e0 = (int)local_108;
              uStack_2dc = local_108._4_4_;
              puStack_2e8 = PTR_DAT_04bb2010 + 0x10;
              local_2d0 = (int)local_f8;
              uStack_2cc = local_f8._4_4_;
              local_2f0 = puVar4;
              local_2d8 = puStack_2e8;
              FUN_0149f110(&local_2c8,uVar32,2,&local_2f0);
              local_2f0 = puVar4;
              if ((char)local_2c8 == '\0') goto LAB_024e7b84;
            }
            plVar31 = (long *)PTR_DAT_04bb4c80;
            if (uVar27 < 0x1fe) {
              *(uint *)((long)&local_b0 + (ulong)(uVar27 >> 5) * 4) =
                   *(uint *)((long)&local_b0 + (ulong)(uVar27 >> 5) * 4) &
                   (1 << (ulong)(uVar27 & 0x1f) ^ 0xffffffffU);
            }
            goto LAB_024e7044;
          }
        }
        if (uVar27 < 0x1fe) {
          *(uint *)((long)&local_b0 + (ulong)(uVar27 >> 5) * 4) =
               *(uint *)((long)&local_b0 + (ulong)(uVar27 >> 5) * 4) &
               (1 << (ulong)(uVar27 & 0x1f) ^ 0xffffffffU);
        }
      }
      else if (uVar27 < 0x1fe) {
        uVar14 = (uVar27 - 0x1e & 0xffff) / 0x3c;
        if (DAT_054e8e48 == 0) {
LAB_024e7618:
          uVar26 = 0xffffffff;
        }
        else {
          uVar15 = DAT_054e8e48 - (DAT_054e8e48 >> 1 & 0x55555555);
          uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
          uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
          uVar15 = uVar15 + (uVar15 >> 8);
          uVar26 = 0xffffffff;
          if (uVar14 < (uVar15 + (uVar15 >> 0x10) & 0x3f)) {
            iVar28 = uVar14 + 2;
            uVar15 = DAT_054e8e48;
            do {
              iVar28 = iVar28 + -1;
              if (iVar28 < 2) {
                uVar15 = uVar15 - 1 & (uVar15 ^ 0xffffffff);
                uVar15 = uVar15 - (uVar15 >> 1 & 0x55555555);
                uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
                uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
                uVar15 = uVar15 + (uVar15 >> 8);
                uVar26 = uVar15 + (uVar15 >> 0x10) & 0x3f;
                goto LAB_024e7650;
              }
              uVar15 = uVar15 - 1 & uVar15;
            } while (uVar15 != 0);
            goto LAB_024e7618;
          }
        }
LAB_024e7650:
        iVar28 = uVar14 * -0x3c + (uVar27 - 0x1e);
        uVar15 = (int)(short)iVar28 / 10;
        uVar14 = iVar28 + uVar15 * -10;
        puVar7 = (uint *)(lVar19 + 0x2558) + (ulong)uVar26 * 0x18;
        if (7 < uVar26) {
          puVar7 = (uint *)(lVar19 + 0x2558);
        }
        puVar8 = puVar7 + (ulong)uVar15 * 4;
        if (5 < uVar15) {
          puVar8 = puVar7;
        }
        if (*puVar8 <= uVar14) {
          uVar14 = 0;
        }
        lVar19 = *(long *)(puVar8 + 2) + (long)(int)uVar14 * 0x10;
        local_b8 = *(int *)(lVar19 + 8);
        local_b4 = *(int *)(lVar19 + 0xc);
        local_2c8 = (undefined *)CONCAT44(local_2c8._4_4_,uVar26);
        local_118 = (undefined *)CONCAT44(local_118._4_4_,uVar15);
        lVar19 = DAT_05636ea0 + (long)(int)(DAT_05636e98 * uVar26) * 4;
        if (DAT_05636e9c <= uVar26 || DAT_05636e98 == 0) {
          lVar19 = 0;
        }
        bVar12 = lVar19 == 0;
        lVar24 = (long)(int)uVar15;
        if ((int)DAT_05636e98 < 1 || bVar12) {
          lVar19 = 0;
        }
        if (((int)DAT_05636e98 < 1 || bVar12) || DAT_05636e98 <= uVar15) {
          lVar24 = 0;
        }
        iVar28 = *(int *)(lVar19 + lVar24 * 4);
        goto LAB_024e7730;
      }
LAB_024e7044:
      iVar13 = iVar13 + 1;
    } while (iVar13 != 10);
  }
  return;
}

