
/* WARNING: Removing unreachable block (ram,0x0165c044) */

float FUN_0165bf80(float param_1,float param_2,float param_3,long param_4)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  ulong uVar5;
  float *pfVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
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
  
  lVar9 = *(long *)(*(long *)(param_4 + 0x280) + 8);
  pfVar4 = (float *)(**(code **)(*(long *)(lVar9 + 0x1c0) + 0xf0))(lVar9 + 0x1c0);
  fVar21 = param_2 * param_2 + param_1 * param_1 + param_3 * param_3;
  if (0.0 < SQRT(fVar21)) {
    fVar21 = 1.0 / SQRT(fVar21);
    param_1 = param_1 * fVar21;
    param_2 = param_2 * fVar21;
    param_3 = param_3 * fVar21;
    fVar21 = param_2 * param_2 + param_1 * param_1 + param_3 * param_3;
  }
  lVar7 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x58) + 0xe88);
  iVar3 = (int)**(short **)PTR_DAT_04bbdc40;
  if (*(uint *)(lVar7 + 0x4f20) <= (uint)(int)**(short **)PTR_DAT_04bbdc40) {
    iVar3 = 0;
  }
  if (*(short *)(*(long *)(lVar7 + 0x4f28) + (long)iVar3 * 4 + 2) == 0) {
    plVar8 = (long *)0x0;
  }
  else {
    plVar8 = *(long **)(*(long *)(lVar7 + 0x4f38) +
                       (ulong)*(ushort *)(*(long *)(lVar7 + 0x4f28) + (long)iVar3 * 4) * 8);
  }
  fVar26 = *pfVar4 + 6360.0;
  if (((*PTR_DAT_04bbdc30 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbdc30), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bbdc28 = PTR_DAT_04bbd8c8 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbdc30);
  }
  uVar5 = (**(code **)(*plVar8 + 0x48))(plVar8,PTR_DAT_04bbdc28);
  fVar15 = 0.0;
  if ((uVar5 & 1) == 0) {
    plVar8 = (long *)0x0;
  }
  fVar23 = fVar26 * fVar26;
  fVar18 = *(float *)(plVar8 + 0x38);
  fVar20 = *(float *)((long)plVar8 + 0x1c4);
  fVar19 = *(float *)(plVar8 + 0x39);
  fVar17 = 0.0;
  fVar10 = fVar26 * param_2 + param_1 * 0.0 + param_3 * 0.0;
  fVar10 = fVar10 + fVar10;
  fVar11 = (fVar23 + -4.04496e+07) * fVar21 * -4.0 + fVar10 * fVar10;
  fVar16 = 0.0;
  if (0.0001 <= fVar11) {
    fVar15 = SQRT(fVar11);
    if (NAN(fVar15)) {
      fVar15 = sqrtf(fVar11);
    }
    fVar11 = ((-fVar10 - fVar15) * 0.5) / fVar21;
    fVar15 = param_1 * fVar11 + 0.0;
    fVar17 = fVar26 + param_2 * fVar11;
    fVar16 = param_3 * fVar11 + 0.0;
  }
  if ((((fVar15 == 0.0) && (fVar17 == 0.0)) && (fVar16 == 0.0)) ||
     (param_2 * (fVar17 - fVar26) + param_1 * fVar15 + param_3 * fVar16 <= 0.0)) {
    fVar15 = (fVar23 + -4.249736e+07) * fVar21 * -4.0 + fVar10 * fVar10;
    if (0.0001 <= fVar15) {
      fVar11 = SQRT(fVar15);
      if (NAN(fVar11)) {
        fVar11 = sqrtf(fVar15);
      }
      bVar2 = false;
      fVar21 = ((fVar11 - fVar10) * 0.5) / fVar21;
      fVar15 = param_1 * fVar21 + 0.0;
      fVar17 = fVar26 + param_2 * fVar21;
      fVar16 = param_3 * fVar21 + 0.0;
    }
    else {
      bVar2 = false;
      fVar15 = 0.0;
      fVar17 = 0.0;
      fVar16 = 0.0;
    }
  }
  else {
    bVar2 = true;
  }
  fVar23 = SQRT(fVar23);
  fVar17 = fVar17 - fVar26;
  fVar11 = SQRT(fVar17 * fVar17 + fVar15 * fVar15 + fVar16 * fVar16);
  fVar21 = 1.0 / fVar11;
  fVar17 = fVar17 * fVar21;
  fVar15 = fVar15 * fVar21;
  fVar16 = fVar16 * fVar21;
  fVar10 = expf((6360.0 - fVar23) * 0.025157232);
  fVar21 = -fVar23;
  if (!bVar2) {
    fVar21 = fVar23;
  }
  fVar21 = 1.0 - (fVar26 * fVar17 + fVar15 * 0.0 + fVar16 * 0.0) / fVar21;
  fVar21 = expf((((fVar21 * 5.25 + -6.8) * fVar21 + 3.83) * fVar21 + 0.459) * fVar21 + -0.00287);
  fVar24 = 0.0;
  plVar8 = (long *)(lVar9 + 0x1f0);
  plVar1 = (long *)(lVar9 + 0x220);
  iVar3 = 5;
  fVar11 = fVar11 / 5.0;
  fVar23 = fVar11 * fVar15 * 0.5 + 0.0;
  fVar26 = fVar26 + fVar11 * fVar17 * 0.5;
  fVar25 = fVar11 * fVar16 * 0.5 + 0.0;
  do {
    fVar27 = SQRT(fVar26 * fVar26 + fVar23 * fVar23 + fVar25 * fVar25);
    fVar12 = expf((6360.0 - fVar27) * 0.025157232);
    fVar13 = -fVar27;
    if (!bVar2) {
      fVar13 = fVar27;
    }
    fVar27 = 1.0 - (fVar26 * -fVar20 + fVar23 * -fVar18 + fVar25 * -fVar19) / fVar27;
    fVar27 = expf((((fVar27 * 5.25 + -6.8) * fVar27 + 3.83) * fVar27 + 0.459) * fVar27 + -0.00287);
    fVar13 = 1.0 - (fVar17 * fVar26 + fVar23 * fVar15 + fVar25 * fVar16) / fVar13;
    fVar13 = expf((((fVar13 * 5.25 + -6.8) * fVar13 + 3.83) * fVar13 + 0.459) * fVar13 + -0.00287);
    fVar22 = fVar10 * fVar21 * 0.25 + (fVar27 * 0.25 - fVar13 * 0.25) * fVar12;
    pfVar4 = (float *)(**(code **)(*plVar8 + 0xf0))(plVar8);
    fVar13 = *pfVar4;
    pfVar4 = (float *)(**(code **)(*plVar1 + 0xf0))(plVar1);
    fVar27 = *pfVar4 * 0.0015 * 12.566371;
    fVar14 = expf((fVar13 * 0.0155 * 12.566371 + fVar27) * -4.676967 * fVar22);
    expf((fVar13 * 0.03 * 12.566371 + fVar27) * -10.928214 * fVar22);
    expf((fVar13 * 0.1 * 12.566371 + fVar27) * -26.680214 * fVar22);
    iVar3 = iVar3 + -1;
    fVar24 = fVar24 + fVar11 * 0.006289308 * fVar12 * fVar14;
    fVar23 = fVar11 * fVar15 + fVar23;
    fVar26 = fVar11 * fVar17 + fVar26;
    fVar25 = fVar11 * fVar16 + fVar25;
  } while (iVar3 != 0);
  fVar21 = 1.0;
  if (bVar2) {
    pfVar4 = (float *)(**(code **)(*(long *)(lVar9 + 0x250) + 0xf0))(lVar9 + 0x250);
    fVar21 = *pfVar4;
  }
  pfVar4 = (float *)(**(code **)(*(long *)(lVar9 + 0x1f0) + 0xf0))(plVar8);
  fVar26 = *pfVar4;
  pfVar4 = (float *)(**(code **)(*(long *)(lVar9 + 0x280) + 0xf0))(lVar9 + 0x280);
  pfVar6 = (float *)(**(code **)(*(long *)(lVar9 + 0x2c0) + 0xf0))(lVar9 + 0x2c0);
  fVar15 = *pfVar6;
  fVar16 = *pfVar4;
  pfVar4 = (float *)(**(code **)(*(long *)(lVar9 + 0x220) + 0xf0))(plVar1);
  fVar10 = *pfVar4;
  pfVar4 = (float *)(**(code **)(*(long *)(lVar9 + 0x280) + 0xf0))(lVar9 + 0x280);
  pfVar6 = (float *)(**(code **)(*(long *)(lVar9 + 0x2c0) + 0xf0))(lVar9 + 0x2c0);
  fVar11 = *pfVar6;
  fVar23 = *pfVar4;
  fVar17 = (-(param_2 * fVar20) - param_1 * fVar18) - param_3 * fVar19;
  fVar18 = fVar17 * fVar17 + 1.0;
  fVar17 = powf(ABS(fVar17 * -1.9 + 1.9024999),1.5);
  return fVar18 * 0.75 * fVar24 * fVar21 * fVar26 * 0.0155 * fVar15 * fVar16 * 4.676967 +
         fVar24 * fVar21 * fVar10 * 0.0015 * fVar11 * fVar23 * ((fVar18 * 0.05038761) / fVar17);
}

