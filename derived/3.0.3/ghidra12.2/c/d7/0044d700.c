
undefined4 FUN_0044d700(long *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long local_48 [2];
  ulong local_38;
  
  iVar2 = FUN_0044d630();
  if (iVar2 < 0) {
    uVar4 = 0x80040200;
    if (*param_1 != 0) {
      FUN_00427bc0(local_48,param_1[1],PTR_DAT_04bd7430);
      lVar1 = local_48[0];
      if ((local_38 & 1) != 0) {
        FUN_0043dd50(local_38 & 0xfffffffffffffffe);
      }
      if (lVar1 != 0) {
        FUN_0044c4d0(local_48,lVar1,param_2);
        if (local_48[0] == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_00441150(param_1,local_48);
          FUN_00440b30(local_48,3,1);
        }
        if ((local_38 & 1) != 0) {
          FUN_0043dd50(local_38 & 0xfffffffffffffffe);
        }
        if (local_48[0] != 0) {
          return uVar3;
        }
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

