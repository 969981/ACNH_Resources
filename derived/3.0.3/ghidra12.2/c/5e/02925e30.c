
void FUN_02925e30(long param_1,int param_2,long *param_3,int param_4,long *param_5)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  
  if ((param_3 != param_5) || (param_2 != param_4)) {
    plVar1 = (long *)(param_1 + 8);
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    do {
      iVar8 = *(int *)((long)param_3 + 0xc) + param_2;
      iVar3 = 0;
      if ((int)param_3[1] <= iVar8) {
        iVar3 = (int)param_3[1];
      }
      uVar7 = FUN_02925f80(param_1,*param_3 + (long)(iVar8 - iVar3) * 0x28);
      if ((uVar7 & 1) != 0) {
        iVar3 = *(int *)((long)param_3 + 0xc) + param_2;
        iVar8 = *(int *)(param_1 + 0x18);
        iVar4 = 0;
        if ((int)param_3[1] <= iVar3) {
          iVar4 = (int)param_3[1];
        }
        iVar11 = *(int *)(param_1 + 0x30);
        if (iVar8 < iVar11) {
          lVar12 = *param_3;
          plVar9 = *(long **)(param_1 + 0x20);
          if (plVar9 != (long *)0x0) {
            *(long *)(param_1 + 0x20) = *plVar9;
          }
          *plVar9 = (long)puVar2;
          lVar12 = lVar12 + (long)(iVar3 - iVar4) * 0x28;
          plVar9[1] = *(long *)(lVar12 + 8);
          lVar5 = *(long *)(lVar12 + 0x10);
          lVar6 = *(long *)(lVar12 + 0x18);
          lVar12 = *(long *)(lVar12 + 0x20);
          plVar10 = plVar9 + 5;
          *plVar10 = 0;
          plVar9[6] = 0;
          plVar9[3] = lVar6;
          plVar9[4] = lVar12;
          plVar9[2] = lVar5;
          lVar12 = *plVar1;
          *plVar1 = (long)plVar10;
          *plVar10 = lVar12;
          plVar9[6] = (long)plVar1;
          if (lVar12 != 0) {
            *(long **)(lVar12 + 8) = plVar10;
          }
          iVar8 = *(int *)(param_1 + 0x18) + 1;
          iVar11 = *(int *)(param_1 + 0x30);
          *(int *)(param_1 + 0x18) = iVar8;
        }
        if (iVar11 <= iVar8) {
          return;
        }
      }
      param_2 = param_2 + 1;
    } while (param_3 != param_5 || param_2 != param_4);
  }
  return;
}

