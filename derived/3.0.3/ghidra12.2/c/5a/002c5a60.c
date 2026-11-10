
void FUN_002c5a60(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,byte param_11)

{
  ulong uVar1;
  int *piVar2;
  int local_a8;
  ErrorResultVariant aEStack_a4 [12];
  int local_98 [4];
  undefined4 local_88;
  ErrorResultVariant aEStack_84 [20];
  undefined2 local_70;
  undefined4 local_64;
  
  uVar1 = FUN_002212e4(param_2 + 0xc1);
  if ((uVar1 & 1) != 0) {
LAB_002c5b90:
    local_98[0] = 0;
    local_88 = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_84,(Result *)local_98);
    FUN_002296c4(param_1,&local_88);
    return;
  }
  FUN_002b415c(param_2 + 0xdf,param_9);
  FUN_002b415c(param_2 + 0xef,param_10);
  *(byte *)(param_2 + 0xff) = param_11 & 1;
  uVar1 = FUN_0021fea0(param_6);
  if (((uVar1 & 1) == 0) || (uVar1 = FUN_0021fea0(param_7), (uVar1 & 1) == 0)) goto LAB_002c5b90;
  FUN_0021f54c(param_2 + 0xd7,param_6);
  FUN_0021f54c(param_2 + 0xdb,param_7);
  FUN_0021f508(&local_88,param_6);
  local_70 = 0x8236;
  (**(code **)(*param_2 + 0x60))(local_98,param_2,param_5,&local_88,param_8);
  if (local_98[0] == 0) {
    FUN_002c51d4(&local_a8,param_2 + 0xc1,param_3,param_4,param_2);
    FUN_00229780(local_98,&local_a8);
    if (local_98[0] == 0) {
      local_a8 = 0;
      local_64 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_a4,(Result *)&local_64);
      piVar2 = &local_a8;
      goto LAB_002c5b7c;
    }
  }
  piVar2 = local_98;
LAB_002c5b7c:
  FUN_002296c4(param_1,piVar2);
  FUN_0021f584(&local_88);
  return;
}

