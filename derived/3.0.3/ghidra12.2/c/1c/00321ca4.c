
ulong FUN_00321ca4(long param_1,long param_2,undefined4 param_3,uint param_4,code *param_5,
                  undefined8 param_6)

{
  char cVar1;
  ulong uVar2;
  uint uVar3;
  long local_48;
  
  if (*(float *)(param_1 + 0x54) <= 0.0) {
    uVar2 = FUN_0031e094(param_2,param_3);
    if ((uVar2 & 1) != 0) {
      FUN_0032603c(*(undefined8 *)(param_2 + 0x98),param_2);
      FUN_00325f3c(*(undefined8 *)(param_2 + 0x98),param_2);
      FUN_00327be8(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x54),
                   *(undefined8 *)(param_2 + 0x98),param_2);
    }
    FUN_00322a78(param_1 + 0x188,param_2);
    uVar3 = 1;
    goto LAB_00321e54;
  }
  cVar1 = *(char *)(*(long *)(param_1 + 0x280) + 0x13);
  if (param_5 != (code *)0x0) {
    local_48 = param_2;
    uVar2 = (*param_5)(&local_48);
    if ((int)uVar2 == 1) {
      return uVar2;
    }
    if (((int)uVar2 == 2) && (*(char *)(param_2 + 0x68c) == '\0')) {
      *(undefined1 *)(param_2 + 0x68c) = 1;
    }
  }
  if (*(int *)(param_2 + 0x3c) == 0) {
    uVar2 = FUN_003264e0(*(undefined4 *)(param_1 + 0x54),*(undefined8 *)(param_2 + 0x98),param_2,
                         param_3,*(char *)(param_1 + 0x19) != '\0',*(char *)(param_1 + 0x1e) == '\0'
                         ,param_4 & 1);
    if ((uVar2 & 1) != 0) {
      if (((cVar1 != '\0') && (*(char *)(*(long *)(param_2 + 0xa0) + 0x792) == '\x02')) &&
         ((0 < *(int *)(param_2 + 0x28) || (*(long *)(*(long *)(param_2 + 0x240) + 0x348) != 0)))) {
        FUN_00321ee0(param_6,param_2);
      }
      FUN_00322a78(param_1 + 0x188,param_2);
      goto LAB_00321e44;
    }
    uVar3 = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0x48) = *(undefined4 *)(param_1 + 0x54);
    uVar2 = FUN_0031e094(param_2,param_3);
    if ((uVar2 & 1) != 0) {
      FUN_0032603c(*(undefined8 *)(param_2 + 0x98),param_2);
      FUN_00325f3c(*(undefined8 *)(param_2 + 0x98),param_2);
      FUN_00327be8(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x54),
                   *(undefined8 *)(param_2 + 0x98),param_2);
    }
    FUN_00322a78(param_1 + 0x188,param_2);
    *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
LAB_00321e44:
    uVar3 = 1;
  }
  *(int *)(param_1 + 0x290) = *(int *)(param_1 + 0x290) + 1;
LAB_00321e54:
  *(uint *)(param_1 + 0x240) =
       *(uint *)(param_1 + 0x240) | 1 << (ulong)(*(uint *)(param_2 + 0x490) & 0x1f);
  uVar2 = FUN_0031e0f8(param_2);
  if ((uVar2 & 1) != 0) {
    *(uint *)(param_1 + 0x44) =
         *(uint *)(param_1 + 0x44) | 1 << (ulong)(*(uint *)(param_2 + 0x490) & 0x1f);
  }
  uVar2 = FUN_0031e17c(param_2);
  if ((uVar2 & 1) != 0) {
    *(uint *)(param_1 + 0x48) =
         *(uint *)(param_1 + 0x48) | 1 << (ulong)(*(uint *)(param_2 + 0x490) & 0x1f);
  }
  return (ulong)(uVar3 ^ 1);
}

