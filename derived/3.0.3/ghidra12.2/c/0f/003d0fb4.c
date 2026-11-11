
undefined8
FUN_003d0fb4(long *param_1,undefined4 param_2,undefined8 param_3,uint param_4,undefined8 param_5)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined4 local_44;
  
  uVar1 = FUN_003b8448(param_1[1]);
  if (((param_4 >> 1 & 1) != 0) &&
     (lVar2 = FUN_003d1610(param_1,uVar1,param_3,param_5,0), lVar2 == 0)) {
    return 0;
  }
  if ((param_4 >> 3 & 1) != 0) {
    lVar2 = (**(code **)(*param_1 + 0x20))(param_1,uVar1);
    if (lVar2 == 0) {
      return 0;
    }
    uVar3 = FUN_003b8704(param_1[1],param_2,&local_44);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    uVar1 = FUN_003b8448(param_1[1],local_44);
    lVar2 = FUN_003d1610(param_1,uVar1,param_3,param_5,1);
    if (lVar2 == 0) {
      return 0;
    }
  }
  return 1;
}

