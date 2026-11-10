
void FUN_002bce00(undefined8 param_1,long *param_2,long param_3,long param_4,undefined4 param_5)

{
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  Result *pRVar6;
  undefined4 local_6c;
  undefined1 uStack_68;
  int local_64;
  ErrorResultVariant aEStack_60 [12];
  int local_54 [4];
  undefined4 local_44;
  
  FUN_002bd02c(local_54,param_2,param_4,param_5);
  if (local_54[0] != 0) {
LAB_002bce40:
    piVar5 = local_54;
    goto LAB_002bce44;
  }
  plVar2 = (long *)FUN_002aaa54(param_2);
  if (param_3 == 0) {
    uVar3 = FUN_002ba790(DAT_04c61168);
    FUN_002b5410(&local_64,uVar3,0);
    if (local_64 != 0) goto LAB_002bcecc;
    pRVar6 = (Result *)&local_6c;
    local_64 = 0;
    local_6c = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x88))(&local_64,plVar2,param_3);
    FUN_00229780(local_54,&local_64);
    if (local_54[0] != 0) goto LAB_002bce40;
LAB_002bcecc:
    if (*(char *)((long)param_2 + 100) == '\0') {
LAB_002bcefc:
      bVar1 = false;
      local_6c = 0;
      if (param_3 != 0) goto LAB_002bcf0c;
LAB_002bcfa8:
      uStack_68 = 0;
      local_64 = (**(code **)(*param_2 + 0x18))(param_2);
      lVar4 = (**(code **)(*plVar2 + 0x78))(plVar2,&local_64,param_5,&local_6c);
    }
    else {
      FUN_002aa4a8(&local_64,plVar2,param_4,param_5);
      FUN_00229780(local_54,&local_64);
      if (local_54[0] != 0) goto LAB_002bcefc;
      param_5 = (undefined4)plVar2[0x12d];
      bVar1 = true;
      local_6c = 1;
      if (param_3 == 0) goto LAB_002bcfa8;
LAB_002bcf0c:
      uStack_68 = 0;
      local_64 = (**(code **)(*param_2 + 0x18))(param_2);
      lVar4 = (**(code **)(*plVar2 + 0x70))(plVar2,&local_64,param_3,param_5,&local_6c);
    }
    if (lVar4 != 0) {
      if (bVar1) {
        param_4 = plVar2[300];
      }
      FUN_002a9f34(param_1,plVar2,param_4);
      return;
    }
    local_44 = 0;
    pRVar6 = (Result *)&local_44;
    local_64 = 0x4c0d;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_60,pRVar6);
  piVar5 = &local_64;
LAB_002bce44:
  FUN_002296c4(param_1,piVar5);
  return;
}

