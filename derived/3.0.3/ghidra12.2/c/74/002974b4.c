
void FUN_002974b4(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 local_48;
  int local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  if (((param_3 == 0) || (param_4 == 0)) || (param_2[0xb] != 0)) {
    local_48 = local_48 & 0xffffffff00000000;
    local_34 = 0x10c07;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_48);
  }
  else {
    (**(code **)(*param_2 + 0x50))(&local_34,param_2,param_4);
    if (local_34 == 0) {
      param_2[0xb] = param_3;
      FUN_00220f78(param_3);
      *(undefined1 *)((long)param_2 + 0x7c) = 0;
      *(undefined2 *)((long)param_2 + 0x7f) = 0;
      *(undefined1 *)((long)param_2 + 0x82) = 0;
      local_48 = local_48 & 0xffffffff00000000;
      local_24 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_48 + 4),(Result *)&local_24);
      FUN_00229780((long)param_2 + 0x6c,&local_48);
      (**(code **)(*param_2 + 0x10))(param_2,1);
      local_48 = 0;
      FUN_002282f0(&local_48);
      uVar1 = local_48;
      local_48 = local_48 & 0xffffffff00000000;
      local_24 = 0;
      param_2[0x28] = uVar1;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_48 + 4),(Result *)&local_24);
      FUN_002296c4(param_1,&local_48);
      return;
    }
  }
  FUN_002296c4(param_1,&local_34);
  return;
}

