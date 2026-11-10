
undefined8 * FUN_00190460(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte *pbVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 local_60;
  long local_58;
  long local_50;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  int local_30;
  undefined4 uStack_2c;
  long local_28;
  
  local_60 = param_1[5];
  local_30 = 0;
  local_40 = 0;
  uStack_38 = 0x100;
  local_50 = 0;
  local_48 = 0;
  local_28 = 0;
  local_58 = 0;
  pbVar2 = (byte *)*param_2;
  if (*pbVar2 < 0x21 && (1L << ((ulong)*pbVar2 & 0x3f) & 0x100002600U) != 0) {
    do {
      pbVar2 = pbVar2 + 1;
    } while (*pbVar2 < 0x21 && (1L << ((ulong)*pbVar2 & 0x3f) & 0x100002600U) != 0);
  }
  *param_2 = pbVar2;
  if (*pbVar2 == 0) {
    local_30 = 1;
LAB_00190618:
    local_28 = (long)pbVar2 - param_2[1];
    param_1[0xb] = CONCAT44(uStack_2c,local_30);
    param_1[0xc] = local_28;
  }
  else {
    FUN_00190640(&local_60,param_2,param_1);
    if (local_30 == 0) {
      pbVar2 = (byte *)*param_2;
      if (*pbVar2 < 0x21 && (1L << ((ulong)*pbVar2 & 0x3f) & 0x100002600U) != 0) {
        do {
          pbVar2 = pbVar2 + 1;
        } while (*pbVar2 < 0x21 && (1L << ((ulong)*pbVar2 & 0x3f) & 0x100002600U) != 0);
      }
      *param_2 = pbVar2;
      if (*pbVar2 != 0) {
        local_30 = 2;
        goto LAB_00190618;
      }
    }
    param_1[0xb] = CONCAT44(uStack_2c,local_30);
    param_1[0xc] = local_28;
  }
  if (local_30 == 0) {
    lVar3 = param_1[8];
    param_1[8] = lVar3 + -0x18;
    uVar1 = *(undefined8 *)(lVar3 + -0x18);
    uVar5 = *(undefined8 *)(lVar3 + -8);
    param_1[1] = *(undefined8 *)(lVar3 + -0x10);
    param_1[2] = uVar5;
    *param_1 = uVar1;
    *(undefined2 *)(lVar3 + -2) = 0;
  }
  lVar3 = param_1[7];
  param_1[8] = lVar3;
  local_48 = local_50;
  if (lVar3 != 0) {
    pcVar4 = *(code **)(lVar3 + -0x10);
    if (pcVar4 == (code *)0x0) {
      free((undefined8 *)(lVar3 + -0x10));
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      goto joined_r0x0019059c;
    }
    (*pcVar4)();
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
joined_r0x0019059c:
  if (local_50 != 0) {
    pcVar4 = *(code **)(local_50 + -0x10);
    if (pcVar4 == (code *)0x0) {
      free((undefined8 *)(local_50 + -0x10));
    }
    else {
      (*pcVar4)();
    }
  }
  if (local_58 != 0) {
    pcVar4 = *(code **)(local_58 + -0x10);
    if (pcVar4 == (code *)0x0) {
      free((undefined8 *)(local_58 + -0x10));
      return param_1;
    }
    (*pcVar4)();
  }
  return param_1;
}

