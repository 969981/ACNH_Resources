
long * FUN_0378e900(long *param_1,int *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  
  iVar2 = *param_2;
  iVar4 = (int)param_1[4];
  plVar7 = (long *)param_1[1];
  if (iVar2 < iVar4) {
    if (((plVar7 == (long *)0x0) || ((*(byte *)(plVar7 + 3) & 1) != 0)) &&
       ((plVar7[1] == 0 || ((*(byte *)(plVar7[1] + 0x18) & 1) != 0)))) {
      param_1[3] = param_1[3] ^ 1;
      plVar7[3] = plVar7[3] ^ 1;
      *(ulong *)(param_1[2] + 0x18) = *(ulong *)(param_1[2] + 0x18) ^ 1;
      lVar3 = param_1[2];
      plVar7 = *(long **)(lVar3 + 8);
      if ((plVar7 != (long *)0x0) && ((*(byte *)(plVar7 + 3) & 1) == 0)) {
        *(long *)(lVar3 + 8) = plVar7[2];
        plVar7[2] = lVar3;
        plVar7[3] = *(long *)(lVar3 + 0x18);
        *(undefined8 *)(lVar3 + 0x18) = 0;
        param_1[2] = (long)plVar7;
        param_1[2] = plVar7[1];
        plVar7[1] = (long)param_1;
        plVar7[3] = param_1[3];
        param_1[3] = 0;
        plVar7[3] = plVar7[3] ^ 1;
        *(ulong *)(plVar7[1] + 0x18) = *(ulong *)(plVar7[1] + 0x18) ^ 1;
        *(ulong *)(plVar7[2] + 0x18) = *(ulong *)(plVar7[2] + 0x18) ^ 1;
        param_1 = plVar7;
      }
    }
    lVar3 = FUN_0378e900(param_1[1]);
    param_1[1] = lVar3;
    plVar1 = (long *)param_1[2];
  }
  else {
    if ((plVar7 != (long *)0x0) && ((*(byte *)(plVar7 + 3) & 1) == 0)) {
      param_1[1] = plVar7[2];
      plVar7[2] = (long)param_1;
      plVar7[3] = param_1[3];
      param_1[3] = 0;
      iVar2 = *param_2;
      iVar4 = (int)plVar7[4];
      param_1 = plVar7;
    }
    lVar3 = param_1[2];
    if ((iVar4 == iVar2) && (lVar3 == 0)) {
      (**(code **)(*param_1 + 0x10))(param_1);
      return (long *)0x0;
    }
    plVar7 = param_1;
    if (((*(byte *)(lVar3 + 0x18) & 1) != 0) &&
       ((*(long *)(lVar3 + 8) == 0 || ((*(byte *)(*(long *)(lVar3 + 8) + 0x18) & 1) != 0)))) {
      param_1[3] = param_1[3] ^ 1;
      *(ulong *)(param_1[1] + 0x18) = *(ulong *)(param_1[1] + 0x18) ^ 1;
      *(ulong *)(param_1[2] + 0x18) = *(ulong *)(param_1[2] + 0x18) ^ 1;
      plVar1 = (long *)param_1[1];
      if ((plVar1[1] != 0) && ((*(byte *)(plVar1[1] + 0x18) & 1) == 0)) {
        param_1[1] = plVar1[2];
        plVar1[2] = (long)param_1;
        plVar1[3] = param_1[3];
        param_1[3] = 0;
        plVar1[3] = plVar1[3] ^ 1;
        *(ulong *)(plVar1[1] + 0x18) = *(ulong *)(plVar1[1] + 0x18) ^ 1;
        *(ulong *)(plVar1[2] + 0x18) = *(ulong *)(plVar1[2] + 0x18) ^ 1;
        plVar7 = plVar1;
      }
    }
    param_1 = (long *)plVar7[2];
    if ((int)plVar7[4] == *param_2) {
      plVar1 = param_1;
      do {
        plVar6 = plVar1;
        plVar1 = (long *)plVar6[1];
      } while (plVar1 != (long *)0x0);
      if (param_1 == (long *)0x0) {
        param_1 = (long *)0x0;
      }
      else {
        iVar2 = (int)plVar6[4];
        do {
          while ((int)param_1[4] <= iVar2) {
            if ((iVar2 <= (int)param_1[4]) || (param_1 = (long *)param_1[2], param_1 == (long *)0x0)
               ) goto LAB_0378eb70;
          }
          param_1 = (long *)param_1[1];
        } while (param_1 != (long *)0x0);
      }
LAB_0378eb70:
      lVar3 = FUN_0378ec70();
      param_1[2] = lVar3;
      param_1[1] = plVar7[1];
      param_1[3] = plVar7[3];
      (**(code **)(*plVar7 + 0x10))(plVar7);
      plVar1 = (long *)param_1[2];
    }
    else {
      lVar3 = FUN_0378e900();
      plVar7[2] = lVar3;
      plVar1 = (long *)plVar7[2];
      param_1 = plVar7;
    }
  }
  if ((plVar1 == (long *)0x0) || ((*(byte *)(plVar1 + 3) & 1) != 0)) {
    plVar7 = (long *)param_1[1];
    plVar1 = param_1;
  }
  else {
    param_1[2] = plVar1[1];
    plVar1[1] = (long)param_1;
    plVar1[3] = param_1[3];
    param_1[3] = 0;
    plVar7 = (long *)plVar1[1];
  }
  if (plVar7 != (long *)0x0) {
    uVar5 = plVar7[3];
    plVar6 = plVar7;
    if ((uVar5 & 1) == 0) {
      if ((plVar7[1] != 0) && ((*(byte *)(plVar7[1] + 0x18) & 1) == 0)) {
        plVar1[1] = plVar7[2];
        plVar7[2] = (long)plVar1;
        plVar7[3] = plVar1[3];
        plVar1[3] = 0;
        plVar6 = (long *)plVar7[1];
        if (plVar6 == (long *)0x0) {
          return plVar7;
        }
        uVar5 = plVar6[3];
        plVar1 = plVar7;
      }
    }
    if ((((uVar5 & 1) == 0) && (plVar1[2] != 0)) && ((*(byte *)(plVar1[2] + 0x18) & 1) == 0)) {
      plVar1[3] = plVar1[3] ^ 1;
      plVar6[3] = plVar6[3] ^ 1;
      *(ulong *)(plVar1[2] + 0x18) = *(ulong *)(plVar1[2] + 0x18) ^ 1;
    }
  }
  return plVar1;
}

