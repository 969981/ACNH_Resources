
void FUN_002c3bfc(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  int *piVar2;
  int local_98;
  ErrorResultVariant aEStack_94 [12];
  int local_88 [4];
  undefined4 local_78;
  ErrorResultVariant aEStack_74 [20];
  undefined2 local_60;
  undefined4 local_54;
  
  uVar1 = FUN_002212e4(param_2 + 0xc1);
  if ((((uVar1 & 1) != 0) || (uVar1 = FUN_0021fea0(param_6), (uVar1 & 1) == 0)) ||
     (uVar1 = FUN_0021fea0(param_7), (uVar1 & 1) == 0)) {
    local_88[0] = 0;
    local_78 = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)local_88);
    FUN_002296c4(param_1,&local_78);
    return;
  }
  FUN_0021f54c(param_2 + 0xd7,param_6);
  FUN_0021f54c(param_2 + 0xdb,param_7);
  FUN_0021f508(&local_78,param_6);
  local_60 = 0x8236;
  (**(code **)(*param_2 + 0x60))(local_88,param_2,param_5,&local_78,param_8);
  if (local_88[0] == 0) {
    FUN_002c51d4(&local_98,param_2 + 0xc1,param_3,param_4,param_2);
    FUN_00229780(local_88,&local_98);
    if (local_88[0] == 0) {
      local_98 = 0;
      local_54 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_94,(Result *)&local_54);
      piVar2 = &local_98;
      goto LAB_002c3ce4;
    }
  }
  piVar2 = local_88;
LAB_002c3ce4:
  FUN_002296c4(param_1,piVar2);
  FUN_0021f584(&local_78);
  return;
}

