
void FUN_0024fae8(undefined8 param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  int local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  if ((char)param_2[1] == '\0') {
    uVar2 = (**(code **)(*param_3 + 0x18))(param_3);
    *(undefined4 *)((long)param_2 + 0xc) = uVar2;
    (**(code **)(*param_2 + 0x18))(&local_34,param_2,param_3);
    puVar1 = PTR_DAT_04bccf00;
    if (local_34 == 0) {
      *(undefined1 *)(param_2 + 1) = 1;
      local_44 = 0;
      local_24 = 0;
      puVar1[0x42] = puVar1[0x42] & 0xfc;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
      FUN_002296c4(param_1,&local_44);
      return;
    }
  }
  else {
    local_44 = 0;
    local_34 = 0x10c02;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_44);
  }
  FUN_002296c4(param_1,&local_34);
  return;
}

