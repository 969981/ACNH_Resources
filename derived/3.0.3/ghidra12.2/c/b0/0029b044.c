
void FUN_0029b044(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  if (*(long *)(param_2 + 0x68) == 0) {
    local_34 = 0x10c08;
  }
  else {
    lVar1 = FUN_00227acc(param_3);
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0029b090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_2 + 0x68) + 0x10))(param_1,*(long **)(param_2 + 0x68),param_3);
      return;
    }
    local_34 = 0x10c07;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}

