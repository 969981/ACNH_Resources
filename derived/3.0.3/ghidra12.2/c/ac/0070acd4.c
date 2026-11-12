
/* WARNING: Removing unreachable block (ram,0x0070ad40) */
/* WARNING: Removing unreachable block (ram,0x0070ad50) */

void FUN_0070acd4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 uVar4;
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
  
  puVar2 = PTR_DAT_04bb2200;
  lVar3 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x78);
  uVar4 = *(undefined4 *)(lVar3 + 0x58);
  fVar12 = *(float *)(lVar3 + 0x50);
  fVar20 = *(float *)(lVar3 + 0x54);
  fVar5 = (float)((*(int *)(*(long *)(DAT_0519d040 + 0x1f8) + 0x30) -
                  *(int *)(*(long *)(DAT_0519d040 + 0x1f8) + 0x20)) + 1) * 5.0 * 0.5;
  fVar9 = fVar12 - fVar5;
  if (fVar9 == 0.0) {
    fVar5 = 1.0;
  }
  fVar5 = *(float *)(param_2 + 800) * (fVar9 / fVar5);
  fVar9 = sinf(fVar5);
  fVar6 = cosf(fVar5);
  fVar10 = fVar9 * 0.0;
  fVar15 = fVar9 + 0.0;
  fVar13 = fVar6 * 0.0;
  fVar16 = fVar10 * 0.0 + 1.0;
  fVar9 = -fVar9;
  fVar5 = *(float *)(*(long *)(*(long *)puVar2 + 0x78) + 0x48) *
          *(float *)(*(long *)(*(long *)puVar2 + 0x78) + 0x3c);
  fVar7 = sinf(fVar5);
  fVar8 = cosf(fVar5);
  fVar17 = fVar7 * 0.0;
  fVar11 = *(float *)(lVar3 + 0x38) + *(float *)(param_2 + 0x31c);
  fVar19 = fVar17 + fVar8 * 0.0;
  fVar18 = fVar8 + fVar17 * 0.0;
  fVar17 = fVar17 - fVar8 * 0.0;
  fVar14 = fVar8 * 0.0 * 0.0 - fVar7;
  fVar5 = 0.0;
  if (fVar11 <= 0.0) {
    fVar5 = fVar11;
  }
  *(ulong *)(param_2 + 0x2ec) = CONCAT44(fVar12,fVar15 + fVar10 * fVar17 + fVar6 * fVar19 + 0.0);
  *(undefined8 *)(param_2 + 0x2e4) =
       CONCAT44(fVar10 + fVar16 * fVar17 + fVar13 * fVar19 + 0.0,
                fVar6 + fVar13 * fVar17 + fVar9 * fVar19 + 0.0);
  *(ulong *)(param_2 + 0x2fc) =
       CONCAT44(fVar20 + *(float *)(param_2 + 0x318) +
                         *(float *)(param_2 + 0x314) * -(fVar5 * fVar5),
                fVar15 * 0.0 + fVar10 * fVar18 + fVar6 * fVar14 + 0.0);
  *(ulong *)(param_2 + 0x2f4) =
       CONCAT44(fVar10 * 0.0 + fVar16 * fVar18 + fVar13 * fVar14 + 0.0,
                fVar6 * 0.0 + fVar13 * fVar18 + fVar9 * fVar14 + 0.0);
  *(ulong *)(param_2 + 0x30c) = CONCAT44(uVar4,fVar15 * -0.0 + fVar10 * fVar7 + fVar6 * fVar8 + 0.0)
  ;
  *(ulong *)(param_2 + 0x304) =
       CONCAT44(fVar10 * -0.0 + fVar16 * fVar7 + fVar13 * fVar8 + 0.0,
                fVar6 * -0.0 + fVar13 * fVar7 + fVar9 * fVar8 + 0.0);
  uVar1 = *(undefined8 *)(param_2 + 0x30c);
  param_1[4] = *(undefined8 *)(param_2 + 0x304);
  param_1[5] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x2ec);
  *param_1 = *(undefined8 *)(param_2 + 0x2e4);
  param_1[1] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x2fc);
  param_1[2] = *(undefined8 *)(param_2 + 0x2f4);
  param_1[3] = uVar1;
  return;
}

