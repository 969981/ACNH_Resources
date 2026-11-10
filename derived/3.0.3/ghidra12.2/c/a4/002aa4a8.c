
void FUN_002aa4a8(undefined8 param_1,long param_2,undefined8 param_3,uint param_4)

{
  int *piVar1;
  int local_54;
  ErrorResultVariant aEStack_50 [12];
  int local_44 [4];
  undefined4 local_34;
  
  FUN_00229244(local_44,*(undefined8 *)(param_2 + 0x950),*(undefined8 *)(param_2 + 0x960),0x5a0,5,
               0xc,5);
  FUN_0022939c(&local_54,*(undefined8 *)(param_2 + 0x950),param_3,param_4);
  FUN_00229780(local_44,&local_54);
  if (local_44[0] == 0) {
    FUN_002294cc(&local_54,*(undefined8 *)(param_2 + 0x950),(uint *)(param_2 + 0x968));
    FUN_00229780(local_44,&local_54);
    FUN_00229378(*(undefined8 *)(param_2 + 0x950));
    if (local_44[0] == 0) {
      if (*(uint *)(param_2 + 0x968) < param_4) {
        local_54 = 0;
      }
      else {
        local_54 = 0x6c1b;
      }
      local_34 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_34);
      piVar1 = &local_54;
    }
    else {
      piVar1 = local_44;
    }
  }
  else {
    FUN_00229378(*(undefined8 *)(param_2 + 0x950));
    piVar1 = local_44;
  }
  FUN_002296c4(param_1,piVar1);
  return;
}

