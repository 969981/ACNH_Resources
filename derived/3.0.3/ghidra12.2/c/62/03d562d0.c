
void FUN_03d562d0(long *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_60;
  undefined1 *local_58;
  undefined4 local_50;
  undefined1 local_4c [31];
  undefined1 local_2d;
  int local_28;
  undefined1 auStack_24 [4];
  
  local_50 = 0x20;
  local_58 = local_4c;
  local_2d = 0;
  local_4c[0] = 0;
  local_60 = PTR_DAT_04bb2028 + 0x10;
  if (param_4 == 0) {
    puVar3 = &DAT_040c7be9;
  }
  else {
    ppuVar1 = &PTR_DAT_04b8f5e8;
    if (param_4 != 1) {
      ppuVar1 = &PTR_DAT_04b8f598;
    }
    puVar3 = ppuVar1[(long)param_3 + -1];
  }
  local_28 = param_4;
  FUN_038d1270(&local_60,puVar3,param_2);
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar4 = param_1[1];
  lVar2 = param_1[2];
  (**(code **)(local_60 + 0x18))(&local_60);
  FUN_038d4900(auStack_24,lVar4,(int)lVar2,local_58,0xffffffff);
  return;
}

