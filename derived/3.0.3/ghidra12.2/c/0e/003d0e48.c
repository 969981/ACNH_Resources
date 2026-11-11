
undefined8
FUN_003d0e48(long param_1,undefined4 param_2,undefined8 param_3,uint param_4,undefined8 param_5)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined2 local_44;
  
  if ((param_4 & 1) != 0) {
    uVar1 = FUN_003b8448(*(undefined8 *)(param_1 + 8),param_2);
    lVar2 = FUN_003d1610(param_1,uVar1,param_3,param_5,0);
    if (lVar2 == 0) {
      return 0;
    }
  }
  if ((param_4 & 0xc) == 0) {
    return 1;
  }
  local_5c = 0;
  local_48 = 0;
  local_44 = 0;
  local_58 = 0xffffffffffffffff;
  local_50 = 0xffffffffffffffff;
  uVar3 = FUN_003b8544(*(undefined8 *)(param_1 + 8),&local_5c,param_2);
  if ((uVar3 & 1) != 0) {
    if ((((int)local_58 == -1) ||
        (uVar3 = FUN_003d12e0(param_1,local_58 & 0xffffffff,param_3,param_4,param_5),
        (uVar3 & 1) != 0)) &&
       ((local_58._4_4_ == -1 ||
        (uVar3 = FUN_003d12e0(param_1,local_58._4_4_,param_3,param_4,param_5), (uVar3 & 1) != 0))))
    {
      if ((((int)local_50 == -1) ||
          (uVar3 = FUN_003d12e0(param_1,local_50 & 0xffffffff,param_3,param_4,param_5),
          (uVar3 & 1) != 0)) &&
         ((local_50._4_4_ == -1 ||
          (uVar3 = FUN_003d12e0(param_1,local_50._4_4_,param_3,param_4,param_5), (uVar3 & 1) != 0)))
         ) {
        return 1;
      }
    }
  }
  return 0;
}

