
ulong FUN_03c362a0(undefined1 *param_1,long param_2,byte *param_3,ulong param_4,ushort *param_5)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  ushort uVar9;
  ulong uVar10;
  bool bVar11;
  uint uVar12;
  long lVar13;
  undefined1 *puVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  undefined1 *puVar24;
  
  if (param_5[1] == 0) {
    if (param_4 == 0) {
      return 0xffffffffffffffb8;
    }
    lVar18 = param_4 - 8;
    if (param_4 < 8) {
      uVar16 = (ulong)*param_3;
      switch(param_4) {
      case 7:
        uVar16 = uVar16 | (ulong)param_3[6] << 0x30;
      case 6:
        uVar16 = uVar16 + ((ulong)param_3[5] << 0x28);
      case 5:
        uVar16 = uVar16 + ((ulong)param_3[4] << 0x20);
      case 4:
        uVar16 = uVar16 + (ulong)param_3[3] * 0x1000000;
      case 3:
        uVar16 = uVar16 + (ulong)param_3[2] * 0x10000;
      case 2:
        uVar16 = uVar16 + (ulong)param_3[1] * 0x100;
      }
      if (param_3[param_4 - 1] == 0) {
        return 0xffffffffffffffec;
      }
      lVar18 = 0;
      uVar21 = (int)LZCOUNT((uint)param_3[param_4 - 1]) + (int)param_4 * -8 + 0x29;
    }
    else {
      if (param_3[param_4 - 1] == 0) {
        return 0xffffffffffffffff;
      }
      if (0xffffffffffffff88 < param_4) {
        return param_4;
      }
      uVar16 = *(ulong *)(param_3 + lVar18);
      uVar21 = (int)LZCOUNT((uint)param_3[param_4 - 1]) - 0x17;
    }
    uVar8 = *param_5;
    uVar22 = (ulong)uVar8 + (ulong)uVar21;
    uVar21 = (uint)uVar22;
    uVar19 = uVar16 >> ((ulong)-uVar21 & 0x3f) & (ulong)*(uint *)(&DAT_041e91b4 + (ulong)uVar8 * 4);
    if (uVar21 < 0x41) {
      if (lVar18 < 8) {
        if (lVar18 == 0) goto LAB_03c36770;
        uVar17 = (uint)lVar18;
        if (param_3 <= param_3 + (lVar18 - (uVar22 >> 3))) {
          uVar17 = (uint)(uVar22 >> 3);
        }
        uVar21 = uVar21 + uVar17 * -8;
      }
      else {
        uVar17 = uVar21 >> 3;
        uVar21 = uVar21 & 7;
      }
      uVar22 = (ulong)uVar21;
      lVar18 = lVar18 - (ulong)uVar17;
      uVar16 = *(ulong *)(param_3 + lVar18);
    }
LAB_03c36770:
    uVar21 = (int)uVar22 + (uint)uVar8;
    uVar22 = uVar16 >> ((ulong)-uVar21 & 0x3f) & (ulong)*(uint *)(&DAT_041e91b4 + (ulong)uVar8 * 4);
    puVar14 = param_1;
    if (uVar21 < 0x41) {
      if (lVar18 < 8) {
        if (lVar18 != 0) {
          uVar17 = (uint)lVar18;
          if (param_3 <= param_3 + (lVar18 - (ulong)(uVar21 >> 3))) {
            uVar17 = uVar21 >> 3;
          }
          lVar18 = lVar18 - (ulong)uVar17;
          uVar21 = uVar21 + uVar17 * -8;
          uVar16 = *(ulong *)(param_3 + lVar18);
          if (0x40 < uVar21) goto LAB_03c368ec;
        }
      }
      else {
        uVar17 = uVar21 >> 3;
        uVar21 = uVar21 & 7;
        lVar18 = lVar18 - (ulong)uVar17;
        uVar16 = *(ulong *)(param_3 + lVar18);
      }
      do {
        if (lVar18 < 8) {
          if (lVar18 == 0) break;
          bVar11 = param_3 + (lVar18 - (ulong)(uVar21 >> 3)) < param_3;
          uVar17 = (uint)lVar18;
          if (!bVar11) {
            uVar17 = uVar21 >> 3;
          }
          uVar21 = uVar21 + uVar17 * -8;
        }
        else {
          bVar11 = false;
          uVar17 = uVar21 >> 3;
          uVar21 = uVar21 & 7;
        }
        lVar18 = lVar18 - (ulong)uVar17;
        uVar16 = *(ulong *)(param_3 + lVar18);
        if ((param_1 + param_2 + -3 <= puVar14) || (bVar11)) break;
        puVar4 = param_5 + uVar19 * 2 + 2;
        puVar5 = param_5 + uVar22 * 2 + 2;
        uVar8 = *puVar4;
        iVar2 = uVar21 + *(byte *)((long)puVar4 + 3);
        uVar21 = *(uint *)(&DAT_041e91b4 + (ulong)*(byte *)((long)puVar4 + 3) * 4);
        *puVar14 = (char)puVar4[1];
        uVar9 = *puVar5;
        uVar17 = *(uint *)(&DAT_041e91b4 + (ulong)*(byte *)((long)puVar5 + 3) * 4);
        iVar3 = iVar2 + (uint)*(byte *)((long)puVar5 + 3);
        puVar14[1] = (char)puVar5[1];
        puVar4 = param_5 + ((uVar16 >> ((ulong)(uint)-iVar2 & 0x3f) & (ulong)uVar21) + (ulong)uVar8)
                           * 2 + 2;
        uVar8 = *puVar4;
        puVar5 = param_5 + ((uVar16 >> ((ulong)(uint)-iVar3 & 0x3f) & (ulong)uVar17) + (ulong)uVar9)
                           * 2 + 2;
        iVar3 = iVar3 + (uint)*(byte *)((long)puVar4 + 3);
        uVar21 = *(uint *)(&DAT_041e91b4 + (ulong)*(byte *)((long)puVar4 + 3) * 4);
        puVar14[2] = (char)puVar4[1];
        uVar19 = (uVar16 >> ((ulong)(uint)-iVar3 & 0x3f) & (ulong)uVar21) + (ulong)uVar8;
        uVar17 = *(uint *)(&DAT_041e91b4 + (ulong)*(byte *)((long)puVar5 + 3) * 4);
        uVar8 = *puVar5;
        uVar21 = iVar3 + (uint)*(byte *)((long)puVar5 + 3);
        puVar14[3] = (char)puVar5[1];
        puVar14 = puVar14 + 4;
        uVar22 = (uVar16 >> ((ulong)-uVar21 & 0x3f) & (ulong)uVar17) + (ulong)uVar8;
        if (0x40 < uVar21) break;
      } while( true );
    }
LAB_03c368ec:
    puVar24 = param_1 + param_2 + -2;
    if (puVar24 < puVar14) {
      return 0xffffffffffffffba;
    }
    lVar13 = (long)puVar14 - (long)param_1;
    puVar14 = puVar14 + 1;
    lVar23 = 2;
    do {
      puVar4 = param_5 + uVar19 * 2 + 2;
      uVar8 = *puVar4;
      uVar21 = uVar21 + *(byte *)((long)puVar4 + 3);
      uVar17 = *(uint *)(&DAT_041e91b4 + (ulong)*(byte *)((long)puVar4 + 3) * 4);
      puVar14[-1] = (char)puVar4[1];
      uVar19 = uVar22;
      if (0x40 < uVar21) goto LAB_03c36a58;
      if (lVar18 < 8) {
        if (lVar18 != 0) {
          uVar12 = (uint)lVar18;
          if (param_3 <= param_3 + (lVar18 - (ulong)(uVar21 >> 3))) {
            uVar12 = uVar21 >> 3;
          }
          uVar15 = uVar21 + uVar12 * -8;
          goto LAB_03c36968;
        }
        lVar18 = 0;
        uVar20 = uVar16;
        uVar15 = uVar21;
      }
      else {
        uVar12 = uVar21 >> 3;
        uVar15 = uVar21 & 7;
LAB_03c36968:
        lVar18 = lVar18 - (ulong)uVar12;
        uVar20 = *(ulong *)(param_3 + lVar18);
      }
      if (puVar24 < puVar14) {
        return 0xffffffffffffffba;
      }
      uVar19 = (uVar16 >> ((ulong)-uVar21 & 0x3f) & (ulong)uVar17) + (ulong)uVar8;
      puVar4 = param_5 + uVar22 * 2 + 2;
      uVar8 = *puVar4;
      uVar15 = uVar15 + *(byte *)((long)puVar4 + 3);
      uVar17 = *(uint *)(&DAT_041e91b4 + (ulong)*(byte *)((long)puVar4 + 3) * 4);
      *puVar14 = (char)puVar4[1];
      if (0x40 < uVar15) {
        puVar14 = puVar14 + 1;
        lVar23 = 3;
LAB_03c36a58:
        *puVar14 = (char)param_5[uVar19 * 2 + 3];
        return lVar23 + lVar13;
      }
      if (lVar18 < 8) {
        if (lVar18 != 0) {
          uVar12 = (uint)lVar18;
          if (param_3 <= param_3 + (lVar18 - (ulong)(uVar15 >> 3))) {
            uVar12 = uVar15 >> 3;
          }
          uVar21 = uVar15 + uVar12 * -8;
          goto LAB_03c369dc;
        }
        lVar18 = 0;
        uVar16 = uVar20;
        uVar21 = uVar15;
      }
      else {
        uVar12 = uVar15 >> 3;
        uVar21 = uVar15 & 7;
LAB_03c369dc:
        lVar18 = lVar18 - (ulong)uVar12;
        uVar16 = *(ulong *)(param_3 + lVar18);
      }
      puVar1 = puVar14 + 1;
      lVar13 = lVar13 + 2;
      puVar14 = puVar14 + 2;
      uVar22 = (uVar20 >> ((ulong)-uVar15 & 0x3f) & (ulong)uVar17) + (ulong)uVar8;
      if (puVar24 < puVar1) {
        return 0xffffffffffffffba;
      }
    } while( true );
  }
  if (param_4 == 0) {
    return 0xffffffffffffffb8;
  }
  lVar18 = param_4 - 8;
  if (param_4 < 8) {
    uVar16 = (ulong)*param_3;
    switch(param_4) {
    case 7:
      uVar16 = uVar16 | (ulong)param_3[6] << 0x30;
    case 6:
      uVar16 = uVar16 + ((ulong)param_3[5] << 0x28);
    case 5:
      uVar16 = uVar16 + ((ulong)param_3[4] << 0x20);
    case 4:
      uVar16 = uVar16 + (ulong)param_3[3] * 0x1000000;
    case 3:
      uVar16 = uVar16 + (ulong)param_3[2] * 0x10000;
    case 2:
      uVar16 = uVar16 + (ulong)param_3[1] * 0x100;
    }
    if (param_3[param_4 - 1] == 0) {
      return 0xffffffffffffffec;
    }
    lVar18 = 0;
    uVar21 = (int)LZCOUNT((uint)param_3[param_4 - 1]) + (int)param_4 * -8 + 0x29;
  }
  else {
    if (param_3[param_4 - 1] == 0) {
      return 0xffffffffffffffff;
    }
    if (0xffffffffffffff88 < param_4) {
      return param_4;
    }
    uVar16 = *(ulong *)(param_3 + lVar18);
    uVar21 = (int)LZCOUNT((uint)param_3[param_4 - 1]) - 0x17;
  }
  uVar8 = *param_5;
  uVar22 = (ulong)uVar8 + (ulong)uVar21;
  uVar21 = (uint)uVar22;
  uVar19 = uVar16 >> ((ulong)-uVar21 & 0x3f) & (ulong)*(uint *)(&DAT_041e91b4 + (ulong)uVar8 * 4);
  if (uVar21 < 0x41) {
    if (lVar18 < 8) {
      if (lVar18 == 0) goto LAB_03c364c0;
      uVar17 = (uint)lVar18;
      if (param_3 <= param_3 + (lVar18 - (uVar22 >> 3))) {
        uVar17 = (uint)(uVar22 >> 3);
      }
      uVar21 = uVar21 + uVar17 * -8;
    }
    else {
      uVar17 = uVar21 >> 3;
      uVar21 = uVar21 & 7;
    }
    uVar22 = (ulong)uVar21;
    lVar18 = lVar18 - (ulong)uVar17;
    uVar16 = *(ulong *)(param_3 + lVar18);
  }
