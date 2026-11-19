
bool FUN_0389fb68(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  uint local_58 [2];
  ErrorResultVariant aEStack_50 [12];
  undefined4 local_44;
  int local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_14;
  
  local_40 = 0;
  local_58[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)local_58);
  uVar2 = FUN_002ab090(*(long *)PTR_DAT_04bc1510 + 0x10,param_3,0x68);
  FUN_002bd000(local_58,uVar2,param_1,param_2);
  FUN_00229780(&local_40,local_58);
  iVar1 = local_40;
  if (local_40 != 0) {
    local_58[0] = local_58[0] & 0xffffff00;
    local_58[1] = 0;
    local_14 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_14);
    local_44 = 0;
    if (local_58[0]._0_1_ == (Result)0x0) {
      local_58[0] = CONCAT31(local_58[0]._1_3_,1);
      FUN_00229780(local_58 + 1,&local_40);
    }
  }
  return iVar1 == 0;
}

