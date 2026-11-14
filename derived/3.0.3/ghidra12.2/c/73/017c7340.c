
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_017c7340(uint param_1)

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
  
  if (DAT_052931b0 == '\x01' && DAT_052931b4 == param_1) {
    return DAT_052931b8;
  }
  if (((DAT_052931e0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_052931e0), iVar4 != 0)) {
    DAT_052931c0 = 0x200000000;
    DAT_052931c8 = (undefined8 *)&DAT_052931d0;
    __cxa_guard_release(&DAT_052931e0);
  }
  if ((DAT_052931e8 & 1) == 0) {
    DAT_052931e8 = 1;
    if (((DAT_05293200 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05293200), iVar4 != 0)) {
      _DAT_052931ec = 0xffffffff00000000;
      DAT_052931f4 = 0xffffffff00000000;
      __cxa_guard_release(&DAT_05293200);
    }
    uVar1 = crc32b(0xffffffff,0xe3,0x4c11db7);
    uVar1 = crc32b(uVar1,0x81,0x4c11db7);
    uVar2 = crc32b(uVar1,0xaa,0x4c11db7);
    uVar2 = crc32b(uVar2,0xe3,0x4c11db7);
    uVar2 = crc32b(uVar2,0x81,0x4c11db7);
    uVar7 = crc32b(uVar2,0x97,0x4c11db7);
    _DAT_052931ec = (ulong)~uVar7;
    iVar4 = (int)DAT_052931c0;
    iVar9 = DAT_052931c0._4_4_;
    if ((int)DAT_052931c0 < DAT_052931c0._4_4_) {
      DAT_052931c8[(int)DAT_052931c0] = &DAT_052931ec;
      iVar4 = (int)DAT_052931c0 + 1;
      DAT_052931c0 = CONCAT44(DAT_052931c0._4_4_,iVar4);
      iVar9 = DAT_052931c0._4_4_;
    }
    uVar1 = crc32b(uVar1,0x82,0x4c11db7);
    uVar1 = crc32b(uVar1,0xe3,0x4c11db7);
    uVar1 = crc32b(uVar1,0x82,0x4c11db7);
    uVar7 = crc32b(uVar1,0x8a,0x4c11db7);
    DAT_052931f4 = CONCAT44(1,~uVar7);
    if (iVar4 < iVar9) {
      DAT_052931c8[iVar4] = &DAT_052931f4;
      iVar4 = (int)DAT_052931c0 + 1;
      DAT_052931c0 = CONCAT44(DAT_052931c0._4_4_,iVar4);
    }
    puVar3 = DAT_052931c8;
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
              if (puVar6 != (uint *)0x0) goto LAB_017c7650;
LAB_017c7600:
              puVar6 = puVar5;
            }
            else {
              puVar15[-1] = puVar6;
              *puVar15 = puVar14;
              puVar5 = (uint *)puVar15[1];
              puVar6 = puVar14;
              uVar7 = uVar11;
              if (puVar14 == (uint *)0x0) goto LAB_017c7600;
LAB_017c7650:
              if ((puVar5 == (uint *)0x0) || (*puVar6 <= *puVar5)) goto LAB_017c7600;
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
    DAT_052931bc = '\x01';
  }
  else if (DAT_052931bc != '\x01') {
    return 0xffffffff;
  }
  if ((int)DAT_052931c0 != 0) {
    if ((int)DAT_052931c0 < 2) {
      puVar6 = (uint *)*DAT_052931c8;
      uVar7 = 0;
    }
    else {
      uVar10 = 0;
      iVar4 = (int)DAT_052931c0 + -1;
      do {
        iVar9 = iVar4 + uVar10;
        if (iVar9 < 0 != SCARRY4(iVar4,uVar10)) {
          iVar9 = iVar9 + 1;
        }
        uVar7 = iVar9 >> 1;
        if (((uint *)DAT_052931c8[(int)uVar7] == (uint *)0x0) ||
           (uVar11 = *(uint *)DAT_052931c8[(int)uVar7], uVar11 == param_1)) goto joined_r0x017c74f8;
        if (uVar11 < param_1) {
          uVar10 = uVar7 + 1;
        }
        else {
          iVar4 = uVar7 - 1;
        }
      } while ((int)uVar10 < iVar4);
      puVar6 = (uint *)DAT_052931c8[(int)uVar10];
      uVar7 = uVar10;
    }
    if ((puVar6 == (uint *)0x0) || (*puVar6 == param_1)) {
joined_r0x017c74f8:
      if ((uVar7 < 2) && (uVar7 = *(uint *)(DAT_052931c8[uVar7] + 4), uVar7 < 2)) {
        DAT_052931b0 = 1;
        DAT_052931b4 = param_1;
        DAT_052931b8 = uVar7;
        return uVar7;
      }
    }
  }
  return 0xffffffff;
}

