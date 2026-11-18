
undefined8 FUN_03551530(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  float local_6c [3];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  byte local_38;
  undefined4 local_34;
  undefined4 local_18;
  int local_14;
  
  local_48 = 0;
  uStack_40 = 0;
  local_58 = PTR_DAT_04bb2010 + 0x10;
  local_60 = *(undefined4 *)PTR_DAT_04bb37e0;
  uStack_5c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_50 = 0;
  local_34 = 0;
  local_38 = *PTR_DAT_04bb32e0;
  if (7 < local_38) {
    local_38 = 0xff;
  }
  local_14 = FUN_014e5798(&local_60,param_1);
  uVar1 = 0;
  if (local_14 == 9) {
    uVar2 = FUN_022b5458(&local_60,&local_58);
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      local_18 = 6;
      local_6c[1] = 0.0;
      local_6c[0] = (float)(int)local_50 * 5.0 + 2.5;
      local_6c[2] = (float)local_50._4_4_ * 5.0 + 2.5;
      (**(code **)*param_2)(param_2,local_6c,param_1,&local_18);
      uVar1 = 1;
    }
  }
  return uVar1;
}

