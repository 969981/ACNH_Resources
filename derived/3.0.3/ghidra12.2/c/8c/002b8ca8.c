
void FUN_002b8ca8(int *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined4 local_60;
  ErrorResultVariant aEStack_5c [28];
  undefined4 local_34;
  
  lVar1 = param_2 + 8;
  lVar4 = FUN_002a925c(lVar1,0);
  if (lVar4 == 0) {
    FUN_002a92c4(lVar1);
    local_34 = 0;
    local_60 = 0x2c09;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_34);
    FUN_002296c4(param_1,&local_60);
    return;
  }
  lVar6 = *(long *)(param_2 + 0x4e8);
  local_60 = 0;
  *(int *)(param_2 + 0x4e0) = *(int *)(param_2 + 0x4e0) + 1;
  uVar2 = *(uint *)(lVar4 + 0x5f8);
  *param_1 = 0;
  *(ulong *)(param_2 + 0x4e8) = lVar6 + (ulong)uVar2;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 1),(Result *)&local_60);
  FUN_0021f4e0(&local_60);
  uVar5 = FUN_002bc160(param_2,&local_60);
  FUN_0021f584(&local_60);
  if ((uVar5 & 1) != 0) {
    FUN_002a92dc(lVar1);
    local_60 = 0;
    local_34 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_34);
    FUN_00229780(param_1,&local_60);
    return;
  }
  if (*(long *)(param_2 + 0xc0) == 0) {
    (**(code **)(**(long **)(param_2 + 0x4d8) + 0x38))(&local_60,*(long **)(param_2 + 0x4d8),lVar4);
    FUN_00229780(param_1,&local_60);
    iVar3 = *param_1;
  }
  else {
    FUN_002b8518(&local_60,*(long *)(param_2 + 0xc0),lVar4);
    FUN_00229780(param_1,&local_60);
    iVar3 = *param_1;
  }
  if (iVar3 == 0) {
    FUN_002a92dc(lVar1);
    return;
  }
  local_34 = 0;
  local_60 = 0x4c0d;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_34);
  return;
}

