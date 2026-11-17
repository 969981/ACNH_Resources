
void FUN_02a058a0(long *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  short sVar4;
  short sVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  int iVar14;
  uint uVar15;
  long *plVar16;
  undefined8 local_68;
  int local_60;
  undefined8 local_58;
  
  plVar7 = (long *)param_1[0xb];
  if (param_2 < *(uint *)(param_1 + 0xd)) {
    iVar14 = *(int *)((long)param_1 + 100) + param_2;
    iVar2 = 0;
    if ((int)param_1[0xc] <= iVar14) {
      iVar2 = (int)param_1[0xc];
    }
    plVar7 = plVar7 + (iVar14 - iVar2);
  }
  lVar11 = *plVar7;
  if (*(int *)(lVar11 + 0x10) != 0) {
    plVar13 = *(long **)(lVar11 + 8);
    plVar7 = param_1 + 0xe;
    plVar12 = plVar13 + -1;
    plVar3 = plVar12;
    if (*(int *)(lVar11 + 0x10) < 1) {
      plVar3 = (long *)&DAT_fffffffffffffff8;
    }
    uVar15 = *(uint *)((long)param_1 + 0x84);
    if (-1 < (int)uVar15) {
      sVar4 = *(short *)(*plVar3 + 8);
      sVar5 = *(short *)(*plVar3 + 10);
      if (0 < (int)uVar15) {
        uVar15 = uVar15 - 1;
      }
      iVar14 = -((int)uVar15 >> 1);
      uVar15 = uVar15 | 1;
      do {
        uVar1 = param_2 + iVar14;
        if (((int)uVar1 < 0) || ((int)*(uint *)(param_1 + 0xd) <= (int)uVar1)) {
          local_58 = 0;
        }
        else {
          puVar8 = (undefined8 *)param_1[0xb];
          if (uVar1 < *(uint *)(param_1 + 0xd)) {
            iVar2 = 0;
            if ((int)param_1[0xc] <= (int)(param_2 + iVar14 + *(int *)((long)param_1 + 100))) {
              iVar2 = (int)param_1[0xc];
            }
            puVar8 = puVar8 + (int)(param_2 + iVar14 + (*(int *)((long)param_1 + 100) - iVar2));
          }
          local_58 = *puVar8;
        }
        local_68 = (long *)CONCAT44((int)sVar4,iVar14);
        local_60 = (int)sVar5;
        FUN_02a03660(plVar7,&local_68);
        iVar14 = iVar14 + 1;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
      plVar13 = *(long **)(lVar11 + 8);
      plVar12 = plVar13 + -1;
    }
    if (plVar12 != (long *)(lVar11 + -8)) {
      plVar3 = param_1 + 5;
      do {
        plVar16 = (long *)plVar13[1];
        iVar14 = (int)*(short *)(*plVar12 + 8) - *(int *)((long)param_1 + 0xc);
        if ((iVar14 < 0) || (*(int *)(lVar11 + 0x28) <= iVar14)) {
          FUN_02a039c0(plVar7);
          plVar6 = (long *)param_1[4];
          if (plVar6 != (long *)0x0) {
            local_68 = plVar7;
            (**(code **)(*plVar6 + 0x38))(plVar6,&local_68);
          }
          local_68 = plVar7;
          (**(code **)(*param_1 + 0x40))(param_1,&local_68);
          FUN_02a03894(plVar7,0,0);
          if ((int)param_1[7] < (int)param_1[10]) {
            plVar6 = (long *)param_1[8];
            if (plVar6 != (long *)0x0) {
              param_1[8] = *plVar6;
            }
            lVar10 = *plVar12;
            plVar6[2] = 0;
            plVar9 = plVar6 + 1;
            *plVar9 = 0;
            *plVar6 = lVar10;
            lVar10 = *plVar3;
            *plVar3 = (long)plVar9;
            plVar6[2] = (long)plVar3;
            *plVar9 = lVar10;
            if (lVar10 != 0) {
              *(long **)(lVar10 + 8) = plVar9;
            }
            *(int *)(param_1 + 7) = (int)param_1[7] + 1;
          }
          if (*plVar13 != 0) {
            *(long *)(*plVar13 + 8) = plVar13[1];
          }
          if ((long *)plVar13[1] != (long *)0x0) {
            *(long *)plVar13[1] = *plVar13;
          }
          *plVar13 = 0;
          plVar13[1] = 0;
          *(int *)(lVar11 + 0x10) = *(int *)(lVar11 + 0x10) + -1;
          *plVar12 = *(long *)(lVar11 + 0x18);
          *(long **)(lVar11 + 0x18) = plVar12;
        }
        plVar12 = plVar16 + -1;
        plVar13 = plVar16;
      } while (plVar12 != (long *)(lVar11 + -8));
    }
  }
  return;
}

