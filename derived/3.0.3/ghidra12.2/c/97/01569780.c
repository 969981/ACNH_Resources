
void FUN_01569780(long param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float __x;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  lVar6 = *(long *)(*(long *)(param_1 + 8) + 8);
  if (lVar6 == 0) {
    return;
  }
  pcVar4 = (char *)(**(code **)(*(long *)(lVar6 + 0x158) + 0xf0))(lVar6 + 0x158);
  puVar1 = PTR_DAT_04bb2200;
  if (*pcVar4 == '\0') {
    return;
  }
  lVar6 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x78);
  if (lVar6 == 0) {
    return;
  }
  FUN_015e95cc(lVar6,param_1 + 0x1a40);
  if ((*(long *)(*(long *)puVar1 + 0x58) == 0) ||
     (**(long **)(*(long *)PTR_DAT_04bbdb78 + 0x28) == 0)) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    puVar8 = *(undefined8 **)(**(long **)(*(long *)PTR_DAT_04bbdb78 + 0x28) + 0x78);
  }
  if (((*PTR_DAT_04bb6208 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb6208), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bb6200 = PTR_DAT_04bb6210 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6208);
  }
  uVar5 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bb6200);
  if ((uVar5 & 1) == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  fVar14 = *(float *)(param_1 + 0x1a40);
  fVar16 = *(float *)(puVar8 + 7);
  fVar17 = *(float *)(param_1 + 0x1a44);
  __x = *(float *)(param_1 + 0x1a48);
  fVar15 = *(float *)(param_1 + 0x1a4c);
  fVar18 = *(float *)(param_1 + 0x1a50);
  fVar13 = *(float *)(param_1 + 0x1a54);
  lVar7 = *(long *)(*(long *)puVar1 + 0x78);
  if (*(float *)(lVar6 + 0x3c) == 0.0) {
    if (lVar7 == 0) goto LAB_01569afc;
  }
  else {
    fVar9 = -57600.0 / (*(float *)(lVar7 + 0x40) * 6.2831855) + 0.01;
    if (fVar17 <= fVar9) {
      fVar17 = fVar9;
    }
  }
  fVar9 = 57600.0 / (*(float *)(lVar7 + 0x40) * 6.2831855) + fVar17;
  fVar10 = atan2f(fVar9,__x);
  fVar10 = 1.5707964 - fVar10;
  fVar11 = cosf(fVar10);
  if (fVar11 == 0.0) {
    fVar11 = 0.001;
  }
  else {
    fVar11 = cosf(fVar10);
  }
  lVar7 = *(long *)(*(long *)puVar1 + 0x78);
  fVar12 = *(float *)(lVar7 + 0x3c);
  fVar17 = fVar17 * (1.0 - fVar12) +
           fVar12 * (fVar9 / fVar11 + -57600.0 / (*(float *)(lVar7 + 0x40) * 6.2831855));
  __x = fVar12 * ((fVar10 / (*(float *)(lVar7 + 0x40) * 0.017453292)) * 160.0 -
                 *(float *)(lVar7 + 0x38)) + (1.0 - fVar12) * __x;
  if (lVar7 != 0) {
    fVar9 = 57600.0 / (*(float *)(lVar7 + 0x40) * 6.2831855) + fVar18;
    fVar10 = atan2f(fVar9,fVar13);
    fVar10 = 1.5707964 - fVar10;
    fVar11 = cosf(fVar10);
    if (fVar11 == 0.0) {
      fVar11 = 0.001;
    }
    else {
      fVar11 = cosf(fVar10);
    }
    lVar7 = *(long *)(*(long *)puVar1 + 0x78);
    fVar12 = *(float *)(lVar7 + 0x3c);
    fVar18 = fVar18 * (1.0 - fVar12) +
             fVar12 * (fVar9 / fVar11 + -57600.0 / (*(float *)(lVar7 + 0x40) * 6.2831855));
    fVar13 = fVar12 * ((fVar10 / (*(float *)(lVar7 + 0x40) * 0.017453292)) * 160.0 -
                      *(float *)(lVar7 + 0x38)) + (1.0 - fVar12) * fVar13;
  }
LAB_01569afc:
  fVar9 = fVar16 - fVar14;
  fVar10 = *(float *)(lVar6 + 0x3c);
  fVar11 = fVar15 - fVar16;
  *(float *)(param_1 + 0x1a44) = fVar17;
  *(float *)(param_1 + 0x1a50) = fVar18;
  fVar18 = 160.0 - fVar9;
  fVar17 = fVar13 + 10.0;
  if (fVar10 == 0.0) {
    fVar17 = fVar13;
  }
  *(float *)(param_1 + 0x1a54) = fVar17;
  fVar13 = 0.0;
  if (0.0 <= fVar18) {
    fVar13 = fVar18;
  }
  if (0.0 <= fVar9) {
    fVar18 = fVar13;
  }
  fVar18 = fVar16 + 160.0 + fVar18;
  fVar13 = 160.0 - fVar11;
  fVar10 = 0.0;
  if (0.0 <= fVar13) {
    fVar10 = fVar13;
  }
  if (0.0 <= fVar11) {
    fVar13 = fVar10;
  }
  fVar13 = (fVar16 + -160.0) - fVar13;
  bVar2 = true;
  if ((fVar18 <= fVar15) && (bVar2 = false, !NAN(fVar11))) {
    bVar2 = fVar11 < 160.0;
  }
  if (!bVar2) {
    fVar15 = fVar18;
  }
  *(float *)(param_1 + 0x1a4c) = fVar15;
  bVar2 = true;
  if ((fVar14 <= fVar13) && (bVar2 = false, !NAN(fVar9))) {
    bVar2 = fVar9 < 160.0;
  }
  if (!bVar2) {
    fVar14 = fVar13;
  }
  *(float *)(param_1 + 0x1a40) = fVar14;
  if (__x <= fVar17 + -500.0) {
    __x = fVar17 + -500.0;
  }
  *(float *)(param_1 + 0x1a48) = __x;
  return;
}

