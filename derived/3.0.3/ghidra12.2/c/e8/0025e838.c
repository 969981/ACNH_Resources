
void FUN_0025e838(undefined8 param_1,long *param_2,long param_3,undefined4 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  uVar2 = FUN_002212e4();
  if ((uVar2 & 1) == 0) {
    (**(code **)(*param_2 + 0x10))(param_2,0);
    param_2[0xb] = param_3;
    FUN_00220f24(param_3);
    FUN_00220f78(param_2[0xb]);
    *(undefined4 *)(param_2 + 0xc) = param_4;
    puVar1 = PTR_FUN_04bcd5f8;
    local_40 = 0;
    param_2[7] = 0;
    param_2[8] = (long)"LocalAllowParticipatingBackgroundJob::AllowParticipating";
    param_2[6] = (long)puVar1;
  }
  else {
    local_40 = 0x10c08;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}

