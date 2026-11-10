
void FUN_00307458(undefined8 param_1,long param_2,undefined8 param_3,int param_4,undefined8 param_5,
                 uint param_6)

{
  int *piVar1;
  int local_80;
  ErrorResultVariant aEStack_7c [12];
  int local_70;
  ErrorResultVariant aEStack_6c [12];
  int local_60;
  ErrorResultVariant aEStack_5c [12];
  int local_48;
  undefined4 local_44;
  
  piVar1 = &local_80;
  local_48 = 0;
  local_60 = 0;
  local_70 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_70);
  if ((param_6 & 0xff) == 0) {
LAB_003074e8:
    FUN_00226ec4(&local_70,*(undefined8 *)(param_2 + 0x10),param_3,param_4,param_5,&local_48);
    FUN_00229780(&local_60,&local_70);
    if ((param_6 & 0xff) != 0) {
      local_70 = 0;
      local_80 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_6c,(Result *)&local_80);
      FUN_00226ce0(&local_80,*(undefined8 *)(param_2 + 0x10),0);
      FUN_00229780(&local_70,&local_80);
      if (local_70 != 0) goto LAB_00307550;
    }
    if (local_60 == 0) {
      if ((local_48 != 0) && (local_48 == param_4)) goto LAB_003075a0;
      local_70 = 0x10c08;
    }
    else {
      if (*(char *)(param_2 + 8) != '\0') {
        piVar1 = &local_60;
        goto LAB_003075cc;
      }
LAB_003075a0:
      local_70 = 0;
    }
    local_80 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_6c,(Result *)&local_80);
  }
  else {
    local_70 = 0;
    local_80 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_6c,(Result *)&local_80);
    FUN_00226ce0(&local_80,*(undefined8 *)(param_2 + 0x10),param_6);
    FUN_00229780(&local_70,&local_80);
    if (local_70 == 0) goto LAB_003074e8;
LAB_00307550:
    if (*(char *)(param_2 + 8) == '\0') {
      local_80 = 0;
      local_44 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_7c,(Result *)&local_44);
      goto LAB_003075cc;
    }
  }
  piVar1 = &local_70;
LAB_003075cc:
  FUN_002296c4(param_1,piVar1);
  return;
}

