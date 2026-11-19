
void FUN_03852f50(long param_1,undefined8 param_2,undefined4 param_3,uint param_4)

{
  if (*(char *)(param_1 + 0x2c0) != '\0') {
    *(undefined1 *)(param_1 + 0x2c0) = 0;
    FUN_03855b20(param_1 + 0xc0,0);
  }
  FUN_0384f8c0(param_1,param_2,param_3,param_4 & 1);
  return;
}

