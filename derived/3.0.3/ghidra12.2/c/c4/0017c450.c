
uint FUN_0017c450(undefined8 param_1,undefined8 param_2)

{
  void *pvVar1;
  uint uVar2;
  undefined8 local_48;
  void *local_40;
  ulong local_38;
  uint local_14;
  
  local_14 = 0;
  local_38 = 0;
  local_40 = (void *)0x0;
  FUN_0017c370(&local_40,&local_14,&local_38,param_2);
  pvVar1 = local_40;
  uVar2 = local_14;
  if (local_14 == 0) {
    local_48 = 0;
    uVar2 = nn::ssl::Context::ImportServerPki(param_1,&local_48,local_40,local_38 & 0xffffffff,1);
  }
  if (pvVar1 != (void *)0x0) {
    operator_delete__(pvVar1);
  }
  return uVar2 & 0x3fffff;
}

