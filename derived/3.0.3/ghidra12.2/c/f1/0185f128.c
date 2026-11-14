
void FUN_0185f128(long param_1)

{
  uint uVar1;
  long *plVar2;
  float *pfVar3;
  ulong uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  pfVar3 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x500) + 0x98) + 0xf0))();
  fVar11 = *pfVar3;
  lVar8 = *(long *)(param_1 + 0x3d0);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x2d8) + 0x28))(lVar8 + 0x2d8);
    plVar2 = DAT_0537d558;
    uVar4 = FUN_01d3e29c(*DAT_0537d558 + 8);
    if (((uVar4 & 1) != 0) && (uVar4 = FUN_01d692e8(plVar2[2]), (uVar4 & 1) == 0)) {
      fVar9 = *(float *)(param_1 + 0x334) - *(float *)(param_1 + 0x328);
      fVar10 = *(float *)(param_1 + 0x33c) - *(float *)(param_1 + 0x330);
      pfVar3 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x500) + 0x128) + 0xf0))
                                  (*(long *)(param_1 + 0x500) + 0x128);
      fVar12 = *pfVar3;
      pfVar3 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x500) + 0x128) + 0xf0))
                                  (*(long *)(param_1 + 0x500) + 0x128);
      if (fVar12 * *pfVar3 < fVar10 * fVar10 + fVar9 * fVar9) {
        fVar11 = fVar11 * 0.75;
      }
    }
  }
  fVar9 = *(float *)(param_1 + 0x4d0);
  pfVar3 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x500) + 200) + 0xf0))();
  *(float *)(param_1 + 0x308) = fVar9 / fVar11 + fVar11 * *pfVar3 * -0.5;
  puVar5 = (undefined4 *)(**(code **)(*(long *)(*(long *)(param_1 + 0x500) + 200) + 0xf0))();
  *(undefined4 *)(param_1 + 0x318) = *puVar5;
  lVar8 = *(long *)(param_1 + 0x500);
  fVar9 = (float)NEON_fminnm((*(float *)(param_1 + 0x558) / fVar11) * 4.0,0x40a00000);
  *(float *)(param_1 + 0x40c) = fVar9;
  *(float *)(param_1 + 0x55c) = -fVar9 / fVar11 + -fVar9 / fVar11;
  pfVar3 = (float *)(**(code **)(*(long *)(lVar8 + 0x248) + 0xf0))(lVar8 + 0x248);
  fVar9 = *pfVar3;
  pfVar3 = (float *)(**(code **)(*(long *)(lVar8 + 0x278) + 0xf0))(lVar8 + 0x278);
  fVar10 = *pfVar3;
  pfVar3 = (float *)(**(code **)(*(long *)(lVar8 + 0x248) + 0xf0))(lVar8 + 0x248);
  fVar11 = *pfVar3;
  if (*pfVar3 <= fVar10) {
    fVar11 = fVar10;
  }
  puVar6 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar1 = puVar6[3];
  uVar7 = *puVar6 ^ *puVar6 << 0xb;
  *puVar6 = puVar6[1];
  puVar6[1] = puVar6[2];
  uVar7 = uVar7 >> 8 ^ uVar1 >> 0x13 ^ uVar7 ^ uVar1;
  puVar6[2] = uVar1;
  puVar6[3] = uVar7;
  *(undefined4 *)(param_1 + 0x518) = 0;
  *(undefined1 *)(param_1 + 0x4d8) = 0;
  uVar7 = (uint)(fVar9 + (fVar11 - fVar9) * ((float)(uVar7 >> 9 | 0x3f800000) + -1.0));
  *(byte *)(param_1 + 0x524) = (byte)(uVar7 >> 0x1f);
  *(uint *)(param_1 + 0x520) = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
  *(uint *)(param_1 + 0x51c) = uVar7 & (int)uVar7 >> 0x1f;
  return;
}

