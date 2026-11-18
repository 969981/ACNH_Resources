
void FUN_03400630(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *local_58 [4];
  int local_34;
  undefined *local_30;
  char *local_28;
  
  local_30 = PTR_DAT_04bb2020 + 0x10;
  local_28 = "edit_chara_make";
  FUN_025ffac8(local_58,&local_30,param_1);
  local_30 = *(undefined **)(param_1 + 8);
  puVar1 = PTR_DAT_04bc3288 + 0x10;
  local_28 = (char *)CONCAT71(local_28._1_7_,*(undefined1 *)(param_1 + 0x10));
  local_58[0] = puVar1;
  FUN_025980a0(local_58,&local_30);
  local_58[0] = puVar1;
  iVar2 = FUN_02598510(local_58);
  if (iVar2 != -1) {
    iVar2 = (**(code **)(local_58[0] + 0x20))(local_58);
    local_30 = (undefined *)CONCAT44(local_30._4_4_,iVar2);
    if (iVar2 < 0xd) goto LAB_034006dc;
  }
  if (local_34 == 0) {
    local_34 = 1;
  }
LAB_034006dc:
  FUN_02601530(local_58);
  return;
}

