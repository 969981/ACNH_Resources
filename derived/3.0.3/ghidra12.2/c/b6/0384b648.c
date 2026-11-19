
void FUN_0384b648(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  puVar1 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) goto LAB_0384b998;
  uVar9 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar1;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_0384b714;
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0384b714:
    uVar9 = 0;
  }
  if (plVar8 != (long *)0x0) {
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3278);
    if (((uVar9 & uVar4) != 0) && (lVar7 = *(long *)puVar1, lVar7 != 0)) {
      uVar9 = *(uint *)((long)plVar8 + 0x274);
      if ((uVar9 == 0) ||
         (((plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                               ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0 ||
           ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)))) {
        plVar8 = (long *)0x0;
      }
      if ((*(int *)(lVar7 + 0x288) == 1) || (*(int *)(lVar7 + 0x288) == -1)) {
        plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar7 = *(long *)puVar1;
        iVar3 = (**(code **)(*plVar5 + 0x60))();
        puVar1 = PTR_DAT_04bb32c0;
        if (((iVar3 < 0x11) ||
            ((*(uint *)(lVar7 + 0x5e8) < 5 &&
             ((1 << (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 0x1aU) != 0)))) &&
           (plVar8 != (long *)0x0)) {
          if (((*PTR_DAT_04bb32c0 & 1) == 0) &&
             (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar3 != 0)) {
            *(undefined **)PTR_DAT_04bb32b8 = PTR_DAT_04bb32c8 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb32c0);
          }
          puVar2 = PTR_DAT_04bb32b8;
          uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb32b8);
          if ((uVar6 & 1) == 0) {
            return;
          }
          if (((*puVar1 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar3 != 0)) {
            *(undefined **)puVar2 = PTR_DAT_04bb32c8 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb32c0);
          }
          uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb32b8);
          if ((uVar6 & 1) != 0) {
            fVar13 = *(float *)(plVar8 + 0x52);
            fVar16 = *(float *)(plVar8 + 0x55);
            fVar17 = *(float *)((long)plVar8 + 0x2ac);
            fVar18 = *(float *)(plVar8 + 0x56);
            fVar14 = *(float *)((long)plVar8 + 0x294);
            fVar15 = *(float *)(plVar8 + 0x53);
            *(float *)(param_1 + 0xc0) = fVar13;
            *(float *)(param_1 + 0xc4) = fVar14;
            *(float *)(param_1 + 200) = fVar15;
            fVar10 = fVar16;
            fVar12 = fVar18;
            fVar11 = fVar17;
            if (((((-1.1920929e-07 <= fVar13 - fVar16) && (fVar13 - fVar16 <= 1.1920929e-07)) &&
                 (-1.1920929e-07 <= fVar14 - fVar17)) &&
                ((fVar14 - fVar17 <= 1.1920929e-07 && (-1.1920929e-07 <= fVar15 - fVar18)))) &&
               (fVar15 - fVar18 <= 1.1920929e-07)) {
              fVar10 = fVar13 + 0.0;
              fVar11 = fVar14 + 0.0;
              fVar12 = fVar15 + 1.0;
            }
            *(float *)(param_1 + 0xcc) = fVar10;
            *(float *)(param_1 + 0xd0) = fVar11;
            *(float *)(param_1 + 0xd4) = fVar12;
            (**(code **)(*(long *)(param_1 + 0x88) + 0x20))(param_1 + 0x88,param_1 + 0x90);
            fVar16 = fVar16 - fVar13;
            fVar17 = fVar17 - fVar14;
            fVar18 = fVar18 - fVar15;
            fVar10 = SQRT(fVar17 * fVar17 + fVar16 * fVar16 + fVar18 * fVar18);
            if (0.0 < fVar10) {
              fVar10 = 1.0 / fVar10;
              fVar16 = fVar16 * fVar10;
              fVar17 = fVar17 * fVar10;
              fVar18 = fVar18 * fVar10;
            }
            *(float *)(param_1 + 0x7c) = fVar16;
            *(float *)(param_1 + 0x80) = fVar17;
            *(float *)(param_1 + 0x84) = fVar18;
            *(undefined1 *)(param_1 + 0x78) = 1;
            return;
          }
        }
      }
    }
  }
LAB_0384b998:
  *(undefined1 *)(param_1 + 0x78) = 0;
  return;
}

