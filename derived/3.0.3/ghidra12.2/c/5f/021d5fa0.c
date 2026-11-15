
undefined8 FUN_021d5fa0(long *param_1)

{
  long lVar1;
  undefined4 local_24;
  
  lVar1 = DAT_053f9928;
  if (DAT_053f9928 != 0) {
    (**(code **)(*param_1 + 0x18))();
    local_24 = FUN_006bd550(param_1[1],0);
    lVar1 = FUN_0079e4d0(lVar1,&local_24);
    if (lVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

