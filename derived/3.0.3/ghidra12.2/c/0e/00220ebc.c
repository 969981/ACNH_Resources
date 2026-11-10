
void FUN_00220ebc(undefined8 *param_1)

{
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  *param_1 = 0;
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 1),(Result *)&local_34);
  *(undefined4 *)param_1 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_34 = 0;
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_00229780((undefined4 *)((long)param_1 + 4),&local_34);
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}

