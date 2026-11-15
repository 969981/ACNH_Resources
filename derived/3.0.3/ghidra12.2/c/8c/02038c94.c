
undefined8 FUN_02038c94(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined2 local_28;
  undefined1 local_26;
  undefined4 local_24;
  
  lVar1 = DAT_053e67f0;
  if (DAT_053e67f0 != 0) {
    (**(code **)(*param_1 + 0x18))();
    local_24 = FUN_006bd550(param_1[1],0);
    lVar1 = FUN_0079e770(lVar1,&local_24);
    if (lVar1 != 0) {
      local_28 = 0x23;
      local_26 = 8;
      FUN_020fd3a0(&local_28,param_1);
      uVar2 = FUN_021d7d60(&local_28);
      return uVar2;
    }
  }
  return 0xffffffff;
}

