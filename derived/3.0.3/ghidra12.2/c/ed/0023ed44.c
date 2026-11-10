
undefined8 FUN_0023ed44(long param_1,byte param_2)

{
  if ((param_2 - 1 < 2) && (*(int *)(param_1 + 0xd88) != 1)) {
    *(byte *)(param_1 + 0xd80) = param_2;
    *(undefined1 *)(param_1 + 0xd81) = 1;
    FUN_00220f24(param_1 + 0xd88);
    FUN_00220f78(param_1 + 0xd88);
    return 1;
  }
  return 0;
}

