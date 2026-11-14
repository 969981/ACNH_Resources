
undefined8 FUN_01887dac(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  float *pfVar8;
  long *plVar9;
  ulong uVar10;
  uint *puVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  if ((*(char *)(param_1 + 0x4f8) == '\0') ||
     ((lVar13 = *(long *)(param_1 + 0x3d8), lVar13 != 0 &&
      (*(float *)(lVar13 + 0x2b8) < *(float *)(lVar13 + 0x2b0))))) {
    if (*(int *)(param_1 + 0x280) == 1) {
      return 0;
    }
    uVar12 = 1;
    uVar15 = 1;
    goto LAB_01887ee8;
  }
  iVar5 = (**(code **)(*(long *)(param_1 + 0x500) + (ulong)*(byte *)(param_1 + 0x514) * 8))
                    (param_1 + 0x500);
  plVar14 = *(long **)(param_1 + 0x3d8);
  *(int *)(param_1 + 0x508) = iVar5;
  if (plVar14 == (long *)0x0) {
LAB_01887e5c:
    pfVar8 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b8) + 200) + 0xf0))();
    fVar17 = *(float *)(param_1 + 0x308);
    if (0.0 <= fVar17) {
      if (0.0 < fVar17) {
        fVar16 = fVar17 - *pfVar8;
        fVar21 = 0.0;
        if (fVar16 <= fVar17 && 0.0 < fVar16) {
          fVar21 = fVar16;
        }
        *(float *)(param_1 + 0x308) = fVar21;
        if (fVar16 <= fVar17 && 0.0 < fVar16) goto LAB_01887f84;
      }
    }
    else {
      fVar16 = *pfVar8 + fVar17;
      fVar21 = 0.0;
      if (fVar17 <= fVar16 && fVar16 < 0.0) {
        fVar21 = fVar16;
      }
      *(float *)(param_1 + 0x308) = fVar21;
      if (fVar17 <= fVar16 && fVar16 < 0.0) goto LAB_01887f84;
    }
    uVar15 = 0;
    if (*(int *)(param_1 + 0x280) == 8) {
      return 0;
    }
    uVar12 = 8;
    goto LAB_01887ee8;
  }
  if (*(char *)((long)plVar14 + 0x292) == '\0') {
    uVar10 = (**(code **)(*plVar14 + 0x110))(plVar14);
    if ((uVar10 & 1) != 0) {
      iVar5 = *(int *)(param_1 + 0x508);
      goto LAB_01887e50;
    }
    goto LAB_01887e5c;
  }
  if (*(char *)((long)plVar14 + 0x291) == '\0') goto LAB_01887e5c;
LAB_01887e50:
  if (iVar5 == *(int *)(param_1 + 0x510)) goto LAB_01887e5c;
  fVar21 = 2.5 / *(float *)(param_1 + 0x4d8);
  pfVar8 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b8) + 0x98) + 0xf0))();
  fVar17 = *pfVar8;
  fVar16 = *(float *)(param_1 + 0x308);
  *(float *)(param_1 + 0x4ec) = fVar21 * fVar17;
  pfVar8 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b8) + 200) + 0xf0))();
  if (fVar21 * fVar17 <= fVar16) {
    fVar21 = 1.0;
  }
  fVar21 = fVar21 * *pfVar8;
  fVar17 = *(float *)(param_1 + 0x4ec);
  fVar16 = *(float *)(param_1 + 0x308);
  *(float *)(param_1 + 0x4f0) = fVar21;
  if (fVar17 <= fVar16) {
    if (fVar17 < fVar16) {
      fVar21 = fVar16 - fVar21;
      bVar3 = false;
      bVar4 = false;
      if (fVar21 <= fVar16) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar21) && !NAN(fVar17)) {
          bVar3 = fVar21 == fVar17;
          bVar4 = fVar17 <= fVar21;
        }
      }
      fVar16 = fVar17;
      if (bVar4 && !bVar3) {
        fVar16 = fVar21;
      }
      goto LAB_01887f80;
    }
  }
  else {
    fVar21 = fVar21 + fVar16;
    bVar3 = false;
    bVar4 = false;
    if (fVar16 <= fVar21) {
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fVar21) && !NAN(fVar17)) {
        bVar3 = fVar21 < fVar17;
        bVar4 = false;
      }
    }
    fVar16 = fVar17;
    if (bVar3 != bVar4) {
      fVar16 = fVar21;
    }
