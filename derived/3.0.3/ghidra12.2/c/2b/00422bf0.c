
bool FUN_00422bf0(undefined8 *param_1,char *param_2)

{
  int iVar1;
  
  if (param_2 == (char *)0x0) {
    return false;
  }
  iVar1 = strcmp((char *)*param_1,param_2);
  return iVar1 == 0;
}

