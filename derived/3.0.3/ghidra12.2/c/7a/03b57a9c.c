
undefined8 FUN_03b57a9c(undefined4 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  bool bVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  uint *puVar8;
  long *plVar9;
  char *pcVar10;
  undefined8 uVar11;
  int local_54;
  
  piVar7 = (int *)*param_2;
  if (piVar7 == (int *)0x0) {
    return 0;
  }
  if ((*piVar7 == 0x56415742) &&
     (((((char)(*(ushort *)(piVar7 + 1) >> 8) != -1 || ((*(ushort *)(piVar7 + 1) & 0xff) != 0xfe))
       && (*(short *)((long)piVar7 + 6) == 1)) && (*(short *)((long)piVar7 + 0xe) != 0)))) {
    iVar4 = FUN_02a0c760(*(undefined1 *)(param_2 + 2));
    local_54 = 0;
    if (iVar4 != -1) {
      local_54 = iVar4;
    }
    iVar4 = FUN_03b471ec(&local_54);
    if (iVar4 == 0) {
      uVar5 = 1;
      bVar2 = false;
    }
    else {
      if (iVar4 != 1) {
        return 0;
      }
      uVar5 = 2;
      bVar2 = true;
    }
    plVar9 = (long *)param_2[4];
    if ((plVar9 == (long *)0x0) &&
       (((*(byte *)((long)param_2 + 0x11) >> 4 & 1) == 0 ||
        (plVar9 = (long *)param_2[3], plVar9 == (long *)0x0)))) {
      if (*(char *)(DAT_05aebb88 + 1) == '\0') {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        if (*(long *)(DAT_05aebb88 + 0x1a8) != 0) {
          uVar6 = (undefined4)(*(ulong *)(*(long *)(DAT_05aebb88 + 0x1a8) + 0xe8) >> 1);
        }
      }
      piVar7 = (int *)*param_2;
      if ((*(byte *)((long)param_2 + 0x11) >> 5 & 1) == 0) {
        pcVar10 = (char *)0x0;
        if (param_2[1] != 0) {
          puVar8 = (uint *)(param_2[1] + 0x24);
          pcVar10 = (char *)((ulong)*puVar8 + (long)puVar8);
        }
      }
      else {
        pcVar10 = "<NoSound>";
      }
      if ((piVar7 != (int *)0x0) && (*piVar7 == 0x56415742)) {
        uVar11 = param_2[5];
        if ((((char)(*(ushort *)(piVar7 + 1) >> 8) != -1) ||
            ((*(ushort *)(piVar7 + 1) & 0xff) != 0xfe)) &&
           ((*(short *)((long)piVar7 + 6) == 1 && (*(short *)((long)piVar7 + 0xe) != 0)))) {
          *(undefined1 *)((long)param_1 + 0x42) = 1;
          *(undefined1 *)(param_1 + 2) = 1;
          *(int **)(param_1 + 4) = piVar7;
          *(int **)(param_1 + 6) = piVar7 + 4;
          uVar3 = *(undefined2 *)((long)piVar7 + 0xe);
          *param_1 = uVar5;
          *(undefined2 *)(param_1 + 0xc) = uVar3;
          *(char **)(param_1 + 8) = pcVar10;
          *(undefined8 *)(param_1 + 10) = uVar11;
          if (!bVar2) {
            return 1;
          }
          uVar3 = 2;
          param_1[0xe] = 0x2000;
          param_1[0xf] = uVar6;
          goto LAB_03b57c80;
        }
      }
    }
    else {
      piVar7 = (int *)(**(code **)(*plVar9 + 0x28))(plVar9);
      if ((*(byte *)((long)param_2 + 0x11) >> 5 & 1) == 0) {
        if (param_2[1] == 0) {
          pcVar10 = (char *)0x0;
        }
        else {
          puVar8 = (uint *)(param_2[1] + 0x24);
          pcVar10 = (char *)((ulong)*puVar8 + (long)puVar8);
        }
      }
      else {
        pcVar10 = "<NoSound>";
      }
      uVar11 = param_2[5];
      uVar5 = (**(code **)(*plVar9 + 0x30))(plVar9);
      uVar6 = (**(code **)(*plVar9 + 0x38))(plVar9);
      uVar3 = (**(code **)(*plVar9 + 0x40))(plVar9);
      if ((((piVar7 != (int *)0x0) && (*piVar7 == 0x56415742)) &&
          (((char)(*(ushort *)(piVar7 + 1) >> 8) != -1 || ((*(ushort *)(piVar7 + 1) & 0xff) != 0xfe)
           ))) && ((*(short *)((long)piVar7 + 6) == 1 && (*(short *)((long)piVar7 + 0xe) != 0)))) {
        *(undefined1 *)((long)param_1 + 0x42) = 1;
        *(undefined1 *)(param_1 + 2) = 1;
        *(int **)(param_1 + 4) = piVar7;
        *(int **)(param_1 + 6) = piVar7 + 4;
        uVar1 = *(undefined2 *)((long)piVar7 + 0xe);
        *param_1 = 2;
        param_1[0xe] = uVar5;
        param_1[0xf] = uVar6;
        *(undefined2 *)(param_1 + 0xc) = uVar1;
        *(char **)(param_1 + 8) = pcVar10;
        *(undefined8 *)(param_1 + 10) = uVar11;
LAB_03b57c80:
        *(undefined2 *)(param_1 + 0x10) = uVar3;
        return 1;
      }
    }
  }
  return 0;
}

