
void FUN_0032f8d8(float param_1,float param_2,undefined8 param_3,undefined8 *param_4,long param_5,
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
  
  *(undefined4 *)param_4 = *(undefined4 *)(*(long *)(param_5 + 0x10) + 0xa00);
  *(undefined4 *)((long)param_4 + 4) = *(undefined4 *)(*(long *)(param_5 + 0x10) + 0xa04);
  *(undefined4 *)(param_4 + 1) = *(undefined4 *)(*(long *)(param_5 + 0x10) + 0xa08);
  *(undefined4 *)((long)param_4 + 0xc) = *(undefined4 *)(*(long *)(param_5 + 0x10) + 0xa0c);
  lVar7 = *(long *)(param_5 + 0x18);
  if (lVar7 == 0) {
    return;
  }
  lVar5 = *(long *)(param_5 + 0x10);
  cVar2 = *(char *)(lVar5 + 0x9ed);
  if (cVar2 == '\x03') {
    uVar4 = (uint)(*param_6 * (float)*(int *)(lVar7 + 0x18));
    uVar6 = -(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar4 << 4;
    *(undefined4 *)param_4 = *(undefined4 *)(lVar7 + uVar6 + 0x470);
    *(undefined4 *)((long)param_4 + 4) = *(undefined4 *)(*(long *)(param_5 + 0x18) + uVar6 + 0x474);
    *(undefined4 *)(param_4 + 1) = *(undefined4 *)(*(long *)(param_5 + 0x18) + uVar6 + 0x478);
    lVar5 = *(long *)(param_5 + 0x10);
    cVar2 = *(char *)(lVar5 + 0x9ed);
  }
  if (cVar2 == '\x02') {
    lVar7 = *(long *)(param_5 + 0x18);
    iVar1 = *(int *)(lVar7 + 0x18);
    if (0 < iVar1) {
      if (*(char *)(lVar5 + 0x922) == '\0') {
        uVar8 = *(undefined1 *)(lVar5 + 0x942);
LAB_0032fa04:
        fVar9 = param_2 / param_1;
      }
      else {
        uVar8 = *(undefined1 *)(lVar5 + 0x942);
        if (*(int *)(lVar5 + 0x934) < 1) goto LAB_0032fa04;
        fVar12 = (float)*(int *)(lVar5 + 0x934);
        fVar9 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + 0x927));
        fVar9 = fmodf(param_2 + fVar12 * *param_6 * fVar9,fVar12);
        fVar9 = fVar9 / fVar12;
      }
      local_54[0] = 0;
      local_64 = 0;
      local_6c = 0;
      FUN_0032c0c0(fVar9,&local_6c,local_54,lVar7 + 0x470,iVar1,uVar8);
      *(undefined4 *)(param_4 + 1) = local_64;
      *param_4 = local_6c;
      lVar5 = *(long *)(param_5 + 0x10);
    }
  }
  if (*(char *)(lVar5 + 0x9ef) == '\x02') {
    lVar7 = *(long *)(param_5 + 0x18);
    iVar1 = *(int *)(lVar7 + 0x1c);
    if (0 < iVar1) {
      if (*(char *)(lVar5 + 0x923) == '\0') {
        uVar8 = *(undefined1 *)(lVar5 + 0x943);
LAB_0032faa8:
        param_1 = param_2 / param_1;
      }
      else {
        uVar8 = *(undefined1 *)(lVar5 + 0x943);
        if (*(int *)(lVar5 + 0x938) < 1) goto LAB_0032faa8;
        fVar12 = (float)*(int *)(lVar5 + 0x938);
        fVar9 = (float)NEON_ucvtf((uint)*(byte *)(lVar5 + 0x928));
        param_1 = fmodf(param_2 + fVar12 * *param_6 * fVar9,fVar12);
        param_1 = param_1 / fVar12;
      }
      local_54[0] = 0;
      local_64 = 0;
      local_6c = 0;
      FUN_0032c0c0(param_1,&local_6c,local_54,lVar7 + 0x4f0,iVar1,uVar8);
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
        goto joined_r0x0032fc94;
      }
      fVar9 = *(float *)PTR_FloatPi_04bcee68 * ((fVar11 + param_2) / fVar12 + *param_6 * fVar9);
      fVar9 = fVar9 + fVar9;
      fVar9 = fVar9 - (float)(int)(*(float *)PTR_Float1Divided2Pi_04bcedd8 * fVar9) *
                      *(float *)PTR_Float2Pi_04bcede0;
      if (fVar9 <= *(float *)PTR_FloatPiDivided2_04bcedc0) {
        if (fVar9 < -*(float *)PTR_FloatPiDivided2_04bcedc0) {
          fVar12 = -*(float *)PTR_FloatPi_04bcedc8;
          goto LAB_0032fc2c;
        }
        fVar12 = 1.0;
      }
      else {
        fVar12 = *(float *)PTR_FloatPi_04bcedc8;
LAB_0032fc2c:
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
      goto joined_r0x0032fc94;
    }
    fVar12 = (fVar11 + param_2) / fVar12 + *param_6 * fVar9;
    fVar12 = fVar12 - (float)(int)fVar12;
  }
  fVar9 = ABS(1.0 - *(float *)(lVar7 + 0x90) * fVar12) * *(float *)((long)param_4 + 0xc);
  *(float *)((long)param_4 + 0xc) = fVar9;
joined_r0x0032fc94:
  uVar10 = 0;
  if ((fVar9 < 0.0) || (uVar10 = 0x3f800000, 1.0 < fVar9)) {
    *(undefined4 *)((long)param_4 + 0xc) = uVar10;
  }
  return;
}

