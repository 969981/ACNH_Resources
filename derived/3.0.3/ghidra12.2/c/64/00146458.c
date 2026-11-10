
int FUN_00146458(FILE *param_1,char *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_30 = *param_3;
  uStack_28 = param_3[1];
  local_20 = param_3[2];
  uStack_18 = param_3[3];
  iVar1 = vfprintf(param_1,param_2,&local_30);
  return iVar1;
}

