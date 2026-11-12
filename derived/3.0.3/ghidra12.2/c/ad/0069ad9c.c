
uint FUN_0069ad9c(long *param_1,undefined4 param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_18;
  
  lVar3 = param_1[1];
  lVar1 = param_1[2];
  if (lVar3 - lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    local_40 = 0;
    uStack_38 = 0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_006960d0(&local_50);
    local_18 = 0;
    FUN_00696170(&local_18);
    FUN_006960e8(&local_50,*param_1 + param_1[2],lVar3 - lVar1);
    FUN_00696178(&local_18,&local_50);
    uVar2 = FUN_0069677c(&local_18,param_2);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00696160(&local_50);
      param_1[2] = param_1[2] + lVar3;
      return uVar2 & 1;
    }
  }
  return uVar2 & 1;
}

