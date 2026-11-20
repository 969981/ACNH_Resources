
void FUN_03fc57d8(long param_1,byte param_2)

{
  undefined1 uVar1;
  
  if ((*(char *)(*(long *)(param_1 + 0x45940) + 0x34710) != '\0') &&
     (*(byte *)(param_1 + 0x45a12) == param_2)) {
    return;
  }
  *(byte *)(param_1 + 0x45a12) = param_2;
  if (*(char *)(param_1 + 0x316a9e) == '\a') {
    uVar1 = 6;
    if ((param_2 & 1) != 0) {
      uVar1 = 0xf;
    }
    *(undefined1 *)(param_1 + 0x45b9a) = uVar1;
  }
  FUN_03fc56a4(param_1,param_1 + 0x45a00);
  FUN_03fc3320(param_1);
  return;
}

