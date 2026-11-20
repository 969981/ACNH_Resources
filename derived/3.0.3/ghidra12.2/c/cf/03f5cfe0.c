
void FUN_03f5cfe0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  if (*(long *)(param_1 + 0x34e160) != 0) {
    puVar12 = (undefined8 *)(param_1 + 0x3821f0);
    puVar13 = (undefined8 *)(param_1 + 0x37e1f0);
    FUN_03fe6b10(param_1 + 0x3761b8);
    lVar9 = *(long *)(param_1 + 0x34e160);
    uVar5 = *(uint *)(param_1 + 0x34e168);
    if (*(char *)(param_1 + 0x3cbd31) == '\0') {
      lVar10 = 0;
      iVar11 = 0;
      do {
        plVar4 = (long *)(param_1 + 0x3761f8 + lVar10);
        lVar3 = param_1 + 0x37c218 + lVar10;
        uVar8 = *(undefined8 *)(lVar3 + 0x3fe0);
        lVar10 = lVar10 + 0x80;
        plVar4[0xbf8] = lVar9 + iVar11;
        plVar4[0x3f8] = lVar9 + iVar11;
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = (iVar11 + 0x1000U) / uVar5;
        }
        *(undefined8 *)(lVar3 + 0x5fe0) = uVar8;
        *(undefined8 *)(lVar3 + 0x1fe0) = uVar8;
        *(undefined8 *)(lVar3 + 0x5fe8) = *(undefined8 *)(lVar3 + 0x3fe8);
        *(undefined8 *)(lVar3 + 0x1fe8) = *(undefined8 *)(lVar3 + 0x3fe8);
        iVar11 = (iVar11 + 0x1000U) - uVar6 * uVar5;
        lVar1 = lVar9 + iVar11;
        uVar6 = iVar11 + 0x1000;
        plVar4[0xbf9] = lVar1;
        plVar4[0x3f9] = lVar1;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        iVar11 = uVar6 - uVar7 * uVar5;
        lVar1 = lVar9 + iVar11;
        uVar6 = iVar11 + 0x1000;
        plVar4[0xbfa] = lVar1;
        plVar4[0x3fa] = lVar1;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        iVar11 = uVar6 - uVar7 * uVar5;
        lVar1 = lVar9 + iVar11;
        uVar6 = iVar11 + 0x1000;
        plVar4[0xbfb] = lVar1;
        plVar4[0x3fb] = lVar1;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        iVar11 = uVar6 - uVar7 * uVar5;
        lVar1 = lVar9 + iVar11;
        uVar6 = iVar11 + 0x1000;
        plVar4[0xbfc] = lVar1;
        plVar4[0x3fc] = lVar1;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        iVar11 = uVar6 - uVar7 * uVar5;
        lVar1 = lVar9 + iVar11;
        uVar6 = iVar11 + 0x1000;
        plVar4[0xbfd] = lVar1;
        plVar4[0x3fd] = lVar1;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        iVar11 = uVar6 - uVar7 * uVar5;
        lVar1 = lVar9 + iVar11;
        uVar6 = iVar11 + 0x1000;
        plVar4[0xbfe] = lVar1;
        plVar4[0x3fe] = lVar1;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        iVar11 = uVar6 - uVar7 * uVar5;
        lVar1 = lVar9 + iVar11;
        uVar6 = iVar11 + 0x1000;
        plVar4[0xbff] = lVar1;
        plVar4[0x3ff] = lVar1;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        iVar11 = uVar6 - uVar7 * uVar5;
        lVar1 = lVar9 + iVar11;
        uVar6 = iVar11 + 0x1000;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        plVar4[0xc00] = lVar1;
        plVar4[0x400] = lVar1;
        plVar4[0x800] = lVar1;
        iVar11 = uVar6 - uVar7 * uVar5;
        lVar2 = lVar9 + iVar11;
        uVar6 = iVar11 + 0x1000;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        plVar4[0xc01] = lVar2;
        *plVar4 = lVar1;
        plVar4[1] = lVar2;
        uVar8 = *(undefined8 *)(lVar3 + 0x3ff0);
        plVar4[0x401] = lVar2;
        plVar4[0x801] = lVar2;
        *(undefined8 *)(lVar3 + 0x5ff0) = uVar8;
        *(undefined8 *)(lVar3 + 0x1ff0) = uVar8;
        *(undefined8 *)(lVar3 + 0x5ff8) = *(undefined8 *)(lVar3 + 0x3ff8);
        *(undefined8 *)(lVar3 + 0x1ff8) = *(undefined8 *)(lVar3 + 0x3ff8);
        *(undefined8 *)(lVar3 + 0x6000) = *(undefined8 *)(lVar3 + 0x4000);
        *(undefined8 *)(lVar3 + 0x2000) = *(undefined8 *)(lVar3 + 0x4000);
        *(undefined8 *)(lVar3 + 0x6008) = *(undefined8 *)(lVar3 + 0x4008);
        *(undefined8 *)(lVar3 + 0x2008) = *(undefined8 *)(lVar3 + 0x4008);
        iVar11 = uVar6 - uVar7 * uVar5;
        *(undefined8 *)(lVar3 + 0x6010) = *(undefined8 *)(lVar3 + 0x4010);
        *(undefined8 *)(lVar3 + 0x2010) = *(undefined8 *)(lVar3 + 0x4010);
        uVar8 = *(undefined8 *)(lVar3 + 0x4018);
        lVar1 = lVar9 + iVar11;
        uVar6 = iVar11 + 0x1000;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        plVar4[0xc02] = lVar1;
        plVar4[0x402] = lVar1;
        plVar4[0x802] = lVar1;
        *(undefined8 *)(lVar3 + 0x6018) = uVar8;
        *(undefined8 *)(lVar3 + 0x2018) = uVar8;
        iVar11 = uVar6 - uVar7 * uVar5;
        lVar3 = lVar9 + iVar11;
        uVar6 = iVar11 + 0x1000;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        plVar4[0xc03] = lVar3;
        plVar4[0x403] = lVar3;
        plVar4[0x803] = lVar3;
        plVar4[2] = lVar1;
        plVar4[3] = lVar3;
        iVar11 = uVar6 - uVar7 * uVar5;
        lVar3 = lVar9 + iVar11;
        uVar6 = iVar11 + 0x1000;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        plVar4[0xc04] = lVar3;
        plVar4[0x404] = lVar3;
        plVar4[0x804] = lVar3;
        iVar11 = uVar6 - uVar7 * uVar5;
        lVar1 = lVar9 + iVar11;
        uVar6 = iVar11 + 0x1000;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        plVar4[0xc05] = lVar1;
        plVar4[0x405] = lVar1;
        plVar4[0x805] = lVar1;
        plVar4[4] = lVar3;
        plVar4[5] = lVar1;
        iVar11 = uVar6 - uVar7 * uVar5;
        lVar3 = lVar9 + iVar11;
        uVar6 = iVar11 + 0x1000;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        plVar4[0xc06] = lVar3;
        plVar4[0x406] = lVar3;
        plVar4[0x806] = lVar3;
        iVar11 = uVar6 - uVar7 * uVar5;
        lVar1 = lVar9 + iVar11;
        uVar6 = iVar11 + 0x1000;
        plVar4[0xc07] = lVar1;
        plVar4[0x407] = lVar1;
        plVar4[0x807] = lVar1;
        plVar4[6] = lVar3;
        plVar4[7] = lVar1;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        iVar11 = uVar6 - uVar7 * uVar5;
      } while (lVar10 != 0x2000);
    }
    else {
      lVar10 = 0;
      iVar11 = 0;
      do {
        puVar14 = (undefined8 *)(param_1 + 0x3761e8 + lVar10);
        lVar3 = param_1 + 0x37c210 + lVar10;
        puVar14[0x800] = 5;
        puVar14[0x801] = 5;
        puVar14[0xbfa] = lVar9 + iVar11;
        uVar8 = *(undefined8 *)(lVar3 + 0x3fe8);
        lVar10 = lVar10 + 0x80;
        puVar14[0x3fa] = lVar9 + iVar11;
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = (iVar11 + 0x1000U) / uVar5;
        }
        *puVar14 = 5;
        puVar14[1] = 5;
        *(undefined8 *)(lVar3 + 0x5fd8) = 5;
        *(undefined8 *)(lVar3 + 0x5fe8) = uVar8;
        *(undefined8 *)(lVar3 + 0x1fe8) = uVar8;
        *(undefined8 *)(lVar3 + 0x1fd8) = 5;
        *(undefined8 *)(lVar3 + 0x5fe0) = 5;
        *(undefined8 *)(lVar3 + 0x1fe0) = 5;
        *(undefined8 *)(lVar3 + 0x5ff0) = *(undefined8 *)(lVar3 + 0x3ff0);
        *(undefined8 *)(lVar3 + 0x1ff0) = *(undefined8 *)(lVar3 + 0x3ff0);
        iVar11 = (iVar11 + 0x1000U) - uVar6 * uVar5;
        lVar1 = lVar9 + iVar11;
        uVar6 = iVar11 + 0x1000;
        puVar14[0xbfb] = lVar1;
        puVar14[0x3fb] = lVar1;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        iVar11 = uVar6 - uVar7 * uVar5;
        lVar1 = lVar9 + iVar11;
        uVar6 = iVar11 + 0x1000;
        puVar14[0xbfc] = lVar1;
        puVar14[0x3fc] = lVar1;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        iVar11 = uVar6 - uVar7 * uVar5;
        lVar1 = lVar9 + iVar11;
        uVar6 = iVar11 + 0x1000;
        puVar14[0xbfd] = lVar1;
        puVar14[0x3fd] = lVar1;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        iVar11 = uVar6 - uVar7 * uVar5;
        lVar1 = lVar9 + iVar11;
        uVar6 = iVar11 + 0x1000;
        puVar14[0xbfe] = lVar1;
        puVar14[0x3fe] = lVar1;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        iVar11 = uVar6 - uVar7 * uVar5;
        lVar1 = lVar9 + iVar11;
        uVar6 = iVar11 + 0x1000;
        puVar14[0xbff] = lVar1;
        puVar14[0x3ff] = lVar1;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        iVar11 = uVar6 - uVar7 * uVar5;
        lVar1 = lVar9 + iVar11;
        uVar6 = iVar11 + 0x1000;
        puVar14[0xc00] = lVar1;
        puVar14[0x400] = lVar1;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        iVar11 = uVar6 - uVar7 * uVar5;
        lVar1 = lVar9 + iVar11;
        uVar6 = iVar11 + 0x1000;
        puVar14[0xc01] = lVar1;
        puVar14[0x401] = lVar1;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        iVar11 = uVar6 - uVar7 * uVar5;
        lVar1 = lVar9 + iVar11;
        uVar6 = iVar11 + 0x1000;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        puVar14[0xc02] = lVar1;
        puVar14[0x402] = lVar1;
        puVar14[0x802] = lVar1;
        iVar11 = uVar6 - uVar7 * uVar5;
        lVar2 = lVar9 + iVar11;
        uVar6 = iVar11 + 0x1000;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        puVar14[2] = lVar1;
        puVar14[3] = lVar2;
        uVar8 = *(undefined8 *)(lVar3 + 0x3ff8);
        puVar14[0xc03] = lVar2;
        puVar14[0x403] = lVar2;
        puVar14[0x803] = lVar2;
        *(undefined8 *)(lVar3 + 0x5ff8) = uVar8;
        *(undefined8 *)(lVar3 + 0x1ff8) = uVar8;
        *(undefined8 *)(lVar3 + 0x6000) = *(undefined8 *)(lVar3 + 0x4000);
        *(undefined8 *)(lVar3 + 0x2000) = *(undefined8 *)(lVar3 + 0x4000);
        iVar11 = uVar6 - uVar7 * uVar5;
        lVar1 = lVar9 + iVar11;
        uVar6 = iVar11 + 0x1000;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        puVar14[0xc04] = lVar1;
        puVar14[0x404] = lVar1;
        puVar14[0x804] = lVar1;
        iVar11 = uVar6 - uVar7 * uVar5;
        lVar2 = lVar9 + iVar11;
        uVar6 = iVar11 + 0x1000;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        puVar14[0xc05] = lVar2;
        puVar14[0x405] = lVar2;
        puVar14[0x805] = lVar2;
        iVar11 = uVar6 - uVar7 * uVar5;
        puVar14[4] = lVar1;
        puVar14[5] = lVar2;
        *(undefined8 *)(lVar3 + 0x6008) = *(undefined8 *)(lVar3 + 0x4008);
        *(undefined8 *)(lVar3 + 0x2008) = *(undefined8 *)(lVar3 + 0x4008);
        *(undefined8 *)(lVar3 + 0x6010) = *(undefined8 *)(lVar3 + 0x4010);
        *(undefined8 *)(lVar3 + 0x2010) = *(undefined8 *)(lVar3 + 0x4010);
        *(undefined8 *)(lVar3 + 0x6018) = *(undefined8 *)(lVar3 + 0x4018);
        *(undefined8 *)(lVar3 + 0x2018) = *(undefined8 *)(lVar3 + 0x4018);
        *(undefined8 *)(lVar3 + 0x6020) = *(undefined8 *)(lVar3 + 0x4020);
        *(undefined8 *)(lVar3 + 0x2020) = *(undefined8 *)(lVar3 + 0x4020);
        lVar3 = lVar9 + iVar11;
        uVar6 = iVar11 + 0x1000;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        puVar14[0xc06] = lVar3;
        puVar14[0x406] = lVar3;
        puVar14[0x806] = lVar3;
        iVar11 = uVar6 - uVar7 * uVar5;
        lVar1 = lVar9 + iVar11;
        uVar6 = iVar11 + 0x1000;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        puVar14[0xc07] = lVar1;
        puVar14[0x407] = lVar1;
        puVar14[0x807] = lVar1;
        puVar14[6] = lVar3;
        puVar14[7] = lVar1;
        iVar11 = uVar6 - uVar7 * uVar5;
        lVar3 = lVar9 + iVar11;
        uVar6 = iVar11 + 0x1000;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        puVar14[0xc08] = lVar3;
        puVar14[0x408] = lVar3;
        puVar14[0x808] = lVar3;
        iVar11 = uVar6 - uVar7 * uVar5;
        lVar1 = lVar9 + iVar11;
        uVar6 = iVar11 + 0x1000;
        puVar14[0xc09] = lVar1;
        puVar14[0x409] = lVar1;
        puVar14[0x809] = lVar1;
        puVar14[8] = lVar3;
        puVar14[9] = lVar1;
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar6 / uVar5;
        }
        iVar11 = uVar6 - uVar7 * uVar5;
      } while (lVar10 != 0x2000);
    }
    FUN_03f5ce40(param_1);
    lVar9 = 0x10;
    puVar14 = (undefined8 *)(param_1 + 0x3779e8);
    do {
      puVar14[0x800] = 4;
      *puVar14 = 4;
      puVar14[1] = 4;
      lVar9 = lVar9 + -1;
      puVar14[0x801] = 4;
      puVar14[0x1000] = 4;
      puVar14[0x1001] = 4;
      puVar14[0x1800] = 4;
      puVar14[0x1801] = 4;
      puVar14 = puVar14 + 0x10;
    } while (lVar9 != 0);
    if (*(char *)(param_1 + 0x3cbd36) != '\0') {
      lVar9 = -0x1800;
      do {
        lVar10 = param_1 + lVar9;
        lVar9 = lVar9 + 0x80;
        *(undefined8 *)(lVar10 + 0x3779e8) = 6;
        puVar13[-1] = 6;
        *puVar13 = 6;
        puVar13[-0x1000] = 6;
        puVar13 = puVar13 + 0x10;
      } while (lVar9 != 0);
      lVar9 = 0;
      do {
        *(undefined8 *)(param_1 + 0x37a1e8 + lVar9) = 6;
        lVar9 = lVar9 + 0x80;
        puVar12[-1] = 6;
        *puVar12 = 6;
        puVar12[-0x1000] = 6;
        puVar12 = puVar12 + 0x10;
      } while (lVar9 != 0x2000);
    }
  }
  return;
}

