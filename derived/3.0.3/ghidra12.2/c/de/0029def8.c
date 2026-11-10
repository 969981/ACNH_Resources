
void FUN_0029def8(undefined8 param_1,long *param_2,long param_3,undefined4 param_4,long *param_5)

{
  ulong uVar1;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  uVar1 = (**(code **)(*param_5 + 0xe0))(param_5);
  if ((uVar1 & 1) == 0) {
    local_44 = 0x10c08;
  }
  else {
    param_2[0xb] = param_3;
    FUN_00220f78(param_3);
    *(undefined4 *)(param_2 + 0x12) = param_4;
    param_2[0x13] = (long)param_5;
    (**(code **)(*param_2 + 0x10))(param_2,1);
    local_44 = 0;
    param_2[6] = (long)PTR_FUN_04bcdfb0;
    param_2[7] = 0;
    param_2[8] = (long)"OpenParticipationJob::OpenParticipation";
  }
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
  FUN_002296c4(param_1,&local_44);
  return;
}

