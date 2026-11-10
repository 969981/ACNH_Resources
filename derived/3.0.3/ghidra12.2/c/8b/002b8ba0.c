
void FUN_002b8ba0(undefined8 param_1,long param_2,long param_3,undefined4 param_4,undefined4 param_5
                 ,undefined8 param_6,uint param_7)

{
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  int local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  if (*(long *)(param_2 + 0x4d8) == 0) {
    if (param_3 != 0) {
      FUN_002bbb00(&local_34,param_2,"Pia SendThreadStream",param_5,param_4,param_6,0xb,param_7 & 1)
      ;
      if (local_34 == 0) {
        if (*(long *)(param_2 + 0xc0) != 0) {
          FUN_002b833c(*(long *)(param_2 + 0xc0),param_3);
        }
        *(long *)(param_2 + 0x4d8) = param_3;
        *(undefined4 *)(param_2 + 0x4e0) = 0;
        *(undefined8 *)(param_2 + 0x4e8) = 0;
        local_44 = 0;
        local_24 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
        FUN_002296c4(param_1,&local_44);
        return;
      }
      goto LAB_002b8bd8;
    }
    local_34 = 0x10c07;
  }
  else {
    local_34 = 0x10c02;
  }
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_44);
LAB_002b8bd8:
  FUN_002296c4(param_1,&local_34);
  return;
}

