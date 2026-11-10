
void FUN_002b7850(long *param_1,long *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,uint param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_70 [4];
  undefined4 local_60;
  ErrorResultVariant aEStack_5c [12];
  
  local_60 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_70[0] = 0;
  *param_1 = (long)(PTR_DAT_04bce178 + 0x10);
  param_1[1] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)local_70);
  lVar1 = (**(code **)(*param_2 + 0x70))(param_2);
  param_1[1] = lVar1;
  uVar2 = FUN_0021f454();
  lVar1 = FUN_00285d10(0x4f0,uVar2);
  if (lVar1 != 0) {
    FUN_002b7bd8(lVar1);
  }
  param_1[3] = lVar1;
  FUN_002b7c24(local_70,lVar1,param_1[1],param_4,10,param_6,param_7 & 1);
  FUN_00229780(&local_60,local_70);
  *(undefined4 *)(param_1[3] + 0xac) = 5;
  lVar1 = (**(code **)(*param_2 + 0x78))(param_2);
  param_1[2] = lVar1;
  uVar2 = FUN_0021f454();
  lVar1 = FUN_00285d10(0x4f0,uVar2);
  if (lVar1 != 0) {
    FUN_002b8b54(lVar1);
  }
  param_1[4] = lVar1;
  FUN_002b8ba0(local_70,lVar1,param_1[2],param_3,10,param_5,param_7 & 1);
  FUN_00229780(&local_60,local_70);
  *(undefined4 *)(param_1[4] + 0xac) = 5;
  return;
}

