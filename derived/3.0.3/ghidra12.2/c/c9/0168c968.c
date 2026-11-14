
bool FUN_0168c968(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  byte local_48;
  undefined *local_40;
  undefined8 local_38;
  short local_18 [4];
  
  local_40 = PTR_DAT_04bb2010 + 0x10;
  local_38 = 0;
  uVar2 = FUN_01688270(param_1,&local_40);
  if ((uVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    uStack_4c = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
    local_50 = 1;
    local_48 = FUN_017baf44();
    local_48 = local_48 & 1;
    local_58 = PTR_DAT_04bb6268 + 0x10;
    FUN_01a5033c(local_18,&local_58,0,&local_40,0);
    bVar1 = local_18[0] == -2;
    if ((bVar1) && (FUN_011f3880(&local_58,0,param_2,&local_40), param_3 != 0)) {
      *(undefined4 *)(param_3 + 8) = (undefined4)local_38;
      *(undefined4 *)(param_3 + 0xc) = local_38._4_4_;
    }
  }
  return bVar1;
}

