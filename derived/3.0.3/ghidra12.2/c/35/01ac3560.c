
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01ac3560(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  undefined8 *puVar15;
  
  if (DAT_05325a68 == '\x01' && DAT_05325a6c == param_1) {
    return DAT_05325a70;
  }
  if (((DAT_05325aa0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05325aa0), iVar4 != 0)) {
    DAT_05325a78 = 0x300000000;
    DAT_05325a80 = (undefined8 *)&DAT_05325a88;
    __cxa_guard_release(&DAT_05325aa0);
  }
  if ((DAT_05325aa8 & 1) == 0) {
    DAT_05325aa8 = 1;
    if (((DAT_05325ac8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05325ac8), iVar4 != 0)) {
      _DAT_05325aac = 0xffffffff00000000;
      DAT_05325ab4 = 0xffffffff00000000;
      DAT_05325abc = 0xffffffff00000000;
      __cxa_guard_release(&DAT_05325ac8);
    }
    uVar1 = crc32b(0xffffffff,0x46,0x4c11db7);
    uVar2 = crc32b(uVar1,0x72,0x4c11db7);
    uVar2 = crc32b(uVar2,0x6f,0x4c11db7);
    uVar2 = crc32b(uVar2,0x6e,0x4c11db7);
    uVar7 = crc32b(uVar2,0x74,0x4c11db7);
    _DAT_05325aac = (ulong)~uVar7;
    iVar4 = (int)DAT_05325a78;
    iVar9 = DAT_05325a78._4_4_;
    if ((int)DAT_05325a78 < DAT_05325a78._4_4_) {
      DAT_05325a80[(int)DAT_05325a78] = &DAT_05325aac;
      iVar4 = (int)DAT_05325a78 + 1;
      DAT_05325a78 = CONCAT44(DAT_05325a78._4_4_,iVar4);
      iVar9 = DAT_05325a78._4_4_;
    }
    uVar2 = crc32b(0xffffffff,0x53,0x4c11db7);
    uVar2 = crc32b(uVar2,0x79,0x4c11db7);
    uVar2 = crc32b(uVar2,0x6e,0x4c11db7);
    uVar2 = crc32b(uVar2,99,0x4c11db7);
    uVar2 = crc32b(uVar2,0x68,0x4c11db7);
    uVar2 = crc32b(uVar2,0x72,0x4c11db7);
    uVar7 = crc32b(uVar2,0x6f,0x4c11db7);
    DAT_05325ab4 = CONCAT44(1,~uVar7);
    if (iVar4 < iVar9) {
      DAT_05325a80[iVar4] = &DAT_05325ab4;
      iVar4 = (int)DAT_05325a78 + 1;
      DAT_05325a78 = CONCAT44(DAT_05325a78._4_4_,iVar4);
      iVar9 = DAT_05325a78._4_4_;
    }
    uVar1 = crc32b(uVar1,0x74,0x4c11db7);
    uVar7 = crc32b(uVar1,0x72,0x4c11db7);
    DAT_05325abc = CONCAT44(2,~uVar7);
    if (iVar4 < iVar9) {
      DAT_05325a80[iVar4] = &DAT_05325abc;
      iVar4 = (int)DAT_05325a78 + 1;
      DAT_05325a78 = CONCAT44(DAT_05325a78._4_4_,iVar4);
    }
    puVar3 = DAT_05325a80;
    if (1 < iVar4) {
      uVar10 = 0;
      uVar7 = iVar4 - 1;
      do {
        if ((int)uVar7 <= (int)uVar10) break;
        puVar6 = (uint *)puVar3[uVar10];
        uVar8 = (ulong)uVar10;
        if ((uVar7 - uVar10 & 1) == 0) {
          uVar12 = uVar8;
          puVar14 = puVar6;
        }
        else {
          uVar12 = uVar8 + 1;
          puVar14 = (uint *)puVar3[uVar12];
          if (((puVar6 != (uint *)0x0) && (puVar14 != (uint *)0x0)) && (*puVar14 < *puVar6)) {
            puVar3[uVar12] = puVar6;
            puVar3[uVar8] = puVar14;
            puVar14 = puVar6;
          }
        }
        uVar13 = (ulong)uVar7;
        uVar7 = uVar10;
        if (~uVar8 + uVar13 != 0) {
          puVar15 = puVar3 + uVar12 + 1;
          do {
            puVar6 = (uint *)*puVar15;
            uVar11 = (uint)uVar12;
            if (((puVar14 == (uint *)0x0) || (puVar6 == (uint *)0x0)) || (*puVar14 <= *puVar6)) {
              puVar5 = (uint *)puVar15[1];
              if (puVar6 != (uint *)0x0) goto LAB_01ac38b0;
LAB_01ac3860:
              puVar6 = puVar5;
            }
            else {
              puVar15[-1] = puVar6;
              *puVar15 = puVar14;
              puVar5 = (uint *)puVar15[1];
              puVar6 = puVar14;
              uVar7 = uVar11;
              if (puVar14 == (uint *)0x0) goto LAB_01ac3860;
LAB_01ac38b0:
              if ((puVar5 == (uint *)0x0) || (*puVar6 <= *puVar5)) goto LAB_01ac3860;
              uVar7 = uVar11 + 1;
              *puVar15 = puVar5;
              puVar15[1] = puVar6;
            }
            uVar12 = uVar12 + 2;
            puVar15 = puVar15 + 2;
            puVar14 = puVar6;
          } while (uVar13 != uVar12);
        }
        if ((int)uVar7 <= (int)uVar10) break;
        uVar12 = (ulong)uVar7;
        puVar6 = (uint *)puVar3[uVar7];
        uVar10 = uVar7;
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
        } while ((long)uVar8 < (long)uVar12);
      } while (uVar10 != uVar7);
    }
    DAT_05325a74 = '\x01';
  }
  else if (DAT_05325a74 != '\x01') {
    return 0xffffffff;
  }
  if ((int)DAT_05325a78 != 0) {
    if ((int)DAT_05325a78 < 2) {
      puVar6 = (uint *)*DAT_05325a80;
      uVar7 = 0;
    }
    else {
      uVar10 = 0;
      iVar4 = (int)DAT_05325a78 + -1;
      do {
        iVar9 = iVar4 + uVar10;
        if (iVar9 < 0 != SCARRY4(iVar4,uVar10)) {
          iVar9 = iVar9 + 1;
        }
        uVar7 = iVar9 >> 1;
        if (((uint *)DAT_05325a80[(int)uVar7] == (uint *)0x0) ||
           (uVar11 = *(uint *)DAT_05325a80[(int)uVar7], uVar11 == param_1)) goto joined_r0x01ac3764;
        if (uVar11 < param_1) {
          uVar10 = uVar7 + 1;
        }
        else {
          iVar4 = uVar7 - 1;
        }
      } while ((int)uVar10 < iVar4);
      puVar6 = (uint *)DAT_05325a80[(int)uVar10];
      uVar7 = uVar10;
    }
    if ((puVar6 == (uint *)0x0) || (*puVar6 == param_1)) {
joined_r0x01ac3764:
      if ((uVar7 < 3) && (uVar7 = *(uint *)(DAT_05325a80[uVar7] + 4), uVar7 < 3)) {
        DAT_05325a68 = 1;
        DAT_05325a6c = param_1;
        DAT_05325a70 = uVar7;
        return uVar7;
      }
    }
  }
  return 0xffffffff;
}

