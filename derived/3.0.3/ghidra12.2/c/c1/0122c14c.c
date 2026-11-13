
void FUN_0122c14c(long param_1,int param_2)

{
  float local_2c [2];
  float local_24;
  
  FUN_011e3e20(param_1,param_2);
  local_24 = (float)*(int *)(param_1 + 0xc) * 5.0 + 5.0;
  local_2c[0] = (float)*(int *)(param_1 + 8) * 5.0 + 5.0;
  if (param_2 != 1) {
    if (param_2 != 2) {
      return;
    }
    FUN_013ef290(0x41c80000,*(undefined8 *)PTR_DAT_04bb3d80,local_2c);
  }
  FUN_01953930(*(undefined8 *)PTR_DAT_04bb47e0,local_2c);
  return;
}

