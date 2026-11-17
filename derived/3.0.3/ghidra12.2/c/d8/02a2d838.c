
void FUN_02a2d838(long param_1,undefined1 *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  undefined *puVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined1 local_8c [4];
  undefined1 local_88 [4];
  undefined1 local_84 [4];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_28;
  
  local_84[0] = *param_2;
  FUN_029fc91c(param_1 + 0x11e588,local_84);
  local_88[0] = *param_2;
  FUN_029abb30(param_1 + 0x6d8,local_88);
  puVar3 = PTR_DAT_04bb27d0;
  plVar5 = *(long **)PTR_DAT_04bb27d0;
  lVar6 = *plVar5;
  bVar7 = *(byte *)(lVar6 + 0x473);
  if ((long)(char)bVar7 == 0xffffffffffffffff) {
LAB_02a2d8d8:
    local_28 = *(undefined8 *)(param_1 + 0x11fa50);
    uVar2 = local_80 >> 0x30;
    local_80._0_6_ = CONCAT15(*param_2,0x400000000);
    local_80 = CONCAT26((short)uVar2,(undefined6)local_80) & 0xff00ffffffffffff;
    if (-1 < *(int *)(param_1 + 0x11fa28)) {
      FUN_01db1df0(*plVar5 + 0x480,*(int *)(param_1 + 0x11fa28),&local_80,&local_28,8,0);
      plVar5 = *(long **)puVar3;
    }
    lVar6 = *plVar5;
    bVar7 = *(byte *)(lVar6 + 0x473);
    if (bVar7 != 0xff) goto LAB_02a2d92c;
    bVar4 = true;
    bVar7 = 0xff;
  }
  else {
    pbVar1 = (byte *)(lVar6 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x80;
    if (7 < bVar7) {
      pbVar1 = (byte *)(lVar6 + 0x48);
    }
    if (((*pbVar1 >> 3 & 1) == 0) || (bVar7 == *(byte *)(lVar6 + 0x472))) goto LAB_02a2d8d8;
LAB_02a2d92c:
    pbVar1 = (byte *)(lVar6 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x80;
    if (7 < bVar7) {
      pbVar1 = (byte *)(lVar6 + 0x48);
    }
    if ((*pbVar1 >> 3 & 1) == 0) {
      bVar4 = true;
    }
    else {
      bVar4 = bVar7 == *(byte *)(lVar6 + 0x472);
    }
  }
  if ((bVar4) && (*(int *)(param_1 + 0x120ec0) != 0)) {
    *(undefined1 *)(param_1 + 0x120f7d) = 1;
    lVar6 = *plVar5;
    bVar7 = *(byte *)(lVar6 + 0x473);
  }
  uVar8 = *param_2;
  if (bVar7 == 0xff) {
LAB_02a2d9d4:
    uVar2 = local_80 >> 0x30;
    local_80._0_6_ = CONCAT15(uVar8,0x400000000);
    local_80 = CONCAT26((short)uVar2,(undefined6)local_80) & 0xff00ffffffffffff;
    if (-1 < *(int *)(param_1 + 0x1210d0)) {
      FUN_01db1df0(*plVar5 + 0x480,*(int *)(param_1 + 0x1210d0),&local_80,param_1 + 0x120f9c,0x10,0)
      ;
      uVar8 = *param_2;
      plVar5 = *(long **)puVar3;
    }
    lVar6 = *plVar5;
    bVar7 = *(byte *)(lVar6 + 0x473);
    if (bVar7 != 0xff) goto LAB_02a2da28;
LAB_02a2da58:
    uVar2 = local_80 >> 0x30;
    local_80._0_6_ = CONCAT15(uVar8,0x400000000);
    local_80 = CONCAT26((short)uVar2,(undefined6)local_80) & 0xff00ffffffffffff;
    if (-1 < *(int *)(param_1 + 0x121170)) {
      FUN_01db1df0(*plVar5 + 0x480,*(int *)(param_1 + 0x121170),&local_80,param_1 + 0x121148,0x10,0)
      ;
      uVar8 = *param_2;
      plVar5 = *(long **)puVar3;
    }
    lVar6 = *plVar5;
    bVar7 = *(byte *)(lVar6 + 0x473);
    if (bVar7 != 0xff) goto LAB_02a2dac0;
  }
  else {
    pbVar1 = (byte *)(lVar6 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x80;
    if (7 < bVar7) {
      pbVar1 = (byte *)(lVar6 + 0x48);
    }
    if (((*pbVar1 >> 3 & 1) == 0) || (bVar7 == *(byte *)(lVar6 + 0x472))) goto LAB_02a2d9d4;
LAB_02a2da28:
    pbVar1 = (byte *)(lVar6 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x80;
    if (7 < bVar7) {
      pbVar1 = (byte *)(lVar6 + 0x48);
    }
    if (((*pbVar1 >> 3 & 1) == 0) || (bVar7 == *(byte *)(lVar6 + 0x472))) goto LAB_02a2da58;
LAB_02a2dac0:
    pbVar1 = (byte *)(lVar6 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x80;
    if (7 < bVar7) {
      pbVar1 = (byte *)(lVar6 + 0x48);
    }
    if (((*pbVar1 >> 3 & 1) != 0) && (bVar7 != *(byte *)(lVar6 + 0x472))) goto LAB_02a2db8c;
  }
  FUN_02a02420(param_1 + 0x1211c8);
  local_60 = *(undefined8 *)(param_1 + 0x122a20);
  uStack_58 = *(undefined8 *)(param_1 + 0x122a28);
  local_50 = *(undefined8 *)(param_1 + 0x122a30);
  uStack_78 = *(undefined8 *)(param_1 + 0x122a08);
  local_48 = *(undefined4 *)(param_1 + 0x122a38);
  local_80 = *(ulong *)(param_1 + 0x122a00);
  local_70 = *(undefined8 *)(param_1 + 0x122a10);
  uStack_68 = *(undefined8 *)(param_1 + 0x122a18);
  local_28 = CONCAT35(CONCAT21((short)((ulong)local_28 >> 0x30),uVar8) & 0xff00ff,0x400000000);
  if (-1 < *(int *)(param_1 + 0x122958)) {
    FUN_01db1df0(**(long **)puVar3 + 0x480,*(int *)(param_1 + 0x122958),&local_28,&local_80,0x3c,0);
  }
  uVar8 = *param_2;
LAB_02a2db8c:
  local_8c[0] = uVar8;
  FUN_029f1548(*(undefined8 *)(param_1 + 0x6c8),local_8c);
  return;
}

