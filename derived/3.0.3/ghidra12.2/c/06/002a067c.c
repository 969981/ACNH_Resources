
void FUN_002a067c(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  memset(param_2 + 0xb,0,0x51);
  memset((void *)((long)param_2 + 0xac),0,0x40);
  *(undefined2 *)((long)param_2 + 0xa9) = 0;
  *(undefined1 *)((long)param_2 + 0xab) = 0xff;
  *(undefined1 *)((long)param_2 + 0xec) = 0;
  (**(code **)(*param_2 + 0x10))(param_2,1);
  puVar1 = PTR_LAB_04bcddf8;
  local_30 = 0;
  param_2[7] = 0;
  param_2[8] = (long)"AddPlayHistoryJob::CheckPlayerHistoryList";
  local_14 = 0;
  param_2[6] = (long)puVar1;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_14);
  FUN_002296c4(param_1,&local_30);
  return;
}

