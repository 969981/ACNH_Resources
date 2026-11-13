
/* WARNING: Removing unreachable block (ram,0x01438ff8) */

undefined8 FUN_01438e80(long param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined8 local_48;
  undefined *puStack_40;
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 local_28;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x2e8) + 0x70);
  if (lVar3 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = *(int *)(lVar3 + 0x280);
  }
  if (iVar2 != 0) {
    return 0;
  }
  iVar2 = *(int *)(*(long *)(param_1 + 0x2e8) + 0x900);
  local_48 = (undefined *)CONCAT44(local_48._4_4_,iVar2);
  if (iVar2 != 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0x280) | 2) == 2) {
    uVar1 = FUN_014385c0(param_1);
    if ((uVar1 & 1) != 0) {
      return 0;
    }
    local_28 = 0;
    local_48 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_40 = PTR_DAT_04bb2010 + 0x10;
    local_38 = 0;
    puStack_30 = puStack_40;
    FUN_01470a84(*(undefined8 *)(param_1 + 0x2e8),&local_48);
    if (local_28._4_4_ + 1U != local_38._4_4_) {
      uVar4 = (uint)local_38;
      do {
        if (((local_38._4_4_ < 0x100) && (uVar4 < 0x120)) &&
           ((*(uint *)(PTR_DAT_04bbcc10 + (ulong)(uVar4 + local_38._4_4_ * 0x120 >> 5) * 4 + 8) >>
             (ulong)(uVar4 & 0x1f) & 1) != 0)) {
          return 0;
        }
        if ((int)uVar4 < (int)local_28) {
          uVar4 = uVar4 + 1;
        }
        else {
          local_38._4_4_ = local_38._4_4_ + 1;
          uVar4 = (uint)local_38;
        }
      } while (((uint)local_38 != uVar4) || (local_28._4_4_ + 1U != local_38._4_4_));
    }
  }
  else {
    if (*(long *)PTR_DAT_04bbbc38 == 0) {
      local_48 = (undefined *)((ulong)local_48._4_4_ << 0x20);
    }
    else {
      iVar2 = (int)*(undefined8 *)(*(long *)PTR_DAT_04bbbc38 + 0xc);
      local_48 = (undefined *)CONCAT44(local_48._4_4_,iVar2);
      if (iVar2 != 0) {
        uVar1 = FUN_014e4af8();
        if ((uVar1 & 1) == 0) {
          *(undefined1 *)(param_1 + 0x361) = 0;
          return 0;
        }
        if (*(char *)(param_1 + 0x361) == '\0') {
          *(char *)(param_1 + 0x361) = '\x01';
          return 0;
        }
      }
    }
    uVar1 = FUN_014385c0(param_1);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  return 1;
}

