
void FUN_00364bf0(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = FUN_0036515c(param_2,*(undefined8 *)(param_3 + 0x20),*(undefined2 *)(param_3 + 0x4a));
  if ((uVar1 & 1) != 0) {
    FUN_0037bb40(param_3,param_1);
  }
  FUN_00365144(param_2,param_1);
  FUN_0037b59c(param_3,param_1,param_2);
  return;
}

