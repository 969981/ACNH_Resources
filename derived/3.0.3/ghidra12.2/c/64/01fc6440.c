
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01fc6440(long param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float local_58 [10];
  
  puVar2 = PTR_DAT_04bb5ce0;
  if ((param_3 & 1) == 0) {
    lVar5 = *(long *)PTR_DAT_04bb5ce0;
    if (lVar5 == 0) {
      uVar10 = 0xf;
    }
    else {
      uVar10 = 0xf;
      if (*(char *)(lVar5 + 0xe9e) != '\0') {
        uVar10 = (1 << (ulong)(*(uint *)(lVar5 + 0xea0) & 0x1f) ^ 0xffffffffU) & 0xf;
      }
    }
  }
  else {
    lVar5 = *(long *)PTR_DAT_04bb5ce0;
    if ((lVar5 == 0) || (*(char *)(lVar5 + 0xe9e) == '\0')) {
      puVar6 = (uint *)(param_1 + 0x12180);
    }
    else {
      puVar6 = (uint *)(lVar5 + 0xea0);
    }
    uVar10 = 1 << (ulong)(*puVar6 & 0x1f) & 0xff;
  }
  puVar3 = (undefined4 *)(**(code **)(*(long *)(DAT_053e0208 + 0x18060) + 0xf0))();
  local_58[5] = (float)*puVar3;
  lVar5 = *(long *)puVar2;
  if (lVar5 == 0) {
    iVar7 = 0;
    iVar4 = 0;
    iVar8 = 0x10;
    iVar9 = 0x10;
  }
  else {
    iVar7 = *(int *)(lVar5 + 0xd88);
    iVar4 = *(int *)(lVar5 + 0xd8c);
    iVar9 = *(int *)(lVar5 + 0xd98);
    iVar8 = *(int *)(lVar5 + 0xd9c);
  }
  iVar1 = iVar7;
  if (iVar9 <= iVar7) {
    iVar1 = iVar9;
  }
  if (iVar7 <= iVar9) {
    iVar7 = iVar9;
  }
  iVar9 = iVar4;
  if (iVar8 <= iVar4) {
    iVar9 = iVar8;
  }
  if (iVar4 <= iVar8) {
    iVar4 = iVar8;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  iVar8 = 2;
  local_58[7] = (float)iVar1 * 5.0;
  local_58[6] = (float)iVar9 * 5.0;
  local_58[1] = (float)iVar7 * 5.0 + 5.0;
  local_58[0] = (float)iVar4 * 5.0 + 5.0;
  local_58[4] = (local_58[7] + local_58[1]) * 0.5;
  local_58[3] = (local_58[6] + local_58[0]) * 0.5;
  local_58[2] = local_58[5];
  local_58[8] = local_58[5];
  local_58[9] = local_58[3];
  if ((uVar10 & 1) == 0) {
    fVar11 = 3.4028235e+38;
  }
  else {
    iVar8 = 0;
    fVar11 = local_58[4] - *(float *)(lVar5 + 0x278);
    local_58[0] = local_58[0] - *(float *)(lVar5 + 0x280);
    fVar11 = local_58[0] * local_58[0] + fVar11 * fVar11;
    if (3.4028235e+38 <= fVar11) {
      fVar11 = 3.4028235e+38;
      iVar8 = 2;
    }
  }
  if ((uVar10 >> 1 & 1) != 0) {
    local_58[1] = local_58[1] - *(float *)(lVar5 + 0x278);
    fVar12 = local_58[3] - *(float *)(lVar5 + 0x280);
    fVar12 = fVar12 * fVar12 + local_58[1] * local_58[1];
    if (fVar12 < fVar11) {
      fVar11 = fVar12;
      iVar8 = 1;
    }
  }
  if ((uVar10 >> 2 & 1) != 0) {
    local_58[4] = local_58[4] - *(float *)(lVar5 + 0x278);
    local_58[6] = local_58[6] - *(float *)(lVar5 + 0x280);
    fVar12 = local_58[6] * local_58[6] + local_58[4] * local_58[4];
    if (fVar12 < fVar11) {
      fVar11 = fVar12;
      iVar8 = 2;
    }
  }
  if (((uVar10 >> 3 & 1) != 0) &&
     (local_58[7] = local_58[7] - *(float *)(lVar5 + 0x278),
     local_58[3] = local_58[3] - *(float *)(lVar5 + 0x280),
     local_58[3] * local_58[3] + local_58[7] * local_58[7] < fVar11)) {
    iVar8 = 3;
  }
  fVar11 = local_58[(long)iVar8 * 3];
  *param_2 = *(undefined8 *)(local_58 + (long)iVar8 * 3 + -2);
  *(float *)(param_2 + 1) = fVar11;
  return;
}

