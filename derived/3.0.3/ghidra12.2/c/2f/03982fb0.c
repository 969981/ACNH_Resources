
/* WARNING: Type propagation algorithm not settling */

void FUN_03982fb0(undefined4 param_1,undefined4 param_2,float param_3,undefined4 param_4,
                 long param_5,undefined8 *param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
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
  
  uVar9 = *param_6;
  *(undefined8 *)(param_5 + 0x68) = param_6[1];
  *(undefined8 *)(param_5 + 0x60) = uVar9;
  uVar9 = param_6[2];
  *(undefined8 *)(param_5 + 0x78) = param_6[3];
  *(undefined8 *)(param_5 + 0x70) = uVar9;
  uVar9 = param_6[4];
  *(undefined8 *)(param_5 + 0x88) = param_6[5];
  *(undefined8 *)(param_5 + 0x80) = uVar9;
  uVar10 = param_6[7];
  uVar9 = param_6[6];
  *(undefined4 *)(param_5 + 0xe0) = param_1;
  *(undefined4 *)(param_5 + 0xe4) = param_2;
  *(float *)(param_5 + 0xe8) = param_3;
  *(undefined4 *)(param_5 + 0xec) = param_4;
  *(undefined8 *)(param_5 + 0x98) = uVar10;
  *(undefined8 *)(param_5 + 0x90) = uVar9;
  *(undefined4 *)(param_5 + 0xfc) = *param_7;
  uVar1 = param_7[1];
  *(bool *)(param_5 + 0x234) = 0.0 < param_3;
  *(undefined4 *)(param_5 + 0x100) = uVar1;
  FUN_038e6ab4(param_5 + 0xa0,(undefined8 *)(param_5 + 0x60));
  fVar38 = *(float *)(param_5 + 0xd0);
  fVar39 = *(float *)(param_5 + 0xd4);
  fVar33 = *(float *)(param_5 + 0xb0);
  fVar34 = *(float *)(param_5 + 0xb4);
  fVar16 = *(float *)(param_5 + 0xd8);
  fVar22 = *(float *)(param_5 + 0xdc);
  fVar31 = *(float *)(param_5 + 0xa0);
  fVar32 = *(float *)(param_5 + 0xa4);
  fVar35 = *(float *)(param_5 + 0xc0);
  fVar36 = *(float *)(param_5 + 0xc4);
  fVar2 = *(float *)(param_5 + 0xa8);
  fVar3 = *(float *)(param_5 + 0xac);
  fVar5 = *(float *)(param_5 + 0xb8);
  fVar6 = *(float *)(param_5 + 0xbc);
  fVar11 = *(float *)(param_5 + 200);
  fVar13 = *(float *)(param_5 + 0xcc);
  fVar25 = 1.0 / (fVar22 + ((fVar39 - fVar38) - fVar16));
  fVar7 = (fVar6 + ((fVar34 - fVar33) - fVar5)) * fVar25;
  *(float *)(param_5 + 0x158) = (fVar13 + ((fVar36 - fVar35) - fVar11)) * fVar25;
  fVar20 = 1.0 / (fVar22 + ((-fVar39 - fVar38) - fVar16));
  fVar26 = (fVar6 + ((-fVar34 - fVar33) - fVar5)) * fVar20;
  *(float *)(param_5 + 0x14c) = (fVar13 + ((-fVar36 - fVar35) - fVar11)) * fVar20;
  *(float *)(param_5 + 0x150) = (fVar3 + ((fVar32 - fVar31) - fVar2)) * fVar25;
  fVar28 = 1.0 / (fVar22 + ((fVar38 + fVar39) - fVar16));
  fVar25 = 1.0 / (fVar22 + fVar16 + fVar38 + fVar39);
  *(float *)(param_5 + 0x164) = (fVar13 + ((fVar35 + fVar36) - fVar11)) * fVar28;
  *(float *)(param_5 + 0x15c) = (fVar3 + ((fVar31 + fVar32) - fVar2)) * fVar28;
  *(float *)(param_5 + 0x160) = (fVar6 + ((fVar33 + fVar34) - fVar5)) * fVar28;
  fVar28 = 1.0 / (fVar22 + ((fVar38 - fVar39) - fVar16));
  *(float *)(param_5 + 0x168) = (fVar3 + ((fVar31 - fVar32) - fVar2)) * fVar28;
  *(float *)(param_5 + 0x16c) = (fVar6 + ((fVar33 - fVar34) - fVar5)) * fVar28;
  *(float *)(param_5 + 0x170) = (fVar13 + ((fVar35 - fVar36) - fVar11)) * fVar28;
  fVar28 = 1.0 / (fVar22 + fVar16 + (fVar39 - fVar38));
  *(float *)(param_5 + 0x180) = (fVar3 + fVar2 + (fVar32 - fVar31)) * fVar28;
  *(float *)(param_5 + 0x184) = (fVar6 + fVar5 + (fVar34 - fVar33)) * fVar28;
  *(float *)(param_5 + 0x188) = (fVar13 + fVar11 + (fVar36 - fVar35)) * fVar28;
  *(float *)(param_5 + 0x194) = (fVar13 + fVar11 + fVar35 + fVar36) * fVar25;
  *(float *)(param_5 + 0x18c) = (fVar3 + fVar2 + fVar31 + fVar32) * fVar25;
  *(float *)(param_5 + 400) = (fVar6 + fVar5 + fVar33 + fVar34) * fVar25;
  fVar28 = 1.0 / (fVar22 + fVar16 + (fVar38 - fVar39));
  *(float *)(param_5 + 0x198) = (fVar3 + fVar2 + (fVar31 - fVar32)) * fVar28;
  fVar25 = 1.0 / (fVar22 + fVar16 + (-fVar39 - fVar38));
  *(float *)(param_5 + 0x19c) = (fVar6 + fVar5 + (fVar33 - fVar34)) * fVar28;
  *(float *)(param_5 + 0x1a0) = (fVar13 + fVar11 + (fVar35 - fVar36)) * fVar28;
  fVar28 = (fVar3 + fVar2 + (-fVar32 - fVar31)) * fVar25;
  fVar5 = (fVar6 + fVar5 + (-fVar34 - fVar33)) * fVar25;
  fVar25 = (fVar13 + fVar11 + (-fVar36 - fVar35)) * fVar25;
  *(float *)(param_5 + 0x144) = (fVar3 + ((-fVar32 - fVar31) - fVar2)) * fVar20;
  *(float *)(param_5 + 0x148) = fVar26;
  *(float *)(param_5 + 0x154) = fVar7;
  *(float *)(param_5 + 0x174) = fVar28;
  *(float *)(param_5 + 0x178) = fVar5;
  *(float *)(param_5 + 0x17c) = fVar25;
  if (*(char *)(param_5 + 0x234) == '\0') {
    fVar2 = fVar7 - fVar26;
    fVar3 = 1.0;
    *(float *)(param_5 + 0xf0) = fVar2;
  }
  else {
    fVar2 = tanf(*(float *)(param_5 + 0xe8));
    *(float *)(param_5 + 0xf0) = fVar2;
    fVar2 = tanf(*(float *)(param_5 + 0xe8) * 0.5);
    fVar28 = *(float *)(param_5 + 0x174);
    fVar3 = 1.0 / fVar2;
    fVar26 = *(float *)(param_5 + 0x148);
    fVar5 = *(float *)(param_5 + 0x178);
    fVar25 = *(float *)(param_5 + 0x17c);
    fVar7 = *(float *)(param_5 + 0x154);
  }
  fVar16 = *(float *)(param_5 + 0x144);
  *(float *)(param_5 + 0xf4) = fVar2;
  *(float *)(param_5 + 0xf8) = fVar3;
  fVar6 = *(float *)(param_5 + 0x14c);
  fVar3 = *(float *)(param_5 + 0x150);
  fVar20 = *(float *)(param_5 + 0x158);
  fVar11 = -((fVar6 - fVar25) * (fVar7 - fVar5)) + (fVar20 - fVar25) * (fVar26 - fVar5);
  fVar13 = -((fVar16 - fVar28) * (fVar20 - fVar25)) + (fVar3 - fVar28) * (fVar6 - fVar25);
  fVar7 = -((fVar26 - fVar5) * (fVar3 - fVar28)) + (fVar7 - fVar5) * (fVar16 - fVar28);
  *(float *)(param_5 + 0x104) = fVar11;
  *(float *)(param_5 + 0x108) = fVar13;
  *(float *)(param_5 + 0x10c) = fVar7;
  fVar2 = SQRT(fVar13 * fVar13 + fVar11 * fVar11 + fVar7 * fVar7);
  if (0.0 < fVar2) {
    fVar2 = 1.0 / fVar2;
    fVar11 = fVar11 * fVar2;
    fVar13 = fVar13 * fVar2;
    fVar7 = fVar7 * fVar2;
    *(float *)(param_5 + 0x104) = fVar11;
    *(float *)(param_5 + 0x108) = fVar13;
    *(float *)(param_5 + 0x10c) = fVar7;
  }
  fVar33 = *(float *)(param_5 + 0x180);
  fVar31 = *(float *)(param_5 + 0x154);
  fVar36 = *(float *)(param_5 + 0x184);
  fVar22 = *(float *)(param_5 + 0x188);
  fVar26 = *(float *)(param_5 + 0x15c);
  fVar39 = *(float *)(param_5 + 0x160);
  fVar38 = *(float *)(param_5 + 0x164);
  fVar35 = -((fVar20 - fVar22) * (fVar39 - fVar36)) + (fVar38 - fVar22) * (fVar31 - fVar36);
  fVar32 = -((fVar3 - fVar33) * (fVar38 - fVar22)) + (fVar26 - fVar33) * (fVar20 - fVar22);
  fVar34 = -((fVar31 - fVar36) * (fVar26 - fVar33)) + (fVar39 - fVar36) * (fVar3 - fVar33);
  *(float *)(param_5 + 0x11c) = fVar35;
  *(float *)(param_5 + 0x120) = fVar32;
  *(float *)(param_5 + 0x124) = fVar34;
  fVar2 = SQRT(fVar32 * fVar32 + fVar35 * fVar35 + fVar34 * fVar34);
  if (0.0 < fVar2) {
    fVar2 = 1.0 / fVar2;
    fVar35 = fVar35 * fVar2;
    fVar32 = fVar32 * fVar2;
    fVar34 = fVar34 * fVar2;
    *(float *)(param_5 + 0x11c) = fVar35;
    *(float *)(param_5 + 0x120) = fVar32;
    *(float *)(param_5 + 0x124) = fVar34;
  }
  fVar23 = *(float *)(param_5 + 0x18c);
  fVar17 = *(float *)(param_5 + 400);
  fVar30 = *(float *)(param_5 + 0x194);
  fVar40 = *(float *)(param_5 + 0x168);
  fVar37 = *(float *)(param_5 + 0x16c);
  fVar14 = *(float *)(param_5 + 0x170);
  fVar15 = -((fVar38 - fVar30) * (fVar37 - fVar17)) + (fVar14 - fVar30) * (fVar39 - fVar17);
  fVar27 = -((fVar26 - fVar23) * (fVar14 - fVar30)) + (fVar40 - fVar23) * (fVar38 - fVar30);
  fVar21 = -((fVar39 - fVar17) * (fVar40 - fVar23)) + (fVar37 - fVar17) * (fVar26 - fVar23);
  *(float *)(param_5 + 0x110) = fVar15;
  *(float *)(param_5 + 0x114) = fVar27;
  *(float *)(param_5 + 0x118) = fVar21;
  fVar2 = SQRT(fVar27 * fVar27 + fVar15 * fVar15 + fVar21 * fVar21);
  if (0.0 < fVar2) {
    fVar2 = 1.0 / fVar2;
    fVar15 = fVar15 * fVar2;
    fVar27 = fVar27 * fVar2;
    fVar21 = fVar21 * fVar2;
    *(float *)(param_5 + 0x110) = fVar15;
    *(float *)(param_5 + 0x114) = fVar27;
    *(float *)(param_5 + 0x118) = fVar21;
  }
  fVar18 = *(float *)(param_5 + 0x198);
  fVar4 = *(float *)(param_5 + 0x19c);
  fVar24 = *(float *)(param_5 + 0x1a0);
  fVar19 = *(float *)(param_5 + 0x148);
  fVar29 = -((fVar14 - fVar24) * (fVar19 - fVar4)) + (fVar6 - fVar24) * (fVar37 - fVar4);
  fVar8 = -((fVar40 - fVar18) * (fVar6 - fVar24)) + (fVar16 - fVar18) * (fVar14 - fVar24);
  fVar2 = -((fVar37 - fVar4) * (fVar16 - fVar18)) + (fVar19 - fVar4) * (fVar40 - fVar18);
  *(float *)(param_5 + 0x128) = fVar29;
  *(float *)(param_5 + 300) = fVar8;
  *(float *)(param_5 + 0x130) = fVar2;
  fVar12 = SQRT(fVar8 * fVar8 + fVar29 * fVar29 + fVar2 * fVar2);
  if (0.0 < fVar12) {
    fVar12 = 1.0 / fVar12;
    fVar29 = fVar29 * fVar12;
    fVar8 = fVar8 * fVar12;
    fVar2 = fVar2 * fVar12;
    *(float *)(param_5 + 0x128) = fVar29;
    *(float *)(param_5 + 300) = fVar8;
    *(float *)(param_5 + 0x130) = fVar2;
  }
  *(undefined8 *)(param_5 + 0x204) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_5 + 0x20c) = 0xff7fffff7f7fffff;
  *(undefined8 *)(param_5 + 0x214) = 0xff7fffffff7fffff;
  *(float *)(param_5 + 0x134) = fVar13 * fVar19 + fVar11 * fVar16 + fVar7 * fVar6;
  *(float *)(param_5 + 0x13c) = fVar31 * fVar32 + fVar35 * fVar3 + fVar34 * fVar20;
  *(float *)(param_5 + 0x140) = fVar37 * fVar8 + fVar29 * fVar40 + fVar2 * fVar14;
  *(float *)(param_5 + 0x138) = fVar39 * fVar27 + fVar15 * fVar26 + fVar21 * fVar38;
  fVar2 = 3.4028235e+38;
  if (fVar16 < 3.4028235e+38) {
    *(float *)(param_5 + 0x204) = fVar16;
    fVar2 = fVar16;
  }
  fVar7 = 3.4028235e+38;
  if (fVar19 < 3.4028235e+38) {
    *(float *)(param_5 + 0x208) = fVar19;
    fVar7 = fVar19;
  }
  fVar11 = 3.4028235e+38;
  if (fVar6 < 3.4028235e+38) {
    *(float *)(param_5 + 0x20c) = fVar6;
    fVar11 = fVar6;
  }
  fVar13 = -3.4028235e+38;
  if (-3.4028235e+38 < fVar16) {
    *(float *)(param_5 + 0x210) = fVar16;
    fVar13 = fVar16;
  }
  fVar16 = -3.4028235e+38;
  if (-3.4028235e+38 < fVar19) {
    *(float *)(param_5 + 0x214) = fVar19;
    fVar16 = fVar19;
  }
  fVar32 = -3.4028235e+38;
  if (-3.4028235e+38 < fVar6) {
    *(float *)(param_5 + 0x218) = fVar6;
    fVar32 = fVar6;
  }
  if (fVar3 < fVar2) {
    *(float *)(param_5 + 0x204) = fVar3;
    fVar2 = fVar3;
  }
  if (fVar31 < fVar7) {
    *(float *)(param_5 + 0x208) = fVar31;
    fVar7 = fVar31;
  }
  if (fVar20 < fVar11) {
    *(float *)(param_5 + 0x20c) = fVar20;
    fVar11 = fVar20;
  }
  if (fVar13 < fVar3) {
    *(float *)(param_5 + 0x210) = fVar3;
    fVar13 = fVar3;
  }
  if (fVar16 < fVar31) {
    *(float *)(param_5 + 0x214) = fVar31;
    fVar16 = fVar31;
  }
  if (fVar32 < fVar20) {
    *(float *)(param_5 + 0x218) = fVar20;
    fVar32 = fVar20;
  }
  if (fVar26 < fVar2) {
    *(float *)(param_5 + 0x204) = fVar26;
    fVar2 = fVar26;
  }
  if (fVar39 < fVar7) {
    *(float *)(param_5 + 0x208) = fVar39;
    fVar7 = fVar39;
  }
  if (fVar38 < fVar11) {
    *(float *)(param_5 + 0x20c) = fVar38;
    fVar11 = fVar38;
  }
  if (fVar13 < fVar26) {
    *(float *)(param_5 + 0x210) = fVar26;
    fVar13 = fVar26;
  }
  if (fVar16 < fVar39) {
    *(float *)(param_5 + 0x214) = fVar39;
    fVar16 = fVar39;
  }
  if (fVar32 < fVar38) {
    *(float *)(param_5 + 0x218) = fVar38;
    fVar32 = fVar38;
  }
  if (fVar40 < fVar2) {
    *(float *)(param_5 + 0x204) = fVar40;
    fVar2 = fVar40;
  }
  if (fVar37 < fVar7) {
    *(float *)(param_5 + 0x208) = fVar37;
    fVar7 = fVar37;
  }
  if (fVar14 < fVar11) {
    *(float *)(param_5 + 0x20c) = fVar14;
    fVar11 = fVar14;
  }
  if (fVar13 < fVar40) {
    *(float *)(param_5 + 0x210) = fVar40;
    fVar13 = fVar40;
  }
  if (fVar16 < fVar37) {
    *(float *)(param_5 + 0x214) = fVar37;
    fVar16 = fVar37;
  }
  if (fVar32 < fVar14) {
    *(float *)(param_5 + 0x218) = fVar14;
    fVar32 = fVar14;
  }
  if (fVar28 < fVar2) {
    *(float *)(param_5 + 0x204) = fVar28;
    fVar2 = fVar28;
  }
  if (fVar5 < fVar7) {
    *(float *)(param_5 + 0x208) = fVar5;
    fVar7 = fVar5;
  }
  if (fVar25 < fVar11) {
    *(float *)(param_5 + 0x20c) = fVar25;
    fVar11 = fVar25;
  }
  if (fVar13 < fVar28) {
    *(float *)(param_5 + 0x210) = fVar28;
    fVar13 = fVar28;
  }
  if (fVar16 < fVar5) {
    *(float *)(param_5 + 0x214) = fVar5;
    fVar16 = fVar5;
  }
  if (fVar32 < fVar25) {
    *(float *)(param_5 + 0x218) = fVar25;
    fVar32 = fVar25;
  }
  if (fVar33 < fVar2) {
    *(float *)(param_5 + 0x204) = fVar33;
    fVar2 = fVar33;
  }
  if (fVar36 < fVar7) {
    *(float *)(param_5 + 0x208) = fVar36;
    fVar7 = fVar36;
  }
  if (fVar22 < fVar11) {
    *(float *)(param_5 + 0x20c) = fVar22;
    fVar11 = fVar22;
  }
  if (fVar13 < fVar33) {
    *(float *)(param_5 + 0x210) = fVar33;
    fVar13 = fVar33;
  }
  if (fVar16 < fVar36) {
    *(float *)(param_5 + 0x214) = fVar36;
    fVar16 = fVar36;
  }
  if (fVar32 < fVar22) {
    *(float *)(param_5 + 0x218) = fVar22;
    fVar32 = fVar22;
  }
  if (fVar23 < fVar2) {
    *(float *)(param_5 + 0x204) = fVar23;
    fVar2 = fVar23;
  }
  if (fVar17 < fVar7) {
    *(float *)(param_5 + 0x208) = fVar17;
    fVar7 = fVar17;
  }
  if (fVar30 < fVar11) {
    *(float *)(param_5 + 0x20c) = fVar30;
    fVar11 = fVar30;
  }
  else {
  }
  if (fVar13 < fVar23) {
    *(float *)(param_5 + 0x210) = fVar23;
    fVar13 = fVar23;
  }
  if (fVar16 < fVar17) {
    *(float *)(param_5 + 0x214) = fVar17;
    fVar16 = fVar17;
  }
  if (fVar32 < fVar30) {
    *(float *)(param_5 + 0x218) = fVar30;
    fVar32 = fVar30;
  }
  if (fVar18 < fVar2) {
    *(float *)(param_5 + 0x204) = fVar18;
  }
  if (fVar4 < fVar7) {
    *(float *)(param_5 + 0x208) = fVar4;
  }
  if (fVar24 < fVar11) {
    *(float *)(param_5 + 0x20c) = fVar24;
  }
  if (fVar13 < fVar18) {
    *(float *)(param_5 + 0x210) = fVar18;
  }
  if (fVar16 < fVar4) {
    *(float *)(param_5 + 0x214) = fVar4;
  }
  if (fVar32 < fVar24) {
    *(float *)(param_5 + 0x218) = fVar24;
  }
  FUN_03982980(param_5);
  return;
}

