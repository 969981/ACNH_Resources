
void FUN_0023fe5c(undefined8 param_1,long param_2,long param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  int local_40 [4];
  undefined4 local_24;
  
  piVar2 = &local_50;
  FUN_0023fc98(local_40);
  if (local_40[0] == 0) {
    if (param_4 == 0x10) {
      local_50 = 0;
      uVar1 = (*(uint *)(param_3 + 0xc) & 0xff00ff00) >> 8 |
              (*(uint *)(param_3 + 0xc) & 0xff00ff) << 8;
      *(uint *)(param_2 + 0x18) = uVar1 >> 0x10 | uVar1 << 0x10;
    }
    else {
      local_50 = 0x10c07;
    }
    local_24 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_24);
  }
  else {
    piVar2 = local_40;
  }
  FUN_002296c4(param_1,piVar2);
  return;
}

