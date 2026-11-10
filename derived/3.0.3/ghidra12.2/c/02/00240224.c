
void FUN_00240224(undefined8 param_1,long param_2,long param_3,uint *param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int local_54;
  ErrorResultVariant aEStack_50 [12];
  int local_44 [4];
  undefined4 local_34;
  
  FUN_0023fc04(local_44);
  if (local_44[0] == 0) {
    if (param_5 < 0x10) {
      local_54 = 0x10c07;
    }
    else {
      uVar1 = *param_4;
      local_54 = 0;
      uVar2 = (*(uint *)(param_2 + 0x18) & 0xff00ff00) >> 8 |
              (*(uint *)(param_2 + 0x18) & 0xff00ff) << 8;
      *(uint *)(param_3 + (ulong)uVar1) = uVar2 >> 0x10 | uVar2 << 0x10;
      *param_4 = ((int)(uint *)(param_3 + (ulong)uVar1) - (int)param_3) + 4;
    }
    local_34 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_34);
    piVar3 = &local_54;
  }
  else {
    piVar3 = local_44;
  }
  FUN_002296c4(param_1,piVar3);
  return;
}

