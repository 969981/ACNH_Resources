
void FUN_002adbec(undefined8 param_1,long param_2,undefined2 param_3,undefined2 param_4,int param_5)

{
  int *piVar1;
  long lVar2;
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  int local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  piVar1 = &local_50;
  if (DAT_0411003c == param_5) {
    local_50 = 0;
    local_40 = 0x10c07;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_50);
    piVar1 = &local_40;
  }
  else {
    *(int *)(param_2 + 0x648) = param_5;
    local_40 = 0;
    local_50 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_50);
    FUN_002a5950(&local_50,param_2 + 0x18,param_3);
    FUN_00229780(&local_40,&local_50);
    if (local_40 == 0) {
      FUN_002a5a80(&local_50,param_2 + 0x38,param_4);
      FUN_00229780(&local_40,&local_50);
      if (local_40 == 0) {
        local_50 = 0;
        local_24 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_24);
      }
      else {
        lVar2 = *(long *)(param_2 + 0x20);
        if (lVar2 != 0) {
          FUN_00285e00(lVar2);
          FUN_00285dc0(lVar2);
          *(undefined8 *)(param_2 + 0x20) = 0;
        }
        *(undefined4 *)(param_2 + 0x28) = 0;
        piVar1 = &local_40;
      }
    }
    else {
      piVar1 = &local_40;
    }
  }
  FUN_002296c4(param_1,piVar1);
  return;
}

