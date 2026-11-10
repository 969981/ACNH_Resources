
void FUN_002b476c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  int *piVar8;
  int local_64;
  ErrorResultVariant aEStack_60 [12];
  int local_54;
  ErrorResultVariant aEStack_50 [12];
  undefined4 local_44;
  
  if (param_3 == 0) {
    local_64 = 0;
    local_54 = 0x10c07;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_64);
    piVar8 = &local_54;
    goto LAB_002b4888;
  }
  local_64 = 0;
  local_54 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_60,(Result *)&local_54);
  FUN_002296c4(&local_54,&local_64);
  uVar2 = FUN_002284d0(param_3);
  uVar3 = FUN_002284d0(param_3 + 1);
  FUN_0021fb80(&local_64,param_2 + 8,param_3 + 2,uVar2);
  FUN_00229780(&local_54,&local_64);
  if (local_54 == 0) {
    uVar6 = FUN_0021f84c(param_2 + 8);
    lVar1 = param_3 + 2 + (uVar6 & 0xffffffff);
    FUN_0021fb80(&local_64,param_2 + 0x28,lVar1,uVar3);
    FUN_00229780(&local_54,&local_64);
    if (local_54 != 0) goto LAB_002b4840;
    uVar6 = FUN_0021f84c(param_2 + 0x28);
    lVar1 = lVar1 + (uVar6 & 0xffffffff);
    uVar5 = FUN_00228490(lVar1);
    uVar4 = FUN_002284b0(lVar1 + 4);
    FUN_0021f5a0(param_2 + 0x48,uVar5);
    *(undefined2 *)(param_2 + 0x60) = uVar4;
    uVar7 = FUN_00228470(lVar1 + 6);
    *(undefined8 *)(param_2 + 0x68) = uVar7;
    uVar5 = FUN_00228490(lVar1 + 0xe);
    *(undefined4 *)(param_2 + 0x70) = uVar5;
    uVar5 = FUN_00228490(lVar1 + 0x12);
    *(undefined4 *)(param_2 + 0x74) = uVar5;
    uVar2 = FUN_002284d0(lVar1 + 0x16);
    *(undefined1 *)(param_2 + 0x78) = uVar2;
    uVar2 = FUN_002284d0(lVar1 + 0x17);
    *(undefined1 *)(param_2 + 0x79) = uVar2;
    uVar2 = FUN_002284d0(lVar1 + 0x18);
    *(undefined1 *)(param_2 + 0x7a) = uVar2;
    uVar2 = FUN_002284d0(lVar1 + 0x19);
    *(undefined1 *)(param_2 + 0x7b) = uVar2;
    local_64 = 0;
  }
  else {
LAB_002b4840:
    local_64 = 0x10c07;
  }
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_60,(Result *)&local_44);
  piVar8 = &local_64;
LAB_002b4888:
  FUN_002296c4(param_1,piVar8);
  return;
}

