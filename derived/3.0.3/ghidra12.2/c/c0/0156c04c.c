
long * FUN_0156c04c(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  
  if (param_1 == (long *)0x0) {
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[1] = 0;
  }
  else {
    if (*(uint *)(param_2 + 0x17) < *(uint *)(param_1 + 0x17)) {
      lVar1 = FUN_0156c04c(param_1[1],param_2);
      param_1[1] = lVar1;
    }
    else if (*(uint *)(param_1 + 0x17) < *(uint *)(param_2 + 0x17)) {
      lVar1 = FUN_0156c04c(param_1[2],param_2);
      param_1[2] = lVar1;
    }
    else if (param_1 != param_2) {
      param_2[2] = param_1[2];
      param_2[1] = param_1[1];
      param_2[3] = param_1[3];
      (**(code **)(*param_1 + 0x10))(param_1);
      param_1 = param_2;
    }
    param_2 = (long *)param_1[2];
    if (((param_2 == (long *)0x0) || ((*(byte *)(param_2 + 3) & 1) != 0)) ||
       ((param_1[1] != 0 && ((*(byte *)(param_1[1] + 0x18) & 1) == 0)))) {
      plVar2 = (long *)param_1[1];
      param_2 = param_1;
    }
    else {
      param_1[2] = param_2[1];
      param_2[1] = (long)param_1;
      param_2[3] = param_1[3];
      param_1[3] = 0;
      plVar2 = (long *)param_2[1];
    }
    if (plVar2 != (long *)0x0) {
      uVar3 = plVar2[3];
      plVar4 = plVar2;
      if ((((uVar3 & 1) == 0) && (plVar2[1] != 0)) && ((*(byte *)(plVar2[1] + 0x18) & 1) == 0)) {
        param_2[1] = plVar2[2];
        plVar2[2] = (long)param_2;
        plVar2[3] = param_2[3];
        param_2[3] = 0;
        plVar4 = (long *)plVar2[1];
        if (plVar4 == (long *)0x0) {
          return plVar2;
        }
        uVar3 = plVar4[3];
        param_2 = plVar2;
      }
      if ((((uVar3 & 1) == 0) && (param_2[2] != 0)) && ((*(byte *)(param_2[2] + 0x18) & 1) == 0)) {
        param_2[3] = param_2[3] ^ 1;
        plVar4[3] = plVar4[3] ^ 1;
        *(ulong *)(param_2[2] + 0x18) = *(ulong *)(param_2[2] + 0x18) ^ 1;
      }
    }
  }
  return param_2;
}

