
void FUN_001c45c0(long param_1,uint param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  char cVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  uint *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined1 uVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined *puVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  undefined8 *puVar22;
  long *plVar23;
  ulong uVar24;
  ulong *puVar25;
  ulong *puVar26;
  long *plVar27;
  long *plVar28;
  ulong uVar29;
  long *plVar30;
  ulong *puVar31;
  undefined4 uVar32;
  ulong uVar33;
  undefined2 uVar34;
  ulong uVar35;
  ulong uVar36;
  uint uVar37;
  uint uVar38;
  undefined1 auVar39 [16];
  undefined8 uStack_140;
  undefined2 auStack_134 [2];
  undefined *puStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  long lStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  long *plStack_d8;
  ulong *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  code *pcStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  long lStack_80;
  long *plStack_78;
  undefined1 local_6c [4];
  undefined8 local_68;
  
  uVar38 = param_2 & 0xffff;
  uVar36 = (ulong)uVar38;
  plVar28 = (long *)(param_1 + 200);
  lVar12 = *plVar28;
  uVar33 = (ulong)(uVar38 + 1);
  *(short *)(param_1 + 0x180) = (short)param_2;
  uVar35 = uVar33 * 8;
  if ((ulong)(*(long *)(param_1 + 0xd8) - lVar12 >> 3) < uVar33) {
    lVar19 = *(long *)(param_1 + 0xd0);
    lVar5 = FUN_00187df4(uVar35);
    puVar10 = (undefined8 *)(lVar5 + (lVar19 - lVar12));
    puVar8 = *(undefined8 **)(param_1 + 200);
    puVar6 = *(undefined8 **)(param_1 + 0xd0);
    puVar22 = puVar10;
    if (puVar6 != puVar8) {
      do {
        puVar6 = puVar6 + -1;
        puVar22 = puVar22 + -1;
        *puVar22 = *puVar6;
      } while (puVar6 != puVar8);
      puVar6 = (undefined8 *)*plVar28;
    }
    *(undefined8 **)(param_1 + 200) = puVar22;
    *(undefined8 **)(param_1 + 0xd0) = puVar10;
    *(ulong *)(param_1 + 0xd8) = lVar5 + uVar35;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_00187e4c();
    }
  }
  plVar30 = (long *)(param_1 + 0xe0);
  lVar12 = *plVar30;
  if ((ulong)(*(long *)(param_1 + 0xf0) - lVar12 >> 3) < uVar33) {
    lVar19 = *(long *)(param_1 + 0xe8);
    lVar5 = FUN_00187df4(uVar35);
    puVar10 = (undefined8 *)(lVar5 + (lVar19 - lVar12));
    puVar8 = *(undefined8 **)(param_1 + 0xe0);
    puVar6 = *(undefined8 **)(param_1 + 0xe8);
    puVar22 = puVar10;
    if (puVar6 != puVar8) {
      do {
        puVar6 = puVar6 + -1;
        puVar22 = puVar22 + -1;
        *puVar22 = *puVar6;
      } while (puVar6 != puVar8);
      puVar6 = (undefined8 *)*plVar30;
    }
    *(undefined8 **)(param_1 + 0xe0) = puVar22;
    *(undefined8 **)(param_1 + 0xe8) = puVar10;
    *(ulong *)(param_1 + 0xf0) = lVar5 + uVar35;
    if (puVar6 != (undefined8 *)0x0) {
      FUN_00187e4c();
    }
  }
  puVar10 = (undefined8 *)0x0;
  FUN_001c4a10(param_1 + 0x200,uVar33);
  local_68 = 0;
  uVar20 = *(long *)(param_1 + 0x1c0) - *(long *)(param_1 + 0x1b8) >> 3;
  if (uVar33 < uVar20 || uVar33 - uVar20 == 0) {
    if (uVar33 < uVar20) {
      *(ulong *)(param_1 + 0x1c0) = *(long *)(param_1 + 0x1b8) + uVar33 * 8;
    }
  }
  else {
    puVar10 = &local_68;
    FUN_001deef0(param_1 + 0x1b8,uVar33 - uVar20);
  }
  local_6c[0] = 1;
  uVar20 = *(long *)(param_1 + 0x1d8) - *(long *)(param_1 + 0x1d0);
  if (uVar33 < uVar20 || uVar33 - uVar20 == 0) {
    if (uVar33 < uVar20) {
      *(ulong *)(param_1 + 0x1d8) = *(long *)(param_1 + 0x1d0) + uVar33;
    }
  }
  else {
    puVar10 = (undefined8 *)local_6c;
    FUN_001df0d0(param_1 + 0x1d0,uVar33 - uVar20);
  }
  (**(code **)(**(long **)(param_1 + 0x328) + 0x50))(*(long **)(param_1 + 0x328),param_2);
  puVar2 = PTR_DAT_04bcbb78;
  puVar18 = PTR_DAT_04bcb908;
  uVar33 = 0;
  while( true ) {
    lVar12 = FUN_00185a6c(0x30);
    if (lVar12 != 0) {
      FUN_001c3bc4(lVar12);
    }
    uVar11 = (undefined1)param_5;
    plVar21 = *(long **)(param_1 + 0xd0);
    if (*(long **)(param_1 + 0xd8) <= plVar21) break;
    *plVar21 = lVar12;
    *(long **)(param_1 + 0xd0) = plVar21 + 1;
LAB_001c485c:
    lVar12 = FUN_00185a6c(0x68);
    if (lVar12 != 0) {
      uVar37 = *(uint *)(*(long *)(param_1 + 8) + 8);
      if (*puVar18 == '\0') {
LAB_001c48c0:
        uVar35 = (ulong)*(ushort *)(puVar2 + (ulong)uVar37 * 0x2a8 + 0xd8);
        uVar37 = *(uint *)(*(long *)(param_1 + 8) + 8);
        if (*puVar18 == '\0') goto LAB_001c4910;
LAB_001c48dc:
        puVar7 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
        if (*puVar7 == 0) goto LAB_001c4910;
        puVar13 = (undefined *)
                  (*(long *)(puVar2 + (ulong)uVar37 * 0x2a8 + 0x10) + (ulong)*puVar7 * 0x148);
      }
      else {
        puVar7 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
        if (*puVar7 == 0) goto LAB_001c48c0;
        uVar35 = (ulong)*(ushort *)
                         (*(long *)(puVar2 + (ulong)uVar37 * 0x2a8 + 0x10) + (ulong)*puVar7 * 0x148
                         + 0xc0);
        uVar37 = *(uint *)(*(long *)(param_1 + 8) + 8);
        if (*puVar18 != '\0') goto LAB_001c48dc;
LAB_001c4910:
        puVar13 = puVar2 + (ulong)uVar37 * 0x2a8 + 0x18;
      }
      puVar10 = *(undefined8 **)(puVar13 + 200);
      FUN_001d658c(lVar12,uVar35);
    }
    uVar11 = (undefined1)param_5;
    plVar21 = *(long **)(param_1 + 0xe8);
    if (plVar21 < *(long **)(param_1 + 0xf0)) {
      *plVar21 = lVar12;
      *(long **)(param_1 + 0xe8) = plVar21 + 1;
    }
    else {
      lVar5 = (long)plVar21 - *plVar30 >> 3;
      uVar20 = lVar5 + 1;
      if (uVar20 >> 0x3d != 0) goto LAB_001c4a08;
      uVar14 = (long)*(long **)(param_1 + 0xf0) - *plVar30;
      uVar35 = (long)uVar14 >> 2;
      if (uVar35 <= uVar20) {
        uVar35 = uVar20;
      }
      if (0x7ffffffffffffff7 < uVar14) {
        uVar35 = 0x1fffffffffffffff;
      }
      if (uVar35 == 0) {
        lVar19 = 0;
        plVar21 = (long *)(lVar5 * 8);
        plVar23 = plVar21 + 1;
        *plVar21 = lVar12;
        plVar27 = *(long **)(param_1 + 0xe0);
        plVar15 = *(long **)(param_1 + 0xe8);
        if (plVar15 != plVar27) goto LAB_001c49b0;
      }
      else {
        lVar19 = FUN_00187df4(uVar35 << 3);
        plVar21 = (long *)(lVar19 + lVar5 * 8);
        plVar23 = plVar21 + 1;
        *plVar21 = lVar12;
        plVar27 = *(long **)(param_1 + 0xe0);
        plVar15 = *(long **)(param_1 + 0xe8);
        if (plVar15 != plVar27) {
LAB_001c49b0:
          do {
            plVar15 = plVar15 + -1;
            plVar21 = plVar21 + -1;
            *plVar21 = *plVar15;
          } while (plVar15 != plVar27);
          plVar15 = (long *)*plVar30;
        }
      }
      *(long **)(param_1 + 0xe0) = plVar21;
      *(long **)(param_1 + 0xe8) = plVar23;
      *(ulong *)(param_1 + 0xf0) = lVar19 + uVar35 * 8;
      if (plVar15 != (long *)0x0) {
        FUN_00187e4c(plVar15);
      }
    }
    uVar37 = (uint)uVar33;
    uVar33 = (ulong)(uVar37 + 1);
    if (uVar37 == uVar38) {
      return;
    }
  }
  lVar5 = (long)plVar21 - *plVar28 >> 3;
  uVar20 = lVar5 + 1;
  if (uVar20 >> 0x3d == 0) {
    uVar14 = (long)*(long **)(param_1 + 0xd8) - *plVar28;
    uVar35 = (long)uVar14 >> 2;
    if (uVar35 <= uVar20) {
      uVar35 = uVar20;
    }
    if (0x7ffffffffffffff7 < uVar14) {
      uVar35 = 0x1fffffffffffffff;
    }
    if (uVar35 == 0) {
      lVar19 = 0;
      plVar21 = (long *)(lVar5 * 8);
      plVar23 = plVar21 + 1;
      *plVar21 = lVar12;
      plVar27 = *(long **)(param_1 + 200);
      plVar15 = *(long **)(param_1 + 0xd0);
      if (plVar15 != plVar27) goto LAB_001c4830;
    }
    else {
      lVar19 = FUN_00187df4(uVar35 << 3);
      plVar21 = (long *)(lVar19 + lVar5 * 8);
      plVar23 = plVar21 + 1;
      *plVar21 = lVar12;
      plVar27 = *(long **)(param_1 + 200);
      plVar15 = *(long **)(param_1 + 0xd0);
      if (plVar15 != plVar27) {
LAB_001c4830:
        do {
          plVar15 = plVar15 + -1;
          plVar21 = plVar21 + -1;
          *plVar21 = *plVar15;
        } while (plVar15 != plVar27);
        plVar15 = (long *)*plVar28;
      }
    }
    *(long **)(param_1 + 200) = plVar21;
    *(long **)(param_1 + 0xd0) = plVar23;
    *(ulong *)(param_1 + 0xd8) = lVar19 + uVar35 * 8;
    if (plVar15 != (long *)0x0) {
      FUN_00187e4c(plVar15);
    }
    goto LAB_001c485c;
  }
  FUN_001deda4(plVar28);
