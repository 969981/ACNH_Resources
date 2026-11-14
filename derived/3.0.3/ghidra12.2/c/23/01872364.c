
void FUN_01872364(float param_1,long *param_2)

{
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined *local_40;
  undefined *puStack_38;
  
  puVar1 = PTR_DAT_04bb27d0;
  lVar6 = param_2[0x7a];
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x2d8) + 0x28))(lVar6 + 0x2d8);
    plVar7 = *(long **)puVar1;
    uVar4 = FUN_01d3e29c(*plVar7 + 8);
    if (((uVar4 & 1) != 0) && (uVar4 = FUN_01d692e8(plVar7[2]), (uVar4 & 1) == 0))
    goto LAB_01872490;
  }
  bVar2 = FUN_01878c90(DAT_052a8608,param_2);
  *(byte *)((long)param_2 + 0x519) = bVar2 & 1;
  lVar6 = param_2[0x7a];
  if (lVar6 == 0) {
LAB_01872414:
    uVar3 = FUN_018732d0(param_2,&local_40);
    FUN_018775a0(0x41700000,param_2,&local_40,uVar3 & 1);
    FUN_01815e0c(param_2,(int)param_2[0x50],param_2 + 0x65);
  }
  else {
    (**(code **)(*(long *)(lVar6 + 0x2d8) + 0x28))(lVar6 + 0x2d8);
    plVar7 = *(long **)puVar1;
    uVar4 = FUN_01d3e29c(*plVar7 + 8);
    if (((uVar4 & 1) == 0) || (uVar4 = FUN_01d692e8(plVar7[2]), (uVar4 & 1) != 0))
    goto LAB_01872414;
  }
  *(undefined4 *)(param_2 + 0x98) = 0;
  *(undefined4 *)(param_2 + 0x9c) = 0x3c;
  *(undefined1 *)((long)param_2 + 0x4e4) = 0;
  param_2[0x9b] = 0;
  uVar3 = (uint)(param_1 * 30.0);
  *(undefined1 *)((long)param_2 + 0x514) = 0;
  param_2[0xa1] = 0;
  *(byte *)((long)param_2 + 0x4cc) = (byte)(uVar3 >> 0x1f);
  *(uint *)((long)param_2 + 0x4c4) = uVar3 & (int)uVar3 >> 0x1f;
  *(uint *)(param_2 + 0x99) = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
  *(undefined4 *)(param_2 + 0xa2) = 0x78;
LAB_01872490:
  local_40 = PTR_DAT_04bb2020 + 0x10;
  puStack_38 = &DAT_0407c690;
  if ((param_2[9] != 0) && (lVar6 = *(long *)(param_2[9] + 0x60), lVar6 != 0)) {
    FUN_0073d870(lVar6,&local_40,10,0,0);
  }
  if (*(long *)(*(long *)(param_2[0x7a] + 0x60) + 0x1138) != 0) {
    FUN_03850760(0x3f800000);
  }
  uVar8 = (**(code **)(*param_2 + 0x2c0))(param_2);
  *(undefined4 *)(param_2 + 0x61) = uVar8;
  *(undefined4 *)(param_2 + 99) = 0;
  puVar5 = (undefined4 *)(**(code **)(*(long *)(param_2[0x8c] + 0x30) + 0xf0))();
  uVar8 = *puVar5;
  *(undefined4 *)(param_2 + 0x96) = 0;
  *(undefined4 *)((long)param_2 + 0x40c) = uVar8;
  if ((param_2[0x7a] != 0) && (lVar6 = *(long *)(param_2[0x7a] + 0x90), lVar6 != 0)) {
    *(uint *)(lVar6 + 0x178) = *(uint *)(lVar6 + 0x178) | 1;
  }
  *(byte *)(param_2 + 0x7c) = *(byte *)(param_2 + 0x7c) & 0xfd;
  FUN_01815e0c(param_2,0,param_2 + 0x65);
  return;
}

