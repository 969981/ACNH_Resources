
void FUN_002296c4(int *param_1,int *param_2)

{
  undefined8 uVar1;
  ErrorResultVariant *this;
  int local_44;
  ErrorResultVariant aEStack_40 [12];
  int local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  this = (ErrorResultVariant *)(param_1 + 1);
  *param_1 = *param_2;
  nn::err::ErrorResultVariant::ErrorResultVariant(this);
  local_44 = 0;
  local_34 = 0xe437;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_44);
  if (*param_2 != local_34) {
    local_24 = 0;
    local_44 = 0xa46e;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
    if (*param_2 != local_44) {
      local_34 = 0;
      nn::err::ErrorResultVariant::operator=(this,(Result *)&local_34);
      return;
    }
  }
  uVar1 = *(undefined8 *)(param_2 + 1);
  param_1[3] = param_2[3];
  *(undefined8 *)this = uVar1;
  return;
}

