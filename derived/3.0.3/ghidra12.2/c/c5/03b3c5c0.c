
long * FUN_03b3c5c0(undefined8 param_1,long *param_2,long *param_3)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  byte *pbVar7;
  ulong uVar8;
  long *plVar9;
  byte *pbVar10;
  char *pcVar11;
  
  (**(code **)(*param_3 + 0x18))(param_3);
  (**(code **)(*param_3 + 0x18))(param_3);
  pbVar10 = (byte *)param_3[1];
  (**(code **)(param_2[4] + 0x18))(param_2 + 4);
  if (pbVar10 != (byte *)param_2[5]) {
    pbVar10 = (byte *)param_2[5];
    pbVar7 = (byte *)param_3[1];
    lVar3 = 0x7ffff;
    do {
      bVar2 = *pbVar7;
      if (bVar2 != *pbVar10) {
        if (bVar2 < *pbVar10) {
          lVar3 = param_2[1];
          if (((lVar3 == 0) || ((*(byte *)(lVar3 + 0x18) & 1) != 0)) &&
             ((*(long *)(lVar3 + 8) == 0 || ((*(byte *)(*(long *)(lVar3 + 8) + 0x18) & 1) != 0)))) {
            param_2[3] = param_2[3] ^ 1;
            *(ulong *)(lVar3 + 0x18) = *(ulong *)(lVar3 + 0x18) ^ 1;
            *(ulong *)(param_2[2] + 0x18) = *(ulong *)(param_2[2] + 0x18) ^ 1;
            lVar3 = param_2[2];
            plVar9 = *(long **)(lVar3 + 8);
            if ((plVar9 != (long *)0x0) && ((*(byte *)(plVar9 + 3) & 1) == 0)) {
              *(long *)(lVar3 + 8) = plVar9[2];
              plVar9[2] = lVar3;
              plVar9[3] = *(long *)(lVar3 + 0x18);
              *(undefined8 *)(lVar3 + 0x18) = 0;
              param_2[2] = (long)plVar9;
              param_2[2] = plVar9[1];
              plVar9[1] = (long)param_2;
              plVar9[3] = param_2[3];
              param_2[3] = 0;
              plVar9[3] = plVar9[3] ^ 1;
              *(ulong *)(plVar9[1] + 0x18) = *(ulong *)(plVar9[1] + 0x18) ^ 1;
              *(ulong *)(plVar9[2] + 0x18) = *(ulong *)(plVar9[2] + 0x18) ^ 1;
              param_2 = plVar9;
            }
          }
          lVar3 = FUN_03b3c5c0(param_1,param_2[1],param_3);
          param_2[1] = lVar3;
          plVar9 = (long *)param_2[2];
          goto joined_r0x03b3c9e4;
        }
        break;
      }
      if (bVar2 == 0) break;
      bVar1 = lVar3 != 0;
      pbVar10 = pbVar10 + 1;
      pbVar7 = pbVar7 + 1;
      lVar3 = lVar3 + -1;
    } while (bVar1);
  }
  plVar9 = (long *)param_2[1];
  if ((plVar9 != (long *)0x0) && ((*(byte *)(plVar9 + 3) & 1) == 0)) {
    param_2[1] = plVar9[2];
    plVar9[2] = (long)param_2;
    plVar9[3] = param_2[3];
    param_2[3] = 0;
    param_2 = plVar9;
  }
  (**(code **)(*param_3 + 0x18))(param_3);
  (**(code **)(*param_3 + 0x18))(param_3);
  pcVar11 = (char *)param_3[1];
  (**(code **)(param_2[4] + 0x18))(param_2 + 4);
  if (pcVar11 != (char *)param_2[5]) {
    pcVar11 = (char *)param_2[5];
    pcVar6 = (char *)param_3[1];
    lVar3 = 0x7ffff;
    do {
      if (*pcVar6 != *pcVar11) {
        lVar3 = param_2[2];
        goto LAB_03b3c7d8;
      }
      if (*pcVar6 == '\0') break;
      bVar1 = lVar3 != 0;
      pcVar11 = pcVar11 + 1;
      pcVar6 = pcVar6 + 1;
      lVar3 = lVar3 + -1;
    } while (bVar1);
  }
  lVar3 = param_2[2];
  if (lVar3 == 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    return (long *)0x0;
  }
