
uint FUN_01a895b0(uint param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  undefined8 *puVar14;
  uint *puVar15;
  byte *__src;
  long lVar16;
  byte local_174 [255];
  undefined1 local_75;
  
  if (DAT_053134f8 == '\x01' && DAT_053134fc == param_1) {
    return DAT_05313500;
  }
  if (((DAT_05313570 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_05313570), iVar5 != 0)) {
    DAT_05313508 = 0xb00000000;
    DAT_05313510 = (undefined8 *)&DAT_05313518;
    __cxa_guard_release(&DAT_05313570);
  }
  if ((DAT_05313578 & 1) == 0) {
    DAT_05313578 = 1;
    if (((DAT_053135d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_053135d8), iVar5 != 0)) {
      DAT_053135cc = 0xffffffff00000000;
      DAT_0531357c = 0xffffffff00000000;
      DAT_05313584 = 0xffffffff00000000;
      DAT_0531358c = 0xffffffff00000000;
      DAT_05313594 = 0xffffffff00000000;
      DAT_0531359c = 0xffffffff00000000;
      DAT_053135a4 = 0xffffffff00000000;
      DAT_053135ac = 0xffffffff00000000;
      DAT_053135b4 = 0xffffffff00000000;
      DAT_053135bc = 0xffffffff00000000;
      DAT_053135c4 = 0xffffffff00000000;
      __cxa_guard_release(&DAT_053135d8);
    }
    puVar2 = PTR_DAT_04bc01d0;
    lVar16 = 0;
    do {
      local_75 = 0;
      __src = *(byte **)(puVar2 + lVar16 * 8 + 0x80);
      if (local_174 != __src) {
        lVar6 = 0;
        do {
          if (__src[lVar6] == 0) {
LAB_01a896f4:
            iVar5 = (int)lVar6;
joined_r0x01a896f8:
            if (0xff < iVar5) {
              iVar5 = 0xff;
            }
            goto LAB_01a89700;
          }
          if (__src[lVar6 + 1] == 0) {
            lVar6 = lVar6 + 1;
            goto LAB_01a896f4;
          }
          if (__src[lVar6 + 2] == 0) {
            iVar5 = (int)lVar6 + 2;
            goto joined_r0x01a896f8;
          }
          lVar6 = lVar6 + 3;
        } while (lVar6 != 0x80001);
        iVar5 = 0;
LAB_01a89700:
        memcpy(local_174,__src,(long)iVar5);
        local_174[iVar5] = 0;
      }
      uVar4 = (uint)*__src;
      if (*__src == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0xffffffff;
        do {
          __src = __src + 1;
          uVar9 = crc32b(uVar9,uVar4,0x4c11db7);
          uVar4 = (uint)*__src;
        } while (uVar4 != 0);
        uVar9 = ~uVar9;
      }
      *(uint *)(&DAT_0531357c + lVar16) = uVar9;
      *(int *)((long)&DAT_0531357c + lVar16 * 8 + 4) = (int)lVar16;
      iVar5 = (int)DAT_05313508;
      if ((int)DAT_05313508 < DAT_05313508._4_4_) {
        DAT_05313510[(int)DAT_05313508] = &DAT_0531357c + lVar16;
        iVar5 = (int)DAT_05313508 + 1;
        DAT_05313508 = CONCAT44(DAT_05313508._4_4_,iVar5);
      }
      puVar3 = DAT_05313510;
      lVar16 = lVar16 + 1;
    } while (lVar16 != 0xb);
    if (1 < iVar5) {
      uVar9 = 0;
      uVar4 = iVar5 - 1;
      do {
        if ((int)uVar4 <= (int)uVar9) break;
        puVar7 = (uint *)puVar3[uVar9];
        uVar8 = (ulong)uVar9;
        if ((uVar4 - uVar9 & 1) == 0) {
          uVar11 = uVar8;
          puVar13 = puVar7;
        }
        else {
          uVar11 = uVar8 + 1;
          puVar13 = (uint *)puVar3[uVar11];
          if (((puVar7 != (uint *)0x0) && (puVar13 != (uint *)0x0)) && (*puVar13 < *puVar7)) {
            puVar3[uVar11] = puVar7;
            puVar3[uVar8] = puVar13;
            puVar13 = puVar7;
          }
        }
        uVar12 = (ulong)uVar4;
        uVar4 = uVar9;
        if (~uVar8 + uVar12 != 0) {
          puVar14 = puVar3 + uVar11 + 1;
          do {
            puVar7 = (uint *)*puVar14;
            uVar10 = (uint)uVar11;
            if (((puVar13 == (uint *)0x0) || (puVar7 == (uint *)0x0)) || (*puVar13 <= *puVar7)) {
              puVar15 = (uint *)puVar14[1];
              if (puVar7 != (uint *)0x0) goto LAB_01a89980;
LAB_01a89930:
              puVar7 = puVar15;
            }
            else {
              puVar14[-1] = puVar7;
              *puVar14 = puVar13;
              puVar15 = (uint *)puVar14[1];
              puVar7 = puVar13;
              uVar4 = uVar10;
              if (puVar13 == (uint *)0x0) goto LAB_01a89930;
LAB_01a89980:
              if (puVar15 == (uint *)0x0) goto LAB_01a89930;
              if (*puVar7 <= *puVar15) goto LAB_01a89930;
              uVar4 = uVar10 + 1;
              *puVar14 = puVar15;
              puVar14[1] = puVar7;
            }
            uVar11 = uVar11 + 2;
            puVar14 = puVar14 + 2;
            puVar13 = puVar7;
          } while (uVar12 != uVar11);
        }
        if ((int)uVar4 <= (int)uVar9) break;
        uVar11 = (ulong)uVar4;
        puVar7 = (uint *)puVar3[uVar4];
        uVar9 = uVar4;
        do {
          puVar13 = (uint *)puVar3[uVar11 - 1];
          if (((puVar7 != (uint *)0x0) && (puVar13 != (uint *)0x0)) && (*puVar7 < *puVar13)) {
            uVar9 = (uint)uVar11;
            puVar3[uVar11 - 1] = puVar7;
            puVar3[uVar11] = puVar13;
            puVar13 = puVar7;
          }
          uVar11 = uVar11 - 1;
          puVar7 = puVar13;
        } while ((long)uVar8 < (long)uVar11);
      } while (uVar9 != uVar4);
    }
    DAT_05313504 = '\x01';
  }
  else if (DAT_05313504 != '\x01') {
    return 0xffffffff;
  }
  if ((int)DAT_05313508 != 0) {
    if ((int)DAT_05313508 < 2) {
      puVar7 = (uint *)*DAT_05313510;
      uVar4 = 0;
    }
    else {
      uVar9 = 0;
      iVar5 = (int)DAT_05313508 + -1;
      do {
        iVar1 = iVar5 + uVar9;
        if (iVar1 < 0 != SCARRY4(iVar5,uVar9)) {
          iVar1 = iVar1 + 1;
        }
        uVar4 = iVar1 >> 1;
        if (((uint *)DAT_05313510[(int)uVar4] == (uint *)0x0) ||
           (uVar10 = *(uint *)DAT_05313510[(int)uVar4], uVar10 == param_1)) goto joined_r0x01a89828;
        if (uVar10 < param_1) {
          uVar9 = uVar4 + 1;
        }
        else {
          iVar5 = uVar4 - 1;
        }
      } while ((int)uVar9 < iVar5);
      puVar7 = (uint *)DAT_05313510[(int)uVar9];
      uVar4 = uVar9;
    }
    if ((puVar7 == (uint *)0x0) || (*puVar7 == param_1)) {
joined_r0x01a89828:
      if ((uVar4 < 0xb) && (uVar4 = *(uint *)(DAT_05313510[uVar4] + 4), uVar4 < 0xb)) {
        DAT_053134f8 = 1;
        DAT_053134fc = param_1;
        DAT_05313500 = uVar4;
        return uVar4;
      }
    }
  }
  return 0xffffffff;
}

