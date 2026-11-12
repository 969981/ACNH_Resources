
uint FUN_008a8414(long param_1,uint param_2)

{
  long *plVar1;
  float *pfVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
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
  undefined *local_f0;
  long local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  long local_c8;
  long lStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined8 local_9c;
  
  uVar5 = FUN_008f96c0();
  if ((uVar5 & 1) != 0) {
    if (*(char *)(param_1 + 0x2e2) == '\0') {
      fVar19 = *(float *)(param_1 + 0x290);
      fVar12 = *(float *)(param_1 + 0x284);
      fVar20 = *(float *)(param_1 + 0x294);
      fVar13 = *(float *)(param_1 + 0x288);
      fVar10 = *(float *)(param_1 + 0x298);
      fVar14 = *(float *)(param_1 + 0x28c);
      *(float *)(param_1 + 0x284) = fVar19;
      *(float *)(param_1 + 0x288) = fVar20;
      *(float *)(param_1 + 0x28c) = fVar10;
      *(float *)(param_1 + 0x278) = fVar19 - fVar12;
      *(float *)(param_1 + 0x27c) = fVar20 - fVar13;
      *(float *)(param_1 + 0x280) = fVar10 - fVar14;
    }
    else {
      fVar19 = *(float *)(param_1 + 0x290);
      *(undefined8 *)(param_1 + 0x278) = 0;
      *(undefined4 *)(param_1 + 0x280) = 0;
      fVar20 = *(float *)(param_1 + 0x294);
      fVar10 = *(float *)(param_1 + 0x298);
      *(undefined1 *)(param_1 + 0x2e2) = 0;
      *(float *)(param_1 + 0x284) = fVar19;
      *(float *)(param_1 + 0x288) = fVar20;
      *(float *)(param_1 + 0x28c) = fVar10;
    }
    puVar3 = PTR_DAT_04bb5868;
    fVar23 = *(float *)(param_1 + 0x2a8);
    *(float *)PTR_DAT_04bb5868 = fVar19;
    *(float *)(puVar3 + 4) = fVar20;
    *(float *)(puVar3 + 8) = fVar10;
    puVar3 = PTR_DAT_04bb39d0;
    fVar21 = *(float *)(param_1 + 0x2ac);
    fVar15 = *(float *)(param_1 + 0x2c0);
    fVar12 = *(float *)(param_1 + 0x29c);
    fVar16 = *(float *)(param_1 + 0x2c8);
    *(float *)PTR_DAT_04bb39d0 = fVar23;
    *(float *)(puVar3 + 4) = fVar21;
    fVar14 = *(float *)(param_1 + 0x2b0);
    fVar12 = fVar15 - fVar12;
    fVar13 = *(float *)(param_1 + 0x2a4);
    *(float *)(puVar3 + 8) = fVar14;
    fVar13 = fVar16 - fVar13;
    fVar17 = SQRT(fVar12 * fVar12 + 0.0 + fVar13 * fVar13);
    if (0.0 < fVar17) {
      fVar17 = 1.0 / fVar17;
      fVar12 = fVar12 * fVar17;
      fVar18 = fVar17 * 0.0;
      fVar13 = fVar13 * fVar17;
      *(float *)(param_1 + 0x348) = fVar12;
      *(float *)(param_1 + 0x34c) = fVar18;
      *(float *)(param_1 + 0x350) = fVar13;
      fVar17 = SQRT(fVar18 * fVar18 + fVar12 * fVar12 + fVar13 * fVar13);
      if (0.0 < fVar17) {
        fVar17 = 1.0 / fVar17;
        fVar12 = fVar12 * fVar17;
        fVar18 = fVar18 * fVar17;
        fVar13 = fVar13 * fVar17;
        *(float *)(param_1 + 0x348) = fVar12;
        *(float *)(param_1 + 0x34c) = fVar18;
        *(float *)(param_1 + 0x350) = fVar13;
      }
      fVar15 = fVar18 * *(float *)(param_1 + 0x2c4) + fVar15 * fVar12 + fVar16 * fVar13;
      *(float *)(param_1 + 0x354) = fVar15;
      puVar3 = PTR_DAT_04bb34c8;
      *(float *)PTR_DAT_04bb34c8 = fVar12;
      *(float *)(puVar3 + 4) = fVar18;
      *(float *)(puVar3 + 8) = fVar13;
      *(float *)(puVar3 + 0xc) = fVar15;
    }
    puVar3 = PTR_DAT_04bb2200;
    fVar16 = fVar21 - fVar20;
    fVar15 = fVar23 - fVar19;
    fVar13 = fVar14;
    fVar12 = 0.0;
    if (*(char *)(param_1 + 0x2e1) != '\0') {
      fVar13 = 0.0;
      fVar12 = fVar14;
    }
    fVar22 = fVar13 - (fVar10 - fVar12);
    fVar14 = fVar22 * -0.0 + fVar15 * 0.0;
    fVar18 = fVar22 + fVar16 * -0.0;
    fVar17 = fVar16 * 0.0 - fVar15;
    if (((param_2 & 1) == 0) && ((*(byte *)(param_1 + 0x2e4) & 1) != 0)) {
      local_f0 = (undefined *)((ulong)local_f0 & 0xffffffff00000000);
      if ((*(long *)(*(long *)PTR_DAT_04bb2200 + 0x58) == 0) ||
         (**(long **)(*(long *)PTR_DAT_04bbdb78 + 0x28) == 0)) {
        plVar9 = (long *)0x0;
      }
      else {
        plVar9 = *(long **)(**(long **)(*(long *)PTR_DAT_04bbdb78 + 0x28) + 0x78);
      }
      if (((*PTR_DAT_04bb6208 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb6208), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb6200 = PTR_DAT_04bb6210 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6208);
      }
      if ((plVar9 != (long *)0x0) &&
         (uVar5 = (**(code **)*plVar9)(plVar9,PTR_DAT_04bb6200), (uVar5 & 1) != 0)) {
        *(float *)(plVar9 + 9) = fVar21;
        *(float *)((long)plVar9 + 0x4c) = fVar13;
        *(float *)(plVar9 + 7) = fVar19;
        *(float *)((long)plVar9 + 0x3c) = fVar20;
        *(float *)(plVar9 + 8) = fVar10 - fVar12;
        *(float *)((long)plVar9 + 0x44) = fVar23;
        if ((fVar17 != 0.0 || (fVar14 != 0.0 || fVar18 != 0.0)) &&
            (fVar22 != 0.0 || (fVar16 != 0.0 || fVar15 != 0.0))) {
          fVar20 = SQRT(fVar16 * fVar16 + fVar15 * fVar15 + fVar22 * fVar22);
          fVar19 = SQRT(fVar14 * fVar14 + fVar18 * fVar18 + fVar17 * fVar17);
          fVar13 = 1.0;
          fVar10 = 1.0;
          if (0.0 < fVar19) {
            fVar10 = 1.0 / fVar19;
          }
          if (0.0 < fVar20) {
            fVar13 = 1.0 / fVar20;
          }
          fVar22 = fVar22 * fVar13;
          fVar16 = fVar16 * fVar13;
          fVar15 = fVar15 * fVar13;
          fVar20 = -(fVar22 * fVar14 * fVar10) + fVar17 * fVar10 * fVar16;
          fVar13 = -(fVar15 * fVar17 * fVar10) + fVar18 * fVar10 * fVar22;
          fVar10 = -(fVar16 * fVar18 * fVar10) + fVar14 * fVar10 * fVar15;
          pfVar2 = (float *)(PTR_DAT_04bb2d00 +
                            ((ulong)(*(uint *)(param_1 + 0x2d4) >> 0x15) & 0x7f0));
          fVar14 = (float)(*(uint *)(param_1 + 0x2d4) >> 1 & 0xffffff) * 5.9604645e-08;
          fVar17 = *pfVar2 + fVar14 * pfVar2[1];
          fVar19 = pfVar2[2] + fVar14 * pfVar2[3];
          fVar15 = fVar15 * fVar17;
          fVar16 = fVar16 * fVar17;
          fVar22 = fVar22 * fVar17;
          fVar17 = -(fVar22 * fVar13) + fVar10 * fVar16 + fVar20 * fVar19;
          fVar21 = (fVar20 * fVar22 - fVar10 * fVar15) + fVar13 * fVar19;
          fVar23 = -(fVar16 * fVar20) + fVar13 * fVar15 + fVar10 * fVar19;
          fVar14 = (-(fVar16 * fVar13) - fVar20 * fVar15) - fVar10 * fVar22;
          fVar10 = (-(fVar22 * fVar21) + fVar19 * fVar17 + fVar16 * fVar23) - fVar15 * fVar14;
          fVar13 = ((fVar19 * fVar21 + fVar22 * fVar17) - fVar15 * fVar23) - fVar16 * fVar14;
          fVar14 = ((fVar15 * fVar21 - fVar16 * fVar17) + fVar19 * fVar23) - fVar22 * fVar14;
          *(float *)(plVar9 + 10) = fVar10;
          *(float *)((long)plVar9 + 0x54) = fVar13;
          *(float *)(plVar9 + 0xb) = fVar14;
          fVar19 = SQRT(fVar13 * fVar13 + fVar10 * fVar10 + fVar14 * fVar14);
          if (0.0 < fVar19) {
            fVar19 = 1.0 / fVar19;
            *(float *)(plVar9 + 10) = fVar10 * fVar19;
            *(float *)((long)plVar9 + 0x54) = fVar13 * fVar19;
            *(float *)(plVar9 + 0xb) = fVar14 * fVar19;
          }
        }
        plVar1 = (long *)(param_1 + 0x2e8);
        (**(code **)(*plVar9 + 0x20))(plVar9,plVar9 + 1);
        if (*(char *)(param_1 + 0x2e1) == '\0') {
          lVar6 = plVar9[1];
          *(long *)(param_1 + 0x2f0) = plVar9[2];
          *plVar1 = lVar6;
          lVar6 = plVar9[3];
          *(long *)(param_1 + 0x300) = plVar9[4];
          *(long *)(param_1 + 0x2f8) = lVar6;
          lVar7 = plVar9[6];
          lVar6 = plVar9[5];
        }
        else {
          local_a0 = 0;
          local_9c = 0x3f800000;
          local_a8 = *(undefined4 *)(param_1 + 0x2ac);
          uStack_a4 = *(undefined4 *)(param_1 + 0x2b0);
          local_d8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
          uStack_d0 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
          local_c8 = *(long *)(PTR_DAT_04bb2f80 + 0x20);
          lStack_c0 = *(long *)(PTR_DAT_04bb2f80 + 0x28);
          local_e8 = *(long *)PTR_DAT_04bb2f80;
          uStack_e0 = *(undefined8 *)(PTR_DAT_04bb2f80 + 8);
          uStack_ac = *(undefined4 *)(param_1 + 0x2a8);
          local_b0 = *(undefined4 *)(param_1 + 0x298);
          local_f0 = PTR_DAT_04bb41a0 + 0x10;
          local_b8 = *(undefined8 *)(param_1 + 0x290);
          FUN_038e4634(&local_f0);
          *(undefined8 *)(param_1 + 0x2f0) = uStack_e0;
          *plVar1 = local_e8;
          *(undefined8 *)(param_1 + 0x300) = uStack_d0;
          *(undefined8 *)(param_1 + 0x2f8) = local_d8;
          lVar6 = local_c8;
          lVar7 = lStack_c0;
        }
        *(long *)(param_1 + 0x310) = lVar7;
        *(long *)(param_1 + 0x308) = lVar6;
        FUN_007535b4(param_1 + 0x318,plVar1);
        local_f0 = (undefined *)((ulong)local_f0 & 0xffffffff00000000);
        if ((*(long *)(*(long *)puVar3 + 0x58) == 0) ||
           (**(long **)(*(long *)PTR_DAT_04bbdb78 + 0x28) == 0)) {
          puVar8 = (undefined8 *)0x0;
        }
        else {
          puVar8 = *(undefined8 **)(**(long **)(*(long *)PTR_DAT_04bbdb78 + 0x28) + 0x80);
        }
        if (((*PTR_DAT_04bb6230 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb6230), iVar4 != 0)) {
          *(undefined **)PTR_DAT_04bb6228 = PTR_DAT_04bb6238 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb6230);
        }
        if ((puVar8 != (undefined8 *)0x0) &&
           (uVar5 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bb6228), (uVar5 & 1) != 0)) {
          fVar13 = *(float *)(param_1 + 0x2cc) * 0.5;
          *(float *)(puVar8 + 0x14) = *(float *)(param_1 + 0x2cc);
          fVar10 = sinf(fVar13);
          *(float *)((long)puVar8 + 0xa4) = fVar10;
          fVar10 = cosf(fVar13);
          *(float *)(puVar8 + 0x15) = fVar10;
          fVar10 = tanf(fVar13);
          *(float *)((long)puVar8 + 0xac) = fVar10;
          *(undefined1 *)(puVar8 + 1) = 1;
        }
        if (*(long *)(*(long *)puVar3 + 0x58) != 0) {
          FUN_0161424c(*(undefined4 *)(param_1 + 0x2cc),*(long *)(*(long *)puVar3 + 0x58),0);
        }
        param_2 = param_2 | 1;
        if (*(char *)(param_1 + 0x2e1) != '\0') {
          lVar6 = *(long *)puVar3;
          *(float *)(*(long *)(lVar6 + 0x78) + 0x38) = -fVar12;
          uVar11 = 0x3f800000;
          if (*(char *)(param_1 + 0x2e0) != '\0') {
            uVar11 = *(undefined4 *)(param_1 + 0x2d0);
          }
          *(undefined4 *)(*(long *)(lVar6 + 0x78) + 0x40) = uVar11;
          FUN_015e90ec(*(undefined8 *)(lVar6 + 0x78));
        }
      }
    }
    lVar6 = *(long *)puVar3;
    lVar7 = *(long *)(lVar6 + 0x58);
    if (lVar7 != 0) {
      *(undefined4 *)(lVar7 + 0xf38) = *(undefined4 *)(param_1 + 0x2dc);
    }
    if (*(long *)(lVar6 + 0xd0) != 0) {
      FUN_01569780();
    }
  }
  return param_2;
}

