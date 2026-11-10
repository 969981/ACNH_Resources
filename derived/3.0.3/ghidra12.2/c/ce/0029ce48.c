
void FUN_0029ce48(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined4 local_40 [4];
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined1 auStack_20 [16];
  
  uVar1 = DAT_04c61168;
  if ((param_2 & 1) == 0) {
    local_40[0] = 0;
    local_30 = 0x4c11;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)local_40);
    FUN_002296c4(auStack_50,&local_30);
    FUN_002ba4a4(local_40,uVar1,auStack_50);
    return;
  }
  local_30 = 0;
  local_40[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)local_40);
  FUN_002296c4(auStack_20,&local_30);
  FUN_002ba4a4(local_40,uVar1,auStack_20);
  return;
}

