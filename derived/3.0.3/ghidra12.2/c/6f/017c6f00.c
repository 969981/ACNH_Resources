
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_017c6f00(uint param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  undefined8 *puVar14;
  
  if (DAT_05293158 == '\x01' && DAT_0529315c == param_1) {
    return DAT_05293160;
  }
  if (((DAT_05293188 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05293188), iVar3 != 0)) {
    DAT_05293168 = 0x200000000;
    DAT_05293170 = (undefined8 *)&DAT_05293178;
    __cxa_guard_release(&DAT_05293188);
  }
  if ((DAT_05293190 & 1) == 0) {
    DAT_05293190 = 1;
    if (((DAT_052931a8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052931a8), iVar3 != 0)) {
      _DAT_05293194 = 0xffffffff00000000;
      DAT_0529319c = 0xffffffff00000000;
      __cxa_guard_release(&DAT_052931a8);
    }
    uVar1 = crc32b(0xffffffff,0x4e,0x4c11db7);
    uVar1 = crc32b(uVar1,0x6f,0x4c11db7);
    uVar1 = crc32b(uVar1,0x6e,0x4c11db7);
    uVar6 = crc32b(uVar1,0x65,0x4c11db7);
    _DAT_05293194 = (ulong)~uVar6;
    iVar3 = (int)DAT_05293168;
    iVar8 = DAT_05293168._4_4_;
    if ((int)DAT_05293168 < DAT_05293168._4_4_) {
      DAT_05293170[(int)DAT_05293168] = &DAT_05293194;
      iVar3 = (int)DAT_05293168 + 1;
      DAT_05293168 = CONCAT44(DAT_05293168._4_4_,iVar3);
      iVar8 = DAT_05293168._4_4_;
    }
    uVar1 = crc32b(0xffffffff,0x53,0x4c11db7);
    uVar1 = crc32b(uVar1,99,0x4c11db7);
    uVar1 = crc32b(uVar1,0x61,0x4c11db7);
    uVar1 = crc32b(uVar1,0x6c,0x4c11db7);
    uVar6 = crc32b(uVar1,0x65,0x4c11db7);
    DAT_0529319c = CONCAT44(1,~uVar6);
    if (iVar3 < iVar8) {
      DAT_05293170[iVar3] = &DAT_0529319c;
      iVar3 = (int)DAT_05293168 + 1;
      DAT_05293168 = CONCAT44(DAT_05293168._4_4_,iVar3);
    }
    puVar2 = DAT_05293170;
    if (1 < iVar3) {
      uVar9 = 0;
      uVar6 = iVar3 - 1;
      do {
        if ((int)uVar6 <= (int)uVar9) break;
        puVar5 = (uint *)puVar2[uVar9];
        uVar7 = (ulong)uVar9;
        if ((uVar6 - uVar9 & 1) == 0) {
          uVar11 = uVar7;
          puVar13 = puVar5;
        }
        else {
          uVar11 = uVar7 + 1;
          puVar13 = (uint *)puVar2[uVar11];
          if (((puVar5 != (uint *)0x0) && (puVar13 != (uint *)0x0)) && (*puVar13 < *puVar5)) {
            puVar2[uVar11] = puVar5;
            puVar2[uVar7] = puVar13;
            puVar13 = puVar5;
          }
        }
        uVar12 = (ulong)uVar6;
        uVar6 = uVar9;
        if (~uVar7 + uVar12 != 0) {
          puVar14 = puVar2 + uVar11 + 1;
          do {
            puVar5 = (uint *)*puVar14;
            uVar10 = (uint)uVar11;
            if (((puVar13 == (uint *)0x0) || (puVar5 == (uint *)0x0)) || (*puVar13 <= *puVar5)) {
              puVar4 = (uint *)puVar14[1];
              if (puVar5 != (uint *)0x0) goto LAB_017c7210;
LAB_017c71c0:
              puVar5 = puVar4;
            }
            else {
              puVar14[-1] = puVar5;
              *puVar14 = puVar13;
              puVar4 = (uint *)puVar14[1];
              puVar5 = puVar13;
              uVar6 = uVar10;
              if (puVar13 == (uint *)0x0) goto LAB_017c71c0;
LAB_017c7210:
              if ((puVar4 == (uint *)0x0) || (*puVar5 <= *puVar4)) goto LAB_017c71c0;
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
        } while ((long)uVar7 < (long)uVar11);
      } while (uVar9 != uVar6);
    }
    DAT_05293164 = '\x01';
  }
  else if (DAT_05293164 != '\x01') {
    return 0xffffffff;
  }
  if ((int)DAT_05293168 != 0) {
    if ((int)DAT_05293168 < 2) {
      puVar5 = (uint *)*DAT_05293170;
      uVar6 = 0;
    }
    else {
      uVar9 = 0;
      iVar3 = (int)DAT_05293168 + -1;
      do {
        iVar8 = iVar3 + uVar9;
        if (iVar8 < 0 != SCARRY4(iVar3,uVar9)) {
          iVar8 = iVar8 + 1;
        }
        uVar6 = iVar8 >> 1;
        if (((uint *)DAT_05293170[(int)uVar6] == (uint *)0x0) ||
           (uVar10 = *(uint *)DAT_05293170[(int)uVar6], uVar10 == param_1)) goto joined_r0x017c70c4;
        if (uVar10 < param_1) {
          uVar9 = uVar6 + 1;
        }
        else {
          iVar3 = uVar6 - 1;
        }
      } while ((int)uVar9 < iVar3);
      puVar5 = (uint *)DAT_05293170[(int)uVar9];
      uVar6 = uVar9;
    }
    if ((puVar5 == (uint *)0x0) || (*puVar5 == param_1)) {
joined_r0x017c70c4:
      if ((uVar6 < 2) && (uVar6 = *(uint *)(DAT_05293170[uVar6] + 4), uVar6 < 2)) {
        DAT_05293158 = 1;
        DAT_0529315c = param_1;
        DAT_05293160 = uVar6;
        return uVar6;
      }
    }
  }
  return 0xffffffff;
}