LAB_001c4a08:
  auVar39 = FUN_001dedb4(plVar30);
  uVar14 = auVar39._8_8_;
  plVar21 = auVar39._0_8_;
  pcStack_b0 = FUN_001c4a10;
  uVar16 = plVar21[1];
  uVar20 = uVar14 - uVar16;
  if (uVar14 < uVar16 || uVar20 == 0) {
    plVar21[1] = uVar14;
    return;
  }
  uVar29 = (ulong)puVar10 & 0xffffffff;
  uVar24 = plVar21[2] * 0x40;
  if (uVar20 <= uVar24 && uVar16 <= uVar24 - uVar20) {
    uVar35 = (ulong)((uint)uVar16 & 0x3f);
    plVar21[1] = uVar14;
    puVar26 = (ulong *)(*plVar21 + (uVar16 >> 6) * 8);
LAB_001c4b60:
    if (uVar20 != 0) {
      iVar4 = (int)uVar35;
      if (((ulong)puVar10 & 1) == 0) {
        puVar31 = puVar26;
        if (iVar4 != 0) {
          uVar36 = (ulong)(0x40 - iVar4);
          uVar33 = uVar36;
          if (uVar20 <= uVar36) {
            uVar33 = uVar20;
          }
          uVar20 = uVar20 - uVar33;
          puVar31 = puVar26 + 1;
          *puVar26 = *puVar26 &
                     (0xffffffffffffffffU >> (uVar36 - uVar33 & 0x3f) & -1L << uVar35 ^
                     0xffffffffffffffff);
        }
        uVar35 = uVar20 >> 6;
        if (0x3f < uVar20) {
          uVar33 = uVar20 >> 6 & 3;
          uVar36 = uVar35;
          puVar26 = puVar31;
          if (uVar33 != 0) {
            uVar36 = uVar35 & 0x3fffffffffffffc;
            puVar25 = puVar31;
            do {
              uVar33 = uVar33 - 1;
              puVar26 = puVar25 + 1;
              *puVar25 = 0;
              puVar25 = puVar26;
            } while (uVar33 != 0);
          }
          if (2 < uVar35 - 1) {
            do {
              *puVar26 = 0;
              puVar26[1] = 0;
              uVar36 = uVar36 - 4;
              puVar26[2] = 0;
              puVar26[3] = 0;
              puVar26 = puVar26 + 4;
            } while (uVar36 != 0);
          }
        }
        if ((uVar20 & 0x3f) != 0) {
          puVar31[uVar35] =
               puVar31[uVar35] &
               (0xffffffffffffffffU >> (-(uVar20 & 0x3f) & 0x3f) ^ 0xffffffffffffffff);
          return;
        }
      }
      else {
        puVar31 = puVar26;
        if (iVar4 != 0) {
          uVar36 = (ulong)(0x40 - iVar4);
          uVar33 = uVar36;
          if (uVar20 <= uVar36) {
            uVar33 = uVar20;
          }
          uVar20 = uVar20 - uVar33;
          puVar31 = puVar26 + 1;
          *puVar26 = *puVar26 | 0xffffffffffffffffU >> (uVar36 - uVar33 & 0x3f) & -1L << uVar35;
        }
        uVar35 = uVar20 >> 6;
        if (0x3f < uVar20) {
          uVar33 = uVar20 >> 6 & 3;
          uVar36 = uVar35;
          puVar26 = puVar31;
          if (uVar33 != 0) {
            uVar36 = uVar35 & 0x3fffffffffffffc;
            puVar25 = puVar31;
            do {
              uVar33 = uVar33 - 1;
              puVar26 = puVar25 + 1;
              *puVar25 = 0xffffffffffffffff;
              puVar25 = puVar26;
            } while (uVar33 != 0);
          }
          if (2 < uVar35 - 1) {
            do {
              *puVar26 = 0xffffffffffffffff;
              puVar26[1] = 0xffffffffffffffff;
              uVar36 = uVar36 - 4;
              puVar26[2] = 0xffffffffffffffff;
              puVar26[3] = 0xffffffffffffffff;
              puVar26 = puVar26 + 4;
            } while (uVar36 != 0);
          }
        }
        if ((uVar20 & 0x3f) != 0) {
          puVar31[uVar35] = puVar31[uVar35] | 0xffffffffffffffffU >> (-(uVar20 & 0x3f) & 0x3f);
          return;
        }
      }
    }
    return;
  }
  puStack_c8 = (ulong *)0x0;
  lStack_c0 = 0;
  lStack_b8 = 0;
  uStack_a8 = uVar36;
  uStack_a0 = uVar35;
  lStack_98 = lVar12;
  lStack_90 = lVar5;
  plStack_88 = plVar30;
  lStack_80 = param_1;
  plStack_78 = plVar28;
  if (-1 < (long)uVar14) {
    if (uVar24 < 0x3fffffffffffffff) {
      uVar35 = plVar21[2] * 0x80;
      uVar33 = uVar14 + 0x3f & 0xffffffffffffffc0;
      if (uVar35 <= uVar33) {
        uVar35 = uVar33;
      }
    }
    else {
      uVar35 = 0x7fffffffffffffff;
    }
    FUN_001dedd0(&puStack_c8,uVar35);
    puVar26 = puStack_c8;
    puVar31 = (ulong *)*plVar21;
    uVar35 = plVar21[1];
    lStack_c0 = uVar35 + uVar20;
    if ((long)uVar35 < 1) {
      uVar35 = 0;
    }
    else {
      uVar33 = uVar35 >> 6;
      if (0x3f < uVar35) {
        memmove(puStack_c8,puVar31,uVar33 << 3);
      }
      puVar26 = puVar26 + uVar33;
      uVar35 = uVar35 & 0x3f;
      if (uVar35 == 0) {
        uVar35 = 0;
      }
      else {
        uVar36 = 0xffffffffffffffff >> (-uVar35 & 0x3f);
        *puVar26 = *puVar26 & (uVar36 ^ 0xffffffffffffffff) | puVar31[uVar33] & uVar36;
      }
      puVar31 = (ulong *)*plVar21;
    }
    lVar12 = plVar21[1];
    lVar5 = plVar21[2];
    *plVar21 = (long)puStack_c8;
    plVar21[1] = lStack_c0;
    plVar21[2] = lStack_b8;
    if (puVar31 != (ulong *)0x0) {
      puStack_c8 = puVar31;
      lStack_c0 = lVar12;
      lStack_b8 = lVar5;
      FUN_00187e4c(puVar31);
    }
    goto LAB_001c4b60;
  }
  auVar39 = FUN_001deed8(plVar21);
  plVar30 = auVar39._0_8_;
  puStack_130 = puVar18;
  pcStack_128 = FUN_001c4d1c;
  puStack_120 = puVar2;
  uStack_118 = 0x2a8;
  *plVar30 = (long)(PTR_DAT_04bcc310 + 0x10);
  uStack_110 = uVar33;
  uStack_108 = uVar36;
  uStack_100 = uVar35;
  uStack_f8 = uVar20;
  lStack_f0 = lVar5;
  plStack_e8 = plVar21;
  uStack_e0 = uVar29;
  plStack_d8 = plVar28;
  FUN_001b8358(plVar30 + 2,puVar10);
  *(undefined4 *)(plVar30 + 0x11) = 0;
  *(undefined1 *)(plVar30 + 0x16) = 0;
  plVar30[0x17] = 0;
  plVar30[0x10] = 0;
  *(undefined4 *)(plVar30 + 0x12) = 0;
  plVar30[0x13] = 0;
  plVar30[0x14] = 0;
  puVar18 = PTR_DAT_04bcc678 + 0x10;
  *(undefined2 *)(plVar30 + 0x18) = 0;
  plVar30[0x1b] = 0;
  plVar30[0x19] = 0;
  plVar30[0x1a] = 0;
  *plVar30 = (long)puVar18;
  plVar30[1] = auVar39._8_8_;
  puVar8 = (undefined8 *)FUN_00187df4(8);
  plVar30[0x19] = (long)puVar8;
  plVar30[0x1b] = (long)(puVar8 + 1);
  *puVar8 = 0;
  plVar30[0x1a] = (long)(puVar8 + 1);
  plVar30[0x1e] = 0;
  plVar30[0x1c] = 0;
  plVar30[0x1d] = 0;
  puVar8 = (undefined8 *)FUN_00187df4(8);
  plVar30[0x1c] = (long)puVar8;
  plVar30[0x1e] = (long)(puVar8 + 1);
  uVar38 = *(uint *)(auVar39._8_8_ + 8);
  *puVar8 = 0;
  plVar30[0x1d] = (long)(puVar8 + 1);
  puVar18 = PTR_DAT_04bcbb78;
  puVar13 = PTR_DAT_04bcb910;
  puVar2 = PTR_DAT_04bcb908;
  if (*PTR_DAT_04bcb908 == '\0') {
LAB_001c4e2c:
    puVar17 = puVar18 + (ulong)uVar38 * 0x2a8 + 0x18;
  }
  else {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    if (*puVar7 == 0) goto LAB_001c4e2c;
    puVar17 = (undefined *)
              (*(long *)(puVar18 + (ulong)uVar38 * 0x2a8 + 0x10) + (ulong)*puVar7 * 0x148);
  }
  FUN_001d6548(plVar30 + 0x24,*(undefined4 *)(puVar17 + 0xdc));
  puVar17 = PTR_DAT_04bcc320;
  plVar30[0x27] = 0;
  plVar30[0x28] = 0;
  puVar17 = puVar17 + 0x10;
  *(undefined2 *)(plVar30 + 0x2a) = 0;
  *(undefined2 *)(plVar30 + 0x2c) = 0;
  *(undefined2 *)(plVar30 + 0x2f) = 0;
  plVar30[0x33] = 0;
  plVar30[0x29] = (long)puVar17;
  plVar30[0x2b] = (long)puVar17;
  plVar30[0x2e] = (long)puVar17;
  plVar30[0x36] = 0;
  plVar30[0x37] = 0;
  plVar30[0x38] = 0;
  plVar30[0x39] = 0;
  puVar8 = (undefined8 *)FUN_00187df4(8);
  plVar30[0x37] = (long)puVar8;
  plVar30[0x39] = (long)(puVar8 + 1);
  *puVar8 = 0;
  plVar30[0x38] = (long)(puVar8 + 1);
  plVar30[0x3c] = 0;
  plVar30[0x3a] = 0;
  plVar30[0x3b] = 0;
  puVar9 = (undefined1 *)FUN_00187df4(1);
  plVar30[0x3a] = (long)puVar9;
  plVar30[0x3c] = (long)(puVar9 + 1);
  *puVar9 = 0;
  plVar30[0x3b] = (long)(puVar9 + 1);
  *(undefined1 *)(plVar30 + 0x3f) = 0;
  plVar30[0x40] = 0;
  plVar30[0x41] = 0;
  plVar30[0x42] = 0;
  puVar8 = (undefined8 *)FUN_00187df4(8);
  plVar30[0x42] = 1;
  plVar30[0x40] = (long)puVar8;
  plVar30[0x41] = 1;
  *puVar8 = 0;
  FUN_0018a200(plVar30 + 0x43,&DAT_04094803,1000,&DAT_0407ebb1);
  *(undefined4 *)(plVar30 + 0x62) = 0;
  puVar17 = PTR_DAT_04bcc680;
  plVar30[0x60] = 0;
  plVar30[0x5f] = 0;
  plVar30[0x61] = 0;
  plVar30[0x5e] = (long)(puVar17 + 0x10);
  FUN_001a6f1c(plVar30 + 0x67);
  plVar30[0x95] = 0;
  plVar30[0x96] = (long)(plVar30 + 0x97);
  plVar30[0x97] = 0;
  plVar30[0x98] = 0;
  *(undefined4 *)((long)plVar30 + 0x114) = 0;
  (**(code **)(*plVar30 + 0xa0))(plVar30);
  *(undefined1 *)(plVar30 + 0x66) = 0;
  lVar12 = FUN_00185a6c(0x30);
  if (lVar12 != 0) {
    FUN_001c3bc4(lVar12);
  }
  *(long *)plVar30[0x19] = lVar12;
  lVar12 = FUN_00185a6c(0x68);
  if (lVar12 != 0) {
    uVar38 = *(uint *)(plVar30[1] + 8);
    if (*puVar2 == '\0') {
LAB_001c4fd0:
      uVar34 = *(undefined2 *)(puVar18 + (ulong)uVar38 * 0x2a8 + 0xd8);
      uVar38 = *(uint *)(plVar30[1] + 8);
      if (*puVar2 == '\0') goto LAB_001c5014;
LAB_001c4ff0:
      puVar7 = (uint *)FUN_03876070(*(undefined8 *)puVar13);
      if (*puVar7 == 0) goto LAB_001c5014;
      puVar17 = (undefined *)
                (*(long *)(puVar18 + (ulong)uVar38 * 0x2a8 + 0x10) + (ulong)*puVar7 * 0x148);
    }
    else {
      puVar7 = (uint *)FUN_03876070(*(undefined8 *)puVar13);
      if (*puVar7 == 0) goto LAB_001c4fd0;
      uVar34 = *(undefined2 *)
                (*(long *)(puVar18 + (ulong)uVar38 * 0x2a8 + 0x10) + (ulong)*puVar7 * 0x148 + 0xc0);
      uVar38 = *(uint *)(plVar30[1] + 8);
      if (*puVar2 != '\0') goto LAB_001c4ff0;
LAB_001c5014:
      puVar17 = puVar18 + (ulong)uVar38 * 0x2a8 + 0x18;
    }
    FUN_001d658c(lVar12,uVar34,*(undefined8 *)(puVar17 + 200));
  }
  *(undefined2 *)(plVar30 + 0x2a) = 0;
  *(undefined2 *)(plVar30 + 0x2c) = 0;
  *(undefined2 *)(plVar30 + 0x2f) = 0;
  *(undefined2 *)(plVar30 + 0x30) = 0;
  *(undefined4 *)((long)plVar30 + 0x11c) = 0;
  *(undefined1 *)((long)plVar30 + 0x1eb) = uVar11;
  *(long *)plVar30[0x1c] = lVar12;
  plVar30[0x2d] = param_4;
  plVar30[0x1f] = 0;
  iVar4 = FUN_001b8fa0(puVar10,&DAT_0410a6c4,0xffffffff);
  if (iVar4 == -1) {
    uVar38 = *(uint *)(plVar30[1] + 8);
    if (*puVar2 == '\0') {
LAB_001c50e4:
      iVar4 = *(int *)(puVar18 + (ulong)uVar38 * 0x2a8 + 0x158);
      uVar32 = *(undefined4 *)(plVar30[1] + 8);
    }
    else {
      puVar7 = (uint *)FUN_03876070(*(undefined8 *)puVar13);
      if (*puVar7 == 0) goto LAB_001c50e4;
      iVar4 = *(int *)(*(long *)(puVar18 + (ulong)uVar38 * 0x2a8 + 0x10) + (ulong)*puVar7 * 0x148 +
                      0x140);
      uVar32 = *(undefined4 *)(plVar30[1] + 8);
    }
    if (iVar4 == 0) goto LAB_001c5100;
LAB_001c5084:
    plVar28 = (long *)FUN_00185a6c(0x18);
    if (plVar28 != (long *)0x0) {
      FUN_001d5ed4(plVar28,uVar32);
    }
  }
  else {
    uVar32 = *(undefined4 *)(plVar30[1] + 8);
    if (iVar4 != 0) goto LAB_001c5084;
LAB_001c5100:
    plVar28 = (long *)FUN_00185a6c(0x118);
    if (plVar28 != (long *)0x0) {
      FUN_001d5acc(plVar28,uVar32);
    }
  }
  lVar12 = *plVar28;
  plVar30[100] = (long)plVar28;
  auStack_134[0] = 0;
  (**(code **)(lVar12 + 0x10))(plVar28,(long)plVar30 + 0x1ec,auStack_134);
  lVar12 = FUN_00185a6c(0x238);
  FUN_001d8a50(lVar12,plVar30,0,0x40,0,0);
  uVar32 = *(undefined4 *)((long)plVar30 + 0x1ec);
  plVar30[0x20] = lVar12;
  *(undefined1 *)(lVar12 + 0x40) = uVar11;
  *(int *)(lVar12 + 0x1e8) = iVar4;
  *(undefined4 *)(lVar12 + 0xd0) = uVar32;
  *(undefined1 *)(lVar12 + 0xa3) = (undefined1)auStack_134[0];
  *(undefined8 *)plVar30[0x37] = 0;
  *(undefined1 *)plVar30[0x3a] = 1;
  puVar17 = PTR_DAT_04bcc688;
  if (*puVar2 == '\0') {
LAB_001c51e0:
    if (puVar17[0x18] == '\0') goto LAB_001c51c0;
LAB_001c51ec:
    if (*puVar2 == '\0') {
LAB_001c5220:
      cVar3 = puVar17[0x18] + '\x01';
      if (*puVar2 == '\0') goto LAB_001c5298;
LAB_001c5234:
      puVar7 = (uint *)FUN_03876070(*(undefined8 *)puVar13);
      uVar38 = *puVar7;
      goto joined_r0x001c5240;
    }
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)puVar13);
    if (*puVar7 == 0) goto LAB_001c5220;
    cVar3 = *(char *)(*(long *)(puVar17 + 0x10) + (ulong)*puVar7) + '\x01';
    if (*puVar2 != '\0') goto LAB_001c5234;
