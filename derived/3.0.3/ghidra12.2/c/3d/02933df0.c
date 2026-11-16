
void FUN_02933df0(undefined4 param_1,byte param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  undefined8 local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  byte local_34 [4];
  
  lVar8 = *(long *)PTR_DAT_04bb39b0;
  if (lVar8 == 0) {
    local_34[0] = *PTR_DAT_04bb32e0;
joined_r0x02933e7c:
    if (local_34[0] < 8) goto LAB_02933eec;
  }
  else {
    pbVar7 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar8 + 0x15c) != 0) {
      pbVar7 = (byte *)(lVar8 + 0x158);
    }
    local_34[0] = *pbVar7;
    if (local_34[0] < 8) goto LAB_02933eec;
    if ((*(int *)(lVar8 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
      local_34[0] = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
      goto joined_r0x02933e7c;
    }
  }
  if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
    lVar8 = **(long **)PTR_DAT_04bb27d0;
    bVar4 = *(byte *)(lVar8 + 0x473);
    pbVar7 = PTR_DAT_04bb5038;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar3 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar3 = (uint *)(lVar8 + 0x48);
      }
      if ((*puVar3 & 8) != 0) {
        pbVar7 = (byte *)(lVar8 + 0x471);
      }
    }
    local_34[0] = *pbVar7;
    if (local_34[0] < 8) goto LAB_02933eec;
  }
  local_34[0] = *PTR_DAT_04bb5038;
  if (7 < local_34[0]) {
    return;
  }
LAB_02933eec:
  iVar5 = FUN_02582fe0(local_34);
  if (iVar5 != -1) {
    local_60 = (undefined *)((ulong)local_60._4_4_ << 0x20);
    uVar6 = FUN_02b5e950(&local_60,iVar5);
    if ((uVar6 & 1) != 0) {
      uVar6 = (ulong)local_60 & 0xffffffff;
      local_50 = 0;
      puVar1 = PTR_DAT_04bbc1a0 + 0x10;
      puVar2 = PTR_DAT_04bb2010 + 0x10;
      local_40 = 0;
      local_60 = puVar1;
      puStack_58 = puVar2;
      local_48 = puVar2;
      FUN_02b62010(&local_60,uVar6);
      if (local_40._4_4_ + 1 != local_50._4_4_) {
        lVar8 = *(long *)PTR_DAT_04bb4848;
        *(int *)(lVar8 + 0x8fc) = local_40._4_4_;
        *(byte *)(lVar8 + 0x900) = param_2 & 1;
        *(undefined4 *)(lVar8 + 0x8e8) = (undefined4)local_50;
        *(int *)(lVar8 + 0x8ec) = local_50._4_4_;
        *(undefined4 *)(lVar8 + 0x8f8) = (undefined4)local_40;
        *(undefined1 *)(lVar8 + 0x902) = 1;
      }
      local_50 = 0;
      local_40 = 0;
      local_60 = puVar1;
      puStack_58 = puVar2;
      local_48 = puVar2;
      FUN_02b62250(&local_60,param_1);
      if (local_40._4_4_ + 1 != local_50._4_4_) {
        lVar8 = *(long *)PTR_DAT_04bb4848;
        *(int *)(lVar8 + 0x8fc) = local_40._4_4_;
        *(byte *)(lVar8 + 0x900) = param_2 & 1;
        *(undefined4 *)(lVar8 + 0x8e8) = (undefined4)local_50;
        *(int *)(lVar8 + 0x8ec) = local_50._4_4_;
        *(undefined4 *)(lVar8 + 0x8f8) = (undefined4)local_40;
        *(undefined1 *)(lVar8 + 0x902) = 1;
      }
    }
  }
  return;
}

