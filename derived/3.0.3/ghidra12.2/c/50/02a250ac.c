
undefined8 FUN_02a250ac(long param_1)

{
  uint uVar1;
  long local_9860;
  undefined8 local_9858;
  long lStack_9850;
  undefined4 local_9848;
  undefined2 local_9844;
  undefined1 local_9842;
  undefined1 *local_9840;
  undefined1 local_9838;
  undefined8 local_9830;
  undefined4 local_9828;
  undefined4 uStack_9824;
  undefined4 local_9820;
  undefined4 uStack_981c;
  undefined1 local_9818 [8];
  undefined1 auStack_9810 [38880];
  
  uVar1 = *(uint *)(param_1 + 0xb3894);
  FUN_02a2fca0(auStack_9810);
  if (*(int *)(param_1 + 0x7c0) == 0) {
    if (*(long *)(*(long *)(DAT_055f6860 + 0xb4510) + 0x50) == 0) {
      local_9858 = (ulong)local_9858._4_4_ << 0x20;
      local_9860 = 0;
    }
    else {
      local_9860 = *(long *)(DAT_055f6860 + 0xb44c8);
      local_9858 = CONCAT44(local_9858._4_4_,*(undefined4 *)(DAT_055f6860 + 0xb44d0));
    }
    local_9818[0] = 1;
    FUN_0299a800(param_1 + 0x7c8,local_9818,&local_9860,&local_9860);
  }
  else {
    local_9818[0] = 0;
  }
  local_9858 = param_1 + 0xa7660;
  lStack_9850 = param_1 + 0xb3818;
  local_9844 = 0;
  local_9840 = local_9818;
  local_9848 = 0xffffffff;
  local_9828 = *(undefined4 *)(param_1 + 0x8a120);
  local_9820 = *(undefined4 *)(param_1 + 0x8a124);
  local_9860 = (ulong)(CONCAT61((int6)((ulong)local_9860 >> 0x10),((uVar1 ^ 0xffffffff) & 0x12) == 0
                               ) & 0xffffffffff00ff) << 8;
  uStack_9824 = *(undefined4 *)(param_1 + 0x8a128);
  uStack_981c = *(undefined4 *)(param_1 + 0x8a12c);
  local_9842 = 0;
  local_9838 = 0;
  local_9830 = 0;
  FUN_02a19170(param_1 + 0x8b928,&local_9860);
  return 1;
}

