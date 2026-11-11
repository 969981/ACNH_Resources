
void FUN_0046e430(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 local_28;
  
  if (param_2 != param_3) {
    do {
      local_28 = *param_2;
      lVar1 = FUN_0046e5d0(param_1,&local_28);
      if (lVar1 != 0) {
        FUN_0046f940(param_1,lVar1);
      }
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}

