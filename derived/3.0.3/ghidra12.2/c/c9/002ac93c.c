
void FUN_002ac93c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_002a6e84();
  *(undefined2 *)((long)param_1 + 0x4e) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *param_1 = &PTR_FUN_04847860;
  if (DAT_04c60320 != 0) {
    uVar1 = FUN_002290b0(DAT_04c60320,3);
    FUN_002290c4(uVar1,"ReliableProtocol send buffer num");
    if (DAT_04c60320 != 0) {
      uVar1 = FUN_002290b0(DAT_04c60320,4);
      FUN_002290c4(uVar1,"ReliableProtocol receive buffer num");
      return;
    }
  }
  return;
}

