
uint FUN_01a890e0(uint param_1)

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
  
  if (DAT_05313410 == '\x01' && DAT_05313414 == param_1) {
    return DAT_05313418;
  }
  if (((DAT_05313488 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05313488), iVar4 != 0)) {
    DAT_05313420 = 0xb00000000;
    DAT_05313428 = (undefined8 *)&DAT_05313430;
    __cxa_guard_release(&DAT_05313488);
  }
  if ((DAT_05313490 & 1) == 0) {
    DAT_05313490 = 1;
    if (((DAT_053134f0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_053134f0), iVar4 != 0)) {
      DAT_053134e4 = 0xffffffff00000000;
      DAT_05313494 = 0xffffffff00000000;
      DAT_0531349c = 0xffffffff00000000;
      DAT_053134a4 = 0xffffffff00000000;
      DAT_053134ac = 0xffffffff00000000;
      DAT_053134b4 = 0xffffffff00000000;
      DAT_053134bc = 0xffffffff00000000;
      DAT_053134c4 = 0xffffffff00000000;
      DAT_053134cc = 0xffffffff00000000;
      DAT_053134d4 = 0xffffffff00000000;
      DAT_053134dc = 0xffffffff00000000;
      __cxa_guard_release(&DAT_053134f0);
    }
    lVar15 = 0;
    do {
      local_75 = 0;
      __src = (&PTR_DAT_04a1e688)[lVar15];
      if (local_174 != __src) {
        lVar5 = 0;
        do {
          if (__src[lVar5] == 0) {
LAB_01a89224:
            iVar4 = (int)lVar5;
joined_r0x01a89228:
            if (0xff < iVar4) {
              iVar4 = 0xff;
            }
            goto LAB_01a89230;
          }
          if (__src[lVar5 + 1] == 0) {
            lVar5 = lVar5 + 1;
            goto LAB_01a89224;
          }
          if (__src[lVar5 + 2] == 0) {
            iVar4 = (int)lVar5 + 2;
            goto joined_r0x01a89228;
          }
          lVar5 = lVar5 + 3;
        } while (lVar5 != 0x80001);
        iVar4 = 0;
LAB_01a89230:
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
      *(uint *)(&DAT_05313494 + lVar15) = uVar8;
      *(int *)((long)&DAT_05313494 + lVar15 * 8 + 4) = (int)lVar15;
      iVar4 = (int)DAT_05313420;
      if ((int)DAT_05313420 < DAT_05313420._4_4_) {
        DAT_05313428[(int)DAT_05313420] = &DAT_05313494 + lVar15;
        iVar4 = (int)DAT_05313420 + 1;
        DAT_05313420 = CONCAT44(DAT_05313420._4_4_,iVar4);
      }
      puVar2 = DAT_05313428;
      lVar15 = lVar15 + 1;
    } while (lVar15 != 0xb);
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
              if (puVar6 != (uint *)0x0) goto LAB_01a894b0;
LAB_01a89460:
              puVar6 = puVar14;
            }
            else {
              puVar13[-1] = puVar6;
              *puVar13 = puVar12;
              puVar14 = (uint *)puVar13[1];
              puVar6 = puVar12;
              uVar3 = uVar9;
              if (puVar12 == (uint *)0x0) goto LAB_01a89460;
LAB_01a894b0:
              if (puVar14 == (uint *)0x0) goto LAB_01a89460;
              if (*puVar6 <= *puVar14) goto LAB_01a89460;
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
    DAT_0531341c = '\x01';
  }
  else if (DAT_0531341c != '\x01') {
    return 0xffffffff;
  }
  if ((int)DAT_05313420 != 0) {
    if ((int)DAT_05313420 < 2) {
      puVar6 = (uint *)*DAT_05313428;
      uVar3 = 0;
    }
    else {
      uVar8 = 0;
      iVar4 = (int)DAT_05313420 + -1;
      do {
        iVar1 = iVar4 + uVar8;
        if (iVar1 < 0 != SCARRY4(iVar4,uVar8)) {
          iVar1 = iVar1 + 1;
        }
        uVar3 = iVar1 >> 1;
        if (((uint *)DAT_05313428[(int)uVar3] == (uint *)0x0) ||
           (uVar9 = *(uint *)DAT_05313428[(int)uVar3], uVar9 == param_1)) goto joined_r0x01a89358;
        if (uVar9 < param_1) {
          uVar8 = uVar3 + 1;
        }
        else {
          iVar4 = uVar3 - 1;
        }
      } while ((int)uVar8 < iVar4);
      puVar6 = (uint *)DAT_05313428[(int)uVar8];
      uVar3 = uVar8;
    }
    if ((puVar6 == (uint *)0x0) || (*puVar6 == param_1)) {
joined_r0x01a89358:
      if ((uVar3 < 0xb) && (uVar3 = *(uint *)(DAT_05313428[uVar3] + 4), uVar3 < 0xb)) {
        DAT_05313410 = 1;
        DAT_05313414 = param_1;
        DAT_05313418 = uVar3;
        return uVar3;
      }
    }
  }
  return 0xffffffff;
}

