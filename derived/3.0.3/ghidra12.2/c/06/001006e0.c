
int FUN_001006e0(byte *param_1,byte *param_2,short param_3)

{
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    if ((uint)*param_1 - (uint)*param_2 != 0) break;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
    param_3 = param_3 + -1;
  }
  return (uint)*param_1 - (uint)*param_2;
}