LAB_03b3c7d8:
  plVar5 = param_2;
  if (((*(byte *)(lVar3 + 0x18) & 1) != 0) &&
     ((*(long *)(lVar3 + 8) == 0 || ((*(byte *)(*(long *)(lVar3 + 8) + 0x18) & 1) != 0)))) {
    param_2[3] = param_2[3] ^ 1;
    *(ulong *)(param_2[1] + 0x18) = *(ulong *)(param_2[1] + 0x18) ^ 1;
    *(ulong *)(param_2[2] + 0x18) = *(ulong *)(param_2[2] + 0x18) ^ 1;
    plVar9 = (long *)param_2[1];
    if ((plVar9[1] != 0) && ((*(byte *)(plVar9[1] + 0x18) & 1) == 0)) {
      param_2[1] = plVar9[2];
      plVar9[2] = (long)param_2;
      plVar9[3] = param_2[3];
      param_2[3] = 0;
      plVar9[3] = plVar9[3] ^ 1;
      *(ulong *)(plVar9[1] + 0x18) = *(ulong *)(plVar9[1] + 0x18) ^ 1;
      *(ulong *)(plVar9[2] + 0x18) = *(ulong *)(plVar9[2] + 0x18) ^ 1;
      plVar5 = plVar9;
    }
  }
  (**(code **)(*param_3 + 0x18))(param_3);
  (**(code **)(*param_3 + 0x18))(param_3);
  pcVar11 = (char *)param_3[1];
  (**(code **)(plVar5[4] + 0x18))(plVar5 + 4);
  if (pcVar11 != (char *)plVar5[5]) {
    pcVar11 = (char *)plVar5[5];
    pcVar6 = (char *)param_3[1];
    lVar3 = 0x7ffff;
    do {
      if (*pcVar6 != *pcVar11) {
        lVar3 = FUN_03b3c5c0(param_1,plVar5[2],param_3);
        plVar5[2] = lVar3;
        plVar9 = (long *)plVar5[2];
        param_2 = plVar5;
        goto joined_r0x03b3c9e4;
      }
      if (*pcVar6 == '\0') break;
      bVar1 = lVar3 != 0;
      pcVar11 = pcVar11 + 1;
      pcVar6 = pcVar6 + 1;
      lVar3 = lVar3 + -1;
    } while (bVar1);
  }
  param_2 = (long *)plVar5[2];
  plVar9 = param_2;
  do {
    plVar4 = plVar9;
    plVar9 = (long *)plVar4[1];
  } while ((long *)plVar4[1] != (long *)0x0);
  if (param_2 != (long *)0x0) {
    while( true ) {
      (**(code **)(plVar4[4] + 0x18))(plVar4 + 4);
      (**(code **)(plVar4[4] + 0x18))(plVar4 + 4);
      pbVar10 = (byte *)plVar4[5];
      (**(code **)(param_2[4] + 0x18))(param_2 + 4);
      if (pbVar10 == (byte *)param_2[5]) break;
      pbVar10 = (byte *)param_2[5];
      pbVar7 = (byte *)plVar4[5];
      lVar3 = 0x7ffff;
      while( true ) {
        bVar2 = *pbVar7;
        if (bVar2 != *pbVar10) break;
        if (bVar2 == 0) goto LAB_03b3c990;
        bVar1 = lVar3 == 0;
        pbVar10 = pbVar10 + 1;
        pbVar7 = pbVar7 + 1;
        lVar3 = lVar3 + -1;
        if (bVar1) goto LAB_03b3c990;
      }
      lVar3 = 8;
      if (*pbVar10 <= bVar2) {
        lVar3 = 0x10;
      }
      param_2 = *(long **)((long)param_2 + lVar3);
      if (param_2 == (long *)0x0) break;
    }
  }
LAB_03b3c990:
  lVar3 = FUN_03b3cae4(plVar5[2]);
  param_2[2] = lVar3;
  param_2[1] = plVar5[1];
  param_2[3] = plVar5[3];
  (**(code **)(*plVar5 + 0x10))(plVar5);
  plVar9 = (long *)param_2[2];
joined_r0x03b3c9e4:
  if ((plVar9 == (long *)0x0) || ((*(byte *)(plVar9 + 3) & 1) != 0)) {
    plVar5 = (long *)param_2[1];
  }
  else {
    param_2[2] = plVar9[1];
    plVar9[1] = (long)param_2;
    plVar9[3] = param_2[3];
    param_2[3] = 0;
    plVar5 = (long *)plVar9[1];
    param_2 = plVar9;
  }
  if (plVar5 != (long *)0x0) {
    uVar8 = plVar5[3];
    plVar9 = plVar5;
    if ((uVar8 & 1) == 0) {
      if ((plVar5[1] != 0) && ((*(byte *)(plVar5[1] + 0x18) & 1) == 0)) {
        param_2[1] = plVar5[2];
        plVar5[2] = (long)param_2;
        plVar5[3] = param_2[3];
        param_2[3] = 0;
        plVar9 = (long *)plVar5[1];
        if (plVar9 == (long *)0x0) {
          return plVar5;
        }
        uVar8 = plVar9[3];
        param_2 = plVar5;
      }
    }
    if ((((uVar8 & 1) == 0) && (param_2[2] != 0)) && ((*(byte *)(param_2[2] + 0x18) & 1) == 0)) {
      param_2[3] = param_2[3] ^ 1;
      plVar9[3] = plVar9[3] ^ 1;
      *(ulong *)(param_2[2] + 0x18) = *(ulong *)(param_2[2] + 0x18) ^ 1;
    }
  }
  return param_2;
}

