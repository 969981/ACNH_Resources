
uint FUN_036bc570(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  undefined8 *puVar15;
  
  if (DAT_05ab27a8 == '\x01' && DAT_05ab27ac == param_1) {
    return DAT_05ab27b0;
  }
  if (((DAT_05ab27e0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05ab27e0), iVar4 != 0)) {
    DAT_05ab27b8 = 0x300000000;
    DAT_05ab27c0 = (undefined8 *)&DAT_05ab27c8;
    __cxa_guard_release(&DAT_05ab27e0);
  }
  if ((DAT_05ab27e8 & 1) == 0) {
    DAT_05ab27e8 = 1;
    if (((DAT_05ab2808 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05ab2808), iVar4 != 0)) {
      DAT_05ab27ec = 0xffffffff00000000;
      DAT_05ab27f4 = 0xffffffff00000000;
      DAT_05ab27fc = 0xffffffff00000000;
      __cxa_guard_release(&DAT_05ab2808);
    }
    uVar1 = crc32b(0xffffffff,0xe3,0x4c11db7);
    uVar1 = crc32b(uVar1,0x83,0x4c11db7);
    uVar1 = crc32b(uVar1,0xa9,0x4c11db7);
    uVar1 = crc32b(uVar1,0xe3,0x4c11db7);
    uVar1 = crc32b(uVar1,0x83,0x4c11db7);
    uVar1 = crc32b(uVar1,0xb3,0x4c11db7);
    uVar1 = crc32b(uVar1,0xe3,0x4c11db7);
    uVar1 = crc32b(uVar1,0x83,0x4c11db7);
    uVar1 = crc32b(uVar1,0x80,0x4c11db7);
    uVar1 = crc32b(uVar1,0xe3,0x4c11db7);
    uVar1 = crc32b(uVar1,0x83,0x4c11db7);
    uVar8 = crc32b(uVar1,0xa0,0x4c11db7);
    DAT_05ab27ec = (ulong)~uVar8;
    iVar4 = (int)DAT_05ab27b8;
    iVar7 = DAT_05ab27b8._4_4_;
    if ((int)DAT_05ab27b8 < DAT_05ab27b8._4_4_) {
      DAT_05ab27c0[(int)DAT_05ab27b8] = &DAT_05ab27ec;
      iVar4 = (int)DAT_05ab27b8 + 1;
      DAT_05ab27b8 = CONCAT44(DAT_05ab27b8._4_4_,iVar4);
      iVar7 = DAT_05ab27b8._4_4_;
    }
    uVar1 = crc32b(0xffffffff,0xe5,0x4c11db7);
    uVar1 = crc32b(uVar1,0xad,0x4c11db7);
    uVar1 = crc32b(uVar1,0xa6,0x4c11db7);
    uVar1 = crc32b(uVar1,0xe6,0x4c11db7);
    uVar1 = crc32b(uVar1,0xa0,0x4c11db7);
    uVar1 = crc32b(uVar1,0xa1,0x4c11db7);
    uVar1 = crc32b(uVar1,0xef,0x4c11db7);
    uVar1 = crc32b(uVar1,0xbc,0x4c11db7);
    uVar1 = crc32b(uVar1,0x9a,0x4c11db7);
    uVar2 = crc32b(uVar1,0xe6,0x4c11db7);
    uVar2 = crc32b(uVar2,0x8e,0x4c11db7);
    uVar2 = crc32b(uVar2,0x88,0x4c11db7);
    uVar2 = crc32b(uVar2,0xe6,0x4c11db7);
    uVar2 = crc32b(uVar2,0xa5,0x4c11db7);
    uVar2 = crc32b(uVar2,0xad,0x4c11db7);
    uVar2 = crc32b(uVar2,0xe4,0x4c11db7);
    uVar2 = crc32b(uVar2,0xb8,0x4c11db7);
    uVar8 = crc32b(uVar2,0xad,0x4c11db7);
    DAT_05ab27f4 = CONCAT44(1,~uVar8);
    if (iVar4 < iVar7) {
      DAT_05ab27c0[iVar4] = &DAT_05ab27f4;
      iVar4 = (int)DAT_05ab27b8 + 1;
      DAT_05ab27b8 = CONCAT44(DAT_05ab27b8._4_4_,iVar4);
      iVar7 = DAT_05ab27b8._4_4_;
    }
    uVar1 = crc32b(uVar1,0xe4,0x4c11db7);
    uVar1 = crc32b(uVar1,0xbc,0x4c11db7);
    uVar1 = crc32b(uVar1,0x91,0x4c11db7);
    uVar1 = crc32b(uVar1,0xe3,0x4c11db7);
    uVar1 = crc32b(uVar1,0x81,0x4c11db7);
    uVar1 = crc32b(uVar1,0xbf,0x4c11db7);
    uVar1 = crc32b(uVar1,0xe6,0x4c11db7);
    uVar1 = crc32b(uVar1,0x99,0x4c11db7);
    uVar1 = crc32b(uVar1,0x82,0x4c11db7);
    uVar1 = crc32b(uVar1,0xe9,0x4c11db7);
    uVar1 = crc32b(uVar1,0x96,0x4c11db7);
    uVar8 = crc32b(uVar1,0x93,0x4c11db7);
    DAT_05ab27fc = CONCAT44(2,~uVar8);
    if (iVar4 < iVar7) {
      DAT_05ab27c0[iVar4] = &DAT_05ab27fc;
      iVar4 = (int)DAT_05ab27b8 + 1;
      DAT_05ab27b8 = CONCAT44(DAT_05ab27b8._4_4_,iVar4);
    }
    puVar3 = DAT_05ab27c0;
    if (1 < iVar4) {
      uVar10 = 0;
      uVar8 = iVar4 - 1;
      do {
        if ((int)uVar8 <= (int)uVar10) break;
        puVar6 = (uint *)puVar3[uVar10];
        uVar9 = (ulong)uVar10;
        if ((uVar8 - uVar10 & 1) == 0) {
          uVar12 = uVar9;
          puVar14 = puVar6;
        }
        else {
          uVar12 = uVar9 + 1;
          puVar14 = (uint *)puVar3[uVar12];
          if (((puVar6 != (uint *)0x0) && (puVar14 != (uint *)0x0)) && (*puVar14 < *puVar6)) {
            puVar3[uVar12] = puVar6;
            puVar3[uVar9] = puVar14;
            puVar14 = puVar6;
          }
        }
        uVar13 = (ulong)uVar8;
        uVar8 = uVar10;
        if (~uVar9 + uVar13 != 0) {
          puVar15 = puVar3 + uVar12 + 1;
          do {
            puVar6 = (uint *)*puVar15;
            uVar11 = (uint)uVar12;
            if (((puVar14 == (uint *)0x0) || (puVar6 == (uint *)0x0)) || (*puVar14 <= *puVar6)) {
              puVar5 = (uint *)puVar15[1];
              if (puVar6 != (uint *)0x0) goto LAB_036bc980;
LAB_036bc930:
              puVar6 = puVar5;
            }
            else {
              puVar15[-1] = puVar6;
              *puVar15 = puVar14;
              puVar5 = (uint *)puVar15[1];
              puVar6 = puVar14;
              uVar8 = uVar11;
              if (puVar14 == (uint *)0x0) goto LAB_036bc930;
LAB_036bc980:
              if ((puVar5 == (uint *)0x0) || (*puVar6 <= *puVar5)) goto LAB_036bc930;
              uVar8 = uVar11 + 1;
              *puVar15 = puVar5;
              puVar15[1] = puVar6;
            }
            uVar12 = uVar12 + 2;
            puVar15 = puVar15 + 2;
            puVar14 = puVar6;
          } while (uVar13 != uVar12);
        }
        if ((int)uVar8 <= (int)uVar10) break;
        uVar12 = (ulong)uVar8;
        puVar6 = (uint *)puVar3[uVar8];
        uVar10 = uVar8;
        do {
          puVar14 = (uint *)puVar3[uVar12 - 1];
          if (((puVar6 != (uint *)0x0) && (puVar14 != (uint *)0x0)) && (*puVar6 < *puVar14)) {
            uVar10 = (uint)uVar12;
            puVar3[uVar12 - 1] = puVar6;
            puVar3[uVar12] = puVar14;
            puVar14 = puVar6;
          }
          uVar12 = uVar12 - 1;
          puVar6 = puVar14;
        } while ((long)uVar9 < (long)uVar12);
      } while (uVar10 != uVar8);
    }
    DAT_05ab27b4 = '\x01';
  }
  else if (DAT_05ab27b4 != '\x01') {
    return 0xffffffff;
  }
  if ((int)DAT_05ab27b8 != 0) {
    if ((int)DAT_05ab27b8 < 2) {
      puVar6 = (uint *)*DAT_05ab27c0;
      uVar8 = 0;
    }
    else {
      uVar10 = 0;
      iVar4 = (int)DAT_05ab27b8 + -1;
      do {
        iVar7 = iVar4 + uVar10;
        if (iVar7 < 0 != SCARRY4(iVar4,uVar10)) {
          iVar7 = iVar7 + 1;
        }
        uVar8 = iVar7 >> 1;
        if (((uint *)DAT_05ab27c0[(int)uVar8] == (uint *)0x0) ||
           (uVar11 = *(uint *)DAT_05ab27c0[(int)uVar8], uVar11 == param_1)) goto joined_r0x036bc834;
        if (uVar11 < param_1) {
          uVar10 = uVar8 + 1;
        }
        else {
          iVar4 = uVar8 - 1;
        }
      } while ((int)uVar10 < iVar4);
      puVar6 = (uint *)DAT_05ab27c0[(int)uVar10];
      uVar8 = uVar10;
    }
    if ((puVar6 == (uint *)0x0) || (*puVar6 == param_1)) {
joined_r0x036bc834:
      if ((uVar8 < 3) && (uVar8 = *(uint *)(DAT_05ab27c0[uVar8] + 4), uVar8 < 3)) {
        DAT_05ab27a8 = 1;
        DAT_05ab27ac = param_1;
        DAT_05ab27b0 = uVar8;
        return uVar8;
      }
    }
  }
  return 0xffffffff;
}

