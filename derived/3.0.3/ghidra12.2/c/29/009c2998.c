
void FUN_009c2998(long param_1,byte *param_2,ulong param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined **local_68 [4];
  int local_44;
  undefined8 local_40;
  char *pcStack_38;
  
  if (7 < *param_2) {
    return;
  }
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "radio_gymnastic";
  FUN_025ffac8(local_68,&local_40,param_2);
  local_40._0_4_ = (uint)*(byte *)(param_1 + 0x38);
  local_68[0] = &PTR_FUN_04a860d8;
  if ((ulong)*param_2 < 8) {
    local_40._4_4_ = (uint)*(byte *)(param_1 + (ulong)*param_2 + 0x40);
  }
  else {
    local_40._4_4_ = 2;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x218);
  if ((param_3 & 1) == 0) {
    uVar1 = 0xffffffff;
  }
  pcStack_38 = (char *)CONCAT44(pcStack_38._4_4_,uVar1);
  FUN_025c82e0(local_68,&local_40);
  local_68[0] = &PTR_FUN_04a860d8;
  iVar2 = FUN_025c8500(local_68);
  if (((iVar2 == -1) ||
      (local_40._0_4_ = (*(code *)local_68[0][4])(local_68), 0xc < (int)(uint)local_40)) &&
     (local_44 == 0)) {
    local_44 = 1;
  }
  FUN_02601530(local_68);
  return;
}

