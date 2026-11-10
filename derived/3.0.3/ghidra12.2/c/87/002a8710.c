
void FUN_002a8710(undefined8 param_1,long param_2)

{
  int *piVar1;
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  int local_40 [4];
  undefined4 local_24;
  
  piVar1 = &local_50;
  FUN_0022c900(local_40,*(undefined8 *)(param_2 + 0xd8));
  *(undefined4 *)(param_2 + 0xf0) = 0x5a0;
  FUN_0022c9d8(&local_50,*(undefined8 *)(param_2 + 0xd8),*(undefined8 *)(param_2 + 0xe8));
  FUN_00229780(local_40,&local_50);
  FUN_0022c9c0(*(undefined8 *)(param_2 + 0xd8));
  if (local_40[0] == 0) {
    local_50 = 0;
    local_24 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_24);
  }
  else {
    piVar1 = local_40;
  }
  FUN_002296c4(param_1,piVar1);
  return;
}

