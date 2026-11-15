
undefined8
FUN_01fc5368(long param_1,float *param_2,uint *param_3,int param_4,uint param_5,uint param_6)

{
  float *pfVar1;
  float *pfVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  long *plVar20;
  undefined8 *puVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  puVar7 = PTR_DAT_04bb27c0;
  lVar15 = *(long *)PTR_DAT_04bb27c0;
  if (lVar15 == 0) {
    return 0;
  }
  uVar22 = *param_3;
  if ((((uVar22 == 0) ||
       (plVar20 = *(long **)(*(long *)(*(long *)(lVar15 + 0x1c0) + 8) +
                            ((ulong)(uVar22 >> 0x11) & 0x7ff8)), plVar20 == (long *)0x0)) ||
      ((*(uint *)(plVar20 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar20 + 0x46) != uVar22)) {
    plVar20 = (long *)0x0;
  }
  if (*(int *)(lVar15 + 0x288) == 1 || *(int *)(lVar15 + 0x288) == -1) {
    plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar15 = *(long *)puVar7;
    iVar11 = (**(code **)(*plVar12 + 0x60))();
    if (iVar11 < 0x11) {
      uVar22 = 1;
    }
    else {
      if (4 < *(uint *)(lVar15 + 0x5e8)) goto LAB_01fc5448;
      uVar22 = 0x1aU >> (ulong)(*(uint *)(lVar15 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_01fc5448:
    uVar22 = 0;
  }
  if (plVar20 == (long *)0x0) {
    return 0;
  }
  lVar15 = plVar20[0x2a];
  if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar11 != 0)) {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  uVar13 = (**(code **)(*plVar20 + 0x20))(plVar20,PTR_DAT_04bb37d0);
  uVar16 = 0;
  if ((int)lVar15 == 1) {
    uVar16 = uVar22;
  }
  if ((uVar13 & 1) == 0) {
    return 0;
  }
  if (uVar16 == 0) {
    return 0;
  }
  puVar21 = (undefined8 *)plVar20[0x77];
  if (((*PTR_DAT_04bb6710 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar11 != 0)) {
    *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6710);
  }
  if (puVar21 == (undefined8 *)0x0) {
    return 0;
  }
  uVar13 = (**(code **)*puVar21)(puVar21,PTR_DAT_04bb6708);
  puVar8 = PTR_DAT_04bb5ce0;
  puVar7 = PTR_DAT_04bb2720;
  if ((uVar13 & 1) == 0) {
    return 0;
  }
  fVar30 = (float)param_4;
  lVar15 = *(long *)(puVar21[1] + 0x68);
  uVar22 = *(uint *)(lVar15 + 0x2b4);
  fVar31 = *(float *)(lVar15 + 0x27c);
  pfVar1 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar22 + 0x40000000 >> 0x18) * 0x10);
  pfVar2 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar22 + 0xc0000000 >> 0x18) * 0x10);
  fVar23 = (float)(uVar22 & 0xffffff) * 5.9604645e-08;
  fVar28 = *(float *)(lVar15 + 0x278) + (*pfVar1 + fVar23 * pfVar1[1]) * 5.0 * fVar30;
  fVar27 = (pfVar1[2] + fVar23 * pfVar1[3]) * 5.0 * fVar30 + *(float *)(lVar15 + 0x280);
  fVar29 = *(float *)(lVar15 + 0x278) + (*pfVar2 + fVar23 * pfVar2[1]) * 5.0 * fVar30;
  fVar23 = *(float *)(lVar15 + 0x280) + (pfVar2[2] + fVar23 * pfVar2[3]) * 5.0 * fVar30;
  if (((*(long *)PTR_DAT_04bb5ce0 != 0) && (lVar15 = *(long *)PTR_DAT_04bb2720, lVar15 != 0)) &&
     (*(long *)(lVar15 + 0x330) != 0)) {
    puVar21 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
    iVar11 = FUN_006bd550(*puVar21,0);
    if (((iVar11 == 0x758f7eaf) && (*(long *)puVar7 != 0)) &&
       ((lVar15 = *(long *)(*(long *)puVar7 + 0x330), lVar15 != 0 && (*(int *)(lVar15 + 0x244) != 0)
        ))) {
      lVar15 = *(long *)puVar8;
      if (lVar15 == 0) {
        iVar14 = 0;
        iVar17 = 0;
        iVar19 = 0x10;
        iVar18 = 0x10;
      }
      else {
        iVar14 = *(int *)(lVar15 + 0xd88);
        iVar17 = *(int *)(lVar15 + 0xd8c);
        iVar18 = *(int *)(lVar15 + 0xd98);
        iVar19 = *(int *)(lVar15 + 0xd9c);
      }
      iVar11 = iVar14;
      if (iVar18 <= iVar14) {
        iVar11 = iVar18;
      }
      if (iVar14 <= iVar18) {
        iVar14 = iVar18;
      }
      iVar18 = iVar17;
      if (iVar19 <= iVar17) {
        iVar18 = iVar19;
      }
      if (iVar17 <= iVar19) {
        iVar17 = iVar19;
      }
      goto LAB_01fc5640;
    }
  }
  lVar15 = *(long *)PTR_DAT_04bb59d8;
  if (lVar15 == 0) {
    iVar14 = 0;
    iVar18 = 0;
    iVar11 = 0;
    iVar17 = 0;
  }
  else {
    iVar11 = *(int *)(lVar15 + 0x28);
    iVar18 = *(int *)(lVar15 + 0x2c);
    iVar14 = *(int *)(lVar15 + 0x38);
    iVar17 = *(int *)(lVar15 + 0x3c);
  }
LAB_01fc5640:
  fVar25 = (float)iVar17 * 5.0 + 5.0;
  fVar24 = (float)iVar14 * 5.0 + 5.0;
  bVar9 = false;
  if (((float)iVar11 * 5.0 <= fVar28) && (bVar9 = false, !NAN(fVar28) && !NAN(fVar24))) {
    bVar9 = fVar28 < fVar24;
  }
  bVar10 = false;
  if (((float)iVar11 * 5.0 <= fVar29) && (bVar10 = false, !NAN(fVar29) && !NAN(fVar24))) {
    bVar10 = fVar29 < fVar24;
  }
  if ((bVar9 && ((float)iVar18 * 5.0 <= fVar27 && fVar27 < fVar25)) && (param_5 & 1) == 0) {
    uVar22 = 0;
    uVar16 = (int)((float)(int)fVar28 / 5.0) - (uint)(fVar28 < 0.0);
    uVar3 = *(ushort *)(param_1 + 0x188);
    if (((uint)uVar3 <= (uVar16 & 0xffff)) &&
       ((uVar16 & 0xffff) <= (((uint)uVar3 + (uint)*(ushort *)(param_1 + 0x194)) - 1 & 0xffff))) {
      uVar22 = 0;
      uVar5 = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
      uVar4 = *(ushort *)(param_1 + 0x18a);
      if (((uint)uVar4 <= (uVar5 & 0xffff)) &&
         ((uVar5 & 0xffff) <= (((uint)uVar4 + (uint)*(ushort *)(param_1 + 0x198)) - 1 & 0xffff))) {
        uVar22 = (uVar16 - uVar3) + *(int *)(*(long *)(param_1 + 0x1c8) + 0x1c) * (uVar5 - uVar4);
        uVar22 = *(uint *)(*(long *)(*(long *)(param_1 + 0x1c8) + 0x10) +
                          (long)((int)uVar22 >> 5) * 4) >> (ulong)(uVar22 & 0x1f) & 1;
      }
    }
  }
  else {
    uVar22 = 0;
  }
  if ((bVar10 && ((float)iVar18 * 5.0 <= fVar23 && fVar23 < fVar25)) && (param_6 & 1) == 0) {
    uVar16 = 0;
    uVar5 = (int)((float)(int)fVar29 / 5.0) - (uint)(fVar29 < 0.0);
    uVar3 = *(ushort *)(param_1 + 0x188);
    if (((uint)uVar3 <= (uVar5 & 0xffff)) &&
       ((uVar5 & 0xffff) <= (((uint)uVar3 + (uint)*(ushort *)(param_1 + 0x194)) - 1 & 0xffff))) {
      uVar16 = 0;
      uVar6 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
      uVar4 = *(ushort *)(param_1 + 0x18a);
      if (((uint)uVar4 <= (uVar6 & 0xffff)) &&
         ((uVar6 & 0xffff) <= (((uint)uVar4 + (uint)*(ushort *)(param_1 + 0x198)) - 1 & 0xffff))) {
        uVar16 = (uVar5 - uVar3) + *(int *)(*(long *)(param_1 + 0x1c8) + 0x1c) * (uVar6 - uVar4);
        uVar16 = *(uint *)(*(long *)(*(long *)(param_1 + 0x1c8) + 0x10) +
                          (long)((int)uVar16 >> 5) * 4) >> (ulong)(uVar16 & 0x1f) & 1;
      }
    }
  }
  else {
    uVar16 = 0;
  }
  if ((uVar22 | uVar16) != 1) {
    return 0;
  }
  fVar31 = fVar30 * 0.0 + fVar31;
  if ((uVar16 != 0) &&
     ((uVar22 == 0 ||
      (lVar15 = *(long *)(*(long *)(param_1 + 8) + 0x68), fVar30 = *(float *)(lVar15 + 0x278),
      fVar25 = *(float *)(lVar15 + 0x280), fVar24 = fVar28 - fVar30, fVar26 = fVar27 - fVar25,
      fVar30 = fVar29 - fVar30, fVar25 = fVar23 - fVar25,
      fVar25 * fVar25 + fVar30 * fVar30 <= fVar26 * fVar26 + fVar24 * fVar24)))) {
    *param_2 = fVar29;
    param_2[1] = fVar31;
    param_2[2] = fVar23;
    return 1;
  }
  *param_2 = fVar28;
  param_2[1] = fVar31;
  param_2[2] = fVar27;
  return 1;
}

