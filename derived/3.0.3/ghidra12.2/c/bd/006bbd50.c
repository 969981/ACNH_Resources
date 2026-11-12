
/* WARNING: Removing unreachable block (ram,0x006bc030) */
/* WARNING: Removing unreachable block (ram,0x006bc10c) */
/* WARNING: Removing unreachable block (ram,0x006bbd74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_006bbd50(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  if (CARRY8(param_2,~param_4) || CARRY8(param_2 + ~param_4,(ulong)(param_3 <= param_1))) {
    if (param_4 == 0) {
      if (param_2 < param_3) {
        uVar2 = LZCOUNT(param_3);
        uVar7 = param_1 << (uVar2 & 0x3f);
        uVar5 = param_2 << (uVar2 & 0x3f) | (param_1 >> 1) >> ((ulong)~(uint)uVar2 & 0x3f);
        param_3 = param_3 << (uVar2 & 0x3f);
        uVar2 = param_3 >> 0x20;
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = uVar5 / uVar2;
        }
        uVar9 = uVar7 >> 0x20;
        uVar8 = uVar5 - uVar4 * uVar2;
        do {
          if ((uVar4 >> 0x20 == 0) && (uVar4 * (param_3 & 0xffffffff) <= (uVar9 | uVar8 << 0x20)))
          break;
          uVar8 = uVar8 + uVar2;
          uVar4 = uVar4 - 1;
        } while (uVar8 >> 0x20 == 0);
        uVar5 = (uVar9 | uVar5 << 0x20) - uVar4 * param_3;
        uVar8 = 0;
        if (uVar2 != 0) {
          uVar8 = uVar5 / uVar2;
        }
        uVar5 = uVar5 - uVar8 * uVar2;
        do {
          if ((uVar8 >> 0x20 == 0) &&
             (uVar8 * (param_3 & 0xffffffff) <= (uVar7 & 0xffffffff | uVar5 << 0x20))) break;
          uVar5 = uVar5 + uVar2;
          uVar8 = uVar8 - 1;
        } while (uVar5 >> 0x20 == 0);
        uVar2 = 0;
        lVar3 = uVar8 + (uVar4 << 0x20);
      }
      else {
        uVar2 = 0;
        if (param_3 != 0) {
          uVar2 = param_2 / param_3;
        }
        uVar4 = LZCOUNT(param_3);
        uVar9 = param_1 << (uVar4 & 0x3f);
        uVar7 = param_3 << (uVar4 & 0x3f);
        uVar8 = uVar7 >> 0x20;
        uVar5 = param_2 - uVar2 * param_3 << (uVar4 & 0x3f) |
                (param_1 >> 1) >> ((ulong)~(uint)uVar4 & 0x3f);
        uVar10 = uVar9 >> 0x20;
        uVar4 = 0;
        if (uVar8 != 0) {
          uVar4 = uVar5 / uVar8;
        }
        uVar11 = uVar5 - uVar4 * uVar8;
        do {
          if ((uVar4 >> 0x20 == 0) && (uVar4 * (uVar7 & 0xffffffff) <= (uVar10 | uVar11 << 0x20)))
          break;
          uVar11 = uVar11 + uVar8;
          uVar4 = uVar4 - 1;
        } while (uVar11 >> 0x20 == 0);
        uVar5 = (uVar10 | uVar5 << 0x20) - uVar4 * uVar7;
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = uVar5 / uVar8;
        }
        uVar5 = uVar5 - uVar10 * uVar8;
        do {
          if ((uVar10 >> 0x20 == 0) &&
             (uVar10 * (uVar7 & 0xffffffff) <= (uVar9 & 0xffffffff | uVar5 << 0x20))) break;
          uVar5 = uVar5 + uVar8;
          uVar10 = uVar10 - 1;
        } while (uVar5 >> 0x20 == 0);
        lVar3 = uVar10 + (uVar4 << 0x20);
      }
      auVar15._8_8_ = uVar2;
      auVar15._0_8_ = lVar3;
      return auVar15;
    }
    uVar6 = (int)LZCOUNT(param_4) - (int)LZCOUNT(param_2);
    uVar2 = (ulong)uVar6;
    if ((int)uVar6 < 0) {
      uVar2 = 0;
    }
    else {
      uVar7 = param_3 << (uVar2 & 0x3f);
      uVar1 = uVar6 + 1 & 3;
      uVar4 = uVar7;
      uVar5 = 0;
      if ((uVar6 & 0x40) == 0) {
        uVar4 = param_4 << (uVar2 & 0x3f) | (param_3 >> 1) >> ((ulong)~uVar6 & 0x3f);
        uVar5 = uVar7;
      }
      if (uVar6 < 3) {
        uVar7 = 0;
      }
      else {
        uVar2 = 0;
        uVar6 = uVar6 + 1 & 0xfffffffc;
        do {
          uVar8 = uVar5 >> 1 | uVar4 << 0x3f;
          uVar9 = uVar4 + ~param_2 + (ulong)CARRY8(uVar5,~param_1);
          uVar10 = (long)uVar9 >> 0x3f;
          uVar5 = uVar10 & uVar5;
          uVar7 = param_1 - uVar5;
          param_2 = param_2 - ((uVar10 & uVar4) + (ulong)(param_1 < uVar5));
          uVar11 = uVar4 >> 1;
          uVar12 = uVar11 + ~param_2 + (ulong)CARRY8(uVar8,~uVar7);
          uVar10 = (long)uVar12 >> 0x3f;
          uVar13 = uVar10 & uVar8;
          uVar8 = uVar8 >> 1 | uVar11 << 0x3f;
          uVar5 = uVar7 - uVar13;
          param_2 = param_2 - ((uVar10 & uVar11) + (ulong)(uVar7 < uVar13));
          uVar10 = uVar4 >> 2;
          uVar11 = uVar10 + ~param_2 + (ulong)CARRY8(uVar8,~uVar5);
          uVar13 = (long)uVar11 >> 0x3f;
          uVar14 = uVar13 & uVar8;
          uVar8 = uVar8 >> 1 | uVar10 << 0x3f;
          uVar7 = uVar5 - uVar14;
          param_2 = param_2 - ((uVar13 & uVar10) + (ulong)(uVar5 < uVar14));
          uVar10 = uVar4 >> 3;
          uVar13 = uVar10 + ~param_2 + (ulong)CARRY8(uVar8,~uVar7);
          uVar14 = (long)uVar13 >> 0x3f;
          uVar5 = uVar14 & uVar8;
          param_1 = uVar7 - uVar5;
          param_2 = param_2 - ((uVar14 & uVar10) + (ulong)(uVar7 < uVar5));
          uVar5 = uVar8 >> 1 | uVar10 << 0x3f;
          uVar6 = uVar6 - 4;
          uVar2 = uVar11 >> 0x3e & 2 | (uVar9 >> 0x3e & 2 | uVar2 << 2 | uVar12 >> 0x3f) << 2 |
                  uVar13 >> 0x3f;
          uVar4 = uVar4 >> 4;
        } while (uVar6 != 0);
        uVar7 = uVar2 << 1;
      }
      if (uVar1 != 0) {
        uVar2 = uVar4 + ~param_2 + (ulong)CARRY8(uVar5,~param_1);
        uVar9 = (long)uVar2 >> 0x3f;
        uVar10 = uVar9 & uVar5;
        uVar8 = param_1 - uVar10;
        uVar2 = uVar7 | uVar2 >> 0x3f;
        param_2 = param_2 - ((uVar9 & uVar4) + (ulong)(param_1 < uVar10));
        if (uVar1 != 1) {
          uVar5 = uVar5 >> 1 | uVar4 << 0x3f;
          uVar7 = uVar4 >> 1;
          uVar9 = uVar7 + ~param_2 + (ulong)CARRY8(uVar5,~uVar8);
          uVar10 = (long)uVar9 >> 0x3f;
          uVar11 = uVar10 & uVar5;
          uVar2 = uVar9 >> 0x3f | uVar2 << 1;
          if (uVar1 != 2) {
            uVar2 = (uVar4 >> 2) + ~(param_2 - ((uVar10 & uVar7) + (ulong)(uVar8 < uVar11))) +
                    (ulong)CARRY8(uVar5 >> 1 | uVar7 << 0x3f,~(uVar8 - uVar11)) >> 0x3f | uVar2 << 1
            ;
          }
        }
      }
    }
  }
  else {
    uVar2 = 0;
  }
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar2;
  return auVar16;
}

