
undefined8 FUN_01dfd158(long param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x10b) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  if (*(char *)(param_1 + 0x108) == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x109) == '\0') {
    return 0;
  }
  if (*(long *)(param_1 + 0xf0) != 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x608) != 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x2e8) == 0) {
    return 0;
  }
  if (9 < *param_2) {
    return 0;
  }
  if ((char)param_2[2] == '\0') {
    if (param_2[1] < 7) {
      uVar2 = FUN_01dfda54(param_1,param_1 + 0x2d8);
      goto joined_r0x01dfd200;
    }
  }
  else {
    uVar2 = FUN_01dfd2b4(param_1,param_1 + 0x2d8,param_2[1]);
joined_r0x01dfd200:
    if ((uVar2 & 1) == 0) goto LAB_01dfd25c;
  }
  if ((char)param_2[2] == '\0') {
    uVar2 = FUN_01d31030(*(undefined8 *)(param_1 + 0x600),param_2[1],param_1 + 0x2e8);
  }
  else {
    uVar2 = FUN_01d303e0();
  }
  if ((uVar2 & 1) != 0) {
    uVar1 = param_2[2];
    uVar3 = FUN_038aa4a0(0x19600,*(undefined8 *)(param_1 + 0x50),0x10);
    if ((char)uVar1 == '\0') {
      FUN_01dfe418(uVar3,param_2[1],*(undefined8 *)(param_1 + 0x50));
    }
    else {
      FUN_01dfe32c(uVar3,param_2[1],*(undefined8 *)(param_1 + 0x50));
    }
    *(undefined8 *)(param_1 + 0xf0) = uVar3;
    uVar1 = param_2[2];
    *(undefined8 *)(param_1 + 0x628) = *(undefined8 *)param_2;
    *(char *)(param_1 + 0x630) = (char)uVar1;
    *(undefined4 *)(param_1 + 0x2d4) = 7;
    FUN_01dfccb4(param_1,6);
    return 1;
  }
LAB_01dfd25c:
  FUN_01e084b0(param_1);
  return 0;
}

