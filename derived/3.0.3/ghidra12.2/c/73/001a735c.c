
void FUN_001a735c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bcc318 + 0x10);
  FUN_001baef0(param_1[2] + 0xf0,(int)param_1[1],(char)param_1[3]);
  if ((long *)param_1[5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[5] + 8))();
    param_1[5] = 0;
  }
  return;
}

