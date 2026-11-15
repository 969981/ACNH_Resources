
void FUN_02019598(long *param_1,uint *param_2,long param_3,uint param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  float *pfVar5;
  long *plVar6;
  long *plVar7;
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
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  
  if ((((*(long *)PTR_DAT_04bb27c0 != 0) && (uVar1 = *param_2, uVar1 != 0)) &&
      (plVar6 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                          ((ulong)(uVar1 >> 0x11) & 0x7ff8)), plVar6 != (long *)0x0)) &&
     (((*(uint *)(plVar6 + 0x49) >> 1 & 1) == 0 && (*(uint *)(plVar6 + 0x46) == uVar1)))) {
    lVar2 = plVar6[0x2a];
    if (((*PTR_DAT_04bbe050 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbe050), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bbe048 = PTR_DAT_04bbe058 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe050);
    }
    uVar4 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bbe048);
    if (((uVar4 & 1) != 0) && ((int)lVar2 == 1)) {
      plVar7 = (long *)plVar6[0xd];
      if (plVar7 != (long *)0x0) {
        if (((*PTR_DAT_04bb2f68 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb2f68), iVar3 != 0)) {
          *(undefined **)PTR_DAT_04bb2f60 = PTR_DAT_04bb2e20 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb2f68);
        }
        uVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,PTR_DAT_04bb2f60);
        if ((uVar4 & 1) == 0) {
          plVar7 = (long *)0x0;
        }
      }
      plVar6 = (long *)plVar6[0xc];
      if (plVar6 != (long *)0x0) {
        if (((*PTR_DAT_04bb2eb0 & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb2eb0), iVar3 != 0)) {
          *(undefined **)PTR_DAT_04bb2ea8 = PTR_DAT_04bb2e38 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb2eb0);
        }
        (**(code **)(*plVar6 + 0x10))(plVar6,PTR_DAT_04bb2ea8);
      }
      if ((param_3 != 0) && (plVar7 != (long *)0x0)) {
        pfVar5 = (float *)(**(code **)(*(long *)(param_3 + 0x98) + 0xf0))();
        fVar14 = *pfVar5;
        fVar8 = pfVar5[1];
        fVar9 = pfVar5[2];
        pfVar5 = (float *)(**(code **)(*(long *)(param_3 + 0x60) + 0xf0))();
        fVar21 = pfVar5[2];
        fVar22 = *pfVar5;
        fVar20 = pfVar5[1];
        pfVar5 = (float *)(**(code **)(*(long *)(param_3 + 0x30) + 0xf0))((long *)(param_3 + 0x30));
        fVar23 = *pfVar5;
        if ((param_4 & 1) != 0) {
          fVar10 = sinf(fVar22);
          fVar11 = sinf(fVar20);
          fVar12 = sinf(fVar21);
          fVar22 = cosf(fVar22);
          fVar13 = cosf(fVar20);
          fVar20 = cosf(fVar21);
          fVar21 = fVar10 * fVar11 * fVar20 - fVar12 * fVar22;
          fVar16 = fVar22 * fVar20 + fVar12 * fVar10 * fVar11;
          fVar15 = fVar10 * fVar12 + fVar11 * fVar22 * fVar20;
          fVar17 = -(fVar10 * fVar20) + fVar11 * fVar12 * fVar22;
          fVar12 = -(fVar15 * fVar16);
          fVar11 = fVar12 + fVar17 * fVar21;
          fVar12 = -(fVar21 * fVar17) - fVar12;
          fVar20 = fVar12;
          if (0.0 <= fVar11) {
            fVar20 = fVar11;
          }
          if (1.1920929e-06 <= 1.0 - fVar20) {
            fVar11 = -(fVar22 * fVar13);
            fVar22 = atan2f(-(fVar10 * fVar13),fVar11);
            fVar20 = asinf(fVar12);
            fVar21 = atan2f(fVar11 * fVar21 + fVar15 * fVar10 * fVar13,
                            -(fVar17 * fVar10 * fVar13) - fVar11 * fVar16);
          }
          else {
            fVar20 = (fVar11 / fVar20) * -1.5707964;
            fVar21 = atan2f(fVar21,fVar15 * fVar11);
            fVar22 = 0.0;
          }
          fVar14 = -fVar14;
          fVar8 = -fVar8;
          fVar9 = -fVar9;
        }
        fVar10 = sinf(fVar22);
        fVar11 = sinf(fVar20);
        fVar12 = sinf(fVar21);
        fVar22 = cosf(fVar22);
        fVar13 = cosf(fVar20);
        fVar21 = cosf(fVar21);
        fVar16 = fVar10 * fVar11 * fVar21 - fVar12 * fVar22;
        fVar15 = fVar22 * fVar21 + fVar12 * fVar10 * fVar11;
        uVar19 = CONCAT44(fVar9,fVar22 * fVar13);
        uVar24 = CONCAT44(fVar14,fVar10 * fVar12 + fVar11 * fVar22 * fVar21);
        uVar18 = CONCAT44(fVar8,-(fVar10 * fVar21) + fVar11 * fVar12 * fVar22);
        *(undefined8 *)((long)plVar7 + 0x34c) = uVar24;
        *(ulong *)((long)plVar7 + 0x344) = CONCAT44(fVar16,fVar13 * fVar21);
        fVar20 = 0.001;
        if (0.001 <= fVar23) {
          fVar20 = fVar23;
        }
        *(undefined8 *)((long)plVar7 + 0x35c) = uVar18;
        *(ulong *)((long)plVar7 + 0x354) = CONCAT44(fVar15,fVar12 * fVar13);
        *(undefined8 *)((long)plVar7 + 0x36c) = uVar19;
        *(ulong *)((long)plVar7 + 0x364) = CONCAT44(fVar10 * fVar13,-fVar11);
        if (((param_5 & 1) != 0) && ((param_4 & 1) == 0)) {
          *(float *)((long)param_1 + 0x161c) = fVar20;
                    /* WARNING: Could not recover jumptable at 0x02019944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*param_1 + 0x4e0))((int)param_1[0x2c1],param_1);
          return;
        }
        *(float *)(param_1 + 0x2c3) = fVar20;
        (**(code **)(*param_1 + 0x4e0))((int)param_1[0x2c1],param_1);
        *(undefined8 *)((long)param_1 + 0x606c) = uVar24;
        *(ulong *)((long)param_1 + 0x6064) = CONCAT44(fVar16,fVar13 * fVar21);
        *(undefined8 *)((long)param_1 + 0x607c) = uVar18;
        *(ulong *)((long)param_1 + 0x6074) = CONCAT44(fVar15,fVar12 * fVar13);
        *(undefined8 *)((long)param_1 + 0x608c) = uVar19;
        *(ulong *)((long)param_1 + 0x6084) = CONCAT44(fVar10 * fVar13,-fVar11);
      }
    }
  }
  return;
}

