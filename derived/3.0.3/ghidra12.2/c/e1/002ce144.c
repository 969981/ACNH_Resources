
void FUN_002ce144(undefined8 param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  if (param_3 == 0) {
    local_34 = 0x10c07;
  }
  else {
    uVar2 = FUN_00220f78(param_3);
    puVar1 = PTR_DAT_04bcb8c0;
    if ((uVar2 & 1) == 0) {
      local_34 = 0x10c08;
    }
    else {
      param_2[0xb] = param_3;
      local_34 = 0;
      local_24 = 0;
      param_2[0xc] = *(long *)(*(long *)puVar1 + 0x30);
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
      FUN_00229780(param_2 + 0xd,&local_34);
      param_2[6] = (long)PTR_FUN_04bce9b0;
      param_2[7] = 0;
      param_2[8] = (long)"NexNatServerAddressResolveJob::StepResolveNatServerAddress";
      (**(code **)(*param_2 + 0x10))(param_2,1);
      local_34 = 0;
    }
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}

