
void FUN_03bab224(long param_1,float *param_2,float *param_3)

{
  int iVar1;
  ulong uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  puVar6 = *(undefined8 **)(param_1 + 0x50);
  if (puVar6 == (undefined8 *)0x0) {
    return;
  }
  fVar7 = *(float *)((long)puVar6 + 0x24);
  fVar10 = *(float *)((long)puVar6 + 0x14);
  fVar13 = *(float *)((long)puVar6 + 0x34);
  pfVar3 = *(float **)(param_1 + 0x70);
  fVar12 = (-(*(float *)((long)puVar6 + 0x1c) * fVar7) - fVar10 * *(float *)((long)puVar6 + 0xc)) -
           fVar13 * *(float *)((long)puVar6 + 0x2c);
  fVar11 = (-(*(float *)(puVar6 + 3) * fVar7) - fVar10 * *(float *)(puVar6 + 1)) -
           fVar13 * *(float *)(puVar6 + 5);
  fVar7 = (-(*(float *)(puVar6 + 4) * fVar7) - fVar10 * *(float *)(puVar6 + 2)) -
          fVar13 * *(float *)(puVar6 + 6);
  if (pfVar3 == (float *)0x0) {
    if (((*PTR_DAT_04bb6208 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb6208), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb6200 = PTR_DAT_04bb6210 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6208);
    }
    uVar2 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bb6200);
    fVar10 = fVar7;
    fVar13 = fVar12;
    fVar8 = fVar11;
    if ((uVar2 & 1) == 0) goto LAB_03bab2f0;
    pfVar3 = (float *)((long)puVar6 + 0x44);
    pfVar4 = (float *)(puVar6 + 9);
    pfVar5 = (float *)((long)puVar6 + 0x4c);
  }
  else {
    pfVar4 = pfVar3 + 1;
    pfVar5 = pfVar3 + 2;
  }
  fVar10 = *pfVar5;
  fVar13 = *pfVar4;
  fVar8 = *pfVar3;
LAB_03bab2f0:
  fVar9 = *(float *)(param_1 + 0x78);
  *param_2 = fVar11 + (fVar8 - fVar11) * fVar9;
  param_2[1] = fVar12 + (fVar13 - fVar12) * fVar9;
  param_2[2] = fVar7 + (fVar10 - fVar7) * fVar9;
  fVar9 = *(float *)(param_1 + 0x68);
  *param_3 = fVar11 + (fVar8 - fVar11) * fVar9;
  param_3[1] = fVar12 + (fVar13 - fVar12) * fVar9;
  param_3[2] = fVar7 + (fVar10 - fVar7) * fVar9;
  return;
}

