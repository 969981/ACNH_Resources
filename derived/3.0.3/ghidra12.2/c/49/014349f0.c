
undefined8 FUN_014349f0(long param_1)

{
  uint uVar1;
  undefined *local_38;
  undefined *puStack_30;
  undefined8 local_28;
  undefined *puStack_20;
  undefined8 local_18;
  
  local_18 = 0;
  local_38 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_30 = PTR_DAT_04bb2010 + 0x10;
  local_28 = 0;
  puStack_20 = puStack_30;
  FUN_01470a84(*(undefined8 *)(param_1 + 0x2e8),&local_38);
  if (local_18._4_4_ + 1U != local_28._4_4_) {
    uVar1 = (uint)local_28;
    do {
      if (((local_28._4_4_ < 0x100) && (uVar1 < 0x120)) &&
         ((*(uint *)(PTR_DAT_04bbcbf0 + (ulong)(uVar1 + local_28._4_4_ * 0x120 >> 5) * 4 + 8) >>
           (ulong)(uVar1 & 0x1f) & 1) != 0)) {
        return 1;
      }
      if ((int)uVar1 < (int)local_18) {
        uVar1 = uVar1 + 1;
      }
      else {
        local_28._4_4_ = local_28._4_4_ + 1;
        uVar1 = (uint)local_28;
      }
    } while (((uint)local_28 != uVar1) || (local_18._4_4_ + 1U != local_28._4_4_));
  }
  return 0;
}

