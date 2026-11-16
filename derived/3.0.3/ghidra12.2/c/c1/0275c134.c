
bool FUN_0275c134(int *param_1)

{
  bool bVar1;
  
  if (param_1[7] == 0 || *param_1 == 0) {
    return true;
  }
  bVar1 = true;
  if (((((param_1[0x15] != 0) && (param_1[0xe] != 0)) && (param_1[0x23] != 0)) &&
      (((param_1[0x1c] != 0 && (param_1[0x31] != 0)) &&
       ((param_1[0x2a] != 0 && ((param_1[0x3f] != 0 && (param_1[0x38] != 0)))))))) &&
     ((param_1[0x4d] != 0 &&
      (((((param_1[0x46] != 0 && (param_1[0x5b] != 0)) && (param_1[0x54] != 0)) &&
        ((param_1[0x69] != 0 && (param_1[0x62] != 0)))) &&
       ((param_1[0x77] != 0 && (param_1[0x70] != 0)))))))) {
    bVar1 = param_1[0x85] == 0 || param_1[0x7e] == 0;
  }
  return bVar1;
}

