
void FUN_03264a78(int *param_1,int *param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  int *piVar8;
  
  puVar2 = PTR_DAT_04bb5ce0;
  if (((int)param_3 < 0) || (*param_2 <= (int)param_3)) {
    *param_1 = 0;
    piVar7 = (int *)PTR_DAT_04bb37e0;
  }
  else {
    piVar8 = *(int **)(*(long *)(param_2 + 2) + (ulong)param_3 * 8);
    if (*piVar8 == 1) {
      piVar7 = piVar8 + 1;
      puVar1 = PTR_DAT_04bb37e0;
      if (*(long *)PTR_DAT_04bb5ce0 != 0) {
        puVar1 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe70);
      }
      uVar3 = FUN_0277d7b4(piVar7,puVar1);
      puVar1 = PTR_DAT_04bb37e0;
      if ((uVar3 & 1) == 0) {
        lVar6 = *(long *)puVar2;
        puVar4 = PTR_DAT_04bb37e0;
        if (lVar6 != 0) {
          if (*(char *)(lVar6 + 0xe9e) != '\0') {
            puVar4 = (undefined *)(lVar6 + 0xe94);
          }
        }
        uVar3 = FUN_0277d7b4(piVar7,puVar4);
        if ((uVar3 & 1) == 0) {
          lVar6 = *(long *)puVar2;
          if (lVar6 != 0) {
            puVar1 = (undefined *)(lVar6 + 0xe54);
          }
          uVar3 = FUN_0277d7b4(piVar7,puVar1);
          if ((uVar3 & 1) == 0) {
            iVar5 = *piVar8;
          }
          else {
            iVar5 = 7;
          }
        }
        else {
          iVar5 = 6;
        }
      }
      else {
        iVar5 = 5;
      }
      *param_1 = iVar5;
    }
    else {
      *param_1 = *piVar8;
      piVar7 = piVar8 + 1;
    }
  }
  iVar5 = piVar7[1];
  param_1[1] = *piVar7;
  param_1[2] = iVar5;
  return;
}

