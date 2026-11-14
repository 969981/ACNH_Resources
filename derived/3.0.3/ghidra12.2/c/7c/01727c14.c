
void FUN_01727c14(long *param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  
  if (param_3 < 8) {
    plVar1 = &DAT_0524af90 + (long)(int)param_3 * 4;
  }
  else {
    plVar1 = &DAT_0524af68;
  }
  lVar2 = *plVar1;
  *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
  param_1[1] = lVar2;
  return;
}

