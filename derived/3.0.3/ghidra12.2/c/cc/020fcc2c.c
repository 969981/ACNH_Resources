
void FUN_020fcc2c(byte *param_1,undefined8 param_2)

{
  FUN_038d1270(param_2,"-----");
  if ((ulong)*param_1 < 0x23) {
    FUN_038d1270(param_2,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*param_1 * 8 + 0xb0),
                 param_1[1]);
    return;
  }
  return;
}

