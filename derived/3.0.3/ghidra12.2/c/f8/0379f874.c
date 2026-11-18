
float FUN_0379f874(undefined8 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char local_90 [4];
  undefined8 local_8c;
  float local_84;
  undefined *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  float local_40;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  
  local_90[0] = '\0';
  local_8c = 0;
  uStack_68 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
  local_60 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
  uStack_58 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
  local_50 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
  uStack_78 = *(undefined8 *)PTR_DAT_04bb2f80;
  local_70 = *(undefined8 *)(PTR_DAT_04bb2f80 + 8);
  local_84 = 0.0;
  local_48 = 0;
  local_34 = 0;
  local_3c = 0;
  local_80 = PTR_DAT_04bb41a0 + 0x10;
  local_40 = 10.0;
  local_2c = 0x3f800000;
  FUN_0384ba58(DAT_05ae2a30,local_90);
  if (local_90[0] != '\0') {
    local_48._0_4_ = *param_2 - (float)local_48;
    local_48._4_4_ = param_2[1] - local_48._4_4_;
    local_40 = param_2[2] - local_40;
    fVar4 = SQRT(local_48._4_4_ * local_48._4_4_ + (float)local_48 * (float)local_48 +
                 local_40 * local_40);
    fVar1 = local_40;
    fVar2 = (float)local_48;
    fVar3 = local_48._4_4_;
    if (0.0 < fVar4) {
      fVar4 = 1.0 / fVar4;
      fVar2 = (float)local_48 * fVar4;
      fVar3 = local_48._4_4_ * fVar4;
      fVar1 = local_40 * fVar4;
    }
    fVar1 = local_8c._4_4_ * fVar3 + (float)local_8c * fVar2 + local_84 * fVar1;
    if (0.0 < fVar1) {
      local_48._0_4_ = (float)local_48 - *param_2;
      local_48._4_4_ = local_48._4_4_ - param_2[1];
      local_40 = local_40 - param_2[2];
      return SQRT(local_48._4_4_ * local_48._4_4_ + (float)local_48 * (float)local_48 +
                  local_40 * local_40) * (1.0 - fVar1);
    }
  }
  return 3.4028235e+38;
}

