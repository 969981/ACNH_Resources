
void FUN_0024853c(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  uVar1 = nn::ldn::GetState();
  if ((uVar1 & 0xfffffffe) == 4) {
    uVar2 = nn::ldn::CloseStation();
    local_24 = (undefined4)uVar2;
    FUN_00247918(param_1,uVar2,&local_24);
    return;
  }
  local_24 = 0;
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

