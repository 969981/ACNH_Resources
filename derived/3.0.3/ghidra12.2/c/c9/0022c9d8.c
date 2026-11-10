
void FUN_0022c9d8(undefined8 param_1,long param_2,long param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  if (*(int *)(param_2 + 8) == 0) {
    local_40 = 0x2c09;
  }
  else if (((param_3 == 0) || (param_4 == (int *)0x0)) || (iVar1 = *param_4, iVar1 == 0)) {
    local_40 = 0x10c07;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    *(long *)(param_2 + 0x18) = param_3;
    *(int *)(param_2 + 0x20) = iVar1;
    uVar2 = FUN_0017cb70(param_2,2);
    if (uVar2 < 2) {
      local_40 = 0;
      *param_4 = *(int *)(param_2 + 0x28) - (int)uVar3;
    }
    else if (uVar2 == 0xfffffffd) {
      local_40 = 0x2c03;
    }
    else {
      local_40 = 0xc0b;
    }
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}

