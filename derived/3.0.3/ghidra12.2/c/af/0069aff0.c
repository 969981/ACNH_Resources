
uint FUN_0069aff0(long *param_1,char *param_2)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar5 = param_1[1];
  lVar2 = param_1[2];
  if (lVar5 - lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar6 = 0;
    cVar3 = *param_2;
    pcVar1 = param_2;
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
      pcVar1 = param_2 + uVar6;
      cVar3 = *pcVar1;
    }
    local_40 = 0;
    uStack_38 = 0;
    local_50 = 0;
    uStack_48 = 0;
    FUN_006960d0(&local_50);
    local_58 = 0;
    FUN_00696170(&local_58);
    FUN_006960e8(&local_50,*param_1 + param_1[2],lVar5 - lVar2);
    FUN_00696178(&local_58,&local_50);
    uVar4 = FUN_006963fc(&local_58,param_2,uVar6 & 0xffffffff);
    if ((uVar4 & 1) != 0) {
      lVar5 = FUN_00696160(&local_50);
      param_1[2] = param_1[2] + lVar5;
      return uVar4 & 1;
    }
  }
  return uVar4 & 1;
}

