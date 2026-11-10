
void FUN_00225648(undefined8 param_1,long param_2,long param_3,int *param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  ulong uVar6;
  int local_60;
  ErrorResultVariant aEStack_5c [12];
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  uint local_38;
  undefined4 local_34;
  
  piVar5 = &local_60;
  if ((param_3 == 0) || (param_4 == (int *)0x0)) {
LAB_00225698:
    local_60 = 0;
    local_50 = 0x10c07;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_60);
  }
  else {
    iVar2 = FUN_002255a8();
    iVar3 = FUN_00225188();
    iVar4 = FUN_00226734();
    if (param_5 < (uint)(iVar3 + iVar2 + iVar4)) goto LAB_00225698;
    local_38 = 0;
    local_50 = 0;
    local_60 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_60);
    FUN_00225474(&local_60,param_2,param_3,&local_38,param_5);
    FUN_00229780(&local_50,&local_60);
    if (local_50 == 0) {
      uVar6 = (ulong)local_38;
      iVar2 = param_5 - local_38;
      FUN_00224010(&local_60,param_2 + 0x10,param_3 + uVar6,&local_38,iVar2);
      FUN_00229780(&local_50,&local_60);
      if (local_50 == 0) {
        lVar1 = param_3 + uVar6 + (ulong)local_38;
        FUN_00225a98(&local_60,param_2 + 0x3a0,lVar1,&local_38,iVar2 - local_38);
        FUN_00229780(&local_50,&local_60);
        if (local_50 == 0) {
          local_60 = 0;
          local_34 = 0;
          *param_4 = ((int)lVar1 + local_38) - (int)param_3;
          nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_34);
          goto LAB_002256bc;
        }
      }
    }
  }
  piVar5 = &local_50;
LAB_002256bc:
  FUN_002296c4(param_1,piVar5);
  return;
}

