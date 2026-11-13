
uint FUN_0125f9fc(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined *local_70;
  char *pcStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined *local_48;
  char *pcStack_40;
  undefined8 local_38;
  undefined8 local_28;
  
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != 0x6622bd46) {
    return 0;
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_40 = "HotelConstruction";
  local_48 = puVar1;
  uVar3 = FUN_0273f0a0(&local_48);
  if ((uVar3 & 1) == 0) {
    pcStack_68 = "HotelBuilt";
    local_70 = puVar1;
    uVar3 = FUN_0273f0a0(&local_70);
    if ((uVar3 & 1) == 0) {
      uVar2 = 0;
      goto LAB_0125fafc;
    }
  }
  local_38 = 0;
  local_28 = 0;
  local_60 = 0;
  local_50 = 0;
  uVar2 = FUN_0125f884(&local_48,&local_70);
  if ((uVar2 & 1) != 0) {
    if ((int)local_60 <= (int)local_38) {
      local_38._0_4_ = (int)local_60;
    }
    if (local_60._4_4_ <= local_38._4_4_) {
      local_38._4_4_ = local_60._4_4_;
    }
    if ((int)local_28 <= (int)local_60) {
      local_28._0_4_ = (int)local_60;
    }
    if (local_28._4_4_ <= local_60._4_4_) {
      local_28._4_4_ = local_60._4_4_;
    }
    if ((int)local_50 <= (int)local_38) {
      local_38._0_4_ = (int)local_50;
    }
    if (local_50._4_4_ <= local_38._4_4_) {
      local_38._4_4_ = local_50._4_4_;
    }
    if ((int)local_28 <= (int)local_50) {
      local_28._0_4_ = (int)local_50;
    }
    if (local_28._4_4_ <= local_50._4_4_) {
      local_28._4_4_ = local_50._4_4_;
    }
    *(int *)(param_1 + 0x20) = (int)local_28;
    *(int *)(param_1 + 0x24) = local_28._4_4_ + 1;
    if (local_28._4_4_ + 1 <= local_38._4_4_) {
      local_38._4_4_ = local_28._4_4_ + 1;
    }
    *(int *)(param_1 + 0x10) = (int)local_38;
    *(int *)(param_1 + 0x14) = local_38._4_4_;
  }
LAB_0125fafc:
  return uVar2 & 1;
}

