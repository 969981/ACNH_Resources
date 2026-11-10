
void FUN_001f7340(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined *local_48 [5];
  undefined1 auStack_18 [8];
  
  uVar1 = FUN_0018dab4(param_2);
  local_48[0]._0_1_ = uVar1;
  FUN_00197478(param_1,local_48,1);
  uVar2 = FUN_0018dab4(param_2);
  switch(uVar2) {
  case 1:
    local_48[0] = (undefined *)FUN_0018dadc(param_2);
    break;
  case 2:
    local_48[0] = (undefined *)FUN_0018db1c(param_2);
    break;
  case 3:
    uVar1 = FUN_0018db34(param_2);
    local_48[0] = (undefined *)(CONCAT71(local_48[0]._1_7_,uVar1) & 0xffffffffffffff01);
    FUN_001975e4(param_1,local_48);
    return;
  case 4:
    FUN_0018db4c(local_48,param_2);
    FUN_001f7044(param_1,local_48);
    local_48[0] = PTR_DAT_04bc0ec8 + 0x10;
    FUN_0018b1a0(local_48);
    return;
  case 5:
    FUN_0018dba4(auStack_18,param_2);
    local_48[0] = (undefined *)FUN_0018679c(auStack_18);
    break;
  case 6:
    local_48[0] = (undefined *)FUN_0018dabc(param_2);
    break;
  default:
    return;
  }
  FUN_00197478(param_1,local_48,8);
  return;
}

