
void FUN_002bc398(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_002a6e84();
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_04848168;
  *(undefined1 *)((long)param_1 + 100) = 1;
  if (DAT_04c60320 == 0) {
    return;
  }
  uVar1 = FUN_002290b0(DAT_04c60320,2);
  FUN_002290c4(uVar1,"UnreliableProtocol receive buffer num");
  return;
}

