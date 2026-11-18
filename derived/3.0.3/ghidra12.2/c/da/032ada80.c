
long * FUN_032ada80(undefined8 param_1,long *param_2,uint *param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  
  uVar2 = *param_3;
  uVar4 = *(uint *)(param_2 + 4);
  plVar8 = (long *)param_2[1];
  if (uVar2 < uVar4) {
    if (((plVar8 == (long *)0x0) || ((*(byte *)(plVar8 + 3) & 1) != 0)) &&
       ((plVar8[1] == 0 || ((*(byte *)(plVar8[1] + 0x18) & 1) != 0)))) {
      param_2[3] = param_2[3] ^ 1;
      plVar8[3] = plVar8[3] ^ 1;
      *(ulong *)(param_2[2] + 0x18) = *(ulong *)(param_2[2] + 0x18) ^ 1;
      lVar3 = param_2[2];
      plVar8 = *(long **)(lVar3 + 8);
      if ((plVar8 != (long *)0x0) && ((*(byte *)(plVar8 + 3) & 1) == 0)) {
        *(long *)(lVar3 + 8) = plVar8[2];
        plVar8[2] = lVar3;
        plVar8[3] = *(long *)(lVar3 + 0x18);
        *(undefined8 *)(lVar3 + 0x18) = 0;
        param_2[2] = (long)plVar8;
        param_2[2] = plVar8[1];
        plVar8[1] = (long)param_2;
        plVar8[3] = param_2[3];
        param_2[3] = 0;
        plVar8[3] = plVar8[3] ^ 1;
        *(ulong *)(plVar8[1] + 0x18) = *(ulong *)(plVar8[1] + 0x18) ^ 1;
        *(ulong *)(plVar8[2] + 0x18) = *(ulong *)(plVar8[2] + 0x18) ^ 1;
        param_2 = plVar8;
      }
    }
    lVar3 = FUN_032ada80(param_1,param_2[1]);
    param_2[1] = lVar3;
    plVar1 = (long *)param_2[2];
  }
  else {
    if ((plVar8 != (long *)0x0) && ((*(byte *)(plVar8 + 3) & 1) == 0)) {
      param_2[1] = plVar8[2];
      plVar8[2] = (long)param_2;
      plVar8[3] = param_2[3];
      param_2[3] = 0;
      uVar2 = *param_3;
      uVar4 = *(uint *)(plVar8 + 4);
      param_2 = plVar8;
    }
    lVar3 = param_2[2];
    if ((uVar2 == uVar4) && (lVar3 == 0)) {
      (**(code **)(*param_2 + 0x10))(param_2);
      return (long *)0x0;
    }
    plVar8 = param_2;
    if (((*(byte *)(lVar3 + 0x18) & 1) != 0) &&
       ((*(long *)(lVar3 + 8) == 0 || ((*(byte *)(*(long *)(lVar3 + 8) + 0x18) & 1) != 0)))) {
      param_2[3] = param_2[3] ^ 1;
      *(ulong *)(param_2[1] + 0x18) = *(ulong *)(param_2[1] + 0x18) ^ 1;
      *(ulong *)(param_2[2] + 0x18) = *(ulong *)(param_2[2] + 0x18) ^ 1;
      plVar1 = (long *)param_2[1];
      if ((plVar1[1] != 0) && ((*(byte *)(plVar1[1] + 0x18) & 1) == 0)) {
        param_2[1] = plVar1[2];
        plVar1[2] = (long)param_2;
        plVar1[3] = param_2[3];
        param_2[3] = 0;
        plVar1[3] = plVar1[3] ^ 1;
        *(ulong *)(plVar1[1] + 0x18) = *(ulong *)(plVar1[1] + 0x18) ^ 1;
        *(ulong *)(plVar1[2] + 0x18) = *(ulong *)(plVar1[2] + 0x18) ^ 1;
        plVar8 = plVar1;
      }
    }
    plVar1 = (long *)plVar8[2];
    if (*param_3 == *(uint *)(plVar8 + 4)) {
      plVar7 = plVar1;
      do {
        plVar5 = plVar7;
        plVar7 = (long *)plVar5[1];
      } while (plVar7 != (long *)0x0);
      if (plVar1 == (long *)0x0) {
        param_2 = (long *)0x0;
      }
      else {
        uVar2 = *(uint *)(plVar5 + 4);
        param_2 = plVar1;
        do {
          while (*(uint *)(param_2 + 4) <= uVar2) {
            if ((uVar2 <= *(uint *)(param_2 + 4)) ||
               (param_2 = (long *)param_2[2], param_2 == (long *)0x0)) goto LAB_032adcec;
          }
          param_2 = (long *)param_2[1];
        } while (param_2 != (long *)0x0);
      }
LAB_032adcec:
      lVar3 = FUN_032addf0(plVar1);
      param_2[2] = lVar3;
      param_2[1] = plVar8[1];
      param_2[3] = plVar8[3];
      (**(code **)(*plVar8 + 0x10))(plVar8);
      plVar1 = (long *)param_2[2];
    }
    else {
      lVar3 = FUN_032ada80();
      plVar8[2] = lVar3;
      plVar1 = (long *)plVar8[2];
      param_2 = plVar8;
    }
  }
  if ((plVar1 == (long *)0x0) || ((*(byte *)(plVar1 + 3) & 1) != 0)) {
    plVar8 = (long *)param_2[1];
    plVar1 = param_2;
  }
  else {
    param_2[2] = plVar1[1];
    plVar1[1] = (long)param_2;
    plVar1[3] = param_2[3];
    param_2[3] = 0;
    plVar8 = (long *)plVar1[1];
  }
  if (plVar8 != (long *)0x0) {
    uVar6 = plVar8[3];
    plVar7 = plVar8;
    if ((uVar6 & 1) == 0) {
      if ((plVar8[1] != 0) && ((*(byte *)(plVar8[1] + 0x18) & 1) == 0)) {
        plVar1[1] = plVar8[2];
        plVar8[2] = (long)plVar1;
        plVar8[3] = plVar1[3];
        plVar1[3] = 0;
        plVar7 = (long *)plVar8[1];
        if (plVar7 == (long *)0x0) {
          return plVar8;
        }
        uVar6 = plVar7[3];
        plVar1 = plVar8;
      }
    }
    if ((((uVar6 & 1) == 0) && (plVar1[2] != 0)) && ((*(byte *)(plVar1[2] + 0x18) & 1) == 0)) {
      plVar1[3] = plVar1[3] ^ 1;
      plVar7[3] = plVar7[3] ^ 1;
      *(ulong *)(plVar1[2] + 0x18) = *(ulong *)(plVar1[2] + 0x18) ^ 1;
    }
  }
  return plVar1;
}

