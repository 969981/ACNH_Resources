
long * FUN_029ca380(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  
  iVar1 = FUN_029ca720(param_2,param_1 + 4);
  plVar5 = (long *)param_1[1];
  if (iVar1 < 0) {
    if (((plVar5 == (long *)0x0) || ((*(byte *)(plVar5 + 3) & 1) != 0)) &&
       ((plVar5[1] == 0 || ((*(byte *)(plVar5[1] + 0x18) & 1) != 0)))) {
      param_1[3] = param_1[3] ^ 1;
      plVar5[3] = plVar5[3] ^ 1;
      *(ulong *)(param_1[2] + 0x18) = *(ulong *)(param_1[2] + 0x18) ^ 1;
      lVar2 = param_1[2];
      plVar5 = *(long **)(lVar2 + 8);
      if ((plVar5 != (long *)0x0) && ((*(byte *)(plVar5 + 3) & 1) == 0)) {
        *(long *)(lVar2 + 8) = plVar5[2];
        plVar5[2] = lVar2;
        plVar5[3] = *(long *)(lVar2 + 0x18);
        *(undefined8 *)(lVar2 + 0x18) = 0;
        param_1[2] = (long)plVar5;
        param_1[2] = plVar5[1];
        plVar5[1] = (long)param_1;
        plVar5[3] = param_1[3];
        param_1[3] = 0;
        plVar5[3] = plVar5[3] ^ 1;
        *(ulong *)(plVar5[1] + 0x18) = *(ulong *)(plVar5[1] + 0x18) ^ 1;
        *(ulong *)(plVar5[2] + 0x18) = *(ulong *)(plVar5[2] + 0x18) ^ 1;
        param_1 = plVar5;
      }
    }
    lVar2 = FUN_029ca380(param_1[1],param_2);
    param_1[1] = lVar2;
    plVar5 = (long *)param_1[2];
  }
  else {
    if ((plVar5 != (long *)0x0) && ((*(byte *)(plVar5 + 3) & 1) == 0)) {
      param_1[1] = plVar5[2];
      plVar5[2] = (long)param_1;
      plVar5[3] = param_1[3];
      param_1[3] = 0;
      param_1 = plVar5;
    }
    iVar1 = FUN_029ca720(param_2,param_1 + 4);
    lVar2 = param_1[2];
    if ((iVar1 == 0) && (lVar2 == 0)) {
      (**(code **)(*param_1 + 0x10))(param_1);
      return (long *)0x0;
    }
    if (((*(byte *)(lVar2 + 0x18) & 1) != 0) &&
       ((*(long *)(lVar2 + 8) == 0 || ((*(byte *)(*(long *)(lVar2 + 8) + 0x18) & 1) != 0)))) {
      param_1[3] = param_1[3] ^ 1;
      *(ulong *)(param_1[1] + 0x18) = *(ulong *)(param_1[1] + 0x18) ^ 1;
      *(ulong *)(param_1[2] + 0x18) = *(ulong *)(param_1[2] + 0x18) ^ 1;
      plVar5 = (long *)param_1[1];
      if ((plVar5[1] != 0) && ((*(byte *)(plVar5[1] + 0x18) & 1) == 0)) {
        param_1[1] = plVar5[2];
        plVar5[2] = (long)param_1;
        plVar5[3] = param_1[3];
        param_1[3] = 0;
        plVar5[3] = plVar5[3] ^ 1;
        *(ulong *)(plVar5[1] + 0x18) = *(ulong *)(plVar5[1] + 0x18) ^ 1;
        *(ulong *)(plVar5[2] + 0x18) = *(ulong *)(plVar5[2] + 0x18) ^ 1;
        param_1 = plVar5;
      }
    }
    iVar1 = FUN_029ca720(param_2,param_1 + 4);
    plVar6 = (long *)param_1[2];
    if (iVar1 == 0) {
      plVar5 = plVar6;
      do {
        plVar3 = plVar5;
        plVar5 = (long *)plVar3[1];
      } while (plVar5 != (long *)0x0);
      if (plVar6 == (long *)0x0) {
        lVar2 = 0;
      }
      else {
        do {
          while (iVar1 = FUN_029ca720(plVar3 + 4,plVar6 + 4), -1 < iVar1) {
            if ((iVar1 == 0) || (plVar6 = (long *)plVar6[2], plVar6 == (long *)0x0))
            goto LAB_029ca5ec;
          }
          plVar6 = (long *)plVar6[1];
        } while (plVar6 != (long *)0x0);
LAB_029ca5ec:
        lVar2 = param_1[2];
      }
      lVar2 = FUN_029ca848(lVar2);
      plVar6[2] = lVar2;
      plVar6[1] = param_1[1];
      plVar6[3] = param_1[3];
      (**(code **)(*param_1 + 0x10))(param_1);
      plVar5 = (long *)plVar6[2];
      param_1 = plVar6;
    }
    else {
      lVar2 = FUN_029ca380(plVar6,param_2);
      param_1[2] = lVar2;
      plVar5 = (long *)param_1[2];
    }
  }
  if ((plVar5 == (long *)0x0) || ((*(byte *)(plVar5 + 3) & 1) != 0)) {
    plVar6 = (long *)param_1[1];
  }
  else {
    param_1[2] = plVar5[1];
    plVar5[1] = (long)param_1;
    plVar5[3] = param_1[3];
    param_1[3] = 0;
    plVar6 = (long *)plVar5[1];
    param_1 = plVar5;
  }
  if (plVar6 != (long *)0x0) {
    uVar4 = plVar6[3];
    plVar5 = plVar6;
    if ((uVar4 & 1) == 0) {
      if ((plVar6[1] != 0) && ((*(byte *)(plVar6[1] + 0x18) & 1) == 0)) {
        param_1[1] = plVar6[2];
        plVar6[2] = (long)param_1;
        plVar6[3] = param_1[3];
        param_1[3] = 0;
        plVar5 = (long *)plVar6[1];
        if (plVar5 == (long *)0x0) {
          return plVar6;
        }
        uVar4 = plVar5[3];
        param_1 = plVar6;
      }
    }
    if ((((uVar4 & 1) == 0) && (param_1[2] != 0)) && ((*(byte *)(param_1[2] + 0x18) & 1) == 0)) {
      param_1[3] = param_1[3] ^ 1;
      plVar5[3] = plVar5[3] ^ 1;
      *(ulong *)(param_1[2] + 0x18) = *(ulong *)(param_1[2] + 0x18) ^ 1;
    }
  }
  return param_1;
}

