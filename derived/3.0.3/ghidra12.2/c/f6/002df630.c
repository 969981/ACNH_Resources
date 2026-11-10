
void FUN_002df630(undefined8 param_1,long *param_2,int param_3,uint param_4)

{
  ulong uVar1;
  long *plVar2;
  int local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  if (((param_4 & 0xff) < 0x65) && (param_3 != 0)) {
    plVar2 = *(long **)(*(long *)PTR_DAT_04bcb8b8 + 8);
    (**(code **)(*plVar2 + 0x30))(&local_44,plVar2);
    if (local_44 != 0) {
      (**(code **)(*plVar2 + 0x30))(param_1,plVar2);
      return;
    }
    uVar1 = (**(code **)(*param_2 + 0x108))(param_2,param_4);
    if ((uVar1 & 1) == 0) {
      local_44 = 0x4c11;
    }
    else {
      FUN_002282f0(param_2 + 0x5a);
      uVar1 = FUN_00310b8c(param_2[0xb],param_3,param_4);
      if ((uVar1 & 1) == 0) {
        local_44 = 0xac5a;
      }
      else {
        local_44 = 0;
      }
    }
  }
  else {
    local_44 = 0x10c07;
  }
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
  FUN_002296c4(param_1,&local_44);
  return;
}