LAB_001c5298:
    puVar17[0x18] = cVar3;
    if (*puVar2 == '\0') goto LAB_001c52e8;
LAB_001c52a4:
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)puVar13);
    if (*puVar7 == 0) goto LAB_001c52e8;
    if (*(char *)(*(long *)(puVar17 + 0x10) + (ulong)*puVar7) != '\0') goto LAB_001c52c4;
LAB_001c52f4:
    if (*puVar2 == '\0') {
LAB_001c5328:
      cVar3 = puVar17[0x18];
      cVar1 = *puVar2;
    }
    else {
      puVar7 = (uint *)FUN_03876070(*(undefined8 *)puVar13);
      if (*puVar7 == 0) goto LAB_001c5328;
      cVar3 = *(char *)(*(long *)(puVar17 + 0x10) + (ulong)*puVar7);
      cVar1 = *puVar2;
    }
    if (cVar1 != '\0') {
      puVar7 = (uint *)FUN_03876070(*(undefined8 *)puVar13);
      if (*puVar7 != 0) {
        *(char *)(*(long *)(puVar17 + 0x10) + (ulong)*puVar7) = cVar3 + '\x01';
        cVar3 = *puVar2;
        goto joined_r0x001c5358;
      }
    }
    puVar17[0x18] = cVar3 + '\x01';
    if (*puVar2 == '\0') goto LAB_001c536c;