LAB_01887f80:
    *(float *)(param_1 + 0x308) = fVar16;
  }
LAB_01887f84:
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 0x60) + 0x1138) != 0) {
    FUN_03850760(fVar16 * 3.33);
  }
  iVar5 = (**(code **)(*(long *)(param_1 + 0x548) + (ulong)*(byte *)(param_1 + 0x55c) * 8))
                    (param_1 + 0x548);
  *(int *)(param_1 + 0x550) = iVar5;
  if (iVar5 != *(int *)(param_1 + 0x558)) {
    return 0;
  }
  iVar5 = (**(code **)(*(long *)(param_1 + 0x530) + (ulong)*(byte *)(param_1 + 0x544) * 8))
                    (param_1 + 0x530);
  *(int *)(param_1 + 0x538) = iVar5;
  if (iVar5 != *(int *)(param_1 + 0x540)) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x538) = *(undefined4 *)(param_1 + 0x53c);
  puVar2 = PTR_DAT_04bb27c0;
  uVar6 = *(uint *)(param_1 + 0x4f4);
  if (uVar6 == 0) {
    return 0;
  }
  lVar13 = *(long *)PTR_DAT_04bb27c0;
  if (lVar13 == 0) {
    return 0;
  }
  plVar14 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) + ((ulong)(uVar6 >> 0x11) & 0x7ff8))
  ;
  if (((plVar14 == (long *)0x0) || ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar14 + 0x46) != uVar6)) {
    plVar14 = (long *)0x0;
  }
  if ((*(int *)(lVar13 + 0x288) == 1) || (*(int *)(lVar13 + 0x288) == -1)) {
    plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar13 = *(long *)puVar2;
    iVar5 = (**(code **)(*plVar9 + 0x60))();
    if (iVar5 < 0x11) {
      uVar6 = 1;
    }
    else {
      if (4 < *(uint *)(lVar13 + 0x5e8)) goto LAB_0188809c;
      uVar6 = 0x1aU >> (ulong)(*(uint *)(lVar13 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0188809c:
    uVar6 = 0;
  }
  if (plVar14 != (long *)0x0) {
    lVar13 = plVar14[0x2a];
    if (((*PTR_DAT_04bbe9e0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bbe9e0), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bbe9d8 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe9e0);
    }
    uVar10 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bbe9d8);
    fVar16 = DAT_052ab620;
    fVar17 = DAT_052ab61c;
    puVar2 = PTR_DAT_04bb39d8;
    uVar1 = 0;
    if ((int)lVar13 == 1) {
      uVar1 = uVar6;
    }
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    if (uVar1 == 0) {
      return 0;
    }
    lVar13 = plVar14[0x14];
    if ((lVar13 != 0) && (*(char *)(lVar13 + 700) != '\0')) {
      fVar21 = *(float *)(lVar13 + 0x2f8);
      fVar22 = *(float *)(lVar13 + 0x300);
      if ((fVar21 != 0.0) || ((*(float *)(lVar13 + 0x2fc) != 0.0 || (fVar22 != 0.0)))) {
        puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar1 = puVar11[3];
        uVar6 = *puVar11 ^ *puVar11 << 0xb;
        *puVar11 = puVar11[1];
        puVar11[1] = puVar11[2];
        uVar6 = uVar6 >> 8 ^ uVar1 >> 0x13 ^ uVar6 ^ uVar1;
        puVar11[2] = uVar1;
        puVar11[3] = uVar6;
        fVar17 = fVar17 + (fVar16 - fVar17) * ((float)(uVar6 >> 9 | 0x3f800000) + -1.0);
        iVar5 = FUN_006f0400(fVar21,fVar22);
        puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar2);
        uVar1 = puVar11[3];
        uVar6 = *puVar11 ^ *puVar11 << 0xb;
        *puVar11 = puVar11[1];
        puVar11[1] = puVar11[2];
        uVar6 = uVar6 >> 8 ^ uVar1 >> 0x13 ^ uVar6 ^ uVar1;
        puVar11[2] = uVar1;
        puVar11[3] = uVar6;
        uVar6 = iVar5 + (int)(long)((((float)(uVar6 >> 9 | 0x3f800000) + -1.0) * 20.0 + -10.0) *
                                   11930465.0);
        pfVar8 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar6 >> 0x19) * 0x10);
        fVar16 = (float)(uVar6 >> 1 & 0xffffff) * 5.9604645e-08;
        fVar21 = *pfVar8 + fVar16 * pfVar8[1];
        fVar16 = pfVar8[2] + fVar16 * pfVar8[3];
        fVar22 = fVar21 * 0.0;
        fVar16 = fVar16 + fVar16;
        fVar19 = fVar21 * (fVar21 + fVar21);
        fVar18 = (fVar21 + fVar21) * fVar22;
        fVar20 = fVar22 * (fVar22 + fVar22);
        fVar23 = fVar16 * fVar22;
        fVar22 = fVar21 * (fVar22 + fVar22);
        fVar21 = fVar21 * fVar16;
        fVar16 = *(float *)(param_1 + 0x4cc) +
                 (fVar22 - fVar23) * 0.0 + ((1.0 - fVar19) - fVar20) * 0.0 +
                 fVar17 * (fVar21 + fVar20);
        fVar22 = *(float *)(param_1 + 0x4d0) +
                 ((1.0 - fVar20) - fVar20) * 0.0 + (fVar23 + fVar22) * 0.0 +
                 fVar17 * (fVar18 - fVar23);
        *(float *)(param_1 + 0x328) = fVar16;
        fVar18 = *(float *)(param_1 + 0x4d4) +
                 (fVar23 + fVar18) * 0.0 + (fVar20 - fVar21) * 0.0 +
                 fVar17 * ((1.0 - fVar20) - fVar19);
        fVar16 = *(float *)(param_1 + 0x4cc) - fVar16;
        fVar21 = *(float *)(param_1 + 0x4d0) - fVar22;
        *(float *)(param_1 + 0x32c) = fVar22;
        fVar17 = *(float *)(param_1 + 0x4d4) - fVar18;
        *(float *)(param_1 + 0x330) = fVar18;
        fVar21 = SQRT(fVar21 * fVar21 + fVar16 * fVar16 + fVar17 * fVar17);
        if (0.0 < fVar21) {
          fVar21 = 1.0 / fVar21;
          fVar16 = fVar16 * fVar21;
          fVar17 = fVar17 * fVar21;
        }
        uVar6 = FUN_006f0400(fVar16,fVar17);
        *(float *)(param_1 + 0x4dc) = (float)uVar6;
        uVar7 = FUN_006f0400(*(float *)(param_1 + 0x334) - *(float *)(param_1 + 0x4cc),
                             *(float *)(param_1 + 0x33c) - *(float *)(param_1 + 0x4d4));
        uVar15 = 0;
        *(undefined4 *)(param_1 + 0x4e8) = uVar7;
        if (*(int *)(param_1 + 0x280) == 7) {
          return 0;
        }
        uVar12 = 7;
LAB_01887ee8:
        FUN_03ebb160(param_1 + 0x278,uVar12);
        return uVar15;
      }
    }
  }
  return 0;
}

