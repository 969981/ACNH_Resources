
void FUN_001abcd4(long param_1)

{
  undefined8 uVar1;
  int local_18 [2];
  
  FUN_0019742c();
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  FUN_00197454(param_1,4);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
  FUN_00197454(param_1,0);
  local_18[0] = (int)uVar1 + -4;
  FUN_00193030(*(undefined8 *)(param_1 + 0x10),local_18,4,0xffffffffffffffff);
  FUN_00197454(param_1,uVar1);
  if (3 < *(ulong *)(*(long *)(param_1 + 0x10) + 0x18)) {
    *(undefined8 *)(param_1 + 0x18) = 4;
  }
  return;
}

