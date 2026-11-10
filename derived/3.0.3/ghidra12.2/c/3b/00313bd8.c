
bool FUN_00313bd8(long param_1,byte param_2)

{
  if (param_2 < 0x65) {
    *(byte *)(param_1 + 0xa4) = param_2;
  }
  return param_2 < 0x65;
}

