
void FUN_0024fbcc(undefined8 param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  uint uVar3;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  uVar3 = *(uint *)(param_3 + 8);
  if (uVar3 < 0x8000) {
    if (param_2[2] == 0) {
      plVar2 = (long *)(**(code **)(*param_2 + 0x38))(param_2);
      param_2[2] = (long)plVar2;
      (**(code **)(*plVar2 + 0x20))(plVar2,param_3);
      uVar3 = *(uint *)(param_3 + 8);
    }
    puVar1 = PTR_DAT_04bccf00;
    local_34 = 0;
    PTR_DAT_04bccf00[0x41] = (char)uVar3;
    puVar1[0x43] = 8;
  }
  else {
    local_34 = 0x10c07;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}

