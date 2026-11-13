
uint FUN_01246a90(uint param_1)

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
  
  if (DAT_051509e0 == '\x01' && DAT_051509e4 == param_1) {
    return DAT_051509e8;
  }
  if (((DAT_05150b78 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_05150b78), iVar5 != 0)) {
    DAT_051509f0 = 0x2f00000000;
    DAT_051509f8 = (undefined8 *)&DAT_05150a00;
    __cxa_guard_release(&DAT_05150b78);
  }
  if ((DAT_05150b80 & 1) == 0) {
    DAT_05150b80 = 1;
    if (((DAT_05150d00 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_05150d00), iVar5 != 0)) {
      DAT_05150cf4 = 0xffffffff00000000;
      DAT_05150b84 = 0xffffffff00000000;
      DAT_05150b8c = 0xffffffff00000000;
      DAT_05150b94 = 0xffffffff00000000;
      DAT_05150b9c = 0xffffffff00000000;
      DAT_05150ba4 = 0xffffffff00000000;
      DAT_05150bac = 0xffffffff00000000;
      DAT_05150bb4 = 0xffffffff00000000;
      DAT_05150bbc = 0xffffffff00000000;
      DAT_05150bc4 = 0xffffffff00000000;
      DAT_05150bcc = 0xffffffff00000000;
      DAT_05150bd4 = 0xffffffff00000000;
      DAT_05150bdc = 0xffffffff00000000;
      DAT_05150be4 = 0xffffffff00000000;
      DAT_05150bec = 0xffffffff00000000;
      DAT_05150bf4 = 0xffffffff00000000;
      DAT_05150bfc = 0xffffffff00000000;
      DAT_05150c04 = 0xffffffff00000000;
      DAT_05150c0c = 0xffffffff00000000;
      DAT_05150c14 = 0xffffffff00000000;
      DAT_05150c1c = 0xffffffff00000000;
      DAT_05150c24 = 0xffffffff00000000;
      DAT_05150c2c = 0xffffffff00000000;
      DAT_05150c34 = 0xffffffff00000000;
      DAT_05150c3c = 0xffffffff00000000;
      DAT_05150c44 = 0xffffffff00000000;
      DAT_05150c4c = 0xffffffff00000000;
      DAT_05150c54 = 0xffffffff00000000;
      DAT_05150c5c = 0xffffffff00000000;
      DAT_05150c64 = 0xffffffff00000000;
      DAT_05150c6c = 0xffffffff00000000;
      DAT_05150c74 = 0xffffffff00000000;
      DAT_05150c7c = 0xffffffff00000000;
      DAT_05150c84 = 0xffffffff00000000;
      DAT_05150c8c = 0xffffffff00000000;
      DAT_05150c94 = 0xffffffff00000000;
      DAT_05150c9c = 0xffffffff00000000;
      DAT_05150ca4 = 0xffffffff00000000;
      DAT_05150cac = 0xffffffff00000000;
      DAT_05150cb4 = 0xffffffff00000000;
      DAT_05150cbc = 0xffffffff00000000;
      DAT_05150cc4 = 0xffffffff00000000;
      DAT_05150ccc = 0xffffffff00000000;
      DAT_05150cd4 = 0xffffffff00000000;
      DAT_05150cdc = 0xffffffff00000000;
      DAT_05150ce4 = 0xffffffff00000000;
      DAT_05150cec = 0xffffffff00000000;
      __cxa_guard_release(&DAT_05150d00);
    }
    puVar2 = PTR_DAT_04bbbca0;
    lVar16 = 0;
    do {
      local_75 = 0;
      __src = *(byte **)(puVar2 + lVar16 * 8 + 0x4e0);
      if (local_174 != __src) {
        lVar6 = 0;
        do {
          if (__src[lVar6] == 0) {
LAB_01246bd4:
            iVar5 = (int)lVar6;
joined_r0x01246bd8:
            if (0xff < iVar5) {
              iVar5 = 0xff;
            }
            goto LAB_01246be0;
          }
          if (__src[lVar6 + 1] == 0) {
            lVar6 = lVar6 + 1;
            goto LAB_01246bd4;
          }
          if (__src[lVar6 + 2] == 0) {
            iVar5 = (int)lVar6 + 2;
            goto joined_r0x01246bd8;
          }
          lVar6 = lVar6 + 3;
        } while (lVar6 != 0x80001);
        iVar5 = 0;
LAB_01246be0:
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
      *(uint *)(&DAT_05150b84 + lVar16) = uVar9;
      *(int *)((long)&DAT_05150b84 + lVar16 * 8 + 4) = (int)lVar16;
      iVar5 = (int)DAT_051509f0;
      if ((int)DAT_051509f0 < DAT_051509f0._4_4_) {
        DAT_051509f8[(int)DAT_051509f0] = &DAT_05150b84 + lVar16;
        iVar5 = (int)DAT_051509f0 + 1;
        DAT_051509f0 = CONCAT44(DAT_051509f0._4_4_,iVar5);
      }
      puVar3 = DAT_051509f8;
      lVar16 = lVar16 + 1;
    } while (lVar16 != 0x2f);
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
              if (puVar7 != (uint *)0x0) goto LAB_01246e60;
LAB_01246e10:
              puVar7 = puVar15;
            }
            else {
              puVar14[-1] = puVar7;
              *puVar14 = puVar13;
              puVar15 = (uint *)puVar14[1];
              puVar7 = puVar13;
              uVar4 = uVar10;
              if (puVar13 == (uint *)0x0) goto LAB_01246e10;
LAB_01246e60:
              if (puVar15 == (uint *)0x0) goto LAB_01246e10;
              if (*puVar7 <= *puVar15) goto LAB_01246e10;
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
    DAT_051509ec = '\x01';
  }
  else if (DAT_051509ec != '\x01') {
    return 0xffffffff;
  }
  if ((int)DAT_051509f0 != 0) {
    if ((int)DAT_051509f0 < 2) {
      puVar7 = (uint *)*DAT_051509f8;
      uVar4 = 0;
    }
    else {
      uVar9 = 0;
      iVar5 = (int)DAT_051509f0 + -1;
      do {
        iVar1 = iVar5 + uVar9;
        if (iVar1 < 0 != SCARRY4(iVar5,uVar9)) {
          iVar1 = iVar1 + 1;
        }
        uVar4 = iVar1 >> 1;
        if (((uint *)DAT_051509f8[(int)uVar4] == (uint *)0x0) ||
           (uVar10 = *(uint *)DAT_051509f8[(int)uVar4], uVar10 == param_1)) goto joined_r0x01246d08;
        if (uVar10 < param_1) {
          uVar9 = uVar4 + 1;
        }
        else {
          iVar5 = uVar4 - 1;
        }
      } while ((int)uVar9 < iVar5);
      puVar7 = (uint *)DAT_051509f8[(int)uVar9];
      uVar4 = uVar9;
    }
    if ((puVar7 == (uint *)0x0) || (*puVar7 == param_1)) {
joined_r0x01246d08:
      if ((uVar4 < 0x2f) && (uVar4 = *(uint *)(DAT_051509f8[uVar4] + 4), uVar4 < 0x2f)) {
        DAT_051509e0 = 1;
        DAT_051509e4 = param_1;
        DAT_051509e8 = uVar4;
        return uVar4;
      }
    }
  }
  return 0xffffffff;
}

