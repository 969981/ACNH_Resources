
/* WARNING: Type propagation algorithm not settling */

bool FUN_02b8757c(float param_1,long param_2,float *param_3)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 == 0) {
    return false;
  }
  uVar12 = *(uint *)(param_2 + 0x2c0);
  if ((((uVar12 == 0) ||
       (plVar11 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                            ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
      ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar12)) {
    plVar11 = (long *)0x0;
  }
  if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar2;
    iVar7 = (**(code **)(*plVar8 + 0x60))();
    if (iVar7 < 0x11) {
      uVar12 = 1;
      goto joined_r0x02b87648;
    }
    if (*(uint *)(lVar10 + 0x5e8) < 5) {
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02b87648;
    }
  }
  uVar12 = 0;
joined_r0x02b87648:
  if (plVar11 != (long *)0x0) {
    lVar10 = plVar11[0x2a];
    if (((*PTR_DAT_04bc4bf8 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc4bf8), iVar7 != 0)) {
      *(undefined **)PTR_DAT_04bc4bf0 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4bf8);
    }
    uVar9 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bc4bf0);
    uVar1 = 0;
    if ((int)lVar10 == 1) {
      uVar1 = uVar12;
    }
    if ((uVar9 & 1) == 0) {
      return false;
    }
    if (uVar1 == 0) {
      return false;
    }
    lVar10 = plVar11[0xd];
    fVar18 = *param_3 - *(float *)(lVar10 + 0x278);
    fVar19 = param_3[1] - *(float *)(lVar10 + 0x27c);
    fVar20 = param_3[2] - *(float *)(lVar10 + 0x280);
    fVar13 = (float)NEON_ucvtf(*(undefined4 *)(lVar10 + 0x2b4));
    fVar14 = sinf(fVar13 * -1.4629181e-09);
    fVar13 = cosf(fVar13 * -1.4629181e-09);
    fVar17 = *(float *)((long)plVar11 + 0x294) + param_1;
    fVar16 = *(float *)(plVar11 + 0x52) - param_1;
    fVar15 = *(float *)(plVar11[0xd] + 0x278) +
             fVar19 * fVar14 * 0.0 + fVar18 * fVar13 + fVar20 * (fVar14 + 0.0);
    fVar13 = *(float *)(plVar11[0xd] + 0x280) +
             (fVar19 * fVar13 * 0.0 - fVar18 * fVar14) + fVar20 * fVar13;
    bVar3 = false;
    bVar5 = true;
    if (*(float *)((long)plVar11 + 0x28c) - param_1 <= fVar15) {
      bVar3 = false;
      bVar5 = true;
      if (!NAN(fVar15) && !NAN(fVar17)) {
        bVar3 = fVar15 == fVar17;
        bVar5 = fVar17 <= fVar15;
      }
    }
    bVar4 = false;
    bVar6 = true;
    if (!bVar5 || bVar3) {
      bVar4 = false;
      bVar6 = true;
      if (!NAN(fVar16) && !NAN(fVar13)) {
        bVar4 = fVar16 == fVar13;
        bVar6 = fVar13 <= fVar16;
      }
    }
    if (!bVar6 || bVar4) {
      return fVar13 <= *(float *)(plVar11 + 0x53) + param_1;
    }
  }
  return false;
}

