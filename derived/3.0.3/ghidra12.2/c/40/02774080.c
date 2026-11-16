
uint FUN_02774080(undefined8 param_1,void *param_2,uint param_3,uint param_4,long param_5,
                 undefined8 param_6)

{
  void *pvVar1;
  undefined8 uVar2;
  ulong uVar3;
  long local_60;
  long lStack_58;
  int local_50;
  int iStack_4c;
  int local_48;
  int iStack_44;
  uint local_40 [4];
  
  if (param_2 == (void *)0x0) {
    return 7;
  }
  if (DAT_0556ca20 == 0) {
    return 7;
  }
  if (param_3 < param_4) {
    return 7;
  }
  if (param_4 < 0x31) {
    return 7;
  }
  if (**(char **)(param_5 + 8) == '\0') {
switchD_02774110_caseD_6:
    local_40[0] = 7;
  }
  else {
    local_40[0] = FUN_026cf750(DAT_0556ca20,param_2,param_4,param_5,0);
    switch(local_40[0]) {
    case 0:
      break;
    case 1:
      local_50 = *(int *)((long)param_2 + 0x10);
      iStack_4c = *(int *)((long)param_2 + 0x14);
      pvVar1 = (void *)((long)param_2 + 0x30);
      local_48 = *(int *)((long)param_2 + 0x18);
      iStack_44 = *(int *)((long)param_2 + 0x1c);
      if ((iStack_4c == 0 && local_50 == 0) && (local_48 == 0 && iStack_44 == 0)) {
        iStack_44 = 0x48077044;
        local_48 = 0x714acb41;
        iStack_4c = 0x6c078967;
        local_50 = 1;
      }
      FUN_02774218(local_40[0],local_40,&local_50,param_6);
      uVar3 = (ulong)(int)(param_4 - 0x30);
      uVar2 = nn::crypto::DecryptAes128Cbc(pvVar1,uVar3,local_40,0x10,param_2,0x10,pvVar1,uVar3);
      FUN_02774218(uVar2,local_40,&local_50,param_6);
      FUN_007d2960(&local_60,0x10,pvVar1,uVar3,local_40,0x10);
      if (local_60 == *(long *)((long)param_2 + 0x20) &&
          lStack_58 == *(long *)((long)param_2 + 0x28)) {
        local_40[0] = 1;
      }
      else {
        local_40[0] = 6;
      }
      break;
    case 2:
      local_40[0] = 5;
      break;
    case 3:
      local_40[0] = 2;
      break;
    case 4:
      local_40[0] = 3;
      break;
    case 5:
      local_40[0] = 4;
      break;
    default:
      goto switchD_02774110_caseD_6;
    }
  }
  return local_40[0];
}

