
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01abaee0(long param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  undefined8 *puVar14;
  uint *puVar15;
  undefined *__src;
  long lVar16;
  undefined local_17c [255];
  undefined1 local_7d;
  
  if (((DAT_05325478 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_05325478), iVar4 != 0)) {
    _DAT_053251f0 = 0x4f00000000;
    DAT_053251f8 = (undefined8 *)&DAT_05325200;
    __cxa_guard_release(&DAT_05325478);
  }
  if ((DAT_053251e8 & 1) == 0) {
    DAT_053251e8 = 1;
    if (((DAT_053256f8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_053256f8), iVar4 != 0)) {
      DAT_05325680 = 0xffffffff00000000;
      DAT_05325480 = 0xffffffff00000000;
      DAT_05325488 = 0xffffffff00000000;
      DAT_05325688 = 0xffffffff00000000;
      DAT_05325690 = 0xffffffff00000000;
      DAT_05325698 = 0xffffffff00000000;
      DAT_053256a0 = 0xffffffff00000000;
      DAT_053256a8 = 0xffffffff00000000;
      DAT_053256b0 = 0xffffffff00000000;
      DAT_053256b8 = 0xffffffff00000000;
      DAT_053256c0 = 0xffffffff00000000;
      DAT_053256c8 = 0xffffffff00000000;
      DAT_053256d0 = 0xffffffff00000000;
      DAT_053256d8 = 0xffffffff00000000;
      DAT_053256e0 = 0xffffffff00000000;
      DAT_053256e8 = 0xffffffff00000000;
      DAT_053256f0 = 0xffffffff00000000;
      DAT_05325490 = 0xffffffff00000000;
      DAT_05325498 = 0xffffffff00000000;
      DAT_053254a0 = 0xffffffff00000000;
      DAT_053254a8 = 0xffffffff00000000;
      DAT_053254b0 = 0xffffffff00000000;
      DAT_053254b8 = 0xffffffff00000000;
      DAT_053254c0 = 0xffffffff00000000;
      DAT_053254c8 = 0xffffffff00000000;
      DAT_053254d0 = 0xffffffff00000000;
      DAT_053254d8 = 0xffffffff00000000;
      DAT_053254e0 = 0xffffffff00000000;
      DAT_053254e8 = 0xffffffff00000000;
      DAT_053254f0 = 0xffffffff00000000;
      DAT_053254f8 = 0xffffffff00000000;
      DAT_05325500 = 0xffffffff00000000;
      DAT_05325508 = 0xffffffff00000000;
      DAT_05325510 = 0xffffffff00000000;
      DAT_05325518 = 0xffffffff00000000;
      DAT_05325520 = 0xffffffff00000000;
      DAT_05325528 = 0xffffffff00000000;
      DAT_05325530 = 0xffffffff00000000;
      DAT_05325538 = 0xffffffff00000000;
      DAT_05325540 = 0xffffffff00000000;
      DAT_05325548 = 0xffffffff00000000;
      DAT_05325550 = 0xffffffff00000000;
      DAT_05325558 = 0xffffffff00000000;
      DAT_05325560 = 0xffffffff00000000;
      DAT_05325568 = 0xffffffff00000000;
      DAT_05325570 = 0xffffffff00000000;
      DAT_05325578 = 0xffffffff00000000;
      DAT_05325580 = 0xffffffff00000000;
      DAT_05325588 = 0xffffffff00000000;
      DAT_05325590 = 0xffffffff00000000;
      DAT_05325598 = 0xffffffff00000000;
      DAT_053255a0 = 0xffffffff00000000;
      DAT_053255a8 = 0xffffffff00000000;
      DAT_053255b0 = 0xffffffff00000000;
      DAT_053255b8 = 0xffffffff00000000;
      DAT_053255c0 = 0xffffffff00000000;
      DAT_053255c8 = 0xffffffff00000000;
      DAT_053255d0 = 0xffffffff00000000;
      DAT_053255d8 = 0xffffffff00000000;
      DAT_053255e0 = 0xffffffff00000000;
      DAT_053255e8 = 0xffffffff00000000;
      DAT_053255f0 = 0xffffffff00000000;
      DAT_053255f8 = 0xffffffff00000000;
      DAT_05325600 = 0xffffffff00000000;
      DAT_05325608 = 0xffffffff00000000;
      DAT_05325610 = 0xffffffff00000000;
      DAT_05325618 = 0xffffffff00000000;
      DAT_05325620 = 0xffffffff00000000;
      DAT_05325628 = 0xffffffff00000000;
      DAT_05325630 = 0xffffffff00000000;
      DAT_05325638 = 0xffffffff00000000;
      DAT_05325640 = 0xffffffff00000000;
      DAT_05325648 = 0xffffffff00000000;
      DAT_05325650 = 0xffffffff00000000;
      DAT_05325658 = 0xffffffff00000000;
      DAT_05325660 = 0xffffffff00000000;
      DAT_05325668 = 0xffffffff00000000;
      DAT_05325670 = 0xffffffff00000000;
      DAT_05325678 = 0xffffffff00000000;
      __cxa_guard_release(&DAT_053256f8);
    }
    lVar16 = 0;
    do {
      local_7d = 0;
      __src = (&PTR_DAT_04a1eb10)[lVar16];
      if (local_17c != __src) {
        lVar5 = 0;
        do {
          if (__src[lVar5] == '\0') {
LAB_01abb004:
            iVar4 = (int)lVar5;
joined_r0x01abb008:
            if (0xff < iVar4) {
              iVar4 = 0xff;
            }
            goto LAB_01abb010;
          }
          if (__src[lVar5 + 1] == '\0') {
            lVar5 = lVar5 + 1;
            goto LAB_01abb004;
          }
          if (__src[lVar5 + 2] == '\0') {
            iVar4 = (int)lVar5 + 2;
            goto joined_r0x01abb008;
          }
          lVar5 = lVar5 + 3;
        } while (lVar5 != 0x80001);
        iVar4 = 0;
LAB_01abb010:
        memcpy(local_17c,__src,(long)iVar4);
        local_17c[iVar4] = 0;
      }
      uVar3 = FUN_006bd550(__src,0);
      iVar4 = DAT_053251f0;
      iVar1 = _DAT_053251f4;
      *(undefined4 *)(&DAT_05325480 + lVar16) = uVar3;
      *(int *)((long)&DAT_05325480 + lVar16 * 8 + 4) = (int)lVar16;
      if (iVar4 < iVar1) {
        DAT_053251f8[iVar4] = &DAT_05325480 + lVar16;
        iVar4 = DAT_053251f0 + 1;
        _DAT_053251f0 = CONCAT44(_DAT_053251f4,iVar4);
      }
      puVar2 = DAT_053251f8;
      lVar16 = lVar16 + 1;
    } while (lVar16 != 0x4f);
    if (iVar4 < 2) goto joined_r0x01abb094;
    uVar9 = 0;
    uVar7 = iVar4 - 1;
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
            puVar15 = (uint *)puVar14[1];
            if (puVar6 != (uint *)0x0) goto LAB_01abb2f0;
LAB_01abb2a0:
            puVar6 = puVar15;
          }
          else {
            puVar14[-1] = puVar6;
            *puVar14 = puVar13;
            puVar15 = (uint *)puVar14[1];
            puVar6 = puVar13;
            uVar7 = uVar10;
            if (puVar13 == (uint *)0x0) goto LAB_01abb2a0;
LAB_01abb2f0:
            if (puVar15 == (uint *)0x0) goto LAB_01abb2a0;
            if (*puVar6 <= *puVar15) goto LAB_01abb2a0;
            uVar7 = uVar10 + 1;
            *puVar14 = puVar15;
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
  iVar4 = DAT_053251f0;
joined_r0x01abb094:
  if (iVar4 != 0) {
    if (iVar4 < 2) {
      puVar6 = (uint *)*DAT_053251f8;
      uVar7 = 0;
    }
    else {
      uVar9 = 0;
      iVar4 = iVar4 + -1;
      do {
        iVar1 = iVar4 + uVar9;
        if (iVar1 < 0 != SCARRY4(iVar4,uVar9)) {
          iVar1 = iVar1 + 1;
        }
        uVar7 = iVar1 >> 1;
        if (((uint *)DAT_053251f8[(int)uVar7] == (uint *)0x0) ||
           (uVar10 = *(uint *)DAT_053251f8[(int)uVar7], uVar10 == param_2)) goto joined_r0x01abb104;
        if (uVar10 < param_2) {
          uVar9 = uVar7 + 1;
        }
        else {
          iVar4 = uVar7 - 1;
        }
      } while ((int)uVar9 < iVar4);
      puVar6 = (uint *)DAT_053251f8[(int)uVar9];
      uVar7 = uVar9;
    }
    if ((puVar6 == (uint *)0x0) || (*puVar6 == param_2)) {
joined_r0x01abb104:
      if ((uVar7 < 0x4f) &&
         ((uVar7 = *(uint *)(DAT_053251f8[uVar7] + 4), uVar7 < 0x4f && (uVar7 < 0x4f)))) {
        uVar9 = uVar7 + 7;
        if (-1 < (int)uVar7) {
          uVar9 = uVar7;
        }
        uVar9 = (int)uVar9 >> 3;
        if (uVar9 < 10) {
          *(byte *)(param_1 + (ulong)uVar9) =
               *(byte *)(param_1 + (ulong)uVar9) | (byte)(1 << (ulong)(uVar7 & 7));
        }
      }
    }
  }
  return;
}

