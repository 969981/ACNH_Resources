
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01ac3110(uint param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  undefined8 *puVar14;
  
  if (DAT_05325a10 == '\x01' && DAT_05325a14 == param_1) {
    return DAT_05325a18;
  }
  if (((DAT_05325a40 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05325a40), iVar3 != 0)) {
    DAT_05325a20 = 0x200000000;
    DAT_05325a28 = (undefined8 *)&DAT_05325a30;
    __cxa_guard_release(&DAT_05325a40);
  }
  if ((DAT_05325a48 & 1) == 0) {
    DAT_05325a48 = 1;
    if (((DAT_05325a60 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05325a60), iVar3 != 0)) {
      _DAT_05325a4c = 0xffffffff00000000;
      DAT_05325a54 = 0xffffffff00000000;
      __cxa_guard_release(&DAT_05325a60);
    }
    uVar1 = crc32b(0xffffffff,0xe3,0x4c11db7);
    uVar1 = crc32b(uVar1,0x81,0x4c11db7);
    uVar1 = crc32b(uVar1,0xaa,0x4c11db7);
    uVar1 = crc32b(uVar1,0xe3,0x4c11db7);
    uVar1 = crc32b(uVar1,0x81,0x4c11db7);
    uVar6 = crc32b(uVar1,0x97,0x4c11db7);
    _DAT_05325a4c = (ulong)~uVar6;
    iVar3 = (int)DAT_05325a20;
    iVar7 = DAT_05325a20._4_4_;
    if ((int)DAT_05325a20 < DAT_05325a20._4_4_) {
      DAT_05325a28[(int)DAT_05325a20] = &DAT_05325a4c;
      iVar3 = (int)DAT_05325a20 + 1;
      DAT_05325a20 = CONCAT44(DAT_05325a20._4_4_,iVar3);
      iVar7 = DAT_05325a20._4_4_;
    }
    uVar1 = crc32b(0xffffffff,0xe9,0x4c11db7);
    uVar1 = crc32b(uVar1,0x9b,0x4c11db7);
    uVar1 = crc32b(uVar1,0xa8,0x4c11db7);
    uVar1 = crc32b(uVar1,0xe5,0x4c11db7);
    uVar1 = crc32b(uVar1,0x8f,0x4c11db7);
    uVar6 = crc32b(uVar1,0xaf,0x4c11db7);
    DAT_05325a54 = CONCAT44(1,~uVar6);
    if (iVar3 < iVar7) {
      DAT_05325a28[iVar3] = &DAT_05325a54;
      iVar3 = (int)DAT_05325a20 + 1;
      DAT_05325a20 = CONCAT44(DAT_05325a20._4_4_,iVar3);
    }
    puVar2 = DAT_05325a28;
    if (1 < iVar3) {
      uVar9 = 0;
      uVar6 = iVar3 - 1;
      do {
        if ((int)uVar6 <= (int)uVar9) break;
        puVar5 = (uint *)puVar2[uVar9];
        uVar8 = (ulong)uVar9;
        if ((uVar6 - uVar9 & 1) == 0) {
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
        uVar12 = (ulong)uVar6;
        uVar6 = uVar9;
        if (~uVar8 + uVar12 != 0) {
          puVar14 = puVar2 + uVar11 + 1;
          do {
            puVar5 = (uint *)*puVar14;
            uVar10 = (uint)uVar11;
            if (((puVar13 == (uint *)0x0) || (puVar5 == (uint *)0x0)) || (*puVar13 <= *puVar5)) {
              puVar4 = (uint *)puVar14[1];
              if (puVar5 != (uint *)0x0) goto LAB_01ac3430;
LAB_01ac33e0:
              puVar5 = puVar4;
            }
            else {
              puVar14[-1] = puVar5;
              *puVar14 = puVar13;
              puVar4 = (uint *)puVar14[1];
              puVar5 = puVar13;
              uVar6 = uVar10;
              if (puVar13 == (uint *)0x0) goto LAB_01ac33e0;
LAB_01ac3430:
              if ((puVar4 == (uint *)0x0) || (*puVar5 <= *puVar4)) goto LAB_01ac33e0;
              uVar6 = uVar10 + 1;
              *puVar14 = puVar4;
              puVar14[1] = puVar5;
            }
            uVar11 = uVar11 + 2;
            puVar14 = puVar14 + 2;
            puVar13 = puVar5;
          } while (uVar12 != uVar11);
        }
        if ((int)uVar6 <= (int)uVar9) break;
        uVar11 = (ulong)uVar6;
        puVar5 = (uint *)puVar2[uVar6];
        uVar9 = uVar6;
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
      } while (uVar9 != uVar6);
    }
    DAT_05325a1c = '\x01';
  }
  else if (DAT_05325a1c != '\x01') {
    return 0xffffffff;
  }
  if ((int)DAT_05325a20 != 0) {
    if ((int)DAT_05325a20 < 2) {
      puVar5 = (uint *)*DAT_05325a28;
      uVar6 = 0;
    }
    else {
      uVar9 = 0;
      iVar3 = (int)DAT_05325a20 + -1;
      do {
        iVar7 = iVar3 + uVar9;
        if (iVar7 < 0 != SCARRY4(iVar3,uVar9)) {
          iVar7 = iVar7 + 1;
        }
        uVar6 = iVar7 >> 1;
        if (((uint *)DAT_05325a28[(int)uVar6] == (uint *)0x0) ||
           (uVar10 = *(uint *)DAT_05325a28[(int)uVar6], uVar10 == param_1)) goto joined_r0x01ac32e4;
        if (uVar10 < param_1) {
          uVar9 = uVar6 + 1;
        }
        else {
          iVar3 = uVar6 - 1;
        }
      } while ((int)uVar9 < iVar3);
      puVar5 = (uint *)DAT_05325a28[(int)uVar9];
      uVar6 = uVar9;
    }
    if ((puVar5 == (uint *)0x0) || (*puVar5 == param_1)) {
joined_r0x01ac32e4:
      if ((uVar6 < 2) && (uVar6 = *(uint *)(DAT_05325a28[uVar6] + 4), uVar6 < 2)) {
        DAT_05325a10 = 1;
        DAT_05325a14 = param_1;
        DAT_05325a18 = uVar6;
        return uVar6;
      }
    }
  }
  return 0xffffffff;
}