LAB_001c52cc:
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)puVar13);
    if (*puVar7 == 0) goto LAB_001c536c;
    puVar9 = (undefined1 *)(*(long *)(puVar17 + 0x10) + (ulong)*puVar7);
  }
  else {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)puVar13);
    if (*puVar7 == 0) goto LAB_001c51e0;
    if (*(char *)(*(long *)(puVar17 + 0x10) + (ulong)*puVar7) != '\0') goto LAB_001c51ec;
LAB_001c51c0:
    if (*PTR_DAT_04bcbca8 == '\0') {
      FUN_0018cb8c(&uStack_140);
    }
    else {
      FUN_0018c9b0(&uStack_140,0);
    }
    *(undefined8 *)PTR_DAT_04bcbcb0 = uStack_140;
    cVar3 = FUN_00189e50(0xff);
    cVar3 = cVar3 + (char)uStack_140;
    if (*puVar2 == '\0') goto LAB_001c5298;
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)puVar13);
    uVar38 = *puVar7;
joined_r0x001c5240:
    if (uVar38 == 0) goto LAB_001c5298;
    *(char *)(*(long *)(puVar17 + 0x10) + (ulong)uVar38) = cVar3;
    if (*puVar2 != '\0') goto LAB_001c52a4;
LAB_001c52e8:
    if (puVar17[0x18] == '\0') goto LAB_001c52f4;
