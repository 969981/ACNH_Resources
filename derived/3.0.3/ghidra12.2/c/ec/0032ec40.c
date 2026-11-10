
void FUN_0032ec40(float param_1,float param_2,float param_3,undefined8 param_4,float *param_5,
                 long param_6,float *param_7,float *param_8,float *param_9)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 uVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_80;
  float local_78;
  undefined1 local_74 [4];
  
  *param_5 = *(float *)(*(long *)(param_6 + 0x10) + 0x9f0);
  param_5[1] = *(float *)(*(long *)(param_6 + 0x10) + 0x9f4);
  param_5[2] = *(float *)(*(long *)(param_6 + 0x10) + 0x9f8);
  param_5[3] = *(float *)(*(long *)(param_6 + 0x10) + 0x9fc);
  lVar7 = *(long *)(param_6 + 0x18);
  if (lVar7 == 0) {
    return;
  }
  lVar5 = *(long *)(param_6 + 0x10);
  cVar2 = *(char *)(lVar5 + 0x9ec);
  if (cVar2 == '\x03') {
    uVar4 = (uint)(*param_7 * (float)*(int *)(lVar7 + 0x10));
    uVar6 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar4 << 4;
    *param_5 = *(float *)(lVar7 + uVar6 + 0x370);
    param_5[1] = *(float *)(*(long *)(param_6 + 0x18) + uVar6 + 0x374);
    param_5[2] = *(float *)(*(long *)(param_6 + 0x18) + uVar6 + 0x378);
    lVar5 = *(long *)(param_6 + 0x10);
    lVar7 = *(long *)(param_6 + 0x18);
    cVar2 = *(char *)(lVar5 + 0x9ec);
  }
  if ((cVar2 == '\x02') && (iVar1 = *(int *)(lVar7 + 0x10), 0 < iVar1)) {
    if (*(char *)(lVar5 + 0x920) == '\0') {
      uVar8 = *(undefined1 *)(lVar5 + 0x940);
LAB_0032ed78:
      fVar9 = param_3 / param_2;
    }
    else {
      uVar8 = *(undefined1 *)(lVar5 + 0x940);
      if (*(int *)(lVar5 + 0x92c) < 1) goto LAB_0032ed78;
      fVar14 = (float)*(int *)(lVar5 + 0x92c);
      fVar9 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + 0x925));
      fVar9 = fmodf(param_3 + fVar14 * *param_7 * fVar9,fVar14);
      fVar9 = fVar9 / fVar14;
    }
    local_74[0] = 0;
    local_78 = 0.0;
    local_80 = 0;
    FUN_0032c0c0(fVar9,&local_80,local_74,lVar7 + 0x370,iVar1,uVar8);
    param_5[2] = local_78;
    *(undefined8 *)param_5 = local_80;
    lVar5 = *(long *)(param_6 + 0x10);
    lVar7 = *(long *)(param_6 + 0x18);
  }
  if ((*(char *)(lVar5 + 0x9ee) == '\x02') && (iVar1 = *(int *)(lVar7 + 0x14), 0 < iVar1)) {
    if (*(char *)(lVar5 + 0x921) == '\0') {
      uVar8 = *(undefined1 *)(lVar5 + 0x941);
LAB_0032ee18:
      param_2 = param_3 / param_2;
    }
    else {
      uVar8 = *(undefined1 *)(lVar5 + 0x941);
      if (*(int *)(lVar5 + 0x930) < 1) goto LAB_0032ee18;
      fVar14 = (float)*(int *)(lVar5 + 0x930);
      fVar9 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + 0x926));
      param_2 = fmodf(param_3 + fVar14 * *param_7 * fVar9,fVar14);
      param_2 = param_2 / fVar14;
    }
    local_74[0] = 0;
    local_78 = 0.0;
    local_80 = 0;
    FUN_0032c0c0(param_2,&local_80,local_74,lVar7 + 0x3f0,iVar1,uVar8);
    param_5[3] = (float)local_80;
    lVar7 = *(long *)(param_6 + 0x18);
  }
  fVar9 = *(float *)(lVar7 + 0x360);
  uVar11 = *(undefined8 *)(param_5 + 2);
  uVar10 = *(undefined8 *)param_5;
  *param_5 = fVar9 * *param_8 * *param_9 * (float)uVar10;
  param_5[1] = fVar9 * param_8[1] * param_9[1] * (float)((ulong)uVar10 >> 0x20);
  param_5[2] = fVar9 * param_8[2] * param_9[2] * (float)uVar11;
  fVar9 = param_8[3] * param_1 * (float)((ulong)uVar11 >> 0x20);
  param_5[3] = fVar9;
  if (*(char *)(*(long *)(param_6 + 0x10) + 0xa34) == '\0') {
    return;
  }
  lVar7 = *(long *)(param_6 + 0x18);
  bVar3 = *(byte *)(*(long *)(param_6 + 0x10) + 0xa37) >> 4;
  fVar12 = *(float *)(lVar7 + 0x98);
  fVar14 = *(float *)(lVar7 + 0xa0);
  fVar13 = *(float *)(lVar7 + 0xa8);
  if (bVar3 == 2) {
    fVar14 = (fVar13 + param_3) / fVar12 + *param_7 * fVar14;
    fVar12 = 1.0;
    if (0.5 <= fVar14 - (float)(int)fVar14) {
      fVar12 = 0.0;
    }
  }
  else {
    if (bVar3 != 1) {
      if (bVar3 != 0) {
        fVar9 = fVar9 * 1.0;
        param_5[3] = fVar9;
        goto joined_r0x0032f05c;
      }
      fVar14 = *(float *)PTR_FloatPi_04bcee68 * ((fVar13 + param_3) / fVar12 + *param_7 * fVar14);
      fVar14 = fVar14 + fVar14;
      fVar14 = fVar14 - (float)(int)(*(float *)PTR_Float1Divided2Pi_04bcedd8 * fVar14) *
                        *(float *)PTR_Float2Pi_04bcede0;
      if (fVar14 <= *(float *)PTR_FloatPiDivided2_04bcedc0) {
        if (fVar14 < -*(float *)PTR_FloatPiDivided2_04bcedc0) {
          fVar12 = -*(float *)PTR_FloatPi_04bcedc8;
          goto LAB_0032eff8;
        }
        fVar12 = 1.0;
      }
      else {
        fVar12 = *(float *)PTR_FloatPi_04bcedc8;
LAB_0032eff8:
        fVar14 = fVar12 - fVar14;
        fVar12 = -1.0;
      }
      fVar14 = fVar14 * fVar14;
      fVar9 = fVar9 * (*(float *)(lVar7 + 0x90) *
                       (fVar12 * (fVar14 * ((*(float *)(PTR_CosCoefficients_04bcedf0 + 0xc) +
                                            fVar14 * ((*(float *)(PTR_CosCoefficients_04bcedf0 + 4)
                                                      - fVar14 * *(float *)
                                                  PTR_CosCoefficients_04bcedf0) * fVar14 -
                                                  *(float *)(PTR_CosCoefficients_04bcedf0 + 8))) *
                                            fVar14 - *(float *)(PTR_CosCoefficients_04bcedf0 + 0x10)
                                           ) + 1.0) + 1.0) * -0.5 + 1.0);
      param_5[3] = fVar9;
      goto joined_r0x0032f05c;
    }
    fVar12 = (fVar13 + param_3) / fVar12 + *param_7 * fVar14;
    fVar12 = fVar12 - (float)(int)fVar12;
  }
  fVar9 = fVar9 * ABS(1.0 - *(float *)(lVar7 + 0x90) * fVar12);
  param_5[3] = fVar9;
joined_r0x0032f05c:
  fVar14 = 0.0;
  if ((fVar9 < 0.0) || (fVar14 = 1.0, 1.0 < fVar9)) {
    param_5[3] = fVar14;
  }
  return;
}

