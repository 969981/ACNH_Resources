
bool FUN_02b9cdc4(byte param_1,byte param_2,byte param_3,byte param_4,byte param_5,byte param_6)

{
  if ((param_1 == param_3) && (param_3 != param_5)) {
    return param_4 <= param_2;
  }
  if ((param_1 == param_5) && (param_3 != param_5)) {
    return param_2 <= param_6;
  }
  if ((((param_1 == param_5) && (param_1 == param_3)) && (param_4 <= param_2)) &&
     ((param_3 == param_5 && (param_2 <= param_6)))) {
    return true;
  }
  if (param_3 < param_5) {
    if ((param_3 <= param_1) && (param_1 <= param_5)) {
      return true;
    }
  }
  else if (param_3 != param_5) {
    if (param_3 <= param_1 && param_1 < 0xd) {
      return true;
    }
    if ((byte)(param_1 - 1) < param_5) {
      return true;
    }
  }
  return false;
}

