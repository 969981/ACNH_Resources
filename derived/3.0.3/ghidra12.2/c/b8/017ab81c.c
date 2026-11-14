
void FUN_017ab81c(long param_1)

{
  uint uVar1;
  float *pfVar2;
  undefined *puVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return;
  }
  uVar11 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar11 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar6 = (**(code **)(*plVar7 + 0x60))();
    if (iVar6 < 0x11) {
      uVar11 = 1;
      goto joined_r0x017ab8f0;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x017ab8f0;
    }
  }
  uVar11 = 0;
joined_r0x017ab8f0:
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0x2a];
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar8 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3278);
    uVar1 = 0;
    if ((int)lVar9 == 1) {
      uVar1 = uVar11;
    }
    if (((uVar8 & 1) != 0) && (uVar1 != 0)) {
      uVar11 = *(uint *)((long)plVar10 + 0x274);
      plVar7 = (long *)0x0;
      lVar9 = *(long *)puVar3;
      bVar5 = 1;
      if ((lVar9 != 0) &&
         ((uVar11 != 0 &&
          (plVar7 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                              ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar7 != (long *)0x0)))) {
        if (((*(uint *)(plVar7 + 0x49) >> 1 & 1) == 0) && (*(uint *)(plVar7 + 0x46) == uVar11)) {
          if (((*PTR_DAT_04bb32d8 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb32d8), iVar6 != 0)) {
            *(undefined **)PTR_DAT_04bb32d0 = PTR_DAT_04bb2e50 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb32d8);
          }
          bVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb32d0);
          uVar11 = *(uint *)((long)plVar10 + 0x274);
          lVar9 = *(long *)puVar3;
        }
        else {
          plVar7 = (long *)0x0;
        }
      }
      pfVar2 = (float *)(plVar7 + 0x52);
      if ((bVar5 & plVar7 != (long *)0x0) == 0) {
        pfVar2 = (float *)PTR_DAT_04bb5868;
      }
      fVar16 = *pfVar2;
      fVar18 = pfVar2[1];
      fVar17 = pfVar2[2];
      if ((((lVar9 != 0) && (uVar11 != 0)) &&
          (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                               (ulong)(uVar11 >> 0x14) * 8), plVar10 != (long *)0x0)) &&
         (((*(uint *)(plVar10 + 0x49) >> 1 & 1) == 0 && (*(uint *)(plVar10 + 0x46) == uVar11)))) {
        if (((*PTR_DAT_04bb32d8 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb32d8), iVar6 != 0)) {
          *(undefined **)PTR_DAT_04bb32d0 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb32d8);
        }
        (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb32d0);
      }
      lVar9 = *(long *)PTR_DAT_04bb5ce0;
      iVar6 = *(int *)(lVar9 + 0xf64);
      fVar12 = *(float *)(lVar9 + 0xd24);
      fVar13 = (float)(*(int *)(lVar9 + 0xf68) * 2 + 4);
      fVar18 = fVar18 * 0.0;
      fVar15 = fVar18 + fVar16 * 0.0;
      fVar14 = fVar17 + fVar15 + fVar13 * 5.0 + -160.0;
      *(bool *)(param_1 + 0x4dac) = fVar14 < fVar12;
      *(bool *)(param_1 + 0x4da8) = fVar14 < fVar12;
      fVar19 = 1.0;
      if (fVar14 <= 0.0) {
        fVar19 = 0.0;
      }
      bVar4 = true;
      if ((fVar14 <= 0.0) && (bVar4 = false, !NAN(fVar14) && !NAN(fVar12))) {
        bVar4 = fVar14 < fVar12;
      }
      if (!bVar4) {
        fVar19 = (fVar12 - fVar14) / fVar12;
      }
      fVar14 = (float)(iVar6 * 2 + 4);
      *(float *)(param_1 + 0x4db0) = fVar19;
      fVar20 = fVar16 + fVar18 + fVar17 * 0.0 + fVar14 * 5.0 + -160.0;
      *(bool *)(param_1 + 0x4dad) = fVar20 < fVar12;
      *(bool *)(param_1 + 0x4da9) = fVar20 < fVar12;
      fVar19 = 1.0;
      if (fVar20 <= 0.0) {
        fVar19 = 0.0;
      }
      bVar4 = true;
      if ((fVar20 <= 0.0) && (bVar4 = false, !NAN(fVar20) && !NAN(fVar12))) {
        bVar4 = fVar20 < fVar12;
      }
      if (!bVar4) {
        fVar19 = (fVar12 - fVar20) / fVar12;
      }
      *(float *)(param_1 + 0x4db4) = fVar19;
      fVar19 = (fVar15 - fVar17) + fVar13 * 5.0 + 160.0;
      *(bool *)(param_1 + 0x4dae) = fVar19 < fVar12;
      *(bool *)(param_1 + 0x4daa) = fVar19 < fVar12;
      fVar13 = 1.0;
      if ((fVar19 <= 0.0) && (fVar13 = 0.0, fVar12 <= fVar19)) {
        fVar13 = (fVar12 - fVar19) / fVar12;
      }
      *(float *)(param_1 + 0x4db8) = fVar13;
      fVar16 = (fVar18 - fVar16) + fVar17 * 0.0 + fVar14 * 5.0 + 160.0;
      *(bool *)(param_1 + 0x4daf) = fVar16 < fVar12;
      *(bool *)(param_1 + 0x4dab) = fVar16 < fVar12;
      fVar18 = 1.0;
      if ((fVar16 <= 0.0) && (fVar18 = 0.0, fVar12 <= fVar16)) {
        fVar18 = (fVar12 - fVar16) / fVar12;
      }
      *(float *)(param_1 + 0x4dbc) = fVar18;
    }
  }
  return;
}

