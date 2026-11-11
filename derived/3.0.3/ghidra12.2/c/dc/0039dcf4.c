
int FUN_0039dcf4(float param_1,long param_2)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar10 = *(float *)(param_2 + 0x18);
  fVar11 = *(float *)(param_2 + 0x1c);
  iVar8 = *(int *)(param_2 + 0x24);
  bVar3 = true;
  bVar4 = false;
  if (fVar10 <= param_1) {
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar11) && !NAN(param_1)) {
      bVar3 = fVar11 < param_1;
      bVar4 = false;
    }
  }
  if (bVar3 == bVar4) {
    uVar6 = (uint)*(ushort *)(param_2 + 0x10);
  }
  else {
    fVar12 = fVar10 - param_1;
    uVar1 = *(ushort *)(param_2 + 0x10);
    uVar6 = (uint)uVar1;
    if (0.0 < fVar12) {
      uVar1 = uVar1 >> 8;
      fVar9 = fVar12;
      if ((uVar1 & 3) == 0) {
        param_1 = fVar10;
        goto LAB_0039ddb8;
      }
    }
    else {
      uVar1 = uVar1 >> 0xc;
      if ((uVar1 & 3) == 0) {
        param_1 = fVar11;
        goto LAB_0039ddb8;
      }
      fVar9 = param_1 - fVar11;
    }
    fVar13 = fVar9 / (fVar11 - fVar10);
    uVar7 = (uint)fVar13;
    fVar9 = fVar9 - (float)(int)fVar13 * (fVar11 - fVar10);
    if ((uVar1 & 3) == 2) {
      uVar7 = uVar7 & 1;
    }
    else {
      if ((uVar1 & 3) == 3) {
        iVar2 = *(int *)(param_2 + 0x28) + *(int *)(param_2 + 0x28) * uVar7;
        iVar5 = -iVar2;
        if (fVar12 <= 0.0) {
          iVar5 = iVar2;
        }
        iVar8 = iVar5 + iVar8;
      }
      uVar7 = 1;
    }
    param_1 = fVar10 + fVar9;
    if (uVar7 != fVar12 <= 0.0) {
      param_1 = fVar11 - fVar9;
    }
  }
LAB_0039ddb8:
  iVar5 = (**(code **)(PTR_PTR_04bd09d8 +
                      (ulong)(uVar6 >> 2 & 3) * 0x10 + (ulong)((uVar6 & 0x70) - 0x40 >> 4) * 0x30))
                    (param_1);
  return iVar5 + iVar8;
}

