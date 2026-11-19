
void FUN_03883e30(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long local_78;
  undefined4 local_70;
  long local_68;
  
  if ((*(char *)(param_1 + 0x88) == '\0' && *(char *)(param_1 + 0x89) != '\0') &&
     (lVar9 = *(long *)(DAT_05ae6a60 + 8), 0 < *(int *)(lVar9 + 0x60))) {
    plVar2 = *(long **)(DAT_05ae6a60 + 0x68);
    lVar3 = (**(code **)(*plVar2 + 0xd8))(plVar2,plVar2 + 2);
    plVar2 = *(long **)(lVar3 + 8);
    plVar4 = *(long **)(DAT_05ae6a60 + 0x68);
    piVar5 = (int *)(**(code **)(*plVar4 + 0xd8))(plVar4,plVar4 + 2);
    plVar4 = (long *)(*(long *)(piVar5 + 2) + (long)*piVar5 * 8);
    if ((plVar2 != plVar4) && (lVar3 = lVar9 + 0x50, *(long *)(lVar9 + 0x58) != lVar3)) {
      do {
        if (*(long *)(lVar9 + 0x58) != lVar3) {
          lVar10 = *plVar2;
          lVar7 = *(long *)(lVar9 + 0x58);
          do {
            lVar1 = *(long *)(lVar7 + 8);
            local_70 = 3;
            puVar6 = (undefined8 *)(*(long *)(lVar7 + 0x10) + 0x40);
            local_78 = lVar10;
            local_68 = lVar10 + 0x11;
            (**(code **)*puVar6)(puVar6,&local_78);
            lVar7 = lVar1;
          } while (lVar1 != lVar3);
        }
        plVar2 = plVar2 + 1;
      } while (plVar2 != plVar4);
    }
  }
  *(undefined1 *)(param_1 + 0xf0) = 0;
  *(undefined2 *)(param_1 + 0x88) = 1;
  plVar2 = *(long **)(param_1 + 200);
  while (plVar2 != (long *)(param_1 + 0xc0)) {
    plVar4 = (long *)plVar2[1];
    plVar8 = plVar4;
    if (*plVar2 != 0) {
      *(long **)(*plVar2 + 8) = plVar4;
      plVar8 = (long *)plVar2[1];
    }
    if (plVar8 != (long *)0x0) {
      *plVar8 = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xd0) + -1;
    plVar2[-3] = *(long *)(param_1 + 0xd8);
    *(long **)(param_1 + 0xd8) = plVar2 + -3;
    plVar2 = plVar4;
  }
  return;
}

