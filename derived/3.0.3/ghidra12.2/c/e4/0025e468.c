
void FUN_0025e468(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  ulong uVar1;
  int *piVar2;
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  int local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  piVar2 = &local_50;
  uVar1 = FUN_0025a244(*(undefined8 *)(param_2 + 0xb0));
  if ((uVar1 & 1) == 0) {
    local_50 = 0;
    local_40 = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_50);
    piVar2 = &local_40;
  }
  else {
    FUN_0025e838(&local_40,*(undefined8 *)(param_2 + 0x58),param_2 + 0x68,param_4);
    if (local_40 == 0) {
      *(undefined4 *)(param_2 + 0x98) = param_4;
      local_50 = 0;
      local_24 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_24);
      FUN_00229780(param_2 + 0x9c,&local_50);
      *(undefined8 *)(param_2 + 0x60) = param_3;
      FUN_00220f24(param_3);
      FUN_00220f78(*(undefined8 *)(param_2 + 0x60));
      FUN_002211bc(*(undefined8 *)(param_2 + 0x58),1);
      local_50 = 0;
      local_24 = 0;
      *(undefined **)(param_2 + 0x30) = PTR_FUN_04bcd608;
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(char **)(param_2 + 0x40) = "LocalAllowParticipatingJob::WaitAllowParticipating";
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_24);
    }
    else {
      piVar2 = &local_40;
    }
  }
  FUN_002296c4(param_1,piVar2);
  return;
}

