
void FUN_0022519c(undefined8 param_1,undefined1 *param_2,long param_3,undefined4 *param_4,
                 uint param_5)

{
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  if (((param_3 == 0) || (param_4 == (undefined4 *)0x0)) || (param_5 < 0x10)) {
    local_40 = 0x10c07;
  }
  else {
    FUN_002284c0(param_3,*param_2);
    FUN_002284c0(param_3 + 1,param_2[1]);
    FUN_002284c0(param_3 + 2,param_2[2]);
    FUN_002284c0(param_3 + 3,param_2[3]);
    FUN_002284a0(param_3 + 4,*(undefined2 *)(param_2 + 4));
    FUN_002284c0(param_3 + 6,param_2[6]);
    FUN_002284c0(param_3 + 7,param_2[7]);
    FUN_00228480(param_3 + 8,*(undefined4 *)(param_2 + 8));
    FUN_002284c0(param_3 + 0xc,param_2[0xc]);
    FUN_002284c0(param_3 + 0xd,param_2[0xd]);
    FUN_002284c0(param_3 + 0xe,param_2[0xe]);
    FUN_002284c0(param_3 + 0xf,param_2[0xf]);
    local_40 = 0;
    *param_4 = 0x10;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}

