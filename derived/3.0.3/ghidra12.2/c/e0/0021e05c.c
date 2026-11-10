
void FUN_0021e05c(long *param_1,undefined4 param_2)

{
  undefined8 local_2c;
  undefined4 local_24;
  
  if (param_1[0xb] == 0) {
    local_24 = 0;
    local_2c = 0x800000000000000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_2c);
    FUN_002b1c80(param_1[0xb],param_2);
    return;
  }
  FUN_002b1c80(param_1[0xb],param_2);
  return;
}

