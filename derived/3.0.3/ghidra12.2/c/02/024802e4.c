
void FUN_024802e4(byte *param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  byte bVar5;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  local_28 = 0xfffe;
  FUN_0277d4ac(&local_28);
  local_28 = *(undefined8 *)(param_2 + 0x20);
  local_34 = (uint)*(byte *)(param_2 + 0x2d);
  if (2 < local_34) {
    local_34 = 0;
  }
  if (local_34 == 2) {
    lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*param_1 * 0x740;
    if (7 < *param_1) {
      lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    if (*(short *)(param_2 + 1) == *(short *)PTR_DAT_04bb6298) {
      *(undefined4 *)(lVar1 + 0x24c) = 3;
      FUN_01393458(lVar1 + 0x2f0);
    }
    else {
      *(undefined4 *)(lVar1 + 0x24c) = 4;
    }
  }
  else if (local_34 == 1) {
    lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*param_1 * 0x740;
    if (7 < *param_1) {
      lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    if (*(short *)(param_2 + 1) == *(short *)PTR_DAT_04bb6298) {
      *(undefined4 *)(lVar1 + 0xc) = 3;
      FUN_01393458(lVar1 + 0xb0);
    }
    else {
      *(undefined4 *)(lVar1 + 0xc) = 4;
    }
  }
  FUN_02326130(param_1,PTR_DAT_04bb37e0,1);
  bVar2 = *param_1;
  bVar5 = bVar2;
  if (7 < bVar2) {
    bVar5 = 0xff;
  }
  local_34._0_2_ = CONCAT11(bVar5,(undefined1)local_34);
  if (((bVar2 < 8) && (uVar4 = FUN_02582d8c(param_1,1), uVar4 < 8)) &&
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')) {
    bVar3 = *(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0';
  }
  else {
    bVar3 = false;
  }
  local_34 = CONCAT31(local_34._1_3_,bVar3);
  local_30 = (undefined4)local_28;
  uStack_2c = local_28._4_4_;
  FUN_02308eb4(&local_34);
  return;
}

