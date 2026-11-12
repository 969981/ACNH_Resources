
uint FUN_0087cdbc(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  long lVar2;
  undefined4 local_24;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  local_24 = FUN_006bd550(param_2[1],0);
  lVar2 = FUN_0088c0d0(param_1 + 8,&local_24);
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = FUN_00874dd0(lVar2,lVar2,param_3,param_4,param_5);
  }
  return uVar1 & 1;
}

