
void FUN_03280344(long *param_1,ulong param_2)

{
  undefined8 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_20 = 0x300000002;
  uStack_14 = 5;
  if ((param_2 & 1) != 0) {
    uStack_14 = 1;
  }
  local_18 = 4;
  (**(code **)(*param_1 + 0x28))(param_1,&local_20);
  return;
}

