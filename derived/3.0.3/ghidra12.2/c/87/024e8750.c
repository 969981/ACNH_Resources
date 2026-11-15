
/* WARNING: Removing unreachable block (ram,0x024e8b5c) */
/* WARNING: Removing unreachable block (ram,0x024e8a3c) */
/* WARNING: Removing unreachable block (ram,0x024e891c) */
/* WARNING: Removing unreachable block (ram,0x024e89ac) */
/* WARNING: Removing unreachable block (ram,0x024e8acc) */
/* WARNING: Removing unreachable block (ram,0x024e8be8) */

void FUN_024e8750(long param_1)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  short *psVar12;
  ulong uVar13;
  undefined8 *puVar14;
  uint uVar15;
  int iVar16;
  undefined8 *puVar17;
  int *piVar18;
  int iVar19;
  long lVar20;
  undefined *puVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  long lVar25;
  uint uVar26;
  long lVar27;
  short sVar28;
  uint uVar29;
  ulong uVar30;
  undefined *local_2e8;
  undefined *puStack_2e0;
  int local_2d8;
  int iStack_2d4;
  undefined *local_2d0;
  int local_2c8;
  int iStack_2c4;
  uint local_2bc;
  undefined *local_2b8;
  undefined *puStack_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined *local_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined8 local_290;
  undefined *local_288;
  undefined *puStack_280;
  undefined8 local_278;
  undefined *local_270;
  undefined8 uStack_268;
  char local_260 [8];
  undefined *local_258;
  undefined *puStack_250;
  undefined4 local_244;
  undefined *local_240;
  undefined4 local_234;
  undefined *local_228;
  undefined *puStack_220;
  undefined4 local_214;
  undefined *local_210;
  undefined4 local_204;
  undefined *local_1f8;
  undefined *puStack_1f0;
  undefined4 local_1e4;
  undefined *local_1e0;
  undefined4 local_1d4;
  undefined *local_1c8;
  undefined *puStack_1c0;
  undefined4 local_1b4;
  undefined *local_1b0;
  undefined4 local_1a4;
  undefined *local_198;
  undefined *puStack_190;
  undefined4 local_184;
  undefined *local_180;
  undefined4 local_174;
  undefined *local_168;
  undefined *puStack_160;
  undefined4 local_154;
  undefined *local_150;
  undefined4 local_144;
  undefined *local_138;
  undefined *puStack_130;
  undefined4 local_124;
  undefined *local_120;
  undefined4 local_114;
  undefined *local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  short local_b8;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined *local_b0;
  int local_a8;
  int local_a4;
  undefined *local_a0;
  int local_98;
  undefined4 uStack_94;
  byte local_90;
  undefined *local_88;
  int local_80;
  int local_7c;
  uint local_78 [6];
  
  puVar9 = PTR_DAT_04bbfe68;
  local_78[2] = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  lVar20 = *(long *)PTR_DAT_04bb4c80;
  uVar29 = *(uint *)(lVar20 + 0x2870);
  if (uVar29 == 0) {
    uVar15 = 0;
  }
  else {
    lVar25 = *(long *)(lVar20 + 0x2878);
    uVar15 = 0;
    uVar26 = 0;
    do {
      lVar27 = lVar25 + ((long)((ulong)uVar26 << 0x20) >> 0x1c);
      if (((*(int *)(lVar27 + 8) != -1) && (*(int *)(lVar27 + 0xc) != -1)) && (uVar15 < 0x5a)) {
        local_78[uVar15 >> 5] = local_78[uVar15 >> 5] | 1 << (ulong)(uVar15 & 0x1f);
      }
      uVar26 = uVar26 + 1;
      uVar15 = uVar15 + 1;
    } while (uVar29 != uVar26);
  }
  lVar25 = *(long *)PTR_DAT_04bbc218;
  if (*(long *)(lVar25 + 0x210) != lVar25 + 0x208) {
    lVar22 = (long)*(int *)(lVar25 + 0x21c);
    lVar27 = *(long *)(lVar25 + 0x210) - lVar22;
    puVar17 = DAT_055c1b60 + -8;
    do {
      if (((*(uint *)(lVar27 + 0x1c) & 0xfffffffe) == 0x1a) &&
         ((*(ushort *)(lVar27 + 0x3f8) & 6) != 0)) {
        puVar24 = puVar17;
        bVar8 = DAT_055c1b60 == &DAT_055c1b58;
        if ((puVar17 != &DAT_055c1b18) && (sVar28 = *(short *)(lVar27 + 0x24), sVar28 != 0)) {
          puVar14 = DAT_055c1b60;
          do {
            puVar14 = (undefined8 *)puVar14[1];
            sVar28 = sVar28 + -1;
          } while (puVar14 != &DAT_055c1b58 && sVar28 != 0);
          puVar24 = puVar14 + -8;
          bVar8 = puVar14 == &DAT_055c1b58;
        }
        puVar14 = &DAT_055c04a0;
        if (!bVar8) {
          puVar14 = puVar24;
        }
        if (*(int *)(puVar14 + 7) == -0x24a26848) goto LAB_024e8c68;
      }
      lVar27 = *(long *)(lVar27 + lVar22 + 8) - lVar22;
    } while (lVar27 != (lVar25 + 0x208) - lVar22);
  }
  uVar29 = *(uint *)(lVar20 + 0x2880);
  if (uVar29 != 0) {
    lVar25 = *(long *)(lVar20 + 0x2888);
    uVar26 = 0;
    do {
      lVar27 = lVar25 + ((long)((ulong)uVar26 << 0x20) >> 0x1c);
      if (((*(int *)(lVar27 + 8) != -1) && (*(int *)(lVar27 + 0xc) != -1)) && (uVar15 < 0x5a)) {
        local_78[uVar15 >> 5] = local_78[uVar15 >> 5] | 1 << (ulong)(uVar15 & 0x1f);
      }
      uVar26 = uVar26 + 1;
      uVar15 = uVar15 + 1;
    } while (uVar29 != uVar26);
  }
  uVar29 = *(uint *)(lVar20 + 0x2890);
  if (uVar29 != 0) {
    lVar25 = *(long *)(lVar20 + 0x2898);
    uVar26 = 0;
    do {
      lVar27 = lVar25 + ((long)((ulong)uVar26 << 0x20) >> 0x1c);
      if (((*(int *)(lVar27 + 8) != -1) && (*(int *)(lVar27 + 0xc) != -1)) && (uVar15 < 0x5a)) {
        local_78[uVar15 >> 5] = local_78[uVar15 >> 5] | 1 << (ulong)(uVar15 & 0x1f);
      }
      uVar26 = uVar26 + 1;
      uVar15 = uVar15 + 1;
    } while (uVar29 != uVar26);
  }
  uVar29 = *(uint *)(lVar20 + 0x28a0);
  if (uVar29 != 0) {
    lVar25 = *(long *)(lVar20 + 0x28a8);
    uVar26 = 0;
    do {
      lVar27 = lVar25 + ((long)((ulong)uVar26 << 0x20) >> 0x1c);
      if (((*(int *)(lVar27 + 8) != -1) && (*(int *)(lVar27 + 0xc) != -1)) && (uVar15 < 0x5a)) {
        local_78[uVar15 >> 5] = local_78[uVar15 >> 5] | 1 << (ulong)(uVar15 & 0x1f);
      }
      uVar26 = uVar26 + 1;
      uVar15 = uVar15 + 1;
    } while (uVar29 != uVar26);
  }
  uVar29 = *(uint *)(lVar20 + 0x28b0);
  if (uVar29 != 0) {
    lVar25 = *(long *)(lVar20 + 0x28b8);
    uVar26 = 0;
    do {
      lVar27 = lVar25 + ((long)((ulong)uVar26 << 0x20) >> 0x1c);
      if (((*(int *)(lVar27 + 8) != -1) && (*(int *)(lVar27 + 0xc) != -1)) && (uVar15 < 0x5a)) {
        local_78[uVar15 >> 5] = local_78[uVar15 >> 5] | 1 << (ulong)(uVar15 & 0x1f);
      }
      uVar26 = uVar26 + 1;
      uVar15 = uVar15 + 1;
    } while (uVar29 != uVar26);
  }
  uVar29 = *(uint *)(lVar20 + 0x28c0);
  if (uVar29 != 0) {
    lVar25 = *(long *)(lVar20 + 0x28c8);
    uVar26 = 0;
    do {
      lVar27 = lVar25 + ((long)((ulong)uVar26 << 0x20) >> 0x1c);
      if (((*(int *)(lVar27 + 8) != -1) && (*(int *)(lVar27 + 0xc) != -1)) && (uVar15 < 0x5a)) {
        local_78[uVar15 >> 5] = local_78[uVar15 >> 5] | 1 << (ulong)(uVar15 & 0x1f);
      }
      uVar26 = uVar26 + 1;
      uVar15 = uVar15 + 1;
    } while (uVar29 != uVar26);
  }
  local_290 = CONCAT44((int)(local_290 >> 0x20),5);
  uVar29 = *(uint *)(lVar20 + 0x28d0);
  if (uVar29 != 0) {
    lVar20 = *(long *)(lVar20 + 0x28d8);
    uVar26 = 0;
    do {
      lVar25 = lVar20 + ((long)((ulong)uVar26 << 0x20) >> 0x1c);
      if (((*(int *)(lVar25 + 8) != -1) && (*(int *)(lVar25 + 0xc) != -1)) && (uVar15 < 0x5a)) {
        local_78[uVar15 >> 5] = local_78[uVar15 >> 5] | 1 << (ulong)(uVar15 & 0x1f);
      }
      uVar26 = uVar26 + 1;
      uVar15 = uVar15 + 1;
    } while (uVar29 != uVar26);
  }
