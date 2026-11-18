
void FUN_03810650(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  
  iVar1 = *(int *)(param_1 + 0x1b0);
  if (iVar1 != 0) {
    iVar6 = 0;
    lVar5 = *(long *)(param_1 + 0x1b8);
    do {
      plVar9 = (long *)(lVar5 + (long)iVar6 * 0x180);
      lVar3 = plVar9[0x1c];
      if ((lVar3 != 0) && (*(int *)(lVar3 + 0x20) == (int)plVar9[0x1d])) {
        *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | 0x10;
        if ((*(long *)(lVar3 + 0x28) != 0) && (*(long *)(lVar3 + 0x58) != 0)) {
          plVar2 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar3 + 0x28) + 0x30) + 0x18
                                                   ) + 0x20))();
          plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
          (**(code **)(*plVar2 + 0x10))();
          (**(code **)(**(long **)(lVar3 + 0x58) + 0x38))(*(long **)(lVar3 + 0x58),0xffffffff);
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
      }
      lVar10 = lVar5 + (long)iVar6 * 0x180;
      lVar3 = *(long *)(lVar10 + 0xd0);
      if ((lVar3 != 0) && (*(int *)(lVar3 + 0x20) == *(int *)(lVar10 + 0xd8))) {
        *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | 0x10;
        if ((*(long *)(lVar3 + 0x28) != 0) && (*(long *)(lVar3 + 0x58) != 0)) {
          plVar2 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar3 + 0x28) + 0x30) + 0x18
                                                   ) + 0x20))();
          plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
          (**(code **)(*plVar2 + 0x10))();
          (**(code **)(**(long **)(lVar3 + 0x58) + 0x38))(*(long **)(lVar3 + 0x58),0xffffffff);
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
      }
      lVar3 = lVar5 + (long)iVar6 * 0x180;
      lVar4 = *(long *)(lVar3 + 0xc0);
      if ((lVar4 != 0) && (*(int *)(lVar4 + 0x20) == *(int *)(lVar3 + 200))) {
        *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) | 0x10;
        if ((*(long *)(lVar4 + 0x28) != 0) && (*(long *)(lVar4 + 0x58) != 0)) {
          plVar2 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar4 + 0x28) + 0x30) + 0x18
                                                   ) + 0x20))();
          plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
          (**(code **)(*plVar2 + 0x10))();
          (**(code **)(**(long **)(lVar4 + 0x58) + 0x38))(*(long **)(lVar4 + 0x58),0xffffffff);
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
      }
      lVar4 = lVar5 + (long)iVar6 * 0x180;
      lVar7 = *(long *)(lVar4 + 0x50);
      if ((lVar7 != 0) && (*(int *)(lVar7 + 0x20) == *(int *)(lVar4 + 0x58))) {
        *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | 0x10;
        if ((*(long *)(lVar7 + 0x28) != 0) && (*(long *)(lVar7 + 0x58) != 0)) {
          plVar2 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar7 + 0x28) + 0x30) + 0x18
                                                   ) + 0x20))();
          plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
          (**(code **)(*plVar2 + 0x10))();
          (**(code **)(**(long **)(lVar7 + 0x58) + 0x38))(*(long **)(lVar7 + 0x58),0xffffffff);
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
      }
      lVar7 = lVar5 + (long)iVar6 * 0x180;
      lVar8 = *(long *)(lVar7 + 0x40);
      if ((lVar8 != 0) && (*(int *)(lVar8 + 0x20) == *(int *)(lVar7 + 0x48))) {
        *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | 0x10;
        if ((*(long *)(lVar8 + 0x28) != 0) && (*(long *)(lVar8 + 0x58) != 0)) {
          plVar2 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar8 + 0x28) + 0x30) + 0x18
                                                   ) + 0x20))();
          plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
          (**(code **)(*plVar2 + 0x10))();
          (**(code **)(**(long **)(lVar8 + 0x58) + 0x38))(*(long **)(lVar8 + 0x58),0xffffffff);
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
      }
      lVar8 = *plVar9;
      if ((lVar8 != 0) && (*(int *)(lVar8 + 0x20) == (int)plVar9[1])) {
        *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | 0x10;
        if ((*(long *)(lVar8 + 0x28) != 0) && (*(long *)(lVar8 + 0x58) != 0)) {
          plVar2 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar8 + 0x28) + 0x30) + 0x18
                                                   ) + 0x20))();
          plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
          (**(code **)(*plVar2 + 0x10))();
          (**(code **)(**(long **)(lVar8 + 0x58) + 0x38))(*(long **)(lVar8 + 0x58),0xffffffff);
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
      }
      iVar6 = iVar6 + 1;
      plVar9[0x1c] = 0;
      *(undefined4 *)(plVar9 + 0x1d) = 0;
      *(long *)(lVar10 + 0xd0) = 0;
      *(undefined4 *)(lVar10 + 0xd8) = 0;
      *(long *)(lVar3 + 0xc0) = 0;
      *(undefined4 *)(lVar3 + 200) = 0;
      *(long *)(lVar4 + 0x50) = 0;
      *(undefined4 *)(lVar4 + 0x58) = 0;
      *(long *)(lVar7 + 0x40) = 0;
      *(undefined4 *)(lVar7 + 0x48) = 0;
      *plVar9 = 0;
      *(undefined4 *)(plVar9 + 1) = 0;
    } while (iVar1 != iVar6);
  }
  lVar5 = *(long *)(param_1 + 0x1e0);
  if ((lVar5 != 0) && (*(int *)(lVar5 + 0x20) == *(int *)(param_1 + 0x1e8))) {
    *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | 0x10;
    if ((*(long *)(lVar5 + 0x28) != 0) && (*(long *)(lVar5 + 0x58) != 0)) {
      plVar9 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar5 + 0x28) + 0x30) + 0x18) +
                                   0x20))();
      plVar9 = (long *)(**(code **)(*plVar9 + 0x38))();
      (**(code **)(*plVar9 + 0x10))();
      (**(code **)(**(long **)(lVar5 + 0x58) + 0x38))(*(long **)(lVar5 + 0x58),0xffffffff);
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  lVar5 = *(long *)(param_1 + 0x1f0);
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  if ((lVar5 != 0) && (*(int *)(lVar5 + 0x20) == *(int *)(param_1 + 0x1f8))) {
    *(uint *)(lVar5 + 8) = *(uint *)(lVar5 + 8) | 0x10;
    if ((*(long *)(lVar5 + 0x28) != 0) && (*(long *)(lVar5 + 0x58) != 0)) {
      plVar9 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar5 + 0x28) + 0x30) + 0x18) +
                                   0x20))();
      plVar9 = (long *)(**(code **)(*plVar9 + 0x38))();
      (**(code **)(*plVar9 + 0x10))();
      (**(code **)(**(long **)(lVar5 + 0x58) + 0x38))(*(long **)(lVar5 + 0x58),0xffffffff);
      (**(code **)(*plVar9 + 0x18))(plVar9);
    }
  }
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  return;
}

