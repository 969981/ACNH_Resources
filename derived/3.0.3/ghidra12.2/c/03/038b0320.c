
long * FUN_038b0320(undefined8 param_1,long *param_2,long *param_3)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  byte *pbVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  byte *pbVar9;
  
  if (param_2 == (long *)0x0) {
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[1] = 0;
    return param_3;
  }
  plVar8 = param_3 + 4;
  (**(code **)(*plVar8 + 0x18))(plVar8);
  (**(code **)(*plVar8 + 0x18))(plVar8);
  pbVar9 = (byte *)param_3[5];
  (**(code **)(param_2[4] + 0x18))(param_2 + 4);
  if (pbVar9 != (byte *)param_2[5]) {
    pbVar9 = (byte *)param_2[5];
    pbVar5 = (byte *)param_3[5];
    lVar3 = 0x7ffff;
    do {
      bVar2 = *pbVar5;
      if (bVar2 != *pbVar9) {
        if (bVar2 < *pbVar9) {
          lVar3 = FUN_038b0320(param_1,param_2[1],param_3);
          param_2[1] = lVar3;
          goto LAB_038b0418;
        }
        lVar3 = FUN_038b0320(param_1,param_2[2],param_3);
        param_2[2] = lVar3;
        plVar8 = (long *)param_2[2];
        param_3 = param_2;
        goto joined_r0x038b041c;
      }
    } while ((bVar2 != 0) &&
            (bVar1 = lVar3 != 0, pbVar9 = pbVar9 + 1, pbVar5 = pbVar5 + 1, lVar3 = lVar3 + -1, bVar1
            ));
  }
  if (param_2 == param_3) {
LAB_038b0418:
    plVar8 = (long *)param_2[2];
    param_3 = param_2;
  }
  else {
    param_3[2] = param_2[2];
    param_3[1] = param_2[1];
    param_3[3] = param_2[3];
    (**(code **)(*param_2 + 0x10))(param_2);
    plVar8 = (long *)param_3[2];
  }
joined_r0x038b041c:
  if (((plVar8 == (long *)0x0) || ((*(byte *)(plVar8 + 3) & 1) != 0)) ||
     ((param_3[1] != 0 && ((*(byte *)(param_3[1] + 0x18) & 1) == 0)))) {
    plVar4 = (long *)param_3[1];
    plVar8 = param_3;
  }
  else {
    param_3[2] = plVar8[1];
    plVar8[1] = (long)param_3;
    plVar8[3] = param_3[3];
    param_3[3] = 0;
    plVar4 = (long *)plVar8[1];
  }
  if (plVar4 != (long *)0x0) {
    uVar6 = plVar4[3];
    plVar7 = plVar4;
    if ((((uVar6 & 1) == 0) && (plVar4[1] != 0)) && ((*(byte *)(plVar4[1] + 0x18) & 1) == 0)) {
      plVar8[1] = plVar4[2];
      plVar4[2] = (long)plVar8;
      plVar4[3] = plVar8[3];
      plVar8[3] = 0;
      plVar7 = (long *)plVar4[1];
      if (plVar7 == (long *)0x0) {
        return plVar4;
      }
      uVar6 = plVar7[3];
      plVar8 = plVar4;
    }
    if ((((uVar6 & 1) == 0) && (plVar8[2] != 0)) && ((*(byte *)(plVar8[2] + 0x18) & 1) == 0)) {
      plVar8[3] = plVar8[3] ^ 1;
      plVar7[3] = plVar7[3] ^ 1;
      *(ulong *)(plVar8[2] + 0x18) = *(ulong *)(plVar8[2] + 0x18) ^ 1;
    }
  }
  return plVar8;
}

