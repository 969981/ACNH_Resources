
void FUN_0073ebc0(long param_1)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 *puVar4;
  float *pfVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  float fVar10;
  undefined4 uVar11;
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
  float local_a8;
  undefined8 local_a4;
  float local_9c;
  float fStack_98;
  float local_94;
  float fStack_90;
  undefined1 auStack_8c [12];
  
  if (*(long *)(param_1 + 0x48) == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 0x60);
  }
  pfVar2 = (float *)(**(code **)(*(long *)(lVar9 + 0x5b18) + 0xf0))(lVar9 + 0x5b18);
  pfVar3 = (float *)(**(code **)(*(long *)(lVar9 + 0x5b50) + 0xf0))(lVar9 + 0x5b50);
  puVar4 = (undefined8 *)(**(code **)(*(long *)(lVar9 + 0x5ab0) + 0xf0))(lVar9 + 0x5ab0);
  pfVar5 = (float *)(**(code **)(*(long *)(lVar9 + 0x5ae8) + 0xf0))(lVar9 + 0x5ae8);
  *(float *)(*(long *)(param_1 + 0x288) + 0x1c) = *pfVar2 * 0.017453294;
  *(float *)(*(long *)(param_1 + 0x288) + 0x20) = pfVar2[1] * 0.017453294;
  *(float *)(*(long *)(param_1 + 0x288) + 0x2c) = pfVar2[2] * 0.017453294;
  *(float *)(*(long *)(param_1 + 0x288) + 0x24) = *pfVar3 * 0.017453294;
  *(float *)(*(long *)(param_1 + 0x288) + 0x28) = pfVar3[1] * 0.017453294;
  *(float *)(*(long *)(param_1 + 0x288) + 0x30) = pfVar3[2] * 0.017453294;
  fVar20 = (float)((long)(*pfVar5 * 11930465.0) & 0xffffffff) * 1.4629181e-09;
  if (fVar20 <= 3.1415927) {
    if (-3.1415927 <= fVar20) goto LAB_0073ed38;
    fVar10 = 6.2831855;
  }
  else {
    fVar10 = -6.2831855;
  }
  fVar20 = fVar20 + fVar10;
LAB_0073ed38:
  lVar9 = *(long *)(*(long *)(param_1 + 0x280) + 0x20);
  if ((lVar9 != 0) && (uVar1 = *(uint *)(lVar9 + 0x260), 0 < (int)uVar1)) {
    lVar9 = 0;
    uVar8 = 0;
    pfVar2 = (float *)(PTR_DAT_04bb2d00 + (ulong)((uint)(int)fVar20 >> 0x19) * 0x10);
    fVar10 = (float)((uint)(int)fVar20 >> 1 & 0xffffff) * 5.9604645e-08;
    fVar15 = *pfVar2 + fVar10 * pfVar2[1];
    fVar10 = pfVar2[2] + fVar10 * pfVar2[3];
    fVar24 = fVar15 * 0.0 + fVar10 * 0.0;
    fVar23 = fVar15 * -0.0 + fVar10 * 0.0;
    fVar22 = fVar10 + fVar15 * 0.0;
    fVar15 = fVar15 + fVar10 * -0.0;
    do {
      uVar7 = uVar8;
      if (*(uint *)(param_1 + 0x358) <= uVar8) {
        uVar7 = 0;
      }
      pfVar2 = (float *)(*(long *)(param_1 + 0x360) + uVar7 * 0x10);
      fVar10 = *pfVar2;
      fVar16 = pfVar2[1];
      fVar19 = pfVar2[2];
      fVar18 = pfVar2[3];
      local_a4 = 0;
      fStack_90 = ((-(fVar10 * fVar15) + fVar22 * fVar18) - fVar24 * fVar16) - fVar23 * fVar19;
      local_9c = (fVar22 * fVar10 + fVar15 * fVar18 + fVar23 * fVar16) - fVar24 * fVar19;
      fStack_98 = -(fVar10 * fVar23) + fVar24 * fVar18 + fVar22 * fVar16 + fVar15 * fVar19;
      local_94 = ((fVar24 * fVar10 + fVar23 * fVar18) - fVar15 * fVar16) + fVar22 * fVar19;
      local_a8 = fVar20;
      FUN_0073fa1c(auStack_8c,&local_9c);
      lVar6 = *(long *)(param_1 + 0x280);
      uVar7 = (ulong)*(uint *)(lVar6 + 0x90);
      if (uVar8 < uVar7) {
        uVar11 = *(undefined4 *)(puVar4 + 1);
        lVar6 = *(long *)(lVar6 + 0x98) + lVar9;
        *(undefined8 *)(lVar6 + 8) = *puVar4;
        *(undefined4 *)(lVar6 + 0x10) = uVar11;
        lVar6 = *(long *)(param_1 + 0x280);
        uVar7 = (ulong)*(uint *)(lVar6 + 0x90);
      }
      if (uVar8 < uVar7) {
        uVar11 = *(undefined4 *)(puVar4 + 1);
        lVar6 = *(long *)(lVar6 + 0x98) + lVar9;
        *(undefined8 *)(lVar6 + 0x34) = *puVar4;
        *(undefined4 *)(lVar6 + 0x3c) = uVar11;
        lVar6 = *(long *)(param_1 + 0x280);
      }
      FUN_03ef3a34(lVar6,&local_a8,uVar8 & 0xffffffff);
      fVar10 = local_a8;
      if (uVar8 < *(uint *)(*(long *)(param_1 + 0x280) + 0x90)) {
        lVar6 = *(long *)(*(long *)(param_1 + 0x280) + 0x98) + lVar9;
        *(float *)(lVar6 + 0x74) = local_a8;
        fVar16 = (float)local_a4;
        *(float *)(lVar6 + 0x78) = (float)local_a4;
        *(float *)(lVar6 + 0x7c) = local_a4._4_4_;
        fVar21 = local_a4._4_4_ * 0.5;
        fVar18 = cosf(fVar21);
        fVar19 = cosf(fVar16 * 0.5);
        fVar12 = cosf(fVar10 * 0.5);
        fVar21 = sinf(fVar21);
        fVar13 = sinf(fVar16 * 0.5);
        fVar14 = sinf(fVar10 * 0.5);
        fVar17 = fVar21 * fVar13 * fVar14 + fVar12 * fVar18 * fVar19;
        fVar10 = -(fVar21 * fVar13 * fVar12) + fVar14 * fVar18 * fVar19;
        fVar16 = fVar19 * fVar21 * fVar14 + fVar12 * fVar18 * fVar13;
        fVar18 = -(fVar18 * fVar13 * fVar14) + fVar12 * fVar19 * fVar21;
        fVar19 = fVar10 * fVar10 + fVar17 * fVar17 + fVar16 * fVar16 + fVar18 * fVar18;
        if (1.1920929e-07 < fVar19) {
          fVar19 = 1.0 / fVar19;
          fVar17 = fVar17 * fVar19;
          fVar10 = fVar10 * fVar19;
          fVar16 = fVar16 * fVar19;
          fVar18 = fVar18 * fVar19;
        }
        *(float *)(lVar6 + 100) = -fVar10;
        *(float *)(lVar6 + 0x68) = -fVar16;
        *(float *)(lVar6 + 0x6c) = -fVar18;
        *(float *)(lVar6 + 0x70) = fVar17;
      }
      lVar9 = lVar9 + 0x88;
      uVar8 = uVar8 + 1;
    } while ((ulong)uVar1 * 0x88 != lVar9);
  }
  return;
}

