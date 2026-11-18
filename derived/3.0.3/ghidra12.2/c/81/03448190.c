
void FUN_03448190(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 != 0) {
    FUN_03104170(param_2,param_1,param_1 + 0x43,param_1 + 0x86);
  }
  if (DAT_05355a60 == 0) {
    return;
  }
  lVar1 = DAT_05355a60 + 0xf08;
  lVar2 = DAT_05355a60 + 0xf18;
  lVar3 = DAT_05355a60 + 0xf28;
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_03363ed0(lVar1,param_1[1]);
  (**(code **)(param_1[0x43] + 0x18))(param_1 + 0x43);
  FUN_03363ed0(lVar2,param_1[0x44]);
  (**(code **)(param_1[0x86] + 0x18))(param_1 + 0x86);
  FUN_03363ed0(lVar3,param_1[0x87]);
  return;
}

