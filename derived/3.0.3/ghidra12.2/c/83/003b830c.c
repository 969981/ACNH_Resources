
void FUN_003b830c(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  uVar1 = FUN_003b8f18(param_2);
  *(undefined4 *)(param_1 + 0x298) = uVar1;
  return;
}

