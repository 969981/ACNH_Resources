
void FUN_03ad06c0(float param_1,float param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float __x;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float local_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float local_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float local_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float local_d0 [6];
  undefined1 *local_b8;
  float local_b0;
  undefined8 local_ac;
  float local_a4;
  float local_a0 [6];
  undefined1 *local_88;
  float local_80;
  undefined8 local_7c;
  float local_74;
  
  local_d0[0] = -1.0;
  local_d0[1] = -1.0;
  local_d0[3] = 1.0;
  local_d0[4] = -1.0;
  local_b8 = &DAT_3f8000003f800000;
  local_ac = 0x3f800000bf800000;
  local_a0[0] = -1.0;
  local_a0[1] = -1.0;
  local_a0[3] = 1.0;
  local_a0[4] = -1.0;
  local_88 = &DAT_3f8000003f800000;
  local_7c = 0x3f800000bf800000;
  local_d0[2] = (*(float *)(param_5 + 0x2c) - param_1 * *(float *)(param_5 + 0x28)) /
                (*(float *)(param_5 + 0x3c) - param_1 * *(float *)(param_5 + 0x38));
  local_a0[2] = (*(float *)(param_5 + 0x2c) - param_2 * *(float *)(param_5 + 0x28)) /
                (*(float *)(param_5 + 0x3c) - param_2 * *(float *)(param_5 + 0x38));
  local_d0[5] = local_d0[2];
  local_b0 = local_d0[2];
  local_a4 = local_d0[2];
  local_a0[5] = local_a0[2];
  local_80 = local_a0[2];
  local_74 = local_a0[2];
  FUN_038e6ab4(&local_110,param_5);
  FUN_007535b4(&local_140,param_4);
  lVar2 = 0;
  do {
    fVar27 = *(float *)((long)local_d0 + lVar2);
    fVar30 = *(float *)((long)local_d0 + lVar2 + 4);
    fVar33 = *(float *)((long)local_d0 + lVar2 + 8);
    fVar12 = *(float *)((long)local_a0 + lVar2 + 8);
    fVar10 = *(float *)((long)local_a0 + lVar2);
    fVar11 = *(float *)((long)local_a0 + lVar2 + 4);
    lVar1 = param_3 + lVar2;
    lVar2 = lVar2 + 0xc;
    fVar36 = fStack_d4 + fStack_dc * fVar30 + fVar27 * local_e0 + fVar33 * local_d8;
    fVar42 = fStack_d4 + fStack_dc * fVar11 + fVar10 * local_e0 + fVar12 * local_d8;
    *(float *)(lVar1 + 0x4c) =
         fStack_104 / fVar36 +
         fVar30 * (fStack_10c / fVar36) + fVar27 * (local_110 / fVar36) +
         fVar33 * (local_108 / fVar36);
    *(float *)(lVar1 + 0x50) =
         fStack_f4 / fVar36 +
         fVar30 * (fStack_fc / fVar36) + fVar27 * (local_100 / fVar36) +
         fVar33 * (local_f8 / fVar36);
    *(float *)(lVar1 + 0x54) =
         fStack_e4 / fVar36 +
         fVar30 * (fStack_ec / fVar36) + fVar27 * (local_f0 / fVar36) + fVar33 * (local_e8 / fVar36)
    ;
    *(float *)(lVar1 + 0x7c) =
         fStack_104 / fVar42 +
         fVar11 * (fStack_10c / fVar42) + fVar10 * (local_110 / fVar42) +
         fVar12 * (local_108 / fVar42);
    *(float *)(lVar1 + 0x80) =
         fStack_f4 / fVar42 +
         fVar11 * (fStack_fc / fVar42) + fVar10 * (local_100 / fVar42) +
         fVar12 * (local_f8 / fVar42);
    *(float *)(lVar1 + 0x84) =
         fStack_e4 / fVar42 +
         fVar11 * (fStack_ec / fVar42) + fVar10 * (local_f0 / fVar42) + fVar12 * (local_e8 / fVar42)
    ;
  } while (lVar2 != 0x30);
  fVar33 = *(float *)(param_3 + 0x4c);
  fVar36 = *(float *)(param_3 + 0x50);
  *(undefined4 *)(param_3 + 0xac) = 0;
  fVar30 = *(float *)(param_3 + 0x5c);
  fVar27 = *(float *)(param_3 + 0x60);
  fVar42 = *(float *)(param_3 + 0x54);
  fVar12 = *(float *)(param_3 + 0x58);
  fVar11 = (fVar36 - fVar30) * (fVar36 - fVar30) + (fVar33 - fVar12) * (fVar33 - fVar12) +
           (fVar42 - fVar27) * (fVar42 - fVar27);
  fVar10 = 0.0;
  if (0.0 < fVar11) {
    *(float *)(param_3 + 0xac) = fVar11;
    fVar10 = fVar11;
  }
  fVar25 = *(float *)(param_3 + 100);
  fVar26 = *(float *)(param_3 + 0x68);
  fVar28 = *(float *)(param_3 + 0x6c);
  fVar11 = (fVar36 - fVar26) * (fVar36 - fVar26) + (fVar33 - fVar25) * (fVar33 - fVar25) +
           (fVar42 - fVar28) * (fVar42 - fVar28);
  if (fVar10 < fVar11) {
    *(float *)(param_3 + 0xac) = fVar11;
    fVar10 = fVar11;
  }
  fVar9 = *(float *)(param_3 + 0x70);
  fVar15 = *(float *)(param_3 + 0x74);
  fVar16 = *(float *)(param_3 + 0x78);
  fVar11 = (fVar36 - fVar15) * (fVar36 - fVar15) + (fVar33 - fVar9) * (fVar33 - fVar9) +
           (fVar42 - fVar16) * (fVar42 - fVar16);
  if (fVar10 < fVar11) {
    *(float *)(param_3 + 0xac) = fVar11;
    fVar10 = fVar11;
  }
  fVar11 = *(float *)(param_3 + 0x7c);
  fVar4 = *(float *)(param_3 + 0x80);
  fVar5 = *(float *)(param_3 + 0x84);
  fVar3 = (fVar36 - fVar4) * (fVar36 - fVar4) + (fVar33 - fVar11) * (fVar33 - fVar11) +
          (fVar42 - fVar5) * (fVar42 - fVar5);
  if (fVar10 < fVar3) {
    *(float *)(param_3 + 0xac) = fVar3;
    fVar10 = fVar3;
  }
  fVar6 = *(float *)(param_3 + 0x88);
  fVar7 = *(float *)(param_3 + 0x8c);
  fVar3 = *(float *)(param_3 + 0x90);
  fVar17 = (fVar36 - fVar7) * (fVar36 - fVar7) + (fVar33 - fVar6) * (fVar33 - fVar6) +
           (fVar42 - fVar3) * (fVar42 - fVar3);
  if (fVar10 < fVar17) {
    *(float *)(param_3 + 0xac) = fVar17;
    fVar10 = fVar17;
  }
  fVar13 = *(float *)(param_3 + 0x94);
  fVar17 = *(float *)(param_3 + 0x98);
  fVar46 = *(float *)(param_3 + 0x9c);
  fVar37 = (fVar36 - fVar17) * (fVar36 - fVar17) + (fVar33 - fVar13) * (fVar33 - fVar13) +
           (fVar42 - fVar46) * (fVar42 - fVar46);
  if (fVar10 < fVar37) {
    *(float *)(param_3 + 0xac) = fVar37;
    fVar10 = fVar37;
  }
  fVar38 = *(float *)(param_3 + 0xa0);
  fVar40 = *(float *)(param_3 + 0xa4);
  fVar43 = *(float *)(param_3 + 0xa8);
  fVar24 = (fVar36 - fVar40) * (fVar36 - fVar40) + (fVar33 - fVar38) * (fVar33 - fVar38) +
           (fVar42 - fVar43) * (fVar42 - fVar43);
  fVar42 = (fVar30 - fVar26) * (fVar30 - fVar26) + (fVar12 - fVar25) * (fVar12 - fVar25) +
           (fVar27 - fVar28) * (fVar27 - fVar28);
  fVar33 = (fVar30 - fVar15) * (fVar30 - fVar15) + (fVar12 - fVar9) * (fVar12 - fVar9) +
           (fVar27 - fVar16) * (fVar27 - fVar16);
  fVar36 = (fVar30 - fVar4) * (fVar30 - fVar4) + (fVar12 - fVar11) * (fVar12 - fVar11) +
           (fVar27 - fVar5) * (fVar27 - fVar5);
  fVar37 = (fVar30 - fVar7) * (fVar30 - fVar7) + (fVar12 - fVar6) * (fVar12 - fVar6) +
           (fVar27 - fVar3) * (fVar27 - fVar3);
  fVar20 = (fVar30 - fVar17) * (fVar30 - fVar17) + (fVar12 - fVar13) * (fVar12 - fVar13) +
           (fVar27 - fVar46) * (fVar27 - fVar46);
  fVar30 = (fVar30 - fVar40) * (fVar30 - fVar40) + (fVar12 - fVar38) * (fVar12 - fVar38) +
           (fVar27 - fVar43) * (fVar27 - fVar43);
  fVar27 = (fVar26 - fVar15) * (fVar26 - fVar15) + (fVar25 - fVar9) * (fVar25 - fVar9) +
           (fVar28 - fVar16) * (fVar28 - fVar16);
  fVar18 = (fVar26 - fVar4) * (fVar26 - fVar4) + (fVar25 - fVar11) * (fVar25 - fVar11) +
           (fVar28 - fVar5) * (fVar28 - fVar5);
  fVar45 = (fVar26 - fVar7) * (fVar26 - fVar7) + (fVar25 - fVar6) * (fVar25 - fVar6) +
           (fVar28 - fVar3) * (fVar28 - fVar3);
  fVar31 = (fVar26 - fVar17) * (fVar26 - fVar17) + (fVar25 - fVar13) * (fVar25 - fVar13) +
           (fVar28 - fVar46) * (fVar28 - fVar46);
  fVar34 = (fVar26 - fVar40) * (fVar26 - fVar40) + (fVar25 - fVar38) * (fVar25 - fVar38) +
           (fVar28 - fVar43) * (fVar28 - fVar43);
  fVar29 = (fVar15 - fVar4) * (fVar15 - fVar4) + (fVar9 - fVar11) * (fVar9 - fVar11) +
           (fVar16 - fVar5) * (fVar16 - fVar5);
  fVar26 = (fVar15 - fVar7) * (fVar15 - fVar7) + (fVar9 - fVar6) * (fVar9 - fVar6) +
           (fVar16 - fVar3) * (fVar16 - fVar3);
  fVar21 = (fVar15 - fVar40) * (fVar15 - fVar40) + (fVar9 - fVar38) * (fVar9 - fVar38) +
           (fVar16 - fVar43) * (fVar16 - fVar43);
  fVar28 = (fVar15 - fVar17) * (fVar15 - fVar17) + (fVar9 - fVar13) * (fVar9 - fVar13) +
           (fVar16 - fVar46) * (fVar16 - fVar46);
  fVar9 = (fVar4 - fVar7) * (fVar4 - fVar7) + (fVar11 - fVar6) * (fVar11 - fVar6) +
          (fVar5 - fVar3) * (fVar5 - fVar3);
  fVar12 = (fVar4 - fVar40) * (fVar4 - fVar40) + (fVar11 - fVar38) * (fVar11 - fVar38) +
           (fVar5 - fVar43) * (fVar5 - fVar43);
  fVar25 = (fVar4 - fVar17) * (fVar4 - fVar17) + (fVar11 - fVar13) * (fVar11 - fVar13) +
           (fVar5 - fVar46) * (fVar5 - fVar46);
  fVar11 = fVar24;
  if (fVar24 <= fVar10) {
    fVar11 = fVar10;
  }
  fVar15 = fVar42;
  if (fVar42 <= fVar11) {
    fVar15 = fVar11;
  }
  fVar16 = fVar33;
  if (fVar33 <= fVar15) {
    fVar16 = fVar15;
  }
  fVar5 = (fVar7 - fVar17) * (fVar7 - fVar17) + (fVar6 - fVar13) * (fVar6 - fVar13) +
          (fVar3 - fVar46) * (fVar3 - fVar46);
  fVar4 = fVar36;
  if (fVar36 <= fVar16) {
    fVar4 = fVar16;
  }
  fVar6 = (fVar7 - fVar40) * (fVar7 - fVar40) + (fVar6 - fVar38) * (fVar6 - fVar38) +
          (fVar3 - fVar43) * (fVar3 - fVar43);
  fVar3 = fVar37;
  if (fVar37 <= fVar4) {
    fVar3 = fVar4;
  }
  fVar17 = (fVar17 - fVar40) * (fVar17 - fVar40) + (fVar13 - fVar38) * (fVar13 - fVar38) +
           (fVar46 - fVar43) * (fVar46 - fVar43);
  fVar7 = fVar20;
  if (fVar20 <= fVar3) {
    fVar7 = fVar3;
  }
  fVar13 = fVar30;
  if (fVar30 <= fVar7) {
    fVar13 = fVar7;
  }
  fVar46 = fVar27;
  if (fVar27 <= fVar13) {
    fVar46 = fVar13;
  }
  fVar38 = fVar18;
  if (fVar18 <= fVar46) {
    fVar38 = fVar46;
  }
  fVar40 = fVar45;
  if (fVar45 <= fVar38) {
    fVar40 = fVar38;
  }
  fVar43 = fVar31;
  if (fVar31 <= fVar40) {
    fVar43 = fVar40;
  }
  fVar35 = fVar34;
  if (fVar34 <= fVar43) {
    fVar35 = fVar43;
  }
  fVar32 = fVar29;
  if (fVar29 <= fVar35) {
    fVar32 = fVar35;
  }
  fVar14 = fVar26;
  if (fVar26 <= fVar32) {
    fVar14 = fVar32;
  }
  fVar44 = fVar28;
  if (fVar28 <= fVar14) {
    fVar44 = fVar14;
  }
  fVar41 = fVar21;
  if (fVar21 <= fVar44) {
    fVar41 = fVar44;
  }
  fVar39 = fVar9;
  if (fVar9 <= fVar41) {
    fVar39 = fVar41;
  }
  fVar23 = fVar25;
  if (fVar25 <= fVar39) {
    fVar23 = fVar39;
  }
  fVar22 = fVar12;
  if (fVar12 <= fVar23) {
    fVar22 = fVar23;
  }
  fVar19 = fVar5;
  if (fVar5 <= fVar22) {
    fVar19 = fVar22;
  }
  fVar8 = fVar6;
  if (fVar6 <= fVar19) {
    fVar8 = fVar19;
  }
  __x = fVar17;
  if (fVar17 <= fVar8) {
    __x = fVar8;
  }
  if (((((((fVar10 < fVar24) || (fVar11 < fVar42)) || (fVar15 < fVar33)) ||
        (((fVar16 < fVar36 || (fVar4 < fVar37)) ||
         ((fVar3 < fVar20 || ((fVar7 < fVar30 || (fVar13 < fVar27)))))))) ||
       ((fVar46 < fVar18 || (((fVar38 < fVar45 || (fVar40 < fVar31)) || (fVar43 < fVar34)))))) ||
      (((fVar35 < fVar29 || (fVar32 < fVar26)) ||
       (((fVar14 < fVar28 || ((fVar44 < fVar21 || (fVar41 < fVar9)))) || (fVar39 < fVar25)))))) ||
     ((((fVar23 < fVar12 || (fVar22 < fVar5)) || (fVar19 < fVar6)) || (fVar8 < fVar17)))) {
    *(float *)(param_3 + 0xac) = __x;
  }
  if (0.0 < __x) {
    fVar10 = SQRT(__x);
    if (NAN(fVar10)) {
      fVar10 = sqrtf(__x);
    }
    *(float *)(param_3 + 0xac) = fVar10;
  }
  fVar10 = *(float *)(param_3 + 0x4c);
  fVar11 = *(float *)(param_3 + 0x50);
  fVar27 = *(float *)(param_3 + 0x7c);
  fVar30 = *(float *)(param_3 + 0x80);
  fVar42 = *(float *)(param_3 + 0x54);
  fVar12 = *(float *)(param_3 + 0x58);
  fVar33 = *(float *)(param_3 + 0x5c);
  fVar26 = *(float *)(param_3 + 0x60);
  fVar25 = *(float *)(param_3 + 0x84);
  fVar9 = *(float *)(param_3 + 0x88);
  *(float *)(param_3 + 0x4c) =
       fStack_134 + fStack_13c * fVar11 + fVar10 * local_140 + fVar42 * local_138;
  *(float *)(param_3 + 0x50) =
       fStack_124 + fStack_12c * fVar11 + fVar10 * local_130 + fVar42 * local_128;
  fVar36 = *(float *)(param_3 + 0x8c);
  fVar28 = *(float *)(param_3 + 0x90);
  *(float *)(param_3 + 0x7c) =
       fStack_134 + fStack_13c * fVar30 + fVar27 * local_140 + fVar25 * local_138;
  *(float *)(param_3 + 0x80) =
       fStack_124 + fStack_12c * fVar30 + fVar27 * local_130 + fVar25 * local_128;
  *(float *)(param_3 + 0x54) =
       fStack_114 + fStack_11c * fVar11 + fVar10 * local_120 + fVar42 * local_118;
  *(float *)(param_3 + 0x58) =
       fStack_134 + fStack_13c * fVar33 + fVar12 * local_140 + fVar26 * local_138;
  *(float *)(param_3 + 0x5c) =
       fStack_124 + fStack_12c * fVar33 + fVar12 * local_130 + fVar26 * local_128;
  *(float *)(param_3 + 0x60) =
       fStack_114 + fStack_11c * fVar33 + fVar12 * local_120 + fVar26 * local_118;
  *(float *)(param_3 + 0x84) =
       fStack_114 + fStack_11c * fVar30 + fVar27 * local_120 + fVar25 * local_118;
  *(float *)(param_3 + 0x88) =
       fStack_134 + fStack_13c * fVar36 + fVar9 * local_140 + fVar28 * local_138;
  fVar33 = *(float *)(param_3 + 0x6c);
  fVar42 = *(float *)(param_3 + 0x70);
  *(float *)(param_3 + 0x8c) =
       fStack_124 + fStack_12c * fVar36 + fVar9 * local_130 + fVar28 * local_128;
  *(float *)(param_3 + 0x90) =
       fStack_114 + fStack_11c * fVar36 + fVar9 * local_120 + fVar28 * local_118;
  fVar10 = *(float *)(param_3 + 100);
  fVar11 = *(float *)(param_3 + 0x68);
  *(float *)(param_3 + 100) =
       fStack_134 + fStack_13c * fVar11 + fVar10 * local_140 + fVar33 * local_138;
  *(float *)(param_3 + 0x68) =
       fStack_124 + fStack_12c * fVar11 + fVar10 * local_130 + fVar33 * local_128;
  fVar12 = *(float *)(param_3 + 0x94);
  fVar27 = *(float *)(param_3 + 0x98);
  fVar25 = *(float *)(param_3 + 0x9c);
  fVar26 = *(float *)(param_3 + 0xa0);
  *(float *)(param_3 + 0x94) =
       fStack_134 + fStack_13c * fVar27 + fVar12 * local_140 + fVar25 * local_138;
  *(float *)(param_3 + 0x98) =
       fStack_124 + fStack_12c * fVar27 + fVar12 * local_130 + fVar25 * local_128;
  fVar30 = *(float *)(param_3 + 0x74);
  fVar36 = *(float *)(param_3 + 0x78);
  *(float *)(param_3 + 0x6c) =
       fStack_114 + fStack_11c * fVar11 + fVar10 * local_120 + fVar33 * local_118;
  *(float *)(param_3 + 0x70) =
       fStack_134 + fStack_13c * fVar30 + fVar42 * local_140 + fVar36 * local_138;
  *(float *)(param_3 + 0x74) =
       fStack_124 + fStack_12c * fVar30 + fVar42 * local_130 + fVar36 * local_128;
  *(float *)(param_3 + 0x78) =
       fStack_114 + fStack_11c * fVar30 + fVar42 * local_120 + fVar36 * local_118;
  fVar10 = *(float *)(param_3 + 0xa4);
  fVar11 = *(float *)(param_3 + 0xa8);
  *(float *)(param_3 + 0x9c) =
       fStack_114 + fStack_11c * fVar27 + fVar12 * local_120 + fVar25 * local_118;
  *(float *)(param_3 + 0xa0) =
       fStack_134 + fStack_13c * fVar10 + fVar26 * local_140 + fVar11 * local_138;
  *(float *)(param_3 + 0xa4) =
       fStack_124 + fStack_12c * fVar10 + fVar26 * local_130 + fVar11 * local_128;
  *(float *)(param_3 + 0xa8) =
       fStack_114 + fStack_11c * fVar10 + fVar26 * local_120 + fVar11 * local_118;
  FUN_03acff50(param_3);
  return;
}

