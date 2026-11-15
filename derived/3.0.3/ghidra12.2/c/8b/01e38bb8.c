
uint FUN_01e38bb8(undefined8 param_1,byte *param_2)

{
  uint uVar1;
  byte local_14 [4];
  
  local_14[0] = *param_2;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  uVar1 = FUN_01e3e9e4(param_1,local_14,1);
  return uVar1 & 1;
}

