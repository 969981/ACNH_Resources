
void FUN_002cc058(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  lVar2 = FUN_00227acc(param_3);
  if ((lVar2 == 0) || (uVar1 = FUN_00227cb0(param_3), 0x20 < uVar1)) {
    local_24 = 0;
    local_34 = 0x10c07;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
    FUN_002296c4(param_1,&local_34);
    return;
  }
  FUN_00227af0(param_1,param_2 + 0x278,param_3);
  return;
}

