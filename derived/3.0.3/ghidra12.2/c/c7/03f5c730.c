
void FUN_03f5c730(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long *plVar20;
  
  plVar20 = (long *)(param_1 + 0x34e160);
  if (*plVar20 != 0) {
    puVar18 = (undefined8 *)(param_1 + 0x3821f0);
    puVar19 = (undefined8 *)(param_1 + 0x37e1f0);
    FUN_03fe6b10(param_1 + 0x3761b8);
    lVar9 = *plVar20;
    uVar3 = *(uint *)(param_1 + 0x34e168);
    lVar7 = 0;
    cVar4 = *(char *)(param_1 + 0x3cbd31);
    iVar13 = 0;
    lVar14 = param_1 + 0x3881b9;
    lVar8 = param_1 + 0x3891b9;
    lVar15 = param_1 + 0x37e1e8;
    do {
      lVar1 = lVar15 + lVar7;
      *(long *)(lVar1 + -0x2030) = lVar9 + iVar13;
      *(long *)(lVar1 + -0x6030) = lVar9 + iVar13;
      uVar5 = 0;
      if (uVar3 != 0) {
        uVar5 = (iVar13 + 0x800U) / uVar3;
      }
      iVar13 = (iVar13 + 0x800U) - uVar5 * uVar3;
      lVar16 = lVar9 + iVar13;
      uVar5 = iVar13 + 0x800;
      *(long *)(lVar1 + -0x2028) = lVar16;
      *(long *)(lVar1 + -0x6028) = lVar16;
      uVar6 = 0;
      if (uVar3 != 0) {
        uVar6 = uVar5 / uVar3;
      }
      iVar13 = uVar5 - uVar6 * uVar3;
      lVar16 = lVar9 + iVar13;
      uVar5 = iVar13 + 0x800;
      *(long *)(lVar1 + -0x2020) = lVar16;
      *(long *)(lVar1 + -0x6020) = lVar16;
      uVar6 = 0;
      if (uVar3 != 0) {
        uVar6 = uVar5 / uVar3;
      }
      iVar13 = uVar5 - uVar6 * uVar3;
      lVar16 = lVar9 + iVar13;
      uVar5 = iVar13 + 0x800;
      *(long *)(lVar1 + -0x2018) = lVar16;
      *(long *)(lVar1 + -0x6018) = lVar16;
      uVar6 = 0;
      if (uVar3 != 0) {
        uVar6 = uVar5 / uVar3;
      }
      iVar13 = uVar5 - uVar6 * uVar3;
      lVar16 = lVar9 + iVar13;
      uVar5 = iVar13 + 0x800;
      *(long *)(lVar1 + -0x2010) = lVar16;
      *(long *)(lVar1 + -0x6010) = lVar16;
      uVar6 = 0;
      if (uVar3 != 0) {
        uVar6 = uVar5 / uVar3;
      }
      iVar13 = uVar5 - uVar6 * uVar3;
      lVar16 = lVar9 + iVar13;
      uVar5 = iVar13 + 0x800;
      *(long *)(lVar1 + -0x2008) = lVar16;
      *(long *)(lVar1 + -0x6008) = lVar16;
      uVar6 = 0;
      if (uVar3 != 0) {
        uVar6 = uVar5 / uVar3;
      }
      iVar13 = uVar5 - uVar6 * uVar3;
      lVar16 = lVar9 + iVar13;
      uVar5 = iVar13 + 0x800;
      *(long *)(lVar1 + -0x2000) = lVar16;
      *(long *)(lVar1 + -0x6000) = lVar16;
      uVar6 = 0;
      if (uVar3 != 0) {
        uVar6 = uVar5 / uVar3;
      }
      iVar13 = uVar5 - uVar6 * uVar3;
      lVar16 = lVar9 + iVar13;
      *(long *)(lVar1 + -0x1ff8) = lVar16;
      *(long *)(lVar1 + -0x5ff8) = lVar16;
      if (cVar4 == '\0') {
        *(long *)(lVar1 + -0x2000) = lVar14;
        *(long *)(lVar1 + -0x6000) = lVar14;
        *(long *)(lVar1 + 0x6000) = lVar14;
        *(long *)(lVar1 + 0x4000) = lVar14;
        *(long *)(lVar1 + 0x2000) = lVar14;
        *(long *)(lVar15 + lVar7) = lVar14;
        *(long *)(lVar1 + -0x4000) = lVar14;
        *(long *)(lVar1 + 0x6008) = lVar8;
        *(long *)(lVar1 + 0x2008) = lVar8;
        *(long *)(lVar1 + -0x1ff8) = lVar8;
        *(long *)(lVar1 + -0x5ff8) = lVar8;
        lVar16 = lVar8;
        lVar17 = lVar14;
      }
      else {
        *(undefined8 *)(lVar1 + 0x4000) = 5;
        *(undefined8 *)(lVar15 + lVar7) = 5;
        *(undefined8 *)(lVar1 + -0x4000) = 5;
        lVar16 = 5;
        lVar17 = 5;
      }
      uVar5 = iVar13 + 0x800;
      *(long *)(lVar1 + -0x8000) = lVar17;
      uVar6 = 0;
      if (uVar3 != 0) {
        uVar6 = uVar5 / uVar3;
      }
      lVar7 = lVar7 + 0x80;
      *(long *)(lVar1 + -0x3ff8) = lVar16;
      *(long *)(lVar1 + 0x4008) = lVar16;
      *(long *)(lVar1 + -0x7ff8) = lVar16;
      *(long *)(lVar1 + 8) = lVar16;
      iVar13 = uVar5 - uVar6 * uVar3;
    } while (lVar7 != 0x2000);
    uVar10 = 0;
    plVar12 = (long *)(param_1 + 0x3761f8);
    lVar14 = -0x400000;
    lVar8 = *plVar20;
    uVar3 = *(uint *)(param_1 + 0x34e168);
    do {
      iVar13 = (int)lVar14;
      uVar5 = iVar13 + 0x401000;
      uVar6 = 0;
      if (uVar3 != 0) {
        uVar6 = (iVar13 + 0x400000U) / uVar3;
      }
      lVar15 = lVar8 + (ulong)((iVar13 + 0x400000U) - uVar6 * uVar3);
      if (uVar10 < 0x7e) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar5 / uVar3;
        }
        plVar12[0x800] = lVar15;
        lVar7 = lVar8 + (ulong)(uVar5 - uVar6 * uVar3);
        plVar12[0x801] = lVar7;
        *plVar12 = lVar15;
        plVar12[1] = lVar7;
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = (iVar13 + 0x402000U) / uVar3;
        }
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = (iVar13 + 0x403000U) / uVar3;
        }
        lVar15 = lVar8 + (ulong)((iVar13 + 0x402000U) - uVar5 * uVar3);
        plVar12[0x802] = lVar15;
        lVar7 = lVar8 + (ulong)((iVar13 + 0x403000U) - uVar6 * uVar3);
        plVar12[2] = lVar15;
        plVar12[3] = lVar7;
        plVar12[0x803] = lVar7;
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = (iVar13 + 0x404000U) / uVar3;
        }
        lVar15 = lVar8 + (ulong)((iVar13 + 0x404000U) - uVar5 * uVar3);
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = (iVar13 + 0x405000U) / uVar3;
        }
        plVar12[0x804] = lVar15;
        lVar7 = lVar8 + (ulong)((iVar13 + 0x405000U) - uVar5 * uVar3);
        plVar12[4] = lVar15;
        plVar12[5] = lVar7;
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = (iVar13 + 0x406000U) / uVar3;
        }
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = (iVar13 + 0x407000U) / uVar3;
        }
        lVar15 = lVar8 + (ulong)((iVar13 + 0x406000U) - uVar5 * uVar3);
        lVar9 = lVar8 + (ulong)((iVar13 + 0x407000U) - uVar6 * uVar3);
        plVar12[6] = lVar15;
        plVar12[7] = lVar9;
      }
      else {
        plVar12[0x800] = lVar15;
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar5 / uVar3;
        }
        plVar12[0x801] = lVar8 + (ulong)(uVar5 - uVar6 * uVar3);
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = (iVar13 + 0x402000U) / uVar3;
        }
        plVar12[0x802] = lVar8 + (ulong)((iVar13 + 0x402000U) - uVar5 * uVar3);
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = (iVar13 + 0x403000U) / uVar3;
        }
        plVar12[0x803] = lVar8 + (ulong)((iVar13 + 0x403000U) - uVar5 * uVar3);
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = (iVar13 + 0x404000U) / uVar3;
        }
        plVar12[0x804] = lVar8 + (ulong)((iVar13 + 0x404000U) - uVar5 * uVar3);
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = (iVar13 + 0x405000U) / uVar3;
        }
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = (iVar13 + 0x406000U) / uVar3;
        }
        lVar7 = lVar8 + (ulong)((iVar13 + 0x405000U) - uVar5 * uVar3);
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = (iVar13 + 0x407000U) / uVar3;
        }
        lVar15 = lVar8 + (ulong)((iVar13 + 0x406000U) - uVar6 * uVar3);
        lVar9 = lVar8 + (ulong)((iVar13 + 0x407000U) - uVar5 * uVar3);
      }
      plVar12[0x805] = lVar7;
      uVar10 = uVar10 + 1;
      lVar14 = lVar14 + 0x8000;
      plVar12[0x806] = lVar15;
      plVar12[0x807] = lVar9;
      plVar12 = plVar12 + 0x10;
    } while (lVar14 != 0);
    if (*(char *)(param_1 + 0x3cbd31) != '\0') {
      lVar14 = 0;
      do {
        puVar11 = (undefined8 *)(param_1 + 0x37fa30 + lVar14);
        puVar2 = (undefined8 *)(param_1 + 0x3779f8 + lVar14);
        lVar14 = lVar14 + 0x80;
        puVar11[-7] = 5;
        puVar11[-6] = 5;
        *puVar2 = 5;
        puVar2[1] = 5;
        puVar11[-5] = 5;
        puVar11[-4] = 5;
        puVar2[2] = 5;
        puVar2[3] = 5;
        puVar11[-3] = 5;
        puVar11[-2] = 5;
        puVar2[4] = 5;
        puVar2[5] = 5;
        puVar11[-1] = 5;
        *puVar11 = 5;
        puVar2[6] = 5;
        puVar2[7] = 5;
      } while (lVar14 != 0x800);
    }
    if (*(char *)(param_1 + 0x3cbd32) != '\0') {
      lVar14 = 0;
      do {
        puVar11 = (undefined8 *)(param_1 + 0x37f230 + lVar14);
        puVar2 = (undefined8 *)(param_1 + 0x3771f8 + lVar14);
        lVar14 = lVar14 + 0x80;
        puVar11[-7] = 0xd;
        puVar11[-6] = 0xd;
        *puVar2 = 0xd;
        puVar2[1] = 0xd;
        puVar11[-5] = 0xd;
        puVar11[-4] = 0xd;
        puVar2[2] = 0xd;
        puVar2[3] = 0xd;
        puVar11[-3] = 0xd;
        puVar11[-2] = 0xd;
        puVar2[4] = 0xd;
        puVar2[5] = 0xd;
        puVar11[-1] = 0xd;
        *puVar11 = 0xd;
        puVar2[6] = 0xd;
        puVar2[7] = 0xd;
      } while (lVar14 != 0x1000);
    }
    if (*(char *)(param_1 + 0x3cbd33) != '\0') {
      lVar14 = 0;
      plVar20 = (long *)(param_1 + 0x3781b8);
      do {
        lVar15 = lVar8 + lVar14;
        lVar14 = lVar14 + 0x10000;
        plVar20[0x1000] = 0;
        plVar20[0x1001] = 0;
        *plVar20 = lVar15;
        plVar20[1] = lVar15 + 0x1000;
        plVar20[2] = lVar15 + 0x2000;
        plVar20[3] = lVar15 + 0x3000;
        plVar20[4] = lVar15 + 0x4000;
        plVar20[5] = lVar15 + 0x5000;
        plVar20[6] = lVar15 + 0x6000;
        plVar20[7] = lVar15 + 0x7000;
        plVar20[8] = lVar15 + 0x8000;
        plVar20[9] = lVar15 + 0x9000;
        plVar20[10] = lVar15 + 0xa000;
        plVar20[0xb] = lVar15 + 0xb000;
        plVar20[0xc] = lVar15 + 0xc000;
        plVar20[0xd] = lVar15 + 0xd000;
        plVar20[0xe] = lVar15 + 0xe000;
        plVar20[0xf] = lVar15 + 0xf000;
        plVar20[0x1002] = 0;
        plVar20[0x1003] = 0;
        plVar20[0x1004] = 0;
        plVar20[0x1005] = 0;
        plVar20[0x1006] = 0;
        plVar20[0x1007] = 0;
        plVar20[0x1008] = 0;
        plVar20[0x1009] = 0;
        plVar20[0x100a] = 0;
        plVar20[0x100b] = 0;
        plVar20[0x100c] = 0;
        plVar20[0x100d] = 0;
        plVar20[0x100e] = 0;
        plVar20[0x100f] = 0;
        plVar20 = plVar20 + 0x10;
      } while (lVar14 != 0x400000);
    }
    FUN_03f5ce40(param_1);
    lVar14 = 0xe;
    puVar11 = (undefined8 *)(param_1 + 0x3799b8);
    do {
      puVar11[0x800] = 3;
      *puVar11 = 3;
      puVar11[1] = 3;
      lVar14 = lVar14 + -1;
      puVar11[0x801] = 3;
      puVar11[0x802] = 3;
      puVar11[0x803] = 3;
      puVar11[0x804] = 3;
      puVar11[0x805] = 3;
      puVar11[0x806] = 3;
      puVar11[0x807] = 3;
      puVar11[2] = 3;
      puVar11[3] = 3;
      puVar11[4] = 3;
      puVar11[5] = 3;
      puVar11[6] = 3;
      puVar11[7] = 3;
      puVar11[0x1000] = 3;
      puVar11[0x1001] = 3;
      puVar11[0x1800] = 3;
      puVar11[0x1801] = 3;
      puVar11[0x1002] = 3;
      puVar11[0x1003] = 3;
      puVar11[0x1802] = 3;
      puVar11[0x1803] = 3;
      puVar11[0x1004] = 3;
      puVar11[0x1005] = 3;
      puVar11[0x1804] = 3;
      puVar11[0x1805] = 3;
      puVar11[0x1006] = 3;
      puVar11[0x1007] = 3;
      puVar11[0x1806] = 3;
      puVar11[0x1807] = 3;
      puVar11 = puVar11 + 0x10;
    } while (lVar14 != 0);
    if (*(char *)(param_1 + 0x3cbd33) != '\0') {
      lVar14 = 0x40;
      puVar11 = (undefined8 *)(param_1 + 0x3761e8);
      do {
        puVar11[0x800] = 0xb;
        *puVar11 = 0xb;
        puVar11[1] = 0xb;
        lVar14 = lVar14 + -1;
        puVar11[0x801] = 0xb;
        puVar11[0x1000] = 0xb;
        puVar11[0x1001] = 0xb;
        puVar11[0x1800] = 0xb;
        puVar11[0x1801] = 0xb;
        puVar11 = puVar11 + 0x10;
      } while (lVar14 != 0);
      *(undefined8 *)(FUN_003819b4 + param_1 + 4) = 0xc;
      *(undefined8 *)(param_1 + 0x3819c0) = 0xc;
      *(undefined8 *)(param_1 + 0x3819c8) = 0xc;
      *(undefined8 *)(param_1 + 0x3819d0) = 0xc;
      *(undefined8 *)(param_1 + 0x3819d8) = 0xc;
      *(undefined8 *)(param_1 + 0x3819e0) = 0xc;
      *(undefined8 *)(param_1 + 0x3819e8) = 0xc;
      *(undefined8 *)(param_1 + 0x3819f0) = 0xc;
      *(undefined8 *)(param_1 + 0x3819f8) = 0xc;
      *(undefined8 *)(param_1 + 0x381a00) = 0xc;
      *(undefined8 *)(param_1 + 0x381a08) = 0xc;
      *(undefined8 *)(param_1 + 0x381a10) = 0xc;
      *(undefined8 *)(param_1 + 0x381a18) = 0xc;
      *(undefined8 *)(param_1 + 0x381a20) = 0xc;
      *(undefined8 *)(param_1 + 0x381a28) = 0xc;
      *(undefined8 *)(param_1 + 0x381a30) = 0xc;
      *(undefined8 *)(param_1 + 0x381a38) = 0xc;
      *(undefined8 *)(param_1 + 0x381a40) = 0xc;
      *(undefined8 *)(param_1 + 0x381a48) = 0xc;
      *(undefined8 *)(param_1 + 0x381a50) = 0xc;
      *(undefined8 *)(param_1 + 0x381a58) = 0xc;
      *(undefined8 *)(param_1 + 0x381a60) = 0xc;
      *(undefined8 *)(param_1 + 0x381a68) = 0xc;
      *(undefined8 *)(param_1 + 0x381a70) = 0xc;
      *(undefined8 *)(param_1 + 0x381a78) = 0xc;
      *(undefined8 *)(param_1 + 0x381a80) = 0xc;
      *(undefined8 *)(param_1 + 0x381a88) = 0xc;
      *(undefined8 *)(param_1 + 0x381a90) = 0xc;
      *(undefined8 *)(param_1 + 0x381a98) = 0xc;
      *(undefined8 *)(param_1 + 0x381aa0) = 0xc;
      *(undefined8 *)(param_1 + 0x381aa8) = 0xc;
      *(undefined8 *)(param_1 + 0x381ab0) = 0xc;
      *(undefined8 *)(param_1 + 0x3799b8) = 0xc;
      *(undefined8 *)(param_1 + 0x3799c0) = 0xc;
      *(undefined8 *)(param_1 + 0x3799c8) = 0xc;
      *(undefined8 *)(param_1 + 0x3799d0) = 0xc;
      *(undefined8 *)(param_1 + 0x3799d8) = 0xc;
      *(undefined8 *)(param_1 + 0x3799e0) = 0xc;
      *(undefined8 *)(param_1 + 0x3799e8) = 0xc;
      *(undefined8 *)(param_1 + 0x3799f0) = 0xc;
      *(undefined8 *)(param_1 + 0x3799f8) = 0xc;
      *(undefined8 *)(param_1 + 0x379a00) = 0xc;
      *(undefined8 *)(param_1 + 0x379a08) = 0xc;
      *(undefined8 *)(param_1 + 0x379a10) = 0xc;
      *(undefined8 *)(param_1 + 0x379a18) = 0xc;
      *(undefined8 *)(param_1 + 0x379a20) = 0xc;
      *(undefined8 *)(param_1 + 0x379a28) = 0xc;
      *(undefined8 *)(param_1 + 0x379a30) = 0xc;
      *(undefined8 *)(param_1 + 0x379a38) = 0xc;
      *(undefined8 *)(param_1 + 0x379a40) = 0xc;
      *(undefined8 *)(param_1 + 0x379a48) = 0xc;
      *(undefined8 *)(param_1 + 0x379a50) = 0xc;
      *(undefined8 *)(param_1 + 0x379a58) = 0xc;
      *(undefined8 *)(param_1 + 0x379a60) = 0xc;
      *(undefined8 *)(param_1 + 0x379a68) = 0xc;
      *(undefined8 *)(param_1 + 0x379a70) = 0xc;
      *(undefined8 *)(param_1 + 0x379a78) = 0xc;
      *(undefined8 *)(param_1 + 0x379a80) = 0xc;
      *(undefined8 *)(param_1 + 0x379a88) = 0xc;
      *(undefined8 *)(param_1 + 0x379a90) = 0xc;
      *(undefined8 *)(param_1 + 0x379a98) = 0xc;
      *(undefined8 *)(param_1 + 0x379aa0) = 0xc;
      *(undefined8 *)(param_1 + 0x379aa8) = 0xc;
      *(undefined8 *)(param_1 + 0x379ab0) = 0xc;
    }
    if (*(char *)(param_1 + 0x3cbd36) != '\0') {
      lVar14 = 0;
      do {
        *(undefined8 *)(param_1 + 0x3761e8 + lVar14) = 6;
        lVar14 = lVar14 + 0x80;
        puVar19[-1] = 6;
        *puVar19 = 6;
        puVar19[-0x1000] = 6;
        puVar19 = puVar19 + 0x10;
      } while (lVar14 != 0x2000);
      lVar14 = 0;
      do {
        *(undefined8 *)(param_1 + 0x37a1e8 + lVar14) = 6;
        lVar14 = lVar14 + 0x80;
        puVar18[-1] = 6;
        *puVar18 = 6;
        puVar18[-0x1000] = 6;
        puVar18 = puVar18 + 0x10;
      } while (lVar14 != 0x2000);
    }
  }
  return;
}

