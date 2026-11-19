
void FUN_0387b2f0(undefined8 param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined4 local_54;
  ErrorResultVariant aEStack_50 [12];
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  local_44 = 0;
  local_54 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_54);
  if ((DAT_04c60f48 == 0) || (uVar1 = FUN_0029b2ac(DAT_04c60f48,param_2), (uVar1 & 1) == 0)) {
    local_54 = 0;
    local_34 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_34);
    FUN_002296c4(param_1,&local_54);
  }
  else {
    FUN_0029b19c(param_1,DAT_04c60f48,param_2);
  }
  return;
}

