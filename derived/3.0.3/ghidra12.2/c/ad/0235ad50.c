
void FUN_0235ad50(long param_1,byte *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined2 uVar6;
  short sVar7;
  long lVar8;
  byte bVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  
  if (*(int *)(param_1 + 0x178) == 1) {
    return;
  }
  uVar6 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar1 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
    uVar4 = 0;
    if (uVar1 < 0x149) {
      uVar4 = uVar1;
    }
    uVar6 = (undefined2)uVar4;
  }
  fVar13 = *(float *)(*(long *)(param_1 + 0x68) + 0x2dc);
  bVar9 = *(byte *)(param_1 + 0x1ee8);
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  *param_2 = bVar9;
  if (DAT_05aed670 == 0) {
    puVar11 = &DAT_055c04a0;
  }
  else {
    puVar11 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar11 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar3 = FUN_006bd550(*puVar11,0);
      puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar11 = &DAT_055c04a0;
      }
    }
  }
  if (DAT_055c1b60 != &DAT_055c1b58) {
    sVar7 = 0;
    puVar10 = DAT_055c1b60;
    do {
      if (*(int *)(puVar10 + -1) == *(int *)(puVar11 + 7)) {
        if (sVar7 != -1) goto LAB_0235ae84;
        break;
      }
      puVar10 = (undefined8 *)puVar10[1];
      sVar7 = sVar7 + 1;
    } while (puVar10 != &DAT_055c1b58);
  }
  sVar7 = 0;
LAB_0235ae84:
  *(short *)(param_2 + 1) = sVar7;
  *(undefined2 *)(param_2 + 3) = uVar6;
  lVar8 = *(long *)(param_1 + 0x68);
  *(int *)(param_2 + 5) = (int)(*(float *)(lVar8 + 0x278) * 999.99994);
  iVar3 = (int)(*(float *)(lVar8 + 0x27c) * 4.0);
  if (0x7ffe < iVar3) {
    iVar3 = 0x7fff;
  }
  if (iVar3 < -0x7fff) {
    iVar3 = -0x8000;
  }
  *(short *)(param_2 + 9) = (short)iVar3;
  *(int *)(param_2 + 0xb) = (int)(*(float *)(lVar8 + 0x280) * 999.99994);
  *(undefined2 *)(param_2 + 0xf) = *(undefined2 *)(*(long *)(param_1 + 0x68) + 0x2b6);
  fVar12 = (float)FUN_023295ec(param_1);
  param_2[0x16] = 0;
  iVar3 = (int)(fVar12 * 999.99994);
  if (0x7ffe < iVar3) {
    iVar3 = 0x7fff;
  }
  if (iVar3 < -0x7fff) {
    iVar3 = -0x8000;
  }
  *(short *)(param_2 + 0x11) = (short)iVar3;
  uVar4 = FUN_00a74b78((byte *)(param_1 + 0x1ee8));
  if (uVar4 < 4) {
    param_2[0x16] = 1;
  }
  if (fVar13 <= 1.5) {
    bVar2 = false;
  }
  else {
    if (*(long *)(param_1 + 0x70) == 0) {
      uVar4 = 0;
    }
    else {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
      bVar2 = false;
      uVar4 = 0;
      if (uVar1 < 0x149) {
        uVar4 = uVar1;
      }
      if (uVar4 == 4) goto LAB_0235afbc;
    }
    bVar2 = uVar4 != 0xba;
  }
LAB_0235afbc:
  lVar8 = FUN_0251e98c(1);
  puVar5 = (uint *)(**(code **)(*(long *)(lVar8 + 0x300) + 0xf0))(lVar8 + 0x300);
  if (bVar2) {
    uVar4 = *(int *)(param_1 + 0x1e84) + 1;
    uVar1 = *puVar5;
    *(uint *)(param_1 + 0x1e84) = uVar4;
    if (uVar1 < uVar4) {
      bVar9 = param_2[0x15] | 1;
      goto LAB_0235b0a4;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x1e84) = 0;
  }
  bVar9 = param_2[0x15] & 0xfe;
LAB_0235b0a4:
  param_2[0x15] = bVar9;
  param_2[0x18] = param_2[0x18] & 0xf0 | (byte)*(undefined4 *)(param_1 + 0x1810) & 0xf;
  return;
}

