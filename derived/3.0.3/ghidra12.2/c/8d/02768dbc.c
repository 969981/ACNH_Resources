
void FUN_02768dbc(long param_1,long param_2,undefined8 param_3)

{
  undefined **local_100;
  long local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  long lStack_d0;
  undefined **local_c8;
  undefined **local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long lStack_98;
  undefined4 local_90 [2];
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_1 != 0) {
    local_70 = 0;
    uStack_68 = 0xe9281086;
    local_90[0] = 3;
    local_88 = &local_80;
    local_80 = 0x68cb8460;
    uStack_78 = DAT_0417b838;
    local_60 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_100 = (undefined **)0x0;
    local_c8 = &PTR_LAB_04a91548;
    FUN_0272d760(param_1 + 8,&local_100,local_90);
    if (((local_100 != (undefined **)0x0) && (*(int *)((long)local_100 + 0x2c) == 1)) &&
       (lStack_98 = *(long *)(param_1 + 0x30), lStack_98 != 0)) {
      local_c0 = local_100;
      uStack_b8 = local_f8;
      local_b0 = uStack_f0;
      uStack_a8 = local_e8;
      local_a0 = uStack_e0;
      local_40 = 0;
      uStack_38 = 0;
      local_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_100 = &PTR_LAB_04a91510;
      FUN_0272d760(param_2 + 8,&local_58,local_90);
      if (((local_58 != 0) && (*(int *)(local_58 + 0x2c) == 1)) &&
         (lStack_d0 = *(long *)(param_2 + 0x30), lStack_d0 != 0)) {
        local_f8 = local_58;
        uStack_f0 = local_50;
        local_e8 = uStack_48;
        uStack_e0 = local_40;
        local_d8 = uStack_38;
        FUN_02768f00(&local_c8,&local_100,param_3);
      }
    }
  }
  return;
}

