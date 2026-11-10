
/* WARNING: Type propagation algorithm not settling */

uint FUN_001093b0(long param_1,uint param_2)

{
  uint uVar1;
  ushort uVar2;
  ushort *puVar3;
  long lVar4;
  ushort *puVar5;
  long lVar6;
  undefined4 uVar7;
  byte bVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  undefined2 uVar13;
  ushort uVar14;
  undefined2 uVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  ushort *puVar19;
  undefined8 uVar20;
  char cVar21;
  uint uVar22;
  int iVar23;
  ulong uVar24;
  int iVar25;
  long lVar26;
  int iVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  int iVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  ushort uVar41;
  ushort uVar42;
  int iVar43;
  undefined8 uVar44;
  long lVar45;
  long lVar46;
  undefined3 local_6b;
  undefined5 uStack_68;
  
  cVar21 = *(char *)(param_1 + 0x12);
  if (((param_2 & 0xffff) == 0) && (cVar21 == '\x01')) {
    return 0;
  }
  sVar18 = (short)param_2;
  lVar26 = param_1 + (long)sVar18 * 0x88;
  uVar39 = *(undefined8 *)(lVar26 + 0x2da);
  uVar28 = *(undefined8 *)(lVar26 + 0x2c2);
  uVar33 = *(undefined8 *)(lVar26 + 0x2ca);
  uVar36 = *(undefined8 *)(lVar26 + 0x2d2);
  uVar44 = *(undefined8 *)(lVar26 + 0x2b8);
  sVar16 = *(short *)(lVar26 + 0x2c0);
  iVar23 = (int)sVar16;
  uVar29 = *(undefined8 *)(lVar26 + 0x2e2);
  uVar34 = *(undefined8 *)(lVar26 + 0x2ea);
  uVar37 = *(undefined8 *)(lVar26 + 0x2f2);
  uVar40 = *(undefined8 *)(lVar26 + 0x2fa);
  uVar30 = *(undefined8 *)(lVar26 + 0x302);
  uVar35 = *(undefined8 *)(lVar26 + 0x30a);
  uVar38 = *(undefined8 *)(lVar26 + 0x312);
  uStack_68 = (undefined5)((ulong)*(undefined8 *)(lVar26 + 0x317) >> 0x18);
  local_6b = (undefined3)((ulong)uVar38 >> 0x28);
  bVar8 = *(byte *)(lVar26 + 799);
  uVar20 = *(undefined8 *)(lVar26 + 800);
  uVar9 = *(ushort *)(lVar26 + 0x328);
  uVar10 = *(ushort *)(lVar26 + 0x32a);
  uVar7 = *(undefined4 *)(lVar26 + 0x32c);
  sVar17 = *(short *)(lVar26 + 0x330);
  uVar11 = *(ushort *)(lVar26 + 0x332);
  uVar12 = *(ushort *)(lVar26 + 0x334);
  uVar13 = *(undefined2 *)(lVar26 + 0x33e);
  uVar31 = *(undefined8 *)(lVar26 + 0x336);
  uVar15 = *(undefined2 *)(param_1 + (long)sVar18 * 2 + 0xb738);
  uVar14 = uVar12;
  uVar42 = uVar10;
  if ((bVar8 & 0xf0) != 0x50) {
    uVar14 = uVar11;
    uVar42 = uVar9;
  }
  if (sVar17 < 0) {
    iVar23 = sVar17 + iVar23;
    if (iVar23 < 100) {
      iVar23 = 100;
    }
    else if (399 < iVar23) {
      iVar23 = 400;
    }
  }
  iVar43 = sVar18 + -1;
  lVar26 = 0;
  if ((param_2 & 0xffff) != 0) {
    lVar26 = (long)iVar43;
  }
  lVar26 = param_1 + lVar26 * 0x88;
  puVar3 = (ushort *)(lVar26 + 0x32a);
  puVar5 = (ushort *)(lVar26 + 0x334);
  if ((*(byte *)(lVar26 + 799) & 0xf0) != 0x50) {
    puVar3 = (ushort *)(lVar26 + 0x328);
    puVar5 = (ushort *)(lVar26 + 0x332);
  }
  iVar32 = (int)*(short *)(lVar26 + 0x2c0);
  if (*(short *)(lVar26 + 0x330) < 0) {
    iVar32 = *(short *)(lVar26 + 0x330) + iVar32;
    if (iVar32 < 100) {
      iVar32 = 100;
    }
    else if (399 < iVar32) {
      iVar32 = 400;
    }
  }
  if ((param_2 & 0xffff) != 0) {
    uVar41 = (uVar14 & 0x7f) + (uVar42 & 0x7f);
    uVar2 = (*puVar5 & 0x7f) + (*puVar3 & 0x7f);
    if ((uVar2 <= uVar41) && ((uVar41 != uVar2 || (iVar32 <= iVar23)))) {
      sVar18 = (short)iVar43;
      iVar32 = (int)sVar18;
      if (iVar32 < 0) {
LAB_00109b38:
        cVar21 = *(char *)(param_1 + 0x12);
        if (cVar21 == '\0') {
          *(undefined8 *)(param_1 + 0x2b8) = uVar44;
          *(short *)(param_1 + 0x2c0) = sVar16;
          *(undefined8 *)(param_1 + 0x2da) = uVar39;
          *(undefined8 *)(param_1 + 0x2d2) = uVar36;
          *(undefined8 *)(param_1 + 0x2ca) = uVar33;
          *(undefined8 *)(param_1 + 0x2c2) = uVar28;
          *(undefined8 *)(param_1 + 0x2fa) = uVar40;
          *(undefined8 *)(param_1 + 0x2f2) = uVar37;
          *(undefined8 *)(param_1 + 0x2ea) = uVar34;
          *(undefined8 *)(param_1 + 0x2e2) = uVar29;
          *(ulong *)(param_1 + 0x317) = CONCAT53(uStack_68,local_6b);
          *(undefined8 *)(param_1 + 0x312) = uVar38;
          *(undefined8 *)(param_1 + 0x30a) = uVar35;
          *(undefined8 *)(param_1 + 0x302) = uVar30;
          *(byte *)(param_1 + 799) = bVar8;
          *(undefined8 *)(param_1 + 800) = uVar20;
          *(ushort *)(param_1 + 0x328) = uVar9;
          *(ushort *)(param_1 + 0x32a) = uVar10;
          *(undefined4 *)(param_1 + 0x32c) = uVar7;
          *(short *)(param_1 + 0x330) = sVar17;
          *(ushort *)(param_1 + 0x332) = uVar11;
          *(ushort *)(param_1 + 0x334) = uVar12;
          *(undefined8 *)(param_1 + 0x336) = uVar31;
          *(undefined2 *)(param_1 + 0x33e) = uVar13;
          *(undefined2 *)(param_1 + 0xb738) = uVar15;
          return 0;
        }
joined_r0x00109b48:
        if (cVar21 == '\x01') {
          *(undefined8 *)(param_1 + 0x340) = uVar44;
          *(short *)(param_1 + 0x348) = sVar16;
          *(undefined8 *)(param_1 + 0x362) = uVar39;
          *(undefined8 *)(param_1 + 0x35a) = uVar36;
          *(undefined8 *)(param_1 + 0x352) = uVar33;
          *(undefined8 *)(param_1 + 0x34a) = uVar28;
          *(undefined8 *)(param_1 + 0x382) = uVar40;
          *(undefined8 *)(param_1 + 0x37a) = uVar37;
          *(undefined8 *)(param_1 + 0x372) = uVar34;
          *(undefined8 *)(param_1 + 0x36a) = uVar29;
          *(ulong *)(param_1 + 0x39f) = CONCAT53(uStack_68,local_6b);
          *(undefined8 *)(param_1 + 0x39a) = uVar38;
          *(undefined8 *)(param_1 + 0x392) = uVar35;
          *(undefined8 *)(param_1 + 0x38a) = uVar30;
          *(byte *)(param_1 + 0x3a7) = bVar8;
          *(undefined8 *)(param_1 + 0x3a8) = uVar20;
          *(ushort *)(param_1 + 0x3b0) = uVar9;
          *(ushort *)(param_1 + 0x3b2) = uVar10;
          *(undefined4 *)(param_1 + 0x3b4) = uVar7;
          *(short *)(param_1 + 0x3b8) = sVar17;
          *(ushort *)(param_1 + 0x3ba) = uVar11;
          *(ushort *)(param_1 + 0x3bc) = uVar12;
          *(undefined8 *)(param_1 + 0x3be) = uVar31;
          *(undefined2 *)(param_1 + 0x3c6) = uVar13;
          *(undefined2 *)(param_1 + 0xb73a) = uVar15;
          return 1;
        }
      }
      else {
        lVar45 = (long)sVar18;
        lVar26 = (long)sVar18 * 2 + 0xb738;
        lVar46 = (lVar45 + (long)sVar18 * 0x10) * 8;
        iVar25 = iVar32;
        if (cVar21 != '\0') goto LAB_0010992c;
        do {
          do {
            lVar4 = param_1 + lVar46;
            lVar6 = 0x334;
            puVar3 = (ushort *)(lVar4 + 0x32a);
            if ((*(byte *)(lVar4 + 799) & 0xf0) != 0x50) {
              lVar6 = 0x332;
              puVar3 = (ushort *)(lVar4 + 0x328);
            }
            uVar14 = (*(ushort *)(lVar4 + lVar6) & 0x7f) + (*puVar3 & 0x7f);
            iVar32 = (int)*(short *)(lVar4 + 0x2c0);
            if (*(short *)(lVar4 + 0x330) < 0) {
              iVar27 = (int)*(short *)(lVar4 + 0x330) + (int)*(short *)(lVar4 + 0x2c0);
              iVar32 = 100;
              if (99 < iVar27) {
                if (399 < iVar27) {
                  iVar27 = 400;
                }
                iVar32 = iVar27;
              }
            }
            if ((uVar41 < uVar14) || (uVar41 == uVar14 && iVar23 <= iVar32)) {
              lVar26 = param_1 + ((long)iVar25 + 1) * 0x88;
              *(undefined8 *)(lVar26 + 0x2b8) = uVar44;
              *(short *)(lVar26 + 0x2c0) = sVar16;
              *(undefined8 *)(lVar26 + 0x2da) = uVar39;
              *(undefined8 *)(lVar26 + 0x2d2) = uVar36;
              *(undefined8 *)(lVar26 + 0x2ca) = uVar33;
              *(undefined8 *)(lVar26 + 0x2c2) = uVar28;
              *(undefined8 *)(lVar26 + 0x2fa) = uVar40;
              *(undefined8 *)(lVar26 + 0x2f2) = uVar37;
              *(undefined8 *)(lVar26 + 0x2ea) = uVar34;
              *(undefined8 *)(lVar26 + 0x2e2) = uVar29;
              *(ulong *)(lVar26 + 0x317) = CONCAT53(uStack_68,local_6b);
              *(undefined8 *)(lVar26 + 0x312) = uVar38;
              *(undefined8 *)(lVar26 + 0x30a) = uVar35;
              *(undefined8 *)(lVar26 + 0x302) = uVar30;
              *(byte *)(lVar26 + 799) = bVar8;
              *(undefined8 *)(lVar26 + 800) = uVar20;
              *(ushort *)(lVar26 + 0x328) = uVar9;
              *(ushort *)(lVar26 + 0x32a) = uVar10;
              *(undefined4 *)(lVar26 + 0x32c) = uVar7;
              *(short *)(lVar26 + 0x330) = sVar17;
              *(ushort *)(lVar26 + 0x332) = uVar11;
              *(ushort *)(lVar26 + 0x334) = uVar12;
              iVar32 = (int)(short)lVar45;
              *(undefined2 *)(lVar26 + 0x33e) = uVar13;
              *(undefined8 *)(lVar26 + 0x336) = uVar31;
              *(undefined2 *)(param_1 + ((long)iVar25 + 1) * 2 + 0xb738) = uVar15;
              if (iVar32 < 0) goto LAB_00109b38;
              if (iVar32 == 0) {
                cVar21 = *(char *)(param_1 + 0x12);
                goto joined_r0x00109b48;
              }
              goto LAB_00109d14;
            }
            memcpy((void *)(param_1 + ((long)iVar25 + 1) * 0x88 + 0x2b8),(void *)(lVar4 + 0x2b8),
                   0x88);
            *(undefined2 *)(param_1 + ((long)iVar25 + 1) * 2 + 0xb738) =
                 *(undefined2 *)(param_1 + lVar26);
            iVar32 = (int)(short)((short)iVar43 + -1);
            if (iVar32 < 0) goto LAB_00109b38;
            cVar21 = *(char *)(param_1 + 0x12);
            lVar45 = lVar45 + -1;
            lVar46 = lVar46 + -0x88;
            lVar26 = lVar26 + -2;
            iVar43 = iVar32;
            iVar25 = iVar32;
          } while (cVar21 == '\0');
LAB_0010992c:
          iVar32 = (int)lVar45;
          if (lVar45 < 1) goto joined_r0x00109b48;
        } while (cVar21 == '\x01');
      }
LAB_00109d14:
      return iVar32 + 1;
    }
  }
  uVar42 = (uVar14 & 0x7f) + (uVar42 & 0x7f);
  puVar3 = (ushort *)(param_1 + 0xb996);
  uVar14 = *puVar3;
  uVar24 = (ulong)uVar14;
  uVar1 = param_2 + 1;
  if ((uVar1 & 0xffff) < (uint)uVar14) {
    do {
      uVar22 = uVar1;
      lVar46 = (long)(short)uVar22;
      lVar26 = param_1 + lVar46 * 0x88;
      puVar5 = (ushort *)(lVar26 + 0x32a);
      puVar19 = (ushort *)(lVar26 + 0x334);
      if ((*(byte *)(lVar26 + 799) & 0xf0) != 0x50) {
        puVar5 = (ushort *)(lVar26 + 0x328);
        puVar19 = (ushort *)(lVar26 + 0x332);
      }
      uVar14 = (*puVar19 & 0x7f) + (*puVar5 & 0x7f);
      iVar43 = (int)*(short *)(lVar26 + 0x330) + (int)*(short *)(lVar26 + 0x2c0);
      iVar32 = iVar43;
      if (399 < iVar43) {
        iVar32 = 400;
      }
      iVar25 = 100;
      if (99 < iVar43) {
        iVar25 = iVar32;
      }
      iVar43 = (int)*(short *)(lVar26 + 0x2c0);
      if (((int)*(short *)(lVar26 + 0x330) & 0x80000000U) != 0) {
        iVar43 = iVar25;
      }
      if ((uVar14 < uVar42) ||
         ((uVar42 == uVar14 && iVar23 != iVar43) && (uVar42 != uVar14 || iVar43 <= iVar23))) {
        lVar26 = param_1 + (lVar46 + -1) * 0x88;
        *(short *)(lVar26 + 0x2c0) = sVar16;
        *(undefined8 *)(lVar26 + 0x2b8) = uVar44;
        *(undefined8 *)(lVar26 + 0x2da) = uVar39;
        *(undefined8 *)(lVar26 + 0x2d2) = uVar36;
        *(undefined8 *)(lVar26 + 0x2ca) = uVar33;
        *(undefined8 *)(lVar26 + 0x2c2) = uVar28;
        *(undefined8 *)(lVar26 + 0x2fa) = uVar40;
        *(undefined8 *)(lVar26 + 0x2f2) = uVar37;
        *(undefined8 *)(lVar26 + 0x2ea) = uVar34;
        *(undefined8 *)(lVar26 + 0x2e2) = uVar29;
        *(ulong *)(lVar26 + 0x317) = CONCAT53(uStack_68,local_6b);
        *(undefined8 *)(lVar26 + 0x312) = uVar38;
        *(undefined8 *)(lVar26 + 0x30a) = uVar35;
        *(undefined8 *)(lVar26 + 0x302) = uVar30;
        *(byte *)(lVar26 + 799) = bVar8;
        *(undefined8 *)(lVar26 + 800) = uVar20;
        *(ushort *)(lVar26 + 0x328) = uVar9;
        *(ushort *)(lVar26 + 0x32a) = uVar10;
        *(undefined4 *)(lVar26 + 0x32c) = uVar7;
        *(short *)(lVar26 + 0x330) = sVar17;
        *(ushort *)(lVar26 + 0x332) = uVar11;
        *(ushort *)(lVar26 + 0x334) = uVar12;
        *(undefined2 *)(lVar26 + 0x33e) = uVar13;
        *(undefined8 *)(lVar26 + 0x336) = uVar31;
        *(undefined2 *)(param_1 + (lVar46 + -1) * 2 + 0xb738) = uVar15;
        uVar24 = (ulong)*puVar3;
        if ((uVar22 & 0xffff) < (uint)*puVar3) {
          return param_2;
        }
        goto LAB_001097e0;
      }
      memcpy((void *)(param_1 + (lVar46 + -1) * 0x88 + 0x2b8),(void *)(lVar26 + 0x2b8),0x88);
      *(undefined2 *)(param_1 + 0xb738 + (lVar46 + -1) * 2) =
           *(undefined2 *)(param_1 + 0xb738 + lVar46 * 2);
      uVar14 = *puVar3;
      uVar24 = (ulong)uVar14;
      uVar1 = uVar22 + 1;
      param_2 = uVar22;
    } while ((uVar1 & 0xffff) < (uint)uVar14);
    if ((uVar1 & 0xffff) < (uint)uVar14) {
      return uVar22;
    }
  }
  else if ((uVar1 & 0xffff) < (uint)uVar14) {
    return param_2;
  }
LAB_001097e0:
  lVar26 = param_1 + uVar24 * 0x88;
  *(undefined8 *)(lVar26 + 0x230) = uVar44;
  *(short *)(lVar26 + 0x238) = sVar16;
  *(undefined8 *)(lVar26 + 0x252) = uVar39;
  *(undefined8 *)(lVar26 + 0x23a) = uVar28;
  *(undefined8 *)(lVar26 + 0x24a) = uVar36;
  *(undefined8 *)(lVar26 + 0x242) = uVar33;
  *(undefined8 *)(lVar26 + 0x272) = uVar40;
  *(undefined8 *)(lVar26 + 0x26a) = uVar37;
  *(undefined8 *)(lVar26 + 0x262) = uVar34;
  *(undefined8 *)(lVar26 + 0x25a) = uVar29;
  *(ulong *)(lVar26 + 0x28f) = CONCAT53(uStack_68,local_6b);
  *(undefined8 *)(lVar26 + 0x28a) = uVar38;
  *(undefined8 *)(lVar26 + 0x282) = uVar35;
  *(undefined8 *)(lVar26 + 0x27a) = uVar30;
  *(byte *)(lVar26 + 0x297) = bVar8;
  *(undefined8 *)(lVar26 + 0x298) = uVar20;
  *(ushort *)(lVar26 + 0x2a0) = uVar9;
  *(ushort *)(lVar26 + 0x2a2) = uVar10;
  *(undefined4 *)(lVar26 + 0x2a4) = uVar7;
  *(short *)(lVar26 + 0x2a8) = sVar17;
  *(ushort *)(lVar26 + 0x2aa) = uVar11;
  *(ushort *)(lVar26 + 0x2ac) = uVar12;
  *(undefined2 *)(lVar26 + 0x2b6) = uVar13;
  *(undefined8 *)(lVar26 + 0x2ae) = uVar31;
  *(undefined2 *)(param_1 + (ulong)*puVar3 * 2 + 0xb736) = uVar15;
  return *puVar3 - 1;
}

