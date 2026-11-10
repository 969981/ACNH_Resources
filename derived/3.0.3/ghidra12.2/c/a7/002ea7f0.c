
void FUN_002ea7f0(long param_1,int param_2,long param_3,short param_4)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  long lVar9;
  long local_60 [2];
  
  piVar7 = (int *)(param_1 + 0x10);
  if (*piVar7 != param_2) {
    piVar1 = (int *)(param_1 + 0x658);
    if (*(int *)(param_1 + 0x658) == param_2) {
      piVar7 = piVar1;
    }
    else {
      piVar6 = (int *)(param_1 + 0xca0);
      if (*(int *)(param_1 + 0xca0) == param_2) {
        piVar7 = piVar6;
      }
      else {
        piVar8 = (int *)(param_1 + 0x12e8);
        if (*(int *)(param_1 + 0x12e8) == param_2) {
          piVar7 = piVar8;
        }
        else {
          iVar4 = *(int *)(param_1 + 0x1930);
          if (iVar4 != 0) {
            uVar5 = *(uint *)(param_1 + 0x1934);
            do {
              iVar2 = *(int *)(param_1 + (ulong)(uVar5 & 7) * 4 + 0x1938);
              if (iVar2 != 0 && iVar2 == param_2) {
                return;
              }
              iVar4 = iVar4 + -1;
              uVar5 = uVar5 + 1;
            } while (iVar4 != 0);
          }
          FUN_002e9700(local_60,param_1,param_2);
          if ((int)local_60[0] != 0) {
            return;
          }
          if ((((*piVar7 != param_2) && (piVar7 = piVar1, *piVar1 != param_2)) &&
              (piVar7 = piVar6, *piVar6 != param_2)) && (piVar7 = piVar8, *piVar8 != param_2)) {
            return;
          }
        }
      }
    }
  }
  piVar1 = piVar7 + 2;
  if (*(int **)(piVar7 + 4) != piVar1) {
    piVar6 = *(int **)(piVar7 + 4);
    do {
      piVar8 = *(int **)(piVar6 + 2);
      local_60[0] = 0;
      FUN_002282f0(local_60);
      lVar9 = local_60[0] - *(long *)(piVar6 + 10);
      plVar3 = (long *)FUN_00228380();
      if (((*plVar3 * 500 < lVar9) && (*(short *)((long)piVar6 + 0x22) < 0)) &&
         (*(ushort *)(piVar6 + 9) - 7 < 2)) {
        FUN_00223704(piVar1,piVar6);
        FUN_002236e0(piVar7 + 8,piVar7 + 8,(long)piVar6 + (long)piVar7[0xd]);
      }
      piVar6 = piVar8;
    } while (piVar8 != piVar1);
    for (piVar6 = *(int **)(piVar7 + 4); piVar6 != piVar1; piVar6 = *(int **)(piVar6 + 2)) {
      if (*(long *)(piVar6 + 4) == param_3) {
        if ((param_4 != 8) || ((short)piVar6[9] != 7)) {
          *(short *)(piVar6 + 9) = param_4;
          local_60[0] = 0;
          *(short *)((long)piVar6 + 0x22) = *(short *)((long)piVar6 + 0x22) + -1;
          FUN_002282f0(local_60);
          *(long *)(piVar6 + 10) = local_60[0];
          if (*(short *)((long)piVar6 + 0x22) == 0) {
            FUN_00223704(piVar1,piVar6);
            FUN_002236e0(piVar7 + 8,piVar7 + 8,(long)piVar6 + (long)piVar7[0xd]);
            return;
          }
          return;
        }
        *(undefined2 *)(piVar6 + 9) = 8;
        goto LAB_002ea984;
      }
    }
  }
  if (piVar7[0xc] != 0) {
    lVar9 = FUN_002237a8(piVar7 + 8);
    piVar6 = (int *)0x0;
    if (lVar9 != 0) {
      piVar6 = (int *)(lVar9 - piVar7[0xd]);
    }
    piVar6[8] = 0;
    piVar6[9] = 0;
    piVar6[10] = 0;
    piVar6[0xb] = 0;
    piVar6[4] = 0;
    piVar6[5] = 0;
    piVar6[6] = 0;
    piVar6[7] = 0;
    FUN_002236bc(piVar1,piVar1,piVar6);
    *(long *)(piVar6 + 4) = param_3;
    piVar6[6] = 0;
    piVar6[7] = 0;
    *(short *)(piVar6 + 9) = param_4;
    *(undefined2 *)((long)piVar6 + 0x22) = 0xffff;
    *(undefined1 *)((long)piVar6 + 0x26) = 0;
LAB_002ea984:
    local_60[0] = 0;
    FUN_002282f0(local_60);
    *(long *)(piVar6 + 10) = local_60[0];
  }
  return;
}

