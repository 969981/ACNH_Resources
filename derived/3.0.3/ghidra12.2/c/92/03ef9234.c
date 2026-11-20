
void FUN_03ef9234(long param_1,float *param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  puVar4 = (undefined8 *)
           **(long **)(*(long *)(*(long *)(param_1 + 0x28) + 0x38) +
                      (long)*(short *)(param_1 + 0x30) * 8);
  if (((*PTR_DAT_04bb3490 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3490), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb3488 = PTR_DAT_04bb3498 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3490);
  }
  uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bb3488);
  if ((uVar2 & 1) == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  if (*(uint *)(param_1 + 8) <= param_3) {
    param_3 = 0;
  }
  lVar3 = *(long *)(puVar4[0x22] + 0x18) +
          (long)(int)*(short *)(*(long *)(param_1 + 0x10) + (long)(int)param_3 * 2) * 0x60;
  uVar10 = *(undefined8 *)(lVar3 + 0x58);
  uVar9 = *(undefined8 *)(lVar3 + 0x50);
  fVar6 = (float)((ulong)*(undefined8 *)(lVar3 + 0x30) >> 0x20);
  fVar11 = (float)*(undefined8 *)(lVar3 + 0x20);
  fVar8 = fVar11 + fVar6;
  fVar16 = (float)*(undefined8 *)(lVar3 + 0x48);
  fVar5 = (fVar8 + fVar16 + 1.0) * 0.25;
  fVar7 = fVar5 + (fVar6 + fVar16) * -0.5;
  fVar6 = fVar5 + (fVar11 + fVar16) * -0.5;
  fVar8 = fVar5 + fVar8 * -0.5;
  fVar16 = (float)*(undefined8 *)(lVar3 + 0x38);
  fVar12 = (float)((ulong)*(undefined8 *)(lVar3 + 0x20) >> 0x20);
  fVar13 = (float)*(undefined8 *)(lVar3 + 0x28);
  fVar14 = (float)*(undefined8 *)(lVar3 + 0x40);
  fVar15 = (float)((ulong)*(undefined8 *)(lVar3 + 0x40) >> 0x20);
  fVar11 = (float)*(undefined8 *)(lVar3 + 0x30);
  if (fVar5 <= fVar7) {
    if (fVar7 <= fVar6) goto code_r0x03ef9398;
    if (fVar8 < fVar7) {
      fVar8 = SQRT(fVar7);
      if (NAN(fVar8)) {
        fVar8 = sqrtf(fVar7);
      }
      fVar5 = 0.25 / fVar8;
      fVar6 = fVar5 * (fVar16 - fVar15);
      fVar7 = fVar5 * (fVar12 + fVar11);
      fVar5 = fVar5 * (fVar13 + fVar14);
      goto LAB_03ef9408;
    }
  }
  else if (fVar5 <= fVar6) {
code_r0x03ef9398:
    if (fVar8 < fVar6) {
      fVar7 = SQRT(fVar6);
      if (NAN(fVar7)) {
        fVar7 = sqrtf(fVar6);
      }
      fVar8 = 0.25 / fVar7;
      fVar6 = fVar8 * (fVar14 - fVar13);
      fVar5 = fVar8 * (fVar16 + fVar15);
      fVar8 = fVar8 * (fVar12 + fVar11);
      goto LAB_03ef9408;
    }
  }
  else if (fVar8 < fVar5) {
    fVar6 = SQRT(fVar5);
    if (NAN(fVar6)) {
      fVar6 = sqrtf(fVar5);
    }
    fVar5 = 0.25 / fVar6;
    fVar8 = fVar5 * (fVar16 - fVar15);
    fVar7 = fVar5 * (fVar14 - fVar13);
    fVar5 = fVar5 * (fVar12 - fVar11);
    goto LAB_03ef9408;
  }
  fVar5 = SQRT(fVar8);
  if (NAN(fVar5)) {
    fVar5 = sqrtf(fVar8);
  }
  fVar7 = 0.25 / fVar5;
  fVar6 = fVar7 * (fVar12 - fVar11);
  fVar8 = fVar7 * (fVar13 + fVar14);
  fVar7 = fVar7 * (fVar16 + fVar15);
LAB_03ef9408:
  *(undefined8 *)(param_2 + 4) = uVar9;
  *param_2 = fVar8;
  param_2[1] = fVar7;
  param_2[2] = fVar5;
  param_2[3] = fVar6;
  param_2[6] = (float)uVar10;
  return;
}

