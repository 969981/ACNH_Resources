
void FUN_00295dac(undefined8 param_1,long *param_2,int param_3,long param_4,uint param_5,
                 long param_6)

{
  int *piVar1;
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  int local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  piVar1 = &local_50;
  if ((((param_3 == 9) && (param_4 != 0)) && ((param_5 & 0xffff) != 0)) &&
     (((param_5 & 0xffff) <= *(uint *)(param_2 + 0x1c) && (param_6 != 0)))) {
    if (*(long *)(DAT_04c60f48 + 0xf0) == param_6) {
      local_40 = 0x10c08;
      goto LAB_00295e1c;
    }
    (**(code **)(*param_2 + 0x88))(&local_40,param_2,9,param_4,param_5,param_6);
    if (local_40 == 0) {
      *(undefined1 *)((long)param_2 + 0xf4) = 0;
      param_2[0x14] = param_6;
      *(undefined1 *)((long)param_2 + 0xf6) = 0;
      *(undefined4 *)(param_2 + 0x12) = 9;
      local_50 = 0;
      local_24 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_24);
      goto LAB_00295e38;
    }
  }
  else {
    local_40 = 0x10c07;
LAB_00295e1c:
    local_50 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_50);
  }
  piVar1 = &local_40;
LAB_00295e38:
  FUN_002296c4(param_1,piVar1);
  return;
}

