
void FUN_0219c200(ulong *param_1,long *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  int iVar7;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  iVar1 = FUN_006bd550(param_2[1],0);
  puVar6 = (ulong *)param_1[1];
  if (puVar6 != param_1) {
    puVar4 = puVar6 + -1;
    puVar3 = puVar6;
    do {
      if (((int)puVar3[-1] == iVar1) && ((uint)*(ushort *)((long)puVar4 + 4) == (param_3 & 0xffff)))
      {
        if (*puVar3 != 0) {
          *(ulong *)(*puVar3 + 8) = puVar3[1];
        }
        if ((ulong *)puVar3[1] != (ulong *)0x0) {
          *(ulong *)puVar3[1] = *puVar3;
        }
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar6 = param_1 + 2;
        *(int *)puVar6 = (int)*puVar6 + -1;
        *puVar4 = param_1[3];
        param_1[3] = (ulong)puVar4;
        if ((int)param_1[5] <= (int)*puVar6) {
          return;
        }
        param_1[3] = *puVar4;
        puVar4[2] = 0;
        *puVar4 = CONCAT44(param_3,iVar1) & 0xffffffffffff;
        puVar4[1] = 0;
        uVar5 = *param_1;
        *param_1 = (ulong)puVar3;
        *puVar3 = uVar5;
        puVar3[1] = (ulong)param_1;
        goto joined_r0x0219c300;
      }
      puVar3 = (ulong *)puVar3[1];
      puVar4 = puVar3 + -1;
    } while (puVar4 != param_1 + -1);
  }
  iVar2 = (int)param_1[2];
  iVar7 = (int)param_1[5];
  if (iVar7 <= iVar2) {
    if (iVar2 < 1) {
      puVar6 = (ulong *)0x0;
    }
    if ((puVar6 != (ulong *)0x0) && (puVar6 + -1 != (ulong *)0x0)) {
      if (*puVar6 != 0) {
        *(ulong *)(*puVar6 + 8) = puVar6[1];
      }
      if ((ulong *)puVar6[1] != (ulong *)0x0) {
        *(ulong *)puVar6[1] = *puVar6;
      }
      *puVar6 = 0;
      puVar6[1] = 0;
      *(int *)(param_1 + 2) = (int)param_1[2] + -1;
      puVar6[-1] = param_1[3];
      param_1[3] = (ulong)(puVar6 + -1);
      iVar2 = (int)param_1[2];
      iVar7 = (int)param_1[5];
    }
  }
  if (iVar2 < iVar7) {
    puVar6 = (ulong *)param_1[3];
    if (puVar6 != (ulong *)0x0) {
      param_1[3] = *puVar6;
    }
    puVar6[2] = 0;
    *puVar6 = CONCAT44(param_3,iVar1) & 0xffffffffffff;
    puVar3 = puVar6 + 1;
    *puVar3 = 0;
    uVar5 = *param_1;
    *param_1 = (ulong)puVar3;
    puVar6[2] = (ulong)param_1;
    *puVar3 = uVar5;
joined_r0x0219c300:
    if (uVar5 != 0) {
      *(ulong **)(uVar5 + 8) = puVar3;
    }
    *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  }
  return;
}

