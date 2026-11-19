
void FUN_03a18b80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 long *param_5,uint param_6,undefined8 *param_7,undefined8 param_8,
                 undefined8 param_9)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  float *pfVar8;
  float *pfVar9;
  long *plVar10;
  long *plVar11;
  undefined8 uVar12;
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
  undefined8 uVar38;
  float fVar39;
  float fVar41;
  undefined8 uVar40;
  float fVar42;
  float fVar44;
  undefined8 uVar43;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float local_a4;
  
  if ((char)param_5[0xb] != '\0') {
    uVar12 = *param_7;
    uVar1 = param_6;
    if (*(uint *)(param_5 + 0x22) <= param_6) {
      uVar1 = 0;
    }
    pfVar8 = (float *)(param_5[0x23] + (long)(int)uVar1 * 0x2f0);
    pfVar9 = pfVar8 + 0x2e;
    *(undefined8 *)(pfVar8 + 0x30) = param_7[1];
    *(undefined8 *)pfVar9 = uVar12;
    uVar12 = param_7[2];
    *(undefined8 *)(pfVar8 + 0x34) = param_7[3];
    *(undefined8 *)(pfVar8 + 0x32) = uVar12;
    uVar12 = param_7[4];
    *(undefined8 *)(pfVar8 + 0x38) = param_7[5];
    *(undefined8 *)(pfVar8 + 0x36) = uVar12;
    FUN_007535b4(pfVar8 + 0x3a,param_7);
    FUN_03982fb0(param_1,param_2,param_3,param_4,pfVar9,param_8,param_9);
    puVar4 = PTR_DAT_04bd14f0;
    fVar15 = pfVar8[0x2f];
    fVar16 = pfVar8[0x30];
    fVar30 = pfVar8[0x33];
    fVar13 = pfVar8[0x34];
    fVar31 = pfVar8[0x37];
    fVar14 = pfVar8[0x38];
    fVar32 = *pfVar9;
    fVar33 = pfVar8[0x32];
    fVar35 = -pfVar8[0x31];
    fVar34 = pfVar8[0x36];
    fVar37 = -pfVar8[0x35];
    plVar10 = (long *)param_5[0x25];
    fVar36 = -pfVar8[0x39];
    if (((*PTR_DAT_04bd14f0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd14f0), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bd14e8 = PTR_DAT_04bb2000 + 0x10;
      __cxa_guard_release(PTR_DAT_04bd14f0);
    }
    puVar3 = PTR_DAT_04bd14e8;
    uVar6 = (**(code **)(*plVar10 + 0x48))(plVar10,PTR_DAT_04bd14e8);
    if ((uVar6 & 1) == 0) {
      plVar10 = (long *)0x0;
    }
    plVar11 = (long *)param_5[0x25];
    fVar17 = 0.0;
    if ((char)plVar10[0x51] != '\0') {
      fVar17 = fVar33 * fVar37 + fVar32 * fVar35 + fVar34 * fVar36;
    }
    if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd14f0), iVar5 != 0)) {
      *(undefined **)puVar3 = PTR_DAT_04bb2000 + 0x10;
      __cxa_guard_release(PTR_DAT_04bd14f0);
    }
    uVar6 = (**(code **)(*plVar11 + 0x48))(plVar11,puVar3);
    if ((uVar6 & 1) == 0) {
      plVar11 = (long *)0x0;
    }
    plVar10 = (long *)param_5[0x25];
    fVar32 = 0.0;
    if ((char)plVar11[0x55] != '\0') {
      fVar32 = fVar30 * fVar37 + fVar15 * fVar35 + fVar31 * fVar36;
    }
    if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd14f0), iVar5 != 0)) {
      *(undefined **)puVar3 = PTR_DAT_04bb2000 + 0x10;
      __cxa_guard_release(PTR_DAT_04bd14f0);
    }
    uVar6 = (**(code **)(*plVar10 + 0x48))(plVar10,puVar3);
    if ((uVar6 & 1) == 0) {
      plVar10 = (long *)0x0;
    }
    fVar15 = 0.0;
    if ((char)plVar10[0x59] != '\0') {
      fVar15 = fVar13 * fVar37 + fVar16 * fVar35 + fVar14 * fVar36;
    }
    uVar1 = param_6;
    if (*(uint *)(param_5 + 0x2f) <= param_6) {
      uVar1 = 0;
    }
    lVar7 = param_5[0x30] + (long)(int)uVar1 * 0x548;
    *(float *)(lVar7 + 0x174) = fVar17;
    *(float *)(lVar7 + 0x178) = fVar32;
    *(float *)(lVar7 + 0x17c) = fVar15;
    plVar10 = (long *)param_5[0x25];
    if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd14f0), iVar5 != 0)) {
      *(undefined **)puVar3 = PTR_DAT_04bb2000 + 0x10;
      __cxa_guard_release(PTR_DAT_04bd14f0);
    }
    uVar6 = (**(code **)(*plVar10 + 0x48))(plVar10,puVar3);
    if ((uVar6 & 1) == 0) {
      plVar10 = (long *)0x0;
    }
    fVar13 = *(float *)(plVar10 + 0x25);
    fVar14 = *(float *)((long)plVar10 + 300);
    fVar16 = *(float *)(plVar10 + 0x26);
    FUN_03a28264(param_1,param_2,param_3,param_4,param_5 + 0x2e,param_6,param_7,param_8,param_9,
                 &local_b0);
    *(undefined1 *)(pfVar8 + 0x2d) = 1;
    *pfVar8 = local_b0;
    pfVar8[1] = fStack_ac;
    plVar10 = (long *)param_5[0x25];
    if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd14f0), iVar5 != 0)) {
      *(undefined **)puVar3 = PTR_DAT_04bb2000 + 0x10;
      __cxa_guard_release(PTR_DAT_04bd14f0);
    }
    puVar3 = PTR_DAT_04bd14e8;
    uVar6 = (**(code **)(*plVar10 + 0x48))(plVar10,PTR_DAT_04bd14e8);
    plVar11 = (long *)param_5[0x25];
    if ((uVar6 & 1) == 0) {
      plVar10 = (long *)0x0;
    }
    fVar30 = *(float *)(plVar10 + 0x3a);
    if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd14f0), iVar5 != 0)) {
      *(undefined **)puVar3 = PTR_DAT_04bb2000 + 0x10;
      __cxa_guard_release(PTR_DAT_04bd14f0);
    }
    puVar3 = PTR_DAT_04bd14e8;
    uVar6 = (**(code **)(*plVar11 + 0x48))(plVar11,PTR_DAT_04bd14e8);
    if ((uVar6 & 1) == 0) {
      plVar11 = (long *)0x0;
    }
    fVar31 = -local_b0;
    if (0.0 <= local_b0) {
      fVar31 = local_b0;
    }
    fVar33 = -fStack_ac;
    if (0.0 <= fStack_ac) {
      fVar33 = fStack_ac;
    }
    if ((((local_a8 < 0.0) || (1.0 < local_a8)) || (fVar30 + local_a4 < fVar31)) ||
       (fVar34 = *(float *)((long)plVar11 + 0x1d4), fVar34 + local_a4 < fVar33)) {
      *(undefined1 *)(pfVar8 + 0x2d) = 0;
    }
    else {
      uVar2 = *(uint *)(param_5 + 0x22);
      lVar7 = param_5[0x23];
      pfVar8[7] = 0.0;
      pfVar8[0xb] = 0.0;
      pfVar8[0xd] = 0.0;
      pfVar8[0xe] = 0.0;
      uVar1 = param_6;
      if (uVar2 <= param_6) {
        uVar1 = 0;
      }
      pfVar8[0x10] = fVar15 + fVar16;
      lVar7 = lVar7 + (long)(int)uVar1 * 0x2f0;
      pfVar8[5] = 1.0;
      pfVar8[6] = 0.0;
      pfVar8[9] = 0.0;
      pfVar8[10] = 1.0;
      pfVar8[0xf] = 1.0;
      pfVar8[8] = fVar17 + fVar13;
      pfVar8[0xc] = fVar32 + fVar14;
      fVar13 = (float)*(undefined8 *)(lVar7 + 0xb8);
      fVar32 = (float)*(undefined8 *)(pfVar8 + 5);
      fVar35 = (float)((ulong)*(undefined8 *)(pfVar8 + 5) >> 0x20);
      fVar36 = (float)*(undefined8 *)(pfVar8 + 7);
      fVar37 = (float)((ulong)*(undefined8 *)(pfVar8 + 7) >> 0x20);
      fVar14 = (float)((ulong)*(undefined8 *)(lVar7 + 0xb8) >> 0x20);
      fVar17 = (float)*(undefined8 *)(pfVar8 + 9);
      fVar19 = (float)((ulong)*(undefined8 *)(pfVar8 + 9) >> 0x20);
      fVar21 = (float)*(undefined8 *)(pfVar8 + 0xb);
      fVar23 = (float)((ulong)*(undefined8 *)(pfVar8 + 0xb) >> 0x20);
      fVar16 = (float)*(undefined8 *)(lVar7 + 0xd8);
      fVar28 = (float)((ulong)*(undefined8 *)(lVar7 + 0xd8) >> 0x20);
      fVar15 = (float)*(undefined8 *)(lVar7 + 0xc0);
      fVar39 = (float)*(undefined8 *)(pfVar8 + 0xd);
      fVar41 = (float)((ulong)*(undefined8 *)(pfVar8 + 0xd) >> 0x20);
      fVar42 = (float)*(undefined8 *)(pfVar8 + 0xf);
      fVar44 = (float)((ulong)*(undefined8 *)(pfVar8 + 0xf) >> 0x20);
      fVar25 = (float)*(undefined8 *)(lVar7 + 200);
      fVar26 = (float)((ulong)*(undefined8 *)(lVar7 + 200) >> 0x20);
      fVar29 = (float)*(undefined8 *)(lVar7 + 0xe0);
      fVar27 = (float)*(undefined8 *)(lVar7 + 0xd0);
      fVar18 = fVar32 * fVar13 + fVar17 * fVar14 + fVar39 * fVar15 + 0.0;
      fVar20 = fVar35 * fVar13 + fVar19 * fVar14 + fVar41 * fVar15 + 0.0;
      fVar22 = fVar36 * fVar13 + fVar21 * fVar14 + fVar42 * fVar15 + 0.0;
      fVar24 = (float)((ulong)*(undefined8 *)(lVar7 + 0xc0) >> 0x20) +
               fVar37 * fVar13 + fVar23 * fVar14 + fVar44 * fVar15;
      fVar13 = fVar32 * fVar16 + fVar17 * fVar28 + fVar39 * fVar29 + 0.0;
      fVar14 = fVar35 * fVar16 + fVar19 * fVar28 + fVar41 * fVar29 + 0.0;
      fVar15 = fVar36 * fVar16 + fVar21 * fVar28 + fVar42 * fVar29 + 0.0;
      fVar16 = (float)((ulong)*(undefined8 *)(lVar7 + 0xe0) >> 0x20) +
               fVar37 * fVar16 + fVar23 * fVar28 + fVar44 * fVar29;
      fVar32 = fVar32 * fVar25 + fVar17 * fVar26 + fVar39 * fVar27 + 0.0;
      fVar35 = fVar35 * fVar25 + fVar19 * fVar26 + fVar41 * fVar27 + 0.0;
      fVar36 = fVar36 * fVar25 + fVar21 * fVar26 + fVar42 * fVar27 + 0.0;
      fVar37 = (float)((ulong)*(undefined8 *)(lVar7 + 0xd0) >> 0x20) +
               fVar37 * fVar25 + fVar23 * fVar26 + fVar44 * fVar27;
      *(ulong *)(pfVar8 + 0x13) = CONCAT44(fVar24,fVar22);
      *(ulong *)(pfVar8 + 0x11) = CONCAT44(fVar20,fVar18);
      *(ulong *)(pfVar8 + 0x1b) = CONCAT44(fVar16,fVar15);
      *(ulong *)(pfVar8 + 0x19) = CONCAT44(fVar14,fVar13);
      *(ulong *)(pfVar8 + 0x17) = CONCAT44(fVar37,fVar36);
      *(ulong *)(pfVar8 + 0x15) = CONCAT44(fVar35,fVar32);
      uVar12 = *(undefined8 *)(lVar7 + 0x130);
      uVar38 = *(undefined8 *)(lVar7 + 0x140);
      uVar43 = *(undefined8 *)(lVar7 + 0x150);
      uVar40 = *(undefined8 *)(lVar7 + 0x148);
      fVar17 = (float)*(undefined8 *)(lVar7 + 0x118);
      fVar19 = (float)((ulong)*(undefined8 *)(lVar7 + 0x118) >> 0x20);
      fVar21 = (float)*(undefined8 *)(lVar7 + 0x120);
      fVar23 = (float)*(undefined8 *)(lVar7 + 0x128);
      fVar25 = (float)((ulong)*(undefined8 *)(lVar7 + 0x128) >> 0x20);
      fVar26 = (float)uVar12;
      fVar27 = (float)*(undefined8 *)(lVar7 + 0x138);
      fVar28 = (float)((ulong)*(undefined8 *)(lVar7 + 0x138) >> 0x20);
      fVar29 = (float)uVar38;
      *(ulong *)(pfVar8 + 0x1f) =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x120) >> 0x20) +
                    fVar24 * fVar17 + fVar37 * fVar19 + fVar16 * fVar21,
                    fVar22 * fVar17 + fVar36 * fVar19 + fVar15 * fVar21 + 0.0);
      *(ulong *)(pfVar8 + 0x1d) =
           CONCAT44(fVar20 * fVar17 + fVar35 * fVar19 + fVar14 * fVar21 + 0.0,
                    fVar18 * fVar17 + fVar32 * fVar19 + fVar13 * fVar21 + 0.0);
      fVar17 = (float)uVar40;
      fVar19 = (float)((ulong)uVar40 >> 0x20);
      fVar21 = (float)uVar43;
      *(ulong *)(pfVar8 + 0x23) =
           CONCAT44((float)((ulong)uVar12 >> 0x20) +
                    fVar24 * fVar23 + fVar37 * fVar25 + fVar16 * fVar26,
                    fVar22 * fVar23 + fVar36 * fVar25 + fVar15 * fVar26 + 0.0);
      *(ulong *)(pfVar8 + 0x21) =
           CONCAT44(fVar20 * fVar23 + fVar35 * fVar25 + fVar14 * fVar26 + 0.0,
                    fVar18 * fVar23 + fVar32 * fVar25 + fVar13 * fVar26 + 0.0);
      *(ulong *)(pfVar8 + 0x27) =
           CONCAT44((float)((ulong)uVar38 >> 0x20) +
                    fVar24 * fVar27 + fVar37 * fVar28 + fVar16 * fVar29,
                    fVar22 * fVar27 + fVar36 * fVar28 + fVar15 * fVar29 + 0.0);
      *(ulong *)(pfVar8 + 0x25) =
           CONCAT44(fVar20 * fVar27 + fVar35 * fVar28 + fVar14 * fVar29 + 0.0,
                    fVar18 * fVar27 + fVar32 * fVar28 + fVar13 * fVar29 + 0.0);
      *(ulong *)(pfVar8 + 0x2b) =
           CONCAT44((float)((ulong)uVar43 >> 0x20) +
                    fVar24 * fVar17 + fVar37 * fVar19 + fVar16 * fVar21,
                    fVar22 * fVar17 + fVar36 * fVar19 + fVar15 * fVar21 + 0.0);
      *(ulong *)(pfVar8 + 0x29) =
           CONCAT44(fVar20 * fVar17 + fVar35 * fVar19 + fVar14 * fVar21 + 0.0,
                    fVar18 * fVar17 + fVar32 * fVar19 + fVar13 * fVar21 + 0.0);
      if ((fVar31 == 1.0) && (fVar30 == 1.0)) {
        pfVar8[2] = 0.0;
      }
      else {
        if (1.0 <= fVar30) {
          fVar31 = fVar31 + -1.0;
          fVar30 = fVar30 + -1.0;
        }
        else {
          fVar31 = fVar31 - fVar30;
          fVar30 = 1.0 - fVar30;
        }
        fVar31 = fVar31 / fVar30;
        fVar30 = 1.0;
        if (fVar31 <= 1.0) {
          fVar30 = fVar31;
        }
        fVar17 = 0.0;
        if (0.0 <= fVar31) {
          fVar17 = fVar30;
        }
        pfVar8[2] = fVar17;
      }
      if ((fVar33 == 1.0) && (fVar34 == 1.0)) {
        pfVar8[3] = 0.0;
      }
      else {
        if (1.0 <= fVar34) {
          fVar33 = fVar33 + -1.0;
          fVar34 = fVar34 + -1.0;
        }
        else {
          fVar33 = fVar33 - fVar34;
          fVar34 = 1.0 - fVar34;
        }
        fVar33 = fVar33 / fVar34;
        fVar30 = 1.0;
        if (fVar33 <= 1.0) {
          fVar30 = fVar33;
        }
        fVar31 = 0.0;
        if (0.0 <= fVar33) {
          fVar31 = fVar30;
        }
        pfVar8[3] = fVar31;
      }
      plVar10 = (long *)param_5[0x25];
      fVar24 = fVar24 + fVar20 * 0.0 + fVar18 * 0.0 + fVar22 * 0.0;
      fVar37 = fVar37 + fVar35 * 0.0 + fVar32 * 0.0 + fVar36 * 0.0;
      fVar16 = fVar16 + fVar14 * 0.0 + fVar13 * 0.0 + fVar15 * 0.0;
      if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bd14f0), iVar5 != 0)) {
        *(undefined **)puVar3 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bd14f0);
      }
      uVar6 = (**(code **)(*plVar10 + 0x48))(plVar10,PTR_DAT_04bd14e8);
      if ((uVar6 & 1) == 0) {
        plVar10 = (long *)0x0;
      }
      fVar15 = *(float *)((long)plVar10 + 500);
      fVar13 = *(float *)(plVar10 + 0x3e);
      fVar30 = *(float *)(plVar10 + 0x3f);
      fVar31 = (pfVar8[0x18] + fVar15 * pfVar8[0x16] + fVar13 * pfVar8[0x15] + fVar30 * pfVar8[0x17]
               ) - fVar37;
      fVar14 = (pfVar8[0x14] + fVar15 * pfVar8[0x12] + fVar13 * pfVar8[0x11] + fVar30 * pfVar8[0x13]
               ) - fVar24;
      fVar15 = (pfVar8[0x1c] + fVar15 * pfVar8[0x1a] + fVar13 * pfVar8[0x19] + fVar30 * pfVar8[0x1b]
               ) - fVar16;
      fVar13 = SQRT(fVar31 * fVar31 + fVar14 * fVar14 + fVar15 * fVar15);
      if (0.0 < fVar13) {
        fVar13 = 1.0 / fVar13;
        fVar14 = fVar14 * fVar13;
        fVar31 = fVar31 * fVar13;
        fVar15 = fVar15 * fVar13;
      }
      fVar32 = -fVar24;
      fVar30 = -fVar37;
      fVar33 = -fVar16;
      fVar13 = SQRT(fVar37 * fVar37 + fVar24 * fVar24 + fVar16 * fVar16);
      if (0.0 < fVar13) {
        fVar13 = 1.0 / fVar13;
        fVar32 = fVar13 * fVar32;
        fVar30 = fVar13 * fVar30;
        fVar33 = fVar13 * fVar33;
      }
      fVar34 = -(fVar15 * fVar30) + fVar33 * fVar31;
      fVar13 = -(fVar31 * fVar32) + fVar30 * fVar14;
      fVar16 = -(fVar14 * fVar33) + fVar32 * fVar15;
      fVar13 = atan2f(SQRT(fVar16 * fVar16 + fVar34 * fVar34 + fVar13 * fVar13),
                      fVar31 * fVar30 + fVar32 * fVar14 + fVar33 * fVar15);
      pfVar8[4] = fVar13;
      (**(code **)(*param_5 + 0xf0))(param_5,param_6,pfVar8,pfVar8);
    }
  }
  return;
}

