
void FUN_015f8e54(long param_1,int *param_2,int param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar6 = (long)(*param_2 +
                (param_2[2] + *(int *)(&LAB_007a12a4 + *(long *)(DAT_05231900 + 0x88)) * param_2[1])
                * *(int *)(&LAB_007a129c + *(long *)(DAT_05231900 + 0x88)));
  piVar1 = (int *)(*(long *)(param_1 + 0x290) + lVar6 * 0x20);
  iVar5 = *piVar1;
  if (iVar5 < 7) {
    *piVar1 = iVar5 + 1;
    *(int *)(*(long *)(param_1 + 0x290) + lVar6 * 0x20 + (long)iVar5 * 4 + 4) = param_3;
    return;
  }
  lVar6 = *(long *)(param_1 + 0x2b0);
  fVar7 = *(float *)(lVar6 + (long)param_3 * 0x10 + 0xc);
  fVar9 = *(float *)(lVar6 + (long)piVar1[1] * 0x10 + 0xc);
  fVar11 = fVar7;
  if (fVar9 < fVar7) {
    fVar11 = fVar9;
  }
  fVar10 = *(float *)(lVar6 + (long)piVar1[2] * 0x10 + 0xc);
  uVar4 = -(uint)(fVar7 <= fVar9);
  fVar7 = fVar10;
  if (fVar11 <= fVar10) {
    fVar7 = fVar11;
  }
  fVar9 = *(float *)(lVar6 + (long)piVar1[3] * 0x10 + 0xc);
  if (fVar10 < fVar11) {
    uVar4 = 1;
  }
  uVar3 = 2;
  if (fVar7 <= fVar9) {
    uVar3 = uVar4;
  }
  if (fVar7 <= fVar9) {
    fVar9 = fVar7;
  }
  fVar11 = *(float *)(lVar6 + (long)piVar1[4] * 0x10 + 0xc);
  uVar4 = 3;
  if (fVar9 <= fVar11) {
    fVar11 = fVar9;
    uVar4 = uVar3;
  }
  fVar9 = *(float *)(lVar6 + (long)piVar1[5] * 0x10 + 0xc);
  fVar7 = fVar9;
  if (fVar11 <= fVar9) {
    fVar7 = fVar11;
  }
  fVar10 = *(float *)(lVar6 + (long)piVar1[6] * 0x10 + 0xc);
  uVar3 = 4;
  if (fVar11 <= fVar9) {
    uVar3 = uVar4;
  }
  uVar4 = 5;
  if (fVar7 <= fVar10) {
    uVar4 = uVar3;
  }
  if (fVar7 <= fVar10) {
    fVar10 = fVar7;
  }
  uVar3 = 6;
  if (fVar10 <= *(float *)(lVar6 + (long)piVar1[7] * 0x10 + 0xc)) {
    uVar3 = uVar4;
  }
  if ((int)uVar3 < 1) {
    lVar6 = (long)param_3;
  }
  else {
    iVar5 = piVar1[(ulong)uVar3 + 1];
    piVar1[(ulong)uVar3 + 1] = param_3;
    lVar6 = (long)iVar5;
  }
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x298) + lVar6 * 0x10);
  uVar8 = *(undefined4 *)(*(long *)(param_1 + 0x298) + (long)param_3 * 0x10 + 0xc);
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined4 *)((long)puVar2 + 0xc) = uVar8;
  return;
}

