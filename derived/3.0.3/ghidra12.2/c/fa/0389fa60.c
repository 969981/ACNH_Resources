
undefined8 FUN_0389fa60(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  uint local_68 [2];
  ErrorResultVariant aEStack_60 [12];
  undefined4 local_54;
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  undefined4 local_24;
  
  local_50 = 0;
  local_68[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)local_68);
  lVar4 = *(long *)PTR_DAT_04bc1510;
  uVar1 = FUN_002ab090(lVar4 + 0x10,param_4,0x68);
  plVar2 = (long *)FUN_002ba790(lVar4);
  lVar4 = (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  uVar3 = 0;
  if (lVar4 != 0) {
    FUN_002bcda8(local_68,uVar1,param_1,param_2,param_3);
    FUN_00229780(&local_50,local_68);
    if (local_50 == 0) {
      uVar3 = 1;
    }
    else {
      local_68[0] = local_68[0] & 0xffffff00;
      local_68[1] = 0;
      local_24 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_60,(Result *)&local_24);
      local_54 = 0;
      if (local_68[0]._0_1_ == (Result)0x0) {
        local_68[0] = CONCAT31(local_68[0]._1_3_,1);
        FUN_00229780(local_68 + 1,&local_50);
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}

