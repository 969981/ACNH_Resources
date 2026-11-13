
uint FUN_0128c2f0(uint param_1)

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
  
  if (DAT_051613d8 == '\x01' && DAT_051613dc == param_1) {
    return DAT_051613e0;
  }
  if (((DAT_051614f8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_051614f8), iVar4 != 0)) {
    DAT_051613e8 = 0x2000000000;
    DAT_051613f0 = (undefined8 *)&DAT_051613f8;
    __cxa_guard_release(&DAT_051614f8);
  }
  if ((DAT_05161500 & 1) == 0) {
    DAT_05161500 = 1;
    if (((DAT_05161608 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05161608), iVar4 != 0)) {
      DAT_05161504 = 0xffffffff00000000;
      DAT_0516150c = 0xffffffff00000000;
      DAT_05161514 = 0xffffffff00000000;
      DAT_0516151c = 0xffffffff00000000;
      DAT_05161524 = 0xffffffff00000000;
      DAT_0516152c = 0xffffffff00000000;
      DAT_05161534 = 0xffffffff00000000;
      DAT_0516153c = 0xffffffff00000000;
      DAT_05161544 = 0xffffffff00000000;
      DAT_0516154c = 0xffffffff00000000;
      DAT_05161554 = 0xffffffff00000000;
      DAT_0516155c = 0xffffffff00000000;
      DAT_05161564 = 0xffffffff00000000;
      DAT_0516156c = 0xffffffff00000000;
      DAT_05161574 = 0xffffffff00000000;
      DAT_0516157c = 0xffffffff00000000;
      DAT_05161584 = 0xffffffff00000000;
      DAT_0516158c = 0xffffffff00000000;
      DAT_05161594 = 0xffffffff00000000;
      DAT_0516159c = 0xffffffff00000000;
      DAT_051615a4 = 0xffffffff00000000;
      DAT_051615ac = 0xffffffff00000000;
      DAT_051615b4 = 0xffffffff00000000;
      DAT_051615bc = 0xffffffff00000000;
      DAT_051615c4 = 0xffffffff00000000;
      DAT_051615cc = 0xffffffff00000000;
      DAT_051615d4 = 0xffffffff00000000;
      DAT_051615dc = 0xffffffff00000000;
      DAT_051615e4 = 0xffffffff00000000;
      DAT_051615ec = 0xffffffff00000000;
      DAT_051615f4 = 0xffffffff00000000;
      DAT_051615fc = 0xffffffff00000000;
      __cxa_guard_release(&DAT_05161608);
    }
    lVar15 = 0;
    do {
      local_75 = 0;
      __src = (&PTR_DAT_0498a338)[lVar15];
      if (local_174 != __src) {
        lVar5 = 0;
        do {
          if (__src[lVar5] == 0) {
LAB_0128c434:
            iVar4 = (int)lVar5;
joined_r0x0128c438:
            if (0xff < iVar4) {
              iVar4 = 0xff;
            }
            goto LAB_0128c440;
          }
          if (__src[lVar5 + 1] == 0) {
            lVar5 = lVar5 + 1;
            goto LAB_0128c434;
          }
          if (__src[lVar5 + 2] == 0) {
            iVar4 = (int)lVar5 + 2;
            goto joined_r0x0128c438;
          }
          lVar5 = lVar5 + 3;
        } while (lVar5 != 0x80001);
        iVar4 = 0;
LAB_0128c440:
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
      *(uint *)(&DAT_05161504 + lVar15) = uVar8;
      *(int *)((long)&DAT_05161504 + lVar15 * 8 + 4) = (int)lVar15;
      iVar4 = (int)DAT_051613e8;
      if ((int)DAT_051613e8 < DAT_051613e8._4_4_) {
        DAT_051613f0[(int)DAT_051613e8] = &DAT_05161504 + lVar15;
        iVar4 = (int)DAT_051613e8 + 1;
        DAT_051613e8 = CONCAT44(DAT_051613e8._4_4_,iVar4);
      }
      puVar2 = DAT_051613f0;
      lVar15 = lVar15 + 1;
    } while (lVar15 != 0x20);
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
              if (puVar6 != (uint *)0x0) goto LAB_0128c6c0;
LAB_0128c670:
              puVar6 = puVar14;
            }
            else {
              puVar13[-1] = puVar6;
              *puVar13 = puVar12;
              puVar14 = (uint *)puVar13[1];
              puVar6 = puVar12;
              uVar3 = uVar9;
              if (puVar12 == (uint *)0x0) goto LAB_0128c670;
LAB_0128c6c0:
              if (puVar14 == (uint *)0x0) goto LAB_0128c670;
              if (*puVar6 <= *puVar14) goto LAB_0128c670;
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
    DAT_051613e4 = '\x01';
  }
  else if (DAT_051613e4 != '\x01') {
    return 0xffffffff;
  }
  if ((int)DAT_051613e8 != 0) {
    if ((int)DAT_051613e8 < 2) {
      puVar6 = (uint *)*DAT_051613f0;
      uVar3 = 0;
    }
    else {
      uVar8 = 0;
      iVar4 = (int)DAT_051613e8 + -1;
      do {
        iVar1 = iVar4 + uVar8;
        if (iVar1 < 0 != SCARRY4(iVar4,uVar8)) {
          iVar1 = iVar1 + 1;
        }
        uVar3 = iVar1 >> 1;
        if (((uint *)DAT_051613f0[(int)uVar3] == (uint *)0x0) ||
           (uVar9 = *(uint *)DAT_051613f0[(int)uVar3], uVar9 == param_1)) goto joined_r0x0128c568;
        if (uVar9 < param_1) {
          uVar8 = uVar3 + 1;
        }
        else {
          iVar4 = uVar3 - 1;
        }
      } while ((int)uVar8 < iVar4);
      puVar6 = (uint *)DAT_051613f0[(int)uVar8];
      uVar3 = uVar8;
    }
    if ((puVar6 == (uint *)0x0) || (*puVar6 == param_1)) {
joined_r0x0128c568:
      if ((uVar3 < 0x20) && (uVar3 = *(uint *)(DAT_051613f0[uVar3] + 4), uVar3 < 0x20)) {
        DAT_051613d8 = 1;
        DAT_051613dc = param_1;
        DAT_051613e0 = uVar3;
        return uVar3;
      }
    }
  }
  return 0xffffffff;
}

