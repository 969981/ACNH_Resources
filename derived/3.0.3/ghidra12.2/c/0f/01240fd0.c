
uint FUN_01240fd0(byte param_1,byte param_2,byte param_3,byte param_4)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((((param_1 < 3) && (param_2 < 3)) && (param_3 < 3)) && (param_4 < 3)) {
    uVar1 = (uint)(byte)(&DAT_041749e0)[param_1] |
            ((uint)(byte)(&DAT_041749e0)[param_3] << 2 | (uint)(byte)(&DAT_041749e0)[param_4] << 4 |
            (uint)(byte)(&DAT_041749e0)[param_2]) << 2;
  }
  return uVar1;
}

