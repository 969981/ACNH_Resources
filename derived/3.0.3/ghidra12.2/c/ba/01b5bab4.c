
bool FUN_01b5bab4(uint *param_1)

{
  if ((((*param_1 != 0) && ((*param_1 & 0xfffffff7) != 6)) ||
      ((param_1[1] != 0 && ((param_1[1] & 0xfffffff7) != 6)))) ||
     (((param_1[2] != 0 && ((param_1[2] & 0xfffffff7) != 6)) ||
      ((param_1[3] != 0 && ((param_1[3] & 0xfffffff7) != 6)))))) {
    return false;
  }
  if ((((*param_1 != 6) && (param_1[1] != 6)) && (param_1[2] != 6)) && (param_1[3] != 6)) {
    return false;
  }
  if (((*param_1 == 0xe) || (param_1[1] == 0xe)) || (param_1[2] == 0xe)) {
    return true;
  }
  return param_1[3] == 0xe;
}

