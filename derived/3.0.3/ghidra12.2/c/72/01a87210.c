
uint FUN_01a87210(uint param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  undefined8 *puVar14;
  
  if (DAT_05310178 == '\x01' && DAT_0531017c == param_1) {
    return DAT_05310180;
  }
  if (((DAT_053101b0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_053101b0), iVar3 != 0)) {
    DAT_05310188 = 0x300000000;
    DAT_05310190 = (undefined8 *)&DAT_05310198;
    __cxa_guard_release(&DAT_053101b0);
  }
  if ((DAT_053101b8 & 1) == 0) {
    DAT_053101b8 = 1;
    if (((DAT_053101d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_053101d8), iVar3 != 0)) {
      DAT_053101bc = 0xffffffff00000000;
      DAT_053101c4 = 0xffffffff00000000;
      DAT_053101cc = 0xffffffff00000000;
      __cxa_guard_release(&DAT_053101d8);
    }
    uVar1 = crc32b(0xffffffff,0xe6,0x4c11db7);
    uVar1 = crc32b(uVar1,0x80,0x4c11db7);
    uVar1 = crc32b(uVar1,0xa7,0x4c11db7);
    uVar1 = crc32b(uVar1,0xe5,0x4c11db7);
    uVar1 = crc32b(uVar1,0x88,0x4c11db7);
    uVar1 = crc32b(uVar1,0xa5,0x4c11db7);
    uVar1 = crc32b(uVar1,0xe3,0x4c11db7);
    uVar1 = crc32b(uVar1,0x81,0x4c11db7);
    uVar1 = crc32b(uVar1,0xaa,0x4c11db7);
    uVar1 = crc32b(uVar1,0xe3,0x4c11db7);
    uVar1 = crc32b(uVar1,0x81,0x4c11db7);
    uVar7 = crc32b(uVar1,0x97,0x4c11db7);
    DAT_053101bc = (ulong)~uVar7;
    iVar3 = (int)DAT_05310188;
    iVar4 = DAT_05310188._4_4_;
    if ((int)DAT_05310188 < DAT_05310188._4_4_) {
      DAT_05310190[(int)DAT_05310188] = &DAT_053101bc;
      iVar3 = (int)DAT_05310188 + 1;
      DAT_05310188 = CONCAT44(DAT_05310188._4_4_,iVar3);
      iVar4 = DAT_05310188._4_4_;
    }
    uVar1 = crc32b(0xffffffff,0xe7,0x4c11db7);
    uVar1 = crc32b(uVar1,0x94,0x4c11db7);
    uVar1 = crc32b(uVar1,0xb7,0x4c11db7);
    uVar1 = crc32b(uVar1,0xe6,0x4c11db7);
    uVar1 = crc32b(uVar1,0x80,0x4c11db7);
    uVar1 = crc32b(uVar1,0xa7,0x4c11db7);
    uVar1 = crc32b(uVar1,0xe5,0x4c11db7);
    uVar1 = crc32b(uVar1,0x90,0x4c11db7);
    uVar1 = crc32b(uVar1,0x91,0x4c11db7);
    uVar1 = crc32b(uVar1,0xe3,0x4c11db7);
    uVar1 = crc32b(uVar1,0x81,0x4c11db7);
    uVar7 = crc32b(uVar1,0x91,0x4c11db7);
    DAT_053101c4 = CONCAT44(1,~uVar7);
    if (iVar3 < iVar4) {
      DAT_05310190[iVar3] = &DAT_053101c4;
      iVar3 = (int)DAT_05310188 + 1;
      DAT_05310188 = CONCAT44(DAT_05310188._4_4_,iVar3);
      iVar4 = DAT_05310188._4_4_;
    }
    uVar1 = crc32b(0xffffffff,0xe5,0x4c11db7);
    uVar1 = crc32b(uVar1,0xa5,0x4c11db7);
    uVar1 = crc32b(uVar1,0xb3,0x4c11db7);
    uVar1 = crc32b(uVar1,0xe6,0x4c11db7);
    uVar1 = crc32b(uVar1,0x80,0x4c11db7);
    uVar1 = crc32b(uVar1,0xa7,0x4c11db7);
    uVar1 = crc32b(uVar1,0xe5,0x4c11db7);
    uVar1 = crc32b(uVar1,0x90,0x4c11db7);
    uVar1 = crc32b(uVar1,0x91,0x4c11db7);
    uVar1 = crc32b(uVar1,0xe3,0x4c11db7);
    uVar1 = crc32b(uVar1,0x81,0x4c11db7);
    uVar7 = crc32b(uVar1,0x91,0x4c11db7);
    DAT_053101cc = CONCAT44(2,~uVar7);
    if (iVar3 < iVar4) {
      DAT_05310190[iVar3] = &DAT_053101cc;
      iVar3 = (int)DAT_05310188 + 1;
      DAT_05310188 = CONCAT44(DAT_05310188._4_4_,iVar3);
    }
    puVar2 = DAT_05310190;
    if (1 < iVar3) {
      uVar9 = 0;
      uVar7 = iVar3 - 1;
      do {
        if ((int)uVar7 <= (int)uVar9) break;
        puVar6 = (uint *)puVar2[uVar9];
        uVar8 = (ulong)uVar9;
        if ((uVar7 - uVar9 & 1) == 0) {
          uVar11 = uVar8;
          puVar13 = puVar6;
        }
        else {
          uVar11 = uVar8 + 1;
          puVar13 = (uint *)puVar2[uVar11];
          if (((puVar6 != (uint *)0x0) && (puVar13 != (uint *)0x0)) && (*puVar13 < *puVar6)) {
            puVar2[uVar11] = puVar6;
            puVar2[uVar8] = puVar13;
            puVar13 = puVar6;
          }
        }
        uVar12 = (ulong)uVar7;
        uVar7 = uVar9;
        if (~uVar8 + uVar12 != 0) {
          puVar14 = puVar2 + uVar11 + 1;
          do {
            puVar6 = (uint *)*puVar14;
            uVar10 = (uint)uVar11;
            if (((puVar13 == (uint *)0x0) || (puVar6 == (uint *)0x0)) || (*puVar13 <= *puVar6)) {
              puVar5 = (uint *)puVar14[1];
              if (puVar6 != (uint *)0x0) goto LAB_01a875e0;
LAB_01a87590:
              puVar6 = puVar5;
            }
            else {
              puVar14[-1] = puVar6;
              *puVar14 = puVar13;
              puVar5 = (uint *)puVar14[1];
              puVar6 = puVar13;
              uVar7 = uVar10;
              if (puVar13 == (uint *)0x0) goto LAB_01a87590;
LAB_01a875e0:
              if ((puVar5 == (uint *)0x0) || (*puVar6 <= *puVar5)) goto LAB_01a87590;
              uVar7 = uVar10 + 1;
              *puVar14 = puVar5;
              puVar14[1] = puVar6;
            }
            uVar11 = uVar11 + 2;
            puVar14 = puVar14 + 2;
            puVar13 = puVar6;
          } while (uVar12 != uVar11);
        }
        if ((int)uVar7 <= (int)uVar9) break;
        uVar11 = (ulong)uVar7;
        puVar6 = (uint *)puVar2[uVar7];
        uVar9 = uVar7;
        do {
          puVar13 = (uint *)puVar2[uVar11 - 1];
          if (((puVar6 != (uint *)0x0) && (puVar13 != (uint *)0x0)) && (*puVar6 < *puVar13)) {
            uVar9 = (uint)uVar11;
            puVar2[uVar11 - 1] = puVar6;
            puVar2[uVar11] = puVar13;
            puVar13 = puVar6;
          }
          uVar11 = uVar11 - 1;
          puVar6 = puVar13;
        } while ((long)uVar8 < (long)uVar11);
      } while (uVar9 != uVar7);
    }
    DAT_05310184 = '\x01';
  }
  else if (DAT_05310184 != '\x01') {
    return 0xffffffff;
  }
  if ((int)DAT_05310188 != 0) {
    if ((int)DAT_05310188 < 2) {
      puVar6 = (uint *)*DAT_05310190;
      uVar7 = 0;
    }
    else {
      uVar9 = 0;
      iVar3 = (int)DAT_05310188 + -1;
      do {
        iVar4 = iVar3 + uVar9;
        if (iVar4 < 0 != SCARRY4(iVar3,uVar9)) {
          iVar4 = iVar4 + 1;
        }
        uVar7 = iVar4 >> 1;
        if (((uint *)DAT_05310190[(int)uVar7] == (uint *)0x0) ||
           (uVar10 = *(uint *)DAT_05310190[(int)uVar7], uVar10 == param_1)) goto joined_r0x01a87494;
        if (uVar10 < param_1) {
          uVar9 = uVar7 + 1;
        }
        else {
          iVar3 = uVar7 - 1;
        }
      } while ((int)uVar9 < iVar3);
      puVar6 = (uint *)DAT_05310190[(int)uVar9];
      uVar7 = uVar9;
    }
    if ((puVar6 == (uint *)0x0) || (*puVar6 == param_1)) {
joined_r0x01a87494:
      if ((uVar7 < 3) && (uVar7 = *(uint *)(DAT_05310190[uVar7] + 4), uVar7 < 3)) {
        DAT_05310178 = 1;
        DAT_0531017c = param_1;
        DAT_05310180 = uVar7;
        return uVar7;
      }
    }
  }
  return 0xffffffff;
}

