
bool FUN_0018b44c(char *param_1,char *param_2)

{
  int iVar1;
  
  if (param_1 == param_2) {
    return true;
  }
  if (param_1 == (char *)0x0) {
    param_1 = "";
    if (param_2 == "") {
      return true;
    }
    if (param_2 == (char *)0x0) {
      return true;
    }
  }
  else if (param_2 == (char *)0x0) {
    if (param_1 == "") {
      return true;
    }
    iVar1 = strcmp(param_1,"");
    return iVar1 == 0;
  }
  iVar1 = strcmp(param_1,param_2);
  return iVar1 == 0;
}

