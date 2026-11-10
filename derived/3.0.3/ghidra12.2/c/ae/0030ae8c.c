
void FUN_0030ae8c(undefined8 param_1,long param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  if ((((param_3 == 0) && (iVar1 = FUN_00227d94(param_4), iVar1 == 1)) &&
      (uVar2 = FUN_00227cb0(param_4), uVar2 < 9)) &&
     (((iVar1 = FUN_00227cb0(param_4), iVar1 != 0 && (iVar1 = FUN_00227d94(param_5), iVar1 == 1)) &&
      ((uVar2 = FUN_00227cb0(param_5), uVar2 < 0x41 && (iVar1 = FUN_00227cb0(param_5), iVar1 != 0)))
      ))) {
    (**(code **)(*(long *)(param_2 + 0xb30) + 0x10))(&local_40,param_2 + 0xb30,param_4);
    (**(code **)(*(long *)(param_2 + 0xb70) + 0x10))(&local_40,param_2 + 0xb70,param_5);
    local_40 = 0;
    *(uint *)(param_2 + 0xd30) = *(uint *)(param_2 + 0xd30) | 0x1000000;
  }
  else {
    local_40 = 0x10c07;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}

