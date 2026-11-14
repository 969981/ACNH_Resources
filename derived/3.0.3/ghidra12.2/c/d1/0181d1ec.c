
void FUN_0181d1ec(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  float *pfVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  undefined *local_40;
  undefined *puStack_38;
  
  if (*(int *)(*(long *)PTR_DAT_04bb47e0 + 0x624) == *(int *)(*(long *)(param_1 + 0x48) + 0x230)) {
    *(undefined4 *)(*(long *)PTR_DAT_04bb47e0 + 0x624) = 0;
  }
  lVar5 = *(long *)(param_1 + 0x4c8);
  *(undefined4 *)(param_1 + 0x308) = 0;
  pfVar4 = (float *)(**(code **)(*(long *)(lVar5 + 0x30) + 0xf0))();
  fVar7 = *pfVar4;
  plVar6 = (long *)(lVar5 + 0x60);
  pfVar4 = (float *)(**(code **)(*plVar6 + 0xf0))(plVar6);
  fVar8 = *pfVar4;
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  uVar2 = *(uint *)(param_1 + 0x3f4);
  uVar1 = *(uint *)(param_1 + 1000) ^ *(uint *)(param_1 + 1000) << 0xb;
  *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_1 + 0x3ec);
  uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
  uVar3 = *(undefined4 *)(param_1 + 0x3f0);
  *(uint *)(param_1 + 0x3f0) = uVar2;
  *(undefined4 *)(param_1 + 0x3ec) = uVar3;
  local_40 = PTR_DAT_04bb2020;
  *(uint *)(param_1 + 0x3f4) = uVar1;
  local_40 = local_40 + 0x10;
  puStack_38 = &DAT_0407c690;
  uVar1 = (int)((ulong)uVar1 * (ulong)(uint)((int)(fVar8 * 30.0) - (int)(fVar7 * 30.0)) >> 0x20) +
          (int)(fVar7 * 30.0);
  *(byte *)(param_1 + 0x4ec) = (byte)(uVar1 >> 0x1f);
  *(uint *)(param_1 + 0x4e4) = uVar1 & (int)uVar1 >> 0x1f;
  *(uint *)(param_1 + 0x4e8) = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x48) + 0x60), lVar5 != 0)) {
    FUN_0073d870(lVar5,&local_40,10,0,0);
  }
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x3d0) + 0x60) + 0x1138) != 0) {
    FUN_03850760(0);
  }
  *(undefined1 *)(param_1 + 0x542) = 0;
  *(undefined4 *)(param_1 + 0x53c) = 0;
  return;
}

