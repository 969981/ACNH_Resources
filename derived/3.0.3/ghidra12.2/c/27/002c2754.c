
void FUN_002c2754(undefined8 param_1,long *param_2,long param_3,byte param_4,undefined4 param_5,
                 undefined2 param_6,undefined2 param_7,undefined2 param_8,undefined8 param_9)

{
  code *pcVar1;
  int local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  if (param_3 == 0) {
    local_30 = 0x10c07;
  }
  else {
    if ((((param_2[1] == 0) && ((int)param_2[0x34] != 1)) && ((int)param_2[0x3a] != 1)) &&
       ((((int)param_2[0x41] != 1 && ((char)param_2[4] == '\0')) && (param_2[3] != 0)))) {
      param_2[1] = param_3;
      *(byte *)(param_2 + 0x19) = param_4 & 1;
      *(undefined4 *)((long)param_2 + 0x24) = param_5;
      *(undefined2 *)(param_2 + 5) = param_6;
      *(undefined2 *)((long)param_2 + 0x2a) = param_7;
      *(undefined2 *)((long)param_2 + 0x2c) = param_8;
      FUN_0021f54c(param_2 + 0x47,param_9);
      (**(code **)(*param_2 + 0x20))(&local_30,param_2);
      if (local_30 == 0) {
        *(undefined2 *)((long)param_2 + 0x22) = 0;
        if ((char)param_2[0x19] == '\0') {
          pcVar1 = *(code **)(*param_2 + 0x50);
        }
        else {
          *(undefined4 *)(param_2 + 6) = 1;
          FUN_002c265c(param_2);
          pcVar1 = *(code **)(*param_2 + 0x48);
        }
        (*pcVar1)(param_1,param_2);
        return;
      }
      goto LAB_002c27a4;
    }
    local_30 = 0x10c08;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_14);
LAB_002c27a4:
  FUN_002296c4(param_1,&local_30);
  return;
}

