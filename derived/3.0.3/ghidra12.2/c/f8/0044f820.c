
byte * FUN_0044f820(byte *param_1)

{
  long lVar1;
  byte *pbVar2;
  
  for (; (param_1 != (byte *)0x0 && ((*param_1 & 1) == 0)); param_1 = *(byte **)(param_1 + 8)) {
  }
  lVar1 = FUN_004270a0(param_1);
  if ((lVar1 == 0) || (pbVar2 = (byte *)FUN_00429040(), pbVar2 == (byte *)0x0)) {
    return param_1;
  }
  return pbVar2;
}

