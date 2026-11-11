
undefined8 FUN_003dc0a8(char *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_3 + 8) != '\0') {
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_3 + 0x18);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    return 1;
  }
  if (((*param_1 == '\0') || (*(long *)(param_1 + 8) == 0)) ||
     (uVar1 = FUN_003dbde0(param_1,*(undefined4 *)(param_1 + 0x18),param_2), (uVar1 & 1) == 0)) {
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x38);
    return 0;
  }
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x30);
  return 1;
}

