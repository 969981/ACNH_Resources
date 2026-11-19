
void FUN_03852f00(long param_1,undefined8 param_2)

{
  if (((*(char *)(param_1 + 0x2c0) != '\0') && (*(char *)(param_1 + 0xae) != '\0')) &&
     (*(char *)(param_1 + 0xb4) == '\0')) {
    *(undefined1 *)(param_1 + 0x2c0) = 0;
    FUN_03855b20(param_1 + 0xc0,0);
  }
  FUN_0384f3b0(param_1,param_2);
  return;
}

