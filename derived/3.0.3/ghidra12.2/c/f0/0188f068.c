
void FUN_0188f068(long param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint *puVar4;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  undefined **local_30;
  undefined *puStack_28;
  
  fVar6 = *(float *)(param_1 + 0x4a8);
  piVar2 = (int *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b8) + 0xf8) + 0xf0))();
  fVar6 = fVar6 / (float)*piVar2;
  fVar6 = fVar6 + fVar6;
  *(float *)(param_1 + 0x308) = fVar6;
  piVar2 = (int *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b8) + 0xf8) + 0xf0))();
  *(float *)(param_1 + 0x318) = -fVar6 / (float)*piVar2;
  puVar3 = (undefined4 *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b0) + 0x60) + 0xf0))();
  uVar7 = *puVar3;
  FUN_01a185a8(param_1 + 0x410);
  *(undefined4 *)(param_1 + 0x4a4) = uVar7;
  puVar4 = (uint *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b8) + 0xf8) + 0xf0))();
  uVar1 = *puVar4;
  *(undefined4 *)(param_1 + 0x4a0) = 1;
  *(byte *)(param_1 + 0x484) = (byte)(uVar1 >> 0x1f);
  *(uint *)(param_1 + 0x480) = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  *(undefined4 *)(param_1 + 0x478) = 0;
  *(uint *)(param_1 + 0x47c) = uVar1 & (int)uVar1 >> 0x1f;
  local_30 = &PTR_LAB_048f9770;
  puStack_28 = &DAT_0407c690;
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x48) + 0x60), lVar5 != 0)) {
    FUN_0073d870(lVar5,&local_30,10,0,0);
  }
  return;
}

