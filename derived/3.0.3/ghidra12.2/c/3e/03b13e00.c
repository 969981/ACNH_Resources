
void FUN_03b13e00(float param_1,float param_2,long *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  lVar9 = FUN_0037e610(param_3,"AdjustToTextMargin");
  if (lVar9 == 0) {
    lVar9 = FUN_0037e610(param_3,"AdjustToTextMarginRatio");
    fVar12 = 0.0;
    if (lVar9 == 0) {
      bVar4 = false;
      fVar11 = 0.0;
    }
    else {
      pfVar1 = (float *)(lVar9 + (ulong)*(uint *)(lVar9 + 4));
      fVar11 = *pfVar1 * param_1;
      if (*(ushort *)(lVar9 + 8) < 2) goto LAB_03b13ea8;
      bVar4 = false;
      fVar12 = pfVar1[1] * param_2;
    }
  }
  else {
    pfVar1 = (float *)(lVar9 + (ulong)*(uint *)(lVar9 + 4));
    fVar11 = *pfVar1;
    if (*(ushort *)(lVar9 + 8) < 2) {
LAB_03b13ea8:
      fVar12 = 0.0;
      bVar4 = true;
    }
    else {
      fVar12 = pfVar1[1];
      bVar4 = false;
    }
  }
  puVar7 = PTR_DAT_04bd1bf8;
  if (((*PTR_DAT_04bd1c00 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04bd1c00), puVar6 = PTR_DAT_04bc9540, iVar8 != 0)) {
    if (((*PTR_DAT_04bc9548 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc9548), puVar5 = PTR_DAT_04bc8f30, iVar8 != 0)) {
      if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar8 != 0)) {
        *(undefined8 *)puVar5 = 0;
        __cxa_guard_release(PTR_DAT_04bc8f38);
      }
      *(undefined **)puVar6 = puVar5;
      __cxa_guard_release(PTR_DAT_04bc9548);
    }
    *(undefined **)puVar7 = puVar6;
    __cxa_guard_release(PTR_DAT_04bd1c00);
  }
  puVar10 = (undefined8 *)(**(code **)(*param_3 + 0x10))(param_3);
  if (puVar10 != (undefined8 *)puVar7) {
    do {
      puVar10 = (undefined8 *)*puVar10;
    } while (puVar10 != (undefined8 *)puVar7 && puVar10 != (undefined8 *)0x0);
    if (puVar10 == (undefined8 *)0x0) {
      fVar14 = 0.0;
      fVar13 = 0.0;
      goto LAB_03b13f48;
    }
  }
  fVar2 = (float)NEON_ucvtf((uint)*(ushort *)((long)param_3 + 0xda));
  fVar3 = (float)NEON_ucvtf((uint)*(ushort *)((long)param_3 + 0xdc));
  fVar14 = (float)NEON_ucvtf((uint)*(ushort *)((long)param_3 + 0xde));
  fVar13 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x1c));
  fVar14 = fVar14 + fVar13;
  fVar13 = fVar3;
  if ((char)param_3[0x21] != '\x02') {
    fVar13 = fVar2;
  }
  fVar13 = fVar13 + fVar3;
LAB_03b13f48:
  lVar9 = FUN_0037e610(param_3,"AdjustToTextMinSize");
  if ((lVar9 != 0) && (*(short *)(lVar9 + 8) != 0)) {
    pfVar1 = (float *)(lVar9 + (ulong)*(uint *)(lVar9 + 4));
    fVar2 = *pfVar1;
    if (fVar13 <= fVar2) {
      fVar13 = fVar2;
    }
    if ((*(short *)(lVar9 + 8) != 1) && (fVar2 = pfVar1[1], fVar14 <= fVar2)) {
      fVar14 = fVar2;
    }
  }
  if (bVar4) {
    param_2 = *(float *)((long)param_3 + 0x54);
  }
  else {
    param_2 = param_2 + fVar12 * 2.0;
    if (param_2 <= fVar14) {
      param_2 = fVar14;
    }
  }
  param_1 = param_1 + fVar11 * 2.0;
  *(byte *)(param_3 + 0xb) = *(byte *)(param_3 + 0xb) | 0x10;
  if (param_1 <= fVar13) {
    param_1 = fVar13;
  }
  *(float *)(param_3 + 10) = param_1;
  *(float *)((long)param_3 + 0x54) = param_2;
  return;
}

