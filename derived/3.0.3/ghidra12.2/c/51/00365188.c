
void FUN_00365188(long param_1,undefined8 param_2)

{
  FUN_003482c0(param_2,1,param_1 + 0xf8,*(undefined8 *)(param_1 + 0x150));
  FUN_00348bb0(param_2,0,1,param_1 + 0x130);
  FUN_00348a80(param_2,0,1,param_1 + 0x100);
  if (*(long *)(param_1 + 0x158) != 0) {
    FUN_00348134(param_2);
  }
  if (*(long *)(param_1 + 0x160) == 0) {
    return;
  }
  FUN_00347f8c(param_2);
  return;
}

