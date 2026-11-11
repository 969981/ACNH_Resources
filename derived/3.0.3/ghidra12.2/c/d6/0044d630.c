
undefined4 FUN_0044d630(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  long local_48 [2];
  ulong local_38;
  
  if (*param_1 != 0) {
    FUN_00427bc0(local_48,param_1[1],PTR_DAT_04bd7430);
    lVar1 = local_48[0];
    if ((local_38 & 1) != 0) {
      FUN_0043dd50(local_38 & 0xfffffffffffffffe);
    }
    if (lVar1 != 0) {
      FUN_0044c3d0(local_48,lVar1,param_2);
      if (local_48[0] == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_00441150(param_1,local_48);
      }
      if ((local_38 & 1) != 0) {
        FUN_0043dd50(local_38 & 0xfffffffffffffffe);
      }
      if (local_48[0] != 0) {
        return uVar2;
      }
    }
  }
  return 0x80040200;
}

