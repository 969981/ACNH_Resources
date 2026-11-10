
uint FUN_0017c2b0(ulong *param_1,undefined8 param_2,char *param_3)

{
  char *pcVar1;
  uint uVar2;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  uint local_34;
  
  local_34 = 0;
  local_48 = (char *)0x0;
  local_40 = 0;
  FUN_0017c370(&local_48,&local_34,&local_40,param_2);
  uVar2 = local_34;
  pcVar1 = local_48;
  if (local_34 == 0) {
    if (param_3 != (char *)0x0) {
      if (*param_3 == '\0') {
        param_3 = (char *)0x0;
      }
      else {
        strlen(param_3);
      }
    }
    pcVar1 = local_48;
    local_50 = 0;
    uVar2 = nn::ssl::Context::ImportClientPki
                      (param_1,(char *)&local_50,local_48,(uint)param_3,(uint)local_40);
  }
  if (pcVar1 != (char *)0x0) {
    operator_delete__(pcVar1);
  }
  return uVar2 & 0x3fffff;
}

