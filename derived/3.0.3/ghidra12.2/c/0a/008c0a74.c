
void FUN_008c0a74(undefined4 *param_1,long param_2)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  lVar3 = param_2 + 0x180;
  pfVar1 = (float *)(**(code **)(*(long *)(param_2 + 0x180) + 0xf0))(lVar3);
  fVar5 = *pfVar1;
  lVar2 = (**(code **)(*(long *)(param_2 + 0x180) + 0xf0))(lVar3);
  fVar6 = *(float *)(lVar2 + 4);
  lVar3 = (**(code **)(*(long *)(param_2 + 0x180) + 0xf0))(lVar3);
  fVar7 = *(float *)(lVar3 + 8);
  *param_1 = (int)(long)(fVar5 * 11930465.0);
  param_1[1] = (int)(long)(fVar6 * 11930465.0);
  param_1[2] = (int)(long)(fVar7 * 11930465.0);
  puVar4 = (undefined4 *)(**(code **)(*(long *)(param_2 + 0xc0) + 0xf0))();
  lVar3 = param_2 + 0x1b8;
  param_1[3] = *puVar4;
  puVar4 = (undefined4 *)(**(code **)(*(long *)(param_2 + 0x1b8) + 0xf0))(lVar3);
  uVar9 = *puVar4;
  lVar2 = (**(code **)(*(long *)(param_2 + 0x1b8) + 0xf0))(lVar3);
  uVar10 = *(undefined4 *)(lVar2 + 4);
  lVar3 = (**(code **)(*(long *)(param_2 + 0x1b8) + 0xf0))(lVar3);
  uVar8 = *(undefined4 *)(lVar3 + 8);
  param_1[4] = uVar9;
  param_1[5] = uVar10;
  param_1[6] = uVar8;
  puVar4 = (undefined4 *)(**(code **)(*(long *)(param_2 + 0xf0) + 0xf0))();
  param_1[7] = *puVar4;
  puVar4 = (undefined4 *)(**(code **)(*(long *)(param_2 + 0x90) + 0xf0))((long *)(param_2 + 0x90));
  param_1[8] = *puVar4;
  puVar4 = (undefined4 *)(**(code **)(*(long *)(param_2 + 0x2e8) + 0xf0))(param_2 + 0x2e8);
  param_1[9] = *puVar4;
  puVar4 = (undefined4 *)(**(code **)(*(long *)(param_2 + 0x318) + 0xf0))(param_2 + 0x318);
  param_1[10] = *puVar4;
  puVar4 = (undefined4 *)(**(code **)(*(long *)(param_2 + 0x348) + 0xf0))(param_2 + 0x348);
  param_1[0xb] = *puVar4;
  puVar4 = (undefined4 *)(**(code **)(*(long *)(param_2 + 0x410) + 0xf0))(param_2 + 0x410);
  param_1[0xc] = *puVar4;
  puVar4 = (undefined4 *)(**(code **)(*(long *)(param_2 + 0x440) + 0xf0))(param_2 + 0x440);
  param_1[0xd] = *puVar4;
  puVar4 = (undefined4 *)(**(code **)(*(long *)(param_2 + 0x4d0) + 0xf0))(param_2 + 0x4d0);
  param_1[0xe] = *puVar4;
  puVar4 = (undefined4 *)(**(code **)(*(long *)(param_2 + 0x500) + 0xf0))(param_2 + 0x500);
  param_1[0xf] = *puVar4;
  return;
}

