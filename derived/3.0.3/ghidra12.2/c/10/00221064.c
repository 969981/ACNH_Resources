
void FUN_00221064(undefined4 *param_1)

{
  code *pcVar1;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  local_14 = 0;
  local_30 = 0x6c05;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_14);
  FUN_002296c4(auStack_40,&local_30);
  FUN_00229780(param_1 + 1,auStack_40);
  *param_1 = 4;
  FUN_002296c4(auStack_50,param_1 + 1);
  pcVar1 = *(code **)(param_1 + 6);
  if (pcVar1 != (code *)0x0) {
    FUN_002296c4(&local_30,auStack_50);
    (*pcVar1)(&local_30,*(undefined8 *)(param_1 + 8));
  }
  return;
}

