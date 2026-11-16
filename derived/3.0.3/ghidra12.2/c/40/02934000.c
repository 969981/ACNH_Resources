
void FUN_02934000(byte param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  undefined8 local_48;
  undefined *puStack_40;
  undefined8 local_38;
  undefined *local_30;
  undefined8 local_28;
  byte local_4 [4];
  
  lVar6 = *(long *)PTR_DAT_04bb39b0;
  if (lVar6 == 0) {
    local_4[0] = *PTR_DAT_04bb32e0;
joined_r0x02934084:
    if (local_4[0] < 8) goto LAB_029340f4;
  }
  else {
    pbVar5 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar5 = (byte *)(lVar6 + 0x158);
    }
    local_4[0] = *pbVar5;
    if (local_4[0] < 8) goto LAB_029340f4;
    if ((*(int *)(lVar6 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
      local_4[0] = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
      goto joined_r0x02934084;
    }
  }
  if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
    lVar6 = **(long **)PTR_DAT_04bb27d0;
    bVar2 = *(byte *)(lVar6 + 0x473);
    pbVar5 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar6 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar5 = (byte *)(lVar6 + 0x471);
      }
    }
    local_4[0] = *pbVar5;
    if (local_4[0] < 8) goto LAB_029340f4;
  }
  local_4[0] = *PTR_DAT_04bb5038;
  if (7 < local_4[0]) {
    return;
  }
LAB_029340f4:
  iVar3 = FUN_02582fe0(local_4);
  if (iVar3 != -1) {
    local_48 = (undefined *)((ulong)local_48._4_4_ << 0x20);
    uVar4 = FUN_02b5e950(&local_48,iVar3);
    if ((uVar4 & 1) != 0) {
      local_38 = 0;
      uVar4 = (ulong)local_48 & 0xffffffff;
      local_48 = PTR_DAT_04bbc1a0 + 0x10;
      puStack_40 = PTR_DAT_04bb2010 + 0x10;
      local_28 = 0;
      local_30 = puStack_40;
      FUN_02b62010(&local_48,uVar4);
      if (local_28._4_4_ + 1 != local_38._4_4_) {
        lVar6 = *(long *)PTR_DAT_04bb4848;
        *(byte *)(lVar6 + 0x900) = param_1 & 1;
        *(int *)(lVar6 + 0x8fc) = local_28._4_4_;
        *(undefined4 *)(lVar6 + 0x8e8) = (undefined4)local_38;
        *(int *)(lVar6 + 0x8ec) = local_38._4_4_;
        *(undefined1 *)(lVar6 + 0x902) = 1;
        *(undefined4 *)(lVar6 + 0x8f8) = (undefined4)local_28;
      }
    }
  }
  return;
}

