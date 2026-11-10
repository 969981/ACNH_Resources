
void FUN_0032f094(float param_1,float param_2,undefined8 param_3,undefined8 *param_4,long param_5,
                 float *param_6)

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
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_54 [4];
  
  *(undefined4 *)param_4 = *(undefined4 *)(*(long *)(param_5 + 0x10) + 0x9f0);
  *(undefined4 *)((long)param_4 + 4) = *(undefined4 *)(*(long *)(param_5 + 0x10) + 0x9f4);
  *(undefined4 *)(param_4 + 1) = *(undefined4 *)(*(long *)(param_5 + 0x10) + 0x9f8);
  *(undefined4 *)((long)param_4 + 0xc) = *(undefined4 *)(*(long *)(param_5 + 0x10) + 0x9fc);
  lVar7 = *(long *)(param_5 + 0x18);
  if (lVar7 == 0) {
    return;
  }
  lVar5 = *(long *)(param_5 + 0x10);
  cVar2 = *(char *)(lVar5 + 0x9ec);
  if (cVar2 == '\x03') {
    uVar4 = (uint)(*param_6 * (float)*(int *)(lVar7 + 0x10));
    uVar6 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar4 << 4;
    *(undefined4 *)param_4 = *(undefined4 *)(lVar7 + uVar6 + 0x370);
    *(undefined4 *)((long)param_4 + 4) = *(undefined4 *)(*(long *)(param_5 + 0x18) + uVar6 + 0x374);
    *(undefined4 *)(param_4 + 1) = *(undefined4 *)(*(long *)(param_5 + 0x18) + uVar6 + 0x378);
    lVar5 = *(long *)(param_5 + 0x10);
    cVar2 = *(char *)(lVar5 + 0x9ec);
  }
  if (cVar2 == '\x02') {
    lVar7 = *(long *)(param_5 + 0x18);
    iVar1 = *(int *)(lVar7 + 0x10);
    if (0 < iVar1) {
      if (*(char *)(lVar5 + 0x920) == '\0') {
        uVar8 = *(undefined1 *)(lVar5 + 0x940);
LAB_0032f1c0:
        fVar9 = param_2 / param_1;
      }
      else {
        uVar8 = *(undefined1 *)(lVar5 + 0x940);
        if (*(int *)(lVar5 + 0x92c) < 1) goto LAB_0032f1c0;
        fVar12 = (float)*(int *)(lVar5 + 0x92c);
        fVar9 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + 0x925));
        fVar9 = fmodf(param_2 + fVar12 * *param_6 * fVar9,fVar12);
        fVar9 = fVar9 / fVar12;
      }
      local_54[0] = 0;
      local_64 = 0;
      local_6c = 0;
      FUN_0032c0c0(fVar9,&local_6c,local_54,lVar7 + 0x370,iVar1,uVar8);
      *(undefined4 *)(param_4 + 1) = local_64;
      *param_4 = local_6c;
      lVar5 = *(long *)(param_5 + 0x10);
    }
  }
  if (*(char *)(lVar5 + 0x9ee) == '\x02') {
    lVar7 = *(long *)(param_5 + 0x18);
    iVar1 = *(int *)(lVar7 + 0x14);
    if (0 < iVar1) {
      if (*(char *)(lVar5 + 0x921) == '\0') {
        uVar8 = *(undefined1 *)(lVar5 + 0x941);
LAB_0032f264:
        param_1 = param_2 / param_1;
      }
      else {
        uVar8 = *(undefined1 *)(lVar5 + 0x941);
        if (*(int *)(lVar5 + 0x930) < 1) goto LAB_0032f264;
        fVar12 = (float)*(int *)(lVar5 + 0x930);
        fVar9 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + 0x926));
        param_1 = fmodf(param_2 + fVar12 * *param_6 * fVar9,fVar12);
        param_1 = param_1 / fVar12;
      }
      local_54[0] = 0;
      local_64 = 0;
      local_6c = 0;
      FUN_0032c0c0(param_1,&local_6c,local_54,lVar7 + 0x3f0,iVar1,uVar8);
      *(undefined4 *)((long)param_4 + 0xc) = (undefined4)local_6c;
      lVar5 = *(long *)(param_5 + 0x10);
    }
  }
  if (*(char *)(lVar5 + 0xa34) == '\0') {
    return;
  }
  lVar7 = *(long *)(param_5 + 0x18);
  bVar3 = *(byte *)(lVar5 + 0xa37) >> 4;
  fVar12 = *(float *)(lVar7 + 0x98);
  fVar9 = *(float *)(lVar7 + 0xa0);
  fVar11 = *(float *)(lVar7 + 0xa8);
  if (bVar3 == 2) {
    fVar9 = (fVar11 + param_2) / fVar12 + *param_6 * fVar9;
    fVar12 = 1.0;
    if (0.5 <= fVar9 - (float)(int)fVar9) {
      fVar12 = 0.0;
    }
  }
  else {
    if (bVar3 != 1) {
      if (bVar3 != 0) {
        fVar9 = *(float *)((long)param_4 + 0xc) * 1.0;
        *(float *)((long)param_4 + 0xc) = fVar9;
        goto joined_r0x0032f450;
      }
      fVar9 = *(float *)PTR_FloatPi_04bcee68 * ((fVar11 + param_2) / fVar12 + *param_6 * fVar9);
      fVar9 = fVar9 + fVar9;
      fVar9 = fVar9 - (float)(int)(*(float *)PTR_Float1Divided2Pi_04bcedd8 * fVar9) *
                      *(float *)PTR_Float2Pi_04bcede0;
      if (fVar9 <= *(float *)PTR_FloatPiDivided2_04bcedc0) {
        if (fVar9 < -*(float *)PTR_FloatPiDivided2_04bcedc0) {
          fVar12 = -*(float *)PTR_FloatPi_04bcedc8;
          goto LAB_0032f3e8;
        }
        fVar12 = 1.0;
      }
      else {
        fVar12 = *(float *)PTR_FloatPi_04bcedc8;
LAB_0032f3e8:
        fVar9 = fVar12 - fVar9;
        fVar12 = -1.0;
      }
      fVar9 = fVar9 * fVar9;
      fVar9 = (*(float *)(lVar7 + 0x90) *
               (fVar12 * (fVar9 * ((*(float *)(PTR_CosCoefficients_04bcedf0 + 0xc) +
                                   fVar9 * ((*(float *)(PTR_CosCoefficients_04bcedf0 + 4) -
                                            fVar9 * *(float *)PTR_CosCoefficients_04bcedf0) * fVar9
                                           - *(float *)(PTR_CosCoefficients_04bcedf0 + 8))) * fVar9
                                  - *(float *)(PTR_CosCoefficients_04bcedf0 + 0x10)) + 1.0) + 1.0) *
               -0.5 + 1.0) * *(float *)((long)param_4 + 0xc);
      *(float *)((long)param_4 + 0xc) = fVar9;
      goto joined_r0x0032f450;
    }
    fVar12 = (fVar11 + param_2) / fVar12 + *param_6 * fVar9;
    fVar12 = fVar12 - (float)(int)fVar12;
  }
  fVar9 = ABS(1.0 - *(float *)(lVar7 + 0x90) * fVar12) * *(float *)((long)param_4 + 0xc);
  *(float *)((long)param_4 + 0xc) = fVar9;
joined_r0x0032f450:
  uVar10 = 0;
  if ((fVar9 < 0.0) || (uVar10 = 0x3f800000, 1.0 < fVar9)) {
    *(undefined4 *)((long)param_4 + 0xc) = uVar10;
  }
  return;
}

