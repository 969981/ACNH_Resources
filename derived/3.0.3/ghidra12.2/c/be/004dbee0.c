
void FUN_004dbee0(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 local_18 [2];
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    lVar1 = param_2[3];
  }
  local_18[0] = (undefined4)param_2[6];
  FUN_004dafa0(param_1,lVar1,param_2[1],param_2[2],local_18,param_3);
  return;
}

