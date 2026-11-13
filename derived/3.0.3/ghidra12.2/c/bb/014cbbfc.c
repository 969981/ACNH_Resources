
void FUN_014cbbfc(long param_1)

{
  undefined **local_60;
  long lStack_58;
  undefined *local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  uStack_28 = *(undefined4 *)(param_1 + 0xb28);
  local_30 = *(undefined4 *)(param_1 + 0xa44);
  local_2c = 0;
  local_40 = PTR_DAT_04bbbc20 + 0x10;
  uStack_38 = *(undefined8 *)(param_1 + 0xa3c);
  local_60 = &PTR_LAB_049a6c98;
  lStack_58 = param_1;
  FUN_014f2510(param_1 + 0x700,&local_40,&local_60);
  local_60 = (undefined **)CONCAT44(local_60._4_4_,6);
  if (*(int *)(param_1 + 0x3c0) != 6) {
    FUN_03ebb160(param_1 + 0x3b8);
  }
  return;
}

