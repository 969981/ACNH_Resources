
undefined8 FUN_0069bad0(long *param_1,undefined8 param_2,char *param_3)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  lVar5 = param_1[1];
  lVar2 = param_1[2];
  if (lVar5 - lVar2 != 0) {
    uVar6 = 0;
    cVar3 = *param_3;
    pcVar1 = param_3;
    while (cVar3 != '\0') {
      if ((int)uVar6 == 0x7ffffffe) {
        uVar6 = 0x7fffffff;
        break;
      }
      if (pcVar1[1] == '\0') {
        uVar6 = (ulong)((int)uVar6 + 1);
        break;
      }
      uVar6 = uVar6 + 2;
      pcVar1 = param_3 + uVar6;
      cVar3 = *pcVar1;
    }
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    FUN_006960d0(&local_60);
    local_28 = 0;
    FUN_00696170(&local_28);
    FUN_006960e8(&local_60,*param_1 + param_1[2],lVar5 - lVar2);
    FUN_00696178(&local_28,&local_60);
    uVar4 = FUN_006963a0(&local_28,param_2);
    if (((uVar4 & 1) != 0) &&
       (uVar6 = FUN_006963fc(&local_28,param_3,uVar6 & 0xffffffff), (uVar6 & 1) != 0)) {
      lVar5 = FUN_00696160(&local_60);
      param_1[2] = param_1[2] + lVar5;
      return 1;
    }
  }
  return 0;
}

