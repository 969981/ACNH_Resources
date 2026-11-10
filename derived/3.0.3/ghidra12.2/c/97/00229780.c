
int * FUN_00229780(int *param_1,int *param_2)

{
  undefined8 uVar1;
  int local_44;
  ErrorResultVariant aEStack_40 [12];
  int local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  local_44 = 0;
  local_34 = 0xe437;
  *param_1 = *param_2;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_44);
  if (*param_2 != local_34) {
    local_24 = 0;
    local_44 = 0xa46e;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
    if (*param_2 != local_44) {
      local_34 = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)(param_1 + 1),(Result *)&local_34);
      return param_1;
    }
  }
  uVar1 = *(undefined8 *)(param_2 + 1);
  param_1[3] = param_2[3];
  *(undefined8 *)(param_1 + 1) = uVar1;
  return param_1;
}

