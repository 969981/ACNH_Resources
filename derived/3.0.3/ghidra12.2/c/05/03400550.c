
void FUN_03400550(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined **local_70;
  undefined *local_68;
  undefined1 local_60;
  undefined *local_58 [4];
  int local_34;
  undefined4 local_30;
  undefined4 local_24;
  
  local_24 = 1;
  local_68 = PTR_s_diy_remake_04a85610;
  local_70 = &PTR_LAB_048f9770;
  FUN_025ffac8(local_58,&local_70,param_1);
  local_70 = (undefined **)(param_1 + 4);
  local_68 = (undefined *)CONCAT71(local_68._1_7_,1);
  local_68 = (undefined *)((ulong)local_68 & 0xffffffff);
  local_60 = 0;
  puVar1 = PTR_DAT_04bc3278 + 0x10;
  local_30 = local_24;
  local_58[0] = puVar1;
  FUN_02596060(local_58,&local_70);
  local_58[0] = puVar1;
  iVar2 = FUN_025964a8(local_58);
  if (iVar2 != -1) {
    iVar2 = (**(code **)(local_58[0] + 0x20))(local_58);
    local_70 = (undefined **)CONCAT44(local_70._4_4_,iVar2);
    if (iVar2 < 0xd) goto LAB_03400618;
  }
  if (local_34 == 0) {
    local_34 = 1;
  }
LAB_03400618:
  FUN_02601530(local_58);
  return;
}

