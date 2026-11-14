
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01a86d80(uint param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  undefined8 *puVar14;
  
  if (DAT_05310110 == '\x01' && DAT_05310114 == param_1) {
    return DAT_05310118;
  }
  if (((DAT_05310148 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05310148), iVar3 != 0)) {
    DAT_05310120 = 0x300000000;
    DAT_05310128 = (undefined8 *)&DAT_05310130;
    __cxa_guard_release(&DAT_05310148);
  }
  if ((DAT_05310150 & 1) == 0) {
    DAT_05310150 = 1;
    if (((DAT_05310170 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05310170), iVar3 != 0)) {
      _DAT_05310154 = 0xffffffff00000000;
      DAT_0531015c = 0xffffffff00000000;
      DAT_05310164 = 0xffffffff00000000;
      __cxa_guard_release(&DAT_05310170);
    }
    uVar1 = crc32b(0xffffffff,0x46,0x4c11db7);
    uVar1 = crc32b(uVar1,0x72,0x4c11db7);
    uVar1 = crc32b(uVar1,0x65,0x4c11db7);
    uVar7 = crc32b(uVar1,0x65,0x4c11db7);
    _DAT_05310154 = (ulong)~uVar7;
    iVar3 = (int)DAT_05310120;
    iVar6 = DAT_05310120._4_4_;
    if ((int)DAT_05310120 < DAT_05310120._4_4_) {
      DAT_05310128[(int)DAT_05310120] = &DAT_05310154;
      iVar3 = (int)DAT_05310120 + 1;
      DAT_05310120 = CONCAT44(DAT_05310120._4_4_,iVar3);
      iVar6 = DAT_05310120._4_4_;
    }
    uVar1 = crc32b(0xffffffff,0x4d,0x4c11db7);
    uVar1 = crc32b(uVar1,0x61,0x4c11db7);
    uVar1 = crc32b(uVar1,0x6e,0x4c11db7);
    uVar1 = crc32b(uVar1,0x6c,0x4c11db7);
    uVar7 = crc32b(uVar1,0x79,0x4c11db7);
    DAT_0531015c = CONCAT44(1,~uVar7);
    if (iVar3 < iVar6) {
      DAT_05310128[iVar3] = &DAT_0531015c;
      iVar3 = (int)DAT_05310120 + 1;
      DAT_05310120 = CONCAT44(DAT_05310120._4_4_,iVar3);
      iVar6 = DAT_05310120._4_4_;
    }
    uVar1 = crc32b(0xffffffff,0x57,0x4c11db7);
    uVar1 = crc32b(uVar1,0x6f,0x4c11db7);
    uVar1 = crc32b(uVar1,0x6d,0x4c11db7);
    uVar1 = crc32b(uVar1,0x61,0x4c11db7);
    uVar1 = crc32b(uVar1,0x6e,0x4c11db7);
    uVar1 = crc32b(uVar1,0x6c,0x4c11db7);
    uVar7 = crc32b(uVar1,0x79,0x4c11db7);
    DAT_05310164 = CONCAT44(2,~uVar7);
    if (iVar3 < iVar6) {
      DAT_05310128[iVar3] = &DAT_05310164;
      iVar3 = (int)DAT_05310120 + 1;
      DAT_05310120 = CONCAT44(DAT_05310120._4_4_,iVar3);
    }
    puVar2 = DAT_05310128;
    if (1 < iVar3) {
      uVar9 = 0;
      uVar7 = iVar3 - 1;
      do {
        if ((int)uVar7 <= (int)uVar9) break;
        puVar5 = (uint *)puVar2[uVar9];
        uVar8 = (ulong)uVar9;
        if ((uVar7 - uVar9 & 1) == 0) {
          uVar11 = uVar8;
          puVar13 = puVar5;
        }
        else {
          uVar11 = uVar8 + 1;
          puVar13 = (uint *)puVar2[uVar11];
          if (((puVar5 != (uint *)0x0) && (puVar13 != (uint *)0x0)) && (*puVar13 < *puVar5)) {
            puVar2[uVar11] = puVar5;
            puVar2[uVar8] = puVar13;
            puVar13 = puVar5;
          }
        }
        uVar12 = (ulong)uVar7;
        uVar7 = uVar9;
        if (~uVar8 + uVar12 != 0) {
          puVar14 = puVar2 + uVar11 + 1;
          do {
            puVar5 = (uint *)*puVar14;
            uVar10 = (uint)uVar11;
            if (((puVar13 == (uint *)0x0) || (puVar5 == (uint *)0x0)) || (*puVar13 <= *puVar5)) {
              puVar4 = (uint *)puVar14[1];
              if (puVar5 != (uint *)0x0) goto LAB_01a870e0;
LAB_01a87090:
              puVar5 = puVar4;
            }
            else {
              puVar14[-1] = puVar5;
              *puVar14 = puVar13;
              puVar4 = (uint *)puVar14[1];
              puVar5 = puVar13;
              uVar7 = uVar10;
              if (puVar13 == (uint *)0x0) goto LAB_01a87090;
LAB_01a870e0:
              if ((puVar4 == (uint *)0x0) || (*puVar5 <= *puVar4)) goto LAB_01a87090;
              uVar7 = uVar10 + 1;
              *puVar14 = puVar4;
              puVar14[1] = puVar5;
            }
            uVar11 = uVar11 + 2;
            puVar14 = puVar14 + 2;
            puVar13 = puVar5;
          } while (uVar12 != uVar11);
        }
        if ((int)uVar7 <= (int)uVar9) break;
        uVar11 = (ulong)uVar7;
        puVar5 = (uint *)puVar2[uVar7];
        uVar9 = uVar7;
        do {
          puVar13 = (uint *)puVar2[uVar11 - 1];
          if (((puVar5 != (uint *)0x0) && (puVar13 != (uint *)0x0)) && (*puVar5 < *puVar13)) {
            uVar9 = (uint)uVar11;
            puVar2[uVar11 - 1] = puVar5;
            puVar2[uVar11] = puVar13;
            puVar13 = puVar5;
          }
          uVar11 = uVar11 - 1;
          puVar5 = puVar13;
        } while ((long)uVar8 < (long)uVar11);
      } while (uVar9 != uVar7);
    }
    DAT_0531011c = '\x01';
  }
  else if (DAT_0531011c != '\x01') {
    return 0xffffffff;
  }
  if ((int)DAT_05310120 != 0) {
    if ((int)DAT_05310120 < 2) {
      puVar5 = (uint *)*DAT_05310128;
      uVar7 = 0;
    }
    else {
      uVar9 = 0;
      iVar3 = (int)DAT_05310120 + -1;
      do {
        iVar6 = iVar3 + uVar9;
        if (iVar6 < 0 != SCARRY4(iVar3,uVar9)) {
          iVar6 = iVar6 + 1;
        }
        uVar7 = iVar6 >> 1;
        if (((uint *)DAT_05310128[(int)uVar7] == (uint *)0x0) ||
           (uVar10 = *(uint *)DAT_05310128[(int)uVar7], uVar10 == param_1)) goto joined_r0x01a86f94;
        if (uVar10 < param_1) {
          uVar9 = uVar7 + 1;
        }
        else {
          iVar3 = uVar7 - 1;
        }
      } while ((int)uVar9 < iVar3);
      puVar5 = (uint *)DAT_05310128[(int)uVar9];
      uVar7 = uVar9;
    }
    if ((puVar5 == (uint *)0x0) || (*puVar5 == param_1)) {
joined_r0x01a86f94:
      if ((uVar7 < 3) && (uVar7 = *(uint *)(DAT_05310128[uVar7] + 4), uVar7 < 3)) {
        DAT_05310110 = 1;
        DAT_05310114 = param_1;
        DAT_05310118 = uVar7;
        return uVar7;
      }
    }
  }
  return 0xffffffff;
}

