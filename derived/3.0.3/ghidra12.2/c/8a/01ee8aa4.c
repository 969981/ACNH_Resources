
void FUN_01ee8aa4(long param_1)

{
  long lVar1;
  undefined2 local_108 [2];
  undefined8 local_104;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 local_94;
  undefined1 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  local_a0 = 0;
  local_8c = 0;
  local_f0 = 0xbf800000;
  uStack_e8 = 0;
  local_c0 = 0;
  uStack_b8 = 0xffffffff;
  local_38 = 0xffffffff;
  local_9c = 0xffffffffffffffff;
  local_94 = 0xffffffffffffffff;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_108[0] = 0;
  local_104 = 0xffffffffffffffff;
  local_fc = 0xffffffffffffffff;
  local_f4 = 0xffffffff;
  local_88 = 0xffffffffffffffff;
  uStack_80 = 0xffffffffbf800000;
  lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  local_e0 = 0xffffffffffffffff;
  uStack_d8 = 0xffffffff00000000;
  local_d0 = 0xffffffff00000000;
  uStack_c8 = 0xffffffffffffffff;
  local_b0 = 0xffffffff00000000;
  uStack_a8 = 0xffffffff00000000;
  if (lVar1 == 0) {
    local_9c._0_4_ = 0;
    local_9c._4_4_ = 0;
  }
  else {
    FUN_029a7b28(*(long *)PTR_DAT_04bb26a8 + 0x6d8,local_108,lVar1 + 0x278);
    local_9c._0_4_ = (int)local_9c + 1;
    local_9c._4_4_ = local_9c._4_4_ + 1;
  }
  *(int *)(param_1 + 0x787c) = (int)local_9c;
  *(int *)(param_1 + 0x7880) = local_9c._4_4_;
  return;
}

