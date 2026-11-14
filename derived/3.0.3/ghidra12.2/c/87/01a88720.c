
uint FUN_01a88720(uint param_1)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  uint *puVar14;
  byte *__src;
  long lVar15;
  byte local_174 [255];
  undefined1 local_75;
  
  if (DAT_053131c0 == '\x01' && DAT_053131c4 == param_1) {
    return DAT_053131c8;
  }
  if (((DAT_05313258 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05313258), iVar4 != 0)) {
    DAT_053131d0 = 0xf00000000;
    DAT_053131d8 = (undefined8 *)&DAT_053131e0;
    __cxa_guard_release(&DAT_05313258);
  }
  if ((DAT_05313260 & 1) == 0) {
    DAT_05313260 = 1;
    if (((DAT_053132e0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_053132e0), iVar4 != 0)) {
      DAT_053132d4 = 0xffffffff00000000;
      DAT_05313264 = 0xffffffff00000000;
      DAT_0531326c = 0xffffffff00000000;
      DAT_05313274 = 0xffffffff00000000;
      DAT_0531327c = 0xffffffff00000000;
      DAT_05313284 = 0xffffffff00000000;
      DAT_0531328c = 0xffffffff00000000;
      DAT_05313294 = 0xffffffff00000000;
      DAT_0531329c = 0xffffffff00000000;
      DAT_053132a4 = 0xffffffff00000000;
      DAT_053132ac = 0xffffffff00000000;
      DAT_053132b4 = 0xffffffff00000000;
      DAT_053132bc = 0xffffffff00000000;
      DAT_053132c4 = 0xffffffff00000000;
      DAT_053132cc = 0xffffffff00000000;
      __cxa_guard_release(&DAT_053132e0);
    }
    lVar15 = 0;
    do {
      local_75 = 0;
      __src = (&PTR_s_Floor_04a1e430)[lVar15];
      if (local_174 != __src) {
        lVar5 = 0;
        do {
          if (__src[lVar5] == 0) {
LAB_01a88864:
            iVar4 = (int)lVar5;
joined_r0x01a88868:
            if (0xff < iVar4) {
              iVar4 = 0xff;
            }
            goto LAB_01a88870;
          }
          if (__src[lVar5 + 1] == 0) {
            lVar5 = lVar5 + 1;
            goto LAB_01a88864;
          }
          if (__src[lVar5 + 2] == 0) {
            iVar4 = (int)lVar5 + 2;
            goto joined_r0x01a88868;
          }
          lVar5 = lVar5 + 3;
        } while (lVar5 != 0x80001);
        iVar4 = 0;
LAB_01a88870:
        memcpy(local_174,__src,(long)iVar4);
        local_174[iVar4] = 0;
      }
      uVar3 = (uint)*__src;
      if (*__src == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 0xffffffff;
        do {
          __src = __src + 1;
          uVar8 = crc32b(uVar8,uVar3,0x4c11db7);
          uVar3 = (uint)*__src;
        } while (uVar3 != 0);
        uVar8 = ~uVar8;
      }
      *(uint *)(&DAT_05313264 + lVar15) = uVar8;
      *(int *)((long)&DAT_05313264 + lVar15 * 8 + 4) = (int)lVar15;
      iVar4 = (int)DAT_053131d0;
      if ((int)DAT_053131d0 < DAT_053131d0._4_4_) {
        DAT_053131d8[(int)DAT_053131d0] = &DAT_05313264 + lVar15;
        iVar4 = (int)DAT_053131d0 + 1;
        DAT_053131d0 = CONCAT44(DAT_053131d0._4_4_,iVar4);
      }
      puVar2 = DAT_053131d8;
      lVar15 = lVar15 + 1;
    } while (lVar15 != 0xf);
    if (1 < iVar4) {
      uVar8 = 0;
      uVar3 = iVar4 - 1;
      do {
        if ((int)uVar3 <= (int)uVar8) break;
        puVar6 = (uint *)puVar2[uVar8];
        uVar7 = (ulong)uVar8;
        if ((uVar3 - uVar8 & 1) == 0) {
          uVar10 = uVar7;
          puVar12 = puVar6;
        }
        else {
          uVar10 = uVar7 + 1;
          puVar12 = (uint *)puVar2[uVar10];
          if (((puVar6 != (uint *)0x0) && (puVar12 != (uint *)0x0)) && (*puVar12 < *puVar6)) {
            puVar2[uVar10] = puVar6;
            puVar2[uVar7] = puVar12;
            puVar12 = puVar6;
          }
        }
        uVar11 = (ulong)uVar3;
        uVar3 = uVar8;
        if (~uVar7 + uVar11 != 0) {
          puVar13 = puVar2 + uVar10 + 1;
          do {
            puVar6 = (uint *)*puVar13;
            uVar9 = (uint)uVar10;
            if (((puVar12 == (uint *)0x0) || (puVar6 == (uint *)0x0)) || (*puVar12 <= *puVar6)) {
              puVar14 = (uint *)puVar13[1];
              if (puVar6 != (uint *)0x0) goto LAB_01a88af0;
LAB_01a88aa0:
              puVar6 = puVar14;
            }
            else {
              puVar13[-1] = puVar6;
              *puVar13 = puVar12;
              puVar14 = (uint *)puVar13[1];
              puVar6 = puVar12;
              uVar3 = uVar9;
              if (puVar12 == (uint *)0x0) goto LAB_01a88aa0;
LAB_01a88af0:
              if (puVar14 == (uint *)0x0) goto LAB_01a88aa0;
              if (*puVar6 <= *puVar14) goto LAB_01a88aa0;
              uVar3 = uVar9 + 1;
              *puVar13 = puVar14;
              puVar13[1] = puVar6;
            }
            uVar10 = uVar10 + 2;
            puVar13 = puVar13 + 2;
            puVar12 = puVar6;
          } while (uVar11 != uVar10);
        }
        if ((int)uVar3 <= (int)uVar8) break;
        uVar10 = (ulong)uVar3;
        puVar6 = (uint *)puVar2[uVar3];
        uVar8 = uVar3;
        do {
          puVar12 = (uint *)puVar2[uVar10 - 1];
          if (((puVar6 != (uint *)0x0) && (puVar12 != (uint *)0x0)) && (*puVar6 < *puVar12)) {
            uVar8 = (uint)uVar10;
            puVar2[uVar10 - 1] = puVar6;
            puVar2[uVar10] = puVar12;
            puVar12 = puVar6;
          }
          uVar10 = uVar10 - 1;
          puVar6 = puVar12;
        } while ((long)uVar7 < (long)uVar10);
      } while (uVar8 != uVar3);
    }
    DAT_053131cc = '\x01';
  }
  else if (DAT_053131cc != '\x01') {
    return 0xffffffff;
  }
  if ((int)DAT_053131d0 != 0) {
    if ((int)DAT_053131d0 < 2) {
      puVar6 = (uint *)*DAT_053131d8;
      uVar3 = 0;
    }
    else {
      uVar8 = 0;
      iVar4 = (int)DAT_053131d0 + -1;
      do {
        iVar1 = iVar4 + uVar8;
        if (iVar1 < 0 != SCARRY4(iVar4,uVar8)) {
          iVar1 = iVar1 + 1;
        }
        uVar3 = iVar1 >> 1;
        if (((uint *)DAT_053131d8[(int)uVar3] == (uint *)0x0) ||
           (uVar9 = *(uint *)DAT_053131d8[(int)uVar3], uVar9 == param_1)) goto joined_r0x01a88998;
        if (uVar9 < param_1) {
          uVar8 = uVar3 + 1;
        }
        else {
          iVar4 = uVar3 - 1;
        }
      } while ((int)uVar8 < iVar4);
      puVar6 = (uint *)DAT_053131d8[(int)uVar8];
      uVar3 = uVar8;
    }
    if ((puVar6 == (uint *)0x0) || (*puVar6 == param_1)) {
joined_r0x01a88998:
      if ((uVar3 < 0xf) && (uVar3 = *(uint *)(DAT_053131d8[uVar3] + 4), uVar3 < 0xf)) {
        DAT_053131c0 = 1;
        DAT_053131c4 = param_1;
        DAT_053131c8 = uVar3;
        return uVar3;
      }
    }
  }
  return 0xffffffff;
}

