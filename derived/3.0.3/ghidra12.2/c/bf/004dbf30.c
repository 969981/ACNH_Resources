
undefined1  [16] FUN_004dbf30(long param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auVar7 [16];
  long local_80;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulong local_48;
  
  FUN_004dad30(&local_80);
  if (local_80 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = local_78;
    goto joined_r0x004dbff4;
  }
  lVar4 = *(long *)(param_1 + 8);
  uVar2 = FUN_00428440(lVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  if ((uVar2 & 0x1f) != 8) {
    lVar4 = 0;
  }
  if (lVar4 == 0) {
    uVar2 = 0;
LAB_004dbfb0:
    plVar6 = (long *)(uVar2 & 0xfffffffffffffffe);
    bVar1 = true;
  }
  else {
    uVar2 = FUN_00428370(lVar4);
    if ((uVar2 & 1) == 0) goto LAB_004dbfb0;
    plVar6 = (long *)(uVar2 & 0xfffffffffffffffe);
    FUN_0043dd30(plVar6);
    bVar1 = false;
  }
  local_50 = 0;
  local_48 = 0;
  local_60 = 0;
  local_58 = 0;
  (**(code **)(*plVar6 + 0x50))(plVar6,uVar5,lVar4,&local_60);
  uVar5 = local_58;
  if ((local_48 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    FUN_0043dd50(local_48 & 0xfffffffffffffffe);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
  }
  if (!bVar1) {
    FUN_0043dd50(plVar6);
  }
joined_r0x004dbff4:
  if ((local_70 & 1) != 0) {
    FUN_0043dd50(local_70 & 0xfffffffffffffffe);
  }
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = uVar3;
  return auVar7;
}

