
void FUN_0185d898(long param_1)

{
  uint uVar1;
  float fVar2;
  float *pfVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  
  FUN_01815e0c(param_1,*(undefined4 *)(param_1 + 0x280),param_1 + 0x328);
  lVar6 = *(long *)(param_1 + 0x500);
  *(undefined1 *)(param_1 + 0x565) = 0;
  pfVar3 = (float *)(**(code **)(*(long *)(lVar6 + 0x248) + 0xf0))(lVar6 + 0x248);
  fVar7 = *pfVar3;
  pfVar3 = (float *)(**(code **)(*(long *)(lVar6 + 0x278) + 0xf0))(lVar6 + 0x278);
  fVar8 = *pfVar3;
  pfVar3 = (float *)(**(code **)(*(long *)(lVar6 + 0x248) + 0xf0))(lVar6 + 0x248);
  fVar2 = *pfVar3;
  if (*pfVar3 <= fVar8) {
    fVar2 = fVar8;
  }
  puVar4 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar1 = puVar4[3];
  uVar5 = *puVar4 ^ *puVar4 << 0xb;
  *puVar4 = puVar4[1];
  puVar4[1] = puVar4[2];
  uVar5 = uVar5 >> 8 ^ uVar1 >> 0x13 ^ uVar5 ^ uVar1;
  puVar4[2] = uVar1;
  puVar4[3] = uVar5;
  *(undefined4 *)(param_1 + 0x518) = 0;
  *(undefined1 *)(param_1 + 0x580) = 0;
  uVar5 = (uint)(fVar7 + (fVar2 - fVar7) * ((float)(uVar5 >> 9 | 0x3f800000) + -1.0));
  *(byte *)(param_1 + 0x524) = (byte)(uVar5 >> 0x1f);
  *(uint *)(param_1 + 0x520) = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  *(uint *)(param_1 + 0x51c) = uVar5 & (int)uVar5 >> 0x1f;
  puVar4 = (uint *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4f8) + 0x30) + 0xf0))();
  uVar5 = *puVar4;
  *(undefined4 *)(param_1 + 0x570) = 0;
  *(undefined4 *)(param_1 + 0x508) = 0;
  *(byte *)(param_1 + 0x57c) = (byte)(uVar5 >> 0x1f);
  *(uint *)(param_1 + 0x578) = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  *(uint *)(param_1 + 0x574) = uVar5 & (int)uVar5 >> 0x1f;
  return;
}

