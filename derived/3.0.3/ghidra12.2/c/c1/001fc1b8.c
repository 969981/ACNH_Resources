
void FUN_001fc1b8(undefined8 param_1,ushort param_2,int param_3)

{
  undefined1 local_1c [4];
  byte local_18 [4];
  ushort local_14 [2];
  
  local_14[0] = param_2;
  if (param_2 < 0x7f) {
    local_18[0] = (byte)param_2 | (param_3 != 0) << 7;
    FUN_00197478(param_1,local_18,1);
    return;
  }
  local_1c[0] = 0x7f;
  if (param_3 != 0) {
    local_1c[0] = 0xff;
  }
  FUN_00197478(param_1,local_1c,1);
  FUN_00197478(param_1,local_14,2);
  return;
}

