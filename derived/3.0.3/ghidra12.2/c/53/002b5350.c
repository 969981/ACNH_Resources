
void FUN_002b5350(undefined8 param_1,long *param_2,long param_3,undefined4 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  if ((param_3 == 0) || (uVar1 = (**(code **)(*param_2 + 0x98))(param_2,param_4), (uVar1 & 1) == 0))
  {
    local_40 = 0x10c07;
  }
  else {
    lVar2 = (**(code **)(*param_2 + 0x58))(param_2,param_4);
    if (lVar2 == 0) {
      local_40 = 0x2c0a;
    }
    else {
      FUN_00227418(param_3,lVar2 + 0x10);
      local_40 = 0;
    }
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}

