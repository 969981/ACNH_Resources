
void FUN_03400470(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined **local_68;
  undefined *local_60;
  undefined1 local_58;
  undefined *local_50 [4];
  int local_2c;
  undefined4 local_28;
  
  local_60 = PTR_s_diy_remake_04a85610;
  local_68 = &PTR_LAB_048f9770;
  FUN_025ffac8(local_50,&local_68,param_1);
  local_68 = (undefined **)(param_1 + 4);
  local_60 = (undefined *)(((ulong)local_60 >> 8 & 0xffffff) << 8);
  local_58 = 0;
  puVar1 = PTR_DAT_04bc3278 + 0x10;
  local_28 = 1;
  local_50[0] = puVar1;
  FUN_02596060(local_50,&local_68);
  local_50[0] = puVar1;
  iVar2 = FUN_025964a8(local_50);
  if (iVar2 != -1) {
    iVar2 = (**(code **)(local_50[0] + 0x20))(local_50);
    local_68 = (undefined **)CONCAT44(local_68._4_4_,iVar2);
    if (iVar2 < 0xd) goto LAB_03400538;
  }
  if (local_2c == 0) {
    local_2c = 1;
  }
LAB_03400538:
  FUN_02601530(local_50);
  return;
}

