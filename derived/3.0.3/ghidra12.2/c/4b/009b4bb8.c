
undefined8 FUN_009b4bb8(long param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  
  if (1 < *(uint *)(param_1 + 0xf5b68)) {
    return 0;
  }
  if (DAT_04c487d4 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x12 & 1) != 0) {
      return 0;
    }
  }
  if ((DAT_0537d558 != (long *)0x0) &&
     ((*(int *)(*DAT_0537d558 + 0x508) == 4 ||
      ((*(int *)(DAT_0537f040 + 8) != 0 && (**(char **)(DAT_05358908 + 0x2070) != '\0')))))) {
    return 0;
  }
  if ((0xfffffffb < param_2 - 5U) && (-1 < param_3)) {
    *(int *)(param_1 + 0xf5b78) = param_3;
    uVar2 = 1;
    if (param_3 == 0) {
      uVar2 = 2;
    }
    *(uint *)(param_1 + 0xf5b68) = uVar2;
    *(int *)(param_1 + 0xf5b6c) = param_2;
  }
  return 1;
}

