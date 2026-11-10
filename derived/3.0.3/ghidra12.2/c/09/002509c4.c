
void FUN_002509c4(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined4 local_d8;
  ErrorResultVariant aEStack_d4 [12];
  undefined4 local_c8;
  ErrorResultVariant aEStack_c4 [124];
  undefined4 local_48 [9];
  undefined4 local_24;
  
  if (*(long *)(param_2 + 0x18) == 0) {
    local_48[0] = 0;
    local_c8 = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_c4,(Result *)local_48);
    FUN_002296c4(param_1,&local_c8);
    return;
  }
  FUN_0021f508(local_48,*(long *)(param_2 + 0x18) + 0x2c8);
  uVar1 = FUN_0021fea0(local_48);
  if ((uVar1 & 1) == 0) {
    local_d8 = 0;
    local_c8 = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_c4,(Result *)&local_d8);
    FUN_002296c4(param_1,&local_c8);
    FUN_0021f584(local_48);
    return;
  }
  FUN_002b3fa8(&local_c8);
  FUN_002b44ec(&local_c8,local_48);
  FUN_002b455c(&local_c8,1);
  FUN_002b4504(&local_c8,*(undefined4 *)(*(long *)(param_2 + 0x18) + 0x1700));
  FUN_002b450c(&local_c8,*(undefined4 *)(*(long *)(param_2 + 0x18) + 0x1704));
  FUN_002b44fc(&local_c8,*(undefined8 *)(*(long *)(param_2 + 0x18) + 0x1708));
  FUN_002b40ac(param_3,&local_c8);
  local_d8 = 0;
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_d4,(Result *)&local_24);
  FUN_002296c4(param_1,&local_d8);
  FUN_002b4104(&local_c8);
  FUN_0021f584(local_48);
  return;
}

