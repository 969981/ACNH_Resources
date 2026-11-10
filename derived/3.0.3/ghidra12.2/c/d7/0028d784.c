
undefined1 FUN_0028d784(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *local_38;
  undefined8 uStack_30;
  undefined1 local_24 [4];
  
  FUN_00290570(&DAT_04c60ad0);
  local_24[0] = 0;
  FUN_0028d810(param_1,param_2);
  (**(code **)(DAT_04c60b10 + 0x18))();
  local_38 = PTR_DAT_04bccec0 + 0x10;
  uStack_30 = DAT_04c60b18;
  thunk_FUN_0028c9f0(local_24,&local_38,0xffffffff);
  uVar1 = local_24[0];
  FUN_00290578(&DAT_04c60ad0);
  return uVar1;
}

