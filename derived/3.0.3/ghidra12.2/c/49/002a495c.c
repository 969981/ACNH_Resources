
void FUN_002a495c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_002ac93c();
  param_1[0xe] = 0;
  *param_1 = &PTR_FUN_048471a0;
  if (DAT_04c60320 != 0) {
    uVar1 = FUN_002290b0(DAT_04c60320,5);
    FUN_002290c4(uVar1,"BroadcastReliableProtocol send buffer num");
    if (DAT_04c60320 != 0) {
      uVar1 = FUN_002290b0(DAT_04c60320,6);
      FUN_002290c4(uVar1,"BroadcastReliableProtocol receive buffer num");
      return;
    }
  }
  return;
}

