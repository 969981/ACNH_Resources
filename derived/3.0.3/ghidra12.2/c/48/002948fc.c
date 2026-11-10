
void FUN_002948fc(long param_1)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  local_24 = 0;
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_00229780(param_1 + 0x120,&local_24);
  *(undefined1 **)(param_1 + 0x30) = &LAB_0029457c;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "JoinSessionJob::ProcessSuccess";
  return;
}

