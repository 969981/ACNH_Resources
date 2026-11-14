
void FUN_015e90ec(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
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
  
  puVar1 = PTR_DAT_04bb2200;
  if (*(long *)(*(long *)PTR_DAT_04bb2200 + 0x58) == 0) {
    plVar6 = (long *)0x0;
  }
  else {
    plVar6 = (long *)**(undefined8 **)(*(long *)PTR_DAT_04bbdb78 + 0x28);
  }
  if (((*PTR_DAT_04bbdb68 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bbdb68), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bbdb60 = PTR_DAT_04bbdb70 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbdb68);
  }
  if (((plVar6 != (long *)0x0) &&
      (uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,PTR_DAT_04bbdb60), (uVar4 & 1) != 0)) &&
     (lVar5 = plVar6[0xf], lVar5 != 0)) {
    bVar2 = false;
    if (*(long *)PTR_DAT_04bb38d0 != 0) {
      bVar2 = *(char *)(*(long *)PTR_DAT_04bb38d0 + 0xb4) != '\0';
    }
    fVar16 = *(float *)(lVar5 + 0x44);
    fVar7 = *(float *)(lVar5 + 0x4c);
    if (((bVar2) || (*(float *)(param_1 + 0x3c) == 0.0)) || (*(char *)(param_1 + 0x80) != '\0')) {
      *(float *)(param_1 + 0x58) = fVar7;
      *(float *)(param_1 + 0x7c) = fVar7;
      *(undefined4 *)(param_1 + 0x54) = 0xc1200000;
      *(undefined4 *)(param_1 + 0x78) = 0xc1200000;
      *(undefined8 *)(param_1 + 0x5c) = 0x44960000;
      *(float *)(param_1 + 0x50) = fVar16;
      *(float *)(param_1 + 0x74) = fVar16;
      *(undefined8 *)(param_1 + 100) = 0x3f800000;
      *(float *)(param_1 + 0x6c) = fVar16 * 0.0 + -10.0 + fVar7 * 0.0;
    }
    else {
      fVar11 = *(float *)(lVar5 + 0x3c);
      fVar12 = *(float *)(lVar5 + 0x40);
      fVar7 = 57600.0 / (*(float *)(*(long *)(*(long *)puVar1 + 0x78) + 0x40) * 6.2831855);
      fVar13 = -fVar7 - fVar11;
      fVar8 = 0.0;
      fVar14 = 0.0 - fVar12;
      fVar17 = SQRT(fVar13 * fVar13 + fVar14 * fVar14);
      if (fVar17 <= 0.0) {
        fVar15 = 0.0;
      }
      else {
        fVar10 = 1.0 / fVar17;
        fVar15 = fVar10 * 0.0;
        fVar13 = fVar13 * fVar10;
        fVar14 = fVar14 * fVar10;
      }
      lVar5 = *(long *)(*(long *)puVar1 + 0x58);
      if (lVar5 != 0) {
        fVar8 = *(float *)(lVar5 + 0xf38);
      }
      fVar10 = powf(fVar8,0.5);
      fVar8 = 1.0;
      if (fVar10 <= 1.0) {
        fVar8 = fVar10;
      }
      fVar9 = 0.0;
      if (0.0 <= fVar10) {
        fVar9 = fVar8;
      }
      fVar8 = 0.0;
      if (*PTR_DAT_04bb59e8 != '\0') {
        fVar8 = 1.0;
      }
      fVar9 = fVar9 + fVar8;
      fVar8 = 1.0;
      if (fVar9 <= 1.0) {
        fVar8 = fVar9;
      }
      fVar10 = 0.0;
      if (0.0 <= fVar9) {
        fVar10 = fVar8;
      }
      fVar8 = 57600.0 / (*(float *)(*(long *)(*(long *)puVar1 + 0x78) + 0x40) * 6.2831855);
      fVar8 = fVar8 + fVar10 * ((fVar8 - *(float *)(param_1 + 0x44)) - fVar8);
      fVar14 = acosf((fVar13 * 0.0 + fVar15 * 0.0) - fVar14);
      fVar15 = fVar8 / fVar17;
      fVar13 = -fVar15;
      if (0.0 <= fVar15) {
        fVar13 = fVar15;
      }
      if (fVar13 <= 1.0) {
        fVar13 = asinf(fVar15);
        fVar10 = -(fVar14 - fVar13) - *(float *)(param_1 + 0x4c);
        *(float *)(param_1 + 0x48) = -(fVar14 - fVar13);
        fVar15 = sinf(fVar10);
        fVar10 = cosf(fVar10);
        fVar9 = fVar15 * 0.0;
        fVar13 = tanf(fVar13);
        fVar8 = fVar8 / fVar13;
        *(float *)(param_1 + 0x50) =
             fVar8 * ((((fVar9 - fVar10 * 0.0) * 0.0 + 0.0) - (fVar9 + fVar10 * 0.0)) + 0.0) + 0.0;
        *(float *)(param_1 + 0x54) =
             fVar11 + fVar8 * ((((fVar10 + fVar9 * 0.0) * 0.0 + 0.0) - (fVar10 * 0.0 * 0.0 - fVar15)
                               ) + 0.0);
        *(float *)(param_1 + 0x58) = fVar12 + ((fVar9 - fVar10) + 0.0) * fVar8;
        *(float *)(param_1 + 0x5c) = fVar8;
      }
      fVar13 = 57600.0 / (*(float *)(*(long *)(*(long *)puVar1 + 0x78) + 0x40) * 6.2831855) -
               *(float *)(param_1 + 0x44);
      fVar17 = fVar13 / fVar17;
      fVar8 = -fVar17;
      if (0.0 <= fVar17) {
        fVar8 = fVar17;
      }
      if (fVar8 <= 1.0) {
        fVar8 = asinf(fVar17);
        fVar14 = -(fVar14 - fVar8) - *(float *)(param_1 + 0x4c);
        fVar17 = sinf(fVar14);
        fVar14 = cosf(fVar14);
        fVar15 = fVar17 * 0.0;
        fVar8 = tanf(fVar8);
        fVar13 = fVar13 / fVar8;
        fVar12 = fVar12 + ((fVar15 - fVar14) + 0.0) * fVar13;
        fVar11 = fVar11 + fVar13 * ((((fVar14 + fVar15 * 0.0) * 0.0 + 0.0) -
                                    (fVar14 * 0.0 * 0.0 - fVar17)) + 0.0);
        fVar8 = fVar13 * ((((fVar15 - fVar14 * 0.0) * 0.0 + 0.0) - (fVar15 + fVar14 * 0.0)) + 0.0) +
                0.0;
        fVar7 = fVar11 + fVar7;
        *(float *)(param_1 + 0x78) = fVar11;
        *(float *)(param_1 + 0x7c) = fVar12;
        fVar17 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar12 * fVar12);
        if (fVar17 <= 0.0) {
          fVar13 = fVar8;
          fVar17 = fVar12;
        }
        else {
          fVar17 = 1.0 / fVar17;
          fVar7 = fVar7 * fVar17;
          fVar13 = fVar8 * fVar17;
          fVar17 = fVar12 * fVar17;
        }
        *(float *)(param_1 + 0x60) = fVar13;
        *(float *)(param_1 + 100) = fVar7;
        *(float *)(param_1 + 0x68) = fVar17;
        *(float *)(param_1 + 0x6c) = fVar11 * fVar7 + fVar8 * fVar13 + fVar12 * fVar17;
      }
      *(float *)(param_1 + 0x50) = fVar16;
      *(float *)(param_1 + 0x74) = fVar16;
    }
  }
  return;
}

