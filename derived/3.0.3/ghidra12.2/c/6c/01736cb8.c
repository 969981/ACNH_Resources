
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01736cb8(float *param_1)

{
  float *pfVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (DAT_05465dc0 == 0) {
    return 0;
  }
  if (DAT_04c93e08 == 0) {
    return 0;
  }
  lVar6 = *(long *)(*(long *)(*(long *)(DAT_04c93e08 + 0x1c0) + 8) +
                   ((ulong)(DAT_05465dc0 >> 0x11) & 0x7ff8));
  if (((lVar6 == 0) || ((*(uint *)(lVar6 + 0x248) >> 1 & 1) != 0)) ||
     (*(uint *)(lVar6 + 0x230) != DAT_05465dc0)) {
    lVar6 = 0;
  }
  if (*(int *)(DAT_04c93e08 + 0x288) == 1 || *(int *)(DAT_04c93e08 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar2 = DAT_04c93e08;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar5 = 1;
      goto joined_r0x01736d84;
    }
    if (*(uint *)(lVar2 + 0x5e8) < 5) {
      uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar2 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01736d84;
    }
  }
  uVar5 = 0;
joined_r0x01736d84:
  if (lVar6 == 0) {
    return 0;
  }
  uVar5 = uVar5 ^ 1;
  if (*(int *)(lVar6 + 0x150) != 1) {
    uVar5 = 1;
  }
  if (uVar5 != 0) {
    return 0;
  }
  fVar7 = *param_1;
  fVar8 = param_1[2];
  pfVar1 = (float *)PTR_DAT_04bb2150;
  if (*(long *)(lVar6 + 0x68) != 0) {
    pfVar1 = (float *)(*(long *)(lVar6 + 0x68) + 0x278);
  }
  if (fVar8 < fVar7) {
    return 0;
  }
  fVar9 = param_1[1];
  fVar10 = param_1[3];
  if (fVar10 < fVar9) {
    return 0;
  }
  fVar11 = *pfVar1;
  fVar12 = pfVar1[2];
  if (((fVar11 < fVar7) || (fVar8 < fVar11)) || ((fVar12 < fVar9 || (fVar10 < fVar12)))) {
    if (fVar11 <= fVar8) {
      fVar8 = fVar11;
    }
    if (fVar7 <= fVar11) {
      fVar7 = fVar8;
    }
    if (fVar12 <= fVar10) {
      fVar10 = fVar12;
    }
    if (fVar9 <= fVar12) {
      fVar9 = fVar10;
    }
    if (21.669027 < (fVar12 - fVar9) * (fVar12 - fVar9) + (fVar11 - fVar7) * (fVar11 - fVar7)) {
      return 0;
    }
  }
  return 1;
}

