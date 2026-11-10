
undefined4 FUN_0028defc(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined *local_38;
  undefined8 uStack_30;
  undefined4 local_24;
  
  FUN_00290570(&DAT_04c60ad0);
  local_24 = 0;
  FUN_0028d810(param_1,param_2);
  (**(code **)(DAT_04c60b10 + 0x18))();
  local_38 = PTR_DAT_04bccec0 + 0x10;
  uStack_30 = DAT_04c60b18;
  thunk_FUN_0028b570(&local_24,&local_38,0xffffffff);
  uVar1 = local_24;
  FUN_00290578(&DAT_04c60ad0);
  return uVar1;
}

