
void FUN_02a05300(long *param_1)

{
  int iVar1;
  long *plVar2;
  short sVar3;
  short sVar4;
  long *plVar5;
  undefined8 *puVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  int iVar12;
  long *plVar13;
  uint uVar14;
  undefined8 local_68;
  int local_60;
  undefined8 local_58;
  
  puVar6 = (undefined8 *)param_1[0xb];
  if (0 < (int)param_1[0xd]) {
    iVar12 = 0;
    if ((int)param_1[0xc] <= *(int *)((long)param_1 + 100)) {
      iVar12 = (int)param_1[0xc];
    }
    puVar6 = puVar6 + (*(int *)((long)param_1 + 100) - iVar12);
  }
  plVar10 = (long *)*puVar6;
  if ((int)plVar10[2] != 0) {
    plVar11 = (long *)plVar10[1];
    plVar2 = param_1 + 0xe;
    plVar13 = plVar11 + -1;
    plVar8 = plVar13;
    if ((int)plVar10[2] < 1) {
      plVar8 = (long *)&DAT_fffffffffffffff8;
    }
    uVar14 = *(uint *)((long)param_1 + 0x84);
    if (-1 < (int)uVar14) {
      sVar3 = *(short *)(*plVar8 + 8);
      sVar4 = *(short *)(*plVar8 + 10);
      if (0 < (int)uVar14) {
        uVar14 = uVar14 - 1;
      }
      iVar12 = -((int)uVar14 >> 1);
      uVar14 = uVar14 | 1;
      do {
        local_58 = 0;
        if ((-1 < iVar12) && (iVar12 < (int)param_1[0xd])) {
          iVar7 = 0;
          if ((int)param_1[0xc] <= iVar12 + *(int *)((long)param_1 + 100)) {
            iVar7 = (int)param_1[0xc];
          }
          local_58 = *(undefined8 *)
                      (param_1[0xb] + (long)(iVar12 + (*(int *)((long)param_1 + 100) - iVar7)) * 8);
        }
        local_68 = (long *)CONCAT44((int)sVar3,iVar12);
        local_60 = (int)sVar4;
        FUN_02a03660(plVar2,&local_68);
        iVar12 = iVar12 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
      plVar11 = (long *)plVar10[1];
      plVar13 = plVar11 + -1;
    }
    if (plVar13 != plVar10 + -1) {
      plVar8 = param_1 + 5;
      do {
        FUN_02a039c0(plVar2,(long)*(short *)(*plVar13 + 8));
        plVar5 = (long *)param_1[4];
        if (plVar5 != (long *)0x0) {
          local_68 = plVar2;
          (**(code **)(*plVar5 + 0x38))(plVar5,&local_68);
        }
        local_68 = plVar2;
        (**(code **)(*param_1 + 0x40))(param_1,&local_68);
        FUN_02a03894(plVar2,0,0);
        if ((int)param_1[7] < (int)param_1[10]) {
          plVar5 = (long *)param_1[8];
          if (plVar5 != (long *)0x0) {
            param_1[8] = *plVar5;
          }
          lVar9 = *plVar13;
          plVar5[2] = 0;
          plVar13 = plVar5 + 1;
          *plVar13 = 0;
          *plVar5 = lVar9;
          lVar9 = *plVar8;
          *plVar8 = (long)plVar13;
          plVar5[2] = (long)plVar8;
          *plVar13 = lVar9;
          if (lVar9 != 0) {
            *(long **)(lVar9 + 8) = plVar13;
          }
          *(int *)(param_1 + 7) = (int)param_1[7] + 1;
        }
        plVar11 = (long *)plVar11[1];
        plVar13 = plVar11 + -1;
      } while (plVar13 != plVar10 + -1);
      plVar11 = (long *)plVar10[1];
    }
    while (plVar11 != plVar10) {
      plVar2 = (long *)plVar11[1];
      plVar8 = plVar2;
      if (*plVar11 != 0) {
        *(long **)(*plVar11 + 8) = plVar2;
        plVar8 = (long *)plVar11[1];
      }
      if (plVar8 != (long *)0x0) {
        *plVar8 = *plVar11;
      }
      *plVar11 = 0;
      plVar11[1] = 0;
      *(int *)(plVar10 + 2) = (int)plVar10[2] + -1;
      plVar11[-1] = plVar10[3];
      plVar10[3] = (long)(plVar11 + -1);
      plVar11 = plVar2;
    }
  }
  iVar12 = (int)param_1[0xd];
  if (iVar12 < 1) {
    iVar7 = (int)param_1[0xc];
    if (iVar7 <= iVar12) {
      return;
    }
  }
  else {
    iVar7 = (int)param_1[0xc];
    iVar12 = iVar12 + -1;
    iVar1 = 0;
    if (*(int *)((long)param_1 + 100) + 1 < iVar7) {
      iVar1 = *(int *)((long)param_1 + 100) + 1;
    }
    *(int *)((long)param_1 + 100) = iVar1;
    *(int *)(param_1 + 0xd) = iVar12;
    if (iVar7 <= iVar12) {
      return;
    }
  }
  *(int *)(param_1 + 0xd) = iVar12 + 1;
  iVar12 = *(int *)((long)param_1 + 100) + iVar12;
  iVar1 = 0;
  if (iVar7 <= iVar12) {
    iVar1 = iVar7;
  }
  *(long **)(param_1[0xb] + (long)(iVar12 - iVar1) * 8) = plVar10;
  return;
}

