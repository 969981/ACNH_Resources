
void FUN_00171368(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_00167d90(param_1 + 0x1a0,*(undefined8 *)(param_1 + 0x218));
  if (iVar1 == 0) {
    FUN_0016eddc(param_1,param_1 + 0x1a0);
    return;
  }
  FUN_0016bcd4(param_1,*(undefined4 *)(param_1 + 0x93c),1,"PUSH_PROMISE: could not unpack");
  return;
}

