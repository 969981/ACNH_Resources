
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02178f20(uint param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  uint *puVar13;
  undefined8 *puVar14;
  
  if (DAT_053f9608 == '\x01' && DAT_053f960c == param_1) {
    return DAT_053f9610;
  }
  if (((DAT_053f9638 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_053f9638), iVar3 != 0)) {
    DAT_053f9618 = 0x200000000;
    DAT_053f9620 = (undefined8 *)&DAT_053f9628;
    __cxa_guard_release(&DAT_053f9638);
  }
  if ((DAT_053f9640 & 1) == 0) {
    DAT_053f9640 = 1;
    if (((DAT_053f9658 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_053f9658), iVar3 != 0)) {
      _DAT_053f9644 = 0xffffffff00000000;
      DAT_053f964c = 0xffffffff00000000;
      __cxa_guard_release(&DAT_053f9658);
    }
    uVar1 = crc32b(0xffffffff,0x4d,0x4c11db7);
    uVar1 = crc32b(uVar1,0x61,0x4c11db7);
    uVar1 = crc32b(uVar1,0x6c,0x4c11db7);
    uVar6 = crc32b(uVar1,0x65,0x4c11db7);
    _DAT_053f9644 = (ulong)~uVar6;
    iVar3 = (int)DAT_053f9618;
    iVar11 = DAT_053f9618._4_4_;
    if ((int)DAT_053f9618 < DAT_053f9618._4_4_) {
      DAT_053f9620[(int)DAT_053f9618] = &DAT_053f9644;
      iVar3 = (int)DAT_053f9618 + 1;
      DAT_053f9618 = CONCAT44(DAT_053f9618._4_4_,iVar3);
      iVar11 = DAT_053f9618._4_4_;
    }
    uVar1 = crc32b(0xffffffff,0x46,0x4c11db7);
    uVar1 = crc32b(uVar1,0x65,0x4c11db7);
    uVar1 = crc32b(uVar1,0x6d,0x4c11db7);
    uVar1 = crc32b(uVar1,0x61,0x4c11db7);
    uVar1 = crc32b(uVar1,0x6c,0x4c11db7);
    uVar6 = crc32b(uVar1,0x65,0x4c11db7);
    DAT_053f964c = CONCAT44(1,~uVar6);
    if (iVar3 < iVar11) {
      DAT_053f9620[iVar3] = &DAT_053f964c;
      iVar3 = (int)DAT_053f9618 + 1;
      DAT_053f9618 = CONCAT44(DAT_053f9618._4_4_,iVar3);
    }
    puVar2 = DAT_053f9620;
    if (1 < iVar3) {
      uVar8 = 0;
      uVar6 = iVar3 - 1;
      do {
        if ((int)uVar6 <= (int)uVar8) break;
        puVar5 = (uint *)puVar2[uVar8];
        uVar7 = (ulong)uVar8;
        if ((uVar6 - uVar8 & 1) == 0) {
          uVar10 = uVar7;
          puVar13 = puVar5;
        }
        else {
          uVar10 = uVar7 + 1;
          puVar13 = (uint *)puVar2[uVar10];
          if (((puVar5 != (uint *)0x0) && (puVar13 != (uint *)0x0)) && (*puVar13 < *puVar5)) {
            puVar2[uVar10] = puVar5;
            puVar2[uVar7] = puVar13;
            puVar13 = puVar5;
          }
        }
        uVar12 = (ulong)uVar6;
        uVar6 = uVar8;
        if (~uVar7 + uVar12 != 0) {
          puVar14 = puVar2 + uVar10 + 1;
          do {
            puVar5 = (uint *)*puVar14;
            uVar9 = (uint)uVar10;
            if (((puVar13 == (uint *)0x0) || (puVar5 == (uint *)0x0)) || (*puVar13 <= *puVar5)) {
              puVar4 = (uint *)puVar14[1];
              if (puVar5 != (uint *)0x0) goto LAB_02179230;
LAB_021791e0:
              puVar5 = puVar4;
            }
            else {
              puVar14[-1] = puVar5;
              *puVar14 = puVar13;
              puVar4 = (uint *)puVar14[1];
              puVar5 = puVar13;
              uVar6 = uVar9;
              if (puVar13 == (uint *)0x0) goto LAB_021791e0;
LAB_02179230:
              if ((puVar4 == (uint *)0x0) || (*puVar5 <= *puVar4)) goto LAB_021791e0;
              uVar6 = uVar9 + 1;
              *puVar14 = puVar4;
              puVar14[1] = puVar5;
            }
            uVar10 = uVar10 + 2;
            puVar14 = puVar14 + 2;
            puVar13 = puVar5;
          } while (uVar12 != uVar10);
        }
        if ((int)uVar6 <= (int)uVar8) break;
        uVar10 = (ulong)uVar6;
        puVar5 = (uint *)puVar2[uVar6];
        uVar8 = uVar6;
        do {
          puVar13 = (uint *)puVar2[uVar10 - 1];
          if (((puVar5 != (uint *)0x0) && (puVar13 != (uint *)0x0)) && (*puVar5 < *puVar13)) {
            uVar8 = (uint)uVar10;
            puVar2[uVar10 - 1] = puVar5;
            puVar2[uVar10] = puVar13;
            puVar13 = puVar5;
          }
          uVar10 = uVar10 - 1;
          puVar5 = puVar13;
        } while ((long)uVar7 < (long)uVar10);
      } while (uVar8 != uVar6);
    }
    DAT_053f9614 = '\x01';
  }
  else if (DAT_053f9614 != '\x01') {
    return 0xffffffff;
  }
  if ((int)DAT_053f9618 != 0) {
    if ((int)DAT_053f9618 < 2) {
      puVar5 = (uint *)*DAT_053f9620;
      uVar6 = 0;
    }
    else {
      uVar8 = 0;
      iVar3 = (int)DAT_053f9618 + -1;
      do {
        iVar11 = iVar3 + uVar8;
        if (iVar11 < 0 != SCARRY4(iVar3,uVar8)) {
          iVar11 = iVar11 + 1;
        }
        uVar6 = iVar11 >> 1;
        if (((uint *)DAT_053f9620[(int)uVar6] == (uint *)0x0) ||
           (uVar9 = *(uint *)DAT_053f9620[(int)uVar6], uVar9 == param_1)) goto joined_r0x021790d8;
        if (uVar9 < param_1) {
          uVar8 = uVar6 + 1;
        }
        else {
          iVar3 = uVar6 - 1;
        }
      } while ((int)uVar8 < iVar3);
      puVar5 = (uint *)DAT_053f9620[(int)uVar8];
      uVar6 = uVar8;
    }
    if ((puVar5 == (uint *)0x0) || (*puVar5 == param_1)) {
joined_r0x021790d8:
      if ((uVar6 < 2) && (uVar6 = *(uint *)(DAT_053f9620[uVar6] + 4), uVar6 < 2)) {
        DAT_053f9608 = 1;
        DAT_053f960c = param_1;
        DAT_053f9610 = uVar6;
        return uVar6;
      }
    }
  }
  return 0xffffffff;
}

