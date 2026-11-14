
void FUN_01883b8c(long param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  float *pfVar3;
  uint *puVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  puVar2 = (undefined4 *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b8) + 0x30) + 0xf0))();
  *(undefined4 *)(param_1 + 0x4a0) = *puVar2;
  pfVar3 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4d0) + 0x218) + 0xf0))
                              (*(long *)(param_1 + 0x4d0) + 0x218);
  fVar6 = *pfVar3;
  pfVar3 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4d0) + 0x248) + 0xf0))
                              (*(long *)(param_1 + 0x4d0) + 0x248);
  fVar7 = *pfVar3;
  puVar4 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar1 = puVar4[3];
  uVar5 = *puVar4 ^ *puVar4 << 0xb;
  *puVar4 = puVar4[1];
  puVar4[1] = puVar4[2];
  uVar5 = uVar5 >> 8 ^ uVar1 >> 0x13 ^ uVar5 ^ uVar1;
  puVar4[2] = uVar1;
  puVar4[3] = uVar5;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  *(undefined4 *)(param_1 + 0x530) = 0;
  uVar5 = (uint)((fVar6 + (fVar7 - fVar6) * ((float)(uVar5 >> 9 | 0x3f800000) + -1.0)) * 30.0);
  *(byte *)(param_1 + 0x4fc) = (byte)(uVar5 >> 0x1f);
  *(uint *)(param_1 + 0x4f8) = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  *(uint *)(param_1 + 0x4f4) = uVar5 & (int)uVar5 >> 0x1f;
  FUN_01815e0c(param_1,*(undefined4 *)(param_1 + 0x280),param_1 + 0x328);
  return;
}

