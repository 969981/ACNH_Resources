
void FUN_002ea550(long param_1,int param_2,long param_3,undefined8 param_4,undefined1 param_5)

{
  int *piVar1;
  long *plVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  long local_70 [2];
  
  piVar4 = (int *)(param_1 + 0x10);
  if (*piVar4 != param_2) {
    piVar1 = (int *)(param_1 + 0x658);
    if (*(int *)(param_1 + 0x658) == param_2) {
      piVar4 = piVar1;
    }
    else {
      piVar3 = (int *)(param_1 + 0xca0);
      if (*(int *)(param_1 + 0xca0) == param_2) {
        piVar4 = piVar3;
      }
      else {
        piVar5 = (int *)(param_1 + 0x12e8);
        if (*(int *)(param_1 + 0x12e8) == param_2) {
          piVar4 = piVar5;
        }
        else {
          FUN_002e9700(local_70,param_1,param_2);
          if ((int)local_70[0] != 0) {
            return;
          }
          if ((((*piVar4 != param_2) && (piVar4 = piVar1, *piVar1 != param_2)) &&
              (piVar4 = piVar3, *piVar3 != param_2)) && (piVar4 = piVar5, *piVar5 != param_2)) {
            return;
          }
        }
      }
    }
  }
  piVar1 = piVar4 + 2;
  if (*(int **)(piVar4 + 4) != piVar1) {
    piVar3 = *(int **)(piVar4 + 4);
    do {
      piVar5 = *(int **)(piVar3 + 2);
      local_70[0] = 0;
      FUN_002282f0(local_70);
      lVar6 = local_70[0] - *(long *)(piVar3 + 10);
      plVar2 = (long *)FUN_00228380();
      if (((*plVar2 * 500 < lVar6) && (*(short *)((long)piVar3 + 0x22) < 0)) &&
         (*(ushort *)(piVar3 + 9) - 7 < 2)) {
        FUN_00223704(piVar1,piVar3);
        FUN_002236e0(piVar4 + 8,piVar4 + 8,(long)piVar3 + (long)piVar4[0xd]);
      }
      piVar3 = piVar5;
    } while (piVar5 != piVar1);
    for (piVar3 = *(int **)(piVar4 + 4); piVar3 != piVar1; piVar3 = *(int **)(piVar3 + 2)) {
      if (*(long *)(piVar3 + 4) == param_3) {
        *(undefined8 *)(piVar3 + 6) = param_4;
        *(undefined1 *)(piVar3 + 8) = param_5;
        if ((short)piVar3[9] != 7) {
          local_70[0] = 0;
          *(short *)((long)piVar3 + 0x22) = *(short *)((long)piVar3 + 0x22) + 1;
          *(undefined2 *)(piVar3 + 9) = 1;
          FUN_002282f0(local_70);
          *(long *)(piVar3 + 10) = local_70[0];
          if (*(short *)((long)piVar3 + 0x22) == 0) {
            FUN_00223704(piVar1,piVar3);
            FUN_002236e0(piVar4 + 8,piVar4 + 8,(long)piVar3 + (long)piVar4[0xd]);
            return;
          }
          return;
        }
        *(undefined4 *)((long)piVar3 + 0x22) = 0x10001;
        goto LAB_002ea6e4;
      }
    }
  }
  if (piVar4[0xc] != 0) {
    lVar6 = FUN_002237a8(piVar4 + 8);
    piVar3 = (int *)0x0;
    if (lVar6 != 0) {
      piVar3 = (int *)(lVar6 - piVar4[0xd]);
    }
    piVar3[8] = 0;
    piVar3[9] = 0;
    piVar3[10] = 0;
    piVar3[0xb] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
    piVar3[6] = 0;
    piVar3[7] = 0;
    FUN_002236bc(piVar1,piVar1,piVar3);
    *(long *)(piVar3 + 4) = param_3;
    *(undefined8 *)(piVar3 + 6) = param_4;
    *(undefined1 *)(piVar3 + 8) = param_5;
    *(undefined4 *)((long)piVar3 + 0x22) = 0x10001;
    *(undefined1 *)((long)piVar3 + 0x26) = 0;
LAB_002ea6e4:
    local_70[0] = 0;
    FUN_002282f0(local_70);
    *(long *)(piVar3 + 10) = local_70[0];
  }
  return;
}

