
long * FUN_010f7460(undefined8 param_1,long *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  
  if (param_2 == (long *)0x0) {
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[1] = 0;
  }
  else {
    iVar1 = FUN_010f70d0(param_3 + 4,param_2 + 4);
    if (iVar1 < 0) {
      lVar2 = FUN_010f7460(param_1,param_2[1],param_3);
      param_2[1] = lVar2;
    }
    else if (iVar1 == 0) {
      if (param_2 != param_3) {
        param_3[2] = param_2[2];
        param_3[1] = param_2[1];
        param_3[3] = param_2[3];
        (**(code **)(*param_2 + 0x10))(param_2);
        param_2 = param_3;
      }
    }
    else {
      lVar2 = FUN_010f7460(param_1,param_2[2],param_3);
      param_2[2] = lVar2;
    }
    param_3 = (long *)param_2[2];
    if (((param_3 == (long *)0x0) || ((*(byte *)(param_3 + 3) & 1) != 0)) ||
       ((param_2[1] != 0 && ((*(byte *)(param_2[1] + 0x18) & 1) == 0)))) {
      plVar3 = (long *)param_2[1];
      param_3 = param_2;
    }
    else {
      param_2[2] = param_3[1];
      param_3[1] = (long)param_2;
      param_3[3] = param_2[3];
      param_2[3] = 0;
      plVar3 = (long *)param_3[1];
    }
    if (plVar3 != (long *)0x0) {
      uVar4 = plVar3[3];
      plVar5 = plVar3;
      if ((((uVar4 & 1) == 0) && (plVar3[1] != 0)) && ((*(byte *)(plVar3[1] + 0x18) & 1) == 0)) {
        param_3[1] = plVar3[2];
        plVar3[2] = (long)param_3;
        plVar3[3] = param_3[3];
        param_3[3] = 0;
        plVar5 = (long *)plVar3[1];
        if (plVar5 == (long *)0x0) {
          return plVar3;
        }
        uVar4 = plVar5[3];
        param_3 = plVar3;
      }
      if ((((uVar4 & 1) == 0) && (param_3[2] != 0)) && ((*(byte *)(param_3[2] + 0x18) & 1) == 0)) {
        param_3[3] = param_3[3] ^ 1;
        plVar5[3] = plVar5[3] ^ 1;
        *(ulong *)(param_3[2] + 0x18) = *(ulong *)(param_3[2] + 0x18) ^ 1;
      }
    }
  }
  return param_3;
}

