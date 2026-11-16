
void FUN_027699b0(long param_1,long param_2)

{
  undefined **local_d8;
  long local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined *local_a0;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long lStack_70;
  undefined4 local_68 [2];
  undefined8 *local_60;
  undefined8 local_54;
  undefined4 local_4c;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_54 = 0x382789e1;
  local_68[0] = 1;
  local_60 = &local_54;
  local_a0 = PTR_DAT_04bc3850 + 0x10;
  local_4c = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 0;
  local_d8 = &PTR_LAB_04a91548;
  FUN_0272d760(param_1 + 8,&local_48,local_68);
  local_78 = uStack_28;
  uStack_80 = local_30;
  local_88 = uStack_38;
  uStack_90 = local_40;
  local_98 = local_48;
  if (((local_48 != 0) && (*(int *)(local_48 + 0x2c) == 1)) &&
     (lStack_70 = *(long *)(param_1 + 0x30), lStack_70 != 0)) {
    local_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_0272d760(param_2 + 8,&local_48,local_68);
    if (((local_48 != 0) && (*(int *)(local_48 + 0x2c) == 1)) &&
       (lStack_a8 = *(long *)(param_2 + 0x30), lStack_a8 != 0)) {
      local_d0 = local_48;
      uStack_c8 = local_40;
      local_c0 = uStack_38;
      uStack_b8 = local_30;
      local_b0 = uStack_28;
      FUN_027690d8(&local_a0,&local_d8,&local_48);
    }
  }
  return;
}

