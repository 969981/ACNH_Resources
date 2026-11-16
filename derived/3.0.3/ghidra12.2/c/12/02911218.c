
/* WARNING: Removing unreachable block (ram,0x02911368) */
/* WARNING: Removing unreachable block (ram,0x0291125c) */
/* WARNING: Removing unreachable block (ram,0x029112f8) */
/* WARNING: Removing unreachable block (ram,0x029113d8) */

undefined8 FUN_02911218(undefined4 *param_1,long *param_2)

{
  ulong uVar1;
  undefined8 local_40;
  long lStack_38;
  undefined4 local_18;
  char local_14;
  
  local_40._0_4_ = 0xd;
  (**(code **)(DAT_055cc2e8 + 0x18))(&DAT_055cc2e8);
  local_40 = (ulong)local_40._5_3_ << 0x28;
  uVar1 = FUN_03ea9450(param_2,&local_40,DAT_055cc2f0);
  if ((uVar1 & 1) != 0) {
    if (local_40._4_1_ - 0xc0 < 2) {
      lStack_38 = *param_2 + (local_40 & 0xffffffff);
      local_40 = *param_2;
    }
    else {
      if (local_40._4_1_ != 0xff) {
        return 0;
      }
      lStack_38 = 0;
      local_40 = *param_2;
    }
    if (local_40 != 0) {
      local_18 = 0x14;
      (**(code **)(DAT_055cc358 + 0x18))(&DAT_055cc358);
      local_18 = 0;
      local_14 = '\0';
      uVar1 = FUN_03ea9450(&local_40,&local_18,DAT_055cc360);
      if (((uVar1 & 1) != 0) && (local_14 == -0x2e)) {
        *param_1 = local_18;
        local_18 = 0x15;
        (**(code **)(DAT_055cc368 + 0x18))(&DAT_055cc368);
        local_18 = 0;
        local_14 = '\0';
        uVar1 = FUN_03ea9450(&local_40,&local_18,DAT_055cc370);
        if (((uVar1 & 1) != 0) && (local_14 == -0x2e)) {
          param_1[1] = local_18;
          local_18 = 0x16;
          (**(code **)(DAT_055cc378 + 0x18))(&DAT_055cc378);
          local_18 = 0;
          local_14 = '\0';
          uVar1 = FUN_03ea9450(&local_40,&local_18,DAT_055cc380);
          if (((uVar1 & 1) != 0) && (local_14 == -0x2e)) {
            param_1[2] = local_18;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

