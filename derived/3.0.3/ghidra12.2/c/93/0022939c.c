
void FUN_0022939c(int *param_1,long param_2,long param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  if ((param_3 == 0) || (param_4 == 0)) {
    local_44 = 0x10c07;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x40);
    if (param_4 <= uVar1) {
      if ((ulong)uVar1 < *(long *)(param_2 + 0x18) + (ulong)param_4 + 6) {
        uVar1 = (uVar1 - (int)*(long *)(param_2 + 0x18)) - 6;
        FUN_0022939c(param_1,param_2,param_3,uVar1);
        if (*param_1 == 0) {
          FUN_0022939c(&local_44,param_2,param_3 + (ulong)uVar1,param_4 - uVar1);
          FUN_00229780(param_1,&local_44);
          return;
        }
        return;
      }
      *(long *)(param_2 + 0x20) = param_3;
      *(uint *)(param_2 + 0x28) = param_4;
      iVar2 = FUN_00180b60(param_2 + 0x20,2);
      if ((iVar2 == 0) && (*(int *)(param_2 + 0x28) == 0)) {
        local_44 = 0;
        goto LAB_0022945c;
      }
    }
    local_44 = 0x10c04;
  }
LAB_0022945c:
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
  FUN_002296c4(param_1,&local_44);
  return;
}

