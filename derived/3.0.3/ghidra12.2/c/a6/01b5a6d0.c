
uint FUN_01b5a6d0(uint param_1)

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
  
  if (DAT_0533514c == '\x01' && DAT_05335150 == param_1) {
    return DAT_05335154;
  }
  if (((DAT_05335200 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05335200), iVar4 != 0)) {
    DAT_05335160 = 0x1200000000;
    DAT_05335168 = (undefined8 *)&DAT_05335170;
    __cxa_guard_release(&DAT_05335200);
  }
  if ((DAT_05335208 & 1) == 0) {
    DAT_05335208 = 1;
    if (((DAT_053352a0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_053352a0), iVar4 != 0)) {
      DAT_0533520c = 0xffffffff00000000;
      DAT_05335214 = 0xffffffff00000000;
      DAT_0533521c = 0xffffffff00000000;
      DAT_05335224 = 0xffffffff00000000;
      DAT_0533522c = 0xffffffff00000000;
      DAT_05335234 = 0xffffffff00000000;
      DAT_0533523c = 0xffffffff00000000;
      DAT_05335244 = 0xffffffff00000000;
      DAT_0533524c = 0xffffffff00000000;
      DAT_05335254 = 0xffffffff00000000;
      DAT_0533525c = 0xffffffff00000000;
      DAT_05335264 = 0xffffffff00000000;
      DAT_0533526c = 0xffffffff00000000;
      DAT_05335274 = 0xffffffff00000000;
      DAT_0533527c = 0xffffffff00000000;
      DAT_05335284 = 0xffffffff00000000;
      DAT_0533528c = 0xffffffff00000000;
      DAT_05335294 = 0xffffffff00000000;
      __cxa_guard_release(&DAT_053352a0);
    }
    lVar15 = 0;
    do {
      local_75 = 0;
      __src = (&PTR_DAT_04a385b0)[lVar15];
      if (local_174 != __src) {
        lVar5 = 0;
        do {
          if (__src[lVar5] == 0) {
LAB_01b5a814:
            iVar4 = (int)lVar5;
joined_r0x01b5a818:
            if (0xff < iVar4) {
              iVar4 = 0xff;
            }
            goto LAB_01b5a820;
          }
          if (__src[lVar5 + 1] == 0) {
            lVar5 = lVar5 + 1;
            goto LAB_01b5a814;
          }
          if (__src[lVar5 + 2] == 0) {
            iVar4 = (int)lVar5 + 2;
            goto joined_r0x01b5a818;
          }
          lVar5 = lVar5 + 3;
        } while (lVar5 != 0x80001);
        iVar4 = 0;
LAB_01b5a820:
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
      *(uint *)(&DAT_0533520c + lVar15) = uVar8;
      *(int *)((long)&DAT_0533520c + lVar15 * 8 + 4) = (int)lVar15;
      iVar4 = (int)DAT_05335160;
      if ((int)DAT_05335160 < DAT_05335160._4_4_) {
        DAT_05335168[(int)DAT_05335160] = &DAT_0533520c + lVar15;
        iVar4 = (int)DAT_05335160 + 1;
        DAT_05335160 = CONCAT44(DAT_05335160._4_4_,iVar4);
      }
      puVar2 = DAT_05335168;
      lVar15 = lVar15 + 1;
    } while (lVar15 != 0x12);
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
              if (puVar6 != (uint *)0x0) goto LAB_01b5aaa0;
LAB_01b5aa50:
              puVar6 = puVar14;
            }
            else {
              puVar13[-1] = puVar6;
              *puVar13 = puVar12;
              puVar14 = (uint *)puVar13[1];
              puVar6 = puVar12;
              uVar3 = uVar9;
              if (puVar12 == (uint *)0x0) goto LAB_01b5aa50;
LAB_01b5aaa0:
              if (puVar14 == (uint *)0x0) goto LAB_01b5aa50;
              if (*puVar6 <= *puVar14) goto LAB_01b5aa50;
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
    DAT_05335158 = '\x01';
  }
  else if (DAT_05335158 != '\x01') {
    return 0xffffffff;
  }
  if ((int)DAT_05335160 != 0) {
    if ((int)DAT_05335160 < 2) {
      puVar6 = (uint *)*DAT_05335168;
      uVar3 = 0;
    }
    else {
      uVar8 = 0;
      iVar4 = (int)DAT_05335160 + -1;
      do {
        iVar1 = iVar4 + uVar8;
        if (iVar1 < 0 != SCARRY4(iVar4,uVar8)) {
          iVar1 = iVar1 + 1;
        }
        uVar3 = iVar1 >> 1;
        if (((uint *)DAT_05335168[(int)uVar3] == (uint *)0x0) ||
           (uVar9 = *(uint *)DAT_05335168[(int)uVar3], uVar9 == param_1)) goto joined_r0x01b5a948;
        if (uVar9 < param_1) {
          uVar8 = uVar3 + 1;
        }
        else {
          iVar4 = uVar3 - 1;
        }
      } while ((int)uVar8 < iVar4);
      puVar6 = (uint *)DAT_05335168[(int)uVar8];
      uVar3 = uVar8;
    }
    if ((puVar6 == (uint *)0x0) || (*puVar6 == param_1)) {
joined_r0x01b5a948:
      if ((uVar3 < 0x12) && (uVar3 = *(uint *)(DAT_05335168[uVar3] + 4), uVar3 < 0x12)) {
        DAT_0533514c = 1;
        DAT_05335150 = param_1;
        DAT_05335154 = uVar3;
        return uVar3;
      }
    }
  }
  return 0xffffffff;
}

