
long * FUN_03f3be90(undefined8 param_1,long *param_2,uint *param_3)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  char *pcVar5;
  byte *pbVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  uint *puVar10;
  byte *pbVar11;
  char *pcVar12;
  
  if (*param_3 < *(uint *)(param_2 + 4)) {
LAB_03f3bec0:
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
    lVar3 = FUN_03f3be90(param_1,param_2[1],param_3);
    param_2[1] = lVar3;
    plVar9 = (long *)param_2[2];
    plVar8 = param_2;
  }
  else {
    if (*param_3 <= *(uint *)(param_2 + 4)) {
      puVar10 = param_3 + 2;
      (**(code **)(*(long *)puVar10 + 0x18))(puVar10);
      (**(code **)(*(long *)puVar10 + 0x18))(puVar10);
      pbVar11 = *(byte **)(param_3 + 4);
      (**(code **)(param_2[5] + 0x18))(param_2 + 5);
      if (pbVar11 != (byte *)param_2[6]) {
        pbVar11 = (byte *)param_2[6];
        pbVar6 = *(byte **)(param_3 + 4);
        lVar3 = 0x7ffff;
        do {
          bVar2 = *pbVar6;
          if (bVar2 != *pbVar11) {
            if (bVar2 < *pbVar11) goto LAB_03f3bec0;
            break;
          }
          if (bVar2 == 0) break;
          bVar1 = lVar3 != 0;
          pbVar11 = pbVar11 + 1;
          pbVar6 = pbVar6 + 1;
          lVar3 = lVar3 + -1;
        } while (bVar1);
      }
    }
    plVar9 = (long *)param_2[1];
    if ((plVar9 != (long *)0x0) && ((*(byte *)(plVar9 + 3) & 1) == 0)) {
      param_2[1] = plVar9[2];
      plVar9[2] = (long)param_2;
      plVar9[3] = param_2[3];
      param_2[3] = 0;
      param_2 = plVar9;
    }
    if (*param_3 == *(uint *)(param_2 + 4)) {
      puVar10 = param_3 + 2;
      (**(code **)(*(long *)puVar10 + 0x18))(puVar10);
      (**(code **)(*(long *)puVar10 + 0x18))(puVar10);
      pcVar12 = *(char **)(param_3 + 4);
      (**(code **)(param_2[5] + 0x18))(param_2 + 5);
      if (pcVar12 != (char *)param_2[6]) {
        pcVar12 = (char *)param_2[6];
        pcVar5 = *(char **)(param_3 + 4);
        lVar3 = 0x7ffff;
        do {
          if (*pcVar5 != *pcVar12) goto LAB_03f3c0d8;
          if (*pcVar5 == '\0') break;
          bVar1 = lVar3 != 0;
          pcVar12 = pcVar12 + 1;
          pcVar5 = pcVar5 + 1;
          lVar3 = lVar3 + -1;
        } while (bVar1);
      }
      if (param_2[2] == 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
        return (long *)0x0;
      }
    }
LAB_03f3c0d8:
    lVar3 = param_2[2];
    if (((lVar3 == 0) || ((*(byte *)(lVar3 + 0x18) & 1) != 0)) &&
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
        param_2 = plVar9;
      }
    }
    if (*param_3 == *(uint *)(param_2 + 4)) {
      puVar10 = param_3 + 2;
      (**(code **)(*(long *)puVar10 + 0x18))(puVar10);
      (**(code **)(*(long *)puVar10 + 0x18))(puVar10);
      pcVar12 = *(char **)(param_3 + 4);
      (**(code **)(param_2[5] + 0x18))(param_2 + 5);
      if (pcVar12 != (char *)param_2[6]) {
        pcVar12 = (char *)param_2[6];
        pcVar5 = *(char **)(param_3 + 4);
        lVar3 = 0x7ffff;
        do {
          if (*pcVar5 != *pcVar12) goto LAB_03f3c2dc;
          if (*pcVar5 == '\0') break;
          bVar1 = lVar3 != 0;
          pcVar12 = pcVar12 + 1;
          pcVar5 = pcVar5 + 1;
          lVar3 = lVar3 + -1;
        } while (bVar1);
      }
      plVar8 = (long *)param_2[2];
      plVar9 = plVar8;
      do {
        plVar4 = plVar9;
        plVar9 = (long *)plVar4[1];
      } while ((long *)plVar4[1] != (long *)0x0);
      if (plVar8 != (long *)0x0) {
        do {
          while( true ) {
            if (*(uint *)(plVar4 + 4) < *(uint *)(plVar8 + 4)) break;
            if (*(uint *)(plVar4 + 4) <= *(uint *)(plVar8 + 4)) {
              (**(code **)(plVar4[5] + 0x18))(plVar4 + 5);
              (**(code **)(plVar4[5] + 0x18))(plVar4 + 5);
              pbVar11 = (byte *)plVar4[6];
              (**(code **)(plVar8[5] + 0x18))(plVar8 + 5);
              if (pbVar11 == (byte *)plVar8[6]) goto LAB_03f3c2fc;
              pbVar11 = (byte *)plVar8[6];
              pbVar6 = (byte *)plVar4[6];
              lVar3 = 0x7ffff;
              while( true ) {
                bVar2 = *pbVar6;
                if (bVar2 != *pbVar11) break;
                if (bVar2 == 0) goto LAB_03f3c2fc;
                bVar1 = lVar3 == 0;
                pbVar11 = pbVar11 + 1;
                pbVar6 = pbVar6 + 1;
                lVar3 = lVar3 + -1;
                if (bVar1) goto LAB_03f3c2fc;
              }
              if (bVar2 < *pbVar11) break;
            }
            plVar8 = (long *)plVar8[2];
            if (plVar8 == (long *)0x0) goto LAB_03f3c2fc;
          }
          plVar8 = (long *)plVar8[1];
        } while (plVar8 != (long *)0x0);
      }
LAB_03f3c2fc:
      lVar3 = FUN_03f3c420(param_2[2]);
      plVar8[2] = lVar3;
      plVar8[1] = param_2[1];
      plVar8[3] = param_2[3];
      (**(code **)(*param_2 + 0x10))(param_2);
      plVar9 = (long *)plVar8[2];
    }
    else {
LAB_03f3c2dc:
      lVar3 = FUN_03f3be90(param_1,param_2[2],param_3);
      param_2[2] = lVar3;
      plVar9 = (long *)param_2[2];
      plVar8 = param_2;
    }
  }
  if ((plVar9 == (long *)0x0) || ((*(byte *)(plVar9 + 3) & 1) != 0)) {
    plVar4 = (long *)plVar8[1];
    plVar9 = plVar8;
  }
  else {
    plVar8[2] = plVar9[1];
    plVar9[1] = (long)plVar8;
    plVar9[3] = plVar8[3];
    plVar8[3] = 0;
    plVar4 = (long *)plVar9[1];
  }
  if (plVar4 != (long *)0x0) {
    uVar7 = plVar4[3];
    plVar8 = plVar4;
    if ((uVar7 & 1) == 0) {
      if ((plVar4[1] != 0) && ((*(byte *)(plVar4[1] + 0x18) & 1) == 0)) {
        plVar9[1] = plVar4[2];
        plVar4[2] = (long)plVar9;
        plVar4[3] = plVar9[3];
        plVar9[3] = 0;
        plVar8 = (long *)plVar4[1];
        if (plVar8 == (long *)0x0) {
          return plVar4;
        }
        uVar7 = plVar8[3];
        plVar9 = plVar4;
      }
    }
    if ((((uVar7 & 1) == 0) && (plVar9[2] != 0)) && ((*(byte *)(plVar9[2] + 0x18) & 1) == 0)) {
      plVar9[3] = plVar9[3] ^ 1;
      plVar8[3] = plVar8[3] ^ 1;
      *(ulong *)(plVar9[2] + 0x18) = *(ulong *)(plVar9[2] + 0x18) ^ 1;
    }
  }
  return plVar9;
}

