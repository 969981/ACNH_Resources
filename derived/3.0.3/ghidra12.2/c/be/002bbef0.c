
void FUN_002bbef0(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  if (*(int *)(param_2 + 0x15) == 1) {
    if (param_2[0x18] != 0) {
      FUN_002b8350();
    }
    FUN_002a9164(param_2 + 1);
    local_40 = 0;
    local_24 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
    FUN_00229780(param_2 + 0x16,&local_40);
    *(undefined4 *)(param_2 + 6) = 0;
    (**(code **)*param_2)(param_2);
    if (*(int *)(param_2 + 0x15) != 2) {
      *(undefined4 *)(param_2 + 0x15) = 0x12;
      FUN_002904f0(param_2 + 0xc);
      if (*(int *)(param_2 + 0x15) != 2) {
        lVar1 = *(long *)PTR_DAT_04bcd020;
        do {
          FUN_00290904(lVar1 / 10000);
          if (*(int *)(param_2 + 0x15) == 3) break;
        } while (*(int *)(param_2 + 0x15) != 2);
      }
    }
    local_40 = 0;
  }
  else {
    local_40 = 0x10c08;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}

