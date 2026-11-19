
void FUN_0387ac90(undefined8 param_1)

{
  ulong uVar1;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  local_34 = 0;
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_44);
  if (DAT_04c60f48 != 0) {
    FUN_0029c7a8();
    FUN_0029c25c(DAT_04c60f48);
    FUN_0029962c();
  }
  uVar1 = FUN_00291260();
  if ((uVar1 & 1) != 0) {
    FUN_002913c0();
  }
  local_44 = 0;
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
  FUN_002296c4(param_1,&local_44);
  return;
}

