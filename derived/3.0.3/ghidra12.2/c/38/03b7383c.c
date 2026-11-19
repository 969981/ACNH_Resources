
void FUN_03b7383c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_04b78010;
  uVar1 = FUN_03b38a74();
  FUN_003b6364(uVar1,0x7b,0);
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
    param_1[1] = 0;
  }
  uVar1 = FUN_03b38a74();
  FUN_003b6364(uVar1,0x7c,0);
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
    param_1[2] = 0;
  }
  uVar1 = FUN_03b38a74();
  FUN_003b6364(uVar1,0x7d,0);
  if ((long *)param_1[3] != (long *)0x0) {
    (**(code **)(*(long *)param_1[3] + 8))();
    param_1[3] = 0;
  }
  uVar1 = FUN_03b38a74();
  FUN_003b6364(uVar1,0x7e,0);
  if ((long *)param_1[4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[4] + 8))();
    param_1[4] = 0;
  }
  uVar1 = FUN_03b38a74();
  FUN_003b6364(uVar1,0x7f,0);
  if ((long *)param_1[5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[5] + 8))();
    param_1[5] = 0;
  }
  return;
}

