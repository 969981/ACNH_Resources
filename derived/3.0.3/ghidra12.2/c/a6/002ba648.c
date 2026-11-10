
void FUN_002ba648(int *param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  if (param_3 == 0) {
LAB_002ba69c:
    if (param_4 != 0) {
      if (*(long *)(param_2 + 0x90) == 0) goto LAB_002ba704;
      FUN_002a8f40(param_1,*(long *)(param_2 + 0x90),param_4);
      if (*param_1 != 0) {
        return;
      }
    }
    if (param_5 != 0) {
      if (*(long *)(param_2 + 0x98) == 0) goto LAB_002ba704;
      FUN_002a8f40(param_1,*(long *)(param_2 + 0x98),param_5);
      if (*param_1 != 0) {
        return;
      }
    }
    if (param_6 != 0) {
      if (*(long *)(param_2 + 0xa0) == 0) goto LAB_002ba704;
      FUN_002a8f40(param_1,*(long *)(param_2 + 0xa0),param_6);
      if (*param_1 != 0) {
        return;
      }
    }
    local_44 = 0;
  }
  else {
    if (*(long *)(param_2 + 0x88) != 0) {
      FUN_002a8f40(param_1);
      if (*param_1 != 0) {
        return;
      }
      goto LAB_002ba69c;
    }
LAB_002ba704:
    local_44 = 0x10c08;
  }
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
  FUN_002296c4(param_1,&local_44);
  return;
}