LAB_024e8c68:
  uVar29 = local_78[0] - (local_78[0] >> 1 & 0x55555555);
  uVar15 = local_78[1] - (local_78[1] >> 1 & 0x55555555);
  uVar29 = (uVar29 >> 2 & 0x33333333) + (uVar29 & 0x33333333);
  uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
  uVar29 = uVar29 + (uVar29 >> 4) & 0xf0f0f0f;
  uVar29 = uVar29 + (uVar29 >> 8);
  uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
  uVar15 = uVar15 + (uVar15 >> 8);
  uVar26 = local_78[2] - (local_78[2] >> 1 & 0x55555555);
  uVar26 = (uVar26 >> 2 & 0x33333333) + (uVar26 & 0x33333333);
  uVar26 = uVar26 + (uVar26 >> 4) & 0xf0f0f0f;
  uVar26 = uVar26 + (uVar26 >> 8);
  if ((uVar15 + (uVar15 >> 0x10) & 0x3f) + (uVar29 + (uVar29 >> 0x10) & 0x3f) +
      (uVar26 + (uVar26 >> 0x10) & 0x3f) < 2) {
    *(undefined2 *)(param_1 + 0x1916) = 0;
    *(ushort *)(param_1 + 0x1922) = *(ushort *)(param_1 + 0xd5a) ^ 0x8000;
    iVar16 = (int)((float)(int)*(short *)(param_1 + 0x1910) * 0.25 * 4.0);
    *(int *)(param_1 + 0x1924) = (int)((float)*(int *)(param_1 + 0x190c) * 0.001 * 999.99994);
    *(int *)(param_1 + 0x1918) =
         (int)(((float)*(int *)(param_1 + 0xd40) * 5.0 +
               (float)*(int *)(param_1 + 0xd50) * 5.0 + 5.0) * 0.5 * 999.99994);
    *(int *)(param_1 + 0x191e) =
         (int)(((float)*(int *)(param_1 + 0xd44) * 5.0 +
               (float)*(int *)(param_1 + 0xd54) * 5.0 + 5.0) * 0.5 * 999.99994);
    if (0x7ffe < iVar16) {
      iVar16 = 0x7fff;
    }
    if (iVar16 < -0x7fff) {
      iVar16 = -0x8000;
    }
    *(short *)(param_1 + 0x1928) = (short)iVar16;
    *(int *)(param_1 + 0x192a) = (int)((float)*(int *)(param_1 + 0x1912) * 0.001 * 999.99994);
LAB_024e983c:
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    *(undefined8 *)(param_1 + 0x1980) = *(undefined8 *)(param_1 + 0x1900);
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1988) = *(undefined8 *)(param_1 + 0x1908);
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    *(undefined8 *)(param_1 + 0x19a6) = *(undefined8 *)(param_1 + 0x1926);
    *(undefined8 *)(param_1 + 0x19ae) = 0;
    *(undefined8 *)(param_1 + 0x19b6) = 0;
    *(undefined8 *)(param_1 + 0x19be) = 0;
    *(undefined8 *)(param_1 + 0x19c6) = 0;
    *(undefined8 *)(param_1 + 0x19ce) = 0;
    *(undefined4 *)(param_1 + 0x19d6) = 0;
    *(undefined8 *)(param_1 + 0x19a0) = *(undefined8 *)(param_1 + 0x1920);
    *(undefined8 *)(param_1 + 0x1998) = *(undefined8 *)(param_1 + 0x1918);
    *(undefined8 *)(param_1 + 0x1990) = *(undefined8 *)(param_1 + 0x1910);
    local_290 = CONCAT44(local_290._4_4_,0x129);
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
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
    lVar20 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar20 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar20,0x129);
  }
  else {
    puVar1 = (uint *)(param_1 + 0xcf0);
    iVar16 = 0;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    puVar3 = PTR_DAT_04bbc1a0 + 0x10;
    do {
      uVar29 = local_78[0] - (local_78[0] >> 1 & 0x55555555);
      uVar15 = local_78[1] - (local_78[1] >> 1 & 0x55555555);
      uVar10 = local_78[2] - (local_78[2] >> 1 & 0x55555555);
      uVar29 = (uVar29 >> 2 & 0x33333333) + (uVar29 & 0x33333333);
      uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
      uVar29 = uVar29 + (uVar29 >> 4) & 0xf0f0f0f;
      uVar29 = uVar29 + (uVar29 >> 8);
      uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
      uVar15 = uVar15 + (uVar15 >> 8);
      uVar26 = uVar29 + (uVar29 >> 0x10) & 0x3f;
      uVar29 = (uVar15 + (uVar15 >> 0x10) & 0x3f) + uVar26;
      uVar15 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
      uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
      uVar15 = uVar15 + (uVar15 >> 8);
      uVar15 = uVar29 + (uVar15 + (uVar15 >> 0x10) & 0x3f);
      if (uVar15 == 0) {
        *(undefined2 *)(param_1 + 0x1916) = 0;
        *(ushort *)(param_1 + 0x1922) = *(ushort *)(param_1 + 0xd5a) ^ 0x8000;
        iVar16 = (int)((float)(int)*(short *)(param_1 + 0x1910) * 0.25 * 4.0);
        *(int *)(param_1 + 0x1924) = (int)((float)*(int *)(param_1 + 0x190c) * 0.001 * 999.99994);
        *(int *)(param_1 + 0x1918) =
             (int)(((float)*(int *)(param_1 + 0xd40) * 5.0 +
                   (float)*(int *)(param_1 + 0xd50) * 5.0 + 5.0) * 0.5 * 999.99994);
        *(int *)(param_1 + 0x191e) =
             (int)(((float)*(int *)(param_1 + 0xd44) * 5.0 +
                   (float)*(int *)(param_1 + 0xd54) * 5.0 + 5.0) * 0.5 * 999.99994);
        if (0x7ffe < iVar16) {
          iVar16 = 0x7fff;
        }
        if (iVar16 < -0x7fff) {
          iVar16 = -0x8000;
        }
        *(short *)(param_1 + 0x1928) = (short)iVar16;
        *(int *)(param_1 + 0x192a) = (int)((float)*(int *)(param_1 + 0x1912) * 0.001 * 999.99994);
        goto LAB_024e983c;
      }
      uVar10 = nn::os::GetSystemTick();
      puVar17 = DAT_055c1b60;
      uVar7 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
      uVar10 = uVar7 ^ uVar7 * 0x800;
      uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 2;
      uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 3;
      uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 4;
      uVar10 = (uint)((ulong)(uVar10 >> 8 ^ uVar7 >> 0x13 ^ uVar10 ^ uVar7) * (ulong)uVar15 >> 0x20)
      ;
      if (uVar10 < uVar26) {
        lVar20 = 0;
        uVar29 = 0;
LAB_024e8f94:
        uVar15 = local_78[lVar20];
        if (uVar15 != 0) {
          iVar19 = (uVar10 - uVar29) + 2;
          do {
            iVar19 = iVar19 + -1;
            if (iVar19 < 2) {
              uVar29 = uVar15 - 1 & (uVar15 ^ 0xffffffff);
              uVar29 = uVar29 - (uVar29 >> 1 & 0x55555555);
              uVar29 = (uVar29 >> 2 & 0x33333333) + (uVar29 & 0x33333333);
              uVar29 = uVar29 + (uVar29 >> 4) & 0xf0f0f0f;
              uVar29 = uVar29 + (uVar29 >> 8);
              uVar26 = uVar29 + (uVar29 >> 0x10) & 0x3f;
              goto LAB_024e9000;
            }
            uVar15 = uVar15 - 1 & uVar15;
          } while (uVar15 != 0);
        }
        uVar26 = 0xffffffff;
LAB_024e9000:
        uVar26 = uVar26 + (int)lVar20 * 0x20;
      }
      else {
        if (uVar10 < uVar29) {
          lVar20 = 1;
          uVar29 = uVar26;
          goto LAB_024e8f94;
        }
        uVar26 = 0xffffffff;
        if (uVar10 < uVar15) {
          lVar20 = 2;
          goto LAB_024e8f94;
        }
      }
      local_80 = *(int *)(PTR_DAT_04bb5d40 + 8);
      local_7c = *(int *)(PTR_DAT_04bb5d40 + 0xc);
      lVar20 = *(long *)PTR_DAT_04bb4c80;
      local_88 = puVar2;
      if ((int)uVar26 < 0x1e) {
        iVar19 = -0x24a26848;
        uVar29 = uVar26;
        if (*(uint *)(lVar20 + 0x2870) <= uVar26) {
          uVar29 = 0;
        }
        lVar20 = *(long *)(lVar20 + 0x2878) + (long)(int)uVar29 * 0x10;
        local_80 = *(int *)(lVar20 + 8);
        local_7c = *(int *)(lVar20 + 0xc);
LAB_024e90e0:
        *(int *)(param_1 + 0xd60) = iVar19;
        if (puVar17 == &DAT_055c1b58) {
LAB_024e9168:
          puVar23 = &DAT_055c04a0;
        }
        else {
          puVar23 = puVar17 + -8;
          sVar28 = 0;
          puVar24 = puVar17;
          puVar14 = puVar23;
          do {
            if (*(int *)(puVar14 + 7) == iVar19) {
              if (sVar28 != 0) goto LAB_024e9140;
              goto LAB_024e9170;
            }
            puVar24 = (undefined8 *)puVar24[1];
            sVar28 = sVar28 + 1;
            puVar14 = puVar24 + -8;
          } while (puVar24 != &DAT_055c1b58);
          sVar28 = -1;
LAB_024e9140:
          do {
            puVar17 = (undefined8 *)puVar17[1];
            sVar28 = sVar28 + -1;
          } while (puVar17 != &DAT_055c1b58 && sVar28 != 0);
          puVar23 = puVar17 + -8;
          if (puVar23 == &DAT_055c1b18) goto LAB_024e9168;
        }
LAB_024e9170:
        uVar30 = 0;
        iVar11 = *(int *)(puVar23 + 7);
        piVar18 = (int *)(PTR_DAT_04bbbf90 + 0x10);
        do {
          local_98 = (int)uVar30;
          if (piVar18[-2] == iVar11) {
LAB_024e91fc:
            puVar21 = PTR_DAT_04bbbf90 + uVar30 * 4;
            local_a0 = puVar9;
            goto LAB_024e9210;
          }
          if (piVar18[-1] == iVar11) {
            uVar30 = (ulong)(local_98 + 1);
            local_98 = local_98 + 1;
            goto LAB_024e91fc;
          }
          if (*piVar18 == iVar11) {
            uVar30 = (ulong)(local_98 + 2);
            local_98 = local_98 + 2;
            goto LAB_024e91fc;
          }
          uVar30 = uVar30 + 3;
          piVar18 = piVar18 + 3;
        } while ((int)uVar30 - 3U < 0x36);
        local_98 = 0;
        uVar30 = 0;
        puVar21 = PTR_DAT_04bbbf90;
        local_a0 = PTR_DAT_04bbfe68;
LAB_024e9210:
        local_a0 = local_a0 + 0x10;
        uStack_94 = *(undefined4 *)(puVar21 + 8);
        local_90 = FUN_017baf44();
        local_90 = local_90 & 1;
        local_a8 = *(int *)(PTR_DAT_04bb5d40 + 8);
        local_a4 = *(int *)(PTR_DAT_04bb5d40 + 0xc);
        local_b0 = PTR_DAT_04bb2010 + 0x10;
        psVar12 = (short *)FUN_01a5190c(&local_a0,0,&local_88,&local_b0);
        local_b6 = (char)psVar12[1];
        local_b8 = *psVar12;
        local_b5 = *(undefined1 *)((long)psVar12 + 3);
        local_b4 = *(undefined4 *)(psVar12 + 2);
        if (((*psVar12 != -2) && (local_a8 == local_80)) && (local_a4 == local_7c)) {
          iVar11 = FUN_0277d6c4(&local_b8);
          if (iVar11 == 0x35ff) {
            uVar13 = FUN_0277e294(&local_b8);
            if ((uVar13 & 1) != 0) {
              lVar20 = *(long *)PTR_DAT_04bb2720;
              if ((lVar20 == 0) || (*(long *)(lVar20 + 0x330) == 0)) {
                puVar17 = &DAT_055c04a0;
              }
              else {
                puVar17 = (undefined8 *)
                          (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                    (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
                iVar11 = FUN_006bd550(*puVar17,0);
                puVar17 = (undefined8 *)PTR_DAT_04bc3a80;
                if (iVar11 != 0x758f7eaf) {
                  puVar17 = &DAT_055c04a0;
                }
              }
              if (((*(int *)(puVar17 + 7) != *(int *)(param_1 + 0xd60)) ||
                  (*(int *)(param_1 + 0xd18) != local_80)) ||
                 (*(int *)(param_1 + 0xd1c) != local_7c)) {
                local_290 = 0x35ff;
                FUN_0277d4ac(&local_290);
                local_d0 = 0;
                puVar21 = PTR_DAT_04bb2010 + 0x10;
                local_c0 = 0;
                local_e0 = puVar3;
                puStack_d8 = puVar21;
                local_c8 = puVar21;
                FUN_0277f02c(&local_290,&local_e0);
                local_d0 = CONCAT44(local_d0._4_4_ + local_7c,(int)local_d0 + local_80);
                local_c0 = CONCAT44(local_c0._4_4_ + local_7c,(int)local_c0 + local_80);
                uVar13 = FUN_024e4f80(&local_e0,iVar19);
                if ((uVar13 & 1) == 0) goto LAB_024e8e60;
                FUN_024e5c00(&local_e0,iVar19);
                local_290 = local_290 & 0xffffffffffffff00;
                uStack_268 = 0;
                puVar4 = PTR_DAT_04bbc1a0 + 0x10;
                local_278 = 0;
                local_288 = puVar4;
                puStack_280 = puVar21;
                local_270 = puVar21;
                memset(local_260,0,0x158);
                local_244 = 0;
                local_234 = 0;
                local_214 = 0;
                local_204 = 0;
                local_1e4 = 0;
                local_1d4 = 0;
                local_1b4 = 0;
                local_1a4 = 0;
                local_184 = 0;
                local_174 = 0;
                local_154 = 0;
                local_144 = 0;
                local_124 = 0;
                local_114 = 0;
                local_e8 = 0;
                local_f8 = 0;
                local_258 = puVar4;
                puStack_250 = puVar21;
                local_240 = puVar21;
                local_228 = puVar4;
                puStack_220 = puVar21;
                local_210 = puVar21;
                local_1f8 = puVar4;
                puStack_1f0 = puVar21;
                local_1e0 = puVar21;
                local_1c8 = puVar4;
                puStack_1c0 = puVar21;
                local_1b0 = puVar21;
                local_198 = puVar4;
                puStack_190 = puVar21;
                local_180 = puVar21;
                local_168 = puVar4;
                puStack_160 = puVar21;
                local_150 = puVar21;
                local_138 = puVar4;
                puStack_130 = puVar21;
                local_120 = puVar21;
                local_108 = puVar4;
                local_100 = puVar21;
                local_f0 = puVar21;
                uVar13 = FUN_017baf44(iVar19);
                if ((uVar13 & 1) != 0) {
                  local_2a8 = (int)local_d0;
                  uStack_2a4 = local_d0._4_4_;
                  puStack_2b0 = PTR_DAT_04bb2010 + 0x10;
                  local_298 = (int)local_c0;
                  uStack_294 = local_c0._4_4_;
                  local_2b8 = puVar4;
                  local_2a0 = puStack_2b0;
                  FUN_0149f110(&local_290,uVar30,2,&local_2b8);
                  local_2b8 = puVar4;
                  if ((char)local_290 != '\0') goto LAB_024e9720;
                }
                FUN_024e8030();
                lVar20 = 0;
                do {
                  local_2bc = *(uint *)((long)&DAT_054e8e4c + lVar20);
                  local_2d8 = (int)local_d0;
                  iStack_2d4 = local_d0._4_4_;
                  local_2e8 = PTR_DAT_04bbc1a0 + 0x10;
                  puStack_2e0 = PTR_DAT_04bb2010 + 0x10;
                  local_2c8 = (int)local_c0;
                  iStack_2c4 = local_c0._4_4_;
                  switch(local_2bc) {
                  case 0:
                    goto LAB_024e9614;
                  case 1:
                    local_2d8 = (int)local_d0 + 2;
                    local_2c8 = (int)local_c0 + 2;
                    goto LAB_024e9614;
                  case 2:
                    local_2d8 = (int)local_d0 + 2;
                    local_2c8 = (int)local_c0 + 2;
                    break;
                  case 3:
                    local_2d8 = (int)local_d0 + 2;
                    iStack_2d4 = local_d0._4_4_ + -2;
                    local_2c8 = (int)local_c0 + 2;
                    iStack_2c4 = local_c0._4_4_ + -2;
                    break;
                  case 4:
                    iStack_2d4 = local_d0._4_4_ + -2;
                    iStack_2c4 = local_c0._4_4_ + -2;
                    break;
                  case 5:
                    local_2d8 = (int)local_d0 + -2;
                    iStack_2d4 = local_d0._4_4_ + -2;
                    iStack_2c4 = local_c0._4_4_ + -2;
                    local_2c8 = (int)local_c0 + -2;
                    break;
                  case 6:
                    local_2d8 = (int)local_d0 + -2;
                    local_2c8 = (int)local_c0 + -2;
                    break;
                  case 7:
                    local_2d8 = (int)local_d0 + -2;
                    local_2c8 = (int)local_c0 + -2;
LAB_024e9614:
                    iStack_2d4 = local_d0._4_4_ + 2;
                    iStack_2c4 = local_c0._4_4_ + 2;
                  }
                  local_2d0 = puStack_2e0;
                  local_78[3] = local_2bc;
                  uVar30 = FUN_017baf44(iVar19);
                  if ((uVar30 & 1) == 0) {
LAB_024e9628:
                    uVar30 = FUN_024e5df0(&local_2e8,&local_e0,iVar19,1);
                    if ((((uVar30 & 1) != 0) &&
                        (uVar30 = FUN_024e5350(&local_2e8,&local_e0,iVar19), (uVar30 & 1) != 0)) &&
                       (uVar30 = FUN_024e85e0(&local_2e8,iVar19,param_1 + 0x1ee8,
                                              *(undefined4 *)(param_1 + 0x230)), (uVar30 & 1) == 0))
                    {
                      *(int *)(param_1 + 0xd70) = local_80;
                      *(int *)(param_1 + 0xd74) = local_7c;
                      *(int *)(param_1 + 0xd88) = local_2d8;
                      *(int *)(param_1 + 0xd8c) = iStack_2d4;
                      *(int *)(param_1 + 0xd98) = local_2c8;
                      *(int *)(param_1 + 0xd9c) = iStack_2c4;
                      *(int *)(param_1 + 0xda0) =
                           (int)(long)((float)(int)local_2bc * 45.0 * 11930465.0);
                      local_78[3] = 5;
                      *puVar1 = *puVar1 | 0x20;
                      break;
                    }
                  }
                  else {
                    pcVar6 = local_260 + (ulong)local_2bc * 0x30;
                    if (7 < local_2bc) {
                      pcVar6 = local_260;
                    }
                    if (*pcVar6 == '\0') goto LAB_024e9628;
                  }
                  lVar20 = lVar20 + 4;
                } while (lVar20 != 0x20);
                local_2e8 = (undefined *)CONCAT44(local_2e8._4_4_,5);
                if ((*puVar1 >> 5 & 1) != 0) {
                  return;
                }
              }
            }
          }
        }
LAB_024e9720:
        if (uVar26 < 0x5a) {
          local_78[uVar26 >> 5] =
               local_78[uVar26 >> 5] & (1 << (ulong)(uVar26 & 0x1f) ^ 0xffffffffU);
        }
      }
      else if (uVar26 < 0x5a) {
        uVar15 = (uVar26 - 0x1e & 0xff) / 10;
        uVar29 = (uVar26 - 0x1e) + uVar15 * -10;
        puVar5 = (uint *)(lVar20 + 0x2880) + (ulong)uVar15 * 4;
        if (5 < uVar15) {
          puVar5 = (uint *)(lVar20 + 0x2880);
        }
        if (*puVar5 <= uVar29) {
          uVar29 = 0;
        }
        lVar20 = *(long *)(puVar5 + 2) + (long)(int)uVar29 * 0x10;
        local_80 = *(int *)(lVar20 + 8);
        local_7c = *(int *)(lVar20 + 0xc);
        local_290 = CONCAT44(local_290._4_4_,uVar15);
        if (5 < uVar15) {
          uVar15 = 0;
        }
        iVar19 = (&DAT_041675d8)[(int)uVar15];
        goto LAB_024e90e0;
      }
LAB_024e8e60:
      iVar16 = iVar16 + 1;
    } while (iVar16 != 10);
  }
  return;
}

