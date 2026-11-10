
void FUN_00290f00(long *param_1)

{
  long lVar1;
  
  lVar1 = FUN_00290e18(param_1 + 6,(int)param_1[0x17]);
  if (lVar1 != param_1[0x18]) {
    do {
      (**(code **)(*param_1 + 0x80))(param_1,lVar1);
      lVar1 = FUN_00290e18(param_1 + 6,(int)param_1[0x17]);
    } while (lVar1 != param_1[0x18]);
  }
  return;
}

