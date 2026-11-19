
void FUN_03983ba8(undefined8 *param_1,long param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
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
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  undefined *local_1b0;
  undefined2 local_1a8;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  undefined8 local_fc;
  undefined8 local_f0;
  float fStack_e8;
  float fStack_e4;
  undefined8 uStack_e0;
  float fStack_d8;
  float local_d4;
  undefined8 local_d0;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  
  FUN_02a08d44(&local_80,param_2 + 0x30);
  FUN_02a08d44(&local_90,param_3 + 0x30);
  fVar1 = fStack_7c * fStack_8c + local_90 * local_80 + local_88 * local_78 + fStack_84 * fStack_74;
  fVar27 = 1.0;
  if ((fVar1 <= 1.0) && (fVar27 = fVar1, fVar1 < -1.0)) {
    fVar27 = -1.0;
  }
  fVar1 = fVar27;
  if (fVar27 < 0.0) {
    fVar1 = -fVar27;
  }
  fVar2 = acosf(fVar1);
  fVar3 = sinf(fVar2);
  fVar1 = -fVar3;
  if (0.0 <= fVar3) {
    fVar1 = fVar3;
  }
  fVar4 = 0.5;
  fVar5 = 0.5;
  if (1.1920929e-07 <= fVar1) {
    fVar4 = sinf(fVar2 - fVar2 * 0.5);
    fVar4 = (1.0 / fVar3) * fVar4;
    fVar5 = sinf(fVar2 * 0.5);
    fVar5 = (1.0 / fVar3) * fVar5;
  }
  if (fVar27 < 0.0) {
    fVar5 = -fVar5;
  }
  fStack_7c = fVar5 * fStack_8c + fStack_7c * fVar4;
  fStack_74 = fVar5 * fStack_84 + fStack_74 * fVar4;
  local_80 = fVar5 * local_90 + local_80 * fVar4;
  local_78 = fVar5 * local_88 + local_78 * fVar4;
  fVar27 = local_80 + local_80;
  fStack_a4 = *(float *)(param_2 + 0x4c) * 0.5 + *(float *)(param_3 + 0x4c) * 0.5;
  fVar1 = fStack_74 + fStack_74;
  fStack_b4 = *(float *)(param_2 + 0x3c) * 0.5 + *(float *)(param_3 + 0x3c) * 0.5;
  fVar2 = fStack_7c * (fStack_7c + fStack_7c);
  fStack_9c = (fStack_7c + fStack_7c) * local_78;
  fStack_ac = local_78 * (local_78 + local_78);
  local_b8 = fVar27 * local_78 + fStack_7c * fVar1;
  local_a0 = fVar27 * local_78 - fStack_7c * fVar1;
  local_a8 = fStack_9c - local_80 * fVar1;
  fStack_9c = fStack_9c + local_80 * fVar1;
  local_98 = 1.0 - local_80 * fVar27;
  fStack_bc = fVar27 * fStack_7c - local_78 * fVar1;
  local_b0 = fVar27 * fStack_7c + local_78 * fVar1;
  local_c0 = (1.0 - fVar2) - fStack_ac;
  fStack_ac = local_98 - fStack_ac;
  local_98 = local_98 - fVar2;
  fStack_94 = *(float *)(param_2 + 0x5c) * 0.5 + *(float *)(param_3 + 0x5c) * 0.5;
  FUN_007535b4(&local_f0,&local_c0);
  fVar5 = (float)local_f0;
  fVar27 = (float)*(undefined8 *)(param_2 + 0x30);
  fVar1 = (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20);
  fVar2 = (float)*(undefined8 *)(param_2 + 0x38);
  fVar3 = (float)((ulong)*(undefined8 *)(param_2 + 0x38) >> 0x20);
  fVar4 = (float)((ulong)local_f0 >> 0x20);
  fVar32 = (float)*(undefined8 *)(param_2 + 0x40);
  fVar78 = (float)((ulong)*(undefined8 *)(param_2 + 0x40) >> 0x20);
  fVar26 = (float)*(undefined8 *)(param_2 + 0x48);
  fVar69 = (float)((ulong)*(undefined8 *)(param_2 + 0x48) >> 0x20);
  fVar10 = (float)*(undefined8 *)(param_2 + 0x50);
  fVar53 = (float)((ulong)*(undefined8 *)(param_2 + 0x50) >> 0x20);
  fVar13 = (float)*(undefined8 *)(param_2 + 0x58);
  fVar14 = (float)((ulong)*(undefined8 *)(param_2 + 0x58) >> 0x20);
  fVar81 = *(float *)(param_2 + 0x198);
  fVar84 = *(float *)(param_3 + 0x19c);
  fVar18 = fVar27 * fVar5 + fVar32 * fVar4 + fVar10 * fStack_e8 + 0.0;
  fVar19 = fVar1 * fVar5 + fVar78 * fVar4 + fVar53 * fStack_e8 + 0.0;
  fVar20 = fVar2 * fVar5 + fVar26 * fVar4 + fVar13 * fStack_e8 + 0.0;
  fVar21 = fStack_e4 + fVar3 * fVar5 + fVar69 * fVar4 + fVar14 * fStack_e8;
  fVar34 = (float)uStack_e0;
  fVar35 = (float)((ulong)uStack_e0 >> 0x20);
  fVar22 = (float)local_d0;
  fVar31 = (float)((ulong)local_d0 >> 0x20);
  fVar11 = (float)*(undefined8 *)(param_3 + 0x30);
  fVar24 = (float)((ulong)*(undefined8 *)(param_3 + 0x30) >> 0x20);
  fVar25 = (float)*(undefined8 *)(param_3 + 0x38);
  fVar33 = (float)((ulong)*(undefined8 *)(param_3 + 0x38) >> 0x20);
  fVar36 = (float)*(undefined8 *)(param_3 + 0x40);
  fVar37 = (float)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20);
  fVar38 = (float)*(undefined8 *)(param_3 + 0x48);
  fVar39 = (float)((ulong)*(undefined8 *)(param_3 + 0x48) >> 0x20);
  fVar40 = (float)*(undefined8 *)(param_3 + 0x50);
  fVar41 = (float)((ulong)*(undefined8 *)(param_3 + 0x50) >> 0x20);
  fVar42 = (float)*(undefined8 *)(param_3 + 0x58);
  fVar43 = (float)((ulong)*(undefined8 *)(param_3 + 0x58) >> 0x20);
  fVar6 = fVar27 * fVar34 + fVar32 * fVar35 + fVar10 * fStack_d8 + 0.0;
  fVar7 = fVar1 * fVar34 + fVar78 * fVar35 + fVar53 * fStack_d8 + 0.0;
  fVar8 = fVar2 * fVar34 + fVar26 * fVar35 + fVar13 * fStack_d8 + 0.0;
  fVar9 = local_d4 + fVar3 * fVar34 + fVar69 * fVar35 + fVar14 * fStack_d8;
  fVar10 = fVar27 * fVar22 + fVar32 * fVar31 + fVar10 * fStack_c8 + 0.0;
  fVar12 = fVar1 * fVar22 + fVar78 * fVar31 + fVar53 * fStack_c8 + 0.0;
  fVar13 = fVar2 * fVar22 + fVar26 * fVar31 + fVar13 * fStack_c8 + 0.0;
  fVar14 = fStack_c4 + fVar3 * fVar22 + fVar69 * fVar31 + fVar14 * fStack_c8;
  fVar15 = fVar11 * fVar5 + fVar36 * fVar4 + fVar40 * fStack_e8 + 0.0;
  fVar16 = fVar24 * fVar5 + fVar37 * fVar4 + fVar41 * fStack_e8 + 0.0;
  fVar17 = fVar25 * fVar5 + fVar38 * fVar4 + fVar42 * fStack_e8 + 0.0;
  fVar2 = fStack_e4 + fVar33 * fVar5 + fVar39 * fVar4 + fVar43 * fStack_e8;
  fVar53 = *(float *)(param_2 + 0x148);
  fVar70 = *(float *)(param_2 + 0x14c);
  fVar54 = *(float *)(param_3 + 0x148);
  fVar28 = fVar11 * fVar22 + fVar36 * fVar31 + fVar40 * fStack_c8 + 0.0;
  fVar29 = fVar24 * fVar22 + fVar37 * fVar31 + fVar41 * fStack_c8 + 0.0;
  fVar30 = fVar25 * fVar22 + fVar38 * fVar31 + fVar42 * fStack_c8 + 0.0;
  fVar31 = fStack_c4 + fVar33 * fVar22 + fVar39 * fVar31 + fVar43 * fStack_c8;
  fVar32 = *(float *)(param_2 + 0x144);
  fVar22 = fVar11 * fVar34 + fVar36 * fVar35 + fVar40 * fStack_d8 + 0.0;
  fVar24 = fVar24 * fVar34 + fVar37 * fVar35 + fVar41 * fStack_d8 + 0.0;
  fVar25 = fVar25 * fVar34 + fVar38 * fVar35 + fVar42 * fStack_d8 + 0.0;
  fVar26 = local_d4 + fVar33 * fVar34 + fVar39 * fVar35 + fVar43 * fStack_d8;
  fVar33 = *(float *)(param_3 + 0x144);
  fVar55 = *(float *)(param_2 + 0x154);
  fVar71 = *(float *)(param_3 + 0x14c);
  fVar34 = *(float *)(param_2 + 0x150);
  fVar56 = *(float *)(param_3 + 0x154);
  fVar72 = *(float *)(param_2 + 0x158);
  fVar35 = *(float *)(param_3 + 0x150);
  fVar80 = fVar21 + fVar53 * fVar19 + fVar32 * fVar18 + fVar70 * fVar20;
  fVar73 = *(float *)(param_3 + 0x158);
  fVar36 = *(float *)(param_2 + 0x15c);
  fVar74 = *(float *)(param_2 + 0x164);
  fVar57 = *(float *)(param_2 + 0x160);
  fVar37 = *(float *)(param_3 + 0x15c);
  fVar75 = *(float *)(param_3 + 0x164);
  fVar58 = *(float *)(param_3 + 0x160);
  fVar38 = *(float *)(param_2 + 0x168);
  fVar76 = *(float *)(param_2 + 0x170);
  fVar59 = *(float *)(param_2 + 0x16c);
  fVar39 = *(float *)(param_3 + 0x168);
  fVar77 = *(float *)(param_3 + 0x170);
  fVar60 = *(float *)(param_3 + 0x16c);
  fVar40 = *(float *)(param_2 + 0x174);
  fVar61 = *(float *)(param_2 + 0x178);
  fVar41 = *(float *)(param_2 + 0x17c);
  fVar42 = *(float *)(param_3 + 0x174);
  fVar62 = *(float *)(param_3 + 0x178);
  fVar43 = *(float *)(param_3 + 0x17c);
  fVar44 = *(float *)(param_2 + 0x180);
  fVar63 = *(float *)(param_2 + 0x184);
  fVar45 = *(float *)(param_2 + 0x188);
  fVar46 = *(float *)(param_3 + 0x180);
  fVar64 = *(float *)(param_3 + 0x184);
  fVar47 = *(float *)(param_3 + 0x188);
  fVar65 = *(float *)(param_2 + 400);
  fVar48 = *(float *)(param_2 + 0x18c);
  fVar66 = *(float *)(param_3 + 400);
  fVar49 = *(float *)(param_2 + 0x194);
  fVar50 = *(float *)(param_3 + 0x18c);
  fVar67 = -(fVar31 + fVar64 * fVar29 + fVar46 * fVar28 + fVar47 * fVar30);
  fVar51 = *(float *)(param_3 + 0x194);
  fVar4 = fVar21 + fVar65 * fVar19 + fVar48 * fVar18 + fVar49 * fVar20;
  fVar52 = *(float *)(param_2 + 0x19c);
  fVar82 = *(float *)(param_2 + 0x1a0);
  fVar83 = *(float *)(param_3 + 0x198);
  fVar79 = -(fVar31 + fVar66 * fVar29 + fVar50 * fVar28 + fVar51 * fVar30);
  fVar68 = fVar9 + fVar53 * fVar7 + fVar32 * fVar6 + fVar70 * fVar8;
  fVar11 = *(float *)(param_3 + 0x1a0);
  fVar3 = fVar2 + fVar54 * fVar16 + fVar33 * fVar15 + fVar71 * fVar17;
  fVar69 = fVar9 + fVar55 * fVar7 + fVar34 * fVar6 + fVar72 * fVar8;
  fVar5 = fVar9 + fVar65 * fVar7 + fVar48 * fVar6 + fVar49 * fVar8;
  fVar27 = fVar2 + fVar66 * fVar16 + fVar50 * fVar15 + fVar51 * fVar17;
  fVar78 = fVar21 + fVar52 * fVar19 + fVar81 * fVar18 + fVar82 * fVar20;
  fVar1 = fVar9 + fVar52 * fVar7 + fVar81 * fVar6 + fVar82 * fVar8;
  fVar53 = fVar14 + fVar53 * fVar12 + fVar32 * fVar10 + fVar70 * fVar13;
  fVar32 = fVar80;
  if (fVar80 <= -3.4028235e+38) {
    fVar32 = -3.4028235e+38;
  }
  fVar70 = fVar68;
  if (fVar68 <= -3.4028235e+38) {
    fVar70 = -3.4028235e+38;
  }
  fVar23 = -(fVar31 + fVar54 * fVar29 + fVar33 * fVar28 + fVar71 * fVar30);
  fVar54 = fVar26 + fVar54 * fVar24 + fVar33 * fVar22 + fVar71 * fVar25;
  fVar33 = fVar26 + fVar66 * fVar24 + fVar50 * fVar22 + fVar51 * fVar25;
  fVar49 = -(fVar14 + fVar65 * fVar12 + fVar48 * fVar10 + fVar49 * fVar13);
  fVar48 = fVar3;
  if (fVar3 <= fVar32) {
    fVar48 = fVar32;
  }
  fVar32 = fVar54;
  if (fVar54 <= fVar70) {
    fVar32 = fVar70;
  }
  fVar50 = 3.4028235e+38;
  if (-3.4028235e+38 <= fVar53) {
    fVar50 = -fVar53;
  }
  if (fVar23 <= fVar50) {
    fVar50 = fVar23;
  }
  fVar53 = fVar21 + fVar55 * fVar19 + fVar34 * fVar18 + fVar72 * fVar20;
  fVar51 = fVar53;
  if (fVar53 <= fVar48) {
    fVar51 = fVar48;
  }
  fVar48 = fVar69;
  if (fVar69 <= fVar32) {
    fVar48 = fVar32;
  }
  fVar32 = fVar2 + fVar56 * fVar16 + fVar35 * fVar15 + fVar73 * fVar17;
  fVar66 = fVar26 + fVar56 * fVar24 + fVar35 * fVar22 + fVar73 * fVar25;
  fVar65 = fVar32;
  if (fVar32 <= fVar51) {
    fVar65 = fVar51;
  }
  fVar51 = -(fVar14 + fVar55 * fVar12 + fVar34 * fVar10 + fVar72 * fVar13);
  fVar34 = fVar66;
  if (fVar66 <= fVar48) {
    fVar34 = fVar48;
  }
  if (fVar51 <= fVar50) {
    fVar50 = fVar51;
  }
  fVar48 = fVar21 + fVar57 * fVar19 + fVar36 * fVar18 + fVar74 * fVar20;
  fVar51 = -(fVar31 + fVar56 * fVar29 + fVar35 * fVar28 + fVar73 * fVar30);
  fVar35 = fVar9 + fVar57 * fVar7 + fVar36 * fVar6 + fVar74 * fVar8;
  if (fVar51 <= fVar50) {
    fVar50 = fVar51;
  }
  fVar51 = fVar48;
  if (fVar48 <= fVar65) {
    fVar51 = fVar65;
  }
  fVar55 = fVar35;
  if (fVar35 <= fVar34) {
    fVar55 = fVar34;
  }
  fVar56 = fVar2 + fVar58 * fVar16 + fVar37 * fVar15 + fVar75 * fVar17;
  fVar57 = -(fVar14 + fVar57 * fVar12 + fVar36 * fVar10 + fVar74 * fVar13);
  fVar36 = fVar26 + fVar58 * fVar24 + fVar37 * fVar22 + fVar75 * fVar25;
  fVar34 = fVar56;
  if (fVar56 <= fVar51) {
    fVar34 = fVar51;
  }
  fVar51 = fVar36;
  if (fVar36 <= fVar55) {
    fVar51 = fVar55;
  }
  if (fVar57 <= fVar50) {
    fVar50 = fVar57;
  }
  fVar37 = -(fVar31 + fVar58 * fVar29 + fVar37 * fVar28 + fVar75 * fVar30);
  if (fVar37 <= fVar50) {
    fVar50 = fVar37;
  }
  fVar57 = fVar21 + fVar59 * fVar19 + fVar38 * fVar18 + fVar76 * fVar20;
  fVar55 = fVar9 + fVar59 * fVar7 + fVar38 * fVar6 + fVar76 * fVar8;
  fVar37 = fVar57;
  if (fVar57 <= fVar34) {
    fVar37 = fVar34;
  }
  fVar34 = fVar55;
  if (fVar55 <= fVar51) {
    fVar34 = fVar51;
  }
  fVar38 = -(fVar14 + fVar59 * fVar12 + fVar38 * fVar10 + fVar76 * fVar13);
  if (fVar38 <= fVar50) {
    fVar50 = fVar38;
  }
  fVar51 = fVar21 + fVar61 * fVar19 + fVar40 * fVar18 + fVar41 * fVar20;
  fVar38 = fVar2 + fVar62 * fVar16 + fVar42 * fVar15 + fVar43 * fVar17;
  if (fVar51 <= -3.4028235e+38) {
    fVar51 = -3.4028235e+38;
  }
  fVar58 = fVar26 + fVar62 * fVar24 + fVar42 * fVar22 + fVar43 * fVar25;
  if (fVar38 <= fVar51) {
    fVar38 = fVar51;
  }
  fVar51 = fVar9 + fVar61 * fVar7 + fVar40 * fVar6 + fVar41 * fVar8;
  if (fVar51 <= -3.4028235e+38) {
    fVar51 = -3.4028235e+38;
  }
  if (fVar58 <= fVar51) {
    fVar58 = fVar51;
  }
  fVar40 = fVar14 + fVar61 * fVar12 + fVar40 * fVar10 + fVar41 * fVar13;
  local_114 = -3.4028235e+38;
  if (fVar40 <= 3.4028235e+38) {
    local_114 = -fVar40;
  }
  fVar40 = -(fVar31 + fVar62 * fVar29 + fVar42 * fVar28 + fVar43 * fVar30);
  if (local_114 <= fVar40) {
    local_114 = fVar40;
  }
  fVar21 = fVar21 + fVar63 * fVar19 + fVar44 * fVar18 + fVar45 * fVar20;
  if (fVar21 <= fVar38) {
    fVar21 = fVar38;
  }
  fVar9 = fVar9 + fVar63 * fVar7 + fVar44 * fVar6 + fVar45 * fVar8;
  if (fVar9 <= fVar58) {
    fVar9 = fVar58;
  }
  fVar6 = fVar2 + fVar64 * fVar16 + fVar46 * fVar15 + fVar47 * fVar17;
  if (fVar6 <= fVar21) {
    fVar6 = fVar21;
  }
  fVar21 = fVar26 + fVar64 * fVar24 + fVar46 * fVar22 + fVar47 * fVar25;
  if (fVar21 <= fVar9) {
    fVar21 = fVar9;
  }
  fVar9 = -(fVar14 + fVar63 * fVar12 + fVar44 * fVar10 + fVar45 * fVar13);
  if (local_114 <= fVar9) {
    local_114 = fVar9;
  }
  if (local_114 <= fVar67) {
    local_114 = fVar67;
  }
  if (fVar4 <= fVar6) {
    fVar4 = fVar6;
  }
  if (fVar5 <= fVar21) {
    fVar5 = fVar21;
  }
  if (fVar27 <= fVar4) {
    fVar27 = fVar4;
  }
  if (fVar33 <= fVar5) {
    fVar33 = fVar5;
  }
  if (local_114 <= fVar49) {
    local_114 = fVar49;
  }
  if (local_114 <= fVar79) {
    local_114 = fVar79;
  }
  if (fVar78 <= fVar27) {
    fVar78 = fVar27;
  }
  if (fVar1 <= fVar33) {
    fVar1 = fVar33;
  }
  local_108 = fVar2 + fVar60 * fVar16 + fVar39 * fVar15 + fVar77 * fVar17;
  fVar2 = fVar2 + fVar84 * fVar16 + fVar83 * fVar15 + fVar11 * fVar17;
  local_10c = fVar26 + fVar60 * fVar24 + fVar39 * fVar22 + fVar77 * fVar25;
  fVar26 = fVar26 + fVar84 * fVar24 + fVar83 * fVar22 + fVar11 * fVar25;
  if (fVar2 <= fVar78) {
    fVar2 = fVar78;
  }
  if (fVar26 <= fVar1) {
    fVar26 = fVar1;
  }
  fVar27 = -(fVar14 + fVar52 * fVar12 + fVar81 * fVar10 + fVar82 * fVar13);
  fVar5 = -(fVar31 + fVar60 * fVar29 + fVar39 * fVar28 + fVar77 * fVar30);
  fVar1 = -(fVar31 + fVar84 * fVar29 + fVar83 * fVar28 + fVar11 * fVar30);
  if (local_114 <= fVar27) {
    local_114 = fVar27;
  }
  if (local_114 <= fVar1) {
    local_114 = fVar1;
  }
  local_104 = local_108;
  if (local_108 <= fVar37) {
    local_104 = fVar37;
  }
  local_110 = local_10c;
  if (local_10c <= fVar34) {
    local_110 = fVar34;
  }
  if (fVar5 <= fVar50) {
    fVar50 = fVar5;
  }
  fVar27 = (-(local_104 * local_114) + fVar50 * fVar2) / (local_104 - fVar2);
  fVar1 = (-(local_110 * local_114) + fVar50 * fVar26) / (local_110 - fVar26);
  if (fVar27 <= fVar1) {
    fVar27 = fVar1;
  }
  local_114 = local_114 + fVar27;
  fStack_e4 = fStack_e4 + 0.0;
  local_d4 = local_d4 + 0.0;
  fStack_c4 = fStack_c4 - fVar27;
  local_118 = fVar50 + fVar27;
  if (*(char *)(param_2 + 0x234) == '\0') {
    fVar1 = (float)NEON_fminnm(fVar68,0x7f7fffff);
    if (fVar1 <= fVar54) {
      fVar54 = fVar1;
    }
    fVar1 = (float)NEON_fminnm(fVar80,0x7f7fffff);
    if (fVar54 <= fVar69) {
      fVar69 = fVar54;
    }
    if (fVar69 <= fVar66) {
      fVar66 = fVar69;
    }
    if (fVar66 <= fVar35) {
      fVar35 = fVar66;
    }
    if (fVar35 <= fVar36) {
      fVar36 = fVar35;
    }
    if (fVar36 <= fVar55) {
      fVar55 = fVar36;
    }
    if (fVar55 <= local_10c) {
      local_10c = fVar55;
    }
    if (fVar1 <= fVar3) {
      fVar3 = fVar1;
    }
    if (fVar3 <= fVar53) {
      fVar53 = fVar3;
    }
    if (fVar53 <= fVar32) {
      fVar32 = fVar53;
    }
    local_120 = *(undefined4 *)PTR_DAT_04bd0eb0;
    local_11c = *(undefined4 *)PTR_DAT_04bd0eb8;
    if (fVar32 <= fVar48) {
      fVar48 = fVar32;
    }
    local_1b0 = PTR_DAT_04bd0ec0 + 0x10;
    local_124 = *(undefined4 *)PTR_DAT_04bd0ea8;
    param_1[1] = CONCAT44(fStack_e4,fStack_e8);
    *param_1 = local_f0;
    param_1[3] = CONCAT44(local_d4,fStack_d8);
    param_1[2] = uStack_e0;
    param_1[5] = CONCAT44(fStack_c4,fStack_c8);
    param_1[4] = local_d0;
    local_1a8 = 0x101;
    if (fVar48 <= fVar56) {
      fVar56 = fVar48;
    }
    if (fVar56 <= fVar57) {
      fVar57 = fVar56;
    }
    if (fVar57 <= local_108) {
      local_108 = fVar57;
    }
  }
  else {
    local_110 = atan2f(fVar26,local_114);
    local_110 = local_110 + local_110;
    local_120 = *(undefined4 *)PTR_DAT_04bd0eb0;
    local_1b0 = PTR_DAT_04bbd858 + 0x10;
    local_11c = *(undefined4 *)PTR_DAT_04bd0eb8;
    local_1a8._1_1_ = 1;
    local_fc = 0;
    fVar1 = local_110 * 0.5;
    local_124 = *(undefined4 *)PTR_DAT_04bd0ea8;
    local_100 = fVar2 / fVar26;
    local_10c = sinf(fVar1);
    local_108 = cosf(fVar1);
    local_104 = tanf(fVar1);
    local_1a8 = CONCAT11(local_1a8._1_1_,1);
    param_1[5] = CONCAT44(fStack_c4,fStack_c8);
    param_1[4] = local_d0;
    param_1[1] = CONCAT44(fStack_e4,fStack_e8);
    *param_1 = local_f0;
    param_1[3] = CONCAT44(local_d4,fStack_d8);
    param_1[2] = uStack_e0;
  }
  FUN_007535b4(param_1 + 6,&local_f0);
  FUN_03983a20(param_1,&local_1b0);
  return;
}

