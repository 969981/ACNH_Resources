
long * FUN_03f3bc90(long *param_1,long *param_2)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  byte *pbVar5;
  ulong uVar6;
  long *plVar7;
  byte *pbVar8;
  
  if (param_1 == (long *)0x0) {
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[1] = 0;
  }
  else {
    if (*(uint *)(param_2 + 4) < *(uint *)(param_1 + 4)) {
LAB_03f3bcbc:
      lVar3 = FUN_03f3bc90(param_1[1],param_2);
      param_1[1] = lVar3;
    }
    else if (*(uint *)(param_2 + 4) == *(uint *)(param_1 + 4)) {
      plVar4 = param_2 + 5;
      (**(code **)(*plVar4 + 0x18))(plVar4);
      (**(code **)(*plVar4 + 0x18))(plVar4);
      pbVar8 = (byte *)param_2[6];
      (**(code **)(param_1[5] + 0x18))(param_1 + 5);
      if (pbVar8 != (byte *)param_1[6]) {
        pbVar8 = (byte *)param_1[6];
        pbVar5 = (byte *)param_2[6];
        lVar3 = 0x7ffff;
        do {
          bVar2 = *pbVar5;
          if (bVar2 != *pbVar8) {
            if (*pbVar8 <= bVar2) goto LAB_03f3bce0;
            goto LAB_03f3bcbc;
          }
        } while ((bVar2 != 0) &&
                (bVar1 = lVar3 != 0, pbVar8 = pbVar8 + 1, pbVar5 = pbVar5 + 1, lVar3 = lVar3 + -1,
                bVar1));
      }
      if (param_1 != param_2) {
        param_2[2] = param_1[2];
        param_2[1] = param_1[1];
        param_2[3] = param_1[3];
        (**(code **)(*param_1 + 0x10))(param_1);
        param_1 = param_2;
      }
    }
    else {
LAB_03f3bce0:
      lVar3 = FUN_03f3bc90(param_1[2],param_2);
      param_1[2] = lVar3;
    }
    param_2 = (long *)param_1[2];
    if (((param_2 == (long *)0x0) || ((*(byte *)(param_2 + 3) & 1) != 0)) ||
       ((param_1[1] != 0 && ((*(byte *)(param_1[1] + 0x18) & 1) == 0)))) {
      plVar4 = (long *)param_1[1];
      param_2 = param_1;
    }
    else {
      param_1[2] = param_2[1];
      param_2[1] = (long)param_1;
      param_2[3] = param_1[3];
      param_1[3] = 0;
      plVar4 = (long *)param_2[1];
    }
    if (plVar4 != (long *)0x0) {
      uVar6 = plVar4[3];
      plVar7 = plVar4;
      if ((((uVar6 & 1) == 0) && (plVar4[1] != 0)) && ((*(byte *)(plVar4[1] + 0x18) & 1) == 0)) {
        param_2[1] = plVar4[2];
        plVar4[2] = (long)param_2;
        plVar4[3] = param_2[3];
        param_2[3] = 0;
        plVar7 = (long *)plVar4[1];
        if (plVar7 == (long *)0x0) {
          return plVar4;
        }
        uVar6 = plVar7[3];
        param_2 = plVar4;
      }
      if ((((uVar6 & 1) == 0) && (param_2[2] != 0)) && ((*(byte *)(param_2[2] + 0x18) & 1) == 0)) {
        param_2[3] = param_2[3] ^ 1;
        plVar7[3] = plVar7[3] ^ 1;
        *(ulong *)(param_2[2] + 0x18) = *(ulong *)(param_2[2] + 0x18) ^ 1;
      }
    }
  }
  return param_2;
}

