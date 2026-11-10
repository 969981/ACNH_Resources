
void FUN_0029cb54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined1 local_18 [4];
  undefined4 local_14;
  
  FUN_002ba1c4(&local_30,DAT_04c61168,local_18,param_3);
  if ((local_30 == 0) && (DAT_04c603c8 != 0)) {
    FUN_0026bb00(param_1,DAT_04c603c8,local_18[0]);
    return;
  }
  local_14 = 0;
  local_30 = 0x10c08;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_14);
  FUN_002296c4(param_1,&local_30);
  return;
}

