
void FUN_002c1ef8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,uint param_5
                 ,char param_6,undefined1 *param_7)

{
  ulong uVar1;
  undefined1 auStack_f0 [16];
  undefined4 local_e0;
  ErrorResultVariant aEStack_dc [12];
  undefined4 local_d0;
  ErrorResultVariant aEStack_cc [124];
  undefined4 local_44;
  
  if (*(long *)(param_2 + 0x90) == 0) {
    local_e0 = 0;
    local_d0 = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_cc,(Result *)&local_e0);
    FUN_002296c4(param_1,&local_d0);
  }
  else {
    if ((((*(char *)(param_2 + 0xb2) != '\0') && (*(long **)(param_2 + 0x88) != (long *)0x0)) &&
        (uVar1 = (**(code **)(**(long **)(param_2 + 0x88) + 0x60))(), (uVar1 & 1) != 0)) &&
       ((param_5 & 1) == 0)) {
      FUN_002b3fa8(&local_d0);
      FUN_002c3984(&local_e0,*(undefined8 *)(param_2 + 0x90),&local_d0);
      uVar1 = FUN_002b440c(param_3);
      if (((uVar1 & 1) != 0) || (uVar1 = FUN_002b440c(&local_d0), (uVar1 & 1) != 0)) {
        *param_7 = 0;
        FUN_00220f78(param_4);
        local_44 = 0;
        local_e0 = 0x643f;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_dc,(Result *)&local_44);
        FUN_002296c4(auStack_f0,&local_e0);
        FUN_00220ff8(param_4,auStack_f0);
        local_e0 = 0;
        local_44 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_dc,(Result *)&local_44);
        FUN_002296c4(param_1,&local_e0);
        FUN_002b4104(&local_d0);
        return;
      }
      FUN_002b4104(&local_d0);
    }
    FUN_002c368c(param_1,*(undefined8 *)(param_2 + 0x90),param_3,param_4,param_5 & 1,param_6 == -2,
                 param_7);
  }
  return;
}

