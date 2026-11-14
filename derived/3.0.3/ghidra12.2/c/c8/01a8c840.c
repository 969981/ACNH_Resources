
uint FUN_01a8c840(uint param_1)

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
  
  if (DAT_0531aae8 == '\x01' && DAT_0531aaec == param_1) {
    return DAT_0531aaf0;
  }
  if (((DAT_0531ada8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0531ada8), iVar4 != 0)) {
    DAT_0531aaf8 = 0x5400000000;
    DAT_0531ab00 = (undefined8 *)&DAT_0531ab08;
    __cxa_guard_release(&DAT_0531ada8);
  }
  if ((DAT_0531adb0 & 1) == 0) {
    DAT_0531adb0 = 1;
    if (((DAT_0531b058 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0531b058), iVar4 != 0)) {
      DAT_0531afb4 = 0xffffffff00000000;
      DAT_0531adb4 = 0xffffffff00000000;
      DAT_0531adbc = 0xffffffff00000000;
      DAT_0531afbc = 0xffffffff00000000;
      DAT_0531afc4 = 0xffffffff00000000;
      DAT_0531afcc = 0xffffffff00000000;
      DAT_0531afd4 = 0xffffffff00000000;
      DAT_0531afdc = 0xffffffff00000000;
      DAT_0531afe4 = 0xffffffff00000000;
      DAT_0531afec = 0xffffffff00000000;
      DAT_0531aff4 = 0xffffffff00000000;
      DAT_0531affc = 0xffffffff00000000;
      DAT_0531b004 = 0xffffffff00000000;
      DAT_0531b00c = 0xffffffff00000000;
      DAT_0531b014 = 0xffffffff00000000;
      DAT_0531b01c = 0xffffffff00000000;
      DAT_0531b024 = 0xffffffff00000000;
      DAT_0531b02c = 0xffffffff00000000;
      DAT_0531b034 = 0xffffffff00000000;
      DAT_0531b03c = 0xffffffff00000000;
      DAT_0531b044 = 0xffffffff00000000;
      DAT_0531b04c = 0xffffffff00000000;
      DAT_0531adc4 = 0xffffffff00000000;
      DAT_0531adcc = 0xffffffff00000000;
      DAT_0531add4 = 0xffffffff00000000;
      DAT_0531addc = 0xffffffff00000000;
      DAT_0531ade4 = 0xffffffff00000000;
      DAT_0531adec = 0xffffffff00000000;
      DAT_0531adf4 = 0xffffffff00000000;
      DAT_0531adfc = 0xffffffff00000000;
      DAT_0531ae04 = 0xffffffff00000000;
      DAT_0531ae0c = 0xffffffff00000000;
      DAT_0531ae14 = 0xffffffff00000000;
      DAT_0531ae1c = 0xffffffff00000000;
      DAT_0531ae24 = 0xffffffff00000000;
      DAT_0531ae2c = 0xffffffff00000000;
      DAT_0531ae34 = 0xffffffff00000000;
      DAT_0531ae3c = 0xffffffff00000000;
      DAT_0531ae44 = 0xffffffff00000000;
      DAT_0531ae4c = 0xffffffff00000000;
      DAT_0531ae54 = 0xffffffff00000000;
      DAT_0531ae5c = 0xffffffff00000000;
      DAT_0531ae64 = 0xffffffff00000000;
      DAT_0531ae6c = 0xffffffff00000000;
      DAT_0531ae74 = 0xffffffff00000000;
      DAT_0531ae7c = 0xffffffff00000000;
      DAT_0531ae84 = 0xffffffff00000000;
      DAT_0531ae8c = 0xffffffff00000000;
      DAT_0531ae94 = 0xffffffff00000000;
      DAT_0531ae9c = 0xffffffff00000000;
      DAT_0531aea4 = 0xffffffff00000000;
      DAT_0531aeac = 0xffffffff00000000;
      DAT_0531aeb4 = 0xffffffff00000000;
      DAT_0531aebc = 0xffffffff00000000;
      DAT_0531aec4 = 0xffffffff00000000;
      DAT_0531aecc = 0xffffffff00000000;
      DAT_0531aed4 = 0xffffffff00000000;
      DAT_0531aedc = 0xffffffff00000000;
      DAT_0531aee4 = 0xffffffff00000000;
      DAT_0531aeec = 0xffffffff00000000;
      DAT_0531aef4 = 0xffffffff00000000;
      DAT_0531aefc = 0xffffffff00000000;
      DAT_0531af04 = 0xffffffff00000000;
      DAT_0531af0c = 0xffffffff00000000;
      DAT_0531af14 = 0xffffffff00000000;
      DAT_0531af1c = 0xffffffff00000000;
      DAT_0531af24 = 0xffffffff00000000;
      DAT_0531af2c = 0xffffffff00000000;
      DAT_0531af34 = 0xffffffff00000000;
      DAT_0531af3c = 0xffffffff00000000;
      DAT_0531af44 = 0xffffffff00000000;
      DAT_0531af4c = 0xffffffff00000000;
      DAT_0531af54 = 0xffffffff00000000;
      DAT_0531af5c = 0xffffffff00000000;
      DAT_0531af64 = 0xffffffff00000000;
      DAT_0531af6c = 0xffffffff00000000;
      DAT_0531af74 = 0xffffffff00000000;
      DAT_0531af7c = 0xffffffff00000000;
      DAT_0531af84 = 0xffffffff00000000;
      DAT_0531af8c = 0xffffffff00000000;
      DAT_0531af94 = 0xffffffff00000000;
      DAT_0531af9c = 0xffffffff00000000;
      DAT_0531afa4 = 0xffffffff00000000;
      DAT_0531afac = 0xffffffff00000000;
      __cxa_guard_release(&DAT_0531b058);
    }
    lVar15 = 0;
    do {
      local_75 = 0;
      __src = (&PTR_DAT_04a28be0)[lVar15];
      if (local_174 != __src) {
        lVar5 = 0;
        do {
          if (__src[lVar5] == 0) {
LAB_01a8c984:
            iVar4 = (int)lVar5;
joined_r0x01a8c988:
            if (0xff < iVar4) {
              iVar4 = 0xff;
            }
            goto LAB_01a8c990;
          }
          if (__src[lVar5 + 1] == 0) {
            lVar5 = lVar5 + 1;
            goto LAB_01a8c984;
          }
          if (__src[lVar5 + 2] == 0) {
            iVar4 = (int)lVar5 + 2;
            goto joined_r0x01a8c988;
          }
          lVar5 = lVar5 + 3;
        } while (lVar5 != 0x80001);
        iVar4 = 0;
LAB_01a8c990:
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
      *(uint *)(&DAT_0531adb4 + lVar15) = uVar8;
      *(int *)((long)&DAT_0531adb4 + lVar15 * 8 + 4) = (int)lVar15;
      iVar4 = (int)DAT_0531aaf8;
      if ((int)DAT_0531aaf8 < DAT_0531aaf8._4_4_) {
        DAT_0531ab00[(int)DAT_0531aaf8] = &DAT_0531adb4 + lVar15;
        iVar4 = (int)DAT_0531aaf8 + 1;
        DAT_0531aaf8 = CONCAT44(DAT_0531aaf8._4_4_,iVar4);
      }
      puVar2 = DAT_0531ab00;
      lVar15 = lVar15 + 1;
    } while (lVar15 != 0x54);
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
              if (puVar6 != (uint *)0x0) goto LAB_01a8cc10;
LAB_01a8cbc0:
              puVar6 = puVar14;
            }
            else {
              puVar13[-1] = puVar6;
              *puVar13 = puVar12;
              puVar14 = (uint *)puVar13[1];
              puVar6 = puVar12;
              uVar3 = uVar9;
              if (puVar12 == (uint *)0x0) goto LAB_01a8cbc0;
LAB_01a8cc10:
              if (puVar14 == (uint *)0x0) goto LAB_01a8cbc0;
              if (*puVar6 <= *puVar14) goto LAB_01a8cbc0;
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
    DAT_0531aaf4 = '\x01';
  }
  else if (DAT_0531aaf4 != '\x01') {
    return 0xffffffff;
  }
  if ((int)DAT_0531aaf8 != 0) {
    if ((int)DAT_0531aaf8 < 2) {
      puVar6 = (uint *)*DAT_0531ab00;
      uVar3 = 0;
    }
    else {
      uVar8 = 0;
      iVar4 = (int)DAT_0531aaf8 + -1;
      do {
        iVar1 = iVar4 + uVar8;
        if (iVar1 < 0 != SCARRY4(iVar4,uVar8)) {
          iVar1 = iVar1 + 1;
        }
        uVar3 = iVar1 >> 1;
        if (((uint *)DAT_0531ab00[(int)uVar3] == (uint *)0x0) ||
           (uVar9 = *(uint *)DAT_0531ab00[(int)uVar3], uVar9 == param_1)) goto joined_r0x01a8cab8;
        if (uVar9 < param_1) {
          uVar8 = uVar3 + 1;
        }
        else {
          iVar4 = uVar3 - 1;
        }
      } while ((int)uVar8 < iVar4);
      puVar6 = (uint *)DAT_0531ab00[(int)uVar8];
      uVar3 = uVar8;
    }
    if ((puVar6 == (uint *)0x0) || (*puVar6 == param_1)) {
joined_r0x01a8cab8:
      if ((uVar3 < 0x54) && (uVar3 = *(uint *)(DAT_0531ab00[uVar3] + 4), uVar3 < 0x54)) {
        DAT_0531aae8 = 1;
        DAT_0531aaec = param_1;
        DAT_0531aaf0 = uVar3;
        return uVar3;
      }
    }
  }
  return 0xffffffff;
}

