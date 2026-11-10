
void FUN_0026a6d4(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  int local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  local_34 = 0;
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_44);
  if (((param_3 == (int *)0x0) || (*param_3 != 1)) && (*(int *)(param_2 + 0x14) != 1)) {
    lVar2 = FUN_002ba790(DAT_04c61168);
    if ((*(long *)(lVar2 + 0x98) == 0) &&
       ((iVar1 = FUN_002212bc(*param_2), iVar1 == 0 || (iVar1 = FUN_002212bc(*param_2), iVar1 == 5))
       )) {
      FUN_002611a0(&local_44,*param_2,param_3);
      FUN_00229780(&local_34,&local_44);
      if (local_34 == 0) {
        FUN_002211bc(*param_2,1);
      }
      FUN_002296c4(param_1,&local_34);
      return;
    }
  }
  local_24 = 0;
  local_44 = 0x10c08;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
  FUN_002296c4(param_1,&local_44);
  return;
}

