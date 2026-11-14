
void FUN_01625a50(float param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  float *pfVar11;
  float *pfVar12;
  int *piVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  float fVar21;
  int iVar22;
  float fVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  puVar9 = PTR_DAT_04bbd530;
  puVar8 = PTR_DAT_04bb62d0;
  puVar7 = PTR_DAT_04bb3898;
  puVar6 = PTR_DAT_04bb3560;
  puVar5 = PTR_DAT_04bb2ff8;
  puVar4 = PTR_DAT_04bb2fb0;
  plVar17 = *(long **)(param_2 + 0x28);
  if (plVar17 != (long *)0x0) {
    fVar31 = 1.0 - param_1;
    puVar1 = PTR_DAT_04bb2fd0 + 0x10;
    plVar18 = (long *)(param_3 + 0x28);
    plVar19 = (long *)(param_4 + 0x28);
    puVar2 = PTR_DAT_04bb2fb8 + 0x10;
    do {
      plVar18 = (long *)*plVar18;
      plVar19 = (long *)*plVar19;
      if (((*PTR_DAT_04bb31e0 & 1) == 0) &&
         (iVar22 = __cxa_guard_acquire(PTR_DAT_04bb31e0), iVar22 != 0)) {
        *(undefined **)PTR_DAT_04bb31d8 = puVar1;
        __cxa_guard_release(PTR_DAT_04bb31e0);
      }
      uVar10 = (**(code **)(*plVar17 + 0x10))(plVar17,PTR_DAT_04bb31d8);
      if ((uVar10 & 1) != 0) {
        if (((*PTR_DAT_04bb31e0 & 1) == 0) &&
           (iVar22 = __cxa_guard_acquire(PTR_DAT_04bb31e0), iVar22 != 0)) {
          *(undefined **)PTR_DAT_04bb31d8 = PTR_DAT_04bb2fd0 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb31e0);
        }
        if (plVar18 == (long *)0x0) {
          plVar20 = (long *)0x0;
        }
        else {
          uVar10 = (**(code **)(*plVar18 + 0x10))(plVar18,PTR_DAT_04bb31d8);
          plVar20 = plVar18;
          if ((uVar10 & 1) == 0) {
            plVar20 = (long *)0x0;
          }
        }
        if (((*PTR_DAT_04bb31e0 & 1) == 0) &&
           (iVar22 = __cxa_guard_acquire(PTR_DAT_04bb31e0), iVar22 != 0)) {
          *(undefined **)PTR_DAT_04bb31d8 = PTR_DAT_04bb2fd0 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb31e0);
        }
        if (((plVar19 != (long *)0x0) &&
            (uVar10 = (**(code **)(*plVar19 + 0x10))(plVar19,PTR_DAT_04bb31d8),
            plVar20 != (long *)0x0)) && ((uVar10 & 1) != 0)) {
          pfVar11 = (float *)(**(code **)(*plVar20 + 0xf0))(plVar20);
          pfVar12 = (float *)(**(code **)(*plVar19 + 0xf0))(plVar19);
          fVar21 = *pfVar11;
          fVar23 = *pfVar12;
          pfVar11 = (float *)(**(code **)(*plVar17 + 0xf0))(plVar17);
          *pfVar11 = fVar31 * fVar21 + param_1 * fVar23;
        }
      }
      if (((*PTR_DAT_04bb3390 & 1) == 0) &&
         (iVar22 = __cxa_guard_acquire(PTR_DAT_04bb3390), iVar22 != 0)) {
        *(undefined **)PTR_DAT_04bb3388 = PTR_DAT_04bb2fd0 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3390);
      }
      uVar10 = (**(code **)(*plVar17 + 0x10))(plVar17,PTR_DAT_04bb3388);
      if ((uVar10 & 1) != 0) {
        if (((*PTR_DAT_04bb3390 & 1) == 0) &&
           (iVar22 = __cxa_guard_acquire(PTR_DAT_04bb3390), iVar22 != 0)) {
          *(undefined **)PTR_DAT_04bb3388 = PTR_DAT_04bb2fd0 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb3390);
        }
        if (plVar18 == (long *)0x0) {
          plVar20 = (long *)0x0;
        }
        else {
          uVar10 = (**(code **)(*plVar18 + 0x10))(plVar18,PTR_DAT_04bb3388);
          plVar20 = plVar18;
          if ((uVar10 & 1) == 0) {
            plVar20 = (long *)0x0;
          }
        }
        if (((*PTR_DAT_04bb3390 & 1) == 0) &&
           (iVar22 = __cxa_guard_acquire(PTR_DAT_04bb3390), iVar22 != 0)) {
          *(undefined **)PTR_DAT_04bb3388 = PTR_DAT_04bb2fd0 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb3390);
        }
        if (((plVar19 != (long *)0x0) &&
            (uVar10 = (**(code **)(*plVar19 + 0x10))(plVar19,PTR_DAT_04bb3388),
            plVar20 != (long *)0x0)) && ((uVar10 & 1) != 0)) {
          piVar13 = (int *)(**(code **)(*plVar20 + 0xf0))(plVar20);
          piVar14 = (int *)(**(code **)(*plVar19 + 0xf0))(plVar19);
          iVar22 = *piVar14;
          iVar24 = *piVar13;
          piVar13 = (int *)(**(code **)(*plVar17 + 0xf0))(plVar17);
          *piVar13 = (int)(fVar31 * (float)iVar24 + param_1 * (float)iVar22);
        }
      }
      if (((*puVar8 & 1) == 0) && (iVar22 = __cxa_guard_acquire(puVar8), iVar22 != 0)) {
        *(undefined **)PTR_DAT_04bb62c8 = PTR_DAT_04bb2fd0 + 0x10;
        __cxa_guard_release(puVar8);
      }
      uVar10 = (**(code **)(*plVar17 + 0x10))(plVar17,PTR_DAT_04bb62c8);
      if ((uVar10 & 1) != 0) {
        if (((*puVar8 & 1) == 0) && (iVar22 = __cxa_guard_acquire(puVar8), iVar22 != 0)) {
          *(undefined **)PTR_DAT_04bb62c8 = PTR_DAT_04bb2fd0 + 0x10;
          __cxa_guard_release(puVar8);
        }
        if (plVar18 == (long *)0x0) {
          plVar20 = (long *)0x0;
          bVar3 = *puVar8;
        }
        else {
          uVar10 = (**(code **)(*plVar18 + 0x10))(plVar18,PTR_DAT_04bb62c8);
          plVar20 = plVar18;
          if ((uVar10 & 1) == 0) {
            plVar20 = (long *)0x0;
          }
          bVar3 = *puVar8;
        }
        if (((bVar3 & 1) == 0) && (iVar22 = __cxa_guard_acquire(puVar8), iVar22 != 0)) {
          *(undefined **)PTR_DAT_04bb62c8 = PTR_DAT_04bb2fd0 + 0x10;
          __cxa_guard_release(puVar8);
        }
        if (((plVar19 != (long *)0x0) &&
            (uVar10 = (**(code **)(*plVar19 + 0x10))(plVar19,PTR_DAT_04bb62c8),
            plVar20 != (long *)0x0)) && ((uVar10 & 1) != 0)) {
          puVar15 = (undefined4 *)(**(code **)(*plVar20 + 0xf0))(plVar20);
          puVar16 = (undefined4 *)(**(code **)(*plVar19 + 0xf0))(plVar19);
          fVar21 = (float)NEON_ucvtf(*puVar16);
          fVar23 = (float)NEON_ucvtf(*puVar15);
          piVar13 = (int *)(**(code **)(*plVar17 + 0xf0))(plVar17);
          *piVar13 = (int)(fVar31 * fVar23 + param_1 * fVar21);
        }
      }
      if (((*puVar9 & 1) == 0) && (iVar22 = __cxa_guard_acquire(puVar9), iVar22 != 0)) {
        *(undefined **)PTR_DAT_04bbd528 = PTR_DAT_04bb2fd0 + 0x10;
        __cxa_guard_release(puVar9);
      }
      uVar10 = (**(code **)(*plVar17 + 0x10))(plVar17,PTR_DAT_04bbd528);
      if ((uVar10 & 1) != 0) {
        if (((*puVar9 & 1) == 0) && (iVar22 = __cxa_guard_acquire(puVar9), iVar22 != 0)) {
          *(undefined **)PTR_DAT_04bbd528 = PTR_DAT_04bb2fd0 + 0x10;
          __cxa_guard_release(puVar9);
        }
        if (plVar18 == (long *)0x0) {
          plVar20 = (long *)0x0;
          bVar3 = *puVar9;
        }
        else {
          uVar10 = (**(code **)(*plVar18 + 0x10))(plVar18,PTR_DAT_04bbd528);
          plVar20 = plVar18;
          if ((uVar10 & 1) == 0) {
            plVar20 = (long *)0x0;
          }
          bVar3 = *puVar9;
        }
        if (((bVar3 & 1) == 0) && (iVar22 = __cxa_guard_acquire(puVar9), iVar22 != 0)) {
          *(undefined **)PTR_DAT_04bbd528 = PTR_DAT_04bb2fd0 + 0x10;
          __cxa_guard_release(puVar9);
        }
        if (((plVar19 != (long *)0x0) &&
            (uVar10 = (**(code **)(*plVar19 + 0x10))(plVar19,PTR_DAT_04bbd528),
            plVar20 != (long *)0x0)) && ((uVar10 & 1) != 0)) {
          pfVar11 = (float *)(**(code **)(*plVar20 + 0xf0))(plVar20);
          pfVar12 = (float *)(**(code **)(*plVar19 + 0xf0))(plVar19);
          fVar21 = *pfVar11;
          fVar23 = pfVar11[1];
          fVar25 = *pfVar12;
          fVar27 = pfVar12[1];
          pfVar11 = (float *)(**(code **)(*plVar17 + 0xf0))(plVar17);
          *pfVar11 = fVar31 * fVar21 + param_1 * fVar25;
          pfVar11[1] = fVar31 * fVar23 + param_1 * fVar27;
        }
      }
      if (((*puVar5 & 1) == 0) && (iVar22 = __cxa_guard_acquire(puVar5), iVar22 != 0)) {
        *(undefined **)PTR_DAT_04bb2ff0 = PTR_DAT_04bb2fd0 + 0x10;
        __cxa_guard_release(puVar5);
      }
      uVar10 = (**(code **)(*plVar17 + 0x10))(plVar17,PTR_DAT_04bb2ff0);
      if ((uVar10 & 1) != 0) {
        if (((*puVar5 & 1) == 0) && (iVar22 = __cxa_guard_acquire(puVar5), iVar22 != 0)) {
          *(undefined **)PTR_DAT_04bb2ff0 = PTR_DAT_04bb2fd0 + 0x10;
          __cxa_guard_release(puVar5);
        }
        if (plVar18 == (long *)0x0) {
          plVar20 = (long *)0x0;
          bVar3 = *puVar5;
        }
        else {
          uVar10 = (**(code **)(*plVar18 + 0x10))(plVar18,PTR_DAT_04bb2ff0);
          plVar20 = plVar18;
          if ((uVar10 & 1) == 0) {
            plVar20 = (long *)0x0;
          }
          bVar3 = *puVar5;
        }
        if (((bVar3 & 1) == 0) && (iVar22 = __cxa_guard_acquire(puVar5), iVar22 != 0)) {
          *(undefined **)PTR_DAT_04bb2ff0 = PTR_DAT_04bb2fd0 + 0x10;
          __cxa_guard_release(puVar5);
        }
        if (((plVar19 != (long *)0x0) &&
            (uVar10 = (**(code **)(*plVar19 + 0x10))(plVar19,PTR_DAT_04bb2ff0),
            plVar20 != (long *)0x0)) && ((uVar10 & 1) != 0)) {
          pfVar11 = (float *)(**(code **)(*plVar20 + 0xf0))(plVar20);
          pfVar12 = (float *)(**(code **)(*plVar19 + 0xf0))(plVar19);
          fVar21 = *pfVar11;
          fVar25 = pfVar11[1];
          fVar26 = *pfVar12;
          fVar28 = pfVar12[1];
          fVar27 = pfVar12[2];
          fVar23 = pfVar11[2];
          pfVar11 = (float *)(**(code **)(*plVar17 + 0xf0))(plVar17);
          *pfVar11 = fVar31 * fVar21 + param_1 * fVar26;
          pfVar11[1] = fVar31 * fVar25 + param_1 * fVar28;
          pfVar11[2] = fVar31 * fVar23 + param_1 * fVar27;
        }
      }
      if (((*puVar7 & 1) == 0) && (iVar22 = __cxa_guard_acquire(puVar7), iVar22 != 0)) {
        *(undefined **)PTR_DAT_04bb3890 = PTR_DAT_04bb2fd0 + 0x10;
        __cxa_guard_release(puVar7);
      }
      uVar10 = (**(code **)(*plVar17 + 0x10))(plVar17,PTR_DAT_04bb3890);
      if ((uVar10 & 1) != 0) {
        if (((*puVar7 & 1) == 0) && (iVar22 = __cxa_guard_acquire(puVar7), iVar22 != 0)) {
          *(undefined **)PTR_DAT_04bb3890 = PTR_DAT_04bb2fd0 + 0x10;
          __cxa_guard_release(puVar7);
        }
        if (plVar18 == (long *)0x0) {
          plVar20 = (long *)0x0;
          bVar3 = *puVar7;
        }
        else {
          uVar10 = (**(code **)(*plVar18 + 0x10))(plVar18,PTR_DAT_04bb3890);
          plVar20 = plVar18;
          if ((uVar10 & 1) == 0) {
            plVar20 = (long *)0x0;
          }
          bVar3 = *puVar7;
        }
        if (((bVar3 & 1) == 0) && (iVar22 = __cxa_guard_acquire(puVar7), iVar22 != 0)) {
          *(undefined **)PTR_DAT_04bb3890 = PTR_DAT_04bb2fd0 + 0x10;
          __cxa_guard_release(puVar7);
        }
        if (((plVar19 != (long *)0x0) &&
            (uVar10 = (**(code **)(*plVar19 + 0x10))(plVar19,PTR_DAT_04bb3890),
            plVar20 != (long *)0x0)) && ((uVar10 & 1) != 0)) {
          pfVar11 = (float *)(**(code **)(*plVar20 + 0xf0))(plVar20);
          pfVar12 = (float *)(**(code **)(*plVar19 + 0xf0))(plVar19);
          fVar21 = *pfVar11;
          fVar25 = pfVar11[1];
          fVar26 = *pfVar12;
          fVar29 = pfVar12[1];
          fVar23 = pfVar11[2];
          fVar27 = pfVar11[3];
          fVar28 = pfVar12[2];
          fVar30 = pfVar12[3];
          pfVar11 = (float *)(**(code **)(*plVar17 + 0xf0))(plVar17);
          *pfVar11 = fVar31 * fVar21 + param_1 * fVar26;
          pfVar11[1] = fVar31 * fVar25 + param_1 * fVar29;
          pfVar11[2] = fVar31 * fVar23 + param_1 * fVar28;
          pfVar11[3] = fVar31 * fVar27 + param_1 * fVar30;
        }
      }
      if (((*puVar6 & 1) == 0) && (iVar22 = __cxa_guard_acquire(puVar6), iVar22 != 0)) {
        *(undefined **)PTR_DAT_04bb3558 = PTR_DAT_04bb2fd0 + 0x10;
        __cxa_guard_release(puVar6);
      }
      uVar10 = (**(code **)(*plVar17 + 0x10))(plVar17,PTR_DAT_04bb3558);
      if ((uVar10 & 1) != 0) {
        if (((*puVar6 & 1) == 0) && (iVar22 = __cxa_guard_acquire(puVar6), iVar22 != 0)) {
          *(undefined **)PTR_DAT_04bb3558 = PTR_DAT_04bb2fd0 + 0x10;
          __cxa_guard_release(puVar6);
        }
        if (plVar18 == (long *)0x0) {
          plVar20 = (long *)0x0;
          bVar3 = *puVar6;
        }
        else {
          uVar10 = (**(code **)(*plVar18 + 0x10))(plVar18,PTR_DAT_04bb3558);
          plVar20 = plVar18;
          if ((uVar10 & 1) == 0) {
            plVar20 = (long *)0x0;
          }
          bVar3 = *puVar6;
        }
        if (((bVar3 & 1) == 0) && (iVar22 = __cxa_guard_acquire(puVar6), iVar22 != 0)) {
          *(undefined **)PTR_DAT_04bb3558 = PTR_DAT_04bb2fd0 + 0x10;
          __cxa_guard_release(puVar6);
        }
        if (((plVar19 != (long *)0x0) &&
            (uVar10 = (**(code **)(*plVar19 + 0x10))(plVar19,PTR_DAT_04bb3558),
            plVar20 != (long *)0x0)) && ((uVar10 & 1) != 0)) {
          pfVar11 = (float *)(**(code **)(*plVar20 + 0xf0))(plVar20);
          pfVar12 = (float *)(**(code **)(*plVar19 + 0xf0))(plVar19);
          fVar21 = *pfVar11;
          fVar25 = pfVar11[1];
          fVar26 = *pfVar12;
          fVar29 = pfVar12[1];
          fVar23 = pfVar11[2];
          fVar27 = pfVar11[3];
          fVar28 = pfVar12[2];
          fVar30 = pfVar12[3];
          pfVar11 = (float *)(**(code **)(*plVar17 + 0xf0))(plVar17);
          *pfVar11 = fVar31 * fVar21 + param_1 * fVar26;
          pfVar11[1] = fVar31 * fVar25 + param_1 * fVar29;
          pfVar11[2] = fVar31 * fVar23 + param_1 * fVar28;
          pfVar11[3] = fVar31 * fVar27 + param_1 * fVar30;
        }
      }
      if (((*puVar4 & 1) == 0) && (iVar22 = __cxa_guard_acquire(puVar4), iVar22 != 0)) {
        *(undefined **)PTR_DAT_04bb2fa8 = puVar2;
        __cxa_guard_release(puVar4);
      }
      uVar10 = (**(code **)(*plVar17 + 0x10))(plVar17,PTR_DAT_04bb2fa8);
      if ((uVar10 & 1) != 0) {
        if (((*puVar4 & 1) == 0) && (iVar22 = __cxa_guard_acquire(puVar4), iVar22 != 0)) {
          *(undefined **)PTR_DAT_04bb2fa8 = PTR_DAT_04bb2fb8 + 0x10;
          __cxa_guard_release(puVar4);
        }
        if (plVar18 == (long *)0x0) {
          plVar20 = (long *)0x0;
          bVar3 = *puVar4;
        }
        else {
          uVar10 = (**(code **)(*plVar18 + 0x10))(plVar18,PTR_DAT_04bb2fa8);
          plVar20 = plVar18;
          if ((uVar10 & 1) == 0) {
            plVar20 = (long *)0x0;
          }
          bVar3 = *puVar4;
        }
        if (((bVar3 & 1) == 0) && (iVar22 = __cxa_guard_acquire(puVar4), iVar22 != 0)) {
          *(undefined **)PTR_DAT_04bb2fa8 = PTR_DAT_04bb2fb8 + 0x10;
          __cxa_guard_release(puVar4);
        }
        if (((plVar19 != (long *)0x0) &&
            (uVar10 = (**(code **)(*plVar19 + 0x10))(plVar19,PTR_DAT_04bb2fa8),
            plVar20 != (long *)0x0)) && ((uVar10 & 1) != 0)) {
          FUN_01625a50(param_1,plVar17,plVar20,plVar19);
        }
      }
      plVar17 = (long *)plVar17[2];
      plVar18 = plVar18 + 2;
      plVar19 = plVar19 + 2;
    } while (plVar17 != (long *)0x0);
  }
  return;
}

