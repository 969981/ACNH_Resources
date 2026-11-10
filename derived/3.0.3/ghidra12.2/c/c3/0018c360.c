
void FUN_0018c360(undefined8 *param_1,char *param_2,ulong param_3)

{
  strncpy(param_2,(char *)*param_1,param_3 & 0xffff);
  param_2[(param_3 & 0xffff) - 1] = '\0';
  return;
}

