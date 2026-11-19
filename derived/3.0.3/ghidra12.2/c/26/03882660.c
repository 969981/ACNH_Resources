
void FUN_03882660(int *param_1,undefined8 param_2)

{
  undefined4 local_30 [4];
  
  *param_1 = 0;
  local_30[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 1),(Result *)local_30);
  FUN_002440a0(local_30);
  FUN_00229780(param_1,local_30);
  FUN_00244280(local_30);
  FUN_00229780(param_1,local_30);
  FUN_0024f908(local_30);
  FUN_00229780(param_1,local_30);
  FUN_0024fae8(local_30,*(undefined8 *)PTR_DAT_04bcba10,param_2);
  FUN_00229780(param_1,local_30);
  if (*param_1 == 0) {
    FUN_002441d0(local_30);
    FUN_00229780(param_1,local_30);
  }
  else {
    FUN_002441d0(local_30);
  }
  return;
}

