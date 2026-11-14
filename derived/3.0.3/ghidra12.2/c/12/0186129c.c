
void FUN_0186129c(undefined1 param_1 [16],float param_2,long *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined **local_30;
  undefined *puStack_28;
  
  bVar1 = FUN_01878c90();
  *(byte *)((long)param_3 + 0x4b9) = bVar1 & 1;
  (**(code **)(*param_3 + 0x2e8))(param_3);
  uVar5 = (**(code **)(*param_3 + 0x2c8))(param_3);
  *(undefined4 *)(param_3 + 0x61) = uVar5;
  *(undefined4 *)(param_3 + 99) = 0;
  *(undefined4 *)((long)param_3 + 0x40c) = 0;
  puVar2 = (undefined4 *)(**(code **)(*(long *)(param_3[0x8c] + 0x30) + 0xf0))();
  uVar5 = *puVar2;
  *(undefined4 *)(param_3 + 0x9a) = 0x78;
  *(undefined4 *)(param_3 + 0x9f) = 0;
  *(undefined1 *)((long)param_3 + 0x4d4) = 0;
  uVar4 = (uint)(param_2 * 30.0);
  *(byte *)((long)param_3 + 0x504) = (byte)(uVar4 >> 0x1f);
  *(uint *)(param_3 + 0xa0) = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
  *(uint *)((long)param_3 + 0x4fc) = uVar4 & (int)uVar4 >> 0x1f;
  param_3[0x99] = 0;
  *(undefined4 *)(param_3 + 0x94) = uVar5;
  local_30 = &PTR_LAB_048f9770;
  puStack_28 = &DAT_0407c690;
  if ((param_3[9] != 0) && (lVar3 = *(long *)(param_3[9] + 0x60), lVar3 != 0)) {
    FUN_0073d870(lVar3,&local_30,10,0,0);
  }
  if (*(long *)(*(long *)(param_3[0x7a] + 0x60) + 0x1138) != 0) {
    FUN_03850760(0x3f800000);
  }
  return;
}

