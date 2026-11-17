
void FUN_0310a1f4(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar2 = *(long *)(param_1 + 0x268);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 4) == 0) {
      uVar3 = 1;
    }
    else {
      if (*(int *)(lVar2 + 4) != 1) goto LAB_0310a21c;
      uVar3 = 2;
    }
    *(undefined4 *)(lVar2 + 4) = uVar3;
  }
LAB_0310a21c:
  lVar2 = *(long *)(param_1 + 0x270);
  fVar7 = *(float *)(lVar2 + 0x1c);
  fVar6 = *(float *)(lVar2 + 0x20);
  fVar8 = ((float)(*(int *)(*(long *)(param_1 + 0x268) + 4) * 100) / 100.0) * 0.6931472;
  iVar4 = (int)(fVar8 * 1.442695);
  fVar8 = ((fVar8 - (float)iVar4 * 0.6931472) + 0.6931472) * 23.08312;
  uVar5 = (ulong)(uint)(int)fVar8;
  fVar8 = ABS((float)((int)(*(float *)(PTR_DAT_04bd0d90 + uVar5 * 8) +
                           *(float *)((long)(PTR_DAT_04bd0d90 + uVar5 * 8) + 4) *
                           (fVar8 - (float)uVar5)) + iVar4 * 0x800000));
  fVar9 = 0.5;
  if (1.0 <= fVar8) {
    fVar9 = (1.0 / fVar8) * 0.5;
  }
  if (0.0 <= fVar7 - fVar9) {
    if (1.0 < fVar7 + fVar9) {
      fVar7 = 1.0 - fVar9;
    }
  }
  else {
    fVar7 = fVar9 + 0.0;
  }
  if (0.0 <= fVar6 - fVar9) {
    if (1.0 < fVar6 + fVar9) {
      fVar6 = 1.0 - fVar9;
    }
  }
  else {
    fVar6 = fVar9 + 0.0;
  }
  bVar1 = true;
  if ((fVar7 <= 1.0) && (bVar1 = false, !NAN(fVar7))) {
    bVar1 = fVar7 < 0.0;
  }
  fVar8 = 0.5;
  if (!bVar1) {
    fVar8 = fVar7;
  }
  bVar1 = true;
  if ((fVar6 <= 1.0) && (bVar1 = false, !NAN(fVar6))) {
    bVar1 = fVar6 < 0.0;
  }
  fVar9 = 0.5;
  if (!bVar1) {
    fVar9 = fVar6;
  }
  *(float *)(lVar2 + 0x54) = fVar8;
  *(float *)(lVar2 + 0x58) = fVar9;
  return;
}

