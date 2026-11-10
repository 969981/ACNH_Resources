
void FUN_002bf77c(undefined8 param_1,long param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  iVar4 = (int)param_3[1];
  if ((((iVar4 == 0) || (lVar3 = param_3[2], lVar3 == 0)) || (lVar5 = *param_3, lVar5 == 0)) ||
     (*(long *)(lVar5 + 0xc0) == 0)) {
    local_40 = 0x10c07;
  }
  else {
    plVar1 = *(long **)(lVar5 + 0x208);
    *(long **)(param_2 + 0x50) = plVar1;
    if (*(long *)(param_2 + 0x68) == 0) {
      plVar6 = *(long **)(param_2 + 0x60);
      if (plVar6 != (long *)0x0) {
        FUN_0030f6c0(plVar6);
        plVar1 = *(long **)(param_2 + 0x50);
      }
      *(long **)(param_2 + 0x68) = plVar6;
      uVar2 = (**(code **)(*plVar1 + 0x10))();
      (**(code **)(*plVar6 + 0x18))(plVar6,uVar2);
      iVar4 = (int)param_3[1];
      lVar3 = param_3[2];
    }
    *(int *)(param_2 + 8) = iVar4;
    FUN_00227af0(&local_40,param_2 + 0x10,lVar3);
    local_40 = 0;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}