LAB_001c52c4:
    cVar3 = *puVar2;
joined_r0x001c5358:
    if (cVar3 != '\0') goto LAB_001c52cc;
LAB_001c536c:
    puVar9 = puVar17 + 0x18;
  }
  uVar11 = *puVar9;
  *(undefined1 *)(plVar30 + 0x3d) = 0;
  *(undefined1 *)((long)plVar30 + 0x1ea) = 0;
  plVar30[0x3e] = 0;
  *(undefined1 *)(plVar30 + 0x21) = 0;
  *(undefined1 *)((long)plVar30 + 0x1e9) = uVar11;
  uVar38 = *(uint *)(plVar30[1] + 8);
  if (*puVar2 == '\0') {
LAB_001c53d4:
    *(undefined4 *)((long)plVar30 + 0x10c) = *(undefined4 *)(puVar18 + (ulong)uVar38 * 0x2a8 + 0xd0)
    ;
    uVar38 = *(uint *)(plVar30[1] + 8);
    cVar3 = *puVar2;
  }
  else {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)puVar13);
    if (*puVar7 == 0) goto LAB_001c53d4;
    *(undefined4 *)((long)plVar30 + 0x10c) =
         *(undefined4 *)
          (*(long *)(puVar18 + (ulong)uVar38 * 0x2a8 + 0x10) + (ulong)*puVar7 * 0x148 + 0xb8);
    uVar38 = *(uint *)(plVar30[1] + 8);
    cVar3 = *puVar2;
  }
  if (cVar3 != '\0') {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)puVar13);
    if (*puVar7 != 0) {
      puVar18 = (undefined *)
                (*(long *)(puVar18 + (ulong)uVar38 * 0x2a8 + 0x10) + (ulong)*puVar7 * 0x148);
      goto LAB_001c5428;
    }
  }
  puVar18 = puVar18 + (ulong)uVar38 * 0x2a8 + 0x18;
LAB_001c5428:
  *(undefined4 *)(plVar30 + 0x22) = *(undefined4 *)(puVar18 + 0xb0);
  puVar18 = PTR_DAT_04bcb900;
  plVar28 = (long *)(PTR_DAT_04bcb900 + 0x18);
  if (*puVar2 != '\0') {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)puVar13);
    uVar38 = *puVar7;
    if (uVar38 != 0) {
      lVar12 = **(long **)(puVar18 + 0xa0);
      if ((ulong)((*(long **)(puVar18 + 0xa0))[1] - lVar12 >> 3) <= (ulong)uVar38) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar28 = (long *)(*(long *)(lVar12 + (ulong)uVar38 * 8) + 0x10);
    }
  }
  plVar21 = (long *)(*(long *)(*plVar28 + 0x10) + 0x1b0);
  if (1 < iVar4 - 1U) {
    plVar21 = (long *)(*(long *)(*plVar28 + 0x10) + 0x1a8);
  }
  plVar30[99] = *plVar21;
  lVar12 = (**(code **)(*(long *)plVar30[100] + 0x20))();
  plVar30[0x65] = lVar12;
  (**(code **)(*plVar30 + 0x10))(plVar30);
  return;
}

