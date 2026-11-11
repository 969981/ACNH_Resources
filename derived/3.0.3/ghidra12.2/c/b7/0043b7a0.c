
undefined8 FUN_0043b7a0(char *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == '\0') {
    return 0;
  }
  if (*param_1 == '.') {
    if (param_1[1] == '\0') {
      return 0;
    }
    if ((param_1[1] == '.') && (param_1[2] == '\0')) {
      return 0;
    }
  }
  if (param_2 == 0) {
    return 1;
  }
  uVar1 = FUN_0043a5c0(param_1,param_2 + 1);
  return uVar1;
}

