
void FUN_0025e190(undefined8 param_1,long *param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 local_34;
  
  local_3c = 0;
  local_44 = 0x10;
  FUN_00220138(param_4 + 8,&local_44);
  (**(code **)(*param_2 + 0x10))(param_2,0);
  param_2[0xb] = param_3;
  FUN_00220f24(param_3);
  FUN_00220f78(param_2[0xb]);
  FUN_00227418(param_2 + 0xc,param_4);
  puVar1 = PTR_FUN_04bcd6c8;
  local_44 = local_44 & 0xffffffff00000000;
  param_2[7] = 0;
  param_2[8] = (long)"LocalEjectClientBackgroundJob::EjectClient";
  local_34 = 0;
  param_2[6] = (long)puVar1;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_44 + 4),(Result *)&local_34);
  FUN_002296c4(param_1,&local_44);
  return;
}

