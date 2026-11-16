
void FUN_0283bde0(undefined4 *param_1,undefined1 *param_2,undefined1 *param_3,undefined4 *param_4,
                 long param_5,long param_6,long param_7,long param_8,long *param_9,long param_10)

{
  ulong uVar1;
  undefined4 uVar2;
  char local_18 [4];
  undefined4 local_14;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
  }
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if ((((param_10 == 0) || (param_5 == 0)) || (param_6 == 0)) ||
     (((param_7 == 0 || (param_8 == 0)) || (param_9 == (long *)0x0)))) {
    if (param_1 == (undefined4 *)0x0) {
      return;
    }
    local_14 = 7;
    goto LAB_0283bef8;
  }
  local_14 = 0;
  local_18[0] = '\0';
  FUN_0283bffc(&local_14,local_18);
  if (local_18[0] != '\0') {
    uVar1 = (**(code **)(*param_9 + 0x18))(param_9);
    if ((uVar1 & 1) == 0) {
      uVar1 = (**(code **)(*param_9 + 0x10))(param_9);
      if ((uVar1 & 1) == 0) {
        if (param_4 != (undefined4 *)0x0) {
          uVar2 = 2;
LAB_0283beec:
          *param_4 = uVar2;
        }
      }
      else {
        uVar1 = (**(code **)(*param_9 + 0x20))(param_9);
        if ((uVar1 & 1) != 0) {
          if (param_4 != (undefined4 *)0x0) {
            uVar2 = 3;
            goto LAB_0283bec8;
          }
          goto LAB_0283becc;
        }
        if (param_4 != (undefined4 *)0x0) {
          uVar2 = 4;
          goto LAB_0283beec;
        }
      }
      if (param_1 == (undefined4 *)0x0) {
        return;
      }
      local_14 = 6;
      goto LAB_0283bef8;
    }
    if (param_4 != (undefined4 *)0x0) {
      uVar2 = 1;
LAB_0283bec8:
      *param_4 = uVar2;
    }
  }
LAB_0283becc:
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
LAB_0283bef8:
  *param_1 = local_14;
  return;
}

