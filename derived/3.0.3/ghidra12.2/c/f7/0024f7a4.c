
void FUN_0024f7a4(undefined8 param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  (**(code **)(*param_2 + 0x10))(param_2,0);
  param_2[0xb] = param_3;
  FUN_00220f24(param_3);
  FUN_00220f78(param_2[0xb]);
  puVar1 = PTR_FUN_04bcd700;
  local_34 = 0;
  param_2[7] = 0;
  param_2[8] = (long)"LocalEventCheckBackgroundJob::UpdateConnectionStatus";
  local_24 = 0;
  param_2[6] = (long)puVar1;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}

