
void FUN_004297c0(undefined8 *param_1,char *param_2)

{
  size_t sVar1;
  
  *param_1 = param_2;
  if (param_2 == (char *)0x0) {
    param_1[1] = 0;
    return;
  }
  sVar1 = strlen(param_2);
  param_1[1] = param_2 + sVar1;
  return;
}

