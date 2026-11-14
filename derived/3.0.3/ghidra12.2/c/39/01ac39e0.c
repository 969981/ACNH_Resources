
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01ac39e0(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  undefined8 *puVar15;
  
  if (DAT_05325ad0 == '\x01' && DAT_05325ad4 == param_1) {
    return DAT_05325ad8;
  }
  if (((DAT_05325b08 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05325b08), iVar4 != 0)) {
    DAT_05325ae0 = 0x300000000;
    DAT_05325ae8 = (undefined8 *)&DAT_05325af0;
    __cxa_guard_release(&DAT_05325b08);
  }
  if ((DAT_05325b10 & 1) == 0) {
    DAT_05325b10 = 1;
    if (((DAT_05325b30 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05325b30), iVar4 != 0)) {
      _DAT_05325b14 = 0xffffffff00000000;
      DAT_05325b1c = 0xffffffff00000000;
      DAT_05325b24 = 0xffffffff00000000;
      __cxa_guard_release(&DAT_05325b30);
    }
    uVar1 = crc32b(0xffffffff,0xe6,0x4c11db7);
    uVar1 = crc32b(uVar1,0xad,0x4c11db7);
    uVar1 = crc32b(uVar1,0xa3,0x4c11db7);
    uVar1 = crc32b(uVar1,0xe9,0x4c11db7);
    uVar1 = crc32b(uVar1,0x9d,0x4c11db7);
    uVar8 = crc32b(uVar1,0xa2,0x4c11db7);
    _DAT_05325b14 = (ulong)~uVar8;
    iVar4 = (int)DAT_05325ae0;
    iVar6 = DAT_05325ae0._4_4_;
    if ((int)DAT_05325ae0 < DAT_05325ae0._4_4_) {
      DAT_05325ae8[(int)DAT_05325ae0] = &DAT_05325b14;
      iVar4 = (int)DAT_05325ae0 + 1;
      DAT_05325ae0 = CONCAT44(DAT_05325ae0._4_4_,iVar4);
      iVar6 = DAT_05325ae0._4_4_;
    }
    uVar1 = crc32b(0xffffffff,0xe5,0x4c11db7);
    uVar2 = crc32b(uVar1,0x90,0x4c11db7);
    uVar2 = crc32b(uVar2,0x8c,0x4c11db7);
    uVar2 = crc32b(uVar2,0xe6,0x4c11db7);
    uVar2 = crc32b(uVar2,0x9c,0x4c11db7);
    uVar8 = crc32b(uVar2,0x9f,0x4c11db7);
    DAT_05325b1c = CONCAT44(1,~uVar8);
    if (iVar4 < iVar6) {
      DAT_05325ae8[iVar4] = &DAT_05325b1c;
      iVar4 = (int)DAT_05325ae0 + 1;
      DAT_05325ae0 = CONCAT44(DAT_05325ae0._4_4_,iVar4);
      iVar6 = DAT_05325ae0._4_4_;
    }
    uVar1 = crc32b(uVar1,0xae,0x4c11db7);
    uVar1 = crc32b(uVar1,0xb6,0x4c11db7);
    uVar1 = crc32b(uVar1,0xe5,0x4c11db7);
    uVar1 = crc32b(uVar1,0x85,0x4c11db7);
    uVar8 = crc32b(uVar1,0xb7,0x4c11db7);
    DAT_05325b24 = CONCAT44(2,~uVar8);
    if (iVar4 < iVar6) {
      DAT_05325ae8[iVar4] = &DAT_05325b24;
      iVar4 = (int)DAT_05325ae0 + 1;
      DAT_05325ae0 = CONCAT44(DAT_05325ae0._4_4_,iVar4);
    }
    puVar3 = DAT_05325ae8;
    if (1 < iVar4) {
      uVar10 = 0;
      uVar8 = iVar4 - 1;
      do {
        if ((int)uVar8 <= (int)uVar10) break;
        puVar7 = (uint *)puVar3[uVar10];
        uVar9 = (ulong)uVar10;
        if ((uVar8 - uVar10 & 1) == 0) {
          uVar12 = uVar9;
          puVar14 = puVar7;
        }
        else {
          uVar12 = uVar9 + 1;
          puVar14 = (uint *)puVar3[uVar12];
          if (((puVar7 != (uint *)0x0) && (puVar14 != (uint *)0x0)) && (*puVar14 < *puVar7)) {
            puVar3[uVar12] = puVar7;
            puVar3[uVar9] = puVar14;
            puVar14 = puVar7;
          }
        }
        uVar13 = (ulong)uVar8;
        uVar8 = uVar10;
        if (~uVar9 + uVar13 != 0) {
          puVar15 = puVar3 + uVar12 + 1;
          do {
            puVar7 = (uint *)*puVar15;
            uVar11 = (uint)uVar12;
            if (((puVar14 == (uint *)0x0) || (puVar7 == (uint *)0x0)) || (*puVar14 <= *puVar7)) {
              puVar5 = (uint *)puVar15[1];
              if (puVar7 != (uint *)0x0) goto LAB_01ac3d60;
LAB_01ac3d10:
              puVar7 = puVar5;
            }
            else {
              puVar15[-1] = puVar7;
              *puVar15 = puVar14;
              puVar5 = (uint *)puVar15[1];
              puVar7 = puVar14;
              uVar8 = uVar11;
              if (puVar14 == (uint *)0x0) goto LAB_01ac3d10;
LAB_01ac3d60:
              if ((puVar5 == (uint *)0x0) || (*puVar7 <= *puVar5)) goto LAB_01ac3d10;
              uVar8 = uVar11 + 1;
              *puVar15 = puVar5;
              puVar15[1] = puVar7;
            }
            uVar12 = uVar12 + 2;
            puVar15 = puVar15 + 2;
            puVar14 = puVar7;
          } while (uVar13 != uVar12);
        }
        if ((int)uVar8 <= (int)uVar10) break;
        uVar12 = (ulong)uVar8;
        puVar7 = (uint *)puVar3[uVar8];
        uVar10 = uVar8;
        do {
          puVar14 = (uint *)puVar3[uVar12 - 1];
          if (((puVar7 != (uint *)0x0) && (puVar14 != (uint *)0x0)) && (*puVar7 < *puVar14)) {
            uVar10 = (uint)uVar12;
            puVar3[uVar12 - 1] = puVar7;
            puVar3[uVar12] = puVar14;
            puVar14 = puVar7;
          }
          uVar12 = uVar12 - 1;
          puVar7 = puVar14;
        } while ((long)uVar9 < (long)uVar12);
      } while (uVar10 != uVar8);
    }
    DAT_05325adc = '\x01';
  }
  else if (DAT_05325adc != '\x01') {
    return 0xffffffff;
  }
  if ((int)DAT_05325ae0 != 0) {
    if ((int)DAT_05325ae0 < 2) {
      puVar7 = (uint *)*DAT_05325ae8;
      uVar8 = 0;
    }
    else {
      uVar10 = 0;
      iVar4 = (int)DAT_05325ae0 + -1;
      do {
        iVar6 = iVar4 + uVar10;
        if (iVar6 < 0 != SCARRY4(iVar4,uVar10)) {
          iVar6 = iVar6 + 1;
        }
        uVar8 = iVar6 >> 1;
        if (((uint *)DAT_05325ae8[(int)uVar8] == (uint *)0x0) ||
           (uVar11 = *(uint *)DAT_05325ae8[(int)uVar8], uVar11 == param_1)) goto joined_r0x01ac3c08;
        if (uVar11 < param_1) {
          uVar10 = uVar8 + 1;
        }
        else {
          iVar4 = uVar8 - 1;
        }
      } while ((int)uVar10 < iVar4);
      puVar7 = (uint *)DAT_05325ae8[(int)uVar10];
      uVar8 = uVar10;
    }
    if ((puVar7 == (uint *)0x0) || (*puVar7 == param_1)) {
joined_r0x01ac3c08:
      if ((uVar8 < 3) && (uVar8 = *(uint *)(DAT_05325ae8[uVar8] + 4), uVar8 < 3)) {
        DAT_05325ad0 = 1;
        DAT_05325ad4 = param_1;
        DAT_05325ad8 = uVar8;
        return uVar8;
      }
    }
  }
  return 0xffffffff;
}

