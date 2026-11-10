
void FUN_001fb68c(undefined8 param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  int local_38;
  undefined1 local_34 [4];
  undefined1 local_28 [4];
  undefined4 local_24;
  
  iVar2 = *(int *)(param_2 + 0x40);
  puVar1 = PTR_LAB_04bc0ee0;
  if (iVar2 < 0) {
    puVar1 = (undefined *)0x0;
  }
  local_24 = param_3;
  if (puVar1 == (undefined *)0x0) {
    local_34[0] = 0;
    FUN_00197478(param_1,local_34,1);
    local_38 = iVar2;
    FUN_00197478(param_1,&local_38,4);
    FUN_00197478(param_1,&local_24,4);
    return;
  }
  local_28[0] = 1;
  FUN_00197478(param_1,local_28,1);
  FUN_00197478(param_1,&local_24,4);
  FUN_001abec0(param_1,param_4);
  return;
}

