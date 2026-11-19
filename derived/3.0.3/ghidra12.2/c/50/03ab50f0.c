
void FUN_03ab50f0(long param_1)

{
  undefined8 uVar1;
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
  
  *(undefined4 *)(param_1 + 0x7a8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x7a0) = 0;
  fVar14 = *(float *)(param_1 + 0x8c0) - *(float *)(param_1 + 0x8b4);
  fVar2 = (*(float *)(param_1 + 0x8b8) + *(float *)(param_1 + 0x8ac)) * 0.5;
  fVar6 = (*(float *)(param_1 + 0x8bc) + *(float *)(param_1 + 0x8b0)) * 0.5;
  fVar17 = (*(float *)(param_1 + 0x8c0) + *(float *)(param_1 + 0x8b4)) * 0.5;
  fVar13 = fVar14 * 0.5;
  fVar16 = (*(float *)(param_1 + 0x8b8) - *(float *)(param_1 + 0x8ac)) * 0.5;
  *(float *)(param_1 + 0x788) = fVar2;
  *(float *)(param_1 + 0x78c) = fVar6;
  *(float *)(param_1 + 0x790) = fVar17;
  *(float *)(param_1 + 0x794) = fVar2 + *(float *)(param_1 + 0x8c4);
  *(float *)(param_1 + 0x798) = fVar6 + *(float *)(param_1 + 0x8c8);
  fVar15 = (*(float *)(param_1 + 0x8bc) - *(float *)(param_1 + 0x8b0)) * 0.5;
  *(float *)(param_1 + 0x79c) = fVar17 + *(float *)(param_1 + 0x8cc);
  (**(code **)(*(long *)(param_1 + 0x750) + 0x20))(param_1 + 0x750,(undefined8 *)(param_1 + 0x758));
  fVar6 = -(fVar14 * 0.5);
  fVar3 = *(float *)(param_1 + 0x760);
  fVar28 = fVar15 * *(float *)(param_1 + 0x75c) + fVar16 * *(float *)(param_1 + 0x758);
  fVar17 = *(float *)(param_1 + 0x770);
  fVar33 = fVar15 * *(float *)(param_1 + 0x76c) + fVar16 * *(float *)(param_1 + 0x768);
  fVar32 = fVar28 + fVar13 * fVar3;
  fVar34 = fVar33 + fVar13 * fVar17;
  fVar14 = *(float *)(param_1 + 0x780);
  fVar35 = fVar15 * *(float *)(param_1 + 0x77c) + fVar16 * *(float *)(param_1 + 0x778);
  fVar36 = fVar35 + fVar13 * fVar14;
  *(undefined1 *)(param_1 + 0x7b8) = 1;
  fVar2 = -(fVar3 * fVar13) - fVar28;
  if (0.0 <= fVar32) {
    fVar2 = fVar32;
  }
  if (fVar2 <= -3.4028235e+38) {
    fVar2 = -3.4028235e+38;
  }
  fVar32 = -(fVar17 * fVar13) - fVar33;
  if (0.0 <= fVar34) {
    fVar32 = fVar34;
  }
  if (fVar32 <= -3.4028235e+38) {
    fVar32 = -3.4028235e+38;
  }
  fVar34 = -(fVar14 * fVar13) - fVar35;
  if (0.0 <= fVar36) {
    fVar34 = fVar36;
  }
  if (fVar34 <= -3.4028235e+38) {
    fVar34 = -3.4028235e+38;
  }
  fVar36 = -(fVar15 * *(float *)(param_1 + 0x75c)) + fVar16 * *(float *)(param_1 + 0x758);
  fVar7 = -(fVar15 * *(float *)(param_1 + 0x76c)) + fVar16 * *(float *)(param_1 + 0x768);
  fVar18 = -(fVar15 * *(float *)(param_1 + 0x77c)) + fVar16 * *(float *)(param_1 + 0x778);
  fVar16 = fVar36 + fVar13 * fVar3;
  fVar8 = fVar7 + fVar13 * fVar17;
  fVar27 = fVar18 + fVar13 * fVar14;
  fVar15 = -(fVar3 * fVar13) - fVar36;
  if (0.0 <= fVar16) {
    fVar15 = fVar16;
  }
  if (fVar15 <= fVar2) {
    fVar15 = fVar2;
  }
  fVar2 = -(fVar17 * fVar13) - fVar7;
  if (0.0 <= fVar8) {
    fVar2 = fVar8;
  }
  if (fVar2 <= fVar32) {
    fVar2 = fVar32;
  }
  fVar32 = fVar33 - fVar13 * fVar17;
  fVar16 = -(fVar14 * fVar13) - fVar18;
  if (0.0 <= fVar27) {
    fVar16 = fVar27;
  }
  fVar8 = fVar28 - fVar13 * fVar3;
  if (fVar16 <= fVar34) {
    fVar16 = fVar34;
  }
  fVar34 = fVar35 - fVar13 * fVar14;
  fVar28 = -(fVar3 * fVar6) - fVar28;
  if (0.0 <= fVar8) {
    fVar28 = fVar8;
  }
  fVar8 = fVar18 - fVar13 * fVar14;
  if (fVar28 <= fVar15) {
    fVar28 = fVar15;
  }
  fVar15 = -(fVar17 * fVar6) - fVar33;
  if (0.0 <= fVar32) {
    fVar15 = fVar32;
  }
  fVar32 = fVar7 - fVar13 * fVar17;
  if (fVar15 <= fVar2) {
    fVar15 = fVar2;
  }
  fVar2 = -(fVar14 * fVar6) - fVar35;
  if (0.0 <= fVar34) {
    fVar2 = fVar34;
  }
  if (fVar2 <= fVar16) {
    fVar2 = fVar16;
  }
  fVar13 = fVar36 - fVar13 * fVar3;
  fVar3 = -(fVar3 * fVar6) - fVar36;
  if (0.0 <= fVar13) {
    fVar3 = fVar13;
  }
  if (fVar3 <= fVar28) {
    fVar3 = fVar28;
  }
  *(float *)(param_1 + 0x85c) = fVar3;
  fVar17 = -(fVar17 * fVar6) - fVar7;
  if (0.0 <= fVar32) {
    fVar17 = fVar32;
  }
  if (fVar17 <= fVar15) {
    fVar17 = fVar15;
  }
  fVar6 = -(fVar14 * fVar6) - fVar18;
  if (0.0 <= fVar8) {
    fVar6 = fVar8;
  }
  *(float *)(param_1 + 0x850) = fVar17;
  *(float *)(param_1 + 0x854) = -fVar17;
  if (fVar6 <= fVar2) {
    fVar6 = fVar2;
  }
  *(float *)(param_1 + 0x858) = -fVar3;
  *(float *)(param_1 + 0x84c) = fVar6;
  *(float *)(param_1 + 0x8d4) = fVar6;
  *(float *)(param_1 + 0x848) = -fVar6;
  *(float *)(param_1 + 0x8d0) = -fVar6;
  (**(code **)(*(long *)(param_1 + 0x7b0) + 0x58))(param_1 + 0x7b0,param_1 + 0x7bc);
  *(undefined2 *)(param_1 + 0x7b8) = 0x100;
  (**(code **)(*(long *)(param_1 + 0x7b0) + 0x60))
            (param_1 + 0x7b0,param_1 + 0x7fc,param_1 + 0x7bc,*(undefined4 *)(param_1 + 0x83c));
  *(undefined1 *)(param_1 + 0x7b9) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x758);
  fVar2 = (float)*(undefined8 *)(param_1 + 0x7bc);
  fVar3 = (float)uVar1;
  fVar13 = (float)((ulong)uVar1 >> 0x20);
  fVar15 = (float)*(undefined8 *)(param_1 + 0x760);
  fVar16 = (float)((ulong)*(undefined8 *)(param_1 + 0x760) >> 0x20);
  fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 0x7bc) >> 0x20);
  fVar28 = (float)*(undefined8 *)(param_1 + 0x768);
  fVar32 = (float)((ulong)*(undefined8 *)(param_1 + 0x768) >> 0x20);
  fVar33 = (float)*(undefined8 *)(param_1 + 0x770);
  fVar34 = (float)((ulong)*(undefined8 *)(param_1 + 0x770) >> 0x20);
  fVar14 = (float)*(undefined8 *)(param_1 + 0x7c4);
  fVar35 = (float)*(undefined8 *)(param_1 + 0x778);
  fVar36 = (float)((ulong)*(undefined8 *)(param_1 + 0x778) >> 0x20);
  fVar7 = (float)*(undefined8 *)(param_1 + 0x780);
  fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0x780) >> 0x20);
  fVar17 = (float)*(undefined8 *)(param_1 + 0x7dc);
  fVar27 = (float)((ulong)*(undefined8 *)(param_1 + 0x7dc) >> 0x20);
  fVar4 = (float)*(undefined8 *)(param_1 + 0x7e4);
  fVar18 = (float)*(undefined8 *)(param_1 + 0x7cc);
  fVar19 = (float)((ulong)*(undefined8 *)(param_1 + 0x7cc) >> 0x20);
  fVar20 = (float)*(undefined8 *)(param_1 + 0x7d4);
  fVar9 = fVar3 * fVar2 + fVar28 * fVar6 + fVar35 * fVar14 + 0.0;
  fVar10 = fVar13 * fVar2 + fVar32 * fVar6 + fVar36 * fVar14 + 0.0;
  fVar11 = fVar15 * fVar2 + fVar33 * fVar6 + fVar7 * fVar14 + 0.0;
  fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 0x7c4) >> 0x20) +
           fVar16 * fVar2 + fVar34 * fVar6 + fVar8 * fVar14;
  fVar2 = fVar3 * fVar17 + fVar28 * fVar27 + fVar35 * fVar4 + 0.0;
  fVar6 = fVar13 * fVar17 + fVar32 * fVar27 + fVar36 * fVar4 + 0.0;
  fVar14 = fVar15 * fVar17 + fVar33 * fVar27 + fVar7 * fVar4 + 0.0;
  fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 0x7e4) >> 0x20) +
           fVar16 * fVar17 + fVar34 * fVar27 + fVar8 * fVar4;
  fVar29 = (float)*(undefined8 *)(param_1 + 0x7ec);
  fVar30 = (float)((ulong)*(undefined8 *)(param_1 + 0x7ec) >> 0x20);
  fVar27 = fVar3 * fVar18 + fVar28 * fVar19 + fVar35 * fVar20 + 0.0;
  fVar4 = fVar13 * fVar18 + fVar32 * fVar19 + fVar36 * fVar20 + 0.0;
  fVar5 = fVar15 * fVar18 + fVar33 * fVar19 + fVar7 * fVar20 + 0.0;
  fVar18 = (float)((ulong)*(undefined8 *)(param_1 + 0x7d4) >> 0x20) +
           fVar16 * fVar18 + fVar34 * fVar19 + fVar8 * fVar20;
  fVar31 = (float)*(undefined8 *)(param_1 + 0x7f4);
  fVar19 = fVar9 * 0.0;
  fVar21 = fVar10 * 0.0;
  fVar23 = fVar11 * 0.0;
  fVar25 = fVar12 * 0.0;
  fVar20 = fVar19 + fVar27 * 0.0;
  fVar22 = fVar21 + fVar4 * 0.0;
  fVar24 = fVar23 + fVar5 * 0.0;
  fVar26 = fVar25 + fVar18 * 0.0;
  fVar3 = fVar3 * fVar29 + fVar28 * fVar30 + fVar35 * fVar31 + 0.0;
  fVar13 = fVar13 * fVar29 + fVar32 * fVar30 + fVar36 * fVar31 + 0.0;
  fVar15 = fVar15 * fVar29 + fVar33 * fVar30 + fVar7 * fVar31 + 0.0;
  fVar16 = (float)((ulong)*(undefined8 *)(param_1 + 0x7f4) >> 0x20) +
           fVar16 * fVar29 + fVar34 * fVar30 + fVar8 * fVar31;
  *(ulong *)(param_1 + 0x898) =
       CONCAT44(fVar16 + fVar26 + fVar17 * 0.0,fVar15 + fVar24 + fVar14 * 0.0);
  *(ulong *)(param_1 + 0x890) = CONCAT44(fVar13 + fVar22 + fVar6 * 0.0,fVar3 + fVar20 + fVar2 * 0.0)
  ;
  *(ulong *)(param_1 + 0x868) =
       CONCAT44(fVar12 * 0.5 + fVar18 * 0.0 + fVar17 * 0.0 + fVar16 * 0.5,
                fVar11 * 0.5 + fVar5 * 0.0 + fVar14 * 0.0 + fVar15 * 0.5);
  *(ulong *)(param_1 + 0x860) =
       CONCAT44(fVar10 * 0.5 + fVar4 * 0.0 + fVar6 * 0.0 + fVar13 * 0.5,
                fVar9 * 0.5 + fVar27 * 0.0 + fVar2 * 0.0 + fVar3 * 0.5);
  *(ulong *)(param_1 + 0x878) =
       CONCAT44(fVar25 + fVar18 * -0.5 + fVar17 * 0.0 + fVar16 * 0.5,
                fVar23 + fVar5 * -0.5 + fVar14 * 0.0 + fVar15 * 0.5);
  *(ulong *)(param_1 + 0x870) =
       CONCAT44(fVar21 + fVar4 * -0.5 + fVar6 * 0.0 + fVar13 * 0.5,
                fVar19 + fVar27 * -0.5 + fVar2 * 0.0 + fVar3 * 0.5);
  *(ulong *)(param_1 + 0x888) =
       CONCAT44(fVar26 + fVar17 * 0.5 + fVar16 * 0.5,fVar24 + fVar14 * 0.5 + fVar15 * 0.5);
  *(ulong *)(param_1 + 0x880) =
       CONCAT44(fVar22 + fVar6 * 0.5 + fVar13 * 0.5,fVar20 + fVar2 * 0.5 + fVar3 * 0.5);
  return;
}

