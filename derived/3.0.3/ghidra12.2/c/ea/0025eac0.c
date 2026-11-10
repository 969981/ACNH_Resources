
void FUN_0025eac0(long *param_1,long *param_2)

{
  long lVar1;
  
  FUN_00227770();
  *param_1 = DAT_04bcd708 + 0x10;
  FUN_00220ebc(param_1 + 0xb);
  lVar1 = *param_2;
  param_1[0x12] = (long)param_2;
  lVar1 = (**(code **)(lVar1 + 0x198))(param_2);
  param_1[0x11] = lVar1;
  return;
}