LAB_03c364c0:
  uVar21 = (int)uVar22 + (uint)uVar8;
  uVar20 = (ulong)uVar21;
  uVar22 = uVar16 >> ((ulong)-uVar21 & 0x3f) & (ulong)*(uint *)(&DAT_041e91b4 + (ulong)uVar8 * 4);
  puVar14 = param_1;
  if (uVar21 < 0x41) {
    if (lVar18 < 8) {
      if (lVar18 != 0) {
        uVar17 = (uint)lVar18;
        if (param_3 <= param_3 + (lVar18 - (ulong)(uVar21 >> 3))) {
          uVar17 = uVar21 >> 3;
        }
        lVar18 = lVar18 - (ulong)uVar17;
        uVar21 = uVar21 + uVar17 * -8;
        uVar20 = (ulong)uVar21;
        uVar16 = *(ulong *)(param_3 + lVar18);
        if (0x40 < uVar21) goto LAB_03c36630;
      }
    }
    else {
      uVar20 = (ulong)(uVar21 & 7);
      lVar18 = lVar18 - (ulong)(uVar21 >> 3);
      uVar16 = *(ulong *)(param_3 + lVar18);
    }
    do {
      uVar21 = (uint)uVar20;
      if (lVar18 < 8) {
        if (lVar18 == 0) break;
        bVar11 = param_3 + (lVar18 - (uVar20 >> 3)) < param_3;
        uVar17 = (uint)lVar18;
        if (!bVar11) {
          uVar17 = (uint)(uVar20 >> 3);
        }
        uVar21 = uVar21 + uVar17 * -8;
      }
      else {
        bVar11 = false;
        uVar17 = uVar21 >> 3;
        uVar21 = uVar21 & 7;
      }
      uVar20 = (ulong)uVar21;
      lVar18 = lVar18 - (ulong)uVar17;
      uVar16 = *(ulong *)(param_3 + lVar18);
      if ((param_1 + param_2 + -3 <= puVar14) || (bVar11)) break;
      puVar4 = param_5 + uVar19 * 2 + 2;
      bVar7 = *(byte *)((long)puVar4 + 3);
      puVar5 = param_5 + uVar22 * 2 + 2;
      uVar8 = *puVar4;
      *puVar14 = (char)puVar4[1];
      uVar21 = uVar21 + bVar7;
      bVar6 = *(byte *)((long)puVar5 + 3);
      uVar9 = *puVar5;
      puVar4 = param_5 + (((uVar16 << (uVar20 & 0x3f)) >> ((ulong)-(uint)bVar7 & 0x3f)) +
                         (ulong)uVar8) * 2 + 2;
      puVar14[1] = (char)puVar5[1];
      uVar17 = uVar21 + bVar6;
      uVar8 = *puVar4;
      bVar7 = *(byte *)((long)puVar4 + 3);
      puVar5 = param_5 + (((uVar16 << ((ulong)uVar21 & 0x3f)) >> ((ulong)-(uint)bVar6 & 0x3f)) +
                         (ulong)uVar9) * 2 + 2;
      puVar14[2] = (char)puVar4[1];
      uVar21 = uVar17 + bVar7;
      uVar19 = ((uVar16 << ((ulong)uVar17 & 0x3f)) >> ((ulong)-(uint)bVar7 & 0x3f)) + (ulong)uVar8;
      uVar17 = uVar21 + *(byte *)((long)puVar5 + 3);
      uVar20 = (ulong)uVar17;
      uVar22 = ((uVar16 << ((ulong)uVar21 & 0x3f)) >>
               ((ulong)-(uint)*(byte *)((long)puVar5 + 3) & 0x3f)) + (ulong)*puVar5;
      puVar14[3] = (char)puVar5[1];
      puVar14 = puVar14 + 4;
      if (0x40 < uVar17) break;
    } while( true );
  }
