
void FUN_03400370(long param_1)

{
  undefined *puVar1;
  short *psVar2;
  int iVar3;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined *local_68;
  undefined *local_60;
  undefined1 local_58;
  undefined *local_50 [4];
  int local_2c;
  undefined4 local_28;
  
  local_70 = 0;
  local_60 = PTR_s_diy_craft_04a85608;
  local_68 = PTR_DAT_04bb2020 + 0x10;
  FUN_025ffac8(local_50,&local_68,param_1);
  puVar1 = PTR_DAT_04bc3278 + 0x10;
  local_28 = local_70;
  psVar2 = (short *)PTR_DAT_04bb37e0;
  if (*(short *)(param_1 + 0xc) != -2) {
    psVar2 = (short *)(param_1 + 0xc);
  }
  local_70 = *(undefined4 *)psVar2;
  uStack_6c = *(undefined4 *)(psVar2 + 2);
  local_60 = (undefined *)
             (CONCAT44(*(undefined4 *)(param_1 + 0xd0),(int)local_60) & 0xffffffffffffff00);
  local_58 = *(undefined1 *)(param_1 + 0xd4);
  local_68 = (undefined *)&local_70;
  local_50[0] = puVar1;
  FUN_02596060(local_50,&local_68);
  local_50[0] = puVar1;
  iVar3 = FUN_025964a8(local_50);
  if (iVar3 != -1) {
    iVar3 = (**(code **)(local_50[0] + 0x20))(local_50);
    local_68 = (undefined *)CONCAT44(local_68._4_4_,iVar3);
    if (iVar3 < 0xd) goto LAB_03400458;
  }
  if (local_2c == 0) {
    local_2c = 1;
  }
LAB_03400458:
  FUN_02601530(local_50);
  return;
}

