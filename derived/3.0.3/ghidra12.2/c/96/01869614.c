
void FUN_01869614(long param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar2 = *(int *)(param_1 + 0x4f0) + 0x38e38e4;
  lVar6 = *(long *)(param_1 + 0x4b8);
  *(uint *)(param_1 + 0x4f0) = uVar2;
  uVar1 = (ulong)(uVar2 >> 0x17 & 0xff);
  *(float *)(param_1 + 0x328) =
       (float)*(int *)(param_1 + 0x4e8) * 5.0 + 2.5 +
       ((float)(&DAT_041997a0)[uVar1 * 4] +
       (float)(&DAT_041997a4)[uVar1 * 4] * (float)(uVar2 * 2 & 0xfffffe) * 5.9604645e-08) * 1.5625;
  *(float *)(param_1 + 0x330) = (float)*(int *)(param_1 + 0x4ec) * 5.0 + 2.5;
  fVar7 = (float)FUN_015cb8d4(param_1 + 0x328,1);
  puVar4 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  pfVar5 = (float *)(**(code **)(*(long *)(lVar6 + 0x2d8) + 0xf0))(lVar6 + 0x2d8);
  uVar3 = puVar4[3];
  uVar2 = *puVar4 ^ *puVar4 << 0xb;
  fVar8 = *pfVar5;
  *puVar4 = puVar4[1];
  puVar4[1] = puVar4[2];
  uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
  puVar4[2] = uVar3;
  puVar4[3] = uVar2;
  pfVar5 = (float *)(**(code **)(*(long *)(lVar6 + 0x218) + 0xf0))(lVar6 + 0x218);
  fVar9 = *pfVar5;
  *(undefined1 *)(param_1 + 0x496) = 1;
  *(float *)(param_1 + 0x32c) = fVar9 + fVar7 + fVar8 * ((float)(uVar2 >> 9 | 0x3f800000) + -1.0);
  FUN_01815e0c(param_1,*(undefined4 *)(param_1 + 0x280),param_1 + 0x328);
  return;
}

