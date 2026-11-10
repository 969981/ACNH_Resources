
void FUN_0031a180(undefined8 param_1,undefined8 param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined1 auStack_b8 [112];
  undefined *local_48 [3];
  undefined8 local_30;
  undefined4 local_14;
  
  (**(code **)(*param_3 + 0x18))(local_48,param_3);
  uVar1 = FUN_0018b44c(local_30,"PersistentGathering");
  if ((uVar1 & 1) != 0) {
    FUN_0018a58c(local_48,"Community");
  }
  FUN_001f7044(param_2,local_48);
  FUN_001abc3c(auStack_b8);
  (**(code **)(*param_3 + 0x30))(param_3,auStack_b8);
  lVar2 = FUN_001abe40(auStack_b8);
  local_14 = (undefined4)*(undefined8 *)(lVar2 + 0x18);
  FUN_00197478(param_2,&local_14,4);
  FUN_00197478(param_2,*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 0x28),
               *(undefined8 *)(lVar2 + 0x18));
  FUN_001abdec(auStack_b8);
  local_48[0] = PTR_DAT_04bc0ec8 + 0x10;
  FUN_0018b1a0(local_48);
  return;
}

