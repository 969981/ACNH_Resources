
uint FUN_018106f0(undefined8 param_1)

{
  float *pfVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint local_48 [2];
  
  puVar3 = PTR_DAT_04bb5ce0;
  if (*(long *)PTR_DAT_04bb5ce0 == 0) {
    return 0;
  }
  uVar10 = FUN_0180c170();
  if ((uVar10 & 1) == 0) {
    return 0;
  }
  lVar11 = FUN_0251b3b0(param_1,0);
  if (lVar11 == 0) {
    return 0;
  }
  local_48[0] = 2;
  uVar10 = FUN_017ac158(lVar11,local_48);
  puVar2 = PTR_DAT_04bb27c0;
  if ((uVar10 & 1) == 0) {
    return 0;
  }
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  if (lVar11 == 0) {
    return 0;
  }
  uVar14 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar14 == 0) ||
       (plVar13 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                            ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0)) ||
      ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar13 + 0x46) != uVar14)) {
    plVar13 = (long *)0x0;
  }
  if ((*(int *)(lVar11 + 0x288) == 1) || (*(int *)(lVar11 + 0x288) == -1)) {
    plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)puVar2;
    iVar8 = (**(code **)(*plVar12 + 0x60))();
    if (iVar8 < 0x11) {
      uVar14 = 1;
      goto joined_r0x01810808;
    }
    if (*(uint *)(lVar11 + 0x5e8) < 5) {
      uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01810808;
    }
  }
  uVar14 = 0;
joined_r0x01810808:
  if (plVar13 != (long *)0x0) {
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar9 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb3278);
    if ((uVar14 & uVar9) == 1) {
      uVar14 = *(uint *)((long)plVar13 + 0x274);
      plVar12 = (long *)0x0;
      bVar6 = 1;
      lVar11 = *(long *)puVar2;
      if (((lVar11 != 0) && (uVar14 != 0)) &&
         (plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                              ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar12 != (long *)0x0)) {
        if (((*(uint *)(plVar12 + 0x49) >> 1 & 1) == 0) && (*(uint *)(plVar12 + 0x46) == uVar14)) {
          if (((*PTR_DAT_04bb32d8 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb32d8), iVar8 != 0)) {
            *(undefined **)PTR_DAT_04bb32d0 = PTR_DAT_04bb2e50 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb32d8);
          }
          bVar6 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb32d0);
          uVar14 = *(uint *)((long)plVar13 + 0x274);
          lVar11 = *(long *)puVar2;
        }
        else {
          plVar12 = (long *)0x0;
        }
      }
      plVar13 = (long *)0x0;
      bVar7 = 1;
      pfVar1 = (float *)(plVar12 + 0x52);
      if ((bVar6 & plVar12 != (long *)0x0) == 0) {
        pfVar1 = (float *)PTR_DAT_04bb5868;
      }
      fVar19 = *pfVar1;
      fVar20 = pfVar1[2];
      if (((lVar11 != 0) && (uVar14 != 0)) &&
         (plVar13 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                              (ulong)(uVar14 >> 0x14) * 8), plVar13 != (long *)0x0)) {
        if (((*(uint *)(plVar13 + 0x49) >> 1 & 1) == 0) && (*(uint *)(plVar13 + 0x46) == uVar14)) {
          if (((*PTR_DAT_04bb32d8 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb32d8), iVar8 != 0)) {
            *(undefined **)PTR_DAT_04bb32d0 = PTR_DAT_04bb2e50 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb32d8);
          }
          bVar7 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb32d0);
        }
        else {
          plVar13 = (long *)0x0;
        }
      }
      pfVar1 = (float *)(plVar13 + 0x55);
      if ((bVar7 & plVar13 != (long *)0x0) == 0) {
        pfVar1 = (float *)PTR_DAT_04bb39d0;
      }
      fVar19 = *pfVar1 - fVar19;
      fVar15 = 0.0;
      fVar20 = pfVar1[2] - fVar20;
      fVar17 = SQRT(fVar19 * fVar19 + 0.0 + fVar20 * fVar20);
      bVar4 = false;
      bVar5 = true;
      if (-1.1920929e-07 <= fVar17) {
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar17)) {
          bVar4 = fVar17 == 1.1920929e-07;
          bVar5 = 1.1920929e-07 <= fVar17;
        }
      }
      if (bVar5 && !bVar4) {
        fVar17 = 1.0 / fVar17;
        if (local_48[0] < 4) {
          fVar18 = *(float *)(&UNK_04102940 + (long)(int)local_48[0] * 4);
          fVar15 = *(float *)(&DAT_041027d0 + (long)(int)local_48[0] * 4);
        }
        else {
          fVar18 = -1.0;
        }
        fVar16 = cosf((float)((long)(*(float *)(*(long *)puVar3 + 0xd30) * 11930465.0) & 0xffffffff)
                      * 1.4629181e-09);
        if (fVar17 * 0.0 * 0.0 + fVar15 * fVar19 * fVar17 + fVar18 * fVar20 * fVar17 <= fVar16) {
          if (local_48[0] < 4) {
            uVar14 = (&DAT_041022e0)[(int)local_48[0]];
          }
          else {
            uVar14 = 3;
          }
          return (uint)(uVar14 < 4) & *(uint *)(*(long *)puVar3 + 0xfb8) >> (ulong)(uVar14 & 0x1f);
        }
      }
    }
  }
  return 0;
}

