
void FUN_002c51d4(undefined8 param_1,long *param_2,long param_3,long param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  param_2[0xd] = param_5;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[6] = (long)PTR_FUN_04bce200;
  param_2[7] = 0;
  param_2[8] = (long)"NatDetectionJob::StepPreTest";
  (**(code **)(*param_2 + 0x10))(param_2,1);
  param_2[0xb] = param_3;
  uVar1 = FUN_00220f78(param_3);
  if ((uVar1 & 1) == 0) {
    local_40 = 0x10c08;
  }
  else {
    *(undefined2 *)(param_2 + 0x10) = 0;
    param_2[0xc] = param_4;
    lVar2 = FUN_0022033c();
    if (lVar2 != 0) {
      uVar3 = FUN_0022033c();
      FUN_00220b40(uVar3,1);
    }
    local_40 = 0;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}

