
undefined8 FUN_0069b1d4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar3 = param_1[1];
  lVar1 = param_1[2];
  if (lVar3 - lVar1 != 0) {
    local_40 = 0;
    uStack_38 = 0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_006960d0(&local_50);
    local_58 = 0;
    FUN_00696170(&local_58);
    FUN_006960e8(&local_50,*param_1 + param_1[2],lVar3 - lVar1);
    FUN_00696178(&local_58,&local_50);
    uVar2 = FUN_006963a0(&local_58,param_2);
    if (((uVar2 & 1) != 0) && (uVar2 = FUN_00696180(&local_58,param_3), (uVar2 & 1) != 0)) {
      lVar3 = FUN_00696160(&local_50);
      param_1[2] = param_1[2] + lVar3;
      return 1;
    }
  }
  return 0;
}

