
undefined8 FUN_02733d7c(char *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*param_1 == '\0') {
    uVar2 = 0;
  }
  else if (param_1[1] == '\0') {
    uVar2 = 1;
  }
  else if (param_1[2] == '\0') {
    uVar2 = 2;
  }
  else if (param_1[3] == '\0') {
    uVar2 = 3;
  }
  else if (param_1[4] == '\0') {
    uVar2 = 4;
  }
  else if (param_1[5] == '\0') {
    uVar2 = 5;
  }
  else if (param_1[6] == '\0') {
    uVar2 = 6;
  }
  else {
    uVar2 = 7;
    if (param_1[7] != '\0') {
      uVar2 = 0xffffffffffffffff;
    }
  }
  uVar1 = 0;
  if ((int)uVar2 != -1) {
    uVar1 = uVar2;
  }
  return uVar1;
}

