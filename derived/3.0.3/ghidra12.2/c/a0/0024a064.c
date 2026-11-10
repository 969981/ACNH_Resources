
void FUN_0024a064(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined4 local_38;
  ErrorResultVariant aEStack_34 [12];
  int local_28 [4];
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = nn::ldn::GetSecurityParameter((SecurityParameter *)(param_2 + 0x8424));
  local_18 = (undefined4)uVar1;
  FUN_00247918(local_28,uVar1,&local_18);
  if (local_28[0] == 0) {
    local_38 = 0;
    local_14 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_34,(Result *)&local_14);
    FUN_002296c4(param_1,&local_38);
    return;
  }
  FUN_002296c4(param_1,local_28);
  return;
}

