
void FUN_01d53428(undefined8 param_1,byte *param_2)

{
  byte *pbVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  long lVar7;
  undefined *local_40;
  undefined4 local_38;
  undefined *local_30;
  undefined1 *puStack_28;
  undefined1 local_20;
  uint local_1c;
  undefined4 local_18;
  undefined1 local_14;
  
  bVar4 = *param_2;
  if ((long)(char)bVar4 == 0xffffffffffffffff) {
    FUN_01d53240(param_1,PTR_DAT_04bb50a8);
    return;
  }
  lVar7 = **(long **)PTR_DAT_04bb27d0;
  bVar5 = *(byte *)(lVar7 + 0x473);
  if ((long)(char)bVar5 == 0xffffffffffffffff) {
    bVar5 = *PTR_DAT_04bc1220;
    if (bVar5 == bVar4) {
      return;
    }
  }
  else {
    puVar6 = (uint *)(lVar7 + 0x48);
    puVar2 = puVar6 + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
    if (7 < bVar5) {
      puVar2 = puVar6;
    }
    uVar3 = *puVar2;
    pbVar1 = PTR_DAT_04bc1220;
    if ((uVar3 & 8) != 0) {
      pbVar1 = (byte *)(lVar7 + 0x473);
    }
    if (*pbVar1 == bVar4) {
      return;
    }
    pbVar1 = PTR_DAT_04bc1220;
    if ((uVar3 & 8) != 0) {
      pbVar1 = (byte *)(lVar7 + 0x472);
    }
    if (*pbVar1 == bVar4) {
      FUN_01d53240(param_1,PTR_DAT_04bb50b8);
      return;
    }
    if ((uVar3 >> 3 & 1) != 0) {
      puVar2 = puVar6 + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar2 = puVar6;
      }
      puVar6 = (uint *)PTR_DAT_04bb32e0;
      if ((*puVar2 & 1) != 0) {
        puVar6 = puVar2 + 0x1e;
      }
      goto LAB_01d53518;
    }
    bVar5 = *PTR_DAT_04bc1220;
  }
  puVar6 = (uint *)PTR_DAT_04bb5038;
  if (bVar5 != bVar4) {
    puVar6 = (uint *)PTR_DAT_04bb32e0;
  }
LAB_01d53518:
  local_1c = (uint)(byte)*puVar6;
  if ((byte)*puVar6 < 8) {
    local_20 = 1;
    local_38 = 0;
    local_18 = 1;
    local_14 = 1;
    local_40 = PTR_LAB_04bb5088;
    puStack_28 = &DAT_040867fa;
  }
  else {
    local_40 = *(undefined **)PTR_DAT_04bb50a8;
    local_38 = *(undefined4 *)(PTR_DAT_04bb50a8 + 8);
    puStack_28 = *(undefined1 **)(PTR_DAT_04bb50a8 + 0x18);
    local_20 = PTR_DAT_04bb50a8[0x20];
    local_1c = *(uint *)(PTR_DAT_04bb50a8 + 0x24);
    local_18 = *(undefined4 *)(PTR_DAT_04bb50a8 + 0x28);
    local_14 = PTR_DAT_04bb50a8[0x2c];
  }
  local_30 = PTR_DAT_04bb2020 + 0x10;
  FUN_01d53240(param_1,&local_40);
  return;
}

