
float FUN_0039dbd4(float param_1,long param_2)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar7 = *(float *)(param_2 + 0x18);
  fVar8 = *(float *)(param_2 + 0x1c);
  fVar12 = *(float *)(param_2 + 0x24);
  bVar2 = true;
  bVar3 = false;
  if (fVar7 <= param_1) {
    bVar2 = false;
    bVar3 = true;
    if (!NAN(fVar8) && !NAN(param_1)) {
      bVar2 = fVar8 < param_1;
      bVar3 = false;
    }
  }
  if (bVar2 == bVar3) {
    uVar4 = (uint)*(ushort *)(param_2 + 0x10);
  }
  else {
    fVar9 = fVar7 - param_1;
    uVar1 = *(ushort *)(param_2 + 0x10);
    uVar4 = (uint)uVar1;
    if (0.0 < fVar9) {
      uVar1 = uVar1 >> 8;
      fVar6 = fVar9;
      if ((uVar1 & 3) == 0) {
        param_1 = fVar7;
        goto LAB_0039dcb4;
      }
    }
    else {
      uVar1 = uVar1 >> 0xc;
      if ((uVar1 & 3) == 0) {
        param_1 = fVar8;
        goto LAB_0039dcb4;
      }
      fVar6 = param_1 - fVar8;
    }
    fVar11 = fVar6 / (fVar8 - fVar7);
    uVar5 = (uint)fVar11;
    fVar6 = fVar6 - (float)(int)fVar11 * (fVar8 - fVar7);
    if ((uVar1 & 3) == 2) {
      uVar5 = uVar5 & 1;
    }
    else if ((uVar1 & 3) == 3) {
      fVar10 = (float)(int)(uVar5 + 1);
      uVar5 = 1;
      fVar11 = *(float *)(param_2 + 0x28) * fVar10;
      if (0.0 < fVar9) {
        fVar11 = -(*(float *)(param_2 + 0x28) * fVar10);
      }
      fVar12 = fVar12 + fVar11;
    }
    else {
      uVar5 = 1;
    }
    param_1 = fVar7 + fVar6;
    if (uVar5 != fVar9 <= 0.0) {
      param_1 = fVar8 - fVar6;
    }
  }
LAB_0039dcb4:
  fVar7 = (float)(**(code **)(PTR_PTR_04bd09d0 +
                             (ulong)(uVar4 >> 2 & 3) * 0x10 + (ulong)(uVar4 >> 4 & 7) * 0x30))
                           (param_1,param_2);
  return fVar12 + *(float *)(param_2 + 0x20) * fVar7;
}

