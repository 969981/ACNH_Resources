
void FUN_03927b24(long param_1)

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
  
  FUN_03927bd8();
  FUN_03927db8(param_1);
  fVar1 = (float)*(undefined8 *)(param_1 + 0x288);
  fVar7 = (float)*(undefined8 *)(param_1 + 0x248);
  fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0x248) >> 0x20);
  fVar9 = (float)*(undefined8 *)(param_1 + 0x250);
  fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 0x250) >> 0x20);
  fVar2 = (float)((ulong)*(undefined8 *)(param_1 + 0x288) >> 0x20);
  fVar11 = (float)*(undefined8 *)(param_1 + 600);
  fVar12 = (float)((ulong)*(undefined8 *)(param_1 + 600) >> 0x20);
  fVar13 = (float)*(undefined8 *)(param_1 + 0x260);
  fVar14 = (float)((ulong)*(undefined8 *)(param_1 + 0x260) >> 0x20);
  fVar15 = (float)*(undefined8 *)(param_1 + 0x278);
  fVar16 = (float)((ulong)*(undefined8 *)(param_1 + 0x278) >> 0x20);
  fVar4 = (float)*(undefined8 *)(param_1 + 0x298);
  fVar5 = (float)((ulong)*(undefined8 *)(param_1 + 0x298) >> 0x20);
  fVar22 = (float)*(undefined8 *)(param_1 + 0x2a8);
  fVar23 = (float)((ulong)*(undefined8 *)(param_1 + 0x2a8) >> 0x20);
  fVar17 = (float)*(undefined8 *)(param_1 + 0x280);
  fVar18 = (float)*(undefined8 *)(param_1 + 0x268);
  fVar19 = (float)((ulong)*(undefined8 *)(param_1 + 0x268) >> 0x20);
  fVar20 = (float)*(undefined8 *)(param_1 + 0x270);
  fVar21 = (float)((ulong)*(undefined8 *)(param_1 + 0x270) >> 0x20);
  fVar3 = (float)*(undefined8 *)(param_1 + 0x290);
  fVar6 = (float)*(undefined8 *)(param_1 + 0x2a0);
  fVar24 = (float)*(undefined8 *)(param_1 + 0x2b0);
  *(ulong *)(param_1 + 0x2c0) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x280) >> 0x20) +
                fVar10 * fVar15 + fVar14 * fVar16 + fVar21 * fVar17,
                fVar9 * fVar15 + fVar13 * fVar16 + fVar20 * fVar17 + 0.0);
  *(ulong *)(param_1 + 0x2b8) =
       CONCAT44(fVar8 * fVar15 + fVar12 * fVar16 + fVar19 * fVar17 + 0.0,
                fVar7 * fVar15 + fVar11 * fVar16 + fVar18 * fVar17 + 0.0);
  *(ulong *)(param_1 + 0x2d0) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x290) >> 0x20) +
                fVar10 * fVar1 + fVar14 * fVar2 + fVar21 * fVar3,
                fVar9 * fVar1 + fVar13 * fVar2 + fVar20 * fVar3 + 0.0);
  *(ulong *)(param_1 + 0x2c8) =
       CONCAT44(fVar8 * fVar1 + fVar12 * fVar2 + fVar19 * fVar3 + 0.0,
                fVar7 * fVar1 + fVar11 * fVar2 + fVar18 * fVar3 + 0.0);
  *(ulong *)(param_1 + 0x2e0) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x2a0) >> 0x20) +
                fVar10 * fVar4 + fVar14 * fVar5 + fVar21 * fVar6,
                fVar9 * fVar4 + fVar13 * fVar5 + fVar20 * fVar6 + 0.0);
  *(ulong *)(param_1 + 0x2d8) =
       CONCAT44(fVar8 * fVar4 + fVar12 * fVar5 + fVar19 * fVar6 + 0.0,
                fVar7 * fVar4 + fVar11 * fVar5 + fVar18 * fVar6 + 0.0);
  *(ulong *)(param_1 + 0x2f0) =
       CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x2b0) >> 0x20) +
                fVar10 * fVar22 + fVar14 * fVar23 + fVar21 * fVar24,
                fVar9 * fVar22 + fVar13 * fVar23 + fVar20 * fVar24 + 0.0);
  *(ulong *)(param_1 + 0x2e8) =
       CONCAT44(fVar8 * fVar22 + fVar12 * fVar23 + fVar19 * fVar24 + 0.0,
                fVar7 * fVar22 + fVar11 * fVar23 + fVar18 * fVar24 + 0.0);
  return;
}

