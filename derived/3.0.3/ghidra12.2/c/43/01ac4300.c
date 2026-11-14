
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01ac4300(uint param_1)

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
  
  if (DAT_05325b90 == '\x01' && DAT_05325b94 == param_1) {
    return DAT_05325b98;
  }
  if (((DAT_05325bc0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05325bc0), iVar3 != 0)) {
    DAT_05325ba0 = 0x200000000;
    DAT_05325ba8 = (undefined8 *)&DAT_05325bb0;
    __cxa_guard_release(&DAT_05325bc0);
  }
  if ((DAT_05325bc8 & 1) == 0) {
    DAT_05325bc8 = 1;
    if (((DAT_05325be0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05325be0), iVar3 != 0)) {
      _DAT_05325bcc = 0xffffffff00000000;
      DAT_05325bd4 = 0xffffffff00000000;
      __cxa_guard_release(&DAT_05325be0);
    }
    uVar1 = crc32b(0xffffffff,0xe5,0x4c11db7);
    uVar1 = crc32b(uVar1,0x90,0x4c11db7);
    uVar1 = crc32b(uVar1,0x8c,0x4c11db7);
    uVar1 = crc32b(uVar1,0xe8,0x4c11db7);
    uVar1 = crc32b(uVar1,0xaa,0x4c11db7);
    uVar6 = crc32b(uVar1,0xbf,0x4c11db7);
    _DAT_05325bcc = (ulong)~uVar6;
    iVar3 = (int)DAT_05325ba0;
    iVar7 = DAT_05325ba0._4_4_;
    if ((int)DAT_05325ba0 < DAT_05325ba0._4_4_) {
      DAT_05325ba8[(int)DAT_05325ba0] = &DAT_05325bcc;
      iVar3 = (int)DAT_05325ba0 + 1;
      DAT_05325ba0 = CONCAT44(DAT_05325ba0._4_4_,iVar3);
      iVar7 = DAT_05325ba0._4_4_;
    }
    uVar1 = crc32b(0xffffffff,0xe7,0x4c11db7);
    uVar1 = crc32b(uVar1,0x8b,0x4c11db7);
    uVar1 = crc32b(uVar1,0xac,0x4c11db7);
    uVar1 = crc32b(uVar1,0xe7,0x4c11db7);
    uVar1 = crc32b(uVar1,0xab,0x4c11db7);
    uVar6 = crc32b(uVar1,0x8b,0x4c11db7);
    DAT_05325bd4 = CONCAT44(1,~uVar6);
    if (iVar3 < iVar7) {
      DAT_05325ba8[iVar3] = &DAT_05325bd4;
      iVar3 = (int)DAT_05325ba0 + 1;
      DAT_05325ba0 = CONCAT44(DAT_05325ba0._4_4_,iVar3);
    }
    puVar2 = DAT_05325ba8;
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
              if (puVar5 != (uint *)0x0) goto LAB_01ac4620;
LAB_01ac45d0:
              puVar5 = puVar4;
            }
            else {
              puVar14[-1] = puVar5;
              *puVar14 = puVar13;
              puVar4 = (uint *)puVar14[1];
              puVar5 = puVar13;
              uVar6 = uVar10;
              if (puVar13 == (uint *)0x0) goto LAB_01ac45d0;
LAB_01ac4620:
              if ((puVar4 == (uint *)0x0) || (*puVar5 <= *puVar4)) goto LAB_01ac45d0;
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
    DAT_05325b9c = '\x01';
  }
  else if (DAT_05325b9c != '\x01') {
    return 0xffffffff;
  }
  if ((int)DAT_05325ba0 != 0) {
    if ((int)DAT_05325ba0 < 2) {
      puVar5 = (uint *)*DAT_05325ba8;
      uVar6 = 0;
    }
    else {
      uVar9 = 0;
      iVar3 = (int)DAT_05325ba0 + -1;
      do {
        iVar7 = iVar3 + uVar9;
        if (iVar7 < 0 != SCARRY4(iVar3,uVar9)) {
          iVar7 = iVar7 + 1;
        }
        uVar6 = iVar7 >> 1;
        if (((uint *)DAT_05325ba8[(int)uVar6] == (uint *)0x0) ||
           (uVar10 = *(uint *)DAT_05325ba8[(int)uVar6], uVar10 == param_1)) goto joined_r0x01ac44d4;
        if (uVar10 < param_1) {
          uVar9 = uVar6 + 1;
        }
        else {
          iVar3 = uVar6 - 1;
        }
      } while ((int)uVar9 < iVar3);
      puVar5 = (uint *)DAT_05325ba8[(int)uVar9];
      uVar6 = uVar9;
    }
    if ((puVar5 == (uint *)0x0) || (*puVar5 == param_1)) {
joined_r0x01ac44d4:
      if ((uVar6 < 2) && (uVar6 = *(uint *)(DAT_05325ba8[uVar6] + 4), uVar6 < 2)) {
        DAT_05325b90 = 1;
        DAT_05325b94 = param_1;
        DAT_05325b98 = uVar6;
        return uVar6;
      }
    }
  }
  return 0xffffffff;
}

