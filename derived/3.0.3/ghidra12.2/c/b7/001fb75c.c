
void FUN_001fb75c(undefined8 param_1,int param_2,ushort param_3)

{
  undefined1 local_1c [4];
  byte local_18 [4];
  ushort local_14 [2];
  
  local_14[0] = param_3;
  if (param_3 < 0x7f) {
    local_18[0] = (byte)param_3 | (param_2 != 0) << 7;
    FUN_00197478(param_1,local_18,1);
    return;
  }
  local_1c[0] = 0x7f;
  if (param_2 != 0) {
    local_1c[0] = 0xff;
  }
  FUN_00197478(param_1,local_1c,1);
  FUN_00197478(param_1,local_14,2);
  return;
}

