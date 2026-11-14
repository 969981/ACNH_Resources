
void FUN_01885988(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  lVar7 = *(long *)(param_1 + 0x3d0);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x2d8) + 0x28))(lVar7 + 0x2d8);
    plVar4 = DAT_0537d558;
    uVar5 = FUN_01d3e29c(*DAT_0537d558 + 8);
    if (((uVar5 & 1) != 0) && (uVar5 = FUN_01d692e8(plVar4[2]), (uVar5 & 1) == 0)) {
      return;
    }
  }
  puVar6 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
  uVar3 = puVar6[3];
  uVar1 = *puVar6 ^ *puVar6 << 0xb;
  uVar2 = uVar1 ^ uVar3;
  uVar1 = uVar1 >> 8 ^ uVar3 >> 0x13 ^ uVar2;
  *puVar6 = puVar6[1];
  puVar6[1] = puVar6[2];
  puVar6[2] = uVar3;
  puVar6[3] = uVar1;
  lVar7 = *(long *)(param_1 + 0x300);
  uVar5 = (ulong)(uVar2 >> 0x18);
  fVar9 = (float)(&DAT_04199798)[uVar5 * 4];
  fVar11 = (float)(&DAT_0419979c)[uVar5 * 4];
  fVar8 = (float)(uVar1 & 0xffffff) * 5.9604645e-08;
  fVar10 = (float)(&DAT_041997a0)[uVar5 * 4];
  fVar12 = (float)(&DAT_041997a4)[uVar5 * 4];
  fVar13 = *(float *)(lVar7 + 0x278);
  fVar14 = *(float *)(lVar7 + 0x280);
  *(float *)(param_1 + 0x32c) = *(float *)(lVar7 + 0x27c) + 0.0;
  *(float *)(param_1 + 0x328) = fVar13 + (fVar9 + fVar8 * fVar11) * 10.0;
  *(float *)(param_1 + 0x330) = (fVar10 + fVar8 * fVar12) * 10.0 + fVar14;
  FUN_01815e0c(param_1,*(undefined4 *)(param_1 + 0x280),param_1 + 0x328);
  return;
}

