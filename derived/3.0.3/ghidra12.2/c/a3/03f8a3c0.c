
void FUN_03f8a3c0(long param_1,uint param_2,uint param_3)

{
  long *plVar1;
  ushort uVar2;
  undefined2 uVar3;
  bool bVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined1 uVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  undefined1 *puVar16;
  long lVar17;
  long lVar18;
  bool bVar19;
  long lVar20;
  long lVar21;
  byte *pbVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  
  if (0x5b < (param_2 & 0xffff) - 0x2200) {
    return;
  }
  uVar26 = param_3 & 0xff;
  pbVar22 = (byte *)(param_1 + 0x14028);
  bVar12 = (byte)param_3;
  uVar3 = (undefined2)uVar26;
  switch(param_2 & 0xffff) {
  case 0x2200:
    if ((param_3 & 0x60) == 0) {
      if (*(char *)(param_1 + 0x1403a) != '\0') {
        FUN_03f8b304();
        uVar10 = 0;
        goto LAB_03f8b25c;
      }
    }
    else {
      uVar10 = 1;
LAB_03f8b25c:
      *(undefined1 *)(param_1 + 0x1403a) = uVar10;
    }
    bVar11 = *(byte *)(param_1 + 0x140bf);
    if ((uVar26 >> 7 != 0) && (bVar11 = bVar11 | 0x80, *(char *)(param_1 + 0x140bd) < '\0')) {
      *pbVar22 = *pbVar22 | 0x40;
      *(undefined1 *)(param_1 + 0x1402c) = 0x80;
      *(undefined4 *)(param_1 + 0x14034) = 1;
    }
    if ((((param_3 & 0xff) >> 4 & 1) != 0) &&
       (bVar11 = bVar11 | 0x10, (*(byte *)(param_1 + 0x140bd) >> 4 & 1) != 0)) {
      *pbVar22 = *pbVar22 | 0x80;
      *(byte *)(param_1 + 0x1402c) = *(byte *)(param_1 + 0x1402c) | 0x80;
      *(undefined4 *)(param_1 + 0x14030) = 4;
    }
    bVar12 = bVar11 & 0xf0 | bVar12 & 0xf;
    goto LAB_03f8b2c4;
  case 0x2201:
    *(byte *)(param_1 + 0x140bc) = bVar12 & 0xa0;
    break;
  case 0x2202:
    *(byte *)(param_1 + 0x140be) = *(byte *)(param_1 + 0x140be) & (bVar12 ^ 0xff | 0x5f);
    break;
  case 0x2203:
    *(byte *)(param_1 + 0x140b6) = bVar12;
    break;
  case 0x2204:
    *(byte *)(param_1 + 0x140b7) = bVar12;
    break;
  case 0x2205:
    *(byte *)(param_1 + 0x140b8) = bVar12;
    break;
  case 0x2206:
    *(byte *)(param_1 + 0x140b9) = bVar12;
    break;
  case 0x2207:
    *(byte *)(param_1 + 0x140ba) = bVar12;
    break;
  case 0x2208:
    *(byte *)(param_1 + 0x140bb) = bVar12;
    break;
  case 0x2209:
    bVar12 = *(byte *)(param_1 + 0x140be) & 0xa0 | bVar12 & 0x5f;
    *(byte *)(param_1 + 0x140be) = bVar12;
    if (uVar26 >> 7 != 0) {
      *(byte *)(param_1 + 0x140be) = bVar12 | 0x80;
    }
    break;
  case 0x220a:
    *(byte *)(param_1 + 0x140bd) = bVar12 & 0xf0;
    break;
  case 0x220b:
    bVar12 = *(byte *)(param_1 + 0x140bf) & (~bVar12 | 0xf);
LAB_03f8b2c4:
    *(byte *)(param_1 + 0x140bf) = bVar12;
    break;
  case 0x220c:
    *(byte *)(param_1 + 0x140b2) = bVar12;
    break;
  case 0x220d:
    *(byte *)(param_1 + 0x140b3) = bVar12;
    break;
  case 0x220e:
    *(byte *)(param_1 + 0x140b4) = bVar12;
    break;
  case 0x220f:
    *(byte *)(param_1 + 0x140b5) = bVar12;
    break;
  case 0x2210:
    *(byte *)(param_1 + 0x140c6) = bVar12 & 0x83;
    break;
  case 0x2212:
    *(byte *)(param_1 + 0x140c8) = bVar12;
    break;
  case 0x2213:
    *(byte *)(param_1 + 0x140c9) = bVar12 & 1;
    break;
  case 0x2214:
    *(byte *)(param_1 + 0x140ca) = bVar12;
    break;
  case 0x2215:
    *(byte *)(param_1 + 0x140cb) = bVar12 & 1;
    break;
  case 0x2220:
    lVar20 = *(long *)(param_1 + 0x140a8);
    iVar13 = (param_3 & 0x7f) << 0x14;
    lVar21 = 0;
    iVar15 = 0;
    if ((char)bVar12 < '\0') {
      iVar15 = iVar13;
    }
    do {
      *(long *)(lVar20 + lVar21 + 0x3761f8) = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      lVar20 = *(long *)(param_1 + 0x140a8);
      plVar1 = (long *)(param_1 + 0x60 + lVar21);
      *plVar1 = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      uVar26 = *(uint *)(lVar20 + 0x34e168);
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = (iVar15 + 0x1000U) / uVar26;
      }
      iVar15 = (iVar15 + 0x1000U) - uVar25 * uVar26;
      *(long *)(lVar20 + lVar21 + 0x376200) = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      lVar20 = *(long *)(param_1 + 0x140a8);
      plVar1[1] = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      uVar26 = *(uint *)(lVar20 + 0x34e168);
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = (iVar15 + 0x1000U) / uVar26;
      }
      iVar15 = (iVar15 + 0x1000U) - uVar25 * uVar26;
      *(long *)(lVar20 + lVar21 + 0x376208) = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      lVar20 = *(long *)(param_1 + 0x140a8);
      plVar1[2] = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      uVar26 = *(uint *)(lVar20 + 0x34e168);
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = (iVar15 + 0x1000U) / uVar26;
      }
      iVar15 = (iVar15 + 0x1000U) - uVar25 * uVar26;
      *(long *)(lVar20 + lVar21 + 0x376210) = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      lVar20 = *(long *)(param_1 + 0x140a8);
      plVar1[3] = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      uVar26 = *(uint *)(lVar20 + 0x34e168);
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = (iVar15 + 0x1000U) / uVar26;
      }
      iVar15 = (iVar15 + 0x1000U) - uVar25 * uVar26;
      *(long *)(lVar20 + lVar21 + 0x376218) = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      lVar20 = *(long *)(param_1 + 0x140a8);
      plVar1[4] = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      uVar26 = *(uint *)(lVar20 + 0x34e168);
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = (iVar15 + 0x1000U) / uVar26;
      }
      iVar15 = (iVar15 + 0x1000U) - uVar25 * uVar26;
      *(long *)(lVar20 + lVar21 + 0x376220) = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      lVar20 = *(long *)(param_1 + 0x140a8);
      plVar1[5] = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      uVar26 = *(uint *)(lVar20 + 0x34e168);
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = (iVar15 + 0x1000U) / uVar26;
      }
      iVar15 = (iVar15 + 0x1000U) - uVar25 * uVar26;
      *(long *)(lVar20 + lVar21 + 0x376228) = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      lVar9 = *(long *)(param_1 + 0x140a8);
      lVar20 = lVar9 + lVar21;
      lVar21 = lVar21 + 0x80;
      plVar1[6] = *(long *)(lVar9 + 0x34e160) + (long)iVar15;
      uVar26 = *(uint *)(lVar9 + 0x34e168);
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = (iVar15 + 0x1000U) / uVar26;
      }
      iVar15 = (iVar15 + 0x1000U) - uVar25 * uVar26;
      *(long *)(lVar20 + 0x376230) = *(long *)(lVar9 + 0x34e160) + (long)iVar15;
      lVar20 = *(long *)(param_1 + 0x140a8);
      plVar1[7] = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      uVar26 = *(uint *)(lVar20 + 0x34e168);
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = (iVar15 + 0x1000U) / uVar26;
      }
      iVar15 = (iVar15 + 0x1000U) - uVar25 * uVar26;
    } while (lVar21 != 0x1000);
    lVar21 = 0;
    lVar9 = 0x37c1b8;
    lVar20 = param_1 + 0x6020;
    do {
      lVar17 = 0;
      do {
        *(long *)(*(long *)(param_1 + 0x140a8) + lVar9 + lVar17) =
             *(long *)(*(long *)(param_1 + 0x140a8) + 0x34e160) + (long)iVar13;
        lVar18 = *(long *)(param_1 + 0x140a8);
        *(long *)(lVar20 + lVar17) = *(long *)(lVar18 + 0x34e160) + (long)iVar13;
        lVar17 = lVar17 + 8;
        uVar26 = *(uint *)(lVar18 + 0x34e168);
        uVar25 = 0;
        if (uVar26 != 0) {
          uVar25 = (iVar13 + 0x1000U) / uVar26;
        }
        iVar13 = (iVar13 + 0x1000U) - uVar25 * uVar26;
      } while (lVar17 != 0x80);
      lVar21 = lVar21 + 1;
      lVar20 = lVar20 + 0x80;
      lVar9 = lVar9 + 0x80;
    } while (lVar21 != 0x10);
    break;
  case 0x2221:
    lVar20 = *(long *)(param_1 + 0x140a8);
    iVar13 = (param_3 & 0x7f) << 0x14;
    lVar21 = 0;
    iVar15 = 0x100000;
    if ((char)bVar12 < '\0') {
      iVar15 = iVar13;
    }
    do {
      *(long *)(lVar20 + lVar21 + 0x3771f8) = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      lVar20 = *(long *)(param_1 + 0x140a8);
      plVar1 = (long *)(param_1 + 0x1060 + lVar21);
      *plVar1 = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      uVar26 = *(uint *)(lVar20 + 0x34e168);
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = (iVar15 + 0x1000U) / uVar26;
      }
      iVar15 = (iVar15 + 0x1000U) - uVar25 * uVar26;
      *(long *)(lVar20 + lVar21 + 0x377200) = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      lVar20 = *(long *)(param_1 + 0x140a8);
      plVar1[1] = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      uVar26 = *(uint *)(lVar20 + 0x34e168);
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = (iVar15 + 0x1000U) / uVar26;
      }
      iVar15 = (iVar15 + 0x1000U) - uVar25 * uVar26;
      *(long *)(lVar20 + lVar21 + 0x377208) = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      lVar20 = *(long *)(param_1 + 0x140a8);
      plVar1[2] = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      uVar26 = *(uint *)(lVar20 + 0x34e168);
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = (iVar15 + 0x1000U) / uVar26;
      }
      iVar15 = (iVar15 + 0x1000U) - uVar25 * uVar26;
      *(long *)(lVar20 + lVar21 + 0x377210) = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      lVar20 = *(long *)(param_1 + 0x140a8);
      plVar1[3] = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      uVar26 = *(uint *)(lVar20 + 0x34e168);
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = (iVar15 + 0x1000U) / uVar26;
      }
      iVar15 = (iVar15 + 0x1000U) - uVar25 * uVar26;
      *(long *)(lVar20 + lVar21 + 0x377218) = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      lVar20 = *(long *)(param_1 + 0x140a8);
      plVar1[4] = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      uVar26 = *(uint *)(lVar20 + 0x34e168);
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = (iVar15 + 0x1000U) / uVar26;
      }
      iVar15 = (iVar15 + 0x1000U) - uVar25 * uVar26;
      *(long *)(lVar20 + lVar21 + 0x377220) = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      lVar20 = *(long *)(param_1 + 0x140a8);
      plVar1[5] = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      uVar26 = *(uint *)(lVar20 + 0x34e168);
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = (iVar15 + 0x1000U) / uVar26;
      }
      iVar15 = (iVar15 + 0x1000U) - uVar25 * uVar26;
      *(long *)(lVar20 + lVar21 + 0x377228) = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      lVar9 = *(long *)(param_1 + 0x140a8);
      lVar20 = lVar9 + lVar21;
      lVar21 = lVar21 + 0x80;
      plVar1[6] = *(long *)(lVar9 + 0x34e160) + (long)iVar15;
      uVar26 = *(uint *)(lVar9 + 0x34e168);
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = (iVar15 + 0x1000U) / uVar26;
      }
      iVar15 = (iVar15 + 0x1000U) - uVar25 * uVar26;
      *(long *)(lVar20 + 0x377230) = *(long *)(lVar9 + 0x34e160) + (long)iVar15;
      lVar20 = *(long *)(param_1 + 0x140a8);
      plVar1[7] = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      uVar26 = *(uint *)(lVar20 + 0x34e168);
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = (iVar15 + 0x1000U) / uVar26;
      }
      iVar15 = (iVar15 + 0x1000U) - uVar25 * uVar26;
    } while (lVar21 != 0x1000);
    lVar21 = 0;
    lVar20 = param_1 + 0x6820;
    lVar9 = 0x37c9b8;
    do {
      lVar17 = 0;
      do {
        *(long *)(*(long *)(param_1 + 0x140a8) + lVar9 + lVar17) =
             *(long *)(*(long *)(param_1 + 0x140a8) + 0x34e160) + (long)iVar13;
        lVar18 = *(long *)(param_1 + 0x140a8);
        *(long *)(lVar20 + lVar17) = *(long *)(lVar18 + 0x34e160) + (long)iVar13;
        lVar17 = lVar17 + 8;
        uVar26 = *(uint *)(lVar18 + 0x34e168);
        uVar25 = 0;
        if (uVar26 != 0) {
          uVar25 = (iVar13 + 0x1000U) / uVar26;
        }
        iVar13 = (iVar13 + 0x1000U) - uVar25 * uVar26;
      } while (lVar17 != 0x80);
      lVar21 = lVar21 + 1;
      lVar20 = lVar20 + 0x80;
      lVar9 = lVar9 + 0x80;
    } while (lVar21 != 0x10);
    break;
  case 0x2222:
    lVar20 = *(long *)(param_1 + 0x140a8);
    iVar13 = (param_3 & 0x7f) << 0x14;
    lVar21 = 0;
    iVar15 = 0x200000;
    if ((char)bVar12 < '\0') {
      iVar15 = iVar13;
    }
    do {
      *(long *)(lVar20 + lVar21 + 0x37a1f8) = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      lVar20 = *(long *)(param_1 + 0x140a8);
      plVar1 = (long *)(param_1 + 0x4060 + lVar21);
      *plVar1 = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      uVar26 = *(uint *)(lVar20 + 0x34e168);
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = (iVar15 + 0x1000U) / uVar26;
      }
      iVar15 = (iVar15 + 0x1000U) - uVar25 * uVar26;
      *(long *)(FUN_0037a200 + lVar20 + lVar21) = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      lVar20 = *(long *)(param_1 + 0x140a8);
      plVar1[1] = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      uVar26 = *(uint *)(lVar20 + 0x34e168);
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = (iVar15 + 0x1000U) / uVar26;
      }
      iVar15 = (iVar15 + 0x1000U) - uVar25 * uVar26;
      *(long *)(lVar20 + lVar21 + 0x37a208) = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      lVar20 = *(long *)(param_1 + 0x140a8);
      plVar1[2] = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      uVar26 = *(uint *)(lVar20 + 0x34e168);
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = (iVar15 + 0x1000U) / uVar26;
      }
      iVar15 = (iVar15 + 0x1000U) - uVar25 * uVar26;
      *(long *)(lVar20 + lVar21 + 0x37a210) = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      lVar20 = *(long *)(param_1 + 0x140a8);
      plVar1[3] = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      uVar26 = *(uint *)(lVar20 + 0x34e168);
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = (iVar15 + 0x1000U) / uVar26;
      }
      iVar15 = (iVar15 + 0x1000U) - uVar25 * uVar26;
      *(long *)(lVar20 + lVar21 + 0x37a218) = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      lVar20 = *(long *)(param_1 + 0x140a8);
      plVar1[4] = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      uVar26 = *(uint *)(lVar20 + 0x34e168);
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = (iVar15 + 0x1000U) / uVar26;
      }
      iVar15 = (iVar15 + 0x1000U) - uVar25 * uVar26;
      *(long *)(lVar20 + lVar21 + 0x37a220) = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      lVar20 = *(long *)(param_1 + 0x140a8);
      plVar1[5] = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      uVar26 = *(uint *)(lVar20 + 0x34e168);
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = (iVar15 + 0x1000U) / uVar26;
      }
      iVar15 = (iVar15 + 0x1000U) - uVar25 * uVar26;
      *(long *)(lVar20 + lVar21 + 0x37a228) = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      lVar9 = *(long *)(param_1 + 0x140a8);
      lVar20 = lVar9 + lVar21;
      lVar21 = lVar21 + 0x80;
      plVar1[6] = *(long *)(lVar9 + 0x34e160) + (long)iVar15;
      uVar26 = *(uint *)(lVar9 + 0x34e168);
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = (iVar15 + 0x1000U) / uVar26;
      }
      iVar15 = (iVar15 + 0x1000U) - uVar25 * uVar26;
      *(long *)(lVar20 + 0x37a230) = *(long *)(lVar9 + 0x34e160) + (long)iVar15;
      lVar20 = *(long *)(param_1 + 0x140a8);
      plVar1[7] = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      uVar26 = *(uint *)(lVar20 + 0x34e168);
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = (iVar15 + 0x1000U) / uVar26;
      }
      iVar15 = (iVar15 + 0x1000U) - uVar25 * uVar26;
    } while (lVar21 != 0x1000);
    lVar21 = 0;
    lVar20 = param_1 + 0x7020;
    puVar16 = &LAB_0037d1b8;
    do {
      lVar9 = 0;
      do {
        *(long *)(puVar16 + lVar9 + *(long *)(param_1 + 0x140a8)) =
             *(long *)(*(long *)(param_1 + 0x140a8) + 0x34e160) + (long)iVar13;
        lVar17 = *(long *)(param_1 + 0x140a8);
        *(long *)(lVar20 + lVar9) = *(long *)(lVar17 + 0x34e160) + (long)iVar13;
        lVar9 = lVar9 + 8;
        uVar26 = *(uint *)(lVar17 + 0x34e168);
        uVar25 = 0;
        if (uVar26 != 0) {
          uVar25 = (iVar13 + 0x1000U) / uVar26;
        }
        iVar13 = (iVar13 + 0x1000U) - uVar25 * uVar26;
      } while (lVar9 != 0x80);
      lVar21 = lVar21 + 1;
      lVar20 = lVar20 + 0x80;
      puVar16 = puVar16 + 0x80;
    } while (lVar21 != 0x10);
    break;
  case 0x2223:
    lVar20 = *(long *)(param_1 + 0x140a8);
    iVar13 = (param_3 & 0x7f) << 0x14;
    lVar21 = 0;
    iVar15 = 0x300000;
    if ((char)bVar12 < '\0') {
      iVar15 = iVar13;
    }
    do {
      *(long *)(lVar20 + lVar21 + 0x37b1f8) = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      lVar20 = *(long *)(param_1 + 0x140a8);
      plVar1 = (long *)(param_1 + 0x5060 + lVar21);
      *plVar1 = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      uVar26 = *(uint *)(lVar20 + 0x34e168);
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = (iVar15 + 0x1000U) / uVar26;
      }
      iVar15 = (iVar15 + 0x1000U) - uVar25 * uVar26;
      *(long *)(lVar20 + lVar21 + 0x37b200) = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      lVar20 = *(long *)(param_1 + 0x140a8);
      plVar1[1] = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      uVar26 = *(uint *)(lVar20 + 0x34e168);
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = (iVar15 + 0x1000U) / uVar26;
      }
      iVar15 = (iVar15 + 0x1000U) - uVar25 * uVar26;
      *(long *)(lVar20 + lVar21 + 0x37b208) = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      lVar20 = *(long *)(param_1 + 0x140a8);
      plVar1[2] = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      uVar26 = *(uint *)(lVar20 + 0x34e168);
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = (iVar15 + 0x1000U) / uVar26;
      }
      iVar15 = (iVar15 + 0x1000U) - uVar25 * uVar26;
      *(long *)(lVar20 + lVar21 + 0x37b210) = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      lVar20 = *(long *)(param_1 + 0x140a8);
      plVar1[3] = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      uVar26 = *(uint *)(lVar20 + 0x34e168);
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = (iVar15 + 0x1000U) / uVar26;
      }
      iVar15 = (iVar15 + 0x1000U) - uVar25 * uVar26;
      *(long *)(lVar20 + lVar21 + 0x37b218) = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      lVar20 = *(long *)(param_1 + 0x140a8);
      plVar1[4] = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      uVar26 = *(uint *)(lVar20 + 0x34e168);
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = (iVar15 + 0x1000U) / uVar26;
      }
      iVar15 = (iVar15 + 0x1000U) - uVar25 * uVar26;
      *(long *)(lVar20 + lVar21 + 0x37b220) = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      lVar20 = *(long *)(param_1 + 0x140a8);
      plVar1[5] = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      uVar26 = *(uint *)(lVar20 + 0x34e168);
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = (iVar15 + 0x1000U) / uVar26;
      }
      iVar15 = (iVar15 + 0x1000U) - uVar25 * uVar26;
      *(long *)(lVar20 + lVar21 + 0x37b228) = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      lVar9 = *(long *)(param_1 + 0x140a8);
      lVar20 = lVar9 + lVar21;
      lVar21 = lVar21 + 0x80;
      plVar1[6] = *(long *)(lVar9 + 0x34e160) + (long)iVar15;
      uVar26 = *(uint *)(lVar9 + 0x34e168);
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = (iVar15 + 0x1000U) / uVar26;
      }
      iVar15 = (iVar15 + 0x1000U) - uVar25 * uVar26;
      *(long *)(lVar20 + 0x37b230) = *(long *)(lVar9 + 0x34e160) + (long)iVar15;
      lVar20 = *(long *)(param_1 + 0x140a8);
      plVar1[7] = *(long *)(lVar20 + 0x34e160) + (long)iVar15;
      uVar26 = *(uint *)(lVar20 + 0x34e168);
      uVar25 = 0;
      if (uVar26 != 0) {
        uVar25 = (iVar15 + 0x1000U) / uVar26;
      }
      iVar15 = (iVar15 + 0x1000U) - uVar25 * uVar26;
    } while (lVar21 != 0x1000);
    lVar21 = 0;
    lVar9 = 0x37d9b8;
    lVar20 = param_1 + 0x7820;
    do {
      lVar17 = 0;
      do {
        *(long *)(*(long *)(param_1 + 0x140a8) + lVar9 + lVar17) =
             *(long *)(*(long *)(param_1 + 0x140a8) + 0x34e160) + (long)iVar13;
        lVar18 = *(long *)(param_1 + 0x140a8);
        *(long *)(lVar20 + lVar17) = *(long *)(lVar18 + 0x34e160) + (long)iVar13;
        lVar17 = lVar17 + 8;
        uVar26 = *(uint *)(lVar18 + 0x34e168);
        uVar25 = 0;
        if (uVar26 != 0) {
          uVar25 = (iVar13 + 0x1000U) / uVar26;
        }
        iVar13 = (iVar13 + 0x1000U) - uVar25 * uVar26;
      } while (lVar17 != 0x80);
      lVar21 = lVar21 + 1;
      lVar20 = lVar20 + 0x80;
      lVar9 = lVar9 + 0x80;
    } while (lVar21 != 0x10);
    break;
  case 0x2224:
    *(byte *)(param_1 + 0x140c0) = bVar12;
    *(ulong *)(param_1 + 82000) = *(long *)(param_1 + 0x14048) + (ulong)(param_3 & 0x1f) * 0x2000;
    break;
  case 0x2225:
    *(byte *)(param_1 + 0x140c1) = bVar12;
    if (uVar26 >> 7 == 0) {
      *(ulong *)(param_1 + 0x14058) = *(long *)(param_1 + 0x14048) + (ulong)uVar26 * 0x2000;
    }
    break;
  case 0x2226:
    *(byte *)(param_1 + 0x140c2) = bVar12;
    break;
  case 0x2227:
    *(byte *)(param_1 + 0x140c3) = bVar12;
    break;
  case 0x2228:
    *(byte *)(param_1 + 0x140c4) = bVar12;
    break;
  case 0x2230:
    *(byte *)(param_1 + 0x140cc) = bVar12;
    if (uVar26 >> 7 == 0) {
      *(undefined1 *)(param_1 + 0x140cd) = 0;
      *(undefined8 *)(param_1 + 0x140e0) = 0;
      *(undefined2 *)(param_1 + 0x140e8) = 0;
    }
    break;
  case 0x2231:
    *(byte *)(param_1 + 0x140cd) = bVar12;
    if (uVar26 >> 7 != 0) {
      *(undefined1 *)(param_1 + 0x140f8) = 0;
    }
    break;
  case 0x2232:
    *(byte *)(param_1 + 0x140e0) = bVar12;
    break;
  case 0x2233:
    *(byte *)(param_1 + 0x140e1) = bVar12;
    break;
  case 0x2234:
    *(undefined2 *)(param_1 + 0x140e2) = uVar3;
    break;
  case 0x2235:
    *(byte *)(param_1 + 0x140e4) = bVar12;
    break;
  case 0x2236:
    bVar11 = *(byte *)(param_1 + 0x140cc);
    *(byte *)(param_1 + 0x140e5) = bVar12;
    if ((bVar11 >> 5 & 1) == 0) {
      if (((bVar11 >> 2 & 1) == 0) && ((bVar11 & 3) != 2)) {
        bVar12 = *(byte *)(param_1 + 0x140cc);
        iVar15 = 0x200;
        if ((bVar12 & 7) != 0) {
          iVar15 = 0x100;
        }
        if ((char)bVar12 < '\0') {
          uVar14 = (ulong)*(uint *)(param_1 + 0x140e4) & 0x7ff;
          if ((bVar12 >> 5 & 1) == 0) {
            uVar26 = (uint)*(ushort *)(param_1 + 0x140e8);
            if (*(ushort *)(param_1 + 0x140e8) != 0) {
              uVar25 = *(uint *)(param_1 + 0x140e0);
              if ((bVar12 & 1) != 0) {
                uVar25 = *(uint *)(param_1 + 0x140e0) & 0x3ffff | 0x400000;
              }
              do {
                uVar5 = FUN_03f5f2f4(param_1,uVar25 >> 0x10,uVar25);
                FUN_03f5ef94(param_1,uVar14 >> 0x10,uVar14,uVar5);
                uVar25 = uVar25 + 1;
                uVar14 = (ulong)((int)uVar14 + 1);
                uVar26 = uVar26 - 1;
                *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar15;
              } while (uVar26 != 0);
            }
            *(byte *)(param_1 + 0x140bf) = *(byte *)(param_1 + 0x140bf) | 0x20;
            if ((*(byte *)(param_1 + 0x140bd) >> 5 & 1) != 0) {
              *(byte *)(param_1 + 0x14028) = *(byte *)(param_1 + 0x14028) | 0x40;
              *(undefined4 *)(param_1 + 0x14034) = 1;
            }
          }
          else if ((bVar12 >> 4 & 1) == 0) {
            *(ulong *)(param_1 + 0x140f0) = *(long *)(param_1 + 0x18) + uVar14;
          }
        }
        return;
      }
    }
    else {
      *(byte *)(param_1 + 0x140be) = *(byte *)(param_1 + 0x140be) | 0x20;
      *(undefined1 *)(param_1 + 0x140f8) = 1;
    }
    break;
  case 0x2237:
    *(undefined2 *)(param_1 + 0x140e6) = uVar3;
    if (((*(byte *)(param_1 + 0x140cc) >> 2 & 1) != 0) && ((*(byte *)(param_1 + 0x140cc) & 3) != 1))
    {
      bVar12 = *(byte *)(param_1 + 0x140cc);
      if (((char)bVar12 < 0) && (((uint)(int)(char)bVar12 >> 5 & 1) == 0)) {
        uVar26 = (uint)*(ushort *)(param_1 + 0x140e8);
        if (*(ushort *)(param_1 + 0x140e8) != 0) {
          uVar25 = *(uint *)(param_1 + 0x140e4) & 0x3ffff | 0x400000;
          uVar24 = *(uint *)(param_1 + 0x140e0);
          if ((bVar12 & 2) != 0) {
            uVar24 = *(uint *)(param_1 + 0x140e0) & 0x7ff;
          }
          do {
            uVar5 = FUN_03f5f2f4(param_1,uVar24 >> 0x10,uVar24);
            FUN_03f5ef94(param_1,uVar25 >> 0x10,uVar25,uVar5);
            if (*(int *)(*(long *)(param_1 + 0x14070) + 0x14) == 1) {
              *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 0x100;
            }
            uVar26 = uVar26 - 1;
            uVar25 = uVar25 + 1;
            uVar24 = uVar24 + 1;
          } while (uVar26 != 0);
        }
        *(byte *)(param_1 + 0x140bf) = *(byte *)(param_1 + 0x140bf) | 0x20;
        if ((*(byte *)(param_1 + 0x140bd) >> 5 & 1) != 0) {
          *(byte *)(param_1 + 0x14028) = *(byte *)(param_1 + 0x14028) | 0x40;
          *(undefined4 *)(param_1 + 0x14034) = 1;
        }
      }
      return;
    }
    break;
  case 0x2238:
    *(byte *)(param_1 + 0x140e8) = bVar12;
    break;
  case 0x2239:
    *(byte *)(param_1 + 0x140e9) = bVar12;
    break;
  case 0x223f:
    *(byte *)(param_1 + 0x140c5) = bVar12;
    break;
  case 0x2240:
    *(byte *)(param_1 + 0x140ce) = bVar12;
    break;
  case 0x2241:
    *(byte *)(param_1 + 0x140cf) = bVar12;
    break;
  case 0x2242:
    *(byte *)(param_1 + 0x140d0) = bVar12;
    break;
  case 0x2243:
    *(byte *)(param_1 + 0x140d1) = bVar12;
    break;
  case 0x2244:
    *(byte *)(param_1 + 0x140d2) = bVar12;
    break;
  case 0x2245:
    *(byte *)(param_1 + 0x140d3) = bVar12;
    break;
  case 0x2246:
    *(byte *)(param_1 + 0x140d4) = bVar12;
    break;
  case 0x2247:
    *(byte *)(param_1 + 0x140d5) = bVar12;
    break;
  case 0x2248:
    *(byte *)(param_1 + 0x140d6) = bVar12;
    break;
  case 0x2249:
    *(byte *)(param_1 + 0x140d7) = bVar12;
    break;
  case 0x224a:
    *(byte *)(param_1 + 0x140d8) = bVar12;
    break;
  case 0x224b:
    *(byte *)(param_1 + 0x140d9) = bVar12;
    break;
  case 0x224c:
    *(byte *)(param_1 + 0x140da) = bVar12;
    break;
  case 0x224d:
    *(byte *)(param_1 + 0x140db) = bVar12;
    break;
  case 0x224e:
    *(byte *)(param_1 + 0x140dc) = bVar12;
    break;
  case 0x224f:
    *(byte *)(param_1 + 0x140dd) = bVar12;
    plVar1 = (long *)(param_1 + 0x140f0);
    pbVar22 = (byte *)*plVar1;
    if (pbVar22 != (byte *)0x0) {
      uVar14 = 0;
      bVar4 = true;
      do {
        bVar19 = bVar4;
        bVar12 = *(byte *)(param_1 + 0x140cd) & 3;
        if (bVar12 == 2) {
          lVar21 = param_1 + 0x140ce;
          *pbVar22 = *(byte *)(lVar21 + uVar14) & 1 | *pbVar22 << 1;
          **(byte **)(param_1 + 0x140f8) =
               **(byte **)(param_1 + 0x140f8) << 1 | *(byte *)(lVar21 + uVar14) >> 1 & 1;
          *(byte *)*plVar1 = *(byte *)(lVar21 + (uVar14 | 1)) & 1 | *(byte *)*plVar1 << 1;
          **(byte **)(param_1 + 0x140f8) =
               **(byte **)(param_1 + 0x140f8) << 1 | *(byte *)(lVar21 + (uVar14 | 1)) >> 1 & 1;
          *(byte *)*plVar1 = *(byte *)(lVar21 + (uVar14 | 2)) & 1 | *(byte *)*plVar1 << 1;
          **(byte **)(param_1 + 0x140f8) =
               **(byte **)(param_1 + 0x140f8) << 1 | *(byte *)(lVar21 + (uVar14 | 2)) >> 1 & 1;
          *(byte *)*plVar1 = *(byte *)(lVar21 + (uVar14 | 3)) & 1 | *(byte *)*plVar1 << 1;
          **(byte **)(param_1 + 0x140f8) =
               **(byte **)(param_1 + 0x140f8) << 1 | *(byte *)(lVar21 + (uVar14 | 3)) >> 1 & 1;
          *(byte *)*plVar1 = *(byte *)(lVar21 + (uVar14 | 4)) & 1 | *(byte *)*plVar1 << 1;
          **(byte **)(param_1 + 0x140f8) =
               **(byte **)(param_1 + 0x140f8) << 1 | *(byte *)(lVar21 + (uVar14 | 4)) >> 1 & 1;
          *(byte *)*plVar1 = *(byte *)(lVar21 + (uVar14 | 5)) & 1 | *(byte *)*plVar1 << 1;
          **(byte **)(param_1 + 0x140f8) =
               **(byte **)(param_1 + 0x140f8) << 1 | *(byte *)(lVar21 + (uVar14 | 5)) >> 1 & 1;
          pbVar22 = (byte *)(lVar21 + (uVar14 | 7));
          *(byte *)*plVar1 = *(byte *)(lVar21 + (uVar14 | 6)) & 1 | *(byte *)*plVar1 << 1;
          lVar20 = 1;
          **(byte **)(param_1 + 0x140f8) =
               **(byte **)(param_1 + 0x140f8) << 1 | *(byte *)(lVar21 + (uVar14 | 6)) >> 1 & 1;
          bVar12 = *pbVar22;
          puVar7 = (undefined8 *)(param_1 + 0x140f8);
          plVar8 = plVar1;
LAB_03f89ff4:
          *(byte *)*plVar8 = bVar12 & 1 | *(byte *)*plVar8 << 1;
          *(byte *)*puVar7 = *pbVar22 >> lVar20 & 1 | *(byte *)*puVar7 << 1;
        }
        else {
          if (bVar12 == 1) {
            lVar21 = param_1 + 0x140ce;
            *pbVar22 = *(byte *)(lVar21 + uVar14) & 1 | *pbVar22 << 1;
            **(byte **)(param_1 + 0x140f8) =
                 **(byte **)(param_1 + 0x140f8) << 1 | *(byte *)(lVar21 + uVar14) >> 1 & 1;
            **(byte **)(param_1 + 0x14170) =
                 **(byte **)(param_1 + 0x14170) << 1 | *(byte *)(lVar21 + uVar14) >> 2 & 1;
            **(byte **)(param_1 + 0x14178) =
                 **(byte **)(param_1 + 0x14178) << 1 | *(byte *)(lVar21 + uVar14) >> 3 & 1;
            uVar23 = uVar14 | 1;
            *(byte *)*plVar1 = *(byte *)(lVar21 + uVar23) & 1 | *(byte *)*plVar1 << 1;
            **(byte **)(param_1 + 0x140f8) =
                 **(byte **)(param_1 + 0x140f8) << 1 | *(byte *)(lVar21 + uVar23) >> 1 & 1;
            **(byte **)(param_1 + 0x14170) =
                 **(byte **)(param_1 + 0x14170) << 1 | *(byte *)(lVar21 + uVar23) >> 2 & 1;
            **(byte **)(param_1 + 0x14178) =
                 **(byte **)(param_1 + 0x14178) << 1 | *(byte *)(lVar21 + uVar23) >> 3 & 1;
            uVar23 = uVar14 | 2;
            *(byte *)*plVar1 = *(byte *)(lVar21 + uVar23) & 1 | *(byte *)*plVar1 << 1;
            **(byte **)(param_1 + 0x140f8) =
                 **(byte **)(param_1 + 0x140f8) << 1 | *(byte *)(lVar21 + uVar23) >> 1 & 1;
            **(byte **)(param_1 + 0x14170) =
                 **(byte **)(param_1 + 0x14170) << 1 | *(byte *)(lVar21 + uVar23) >> 2 & 1;
            uVar6 = uVar14 | 3;
            **(byte **)(param_1 + 0x14178) =
                 **(byte **)(param_1 + 0x14178) << 1 | *(byte *)(lVar21 + uVar23) >> 3 & 1;
            *(byte *)*plVar1 = *(byte *)(lVar21 + uVar6) & 1 | *(byte *)*plVar1 << 1;
            **(byte **)(param_1 + 0x140f8) =
                 **(byte **)(param_1 + 0x140f8) << 1 | *(byte *)(lVar21 + uVar6) >> 1 & 1;
            **(byte **)(param_1 + 0x14170) =
                 **(byte **)(param_1 + 0x14170) << 1 | *(byte *)(lVar21 + uVar6) >> 2 & 1;
            **(byte **)(param_1 + 0x14178) =
                 **(byte **)(param_1 + 0x14178) << 1 | *(byte *)(lVar21 + uVar6) >> 3 & 1;
            uVar23 = uVar14 | 4;
            *(byte *)*plVar1 = *(byte *)(lVar21 + uVar23) & 1 | *(byte *)*plVar1 << 1;
            **(byte **)(param_1 + 0x140f8) =
                 **(byte **)(param_1 + 0x140f8) << 1 | *(byte *)(lVar21 + uVar23) >> 1 & 1;
            **(byte **)(param_1 + 0x14170) =
                 **(byte **)(param_1 + 0x14170) << 1 | *(byte *)(lVar21 + uVar23) >> 2 & 1;
            **(byte **)(param_1 + 0x14178) =
                 **(byte **)(param_1 + 0x14178) << 1 | *(byte *)(lVar21 + uVar23) >> 3 & 1;
            uVar23 = uVar14 | 5;
            *(byte *)*plVar1 = *(byte *)(lVar21 + uVar23) & 1 | *(byte *)*plVar1 << 1;
            **(byte **)(param_1 + 0x140f8) =
                 **(byte **)(param_1 + 0x140f8) << 1 | *(byte *)(lVar21 + uVar23) >> 1 & 1;
            **(byte **)(param_1 + 0x14170) =
                 **(byte **)(param_1 + 0x14170) << 1 | *(byte *)(lVar21 + uVar23) >> 2 & 1;
            uVar6 = uVar14 | 6;
            pbVar22 = (byte *)(lVar21 + (uVar14 | 7));
            **(byte **)(param_1 + 0x14178) =
                 **(byte **)(param_1 + 0x14178) << 1 | *(byte *)(lVar21 + uVar23) >> 3 & 1;
            *(byte *)*plVar1 = *(byte *)(lVar21 + uVar6) & 1 | *(byte *)*plVar1 << 1;
            **(byte **)(param_1 + 0x140f8) =
                 **(byte **)(param_1 + 0x140f8) << 1 | *(byte *)(lVar21 + uVar6) >> 1 & 1;
            **(byte **)(param_1 + 0x14170) =
                 **(byte **)(param_1 + 0x14170) << 1 | *(byte *)(lVar21 + uVar6) >> 2 & 1;
            **(byte **)(param_1 + 0x14178) =
                 **(byte **)(param_1 + 0x14178) << 1 | *(byte *)(lVar21 + uVar6) >> 3 & 1;
            *(byte *)*plVar1 = *pbVar22 & 1 | *(byte *)*plVar1 << 1;
            **(byte **)(param_1 + 0x140f8) = **(byte **)(param_1 + 0x140f8) << 1 | *pbVar22 >> 1 & 1
            ;
            bVar12 = *pbVar22 >> 2;
            lVar20 = 3;
            puVar7 = (undefined8 *)(param_1 + 0x14178);
            plVar8 = (long *)(param_1 + 0x14170);
            goto LAB_03f89ff4;
          }
          if ((*(byte *)(param_1 + 0x140cd) & 3) == 0) {
            lVar21 = 0;
            lVar20 = param_1 + 0x140ce + uVar14;
            do {
              *(byte *)*plVar1 = *(byte *)(lVar20 + lVar21) & 1 | *(byte *)*plVar1 << 1;
              **(byte **)(param_1 + 0x140f8) =
                   **(byte **)(param_1 + 0x140f8) << 1 | *(byte *)(lVar20 + lVar21) >> 1 & 1;
              **(byte **)(param_1 + 0x14170) =
                   **(byte **)(param_1 + 0x14170) << 1 | *(byte *)(lVar20 + lVar21) >> 2 & 1;
              **(byte **)(param_1 + 0x14178) =
                   **(byte **)(param_1 + 0x14178) << 1 | *(byte *)(lVar20 + lVar21) >> 3 & 1;
              **(byte **)(param_1 + 0x141f0) =
                   **(byte **)(param_1 + 0x141f0) << 1 | *(byte *)(lVar20 + lVar21) >> 4 & 1;
              **(byte **)(param_1 + 0x141f8) =
                   **(byte **)(param_1 + 0x141f8) << 1 | *(byte *)(lVar20 + lVar21) >> 5 & 1;
              **(byte **)(param_1 + 0x14270) =
                   **(byte **)(param_1 + 0x14270) << 1 | *(byte *)(lVar20 + lVar21) >> 6 & 1;
              puVar16 = (undefined1 *)(lVar20 + lVar21);
              lVar21 = lVar21 + 1;
              **(undefined1 **)(param_1 + 0x14278) =
                   (char)(CONCAT11(**(undefined1 **)(param_1 + 0x14278),*puVar16) >> 7);
            } while (lVar21 != 8);
          }
        }
        pbVar22 = (byte *)(*plVar1 + 2);
        uVar14 = 8;
        *plVar1 = (long)pbVar22;
        bVar4 = false;
      } while (bVar19);
    }
    return;
  case 0x2250:
    if ((uVar26 >> 1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x14100) = 0;
      *(undefined1 *)(param_1 + 0x14108) = 0;
    }
    *(byte *)(param_1 + 0x140f9) = bVar12 & 3;
    break;
  case 0x2251:
    *(byte *)(param_1 + 0x140fa) = bVar12;
    break;
  case 0x2252:
    *(byte *)(param_1 + 0x140fb) = bVar12;
    break;
  case 0x2253:
    *(byte *)(param_1 + 0x140fc) = bVar12;
    break;
  case 0x2254:
    *(byte *)(param_1 + 0x140fd) = bVar12;
    if ((*(byte *)(param_1 + 0x140f9) >> 1 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x140f9) & 1) == 0) {
        *(long *)(param_1 + 0x14100) =
             (long)(int)*(short *)(param_1 + 0x140fc) * (long)(int)*(short *)(param_1 + 0x140fa);
      }
      else {
        uVar2 = *(ushort *)(param_1 + 0x140fc);
        if (uVar2 == 0) {
          *(undefined8 *)(param_1 + 0x14100) = 0;
        }
        else {
          uVar26 = 0;
          if (uVar2 != 0) {
            uVar26 = (int)(short)*(ushort *)(param_1 + 0x140fa) / (int)(uint)uVar2;
          }
          *(ulong *)(param_1 + 0x14100) =
               (ulong)(uVar26 | ((uint)*(ushort *)(param_1 + 0x140fa) - uVar26 * uVar2) * 0x10000);
        }
      }
    }
    else {
      uVar14 = *(long *)(param_1 + 0x14100) +
               (long)(int)*(short *)(param_1 + 0x140fc) * (long)(int)*(short *)(param_1 + 0x140fa);
      *(ulong *)(param_1 + 0x14100) = uVar14;
      if (uVar14 >> 0x28 != 0) {
        *(byte *)(param_1 + 0x14108) = *(byte *)(param_1 + 0x14108) | 0x80;
      }
    }
    break;
  case 0x2258:
    *(byte *)(param_1 + 0x14109) = bVar12;
    break;
  case 0x2259:
    *(byte *)(param_1 + 0x1410c) = bVar12;
    break;
  case 0x225a:
    *(byte *)(param_1 + 0x1410d) = bVar12;
    break;
  case 0x225b:
    *(undefined2 *)(param_1 + 0x1410e) = uVar3;
  }
  return;
}

