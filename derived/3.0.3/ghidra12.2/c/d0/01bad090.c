
long * FUN_01bad090(undefined8 param_1,long *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  
  if (param_2 == (long *)0x0) {
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[1] = 0;
  }
  else {
    uVar1 = *(uint *)(param_3 + 4);
    uVar2 = *(uint *)(param_2 + 4);
    if ((uVar1 < uVar2) ||
       (((uVar1 == uVar2 && (*(uint *)((long)param_3 + 0x24) < *(uint *)((long)param_2 + 0x24))) &&
        (*(uint *)((long)param_2 + 0x24) != 0xffffffff)))) {
      lVar3 = FUN_01bad090(param_1,param_2[1],param_3);
      param_2[1] = lVar3;
    }
    else if ((uVar2 < uVar1) ||
            ((*(uint *)((long)param_2 + 0x24) < *(uint *)((long)param_3 + 0x24) &&
             (*(uint *)((long)param_3 + 0x24) != 0xffffffff)))) {
      lVar3 = FUN_01bad090(param_1,param_2[2],param_3);
      param_2[2] = lVar3;
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
      plVar4 = (long *)param_2[1];
      param_3 = param_2;
    }
    else {
      param_2[2] = param_3[1];
      param_3[1] = (long)param_2;
      param_3[3] = param_2[3];
      param_2[3] = 0;
      plVar4 = (long *)param_3[1];
    }
    if (plVar4 != (long *)0x0) {
      uVar5 = plVar4[3];
      plVar6 = plVar4;
      if ((((uVar5 & 1) == 0) && (plVar4[1] != 0)) && ((*(byte *)(plVar4[1] + 0x18) & 1) == 0)) {
        param_3[1] = plVar4[2];
        plVar4[2] = (long)param_3;
        plVar4[3] = param_3[3];
        param_3[3] = 0;
        plVar6 = (long *)plVar4[1];
        if (plVar6 == (long *)0x0) {
          return plVar4;
        }
        uVar5 = plVar6[3];
        param_3 = plVar4;
      }
      if ((((uVar5 & 1) == 0) && (param_3[2] != 0)) && ((*(byte *)(param_3[2] + 0x18) & 1) == 0)) {
        param_3[3] = param_3[3] ^ 1;
        plVar6[3] = plVar6[3] ^ 1;
        *(ulong *)(param_3[2] + 0x18) = *(ulong *)(param_3[2] + 0x18) ^ 1;
      }
    }
  }
  return param_3;
}

