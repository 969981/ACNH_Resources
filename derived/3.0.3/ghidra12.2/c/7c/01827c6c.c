
void FUN_01827c6c(long param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  float *pfVar3;
  uint *puVar4;
  uint uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined *local_158;
  undefined1 *puStack_150;
  undefined4 local_148;
  undefined1 local_144 [255];
  undefined1 local_45;
  
  FUN_01815e0c(param_1,*(undefined4 *)(param_1 + 0x280),param_1 + 0x328);
  lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x48) + 0x60) + 0x1138);
  puVar2 = (undefined4 *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b8) + 0xf8) + 0xf0))();
  if (*(char *)(lVar6 + 0xae) != '\0') {
    lVar6 = *(long *)(lVar6 + 0x78);
    if (*(int *)(lVar6 + 0x18) < 1) {
      local_45 = 0;
      local_148 = 0x100;
      puStack_150 = local_144;
      local_144[0] = 0;
      local_158 = PTR_DAT_04bb21f8 + 0x10;
      lVar6 = *(long *)(*(long *)(*(long *)(lVar6 + 0x50) + 0x10) + 8);
      FUN_038d1270(&local_158,"%s.as",lVar6 + *(int *)(lVar6 + 0x24) + (long)*(int *)(lVar6 + 8));
    }
    else {
      *(undefined4 *)(**(long **)(lVar6 + 0x20) + 0xa0) = *puVar2;
    }
  }
  pfVar3 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b0) + 0x30) + 0xf0))();
  fVar7 = *pfVar3;
  pfVar3 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b0) + 0x60) + 0xf0))();
  fVar8 = *pfVar3;
  puVar4 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar1 = puVar4[3];
  uVar5 = *puVar4 ^ *puVar4 << 0xb;
  *puVar4 = puVar4[1];
  puVar4[1] = puVar4[2];
  uVar5 = uVar5 >> 8 ^ uVar1 >> 0x13 ^ uVar5 ^ uVar1;
  puVar4[2] = uVar1;
  puVar4[3] = uVar5;
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  uVar5 = (uint)(fVar7 + (fVar8 - fVar7) * ((float)(uVar5 >> 9 | 0x3f800000) + -1.0));
  *(byte *)(param_1 + 0x4ec) = (byte)(uVar5 >> 0x1f);
  *(uint *)(param_1 + 0x4e8) = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  *(uint *)(param_1 + 0x4e4) = uVar5 & (int)uVar5 >> 0x1f;
  return;
}

