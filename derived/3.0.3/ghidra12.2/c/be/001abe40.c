
undefined8 FUN_001abe40(long param_1)

{
  undefined8 uVar1;
  int local_18 [2];
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
  FUN_00197454(param_1,0);
  local_18[0] = (int)uVar1 + -4;
  FUN_00193030(*(undefined8 *)(param_1 + 0x10),local_18,4,0xffffffffffffffff);
  FUN_00197454(param_1,uVar1);
  return *(undefined8 *)(param_1 + 0x10);
}

