
uint FUN_0069659c(undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  undefined1 local_14 [4];
  
  local_14[0] = 0xc2;
  if ((param_2 & 1) != 0) {
    local_14[0] = 0xc3;
  }
  uVar1 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,local_14,1);
  return uVar1 & 1;
}

