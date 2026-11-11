
undefined8
FUN_003ba970(long param_1,undefined8 param_2,ulong param_3,long param_4,long param_5,uint param_6,
            undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int local_7c;
  undefined4 local_78;
  int local_74;
  int local_68;
  undefined1 local_5c;
  ulong local_58;
  ulong local_38;
  
  if ((param_3 & 0xfff) != 0) {
    return 0;
  }
  param_4 = param_3 + param_4;
  local_58 = param_3;
  uVar1 = FUN_003baba0(param_1,param_2,&local_58,param_4);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  uVar1 = FUN_003b8780(param_2,&local_7c);
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_003e2350(param_1 + 0x1f8,local_74,&local_58,param_4,param_7,param_8);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x2fa) = local_5c;
    uVar1 = FUN_003bbdc0(param_1 + 0x50,local_7c,&local_58,param_4);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x2fa) == '\0') {
      uVar1 = FUN_003e0560(param_1 + 0x138,local_68,&local_58,param_4);
    }
    else {
      uVar1 = FUN_003e1800(param_1 + 0x1c0,local_68,&local_58,param_4);
    }
    if ((uVar1 & 1) == 0) {
      return 0;
    }
    uVar1 = FUN_003bc360(param_1 + 0x50,local_78,&local_58,param_4);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  if (0 < (int)param_6) {
    if ((local_58 & 0x3f) != 0) {
      return 0;
    }
    uVar1 = local_58 + ((ulong)param_6 * 0x70 + 0x3f & 0xffffffffc0);
    if (0 < (long)(uVar1 - param_4)) {
      return 0;
    }
    lVar2 = 0;
    lVar3 = 0;
    *(ulong *)(param_1 + 0x2c0) = local_58;
    *(uint *)(param_1 + 0x2b8) = param_6;
    local_58 = uVar1;
    do {
      FUN_003bbc94(*(long *)(param_1 + 0x2c0) + lVar2);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x70;
    } while (lVar3 < *(int *)(param_1 + 0x2b8));
  }
  if (param_5 == 0) {
    return 1;
  }
  if ((local_58 & 0x3f) == 0) {
    local_38 = local_58;
    uVar1 = param_5 + 3U & 0xfffffffffffffffc;
    local_58 = local_58 + uVar1 * ((long)local_68 + (long)local_7c + (long)local_74);
    if (*(char *)(param_1 + 0x2fa) == '\0') {
      FUN_003e0a90(param_1 + 0x138,&local_38,uVar1);
    }
    else {
      FUN_003e1b70(param_1 + 0x1c0,&local_38,uVar1);
    }
    FUN_003bc3e0(param_1 + 0x50,&local_38,uVar1);
    FUN_003e2ad0(param_1 + 0x1f8,&local_38,uVar1);
    *(ulong *)(param_1 + 0x2b0) = uVar1;
    if ((long)(local_38 - param_4) < 1) {
      return 1;
    }
  }
  return 0;
}