LAB_03c36630:
  puVar24 = param_1 + param_2 + -2;
  if (puVar24 < puVar14) {
    return 0xffffffffffffffba;
  }
  lVar13 = (long)puVar14 - (long)param_1;
  puVar14 = puVar14 + 1;
  lVar23 = 2;
  do {
    puVar4 = param_5 + uVar19 * 2 + 2;
    bVar7 = *(byte *)((long)puVar4 + 3);
    uVar8 = *puVar4;
    uVar21 = (int)uVar20 + (uint)bVar7;
    puVar14[-1] = (char)puVar4[1];
    uVar19 = uVar22;
    if (0x40 < uVar21) goto LAB_03c36a38;
    if (lVar18 < 8) {
      if (lVar18 != 0) {
        uVar17 = (uint)lVar18;
        if (param_3 <= param_3 + (lVar18 - (ulong)(uVar21 >> 3))) {
          uVar17 = uVar21 >> 3;
        }
        uVar21 = uVar21 + uVar17 * -8;
        goto LAB_03c366a8;
      }
      lVar18 = 0;
      uVar10 = uVar16;
    }
    else {
      uVar17 = uVar21 >> 3;
      uVar21 = uVar21 & 7;
LAB_03c366a8:
      lVar18 = lVar18 - (ulong)uVar17;
      uVar10 = *(ulong *)(param_3 + lVar18);
    }
    if (puVar24 < puVar14) {
      return 0xffffffffffffffba;
    }
    uVar19 = ((uVar16 << (uVar20 & 0x3f)) >> ((ulong)-(uint)bVar7 & 0x3f)) + (ulong)uVar8;
    puVar4 = param_5 + uVar22 * 2 + 2;
    bVar7 = *(byte *)((long)puVar4 + 3);
    uVar8 = *puVar4;
    uVar17 = uVar21 + bVar7;
    *puVar14 = (char)puVar4[1];
    if (0x40 < uVar17) {
      puVar14 = puVar14 + 1;
      lVar23 = 3;
LAB_03c36a38:
      *puVar14 = (char)param_5[uVar19 * 2 + 3];
      return lVar23 + lVar13;
    }
    if (lVar18 < 8) {
      if (lVar18 != 0) {
        uVar15 = (uint)lVar18;
        if (param_3 <= param_3 + (lVar18 - (ulong)(uVar17 >> 3))) {
          uVar15 = uVar17 >> 3;
        }
        uVar17 = uVar17 + uVar15 * -8;
        goto LAB_03c36718;
      }
      lVar18 = 0;
      uVar16 = uVar10;
    }
    else {
      uVar15 = uVar17 >> 3;
      uVar17 = uVar17 & 7;
LAB_03c36718:
      lVar18 = lVar18 - (ulong)uVar15;
      uVar16 = *(ulong *)(param_3 + lVar18);
    }
    uVar20 = (ulong)uVar17;
    puVar1 = puVar14 + 1;
    lVar13 = lVar13 + 2;
    puVar14 = puVar14 + 2;
    uVar22 = ((uVar10 << ((ulong)uVar21 & 0x3f)) >> ((ulong)-(uint)bVar7 & 0x3f)) + (ulong)uVar8;
    if (puVar24 < puVar1) {
      return 0xffffffffffffffba;
    }
  } while( true );
}

