
long * FUN_016c3b64(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  
  if (param_2 == (long *)0x0) {
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[1] = 0;
  }
  else {
    if (*(ushort *)(param_3 + 4) < *(ushort *)(param_2 + 4)) {
      lVar1 = FUN_016c3b64(param_1,param_2[1],param_3);
      param_2[1] = lVar1;
    }
    else if (*(ushort *)(param_2 + 4) < *(ushort *)(param_3 + 4)) {
      lVar1 = FUN_016c3b64(param_1,param_2[2],param_3);
      param_2[2] = lVar1;
    }
    else if (param_2 != param_3) {
      param_3[2] = param_2[2];
      param_3[1] = param_2[1];
      param_3[3] = param_2[3];
      (**(code **)(*param_2 + 0x10))(param_2);
      param_2 = param_3;
    }
    param_3 = (long *)param_2[2];
    if (((param_3 == (long *)0x0) || ((*(byte *)(param_3 + 3) & 1) != 0)) ||
       ((param_2[1] != 0 && ((*(byte *)(param_2[1] + 0x18) & 1) == 0)))) {
      plVar2 = (long *)param_2[1];
      param_3 = param_2;
    }
    else {
      param_2[2] = param_3[1];
      param_3[1] = (long)param_2;
      param_3[3] = param_2[3];
      param_2[3] = 0;
      plVar2 = (long *)param_3[1];
    }
    if (plVar2 != (long *)0x0) {
      uVar3 = plVar2[3];
      plVar4 = plVar2;
      if ((((uVar3 & 1) == 0) && (plVar2[1] != 0)) && ((*(byte *)(plVar2[1] + 0x18) & 1) == 0)) {
        param_3[1] = plVar2[2];
        plVar2[2] = (long)param_3;
        plVar2[3] = param_3[3];
        param_3[3] = 0;
        plVar4 = (long *)plVar2[1];
        if (plVar4 == (long *)0x0) {
          return plVar2;
        }
        uVar3 = plVar4[3];
        param_3 = plVar2;
      }
      if ((((uVar3 & 1) == 0) && (param_3[2] != 0)) && ((*(byte *)(param_3[2] + 0x18) & 1) == 0)) {
        param_3[3] = param_3[3] ^ 1;
        plVar4[3] = plVar4[3] ^ 1;
        *(ulong *)(param_3[2] + 0x18) = *(ulong *)(param_3[2] + 0x18) ^ 1;
      }
    }
  }
  return param_3;
}

