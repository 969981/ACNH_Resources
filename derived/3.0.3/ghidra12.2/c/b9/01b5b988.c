
bool FUN_01b5b988(int *param_1)

{
  if ((((*param_1 != 0) && (*param_1 != 0xe)) && (*param_1 != 5)) ||
     (((((param_1[1] != 0 && (param_1[1] != 0xe)) && (param_1[1] != 5)) ||
       (((param_1[2] != 0 && (param_1[2] != 0xe)) && (param_1[2] != 5)))) ||
      (((param_1[3] != 0 && (param_1[3] != 0xe)) && (param_1[3] != 5)))))) {
    return false;
  }
  if (((*param_1 != 5) && (param_1[1] != 5)) && ((param_1[2] != 5 && (param_1[3] != 5)))) {
    return false;
  }
  if (((*param_1 == 0xe) || (param_1[1] == 0xe)) || (param_1[2] == 0xe)) {
    return true;
  }
  return param_1[3] == 0xe;
}

