
void FUN_001f8a0c(undefined8 param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined *local_90 [13];
  undefined1 local_27;
  undefined4 local_14;
  
  (**(code **)(*param_3 + 0x18))(local_90,param_3);
  FUN_001f7044(param_2,local_90);
  local_90[0] = PTR_DAT_04bc0ec8 + 0x10;
  FUN_0018b1a0(local_90);
  FUN_001abc3c(local_90);
  local_27 = *(undefined1 *)(param_2 + 0x69);
  (**(code **)(*param_3 + 0x30))(param_3,local_90);
  lVar1 = FUN_001abe40(local_90);
  local_14 = (undefined4)*(undefined8 *)(lVar1 + 0x18);
  FUN_00197478(param_2,&local_14,4);
  FUN_00197478(param_2,*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 0x28),
               *(undefined8 *)(lVar1 + 0x18));
  FUN_001abdec(local_90);
  return;
}

