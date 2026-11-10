
void FUN_0025dd1c(undefined8 param_1,long param_2)

{
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  local_24 = 0;
  *(undefined8 *)(param_2 + 0x184) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(char **)(param_2 + 0x40) = "LocalEjectClientListCheckJob::CheckTargetList";
  local_14 = 0;
  *(undefined1 **)(param_2 + 0x30) = &LAB_0025dd78;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

