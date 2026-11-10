
undefined8 FUN_0028df84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_00290570(&DAT_04c60ad0);
  local_28 = 0;
  FUN_0028d810(param_1,param_2);
  (**(code **)(DAT_04c60b10 + 0x18))();
  local_38 = PTR_DAT_04bccec0 + 0x10;
  uStack_30 = DAT_04c60b18;
  thunk_FUN_0028ab10(&local_28,&local_38,0xffffffff);
  uVar1 = local_28;
  FUN_00290578(&DAT_04c60ad0);
  return uVar1;
}

