
undefined8
FUN_03f5d5a0(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6)

{
  long lVar1;
  int *piVar2;
  long *plVar3;
  undefined2 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  char cVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  uint uVar28;
  int iVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  
  *(int *)(*(long *)(param_1 + 0x34e078) + 0xc) = (int)param_3[7];
  *(undefined8 *)(*(long *)(param_1 + 0x34e078) + 0x10) = param_5;
  *(long *)(&LAB_003cace0 + param_1) = param_3[8];
  uVar28 = *(uint *)((long)param_3 + 0x1c);
  if ((int)uVar28 < 3) {
    uVar28 = 2;
  }
  *(uint *)(param_1 + 0x34e114) = uVar28 - 1;
  *(bool *)(param_1 + 0x34e10e) = 2 < uVar28;
  uVar30 = param_3[1];
  if (uVar30 < 0x10000) {
    return 0x52;
  }
  lVar32 = *param_3;
  uVar28 = (uint)uVar30 & 0xffffe000;
  *(uint *)(param_1 + 0x34e168) = uVar28;
  lVar32 = lVar32 + (uVar30 & 0x1fff);
  *(long *)(param_1 + 0x34e160) = lVar32;
  if (uVar28 < 0x20000) {
    return 0x52;
  }
  uVar30 = FUN_03f845e0(param_1,lVar32);
  uVar17 = FUN_03f847c4((byte *)(param_1 + 0x3cbcf8),lVar32 + (uVar30 & 0xffffffff) + 0x7fb0,uVar28)
  ;
  if ((int)uVar17 != 0) {
    return uVar17;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x34e078) + 8) = *(undefined1 *)(param_1 + 0x3cbd33);
  piVar2 = (int *)(param_1 + 0x36e198);
  uVar9 = *(undefined1 *)(param_1 + 0x3cbd32);
  uVar10 = *(undefined1 *)(param_1 + 0x3cbd34);
  (&DAT_0034d9d8)[param_1] = *(undefined1 *)(param_1 + 0x3cbd31);
  *(undefined1 *)(param_1 + 0x34dc50) = uVar9;
  *(undefined1 *)(param_1 + 0x34710) = uVar10;
  *(undefined1 *)(param_1 + 0x34e15e) = *(undefined1 *)(param_1 + 0x3cbd35);
  *(undefined1 *)(param_1 + 0x34d9c8) = *(undefined1 *)(param_1 + 0x3cbd36);
  FUN_03f5b160(param_2,*(byte *)(param_1 + 0x3cbcfc) - 2 < 9,*(byte *)(param_1 + 0x3cbcf9) >> 4 & 1,
               uVar10,param_3);
  uVar28 = (uint)*(byte *)(param_1 + 0x3cbcf8);
  if (uVar28 == 0) {
    cVar11 = *(char *)(param_1 + 0x3cbd34);
    piVar2[0] = 0;
    piVar2[1] = 0;
    bVar16 = cVar11 == '\0';
LAB_03f5d75c:
    bVar12 = *(byte *)(param_1 + 0x3cbcf9);
    if ((bVar12 != 0x23) && (bVar16)) {
      if ((bVar12 == 0x32) || (*(char *)(param_1 + 0x3cbd35) != '\0')) {
        if (*(long *)(param_1 + 0x34e160) != 0) {
          FUN_03fe6b10(param_1 + 0x3761b8);
          lVar31 = *(long *)(param_1 + 0x34e160);
          lVar32 = 0;
          uVar28 = *(uint *)(param_1 + 0x34e168);
          uVar30 = 0;
          do {
            lVar22 = param_1 + 0x3761f8 + lVar32;
            uVar13 = (int)uVar30 + 0x1000;
            *(ulong *)(param_1 + 0x3761f8 + lVar32) = lVar31 + uVar30;
            *(ulong *)(lVar22 + 0x4000) = lVar31 + uVar30;
            uVar14 = 0;
            if (uVar28 != 0) {
              uVar14 = uVar13 / uVar28;
            }
            lVar32 = lVar32 + 0x80;
            uVar13 = uVar13 - uVar14 * uVar28;
            lVar21 = lVar31 + (ulong)uVar13;
            uVar13 = uVar13 + 0x1000;
            uVar14 = 0;
            if (uVar28 != 0) {
              uVar14 = uVar13 / uVar28;
            }
            *(long *)(lVar22 + 0x4008) = lVar21;
            uVar13 = uVar13 - uVar14 * uVar28;
            lVar19 = lVar31 + (ulong)uVar13;
            uVar13 = uVar13 + 0x1000;
            *(long *)(lVar22 + 0x4010) = lVar19;
            *(long *)(lVar22 + 8) = lVar21;
            *(long *)(lVar22 + 0x10) = lVar19;
            uVar14 = 0;
            if (uVar28 != 0) {
              uVar14 = uVar13 / uVar28;
            }
            uVar13 = uVar13 - uVar14 * uVar28;
            lVar21 = lVar31 + (ulong)uVar13;
            uVar13 = uVar13 + 0x1000;
            uVar14 = 0;
            if (uVar28 != 0) {
              uVar14 = uVar13 / uVar28;
            }
            *(long *)(lVar22 + 0x4018) = lVar21;
            uVar13 = uVar13 - uVar14 * uVar28;
            lVar19 = lVar31 + (ulong)uVar13;
            uVar13 = uVar13 + 0x1000;
            *(long *)(lVar22 + 0x4020) = lVar19;
            *(long *)(lVar22 + 0x18) = lVar21;
            *(long *)(lVar22 + 0x20) = lVar19;
            uVar14 = 0;
            if (uVar28 != 0) {
              uVar14 = uVar13 / uVar28;
            }
            uVar13 = uVar13 - uVar14 * uVar28;
            lVar21 = lVar31 + (ulong)uVar13;
            uVar13 = uVar13 + 0x1000;
            uVar14 = 0;
            if (uVar28 != 0) {
              uVar14 = uVar13 / uVar28;
            }
            *(long *)(lVar22 + 0x4028) = lVar21;
            uVar13 = uVar13 - uVar14 * uVar28;
            lVar19 = lVar31 + (ulong)uVar13;
            uVar13 = uVar13 + 0x1000;
            *(long *)(lVar22 + 0x4030) = lVar19;
            *(long *)(lVar22 + 0x28) = lVar21;
            *(long *)(lVar22 + 0x30) = lVar19;
            uVar14 = 0;
            if (uVar28 != 0) {
              uVar14 = uVar13 / uVar28;
            }
            uVar13 = uVar13 - uVar14 * uVar28;
            lVar21 = lVar31 + (ulong)uVar13;
            uVar13 = uVar13 + 0x1000;
            *(long *)(lVar22 + 0x38) = lVar21;
            *(long *)(lVar22 + 0x4038) = lVar21;
            uVar14 = 0;
            if (uVar28 != 0) {
              uVar14 = uVar13 / uVar28;
            }
            uVar30 = (ulong)(uVar13 - uVar14 * uVar28);
          } while (lVar32 != 0x2000);
          lVar32 = 0;
          uVar30 = 0;
          do {
            uVar13 = (int)uVar30 + 0x1000;
            lVar22 = param_1 + 0x37c1f8 + lVar32;
            uVar14 = 0;
            if (uVar28 != 0) {
              uVar14 = uVar13 / uVar28;
            }
            uVar13 = uVar13 - uVar14 * uVar28;
            uVar14 = uVar13 + 0x1000;
            *(ulong *)(lVar22 + -0x40) = lVar31 + uVar30;
            *(ulong *)(lVar22 + -0x38) = lVar31 + (ulong)uVar13;
            uVar13 = 0;
            if (uVar28 != 0) {
              uVar13 = uVar14 / uVar28;
            }
            uVar14 = uVar14 - uVar13 * uVar28;
            uVar13 = uVar14 + 0x1000;
            uVar15 = 0;
            if (uVar28 != 0) {
              uVar15 = uVar13 / uVar28;
            }
            uVar13 = uVar13 - uVar15 * uVar28;
            uVar15 = uVar13 + 0x1000;
            *(ulong *)(lVar22 + -0x30) = lVar31 + (ulong)uVar14;
            *(ulong *)(lVar22 + -0x28) = lVar31 + (ulong)uVar13;
            uVar13 = 0;
            if (uVar28 != 0) {
              uVar13 = uVar15 / uVar28;
            }
            uVar15 = uVar15 - uVar13 * uVar28;
            uVar13 = uVar15 + 0x1000;
            uVar14 = 0;
            if (uVar28 != 0) {
              uVar14 = uVar13 / uVar28;
            }
            uVar13 = uVar13 - uVar14 * uVar28;
            uVar14 = uVar13 + 0x1000;
            *(ulong *)(lVar22 + -0x20) = lVar31 + (ulong)uVar15;
            *(ulong *)(lVar22 + -0x18) = lVar31 + (ulong)uVar13;
            uVar13 = 0;
            if (uVar28 != 0) {
              uVar13 = uVar14 / uVar28;
            }
            uVar14 = uVar14 - uVar13 * uVar28;
            uVar13 = uVar14 + 0x1000;
            uVar15 = 0;
            if (uVar28 != 0) {
              uVar15 = uVar13 / uVar28;
            }
            uVar13 = uVar13 - uVar15 * uVar28;
            uVar15 = uVar13 + 0x1000;
            *(ulong *)(lVar22 + -0x10) = lVar31 + (ulong)uVar14;
            *(ulong *)(lVar22 + -8) = lVar31 + (ulong)uVar13;
            uVar13 = 0;
            if (uVar28 != 0) {
              uVar13 = uVar15 / uVar28;
            }
            uVar15 = uVar15 - uVar13 * uVar28;
            uVar13 = uVar15 + 0x1000;
            *(ulong *)(param_1 + 0x37c1f8 + lVar32) = lVar31 + (ulong)uVar15;
            uVar14 = 0;
            if (uVar28 != 0) {
              uVar14 = uVar13 / uVar28;
            }
            lVar32 = lVar32 + 0x80;
            uVar13 = uVar13 - uVar14 * uVar28;
            uVar14 = uVar13 + 0x1000;
            uVar15 = 0;
            if (uVar28 != 0) {
              uVar15 = uVar14 / uVar28;
            }
            uVar14 = uVar14 - uVar15 * uVar28;
            uVar15 = uVar14 + 0x1000;
            *(ulong *)(lVar22 + 8) = lVar31 + (ulong)uVar13;
            *(ulong *)(lVar22 + 0x10) = lVar31 + (ulong)uVar14;
            uVar13 = 0;
            if (uVar28 != 0) {
              uVar13 = uVar15 / uVar28;
            }
            uVar15 = uVar15 - uVar13 * uVar28;
            uVar13 = uVar15 + 0x1000;
            uVar14 = 0;
            if (uVar28 != 0) {
              uVar14 = uVar13 / uVar28;
            }
            uVar13 = uVar13 - uVar14 * uVar28;
            uVar14 = uVar13 + 0x1000;
            *(ulong *)(lVar22 + 0x18) = lVar31 + (ulong)uVar15;
            *(ulong *)(lVar22 + 0x20) = lVar31 + (ulong)uVar13;
            uVar13 = 0;
            if (uVar28 != 0) {
              uVar13 = uVar14 / uVar28;
            }
            uVar14 = uVar14 - uVar13 * uVar28;
            uVar13 = uVar14 + 0x1000;
            uVar15 = 0;
            if (uVar28 != 0) {
              uVar15 = uVar13 / uVar28;
            }
            uVar13 = uVar13 - uVar15 * uVar28;
            uVar15 = uVar13 + 0x1000;
            *(ulong *)(lVar22 + 0x28) = lVar31 + (ulong)uVar14;
            *(ulong *)(lVar22 + 0x30) = lVar31 + (ulong)uVar13;
            uVar13 = 0;
            if (uVar28 != 0) {
              uVar13 = uVar15 / uVar28;
            }
            uVar15 = uVar15 - uVar13 * uVar28;
            *(ulong *)(lVar22 + 0x38) = lVar31 + (ulong)uVar15;
            uVar15 = uVar15 + 0x1000;
            uVar13 = 0;
            if (uVar28 != 0) {
              uVar13 = uVar15 / uVar28;
            }
            uVar30 = (ulong)(uVar15 - uVar13 * uVar28);
          } while (lVar32 != 0x2000);
          lVar32 = 0;
          *(undefined8 *)(param_1 + 0x3799b8) = 3;
          *(undefined8 *)(param_1 + 0x3799c0) = 3;
          *(undefined8 *)(FUN_003819b4 + param_1 + 4) = 3;
          *(undefined8 *)(param_1 + 0x3819c0) = 3;
          *(undefined8 *)(param_1 + 0x3799c8) = 3;
          *(undefined8 *)(param_1 + 0x3799d0) = 3;
          *(undefined8 *)(param_1 + 0x3819c8) = 3;
          *(undefined8 *)(param_1 + 0x3819d0) = 3;
          *(undefined8 *)(param_1 + 0x3799d8) = 3;
          *(undefined8 *)(param_1 + 0x3799e0) = 3;
          *(undefined8 *)(param_1 + 0x3819d8) = 3;
          *(undefined8 *)(param_1 + 0x3819e0) = 3;
          *(undefined8 *)(param_1 + 0x3799e8) = 3;
          *(undefined8 *)(param_1 + 0x3799f0) = 3;
          *(undefined8 *)(param_1 + 0x3819e8) = 3;
          *(undefined8 *)(param_1 + 0x3819f0) = 3;
          *(undefined8 *)(param_1 + 0x3799f8) = 3;
          *(undefined8 *)(param_1 + 0x379a00) = 3;
          *(undefined8 *)(param_1 + 0x3819f8) = 3;
          *(undefined8 *)(param_1 + 0x381a00) = 3;
          *(undefined8 *)(param_1 + 0x379a08) = 3;
          *(undefined8 *)(param_1 + 0x379a10) = 3;
          *(undefined8 *)(param_1 + 0x381a08) = 3;
          *(undefined8 *)(param_1 + 0x381a10) = 3;
          *(undefined8 *)(param_1 + 0x379a18) = 3;
          *(undefined8 *)(param_1 + 0x379a20) = 3;
          *(undefined8 *)(param_1 + 0x381a18) = 3;
          *(undefined8 *)(param_1 + 0x381a20) = 3;
          *(undefined8 *)(param_1 + 0x379a28) = 3;
          *(undefined8 *)(param_1 + 0x379a30) = 3;
          *(undefined8 *)(param_1 + 0x381a28) = 3;
          *(undefined8 *)(param_1 + 0x381a30) = 3;
          *(undefined8 *)(param_1 + 0x379a38) = 3;
          *(undefined8 *)(param_1 + 0x379a40) = 3;
          *(undefined8 *)(param_1 + 0x381a38) = 3;
          *(undefined8 *)(param_1 + 0x381a40) = 3;
          *(undefined8 *)(param_1 + 0x379a48) = 3;
          *(undefined8 *)(param_1 + 0x379a50) = 3;
          *(undefined8 *)(param_1 + 0x381a48) = 3;
          *(undefined8 *)(param_1 + 0x381a50) = 3;
          *(undefined8 *)(param_1 + 0x379a58) = 3;
          *(undefined8 *)(param_1 + 0x379a60) = 3;
          *(undefined8 *)(param_1 + 0x381a58) = 3;
          *(undefined8 *)(param_1 + 0x381a60) = 3;
          *(undefined8 *)(param_1 + 0x379a68) = 3;
          *(undefined8 *)(param_1 + 0x379a70) = 3;
          *(undefined8 *)(param_1 + 0x381a68) = 3;
          *(undefined8 *)(param_1 + 0x381a70) = 3;
          *(undefined8 *)(param_1 + 0x379a78) = 3;
          *(undefined8 *)(param_1 + 0x379a80) = 3;
          *(undefined8 *)(param_1 + 0x381a78) = 3;
          *(undefined8 *)(param_1 + 0x381a80) = 3;
          *(undefined8 *)(param_1 + 0x379a88) = 3;
          *(undefined8 *)(param_1 + 0x379a90) = 3;
          *(undefined8 *)(param_1 + 0x381a88) = 3;
          *(undefined8 *)(param_1 + 0x381a90) = 3;
          *(undefined8 *)(param_1 + 0x379a98) = 3;
          *(undefined8 *)(param_1 + 0x379aa0) = 3;
          *(undefined8 *)(param_1 + 0x381a98) = 3;
          *(undefined8 *)(param_1 + 0x381aa0) = 3;
          *(undefined8 *)(param_1 + 0x379aa8) = 3;
          *(undefined8 *)(param_1 + 0x379ab0) = 3;
          *(undefined8 *)(param_1 + 0x381aa8) = 3;
          *(undefined8 *)(param_1 + 0x381ab0) = 3;
          *(undefined8 *)(param_1 + 0x379ab8) = 3;
          *(undefined8 *)(param_1 + 0x379ac0) = 3;
          *(undefined8 *)(param_1 + 0x381ab8) = 3;
          *(undefined8 *)(param_1 + 0x381ac0) = 3;
          *(undefined8 *)(param_1 + 0x379ac8) = 3;
          *(undefined8 *)(param_1 + 0x379ad0) = 3;
          *(undefined8 *)(param_1 + 0x381ac8) = 3;
          *(undefined8 *)(param_1 + 0x381ad0) = 3;
          *(undefined8 *)(param_1 + 0x379ad8) = 3;
          *(undefined8 *)(param_1 + 0x379ae0) = 3;
          *(undefined8 *)(param_1 + 0x381ad8) = 3;
          *(undefined8 *)(param_1 + 0x381ae0) = 3;
          *(undefined8 *)(param_1 + 0x379ae8) = 3;
          *(undefined8 *)(param_1 + 0x379af0) = 3;
          *(undefined8 *)(param_1 + 0x381ae8) = 3;
          *(undefined8 *)(param_1 + 0x381af0) = 3;
          *(undefined8 *)(param_1 + 0x379af8) = 3;
          *(undefined8 *)(param_1 + 0x379b00) = 3;
          *(undefined8 *)(param_1 + 0x381af8) = 3;
          *(undefined8 *)(param_1 + 0x381b00) = 3;
          *(undefined8 *)(param_1 + 0x379b08) = 3;
          *(undefined8 *)(param_1 + 0x379b10) = 3;
          *(undefined8 *)(param_1 + 0x381b08) = 3;
          *(undefined8 *)(param_1 + 0x381b10) = 3;
          *(undefined8 *)(param_1 + 0x379b18) = 3;
          *(undefined8 *)(param_1 + 0x379b20) = 3;
          *(undefined8 *)(&DAT_00381b18 + param_1) = 3;
          *(undefined8 *)(FUN_00381b20 + param_1) = 3;
          *(undefined8 *)(param_1 + 0x379b28) = 3;
          *(undefined8 *)(param_1 + 0x379b30) = 3;
          *(undefined8 *)(param_1 + 0x381b28) = 3;
          *(undefined8 *)(param_1 + 0x381b30) = 3;
          *(undefined8 *)(param_1 + 0x379b38) = 3;
          *(undefined8 *)(param_1 + 0x379b40) = 3;
          *(undefined8 *)(param_1 + 0x381b38) = 3;
          *(undefined8 *)(param_1 + 0x381b40) = 3;
          *(undefined8 *)(param_1 + 0x379b48) = 3;
          *(undefined8 *)(param_1 + 0x379b50) = 3;
          *(undefined8 *)(param_1 + 0x381b48) = 3;
          *(undefined8 *)(param_1 + 0x381b50) = 3;
          *(undefined8 *)(param_1 + 0x379b58) = 3;
          *(undefined8 *)(param_1 + 0x379b60) = 3;
          *(undefined8 *)(param_1 + 0x381b58) = 3;
          *(undefined8 *)(param_1 + 0x381b60) = 3;
          *(undefined8 *)(param_1 + 0x379b68) = 3;
          *(undefined8 *)(param_1 + 0x379b70) = 3;
          *(undefined8 *)(param_1 + 0x381b68) = 3;
          *(undefined8 *)(param_1 + 0x381b70) = 3;
          *(undefined8 *)(param_1 + 0x379b78) = 3;
          *(undefined8 *)(param_1 + 0x379b80) = 3;
          *(undefined8 *)(param_1 + 0x381b78) = 3;
          *(undefined8 *)(param_1 + 0x381b80) = 3;
          *(undefined8 *)(param_1 + 0x379b88) = 3;
          *(undefined8 *)(param_1 + 0x379b90) = 3;
          *(undefined8 *)(param_1 + 0x381b88) = 3;
          *(undefined8 *)(param_1 + 0x381b90) = 3;
          *(undefined8 *)(param_1 + 0x379b98) = 3;
          *(undefined8 *)(param_1 + 0x379ba0) = 3;
          *(undefined8 *)(param_1 + 0x381b98) = 3;
          *(undefined8 *)(param_1 + 0x381ba0) = 3;
          *(undefined8 *)(param_1 + 0x379ba8) = 3;
          *(undefined8 *)(param_1 + 0x379bb0) = 3;
          *(undefined8 *)(param_1 + 0x381ba8) = 3;
          *(undefined8 *)(param_1 + 0x381bb0) = 3;
          do {
            *(undefined8 *)(param_1 + 0x37e1e8 + lVar32) = 4;
            lVar31 = param_1 + 0x37e1e8 + lVar32;
            lVar32 = lVar32 + 0x80;
            *(undefined8 *)(lVar31 + 0x4000) = 4;
            *(undefined8 *)(lVar31 + -0x8000) = 4;
            *(undefined8 *)(lVar31 + 8) = 4;
            *(undefined8 *)(lVar31 + -0x4000) = 4;
            *(undefined8 *)(lVar31 + 0x4008) = 4;
            *(undefined8 *)(lVar31 + -0x7ff8) = 4;
            *(undefined8 *)(lVar31 + -0x3ff8) = 4;
          } while (lVar32 != 0x2000);
          FUN_03f5ce40(param_1);
        }
      }
      else if (((bVar12 ^ 0xff) & 0x21) == 0) {
        FUN_03f5cfe0();
      }
      else {
        FUN_03f5c730(param_1);
      }
      goto LAB_03f5e5bc;
    }
  }
  else {
    iVar29 = 0x400 << (ulong)(uVar28 & 0x1f);
    *piVar2 = iVar29 + -1;
    *(int *)(param_1 + 0x36e19c) = iVar29;
    if (*(char *)(param_1 + 0x3cbd34) == '\0') {
      bVar16 = true;
      goto LAB_03f5d75c;
    }
    *(int *)(param_1 + 0x346c0) = iVar29 + -1;
    *(int *)(param_1 + 0x346c4) = iVar29;
  }
  if (*(long *)(param_1 + 0x34e160) != 0) {
    FUN_03fe6b10(param_1 + 0x3761b8);
    FUN_03fe6b10(param_1 + 0x20680);
    lVar34 = *(long *)(param_1 + 0x34e160);
    iVar29 = 0;
    lVar32 = 0x206c0;
    uVar28 = *(uint *)(param_1 + 0x34e168);
    lVar31 = 0x30690;
    lVar22 = 0x30692;
    lVar21 = 0x30694;
    lVar36 = 0x30696;
    lVar19 = 0x30698;
    lVar37 = 0x3069a;
    lVar38 = 0x3069c;
    lVar18 = 0x3069e;
    lVar25 = 0x376230;
    lVar20 = 0x3861c8;
    lVar23 = 0x40;
    do {
      plVar3 = (long *)(param_1 + lVar25);
      puVar4 = (undefined2 *)(param_1 + lVar20);
      plVar5 = (long *)(param_1 + lVar32);
      plVar3[-7] = lVar34 + iVar29;
      *puVar4 = 0x800;
      *plVar5 = lVar34 + iVar29;
      uVar13 = 0;
      if (uVar28 != 0) {
        uVar13 = (iVar29 + 0x1000U) / uVar28;
      }
      *(undefined2 *)(param_1 + lVar31) = 0x200;
      lVar23 = lVar23 + -1;
      lVar20 = lVar20 + 0x20;
      lVar25 = lVar25 + 0x80;
      lVar32 = lVar32 + 0x80;
      lVar31 = lVar31 + 0x20;
      iVar29 = (iVar29 + 0x1000U) - uVar13 * uVar28;
      lVar41 = lVar34 + iVar29;
      uVar13 = iVar29 + 0x1000;
      plVar3[-6] = lVar41;
      puVar4[1] = 0x800;
      plVar5[1] = lVar41;
      uVar14 = 0;
      if (uVar28 != 0) {
        uVar14 = uVar13 / uVar28;
      }
      iVar29 = uVar13 - uVar14 * uVar28;
      *(undefined2 *)(param_1 + lVar22) = 0x200;
      lVar22 = lVar22 + 0x20;
      lVar41 = lVar34 + iVar29;
      uVar13 = iVar29 + 0x1000;
      plVar3[-5] = lVar41;
      puVar4[2] = 0x800;
      plVar5[2] = lVar41;
      uVar14 = 0;
      if (uVar28 != 0) {
        uVar14 = uVar13 / uVar28;
      }
      *(undefined2 *)(param_1 + lVar21) = 0x200;
      lVar21 = lVar21 + 0x20;
      iVar29 = uVar13 - uVar14 * uVar28;
      lVar41 = lVar34 + iVar29;
      uVar13 = iVar29 + 0x1000;
      plVar3[-4] = lVar41;
      puVar4[3] = 0x800;
      plVar5[3] = lVar41;
      uVar14 = 0;
      if (uVar28 != 0) {
        uVar14 = uVar13 / uVar28;
      }
      *(undefined2 *)(param_1 + lVar36) = 0x200;
      lVar36 = lVar36 + 0x20;
      iVar29 = uVar13 - uVar14 * uVar28;
      lVar41 = lVar34 + iVar29;
      uVar13 = iVar29 + 0x1000;
      plVar3[-3] = lVar41;
      puVar4[4] = 0x800;
      plVar5[4] = lVar41;
      uVar14 = 0;
      if (uVar28 != 0) {
        uVar14 = uVar13 / uVar28;
      }
      iVar29 = uVar13 - uVar14 * uVar28;
      *(undefined2 *)(param_1 + lVar19) = 0x200;
      lVar19 = lVar19 + 0x20;
      lVar41 = lVar34 + iVar29;
      uVar13 = iVar29 + 0x1000;
      plVar3[-2] = lVar41;
      puVar4[5] = 0x800;
      plVar5[5] = lVar41;
      uVar14 = 0;
      if (uVar28 != 0) {
        uVar14 = uVar13 / uVar28;
      }
      *(undefined2 *)(param_1 + lVar37) = 0x200;
      lVar37 = lVar37 + 0x20;
      iVar29 = uVar13 - uVar14 * uVar28;
      lVar41 = lVar34 + iVar29;
      uVar13 = iVar29 + 0x1000;
      plVar3[-1] = lVar41;
      puVar4[6] = 0x800;
      plVar5[6] = lVar41;
      uVar14 = 0;
      if (uVar28 != 0) {
        uVar14 = uVar13 / uVar28;
      }
      *(undefined2 *)(param_1 + lVar38) = 0x200;
      lVar38 = lVar38 + 0x20;
      iVar29 = uVar13 - uVar14 * uVar28;
      lVar41 = lVar34 + iVar29;
      uVar13 = iVar29 + 0x1000;
      *plVar3 = lVar41;
      puVar4[7] = 0x800;
      plVar5[7] = lVar41;
      uVar14 = 0;
      if (uVar28 != 0) {
        uVar14 = uVar13 / uVar28;
      }
      iVar29 = uVar13 - uVar14 * uVar28;
      *(undefined2 *)(param_1 + lVar18) = 0x200;
      lVar18 = lVar18 + 0x20;
    } while (lVar23 != 0);
    lVar38 = 0x3871c8;
    lVar25 = 0x37a230;
    lVar34 = *(long *)(param_1 + 0x34e160);
    uVar28 = *(uint *)(param_1 + 0x34e168);
    lVar32 = 0x31690;
    lVar31 = 0x31692;
    lVar22 = 0x31694;
    lVar21 = 0x31696;
    lVar19 = 0x31698;
    lVar37 = 0x3169a;
    lVar36 = 0x3169c;
    lVar18 = 0x3169e;
    lVar23 = 0x40;
    lVar20 = 0x246c0;
    do {
      plVar3 = (long *)(param_1 + lVar25);
      puVar4 = (undefined2 *)(param_1 + lVar38);
      plVar5 = (long *)(param_1 + lVar20);
      plVar3[-7] = lVar34 + iVar29;
      *puVar4 = 0x800;
      *plVar5 = lVar34 + iVar29;
      uVar13 = 0;
      if (uVar28 != 0) {
        uVar13 = (iVar29 + 0x1000U) / uVar28;
      }
      *(undefined2 *)(param_1 + lVar32) = 0x200;
      lVar23 = lVar23 + -1;
      lVar38 = lVar38 + 0x20;
      lVar25 = lVar25 + 0x80;
      lVar20 = lVar20 + 0x80;
      lVar32 = lVar32 + 0x20;
      iVar29 = (iVar29 + 0x1000U) - uVar13 * uVar28;
      lVar41 = lVar34 + iVar29;
      uVar13 = iVar29 + 0x1000;
      plVar3[-6] = lVar41;
      puVar4[1] = 0x800;
      plVar5[1] = lVar41;
      uVar14 = 0;
      if (uVar28 != 0) {
        uVar14 = uVar13 / uVar28;
      }
      iVar29 = uVar13 - uVar14 * uVar28;
      *(undefined2 *)(param_1 + lVar31) = 0x200;
      lVar31 = lVar31 + 0x20;
      lVar41 = lVar34 + iVar29;
      uVar13 = iVar29 + 0x1000;
      plVar3[-5] = lVar41;
      puVar4[2] = 0x800;
      plVar5[2] = lVar41;
      uVar14 = 0;
      if (uVar28 != 0) {
        uVar14 = uVar13 / uVar28;
      }
      *(undefined2 *)(param_1 + lVar22) = 0x200;
      lVar22 = lVar22 + 0x20;
      iVar29 = uVar13 - uVar14 * uVar28;
      lVar41 = lVar34 + iVar29;
      uVar13 = iVar29 + 0x1000;
      plVar3[-4] = lVar41;
      puVar4[3] = 0x800;
      plVar5[3] = lVar41;
      uVar14 = 0;
      if (uVar28 != 0) {
        uVar14 = uVar13 / uVar28;
      }
      *(undefined2 *)(param_1 + lVar21) = 0x200;
      lVar21 = lVar21 + 0x20;
      iVar29 = uVar13 - uVar14 * uVar28;
      lVar41 = lVar34 + iVar29;
      uVar13 = iVar29 + 0x1000;
      plVar3[-3] = lVar41;
      puVar4[4] = 0x800;
      plVar5[4] = lVar41;
      uVar14 = 0;
      if (uVar28 != 0) {
        uVar14 = uVar13 / uVar28;
      }
      iVar29 = uVar13 - uVar14 * uVar28;
      *(undefined2 *)(param_1 + lVar19) = 0x200;
      lVar19 = lVar19 + 0x20;
      lVar41 = lVar34 + iVar29;
      uVar13 = iVar29 + 0x1000;
      plVar3[-2] = lVar41;
      puVar4[5] = 0x800;
      plVar5[5] = lVar41;
      uVar14 = 0;
      if (uVar28 != 0) {
        uVar14 = uVar13 / uVar28;
      }
      *(undefined2 *)(param_1 + lVar37) = 0x200;
      lVar37 = lVar37 + 0x20;
      iVar29 = uVar13 - uVar14 * uVar28;
      lVar41 = lVar34 + iVar29;
      uVar13 = iVar29 + 0x1000;
      plVar3[-1] = lVar41;
      puVar4[6] = 0x800;
      plVar5[6] = lVar41;
      uVar14 = 0;
      if (uVar28 != 0) {
        uVar14 = uVar13 / uVar28;
      }
      *(undefined2 *)(param_1 + lVar36) = 0x200;
      lVar36 = lVar36 + 0x20;
      iVar29 = uVar13 - uVar14 * uVar28;
      lVar41 = lVar34 + iVar29;
      uVar13 = iVar29 + 0x1000;
      *plVar3 = lVar41;
      puVar4[7] = 0x800;
      plVar5[7] = lVar41;
      uVar14 = 0;
      if (uVar28 != 0) {
        uVar14 = uVar13 / uVar28;
      }
      iVar29 = uVar13 - uVar14 * uVar28;
      *(undefined2 *)(param_1 + lVar18) = 0x200;
      lVar18 = lVar18 + 0x20;
    } while (lVar23 != 0);
    iVar29 = 0;
    lVar32 = 0x31e80;
    lVar31 = 0x31e82;
    lVar22 = 0x31e84;
    lVar33 = *(long *)(param_1 + 0x34e160);
    uVar28 = *(uint *)(param_1 + 0x34e168);
    lVar21 = 0x31e86;
    lVar19 = 0x31e88;
    lVar37 = 0x31e8a;
    lVar38 = 0x31e8c;
    lVar25 = 0x31e8e;
    lVar20 = 0x31e90;
    lVar36 = 0x31e92;
    lVar18 = 0x31e94;
    lVar23 = 0x31e96;
    lVar34 = 0x31e98;
    lVar41 = 0x31e9a;
    lVar35 = 0x31e9c;
    lVar24 = 0x31e9e;
    lVar26 = 0x37c230;
    lVar27 = 0x3879b8;
    lVar39 = 0x40;
    lVar40 = 0x26680;
    do {
      plVar3 = (long *)(param_1 + lVar26);
      puVar4 = (undefined2 *)(param_1 + lVar27);
      plVar5 = (long *)(param_1 + lVar40);
      plVar3[-0xf] = lVar33 + iVar29;
      *puVar4 = 0x800;
      *plVar5 = lVar33 + iVar29;
      uVar13 = 0;
      if (uVar28 != 0) {
        uVar13 = (iVar29 + 0x1000U) / uVar28;
      }
      *(undefined2 *)(param_1 + lVar32) = 0x200;
      lVar39 = lVar39 + -1;
      lVar27 = lVar27 + 0x20;
      lVar26 = lVar26 + 0x80;
      lVar40 = lVar40 + 0x80;
      lVar32 = lVar32 + 0x20;
      iVar29 = (iVar29 + 0x1000U) - uVar13 * uVar28;
      lVar1 = lVar33 + iVar29;
      uVar13 = iVar29 + 0x1000;
      plVar3[-0xe] = lVar1;
      puVar4[1] = 0x800;
      plVar5[1] = lVar1;
      uVar14 = 0;
      if (uVar28 != 0) {
        uVar14 = uVar13 / uVar28;
      }
      iVar29 = uVar13 - uVar14 * uVar28;
      *(undefined2 *)(param_1 + lVar31) = 0x200;
      lVar31 = lVar31 + 0x20;
      lVar1 = lVar33 + iVar29;
      uVar13 = iVar29 + 0x1000;
      plVar3[-0xd] = lVar1;
      puVar4[2] = 0x800;
      plVar5[2] = lVar1;
      uVar14 = 0;
      if (uVar28 != 0) {
        uVar14 = uVar13 / uVar28;
      }
      *(undefined2 *)(param_1 + lVar22) = 0x200;
      lVar22 = lVar22 + 0x20;
      iVar29 = uVar13 - uVar14 * uVar28;
      lVar1 = lVar33 + iVar29;
      uVar13 = iVar29 + 0x1000;
      plVar3[-0xc] = lVar1;
      puVar4[3] = 0x800;
      plVar5[3] = lVar1;
      uVar14 = 0;
      if (uVar28 != 0) {
        uVar14 = uVar13 / uVar28;
      }
      *(undefined2 *)(param_1 + lVar21) = 0x200;
      lVar21 = lVar21 + 0x20;
      iVar29 = uVar13 - uVar14 * uVar28;
      lVar1 = lVar33 + iVar29;
      uVar13 = iVar29 + 0x1000;
      plVar3[-0xb] = lVar1;
      puVar4[4] = 0x800;
      plVar5[4] = lVar1;
      uVar14 = 0;
      if (uVar28 != 0) {
        uVar14 = uVar13 / uVar28;
      }
      iVar29 = uVar13 - uVar14 * uVar28;
      *(undefined2 *)(param_1 + lVar19) = 0x200;
      lVar19 = lVar19 + 0x20;
      lVar1 = lVar33 + iVar29;
      uVar13 = iVar29 + 0x1000;
      plVar3[-10] = lVar1;
      puVar4[5] = 0x800;
      plVar5[5] = lVar1;
      uVar14 = 0;
      if (uVar28 != 0) {
        uVar14 = uVar13 / uVar28;
      }
      *(undefined2 *)(param_1 + lVar37) = 0x200;
      lVar37 = lVar37 + 0x20;
      iVar29 = uVar13 - uVar14 * uVar28;
      lVar1 = lVar33 + iVar29;
      uVar13 = iVar29 + 0x1000;
      plVar3[-9] = lVar1;
      puVar4[6] = 0x800;
      plVar5[6] = lVar1;
      uVar14 = 0;
      if (uVar28 != 0) {
        uVar14 = uVar13 / uVar28;
      }
      *(undefined2 *)(param_1 + lVar38) = 0x200;
      lVar38 = lVar38 + 0x20;
      iVar29 = uVar13 - uVar14 * uVar28;
      lVar1 = lVar33 + iVar29;
      uVar13 = iVar29 + 0x1000;
      plVar3[-8] = lVar1;
      puVar4[7] = 0x800;
      plVar5[7] = lVar1;
      uVar14 = 0;
      if (uVar28 != 0) {
        uVar14 = uVar13 / uVar28;
      }
      iVar29 = uVar13 - uVar14 * uVar28;
      *(undefined2 *)(param_1 + lVar25) = 0x200;
      lVar25 = lVar25 + 0x20;
      lVar1 = lVar33 + iVar29;
      uVar13 = iVar29 + 0x1000;
      plVar3[-7] = lVar1;
      puVar4[8] = 0x800;
      plVar5[8] = lVar1;
      uVar14 = 0;
      if (uVar28 != 0) {
        uVar14 = uVar13 / uVar28;
      }
      *(undefined2 *)(param_1 + lVar20) = 0x200;
      lVar20 = lVar20 + 0x20;
      iVar29 = uVar13 - uVar14 * uVar28;
      lVar1 = lVar33 + iVar29;
      uVar13 = iVar29 + 0x1000;
      plVar3[-6] = lVar1;
      puVar4[9] = 0x800;
      plVar5[9] = lVar1;
      uVar14 = 0;
      if (uVar28 != 0) {
        uVar14 = uVar13 / uVar28;
      }
      *(undefined2 *)(param_1 + lVar36) = 0x200;
      lVar36 = lVar36 + 0x20;
      iVar29 = uVar13 - uVar14 * uVar28;
      lVar1 = lVar33 + iVar29;
      uVar13 = iVar29 + 0x1000;
      plVar3[-5] = lVar1;
      puVar4[10] = 0x800;
      plVar5[10] = lVar1;
      uVar14 = 0;
      if (uVar28 != 0) {
        uVar14 = uVar13 / uVar28;
      }
      iVar29 = uVar13 - uVar14 * uVar28;
      *(undefined2 *)(param_1 + lVar18) = 0x200;
      lVar18 = lVar18 + 0x20;
      lVar1 = lVar33 + iVar29;
      uVar13 = iVar29 + 0x1000;
      plVar3[-4] = lVar1;
      puVar4[0xb] = 0x800;
      plVar5[0xb] = lVar1;
      uVar14 = 0;
      if (uVar28 != 0) {
        uVar14 = uVar13 / uVar28;
      }
      *(undefined2 *)(param_1 + lVar23) = 0x200;
      lVar23 = lVar23 + 0x20;
      iVar29 = uVar13 - uVar14 * uVar28;
      lVar1 = lVar33 + iVar29;
      uVar13 = iVar29 + 0x1000;
      plVar3[-3] = lVar1;
      puVar4[0xc] = 0x800;
      plVar5[0xc] = lVar1;
      uVar14 = 0;
      if (uVar28 != 0) {
        uVar14 = uVar13 / uVar28;
      }
      *(undefined2 *)(param_1 + lVar34) = 0x200;
      lVar34 = lVar34 + 0x20;
      iVar29 = uVar13 - uVar14 * uVar28;
      lVar1 = lVar33 + iVar29;
      uVar13 = iVar29 + 0x1000;
      plVar3[-2] = lVar1;
      puVar4[0xd] = 0x800;
      plVar5[0xd] = lVar1;
      uVar14 = 0;
      if (uVar28 != 0) {
        uVar14 = uVar13 / uVar28;
      }
      iVar29 = uVar13 - uVar14 * uVar28;
      *(undefined2 *)(param_1 + lVar41) = 0x200;
      lVar41 = lVar41 + 0x20;
      lVar1 = lVar33 + iVar29;
      uVar13 = iVar29 + 0x1000;
      plVar3[-1] = lVar1;
      puVar4[0xe] = 0x800;
      plVar5[0xe] = lVar1;
      uVar14 = 0;
      if (uVar28 != 0) {
        uVar14 = uVar13 / uVar28;
      }
      *(undefined2 *)(param_1 + lVar35) = 0x200;
      lVar35 = lVar35 + 0x20;
      iVar29 = uVar13 - uVar14 * uVar28;
      lVar1 = lVar33 + iVar29;
      uVar13 = iVar29 + 0x1000;
      *plVar3 = lVar1;
      uVar14 = 0;
      if (uVar28 != 0) {
        uVar14 = uVar13 / uVar28;
      }
      puVar4[0xf] = 0x800;
      plVar5[0xf] = lVar1;
      *(undefined2 *)(param_1 + lVar24) = 0x200;
      lVar24 = lVar24 + 0x20;
      iVar29 = uVar13 - uVar14 * uVar28;
    } while (lVar39 != 0);
    lVar20 = 0x30686;
    lVar31 = 0;
    lVar38 = 0;
    lVar37 = 0x3821d0;
    lVar21 = 0x37e1d0;
    lVar36 = 0x2c698;
    lVar25 = 0x28698;
    lVar32 = param_1 + 0x20680;
    lVar18 = 0x31686;
    lVar19 = 0x3761d0;
    lVar22 = 0x3861be;
    do {
      lVar23 = lVar32 + lVar31;
      ((undefined8 *)(param_1 + lVar19))[0x800] = 7;
      *(undefined8 *)(param_1 + lVar19) = 7;
      puVar4 = (undefined2 *)(param_1 + lVar22);
      lVar31 = lVar31 + 0x20;
      *(undefined8 *)(param_1 + lVar37) = 7;
      lVar22 = lVar22 + 0x20;
      *(undefined8 *)(param_1 + lVar21) = 7;
      lVar21 = lVar21 + 0x80;
      puVar4[0x800] = 0x200;
      lVar19 = lVar19 + 0x80;
      lVar37 = lVar37 + 0x80;
      *puVar4 = 0x200;
      lVar34 = lVar32 + lVar38;
      *(undefined8 *)(lVar34 + 0x18) = 7;
      *(undefined8 *)(lVar32 + lVar38) = 7;
      lVar38 = lVar38 + 0x80;
      *(undefined8 *)(param_1 + lVar25) = 7;
      lVar25 = lVar25 + 0x80;
      *(undefined8 *)(lVar34 + 0x8000) = 7;
      *(undefined2 *)(param_1 + lVar20) = 0x200;
      lVar20 = lVar20 + 0x20;
      *(undefined2 *)(lVar23 + 0x10000) = 0x200;
      *(undefined8 *)(lVar34 + 0x4018) = 7;
      *(undefined8 *)(lVar34 + 0x4000) = 7;
      *(undefined8 *)(param_1 + lVar36) = 7;
      lVar36 = lVar36 + 0x80;
      *(undefined8 *)(lVar34 + 0xc000) = 7;
      *(undefined2 *)(param_1 + lVar18) = 0x200;
      lVar18 = lVar18 + 0x20;
      *(undefined2 *)(lVar23 + 0x11000) = 0x200;
    } while (lVar38 != 0x2000);
    local_70 = 0x2a680;
    local_80 = 0x2a698;
    local_78 = 0x2a690;
    lVar24 = 0x2a6f8;
    local_90 = 0x2a6a8;
    local_88 = 0x2a6a0;
    local_b8 = 0x2a6b8;
    local_b0 = 0x2a688;
    lVar27 = 4;
    local_a0 = 0x2a6c0;
    local_98 = 0x2a6b0;
    local_c0 = 0x2a6c8;
    local_c8 = 0x2a6d0;
    local_d0 = 0x2a6d8;
    local_e0 = 0x2a6e8;
    local_d8 = 0x2a6e0;
    local_e8 = 0x2a6f0;
    lVar32 = 0x30e80;
    lVar31 = 0x30e82;
    lVar22 = 0x30e84;
    lVar21 = 0x30e86;
    lVar19 = 0x30e88;
    lVar37 = 0x30e8a;
    lVar38 = 0x30e8c;
    local_f8 = 0x30e9a;
    local_f0 = 0x30e98;
    lVar25 = 0x30e8e;
    lVar20 = 0x30e90;
    lVar36 = 0x30e92;
    lVar18 = 0x30e94;
    lVar23 = 0x30e96;
    lVar34 = 0x30e9e;
    lVar41 = 0x3869b8;
    local_108 = 0x3781b8;
    local_100 = 0x30e9c;
    local_110 = 0x380230;
    lVar35 = 0x22680;
    do {
      puVar6 = (undefined8 *)(param_1 + lVar35);
      puVar7 = (undefined8 *)(param_1 + local_108);
      puVar4 = (undefined2 *)(param_1 + lVar41);
      puVar8 = (undefined8 *)(param_1 + local_110);
      *puVar7 = 8;
      puVar8[-0xf] = 8;
      local_108 = local_108 + 0x80;
      local_110 = local_110 + 0x80;
      *puVar4 = 0x800;
      *puVar6 = 8;
      *(undefined8 *)(param_1 + local_70) = 8;
      *(undefined2 *)(param_1 + lVar32) = 0x400;
      puVar7[1] = 8;
      puVar8[-0xe] = 8;
      puVar4[1] = 0x800;
      puVar6[1] = 8;
      *(undefined8 *)(param_1 + local_b0) = 8;
      local_b0 = local_b0 + 0x80;
      *(undefined2 *)(param_1 + lVar31) = 0x400;
      puVar7[2] = 8;
      puVar8[-0xd] = 8;
      puVar4[2] = 0x800;
      puVar6[2] = 8;
      *(undefined8 *)(param_1 + local_78) = 8;
      *(undefined2 *)(param_1 + lVar22) = 0x400;
      puVar7[3] = 8;
      puVar8[-0xc] = 8;
      puVar4[3] = 0x800;
      puVar6[3] = 8;
      *(undefined8 *)(param_1 + local_80) = 8;
      *(undefined2 *)(param_1 + lVar21) = 0x400;
      puVar7[4] = 8;
      puVar8[-0xb] = 8;
      puVar4[4] = 0x800;
      puVar6[4] = 8;
      *(undefined8 *)(param_1 + local_88) = 8;
      *(undefined2 *)(param_1 + lVar19) = 0x400;
      puVar7[5] = 8;
      puVar8[-10] = 8;
      puVar4[5] = 0x800;
      puVar6[5] = 8;
      *(undefined8 *)(param_1 + local_90) = 8;
      *(undefined2 *)(param_1 + lVar37) = 0x400;
      puVar7[6] = 8;
      puVar8[-9] = 8;
      puVar4[6] = 0x800;
      puVar6[6] = 8;
      *(undefined8 *)(param_1 + local_98) = 8;
      *(undefined2 *)(param_1 + lVar38) = 0x400;
      puVar7[7] = 8;
      puVar8[-8] = 8;
      puVar4[7] = 0x800;
      puVar6[7] = 8;
      *(undefined8 *)(param_1 + local_b8) = 8;
      local_b8 = local_b8 + 0x80;
      *(undefined2 *)(param_1 + lVar25) = 0x400;
      puVar7[8] = 8;
      puVar8[-7] = 8;
      puVar4[8] = 0x800;
      puVar6[8] = 8;
      *(undefined8 *)(param_1 + local_a0) = 8;
      *(undefined2 *)(param_1 + lVar20) = 0x400;
      puVar7[9] = 8;
      puVar8[-6] = 8;
      puVar4[9] = 0x800;
      puVar6[9] = 8;
      *(undefined8 *)(param_1 + local_c0) = 8;
      local_c0 = local_c0 + 0x80;
      *(undefined2 *)(param_1 + lVar36) = 0x400;
      puVar7[10] = 8;
      puVar8[-5] = 8;
      puVar4[10] = 0x800;
      puVar6[10] = 8;
      *(undefined8 *)(param_1 + local_c8) = 8;
      local_c8 = local_c8 + 0x80;
      *(undefined2 *)(param_1 + lVar18) = 0x400;
      puVar7[0xb] = 8;
      puVar8[-4] = 8;
      puVar4[0xb] = 0x800;
      puVar6[0xb] = 8;
      *(undefined8 *)(param_1 + local_d0) = 8;
      local_d0 = local_d0 + 0x80;
      *(undefined2 *)(param_1 + lVar23) = 0x400;
      puVar7[0xc] = 8;
      puVar8[-3] = 8;
      puVar4[0xc] = 0x800;
      puVar6[0xc] = 8;
      *(undefined8 *)(param_1 + local_d8) = 8;
      local_d8 = local_d8 + 0x80;
      *(undefined2 *)(param_1 + local_f0) = 0x400;
      local_f0 = local_f0 + 0x20;
      puVar7[0xd] = 8;
      puVar8[-2] = 8;
      puVar4[0xd] = 0x800;
      puVar6[0xd] = 8;
      lVar36 = lVar36 + 0x20;
      *(undefined8 *)(param_1 + local_e0) = 8;
      local_e0 = local_e0 + 0x80;
      *(undefined2 *)(param_1 + local_f8) = 0x400;
      local_f8 = local_f8 + 0x20;
      puVar7[0xe] = 8;
      puVar8[-1] = 8;
      puVar4[0xe] = 0x800;
      puVar6[0xe] = 8;
      *(undefined8 *)(param_1 + local_e8) = 8;
      local_e8 = local_e8 + 0x80;
      lVar35 = lVar35 + 0x80;
      lVar32 = lVar32 + 0x20;
      lVar31 = lVar31 + 0x20;
      lVar22 = lVar22 + 0x20;
      lVar21 = lVar21 + 0x20;
      lVar19 = lVar19 + 0x20;
      lVar37 = lVar37 + 0x20;
      lVar38 = lVar38 + 0x20;
      lVar25 = lVar25 + 0x20;
      lVar20 = lVar20 + 0x20;
      lVar23 = lVar23 + 0x20;
      *(undefined2 *)(param_1 + local_100) = 0x400;
      local_100 = local_100 + 0x20;
      puVar7[0xf] = 8;
      *puVar8 = 8;
      puVar4[0xf] = 0x800;
      lVar41 = lVar41 + 0x20;
      puVar6[0xf] = 8;
      lVar27 = lVar27 + -1;
      *(undefined8 *)(param_1 + lVar24) = 8;
      lVar24 = lVar24 + 0x80;
      *(undefined2 *)(param_1 + lVar34) = 0x400;
      local_70 = local_70 + 0x80;
      lVar34 = lVar34 + 0x20;
      local_78 = local_78 + 0x80;
      local_80 = local_80 + 0x80;
      local_88 = local_88 + 0x80;
      local_90 = local_90 + 0x80;
      local_98 = local_98 + 0x80;
      local_a0 = local_a0 + 0x80;
      lVar18 = lVar18 + 0x20;
    } while (lVar27 != 0);
    lVar31 = 0;
    lVar32 = 0x31280;
    do {
      *(undefined8 *)(param_1 + 0x2b680 + lVar31) = 9;
      lVar22 = param_1 + 0x2b680 + lVar31;
      lVar31 = lVar31 + 0x80;
      puVar4 = (undefined2 *)(param_1 + lVar32);
      lVar32 = lVar32 + 0x20;
      *(undefined8 *)(lVar22 + -0x8000) = 9;
      *puVar4 = 0x400;
      *(undefined8 *)(lVar22 + -0x7ff8) = 9;
      *(undefined8 *)(lVar22 + 8) = 9;
      puVar4[1] = 0x400;
      *(undefined8 *)(lVar22 + 0x10) = 9;
      *(undefined8 *)(lVar22 + -0x7ff0) = 9;
      puVar4[2] = 0x400;
      *(undefined8 *)(lVar22 + -0x7fe8) = 9;
      *(undefined8 *)(lVar22 + 0x18) = 9;
      puVar4[3] = 0x400;
      *(undefined8 *)(lVar22 + -0x7fe0) = 9;
      *(undefined8 *)(lVar22 + 0x20) = 9;
      puVar4[4] = 0x400;
      *(undefined8 *)(lVar22 + 0x28) = 9;
      *(undefined8 *)(lVar22 + -0x7fd8) = 9;
      puVar4[5] = 0x400;
      *(undefined8 *)(lVar22 + -0x7fd0) = 9;
      *(undefined8 *)(lVar22 + 0x30) = 9;
      puVar4[6] = 0x400;
      *(undefined8 *)(lVar22 + -0x7fc8) = 9;
      *(undefined8 *)(lVar22 + 0x38) = 9;
      puVar4[7] = 0x400;
      *(undefined8 *)(lVar22 + 0x40) = 9;
      *(undefined8 *)(lVar22 + -0x7fc0) = 9;
      puVar4[8] = 0x400;
      *(undefined8 *)(lVar22 + -0x7fb8) = 9;
      *(undefined8 *)(lVar22 + 0x48) = 9;
      puVar4[9] = 0x400;
      *(undefined8 *)(lVar22 + -0x7fb0) = 9;
      *(undefined8 *)(lVar22 + 0x50) = 9;
      puVar4[10] = 0x400;
      *(undefined8 *)(lVar22 + 0x58) = 9;
      *(undefined8 *)(lVar22 + -0x7fa8) = 9;
      puVar4[0xb] = 0x400;
      *(undefined8 *)(lVar22 + -0x7fa0) = 9;
      *(undefined8 *)(lVar22 + 0x60) = 9;
      puVar4[0xc] = 0x400;
      *(undefined8 *)(lVar22 + -0x7f98) = 9;
      *(undefined8 *)(lVar22 + 0x68) = 9;
      puVar4[0xd] = 0x400;
      *(undefined8 *)(lVar22 + 0x70) = 9;
      *(undefined8 *)(lVar22 + -0x7f90) = 9;
      puVar4[0xe] = 0x400;
      *(undefined8 *)(lVar22 + -0x7f88) = 9;
      *(undefined8 *)(lVar22 + 0x78) = 9;
      puVar4[0xf] = 0x400;
    } while (lVar31 != 0x800);
    lVar41 = 0x3168c;
    lVar32 = 0x286b0;
    lVar31 = 0x286b8;
    lVar22 = 0x2c6b0;
    lVar21 = 0x2c6b8;
    lVar19 = 0x3068c;
    lVar37 = 0x3068e;
    lVar38 = 0x3168e;
    lVar25 = 0x3761e8;
    lVar20 = 0x37e1e8;
    lVar36 = 0x37e1f0;
    lVar18 = 0x3821f0;
    lVar23 = 0x3861c4;
    lVar35 = 0x40;
    lVar34 = 0x206b0;
    do {
      puVar6 = (undefined8 *)(param_1 + lVar25);
      puVar7 = (undefined8 *)(param_1 + lVar18);
      puVar6[0x800] = 10;
      puVar4 = (undefined2 *)(param_1 + lVar23);
      puVar8 = (undefined8 *)(param_1 + lVar34);
      *puVar6 = 10;
      puVar7[-1] = 10;
      lVar35 = lVar35 + -1;
      lVar34 = lVar34 + 0x80;
      *(undefined8 *)(param_1 + lVar20) = 10;
      lVar23 = lVar23 + 0x20;
      puVar4[0x800] = 0x800;
      lVar20 = lVar20 + 0x80;
      lVar25 = lVar25 + 0x80;
      *puVar4 = 0x800;
      lVar18 = lVar18 + 0x80;
      puVar8[0x800] = 10;
      *puVar8 = 10;
      *(undefined8 *)(param_1 + lVar22) = 10;
      lVar22 = lVar22 + 0x80;
      *(undefined8 *)(param_1 + lVar32) = 10;
      lVar32 = lVar32 + 0x80;
      *(undefined2 *)(param_1 + lVar41) = 0x400;
      lVar41 = lVar41 + 0x20;
      *(undefined2 *)(param_1 + lVar19) = 0x400;
      lVar19 = lVar19 + 0x20;
      puVar6[0x801] = 10;
      puVar6[1] = 10;
      *puVar7 = 10;
      *(undefined8 *)(param_1 + lVar36) = 10;
      lVar36 = lVar36 + 0x80;
      puVar4[0x801] = 0x800;
      puVar4[1] = 0x800;
      puVar8[0x801] = 10;
      puVar8[1] = 10;
      *(undefined8 *)(param_1 + lVar21) = 10;
      lVar21 = lVar21 + 0x80;
      *(undefined8 *)(param_1 + lVar31) = 10;
      lVar31 = lVar31 + 0x80;
      *(undefined2 *)(param_1 + lVar38) = 0x400;
      lVar38 = lVar38 + 0x20;
      *(undefined2 *)(param_1 + lVar37) = 0x400;
      lVar37 = lVar37 + 0x20;
    } while (lVar35 != 0);
    FUN_03f5ce40(param_1);
  }
LAB_03f5e5bc:
  *(undefined8 *)(param_1 + 0x34e100) = param_4;
  *(undefined8 *)(param_1 + 0x346d8) = param_6;
  memcpy((void *)(param_1 + 0x3cbd38),&DAT_041eb604,0x200);
  return 0;
}

