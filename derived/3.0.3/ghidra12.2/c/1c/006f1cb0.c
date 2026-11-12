
undefined8 FUN_006f1cb0(long *param_1,long *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined **local_288;
  long local_280;
  long local_278;
  undefined **local_270;
  undefined1 auStack_268 [24];
  undefined8 local_250;
  undefined8 uStack_248;
  undefined **local_240;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined **local_210;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined **local_1e0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined **local_1b0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined **local_180;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined **local_150;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined **local_120;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined **local_f0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined **local_c0;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined *local_80;
  undefined8 local_78;
  long *local_70;
  long local_68;
  long local_60;
  undefined1 local_58;
  undefined4 local_54;
  
  memset(auStack_268,0,0x1c8);
  local_84 = 0;
  local_78 = 0;
  local_70 = (long *)0x0;
  local_68 = 0;
  local_58 = 1;
  local_80 = PTR_DAT_04bb2e08 + 0x10;
  local_60 = 0;
  local_54 = 0;
  local_240 = &PTR_FUN_048fc6e0;
  local_210 = &PTR_FUN_048fc6e0;
  local_1e0 = &PTR_FUN_048fc6e0;
  local_a0 = 0xffffffff;
  local_1b0 = &PTR_FUN_048fc6e0;
  local_180 = &PTR_FUN_048fc6e0;
  local_150 = &PTR_FUN_048fc6e0;
  local_120 = &PTR_FUN_048fc6e0;
  local_f0 = &PTR_FUN_048fc6e0;
  local_c0 = &PTR_FUN_048fc6e0;
  local_88 = 0;
  local_278 = 0;
  local_270 = &PTR_FUN_048fc6e0;
  local_250 = 0;
  uStack_248 = 0;
  local_220 = 0;
  uStack_218 = 0;
  local_1f0 = 0;
  uStack_1e8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_288 = &PTR_LAB_048fc470;
  local_280 = 0;
  lVar1 = (**(code **)(*param_2 + 0x18))(param_2);
  lVar2 = (**(code **)(*param_2 + 0x18))(param_2);
  if ((lVar2 != 0) && (uVar3 = (**(code **)(*param_2 + 0x20))(param_2), lVar1 != 0)) {
    local_278 = lVar2 + (uVar3 & 0xffffffff) * 2;
    local_a0 = 0;
    local_270 = &PTR_FUN_048fc6e0;
    local_280 = lVar1;
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  if (param_3 < 1) {
    if (param_3 != 0) {
      return 0;
    }
  }
  else {
    do {
      local_68 = 0;
      local_60 = 0;
      local_58 = 1;
      local_54 = 0;
      local_84 = 0;
      local_78 = 0;
      local_70 = (long *)0x0;
      FUN_006f1490(&local_288);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  if (param_1 == (long *)0x0) {
    local_68 = 0;
    local_60 = 0;
    local_58 = 1;
    local_54 = 0;
    local_78 = 0;
    local_70 = (long *)0x0;
  }
  else {
    (**(code **)(*param_1 + 0x38))(param_1);
    local_60 = 0;
    local_58 = 1;
    local_68 = 0;
    local_54 = 0;
    local_78 = 0;
    local_70 = param_1;
    local_68 = (**(code **)(*param_1 + 0x10))(param_1);
    local_60 = local_68;
    uVar3 = (**(code **)(*param_1 + 0x20))(param_1);
    local_60 = local_60 + (uVar3 & 0xffffffff) * 2 + -2;
    (**(code **)(*local_70 + 0x38))();
  }
  local_84 = 0;
  FUN_006f1490(&local_288);
  return 1;
}

