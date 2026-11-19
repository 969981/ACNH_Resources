
void FUN_03bcd6ec(undefined8 *param_1)

{
  ulong uVar1;
  
  *param_1 = &PTR_LAB_04b7af58;
  param_1 = param_1 + 2;
  *param_1 = &PTR_LAB_04b7af98;
  uVar1 = FUN_003b82fc(param_1);
  if ((uVar1 & 1) != 0) {
    FUN_003e6208(param_1);
  }
  thunk_FUN_003b82f4(param_1);
  return;
}

