
void FUN_014ce120(undefined1 param_1 [16],float param_2,long param_3)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_48;
  
  iVar1 = *(int *)(param_3 + 0x378);
  if (2 < iVar1 - 3U) {
    return;
  }
  local_48 = *(ulong *)(param_3 + 0x6d8);
  if ((iVar1 == 5) || (iVar1 == 3)) {
    uVar4 = FUN_02569a20(&local_48,*(undefined4 *)(param_3 + 0x230));
    local_48 = (ulong)uVar4;
  }
  else {
    param_2 = (float)(local_48 >> 0x20);
  }
  local_48 = CONCAT44(-param_2,(float)local_48);
  lVar2 = FUN_014c9440(param_3);
  pfVar3 = (float *)(**(code **)(*(long *)(lVar2 + 0x160) + 0xf0))(lVar2 + 0x160);
  fVar7 = *pfVar3;
  fVar8 = pfVar3[1];
  iVar1 = *(int *)(param_3 + 0x3c0);
  if ((((iVar1 == 0x10) || (iVar1 == 0x11)) || (iVar1 == 0x13)) ||
     ((iVar1 == 0x14 || (iVar1 == 0x15)))) {
    lVar2 = FUN_014c9440(param_3);
    pfVar3 = (float *)(**(code **)(*(long *)(lVar2 + 0x198) + 0xf0))(lVar2 + 0x198);
    fVar7 = *pfVar3;
    fVar8 = pfVar3[1];
  }
  fVar9 = (float)local_48;
  fVar10 = local_48._4_4_;
  fVar11 = SQRT(local_48._4_4_ * local_48._4_4_ + (float)local_48 * (float)local_48);
  lVar2 = FUN_014c9440(param_3);
  pfVar3 = (float *)(**(code **)(*(long *)(lVar2 + 0xf0) + 0xf0))();
  fVar6 = *pfVar3;
  fVar5 = 0.0;
  if (fVar6 < fVar11) {
    if (fVar11 < pfVar3[1]) {
      fVar5 = (fVar11 - fVar6) / (pfVar3[1] - fVar6) + 0.0;
    }
    else {
      fVar5 = 1.0;
    }
  }
  if (0.0 < fVar11) {
    fVar9 = fVar9 * (fVar5 / fVar11);
    fVar10 = fVar10 * (fVar5 / fVar11);
    fVar11 = SQRT(fVar10 * fVar10 + fVar9 * fVar9);
  }
  lVar2 = FUN_014c9440(param_3);
  pfVar3 = (float *)(**(code **)(*(long *)(lVar2 + 0x128) + 0xf0))(lVar2 + 0x128);
  fVar5 = *pfVar3;
  fVar6 = 0.0;
  if (fVar5 < fVar11) {
    if (pfVar3[1] <= fVar11) {
      fVar6 = 1.0;
    }
    else {
      fVar6 = (fVar11 - fVar5) / (pfVar3[1] - fVar5) + 0.0;
    }
  }
  fVar7 = fVar7 + fVar6 * (fVar8 - fVar7);
  fVar9 = fVar9 * fVar7;
  fVar10 = fVar10 * fVar7;
  iVar1 = *(int *)(param_3 + 0x3c0);
  if (((iVar1 == 0x10) || (iVar1 == 0x11)) ||
     ((iVar1 == 0x13 || ((iVar1 == 0x14 || (iVar1 == 0x15)))))) {
    fVar7 = -fVar9;
    if (0.0 <= fVar9) {
      fVar7 = fVar9;
    }
    fVar8 = -fVar10;
    if (0.0 <= fVar10) {
      fVar8 = fVar10;
    }
    fVar5 = 0.0;
    if (fVar8 < fVar7) goto LAB_014ce3b8;
    fVar9 = 0.0;
  }
  fVar5 = fVar10;
LAB_014ce3b8:
  fVar8 = *(float *)(param_3 + 0xa3c);
  local_48 = CONCAT44(fVar10,0x10);
  *(float *)(param_3 + 0xa30) = fVar8;
  fVar7 = *(float *)(param_3 + 0xa44);
  *(float *)(param_3 + 0xa34) = *(float *)(param_3 + 0xa40);
  *(float *)(param_3 + 0xa38) = fVar7;
  if (((((iVar1 == 0x10) || (iVar1 == 0x11)) || (iVar1 == 0x13)) ||
      ((iVar1 == 0x14 || (iVar1 == 0x15)))) && ((fVar9 == 0.0 && (fVar5 == 0.0)))) {
    *(float *)(param_3 + 0xa3c) =
         (float)(int)((int)((float)(int)fVar8 / 10.0) - (uint)(fVar8 < 0.0)) * 10.0 + 5.0;
    fVar5 = (float)(int)((int)((float)(int)fVar7 / 10.0) - (uint)(fVar7 < 0.0)) * 10.0 + 5.0;
  }
  else {
    *(float *)(param_3 + 0xa3c) = fVar9 + fVar8;
    *(float *)(param_3 + 0xa40) = *(float *)(param_3 + 0xa40) + 0.0;
    fVar5 = fVar5 + fVar7;
  }
  *(float *)(param_3 + 0xa44) = fVar5;
  FUN_014ce4e0(param_3);
  return;
}

