
undefined8 FUN_00148568(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x1e0) != '\0') {
    return 8;
  }
  uVar1 = FUN_00147350();
  if ((int)uVar1 == 0) {
    FUN_0015183c(param_2,0);
    if (*(int *)(param_2 + 0x60) != 0xe) {
      *(undefined4 *)(param_2 + 0x60) = 0xe;
    }
    uVar1 = 0;
    *(undefined8 *)(param_2 + 0x10) = param_3;
    *(uint *)(param_2 + 0x1c0) = *(uint *)(param_2 + 0x1c0) | 1;
  }
  return uVar1;
}

