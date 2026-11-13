
undefined1 FUN_01436db0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  undefined *local_50;
  undefined *puStack_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined4 local_24;
  
  puVar1 = PTR_DAT_04bbbc38;
  lVar2 = *(long *)(param_1 + 0x2e8);
  if (*(long *)(lVar2 + 0x70) == 0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *(int *)(*(long *)(lVar2 + 0x70) + 0x280);
  }
  if (iVar5 == 0) {
    local_24 = 0;
    if (*(int *)(lVar2 + 0x900) != 0) {
      return 0;
    }
    if ((*(uint *)(param_1 + 0x280) | 2) == 2) {
      local_40 = 0;
      local_50 = PTR_DAT_04bbc1a0 + 0x10;
      puStack_48 = PTR_DAT_04bb2010 + 0x10;
      local_30 = 0;
      local_38 = puStack_48;
      FUN_01470a84(lVar2,&local_50);
      if (local_30._4_4_ + 1U != local_40._4_4_) {
        uVar6 = (uint)local_40;
        do {
          if (((local_40._4_4_ < 0x100) && (uVar6 < 0x120)) &&
             ((*(uint *)(PTR_DAT_04bbcc10 + (ulong)(uVar6 + local_40._4_4_ * 0x120 >> 5) * 4 + 8) >>
               (ulong)(uVar6 & 0x1f) & 1) != 0)) {
            return 0;
          }
          if ((int)uVar6 < (int)local_30) {
            uVar6 = uVar6 + 1;
          }
          else {
            local_40._4_4_ = local_40._4_4_ + 1;
            uVar6 = (uint)local_40;
          }
        } while (((uint)local_40 != uVar6) || (local_30._4_4_ + 1U != local_40._4_4_));
      }
      return 1;
    }
    lVar4 = *(long *)PTR_DAT_04bbbc38;
    if ((lVar4 != 0) &&
       (iVar5 = (int)*(undefined8 *)(lVar4 + 0xc),
       local_50 = (undefined *)CONCAT44(local_50._4_4_,iVar5), iVar5 != 0)) {
      uVar3 = FUN_014e4af8(lVar4);
      if (((uVar3 & 1) == 0) &&
         ((*(long *)puVar1 == 0 || (uVar3 = FUN_014e4c84(), (uVar3 & 1) == 0)))) {
        *(undefined1 *)(param_1 + 0x35d) = 0;
        return 0;
      }
      if (*(char *)(param_1 + 0x35d) == '\0') {
        *(undefined1 *)(param_1 + 0x35d) = 1;
        return 0;
      }
      lVar2 = *(long *)(param_1 + 0x2e8);
    }
    local_40 = 0;
    local_50 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_48 = PTR_DAT_04bb2010 + 0x10;
    local_30 = 0;
    local_38 = puStack_48;
    FUN_01470a84(lVar2,&local_50);
    if (local_30._4_4_ + 1U != local_40._4_4_) {
      uVar6 = (uint)local_40;
      do {
        if (((local_40._4_4_ < 0x100) && (uVar6 < 0x120)) &&
           ((*(uint *)(PTR_DAT_04bbcc10 + (ulong)(uVar6 + local_40._4_4_ * 0x120 >> 5) * 4 + 8) >>
             (ulong)(uVar6 & 0x1f) & 1) != 0)) {
          return 1;
        }
        if ((int)uVar6 < (int)local_30) {
          uVar6 = uVar6 + 1;
        }
        else {
          local_40._4_4_ = local_40._4_4_ + 1;
          uVar6 = (uint)local_40;
        }
      } while (((uint)local_40 != uVar6) || (local_30._4_4_ + 1U != local_40._4_4_));
    }
  }
  return 0;
}

